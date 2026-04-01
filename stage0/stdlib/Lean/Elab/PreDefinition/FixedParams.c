// Lean compiler output
// Module: Lean.Elab.PreDefinition.FixedParams
// Imports: public import Lean.Elab.PreDefinition.Basic import Init.Omega
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_range(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_setVarying___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "❌"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object*);
static const lean_closure_object l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_FixedParams_Info_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_getParamRevDeps___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getParamRevDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getParamRevDeps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getParamRevDeps___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26_spec__27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__16(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 131, 105, 217, 25, 82, 145, 102)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "getFixedParams: notFixed "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ":\nIn "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\ntoo few arguments for "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__13;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__14_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =/= "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__16_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__17;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " not matched"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__18_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.PreDefinition.FixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamsInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 185, .m_capacity = 185, .m_length = 184, .m_data = "assertion violation: params.size = arities[callerIdx]!\n\n      -- TODO: transform is overkill, a simple visit-all-subexpression that takes applications\n      -- as whole suffices\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getFixedParams:"};
static const lean_object* l_Lean_Elab_getFixedParamsInfo___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamsInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26_spec__27(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numFixed"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "perms"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "revDeps"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprFixedParamPerms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprFixedParamPerms_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprFixedParamPerms___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprFixedParamPerms = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamPerms"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: firstPerm[firstParamIdx]!.isSome\n            "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Incomplete paramInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: paramInfo[0]! = some paramIdx\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "assertion violation: xs.size = paramInfos.size\n\n    "};
static const lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.forallTelescopeImpl.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: type.isForall\n      "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "assertion violation: xs'.size = 1\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < xs.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "assertion violation: !( __do_lift._@.Lean.Elab.PreDefinition.FixedParams.75993854._hygCtx._hyg.102.0 ).hasLooseBVars\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateForall.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: ys.size = 1\n          "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateForall"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: xs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateLambda.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "assertion violation: ys.size = 1\n            "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__2;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateLambda"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.pickFixed.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < ys.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.pickFixed"};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: xs.size = perm.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2;
static const lean_array_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.buildArgs.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "FixedParams.buildArgs: too few varying args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "FixedParams.buildArgs: too few fixed args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.buildArgs"};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: fixedArgs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.FixedParamPerms.erase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: paramIdx < mapping.size\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: fixedParamPerms.numFixed  = xs.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__1;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "assertion violation: toErase.size = fixedParamPerms.perms.size\n  -- Calculate a mask on the fixed parameters of variables to erase\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__2 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__2_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__3;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 41, .m_data = "assertion violation: xs.all (·.isFVar)\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__4 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__4_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "FixedParams"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 87, 32, 251, 113, 133, 158, 252)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(140, 135, 17, 208, 62, 57, 192, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 225, 135, 56, 213, 49, 154, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 208, 124, 62, 167, 39, 159, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 118, 73, 0, 78, 121, 48, 169)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 144, 90, 0, 164, 70, 155, 205)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(80, 80, 200, 145, 119, 202, 92, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 27, 9, 206, 200, 16, 168, 251)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(791000795) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(47, 149, 235, 94, 82, 130, 210, 117)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 33, 115, 184, 239, 184, 190, 148)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 81, 13, 137, 134, 8, 99, 98)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(225, 58, 56, 207, 96, 242, 57, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object* v_revDeps_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_bs_4_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; size_t v___x_15_; size_t v___x_16_; lean_object* v___x_17_; 
v_v_6_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_7_);
v___x_9_ = lean_array_get_size(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = lean_array_get_size(v_revDeps_1_);
v___x_11_ = lean_box(0);
v___x_12_ = lean_mk_array(v___x_10_, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_mk_array(v___x_9_, v___x_13_);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_3_, v___x_15_);
v___x_17_ = lean_array_uset(v_bs_x27_8_, v_i_3_, v___x_14_);
v_i_3_ = v___x_16_;
v_bs_4_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object* v_revDeps_19_, lean_object* v_sz_20_, lean_object* v_i_21_, lean_object* v_bs_22_){
_start:
{
size_t v_sz_boxed_23_; size_t v_i_boxed_24_; lean_object* v_res_25_; 
v_sz_boxed_23_ = lean_unbox_usize(v_sz_20_);
lean_dec(v_sz_20_);
v_i_boxed_24_ = lean_unbox_usize(v_i_21_);
lean_dec(v_i_21_);
v_res_25_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_19_, v_sz_boxed_23_, v_i_boxed_24_, v_bs_22_);
lean_dec_ref(v_revDeps_19_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object* v_revDeps_26_){
_start:
{
size_t v_sz_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_sz_27_ = lean_array_size(v_revDeps_26_);
v___x_28_ = ((size_t)0ULL);
lean_inc_ref(v_revDeps_26_);
v___x_29_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_26_, v_sz_27_, v___x_28_, v_revDeps_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v_revDeps_26_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object* v_i_31_, lean_object* v_as_32_, lean_object* v_i_33_, lean_object* v_j_34_, lean_object* v_bs_35_){
_start:
{
lean_object* v_zero_36_; uint8_t v_isZero_37_; 
v_zero_36_ = lean_unsigned_to_nat(0u);
v_isZero_37_ = lean_nat_dec_eq(v_i_33_, v_zero_36_);
if (v_isZero_37_ == 1)
{
lean_dec(v_j_34_);
lean_dec(v_i_33_);
return v_bs_35_;
}
else
{
lean_object* v_one_38_; lean_object* v_n_39_; lean_object* v___y_41_; lean_object* v___x_45_; 
v_one_38_ = lean_unsigned_to_nat(1u);
v_n_39_ = lean_nat_sub(v_i_33_, v_one_38_);
lean_dec(v_i_33_);
v___x_45_ = lean_array_fget(v_as_32_, v_j_34_);
if (lean_obj_tag(v___x_45_) == 0)
{
v___y_41_ = v___x_45_;
goto v___jp_40_;
}
else
{
lean_object* v_val_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_55_; 
v_val_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_55_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_55_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_val_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_55_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
lean_inc(v_j_34_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v_j_34_);
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_j_34_);
v___x_51_ = v_reuseFailAlloc_54_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_array_set(v_val_46_, v_i_31_, v___x_51_);
v___x_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___y_41_ = v___x_53_;
goto v___jp_40_;
}
}
}
v___jp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_nat_add(v_j_34_, v_one_38_);
lean_dec(v_j_34_);
v___x_43_ = lean_array_push(v_bs_35_, v___y_41_);
v_i_33_ = v_n_39_;
v_j_34_ = v___x_42_;
v_bs_35_ = v___x_43_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object* v_i_56_, lean_object* v_as_57_, lean_object* v_i_58_, lean_object* v_j_59_, lean_object* v_bs_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_56_, v_as_57_, v_i_58_, v_j_59_, v_bs_60_);
lean_dec_ref(v_as_57_);
lean_dec(v_i_56_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(lean_object* v_as_62_, lean_object* v_i_63_, lean_object* v_j_64_, lean_object* v_bs_65_){
_start:
{
lean_object* v_zero_66_; uint8_t v_isZero_67_; 
v_zero_66_ = lean_unsigned_to_nat(0u);
v_isZero_67_ = lean_nat_dec_eq(v_i_63_, v_zero_66_);
if (v_isZero_67_ == 1)
{
lean_dec(v_j_64_);
lean_dec(v_i_63_);
return v_bs_65_;
}
else
{
lean_object* v_one_68_; lean_object* v_n_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_one_68_ = lean_unsigned_to_nat(1u);
v_n_69_ = lean_nat_sub(v_i_63_, v_one_68_);
lean_dec(v_i_63_);
v___x_70_ = lean_array_fget_borrowed(v_as_62_, v_j_64_);
v___x_71_ = lean_array_get_size(v___x_70_);
v___x_72_ = lean_mk_empty_array_with_capacity(v___x_71_);
v___x_73_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_j_64_, v___x_70_, v___x_71_, v_zero_66_, v___x_72_);
v___x_74_ = lean_nat_add(v_j_64_, v_one_68_);
lean_dec(v_j_64_);
v___x_75_ = lean_array_push(v_bs_65_, v___x_73_);
v_i_63_ = v_n_69_;
v_j_64_ = v___x_74_;
v_bs_65_ = v___x_75_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object* v_as_77_, lean_object* v_i_78_, lean_object* v_j_79_, lean_object* v_bs_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_as_77_, v_i_78_, v_j_79_, v_bs_80_);
lean_dec_ref(v_as_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object* v_info_82_){
_start:
{
lean_object* v_graph_83_; lean_object* v_revDeps_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_95_; 
v_graph_83_ = lean_ctor_get(v_info_82_, 0);
v_revDeps_84_ = lean_ctor_get(v_info_82_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v_info_82_);
if (v_isSharedCheck_95_ == 0)
{
v___x_86_ = v_info_82_;
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_revDeps_84_);
lean_inc(v_graph_83_);
lean_dec(v_info_82_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_88_ = lean_array_get_size(v_graph_83_);
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_mk_empty_array_with_capacity(v___x_88_);
v___x_91_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_graph_83_, v___x_88_, v___x_89_, v___x_90_);
lean_dec_ref(v_graph_83_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_91_);
v___x_93_ = v___x_86_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v_revDeps_84_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object* v_i_96_, lean_object* v_as_97_, lean_object* v_i_98_, lean_object* v_j_99_, lean_object* v_inv_100_, lean_object* v_bs_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_96_, v_as_97_, v_i_98_, v_j_99_, v_bs_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object* v_i_103_, lean_object* v_as_104_, lean_object* v_i_105_, lean_object* v_j_106_, lean_object* v_inv_107_, lean_object* v_bs_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(v_i_103_, v_as_104_, v_i_105_, v_j_106_, v_inv_107_, v_bs_108_);
lean_dec_ref(v_as_104_);
lean_dec(v_i_103_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object* v_as_110_, lean_object* v_i_111_, lean_object* v_j_112_, lean_object* v_inv_113_, lean_object* v_bs_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_as_110_, v_i_111_, v_j_112_, v_bs_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object* v_as_116_, lean_object* v_i_117_, lean_object* v_j_118_, lean_object* v_inv_119_, lean_object* v_bs_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(v_as_116_, v_i_117_, v_j_118_, v_inv_119_, v_bs_120_);
lean_dec_ref(v_as_116_);
return v_res_121_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Array_instInhabited(lean_box(0));
return v___x_122_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object* v_callerIdx_123_, lean_object* v_paramIdx_124_, lean_object* v_info_125_){
_start:
{
lean_object* v_graph_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_graph_126_ = lean_ctor_get(v_info_125_, 0);
v___x_127_ = lean_box(0);
v___x_128_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_129_ = lean_array_get_borrowed(v___x_128_, v_graph_126_, v_callerIdx_123_);
v___x_130_ = lean_array_get_borrowed(v___x_127_, v___x_129_, v_paramIdx_124_);
if (lean_obj_tag(v___x_130_) == 0)
{
uint8_t v___x_131_; 
v___x_131_ = 0;
return v___x_131_;
}
else
{
uint8_t v___x_132_; 
v___x_132_ = 1;
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object* v_callerIdx_133_, lean_object* v_paramIdx_134_, lean_object* v_info_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_133_, v_paramIdx_134_, v_info_135_);
lean_dec_ref(v_info_135_);
lean_dec(v_paramIdx_134_);
lean_dec(v_callerIdx_133_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object* v_upperBound_138_, lean_object* v_next_139_, lean_object* v_funIdx_140_, lean_object* v_paramIdx_141_, lean_object* v_a_142_, lean_object* v_b_143_){
_start:
{
lean_object* v_a_145_; uint8_t v___x_149_; 
v___x_149_ = lean_nat_dec_lt(v_a_142_, v_upperBound_138_);
if (v___x_149_ == 0)
{
lean_dec(v_a_142_);
lean_dec(v_paramIdx_141_);
return v_b_143_;
}
else
{
lean_object* v_graph_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_graph_150_ = lean_ctor_get(v_b_143_, 0);
v___x_151_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_152_ = lean_box(0);
v___x_153_ = lean_array_get_borrowed(v___x_151_, v_graph_150_, v_next_139_);
v___x_154_ = lean_array_get(v___x_152_, v___x_153_, v_a_142_);
if (lean_obj_tag(v___x_154_) == 1)
{
lean_object* v_val_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_166_; 
v_val_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_166_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_166_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_val_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_166_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_160_ = lean_array_get(v___x_152_, v_val_155_, v_funIdx_140_);
lean_dec(v_val_155_);
lean_inc(v_paramIdx_141_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v_paramIdx_141_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_paramIdx_141_);
v___x_162_ = v_reuseFailAlloc_165_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
uint8_t v___x_163_; 
v___x_163_ = l_Option_instDecidableEq___redArg(v___x_159_, v___x_160_, v___x_162_);
if (v___x_163_ == 0)
{
v_a_145_ = v_b_143_;
goto v___jp_144_;
}
else
{
lean_object* v___x_164_; 
lean_inc(v_a_142_);
v___x_164_ = l_Lean_Elab_FixedParams_Info_setVarying(v_next_139_, v_a_142_, v_b_143_);
v_a_145_ = v___x_164_;
goto v___jp_144_;
}
}
}
}
else
{
lean_dec(v___x_154_);
v_a_145_ = v_b_143_;
goto v___jp_144_;
}
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_nat_add(v_a_142_, v___x_146_);
lean_dec(v_a_142_);
v_a_142_ = v___x_147_;
v_b_143_ = v_a_145_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object* v_upperBound_167_, lean_object* v_funIdx_168_, lean_object* v_paramIdx_169_, lean_object* v_a_170_, lean_object* v_b_171_){
_start:
{
uint8_t v___x_172_; 
v___x_172_ = lean_nat_dec_lt(v_a_170_, v_upperBound_167_);
if (v___x_172_ == 0)
{
lean_dec(v_a_170_);
lean_dec(v_paramIdx_169_);
return v_b_171_;
}
else
{
lean_object* v_graph_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_graph_173_ = lean_ctor_get(v_b_171_, 0);
v___x_174_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_175_ = lean_array_get_borrowed(v___x_174_, v_graph_173_, v_a_170_);
v___x_176_ = lean_array_get_size(v___x_175_);
v___x_177_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_169_);
v___x_178_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v___x_176_, v_a_170_, v_funIdx_168_, v_paramIdx_169_, v___x_177_, v_b_171_);
v___x_179_ = lean_unsigned_to_nat(1u);
v___x_180_ = lean_nat_add(v_a_170_, v___x_179_);
lean_dec(v_a_170_);
v_a_170_ = v___x_180_;
v_b_171_ = v___x_178_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Array_instInhabited(lean_box(0));
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object* v_funIdx_183_, lean_object* v_paramIdx_184_, lean_object* v_info_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_funIdx_183_, v_paramIdx_184_, v_info_185_);
if (v___x_186_ == 0)
{
lean_dec(v_paramIdx_184_);
return v_info_185_;
}
else
{
lean_object* v_graph_187_; lean_object* v_revDeps_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_graph_187_ = lean_ctor_get(v_info_185_, 0);
v_revDeps_188_ = lean_ctor_get(v_info_185_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_info_185_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_info_185_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_revDeps_188_);
lean_inc(v_graph_187_);
lean_dec(v_info_185_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___y_193_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_array_get_size(v_graph_187_);
v___x_208_ = lean_nat_dec_lt(v_funIdx_183_, v___x_207_);
if (v___x_208_ == 0)
{
v___y_193_ = v_graph_187_;
goto v___jp_192_;
}
else
{
lean_object* v_v_209_; lean_object* v___x_210_; lean_object* v_xs_x27_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_v_209_ = lean_array_fget(v_graph_187_, v_funIdx_183_);
v___x_210_ = lean_box(0);
v_xs_x27_211_ = lean_array_fset(v_graph_187_, v_funIdx_183_, v___x_210_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_array_set(v_v_209_, v_paramIdx_184_, v___x_212_);
v___x_214_ = lean_array_fset(v_xs_x27_211_, v_funIdx_183_, v___x_213_);
v___y_193_ = v___x_214_;
goto v___jp_192_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v_info_197_; 
v___x_194_ = lean_array_get_size(v___y_193_);
v___x_195_ = lean_unsigned_to_nat(0u);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___y_193_);
v_info_197_ = v___x_190_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___y_193_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_revDeps_188_);
v_info_197_ = v_reuseFailAlloc_206_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v_revDeps_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; size_t v_sz_203_; size_t v___x_204_; lean_object* v___x_205_; 
lean_inc(v_paramIdx_184_);
v___x_198_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v___x_194_, v_funIdx_183_, v_paramIdx_184_, v___x_195_, v_info_197_);
v_revDeps_199_ = lean_ctor_get(v___x_198_, 1);
lean_inc_ref(v_revDeps_199_);
v___x_200_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_setVarying___closed__0, &l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0);
v___x_201_ = lean_array_get(v___x_200_, v_revDeps_199_, v_funIdx_183_);
lean_dec_ref(v_revDeps_199_);
v___x_202_ = lean_array_get(v___x_200_, v___x_201_, v_paramIdx_184_);
lean_dec(v_paramIdx_184_);
lean_dec(v___x_201_);
v_sz_203_ = lean_array_size(v___x_202_);
v___x_204_ = ((size_t)0ULL);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_183_, v___x_202_, v_sz_203_, v___x_204_, v___x_198_);
lean_dec(v___x_202_);
return v___x_205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object* v_funIdx_216_, lean_object* v_as_217_, size_t v_sz_218_, size_t v_i_219_, lean_object* v_b_220_){
_start:
{
uint8_t v___x_221_; 
v___x_221_ = lean_usize_dec_lt(v_i_219_, v_sz_218_);
if (v___x_221_ == 0)
{
return v_b_220_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; 
v_a_222_ = lean_array_uget_borrowed(v_as_217_, v_i_219_);
lean_inc(v_a_222_);
v___x_223_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_216_, v_a_222_, v_b_220_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_i_219_, v___x_224_);
v_i_219_ = v___x_225_;
v_b_220_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object* v_funIdx_227_, lean_object* v_as_228_, lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_b_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_227_, v_as_228_, v_sz_boxed_232_, v_i_boxed_233_, v_b_231_);
lean_dec_ref(v_as_228_);
lean_dec(v_funIdx_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object* v_upperBound_235_, lean_object* v_funIdx_236_, lean_object* v_paramIdx_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_235_, v_funIdx_236_, v_paramIdx_237_, v_a_238_, v_b_239_);
lean_dec(v_funIdx_236_);
lean_dec(v_upperBound_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object* v_upperBound_241_, lean_object* v_next_242_, lean_object* v_funIdx_243_, lean_object* v_paramIdx_244_, lean_object* v_a_245_, lean_object* v_b_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_241_, v_next_242_, v_funIdx_243_, v_paramIdx_244_, v_a_245_, v_b_246_);
lean_dec(v_funIdx_243_);
lean_dec(v_next_242_);
lean_dec(v_upperBound_241_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object* v_funIdx_248_, lean_object* v_paramIdx_249_, lean_object* v_info_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_248_, v_paramIdx_249_, v_info_250_);
lean_dec(v_funIdx_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object* v_upperBound_252_, lean_object* v_next_253_, lean_object* v_funIdx_254_, lean_object* v_paramIdx_255_, lean_object* v_inst_256_, lean_object* v_R_257_, lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_c_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_252_, v_next_253_, v_funIdx_254_, v_paramIdx_255_, v_a_258_, v_b_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object* v_upperBound_262_, lean_object* v_next_263_, lean_object* v_funIdx_264_, lean_object* v_paramIdx_265_, lean_object* v_inst_266_, lean_object* v_R_267_, lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v_c_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(v_upperBound_262_, v_next_263_, v_funIdx_264_, v_paramIdx_265_, v_inst_266_, v_R_267_, v_a_268_, v_b_269_, v_c_270_);
lean_dec(v_funIdx_264_);
lean_dec(v_next_263_);
lean_dec(v_upperBound_262_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object* v_upperBound_272_, lean_object* v_funIdx_273_, lean_object* v_paramIdx_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_272_, v_funIdx_273_, v_paramIdx_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object* v_upperBound_281_, lean_object* v_funIdx_282_, lean_object* v_paramIdx_283_, lean_object* v_inst_284_, lean_object* v_R_285_, lean_object* v_a_286_, lean_object* v_b_287_, lean_object* v_c_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(v_upperBound_281_, v_funIdx_282_, v_paramIdx_283_, v_inst_284_, v_R_285_, v_a_286_, v_b_287_, v_c_288_);
lean_dec(v_funIdx_282_);
lean_dec(v_upperBound_281_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object* v_calleeIdx_290_, lean_object* v_argIdx_291_, lean_object* v_callerIdx_292_, lean_object* v_info_293_){
_start:
{
lean_object* v_graph_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_graph_294_ = lean_ctor_get(v_info_293_, 0);
v___x_295_ = lean_box(0);
v___x_296_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_297_ = lean_array_get_borrowed(v___x_296_, v_graph_294_, v_calleeIdx_290_);
v___x_298_ = lean_array_get_borrowed(v___x_295_, v___x_297_, v_argIdx_291_);
if (lean_obj_tag(v___x_298_) == 0)
{
return v___x_295_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_300_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
v___x_300_ = lean_array_get_borrowed(v___x_295_, v_val_299_, v_callerIdx_292_);
lean_inc(v___x_300_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object* v_calleeIdx_301_, lean_object* v_argIdx_302_, lean_object* v_callerIdx_303_, lean_object* v_info_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_301_, v_argIdx_302_, v_callerIdx_303_, v_info_304_);
lean_dec_ref(v_info_304_);
lean_dec(v_callerIdx_303_);
lean_dec(v_argIdx_302_);
lean_dec(v_calleeIdx_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object* v_upperBound_306_, lean_object* v_val_307_, lean_object* v_calleeIdx_308_, lean_object* v_argIdx_309_, lean_object* v_a_310_, lean_object* v_b_311_){
_start:
{
lean_object* v_a_313_; uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v_a_310_, v_upperBound_306_);
if (v___x_317_ == 0)
{
lean_dec(v_a_310_);
lean_dec(v_argIdx_309_);
return v_b_311_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_array_fget_borrowed(v_val_307_, v_a_310_);
if (lean_obj_tag(v___x_318_) == 1)
{
lean_object* v_val_319_; lean_object* v___x_320_; 
v_val_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_319_);
lean_inc(v_argIdx_309_);
v___x_320_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_308_, v_argIdx_309_, v_a_310_, v_val_319_, v_b_311_);
v_a_313_ = v___x_320_;
goto v___jp_312_;
}
else
{
v_a_313_ = v_b_311_;
goto v___jp_312_;
}
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_a_310_, v___x_314_);
lean_dec(v_a_310_);
v_a_310_ = v___x_315_;
v_b_311_ = v_a_313_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object* v_calleeIdx_321_, lean_object* v_argIdx_322_, lean_object* v_callerIdx_323_, lean_object* v_paramIdx_324_, lean_object* v_info_325_){
_start:
{
lean_object* v_info_327_; lean_object* v_graph_328_; uint8_t v___x_332_; 
v___x_332_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
if (v___x_332_ == 0)
{
lean_dec(v_paramIdx_324_);
lean_dec(v_argIdx_322_);
return v_info_325_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_323_, v_paramIdx_324_, v_info_325_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_paramIdx_324_);
v___x_334_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_info_325_);
if (lean_obj_tag(v___x_335_) == 1)
{
lean_object* v_val_336_; uint8_t v___x_337_; 
v_val_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_336_);
lean_dec_ref(v___x_335_);
v___x_337_ = lean_nat_dec_eq(v_paramIdx_324_, v_val_336_);
lean_dec(v_val_336_);
lean_dec(v_paramIdx_324_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_338_;
}
else
{
lean_dec(v_argIdx_322_);
return v_info_325_;
}
}
else
{
lean_object* v_graph_339_; lean_object* v_revDeps_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_383_; 
lean_dec(v___x_335_);
v_graph_339_ = lean_ctor_get(v_info_325_, 0);
v_revDeps_340_ = lean_ctor_get(v_info_325_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_info_325_);
if (v_isSharedCheck_383_ == 0)
{
v___x_342_ = v_info_325_;
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_revDeps_340_);
lean_inc(v_graph_339_);
lean_dec(v_info_325_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___y_345_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_array_get_size(v_graph_339_);
v___x_359_ = lean_nat_dec_lt(v_calleeIdx_321_, v___x_358_);
if (v___x_359_ == 0)
{
v___y_345_ = v_graph_339_;
goto v___jp_344_;
}
else
{
lean_object* v_v_360_; lean_object* v___x_361_; lean_object* v_xs_x27_362_; lean_object* v___y_364_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_v_360_ = lean_array_fget(v_graph_339_, v_calleeIdx_321_);
v___x_361_ = lean_box(0);
v_xs_x27_362_ = lean_array_fset(v_graph_339_, v_calleeIdx_321_, v___x_361_);
v___x_366_ = lean_array_get_size(v_v_360_);
v___x_367_ = lean_nat_dec_lt(v_argIdx_322_, v___x_366_);
if (v___x_367_ == 0)
{
v___y_364_ = v_v_360_;
goto v___jp_363_;
}
else
{
lean_object* v_v_368_; lean_object* v_xs_x27_369_; lean_object* v___y_371_; 
v_v_368_ = lean_array_fget(v_v_360_, v_argIdx_322_);
v_xs_x27_369_ = lean_array_fset(v_v_360_, v_argIdx_322_, v___x_361_);
if (lean_obj_tag(v_v_368_) == 0)
{
v___y_371_ = v_v_368_;
goto v___jp_370_;
}
else
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v_val_373_ = lean_ctor_get(v_v_368_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_v_368_);
if (v_isSharedCheck_382_ == 0)
{
v___x_375_ = v_v_368_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v_v_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
lean_inc(v_paramIdx_324_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_paramIdx_324_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_paramIdx_324_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_array_set(v_val_373_, v_callerIdx_323_, v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___y_371_ = v___x_380_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_array_fset(v_xs_x27_369_, v_argIdx_322_, v___y_371_);
v___y_364_ = v___x_372_;
goto v___jp_363_;
}
}
v___jp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_array_fset(v_xs_x27_362_, v_calleeIdx_321_, v___y_364_);
v___y_345_ = v___x_365_;
goto v___jp_344_;
}
}
v___jp_344_:
{
lean_object* v_info_347_; 
lean_inc_ref(v___y_345_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___y_345_);
v_info_347_ = v___x_342_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___y_345_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_revDeps_340_);
v_info_347_ = v_reuseFailAlloc_357_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_350_ = lean_array_get_borrowed(v___x_349_, v___y_345_, v_callerIdx_323_);
v___x_351_ = lean_array_get_borrowed(v___x_348_, v___x_350_, v_paramIdx_324_);
if (lean_obj_tag(v___x_351_) == 1)
{
lean_object* v_val_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_graph_356_; 
lean_inc_ref(v___x_351_);
lean_dec_ref(v___y_345_);
v_val_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_val_352_);
lean_dec_ref(v___x_351_);
v___x_353_ = lean_array_get_size(v_val_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
lean_inc(v_argIdx_322_);
v___x_355_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v___x_353_, v_val_352_, v_calleeIdx_321_, v_argIdx_322_, v___x_354_, v_info_347_);
lean_dec(v_val_352_);
v_graph_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_graph_356_);
v_info_327_ = v___x_355_;
v_graph_328_ = v_graph_356_;
goto v___jp_326_;
}
else
{
v_info_327_ = v_info_347_;
v_graph_328_ = v___y_345_;
goto v___jp_326_;
}
}
}
}
}
}
}
v___jp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_array_get_size(v_graph_328_);
lean_dec_ref(v_graph_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v___x_329_, v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_paramIdx_324_, v___x_330_, v_info_327_);
lean_dec(v_argIdx_322_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object* v_upperBound_384_, lean_object* v_next_385_, lean_object* v_calleeIdx_386_, lean_object* v_argIdx_387_, lean_object* v_callerIdx_388_, lean_object* v_paramIdx_389_, lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_lt(v_a_390_, v_upperBound_384_);
if (v___x_397_ == 0)
{
lean_dec(v_a_390_);
lean_dec(v_paramIdx_389_);
return v_b_391_;
}
else
{
lean_object* v_graph_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_graph_398_ = lean_ctor_get(v_b_391_, 0);
v___x_399_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_400_ = lean_box(0);
v___x_401_ = lean_array_get_borrowed(v___x_399_, v_graph_398_, v_next_385_);
v___x_402_ = lean_array_get_borrowed(v___x_400_, v___x_401_, v_a_390_);
if (lean_obj_tag(v___x_402_) == 1)
{
lean_object* v_val_403_; lean_object* v___x_404_; 
v_val_403_ = lean_ctor_get(v___x_402_, 0);
v___x_404_ = lean_array_get_borrowed(v___x_400_, v_val_403_, v_calleeIdx_386_);
if (lean_obj_tag(v___x_404_) == 1)
{
lean_object* v_val_405_; uint8_t v___x_406_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
v___x_406_ = lean_nat_dec_eq(v_val_405_, v_argIdx_387_);
if (v___x_406_ == 0)
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
else
{
lean_object* v___x_407_; 
lean_inc(v_paramIdx_389_);
lean_inc(v_a_390_);
v___x_407_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_next_385_, v_a_390_, v_callerIdx_388_, v_paramIdx_389_, v_b_391_);
v_a_393_ = v___x_407_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_a_390_, v___x_394_);
lean_dec(v_a_390_);
v_a_390_ = v___x_395_;
v_b_391_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object* v_upperBound_408_, lean_object* v_calleeIdx_409_, lean_object* v_argIdx_410_, lean_object* v_callerIdx_411_, lean_object* v_paramIdx_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_a_413_, v_upperBound_408_);
if (v___x_415_ == 0)
{
lean_dec(v_a_413_);
lean_dec(v_paramIdx_412_);
return v_b_414_;
}
else
{
lean_object* v_graph_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_graph_416_ = lean_ctor_get(v_b_414_, 0);
v___x_417_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_418_ = lean_array_get_borrowed(v___x_417_, v_graph_416_, v_a_413_);
v___x_419_ = lean_array_get_size(v___x_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_412_);
v___x_421_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v___x_419_, v_a_413_, v_calleeIdx_409_, v_argIdx_410_, v_callerIdx_411_, v_paramIdx_412_, v___x_420_, v_b_414_);
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v_a_413_, v___x_422_);
lean_dec(v_a_413_);
v_a_413_ = v___x_423_;
v_b_414_ = v___x_421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object* v_upperBound_425_, lean_object* v_calleeIdx_426_, lean_object* v_argIdx_427_, lean_object* v_callerIdx_428_, lean_object* v_paramIdx_429_, lean_object* v_a_430_, lean_object* v_b_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_425_, v_calleeIdx_426_, v_argIdx_427_, v_callerIdx_428_, v_paramIdx_429_, v_a_430_, v_b_431_);
lean_dec(v_callerIdx_428_);
lean_dec(v_argIdx_427_);
lean_dec(v_calleeIdx_426_);
lean_dec(v_upperBound_425_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object* v_upperBound_433_, lean_object* v_val_434_, lean_object* v_calleeIdx_435_, lean_object* v_argIdx_436_, lean_object* v_a_437_, lean_object* v_b_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_433_, v_val_434_, v_calleeIdx_435_, v_argIdx_436_, v_a_437_, v_b_438_);
lean_dec(v_calleeIdx_435_);
lean_dec_ref(v_val_434_);
lean_dec(v_upperBound_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object* v_upperBound_440_, lean_object* v_next_441_, lean_object* v_calleeIdx_442_, lean_object* v_argIdx_443_, lean_object* v_callerIdx_444_, lean_object* v_paramIdx_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_440_, v_next_441_, v_calleeIdx_442_, v_argIdx_443_, v_callerIdx_444_, v_paramIdx_445_, v_a_446_, v_b_447_);
lean_dec(v_callerIdx_444_);
lean_dec(v_argIdx_443_);
lean_dec(v_calleeIdx_442_);
lean_dec(v_next_441_);
lean_dec(v_upperBound_440_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object* v_calleeIdx_449_, lean_object* v_argIdx_450_, lean_object* v_callerIdx_451_, lean_object* v_paramIdx_452_, lean_object* v_info_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_449_, v_argIdx_450_, v_callerIdx_451_, v_paramIdx_452_, v_info_453_);
lean_dec(v_callerIdx_451_);
lean_dec(v_calleeIdx_449_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object* v_upperBound_455_, lean_object* v_next_456_, lean_object* v_calleeIdx_457_, lean_object* v_argIdx_458_, lean_object* v_callerIdx_459_, lean_object* v_paramIdx_460_, lean_object* v_inst_461_, lean_object* v_R_462_, lean_object* v_a_463_, lean_object* v_b_464_, lean_object* v_c_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_455_, v_next_456_, v_calleeIdx_457_, v_argIdx_458_, v_callerIdx_459_, v_paramIdx_460_, v_a_463_, v_b_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object* v_upperBound_467_, lean_object* v_next_468_, lean_object* v_calleeIdx_469_, lean_object* v_argIdx_470_, lean_object* v_callerIdx_471_, lean_object* v_paramIdx_472_, lean_object* v_inst_473_, lean_object* v_R_474_, lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_c_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(v_upperBound_467_, v_next_468_, v_calleeIdx_469_, v_argIdx_470_, v_callerIdx_471_, v_paramIdx_472_, v_inst_473_, v_R_474_, v_a_475_, v_b_476_, v_c_477_);
lean_dec(v_callerIdx_471_);
lean_dec(v_argIdx_470_);
lean_dec(v_calleeIdx_469_);
lean_dec(v_next_468_);
lean_dec(v_upperBound_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object* v_upperBound_479_, lean_object* v_calleeIdx_480_, lean_object* v_argIdx_481_, lean_object* v_callerIdx_482_, lean_object* v_paramIdx_483_, lean_object* v_inst_484_, lean_object* v_R_485_, lean_object* v_a_486_, lean_object* v_b_487_, lean_object* v_c_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_479_, v_calleeIdx_480_, v_argIdx_481_, v_callerIdx_482_, v_paramIdx_483_, v_a_486_, v_b_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object* v_upperBound_490_, lean_object* v_calleeIdx_491_, lean_object* v_argIdx_492_, lean_object* v_callerIdx_493_, lean_object* v_paramIdx_494_, lean_object* v_inst_495_, lean_object* v_R_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v_c_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(v_upperBound_490_, v_calleeIdx_491_, v_argIdx_492_, v_callerIdx_493_, v_paramIdx_494_, v_inst_495_, v_R_496_, v_a_497_, v_b_498_, v_c_499_);
lean_dec(v_callerIdx_493_);
lean_dec(v_argIdx_492_);
lean_dec(v_calleeIdx_491_);
lean_dec(v_upperBound_490_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object* v_upperBound_501_, lean_object* v_val_502_, lean_object* v_calleeIdx_503_, lean_object* v_argIdx_504_, lean_object* v_inst_505_, lean_object* v_R_506_, lean_object* v_a_507_, lean_object* v_b_508_, lean_object* v_c_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_501_, v_val_502_, v_calleeIdx_503_, v_argIdx_504_, v_a_507_, v_b_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object* v_upperBound_511_, lean_object* v_val_512_, lean_object* v_calleeIdx_513_, lean_object* v_argIdx_514_, lean_object* v_inst_515_, lean_object* v_R_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v_c_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(v_upperBound_511_, v_val_512_, v_calleeIdx_513_, v_argIdx_514_, v_inst_515_, v_R_516_, v_a_517_, v_b_518_, v_c_519_);
lean_dec(v_calleeIdx_513_);
lean_dec_ref(v_val_512_);
lean_dec(v_upperBound_511_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object* v_a_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_nat_to_int(v_a_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
if (lean_obj_tag(v_x_525_) == 0)
{
lean_dec(v_x_523_);
return v_x_524_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_head_526_ = lean_ctor_get(v_x_525_, 0);
v_tail_527_ = lean_ctor_get(v_x_525_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_525_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_525_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_tail_527_);
lean_inc(v_head_526_);
lean_dec(v_x_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
lean_inc(v_x_523_);
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 5);
lean_ctor_set(v___x_529_, 1, v_x_523_);
lean_ctor_set(v___x_529_, 0, v_x_524_);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_x_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_x_523_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_head_526_);
v_x_524_ = v___x_533_;
v_x_525_ = v_tail_527_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
lean_object* v___x_539_; 
lean_dec(v_x_538_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v_tail_540_; 
v_tail_540_ = lean_ctor_get(v_x_537_, 1);
if (lean_obj_tag(v_tail_540_) == 0)
{
lean_object* v_head_541_; 
lean_dec(v_x_538_);
v_head_541_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_541_);
lean_dec_ref(v_x_537_);
return v_head_541_;
}
else
{
lean_object* v_head_542_; lean_object* v___x_543_; 
lean_inc(v_tail_540_);
v_head_542_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_542_);
lean_dec_ref(v_x_537_);
v___x_543_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(v_x_538_, v_head_542_, v_tail_540_);
return v___x_543_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_552_; 
v___x_552_ = l_List_reverse___redArg(v_a_551_);
return v___x_552_;
}
else
{
lean_object* v_head_553_; lean_object* v_tail_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_578_; 
v_head_553_ = lean_ctor_get(v_a_550_, 0);
v_tail_554_ = lean_ctor_get(v_a_550_, 1);
v_isSharedCheck_578_ = !lean_is_exclusive(v_a_550_);
if (v_isSharedCheck_578_ == 0)
{
v___x_556_ = v_a_550_;
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_tail_554_);
lean_inc(v_head_553_);
lean_dec(v_a_550_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___y_559_; 
if (lean_obj_tag(v_head_553_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1));
v___y_559_ = v___x_564_;
goto v___jp_558_;
}
else
{
lean_object* v_val_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_577_; 
v_val_565_ = lean_ctor_get(v_head_553_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_head_553_);
if (v_isSharedCheck_577_ == 0)
{
v___x_567_ = v_head_553_;
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_val_565_);
lean_dec(v_head_553_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_569_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3));
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_val_565_, v___x_570_);
lean_dec(v_val_565_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 3);
lean_ctor_set(v___x_567_, 0, v___x_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_569_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___y_559_ = v___x_575_;
goto v___jp_558_;
}
}
}
v___jp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 1, v_a_551_);
lean_ctor_set(v___x_556_, 0, v___y_559_);
v___x_561_ = v___x_556_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___y_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_551_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v_a_550_ = v_tail_554_;
v_a_551_ = v___x_561_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4));
v___x_588_ = lean_string_length(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6);
v___x_590_ = lean_nat_to_int(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
if (lean_obj_tag(v_a_595_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = l_List_reverse___redArg(v_a_596_);
return v___x_597_;
}
else
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_624_; 
v_head_598_ = lean_ctor_get(v_a_595_, 0);
v_tail_599_ = lean_ctor_get(v_a_595_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_a_595_);
if (v_isSharedCheck_624_ == 0)
{
v___x_601_ = v_a_595_;
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_tail_599_);
lean_inc(v_head_598_);
lean_dec(v_a_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___y_604_; 
if (lean_obj_tag(v_head_598_) == 0)
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1));
v___y_604_ = v___x_609_;
goto v___jp_603_;
}
else
{
lean_object* v_val_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; 
v_val_610_ = lean_ctor_get(v_head_598_, 0);
lean_inc(v_val_610_);
lean_dec_ref(v_head_598_);
v___x_611_ = lean_array_to_list(v_val_610_);
v___x_612_ = lean_box(0);
v___x_613_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(v___x_611_, v___x_612_);
v___x_614_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_615_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_613_, v___x_614_);
v___x_616_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7);
v___x_617_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8));
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_615_);
v___x_619_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_616_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = 0;
v___x_623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set_uint8(v___x_623_, sizeof(void*)*1, v___x_622_);
v___y_604_ = v___x_623_;
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v_a_596_);
lean_ctor_set(v___x_601_, 0, v___y_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___y_604_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_a_596_);
v___x_606_ = v_reuseFailAlloc_608_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
v_a_595_ = v_tail_599_;
v_a_596_ = v___x_606_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
if (lean_obj_tag(v_a_628_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = l_List_reverse___redArg(v_a_629_);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_647_; 
v_head_631_ = lean_ctor_get(v_a_628_, 0);
v_tail_632_ = lean_ctor_get(v_a_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_634_ = v_a_628_;
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_tail_632_);
lean_inc(v_head_631_);
lean_dec(v_a_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_636_ = lean_array_to_list(v_head_631_);
v___x_637_ = lean_box(0);
v___x_638_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(v___x_636_, v___x_637_);
v___x_639_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_640_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_638_, v___x_639_);
v___x_641_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1));
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_629_);
lean_ctor_set(v___x_634_, 0, v___x_642_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_a_629_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
v_a_628_ = v_tail_632_;
v_a_629_ = v___x_644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object* v_info_648_){
_start:
{
lean_object* v_graph_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_graph_649_ = lean_ctor_get(v_info_648_, 0);
lean_inc_ref(v_graph_649_);
lean_dec_ref(v_info_648_);
v___x_650_ = lean_array_to_list(v_graph_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(v___x_650_, v___x_651_);
v___x_653_ = lean_box(1);
v___x_654_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_652_, v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object* v_x_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object* v_x_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(v_x_659_);
lean_dec(v_x_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object* v_fvarId_662_, lean_object* v_x_663_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = l_Lean_instBEqFVarId_beq(v_fvarId_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_665_, lean_object* v_x_666_){
_start:
{
uint8_t v_res_667_; lean_object* v_r_668_; 
v_res_667_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(v_fvarId_665_, v_x_666_);
lean_dec(v_x_666_);
lean_dec(v_fvarId_665_);
v_r_668_ = lean_box(v_res_667_);
return v_r_668_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_box(0);
v___x_671_ = lean_unsigned_to_nat(16u);
v___x_672_ = lean_mk_array(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object* v_e_676_, lean_object* v_fvarId_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___x_680_; uint8_t v_fst_682_; lean_object* v_mctx_683_; lean_object* v___y_701_; lean_object* v_mctx_706_; lean_object* v___f_707_; lean_object* v___f_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_680_ = lean_st_ref_get(v___y_678_);
v_mctx_706_ = lean_ctor_get(v___x_680_, 0);
lean_inc_ref_n(v_mctx_706_, 2);
lean_dec(v___x_680_);
v___f_707_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0));
v___f_708_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_708_, 0, v_fvarId_677_);
v___x_709_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
lean_ctor_set(v___x_710_, 1, v_mctx_706_);
v___x_711_ = l_Lean_Expr_hasFVar(v_e_676_);
if (v___x_711_ == 0)
{
uint8_t v___x_712_; 
v___x_712_ = l_Lean_Expr_hasMVar(v_e_676_);
if (v___x_712_ == 0)
{
lean_dec_ref(v___x_710_);
lean_dec_ref(v___f_708_);
lean_dec_ref(v_e_676_);
v_fst_682_ = v___x_712_;
v_mctx_683_ = v_mctx_706_;
goto v___jp_681_;
}
else
{
lean_object* v___x_713_; 
lean_dec_ref(v_mctx_706_);
v___x_713_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_708_, v___f_707_, v_e_676_, v___x_710_);
v___y_701_ = v___x_713_;
goto v___jp_700_;
}
}
else
{
lean_object* v___x_714_; 
lean_dec_ref(v_mctx_706_);
v___x_714_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_708_, v___f_707_, v_e_676_, v___x_710_);
v___y_701_ = v___x_714_;
goto v___jp_700_;
}
v___jp_681_:
{
lean_object* v___x_684_; lean_object* v_cache_685_; lean_object* v_zetaDeltaFVarIds_686_; lean_object* v_postponed_687_; lean_object* v_diag_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_698_; 
v___x_684_ = lean_st_ref_take(v___y_678_);
v_cache_685_ = lean_ctor_get(v___x_684_, 1);
v_zetaDeltaFVarIds_686_ = lean_ctor_get(v___x_684_, 2);
v_postponed_687_ = lean_ctor_get(v___x_684_, 3);
v_diag_688_ = lean_ctor_get(v___x_684_, 4);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_698_ == 0)
{
lean_object* v_unused_699_; 
v_unused_699_ = lean_ctor_get(v___x_684_, 0);
lean_dec(v_unused_699_);
v___x_690_ = v___x_684_;
v_isShared_691_ = v_isSharedCheck_698_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_diag_688_);
lean_inc(v_postponed_687_);
lean_inc(v_zetaDeltaFVarIds_686_);
lean_inc(v_cache_685_);
lean_dec(v___x_684_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_698_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v_mctx_683_);
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_mctx_683_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_cache_685_);
lean_ctor_set(v_reuseFailAlloc_697_, 2, v_zetaDeltaFVarIds_686_);
lean_ctor_set(v_reuseFailAlloc_697_, 3, v_postponed_687_);
lean_ctor_set(v_reuseFailAlloc_697_, 4, v_diag_688_);
v___x_693_ = v_reuseFailAlloc_697_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_694_ = lean_st_ref_set(v___y_678_, v___x_693_);
v___x_695_ = lean_box(v_fst_682_);
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
return v___x_696_;
}
}
}
v___jp_700_:
{
lean_object* v_snd_702_; lean_object* v_fst_703_; lean_object* v_mctx_704_; uint8_t v___x_705_; 
v_snd_702_ = lean_ctor_get(v___y_701_, 1);
lean_inc(v_snd_702_);
v_fst_703_ = lean_ctor_get(v___y_701_, 0);
lean_inc(v_fst_703_);
lean_dec_ref(v___y_701_);
v_mctx_704_ = lean_ctor_get(v_snd_702_, 1);
lean_inc_ref(v_mctx_704_);
lean_dec(v_snd_702_);
v___x_705_ = lean_unbox(v_fst_703_);
lean_dec(v_fst_703_);
v_fst_682_ = v___x_705_;
v_mctx_683_ = v_mctx_704_;
goto v___jp_681_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object* v_e_715_, lean_object* v_fvarId_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_715_, v_fvarId_716_, v___y_717_);
lean_dec(v___y_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object* v_e_720_, lean_object* v_fvarId_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_720_, v_fvarId_721_, v___y_723_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object* v_e_728_, lean_object* v_fvarId_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(v_e_728_, v_fvarId_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object* v_k_736_, lean_object* v_b_737_, lean_object* v_c_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
v___x_744_ = lean_apply_7(v_k_736_, v_b_737_, v_c_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, lean_box(0));
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object* v_k_745_, lean_object* v_b_746_, lean_object* v_c_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(v_k_745_, v_b_746_, v_c_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object* v_e_754_, lean_object* v_k_755_, uint8_t v_cleanupAnnotations_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___f_762_; uint8_t v___x_763_; uint8_t v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___f_762_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_762_, 0, v_k_755_);
v___x_763_ = 1;
v___x_764_ = 0;
v___x_765_ = lean_box(0);
v___x_766_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_754_, v___x_763_, v___x_764_, v___x_763_, v___x_764_, v___x_765_, v___f_762_, v_cleanupAnnotations_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_766_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_766_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object* v_e_783_, lean_object* v_k_784_, lean_object* v_cleanupAnnotations_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_791_; lean_object* v_res_792_; 
v_cleanupAnnotations_boxed_791_ = lean_unbox(v_cleanupAnnotations_785_);
v_res_792_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_783_, v_k_784_, v_cleanupAnnotations_boxed_791_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object* v_00_u03b1_793_, lean_object* v_e_794_, lean_object* v_k_795_, uint8_t v_cleanupAnnotations_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_794_, v_k_795_, v_cleanupAnnotations_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object* v_00_u03b1_803_, lean_object* v_e_804_, lean_object* v_k_805_, lean_object* v_cleanupAnnotations_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_812_; lean_object* v_res_813_; 
v_cleanupAnnotations_boxed_812_ = lean_unbox(v_cleanupAnnotations_806_);
v_res_813_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(v_00_u03b1_803_, v_e_804_, v_k_805_, v_cleanupAnnotations_boxed_812_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object* v_upperBound_814_, lean_object* v_xs_815_, lean_object* v_next_816_, lean_object* v_a_817_, lean_object* v_b_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
uint8_t v___x_824_; 
v___x_824_ = lean_nat_dec_lt(v_a_817_, v_upperBound_814_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
lean_dec(v_a_817_);
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v_b_818_);
return v___x_825_;
}
else
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_array_fget_borrowed(v_xs_815_, v_a_817_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___x_826_);
v___x_827_ = lean_infer_type(v___x_826_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref(v___x_827_);
v___x_829_ = lean_array_fget_borrowed(v_xs_815_, v_next_816_);
v___x_830_ = l_Lean_Expr_fvarId_x21(v___x_829_);
v___x_831_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_a_828_, v___x_830_, v___y_820_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v_a_834_; uint8_t v___x_838_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref(v___x_831_);
v___x_838_ = lean_unbox(v_a_832_);
lean_dec(v_a_832_);
if (v___x_838_ == 0)
{
v_a_834_ = v_b_818_;
goto v___jp_833_;
}
else
{
lean_object* v___x_839_; 
lean_inc(v_a_817_);
v___x_839_ = lean_array_push(v_b_818_, v_a_817_);
v_a_834_ = v___x_839_;
goto v___jp_833_;
}
v___jp_833_:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_unsigned_to_nat(1u);
v___x_836_ = lean_nat_add(v_a_817_, v___x_835_);
lean_dec(v_a_817_);
v_a_817_ = v___x_836_;
v_b_818_ = v_a_834_;
goto _start;
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec_ref(v_b_818_);
lean_dec(v_a_817_);
v_a_840_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_831_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_831_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec_ref(v_b_818_);
lean_dec(v_a_817_);
v_a_848_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_827_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_827_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object* v_upperBound_856_, lean_object* v_xs_857_, lean_object* v_next_858_, lean_object* v_a_859_, lean_object* v_b_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_856_, v_xs_857_, v_next_858_, v_a_859_, v_b_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v_next_858_);
lean_dec_ref(v_xs_857_);
lean_dec(v_upperBound_856_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object* v_upperBound_869_, lean_object* v___x_870_, lean_object* v_xs_871_, lean_object* v_a_872_, lean_object* v_b_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v___x_879_; 
v___x_879_ = lean_nat_dec_lt(v_a_872_, v_upperBound_869_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; 
lean_dec(v_a_872_);
v___x_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_880_, 0, v_b_873_);
return v___x_880_;
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_nat_add(v_a_872_, v___x_881_);
v___x_883_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0));
lean_inc(v___x_882_);
v___x_884_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v___x_870_, v_xs_871_, v_a_872_, v___x_882_, v___x_883_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v_a_872_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref(v___x_884_);
v___x_886_ = lean_array_push(v_b_873_, v_a_885_);
v_a_872_ = v___x_882_;
v_b_873_ = v___x_886_;
goto _start;
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v___x_882_);
lean_dec_ref(v_b_873_);
v_a_888_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_884_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_884_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object* v_upperBound_896_, lean_object* v___x_897_, lean_object* v_xs_898_, lean_object* v_a_899_, lean_object* v_b_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_896_, v___x_897_, v_xs_898_, v_a_899_, v_b_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_xs_898_);
lean_dec(v___x_897_);
lean_dec(v_upperBound_896_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object* v_xs_909_, lean_object* v_x_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v_revDeps_918_; lean_object* v___x_919_; 
v___x_916_ = lean_array_get_size(v_xs_909_);
v___x_917_ = lean_unsigned_to_nat(0u);
v_revDeps_918_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___lam__0___closed__0));
v___x_919_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v___x_916_, v___x_916_, v_xs_909_, v___x_917_, v_revDeps_918_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object* v_xs_920_, lean_object* v_x_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Elab_getParamRevDeps___lam__0(v_xs_920_, v_x_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec_ref(v_x_921_);
lean_dec_ref(v_xs_920_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v___f_935_; uint8_t v___x_936_; lean_object* v___x_937_; 
v___f_935_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___closed__0));
v___x_936_ = 1;
v___x_937_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_929_, v___f_935_, v___x_936_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_getParamRevDeps(v_value_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object* v_upperBound_945_, lean_object* v_xs_946_, lean_object* v_next_947_, lean_object* v_inst_948_, lean_object* v_R_949_, lean_object* v_a_950_, lean_object* v_b_951_, lean_object* v_c_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_945_, v_xs_946_, v_next_947_, v_a_950_, v_b_951_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object* v_upperBound_959_, lean_object* v_xs_960_, lean_object* v_next_961_, lean_object* v_inst_962_, lean_object* v_R_963_, lean_object* v_a_964_, lean_object* v_b_965_, lean_object* v_c_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(v_upperBound_959_, v_xs_960_, v_next_961_, v_inst_962_, v_R_963_, v_a_964_, v_b_965_, v_c_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v_next_961_);
lean_dec_ref(v_xs_960_);
lean_dec(v_upperBound_959_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object* v_upperBound_973_, lean_object* v___x_974_, lean_object* v_xs_975_, lean_object* v_inst_976_, lean_object* v_R_977_, lean_object* v_a_978_, lean_object* v_b_979_, lean_object* v_c_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_973_, v___x_974_, v_xs_975_, v_a_978_, v_b_979_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object* v_upperBound_987_, lean_object* v___x_988_, lean_object* v_xs_989_, lean_object* v_inst_990_, lean_object* v_R_991_, lean_object* v_a_992_, lean_object* v_b_993_, lean_object* v_c_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(v_upperBound_987_, v___x_988_, v_xs_989_, v_inst_990_, v_R_991_, v_a_992_, v_b_993_, v_c_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec_ref(v_xs_989_);
lean_dec(v___x_988_);
lean_dec(v_upperBound_987_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_msg_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___f_1008_; lean_object* v___x_32777__overap_1009_; lean_object* v___x_1010_; 
v___f_1008_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_32777__overap_1009_ = lean_panic_fn_borrowed(v___f_1008_, v_msg_1002_);
lean_inc(v___y_1006_);
lean_inc_ref(v___y_1005_);
lean_inc(v___y_1004_);
lean_inc_ref(v___y_1003_);
v___x_1010_ = lean_apply_5(v___x_32777__overap_1009_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, lean_box(0));
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_msg_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_msg_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__0(lean_object* v_e_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v_e_1018_);
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__0___boxed(lean_object* v_e_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__0(v_e_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0(lean_object* v_00_u03b1_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_apply_1(v_x_1034_, lean_box(0));
v___x_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0___boxed(lean_object* v_00_u03b1_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0(v_00_u03b1_1042_, v_x_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0(lean_object* v_00_u03b1_1050_, lean_object* v_x_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = lean_apply_1(v_x_1051_, lean_box(0));
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0___boxed(lean_object* v_00_u03b1_1059_, lean_object* v_x_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0(v_00_u03b1_1059_, v_x_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26_spec__27___redArg(lean_object* v_x_1067_, lean_object* v_x_1068_){
_start:
{
if (lean_obj_tag(v_x_1068_) == 0)
{
return v_x_1067_;
}
else
{
lean_object* v_key_1069_; lean_object* v_value_1070_; lean_object* v_tail_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1094_; 
v_key_1069_ = lean_ctor_get(v_x_1068_, 0);
v_value_1070_ = lean_ctor_get(v_x_1068_, 1);
v_tail_1071_ = lean_ctor_get(v_x_1068_, 2);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_x_1068_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1073_ = v_x_1068_;
v_isShared_1074_ = v_isSharedCheck_1094_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_tail_1071_);
lean_inc(v_value_1070_);
lean_inc(v_key_1069_);
lean_dec(v_x_1068_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1094_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; uint64_t v___x_1076_; uint64_t v___x_1077_; uint64_t v___x_1078_; uint64_t v_fold_1079_; uint64_t v___x_1080_; uint64_t v___x_1081_; uint64_t v___x_1082_; size_t v___x_1083_; size_t v___x_1084_; size_t v___x_1085_; size_t v___x_1086_; size_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1075_ = lean_array_get_size(v_x_1067_);
v___x_1076_ = l_Lean_ExprStructEq_hash(v_key_1069_);
v___x_1077_ = 32ULL;
v___x_1078_ = lean_uint64_shift_right(v___x_1076_, v___x_1077_);
v_fold_1079_ = lean_uint64_xor(v___x_1076_, v___x_1078_);
v___x_1080_ = 16ULL;
v___x_1081_ = lean_uint64_shift_right(v_fold_1079_, v___x_1080_);
v___x_1082_ = lean_uint64_xor(v_fold_1079_, v___x_1081_);
v___x_1083_ = lean_uint64_to_usize(v___x_1082_);
v___x_1084_ = lean_usize_of_nat(v___x_1075_);
v___x_1085_ = ((size_t)1ULL);
v___x_1086_ = lean_usize_sub(v___x_1084_, v___x_1085_);
v___x_1087_ = lean_usize_land(v___x_1083_, v___x_1086_);
v___x_1088_ = lean_array_uget_borrowed(v_x_1067_, v___x_1087_);
lean_inc(v___x_1088_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 2, v___x_1088_);
v___x_1090_ = v___x_1073_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_key_1069_);
lean_ctor_set(v_reuseFailAlloc_1093_, 1, v_value_1070_);
lean_ctor_set(v_reuseFailAlloc_1093_, 2, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_array_uset(v_x_1067_, v___x_1087_, v___x_1090_);
v_x_1067_ = v___x_1091_;
v_x_1068_ = v_tail_1071_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26___redArg(lean_object* v_i_1095_, lean_object* v_source_1096_, lean_object* v_target_1097_){
_start:
{
lean_object* v___x_1098_; uint8_t v___x_1099_; 
v___x_1098_ = lean_array_get_size(v_source_1096_);
v___x_1099_ = lean_nat_dec_lt(v_i_1095_, v___x_1098_);
if (v___x_1099_ == 0)
{
lean_dec_ref(v_source_1096_);
lean_dec(v_i_1095_);
return v_target_1097_;
}
else
{
lean_object* v_es_1100_; lean_object* v___x_1101_; lean_object* v_source_1102_; lean_object* v_target_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v_es_1100_ = lean_array_fget(v_source_1096_, v_i_1095_);
v___x_1101_ = lean_box(0);
v_source_1102_ = lean_array_fset(v_source_1096_, v_i_1095_, v___x_1101_);
v_target_1103_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26_spec__27___redArg(v_target_1097_, v_es_1100_);
v___x_1104_ = lean_unsigned_to_nat(1u);
v___x_1105_ = lean_nat_add(v_i_1095_, v___x_1104_);
lean_dec(v_i_1095_);
v_i_1095_ = v___x_1105_;
v_source_1096_ = v_source_1102_;
v_target_1097_ = v_target_1103_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25___redArg(lean_object* v_data_1107_){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v_nbuckets_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1108_ = lean_array_get_size(v_data_1107_);
v___x_1109_ = lean_unsigned_to_nat(2u);
v_nbuckets_1110_ = lean_nat_mul(v___x_1108_, v___x_1109_);
v___x_1111_ = lean_unsigned_to_nat(0u);
v___x_1112_ = lean_box(0);
v___x_1113_ = lean_mk_array(v_nbuckets_1110_, v___x_1112_);
v___x_1114_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26___redArg(v___x_1111_, v_data_1107_, v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg(lean_object* v_a_1115_, lean_object* v_x_1116_){
_start:
{
if (lean_obj_tag(v_x_1116_) == 0)
{
uint8_t v___x_1117_; 
v___x_1117_ = 0;
return v___x_1117_;
}
else
{
lean_object* v_key_1118_; lean_object* v_tail_1119_; uint8_t v___x_1120_; 
v_key_1118_ = lean_ctor_get(v_x_1116_, 0);
v_tail_1119_ = lean_ctor_get(v_x_1116_, 2);
v___x_1120_ = l_Lean_ExprStructEq_beq(v_key_1118_, v_a_1115_);
if (v___x_1120_ == 0)
{
v_x_1116_ = v_tail_1119_;
goto _start;
}
else
{
return v___x_1120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg___boxed(lean_object* v_a_1122_, lean_object* v_x_1123_){
_start:
{
uint8_t v_res_1124_; lean_object* v_r_1125_; 
v_res_1124_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg(v_a_1122_, v_x_1123_);
lean_dec(v_x_1123_);
lean_dec_ref(v_a_1122_);
v_r_1125_ = lean_box(v_res_1124_);
return v_r_1125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26___redArg(lean_object* v_a_1126_, lean_object* v_b_1127_, lean_object* v_x_1128_){
_start:
{
if (lean_obj_tag(v_x_1128_) == 0)
{
lean_dec(v_b_1127_);
lean_dec_ref(v_a_1126_);
return v_x_1128_;
}
else
{
lean_object* v_key_1129_; lean_object* v_value_1130_; lean_object* v_tail_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1143_; 
v_key_1129_ = lean_ctor_get(v_x_1128_, 0);
v_value_1130_ = lean_ctor_get(v_x_1128_, 1);
v_tail_1131_ = lean_ctor_get(v_x_1128_, 2);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_x_1128_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1133_ = v_x_1128_;
v_isShared_1134_ = v_isSharedCheck_1143_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_tail_1131_);
lean_inc(v_value_1130_);
lean_inc(v_key_1129_);
lean_dec(v_x_1128_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1143_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint8_t v___x_1135_; 
v___x_1135_ = l_Lean_ExprStructEq_beq(v_key_1129_, v_a_1126_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26___redArg(v_a_1126_, v_b_1127_, v_tail_1131_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 2, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_key_1129_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_value_1130_);
lean_ctor_set(v_reuseFailAlloc_1139_, 2, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
else
{
lean_object* v___x_1141_; 
lean_dec(v_value_1130_);
lean_dec(v_key_1129_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v_b_1127_);
lean_ctor_set(v___x_1133_, 0, v_a_1126_);
v___x_1141_ = v___x_1133_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1126_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_b_1127_);
lean_ctor_set(v_reuseFailAlloc_1142_, 2, v_tail_1131_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18___redArg(lean_object* v_m_1144_, lean_object* v_a_1145_, lean_object* v_b_1146_){
_start:
{
lean_object* v_size_1147_; lean_object* v_buckets_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1191_; 
v_size_1147_ = lean_ctor_get(v_m_1144_, 0);
v_buckets_1148_ = lean_ctor_get(v_m_1144_, 1);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_m_1144_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1150_ = v_m_1144_;
v_isShared_1151_ = v_isSharedCheck_1191_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_buckets_1148_);
lean_inc(v_size_1147_);
lean_dec(v_m_1144_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1191_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1152_; uint64_t v___x_1153_; uint64_t v___x_1154_; uint64_t v___x_1155_; uint64_t v_fold_1156_; uint64_t v___x_1157_; uint64_t v___x_1158_; uint64_t v___x_1159_; size_t v___x_1160_; size_t v___x_1161_; size_t v___x_1162_; size_t v___x_1163_; size_t v___x_1164_; lean_object* v_bkt_1165_; uint8_t v___x_1166_; 
v___x_1152_ = lean_array_get_size(v_buckets_1148_);
v___x_1153_ = l_Lean_ExprStructEq_hash(v_a_1145_);
v___x_1154_ = 32ULL;
v___x_1155_ = lean_uint64_shift_right(v___x_1153_, v___x_1154_);
v_fold_1156_ = lean_uint64_xor(v___x_1153_, v___x_1155_);
v___x_1157_ = 16ULL;
v___x_1158_ = lean_uint64_shift_right(v_fold_1156_, v___x_1157_);
v___x_1159_ = lean_uint64_xor(v_fold_1156_, v___x_1158_);
v___x_1160_ = lean_uint64_to_usize(v___x_1159_);
v___x_1161_ = lean_usize_of_nat(v___x_1152_);
v___x_1162_ = ((size_t)1ULL);
v___x_1163_ = lean_usize_sub(v___x_1161_, v___x_1162_);
v___x_1164_ = lean_usize_land(v___x_1160_, v___x_1163_);
v_bkt_1165_ = lean_array_uget_borrowed(v_buckets_1148_, v___x_1164_);
v___x_1166_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg(v_a_1145_, v_bkt_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v_size_x27_1168_; lean_object* v___x_1169_; lean_object* v_buckets_x27_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1167_ = lean_unsigned_to_nat(1u);
v_size_x27_1168_ = lean_nat_add(v_size_1147_, v___x_1167_);
lean_dec(v_size_1147_);
lean_inc(v_bkt_1165_);
v___x_1169_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1169_, 0, v_a_1145_);
lean_ctor_set(v___x_1169_, 1, v_b_1146_);
lean_ctor_set(v___x_1169_, 2, v_bkt_1165_);
v_buckets_x27_1170_ = lean_array_uset(v_buckets_1148_, v___x_1164_, v___x_1169_);
v___x_1171_ = lean_unsigned_to_nat(4u);
v___x_1172_ = lean_nat_mul(v_size_x27_1168_, v___x_1171_);
v___x_1173_ = lean_unsigned_to_nat(3u);
v___x_1174_ = lean_nat_div(v___x_1172_, v___x_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_array_get_size(v_buckets_x27_1170_);
v___x_1176_ = lean_nat_dec_le(v___x_1174_, v___x_1175_);
lean_dec(v___x_1174_);
if (v___x_1176_ == 0)
{
lean_object* v_val_1177_; lean_object* v___x_1179_; 
v_val_1177_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25___redArg(v_buckets_x27_1170_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 1, v_val_1177_);
lean_ctor_set(v___x_1150_, 0, v_size_x27_1168_);
v___x_1179_ = v___x_1150_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_size_x27_1168_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v_val_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
else
{
lean_object* v___x_1182_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 1, v_buckets_x27_1170_);
lean_ctor_set(v___x_1150_, 0, v_size_x27_1168_);
v___x_1182_ = v___x_1150_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_size_x27_1168_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v_buckets_x27_1170_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
else
{
lean_object* v___x_1184_; lean_object* v_buckets_x27_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
lean_inc(v_bkt_1165_);
v___x_1184_ = lean_box(0);
v_buckets_x27_1185_ = lean_array_uset(v_buckets_1148_, v___x_1164_, v___x_1184_);
v___x_1186_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26___redArg(v_a_1145_, v_b_1146_, v_bkt_1165_);
v___x_1187_ = lean_array_uset(v_buckets_x27_1185_, v___x_1164_, v___x_1186_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 1, v___x_1187_);
v___x_1189_ = v___x_1150_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_size_1147_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__2(lean_object* v_a_1192_, lean_object* v_e_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1196_ = lean_st_ref_take(v_a_1192_);
v___x_1197_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18___redArg(v___x_1196_, v_e_1193_, v_a_1194_);
v___x_1198_ = lean_st_ref_set(v_a_1192_, v___x_1197_);
v___x_1199_ = lean_box(0);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__2___boxed(lean_object* v_a_1200_, lean_object* v_e_1201_, lean_object* v_a_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__2(v_a_1200_, v_e_1201_, v_a_1202_);
lean_dec(v_a_1200_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg(lean_object* v_a_1205_, lean_object* v_x_1206_){
_start:
{
if (lean_obj_tag(v_x_1206_) == 0)
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_box(0);
return v___x_1207_;
}
else
{
lean_object* v_key_1208_; lean_object* v_value_1209_; lean_object* v_tail_1210_; uint8_t v___x_1211_; 
v_key_1208_ = lean_ctor_get(v_x_1206_, 0);
v_value_1209_ = lean_ctor_get(v_x_1206_, 1);
v_tail_1210_ = lean_ctor_get(v_x_1206_, 2);
v___x_1211_ = l_Lean_ExprStructEq_beq(v_key_1208_, v_a_1205_);
if (v___x_1211_ == 0)
{
v_x_1206_ = v_tail_1210_;
goto _start;
}
else
{
lean_object* v___x_1213_; 
lean_inc(v_value_1209_);
v___x_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1213_, 0, v_value_1209_);
return v___x_1213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg___boxed(lean_object* v_a_1214_, lean_object* v_x_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg(v_a_1214_, v_x_1215_);
lean_dec(v_x_1215_);
lean_dec_ref(v_a_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg(lean_object* v_m_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_buckets_1219_; lean_object* v___x_1220_; uint64_t v___x_1221_; uint64_t v___x_1222_; uint64_t v___x_1223_; uint64_t v_fold_1224_; uint64_t v___x_1225_; uint64_t v___x_1226_; uint64_t v___x_1227_; size_t v___x_1228_; size_t v___x_1229_; size_t v___x_1230_; size_t v___x_1231_; size_t v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v_buckets_1219_ = lean_ctor_get(v_m_1217_, 1);
v___x_1220_ = lean_array_get_size(v_buckets_1219_);
v___x_1221_ = l_Lean_ExprStructEq_hash(v_a_1218_);
v___x_1222_ = 32ULL;
v___x_1223_ = lean_uint64_shift_right(v___x_1221_, v___x_1222_);
v_fold_1224_ = lean_uint64_xor(v___x_1221_, v___x_1223_);
v___x_1225_ = 16ULL;
v___x_1226_ = lean_uint64_shift_right(v_fold_1224_, v___x_1225_);
v___x_1227_ = lean_uint64_xor(v_fold_1224_, v___x_1226_);
v___x_1228_ = lean_uint64_to_usize(v___x_1227_);
v___x_1229_ = lean_usize_of_nat(v___x_1220_);
v___x_1230_ = ((size_t)1ULL);
v___x_1231_ = lean_usize_sub(v___x_1229_, v___x_1230_);
v___x_1232_ = lean_usize_land(v___x_1228_, v___x_1231_);
v___x_1233_ = lean_array_uget_borrowed(v_buckets_1219_, v___x_1232_);
v___x_1234_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg(v_a_1218_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg___boxed(lean_object* v_m_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg(v_m_1235_, v_a_1236_);
lean_dec_ref(v_a_1236_);
lean_dec_ref(v_m_1235_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0(lean_object* v_k_1238_, lean_object* v___y_1239_, lean_object* v_b_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v___x_1246_; 
lean_inc(v___y_1244_);
lean_inc_ref(v___y_1243_);
lean_inc(v___y_1242_);
lean_inc_ref(v___y_1241_);
lean_inc(v___y_1239_);
v___x_1246_ = lean_apply_7(v_k_1238_, v_b_1240_, v___y_1239_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, lean_box(0));
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0___boxed(lean_object* v_k_1247_, lean_object* v___y_1248_, lean_object* v_b_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0(v_k_1247_, v___y_1248_, v_b_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1248_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg(lean_object* v_name_1256_, uint8_t v_bi_1257_, lean_object* v_type_1258_, lean_object* v_k_1259_, uint8_t v_kind_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v___f_1267_; lean_object* v___x_1268_; 
lean_inc(v___y_1261_);
v___f_1267_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1267_, 0, v_k_1259_);
lean_closure_set(v___f_1267_, 1, v___y_1261_);
v___x_1268_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1256_, v_bi_1257_, v_type_1258_, v___f_1267_, v_kind_1260_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
if (lean_obj_tag(v___x_1268_) == 0)
{
return v___x_1268_;
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___boxed(lean_object* v_name_1277_, lean_object* v_bi_1278_, lean_object* v_type_1279_, lean_object* v_k_1280_, lean_object* v_kind_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
uint8_t v_bi_boxed_1288_; uint8_t v_kind_boxed_1289_; lean_object* v_res_1290_; 
v_bi_boxed_1288_ = lean_unbox(v_bi_1278_);
v_kind_boxed_1289_ = lean_unbox(v_kind_1281_);
v_res_1290_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg(v_name_1277_, v_bi_boxed_1288_, v_type_1279_, v_k_1280_, v_kind_boxed_1289_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__2(lean_object* v___x_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1291_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__2___boxed(lean_object* v___x_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__2(v___x_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg(lean_object* v_name_1305_, lean_object* v_type_1306_, lean_object* v_val_1307_, lean_object* v_k_1308_, uint8_t v_nondep_1309_, uint8_t v_kind_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v___f_1317_; lean_object* v___x_1318_; 
lean_inc(v___y_1311_);
v___f_1317_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1317_, 0, v_k_1308_);
lean_closure_set(v___f_1317_, 1, v___y_1311_);
v___x_1318_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1305_, v_type_1306_, v_val_1307_, v___f_1317_, v_nondep_1309_, v_kind_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
if (lean_obj_tag(v___x_1318_) == 0)
{
return v___x_1318_;
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg___boxed(lean_object* v_name_1327_, lean_object* v_type_1328_, lean_object* v_val_1329_, lean_object* v_k_1330_, lean_object* v_nondep_1331_, lean_object* v_kind_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
uint8_t v_nondep_boxed_1339_; uint8_t v_kind_boxed_1340_; lean_object* v_res_1341_; 
v_nondep_boxed_1339_ = lean_unbox(v_nondep_1331_);
v_kind_boxed_1340_ = lean_unbox(v_kind_1332_);
v_res_1341_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg(v_name_1327_, v_type_1328_, v_val_1329_, v_k_1330_, v_nondep_boxed_1339_, v_kind_boxed_1340_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
return v_res_1341_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__3(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = l_Lean_maxRecDepthErrorMessage;
v___x_1348_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__4(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__3);
v___x_1350_ = l_Lean_MessageData_ofFormat(v___x_1349_);
return v___x_1350_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__5(void){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__4);
v___x_1352_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__2));
v___x_1353_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
lean_ctor_set(v___x_1353_, 1, v___x_1351_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg(lean_object* v_ref_1354_){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1356_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___closed__5);
v___x_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1357_, 0, v_ref_1354_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg___boxed(lean_object* v_ref_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg(v_ref_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg(lean_object* v_x_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v___y_1370_; lean_object* v_fileName_1379_; lean_object* v_fileMap_1380_; lean_object* v_options_1381_; lean_object* v_currRecDepth_1382_; lean_object* v_maxRecDepth_1383_; lean_object* v_ref_1384_; lean_object* v_currNamespace_1385_; lean_object* v_openDecls_1386_; lean_object* v_initHeartbeats_1387_; lean_object* v_maxHeartbeats_1388_; lean_object* v_quotContext_1389_; lean_object* v_currMacroScope_1390_; uint8_t v_diag_1391_; lean_object* v_cancelTk_x3f_1392_; uint8_t v_suppressElabErrors_1393_; lean_object* v_inheritedTraceOptions_1394_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v_fileName_1379_ = lean_ctor_get(v___y_1366_, 0);
v_fileMap_1380_ = lean_ctor_get(v___y_1366_, 1);
v_options_1381_ = lean_ctor_get(v___y_1366_, 2);
v_currRecDepth_1382_ = lean_ctor_get(v___y_1366_, 3);
v_maxRecDepth_1383_ = lean_ctor_get(v___y_1366_, 4);
v_ref_1384_ = lean_ctor_get(v___y_1366_, 5);
v_currNamespace_1385_ = lean_ctor_get(v___y_1366_, 6);
v_openDecls_1386_ = lean_ctor_get(v___y_1366_, 7);
v_initHeartbeats_1387_ = lean_ctor_get(v___y_1366_, 8);
v_maxHeartbeats_1388_ = lean_ctor_get(v___y_1366_, 9);
v_quotContext_1389_ = lean_ctor_get(v___y_1366_, 10);
v_currMacroScope_1390_ = lean_ctor_get(v___y_1366_, 11);
v_diag_1391_ = lean_ctor_get_uint8(v___y_1366_, sizeof(void*)*14);
v_cancelTk_x3f_1392_ = lean_ctor_get(v___y_1366_, 12);
v_suppressElabErrors_1393_ = lean_ctor_get_uint8(v___y_1366_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1394_ = lean_ctor_get(v___y_1366_, 13);
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = lean_nat_dec_eq(v_maxRecDepth_1383_, v___x_1400_);
if (v___x_1401_ == 0)
{
uint8_t v___x_1402_; 
v___x_1402_ = lean_nat_dec_eq(v_currRecDepth_1382_, v_maxRecDepth_1383_);
if (v___x_1402_ == 0)
{
goto v___jp_1395_;
}
else
{
lean_object* v___x_1403_; 
lean_dec_ref(v_x_1362_);
lean_inc(v_ref_1384_);
v___x_1403_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg(v_ref_1384_);
v___y_1370_ = v___x_1403_;
goto v___jp_1369_;
}
}
else
{
goto v___jp_1395_;
}
v___jp_1369_:
{
if (lean_obj_tag(v___y_1370_) == 0)
{
return v___y_1370_;
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v___y_1370_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___y_1370_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___y_1370_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___y_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
v___jp_1395_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1396_ = lean_unsigned_to_nat(1u);
v___x_1397_ = lean_nat_add(v_currRecDepth_1382_, v___x_1396_);
lean_inc_ref(v_inheritedTraceOptions_1394_);
lean_inc(v_cancelTk_x3f_1392_);
lean_inc(v_currMacroScope_1390_);
lean_inc(v_quotContext_1389_);
lean_inc(v_maxHeartbeats_1388_);
lean_inc(v_initHeartbeats_1387_);
lean_inc(v_openDecls_1386_);
lean_inc(v_currNamespace_1385_);
lean_inc(v_ref_1384_);
lean_inc(v_maxRecDepth_1383_);
lean_inc_ref(v_options_1381_);
lean_inc_ref(v_fileMap_1380_);
lean_inc_ref(v_fileName_1379_);
v___x_1398_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1398_, 0, v_fileName_1379_);
lean_ctor_set(v___x_1398_, 1, v_fileMap_1380_);
lean_ctor_set(v___x_1398_, 2, v_options_1381_);
lean_ctor_set(v___x_1398_, 3, v___x_1397_);
lean_ctor_set(v___x_1398_, 4, v_maxRecDepth_1383_);
lean_ctor_set(v___x_1398_, 5, v_ref_1384_);
lean_ctor_set(v___x_1398_, 6, v_currNamespace_1385_);
lean_ctor_set(v___x_1398_, 7, v_openDecls_1386_);
lean_ctor_set(v___x_1398_, 8, v_initHeartbeats_1387_);
lean_ctor_set(v___x_1398_, 9, v_maxHeartbeats_1388_);
lean_ctor_set(v___x_1398_, 10, v_quotContext_1389_);
lean_ctor_set(v___x_1398_, 11, v_currMacroScope_1390_);
lean_ctor_set(v___x_1398_, 12, v_cancelTk_x3f_1392_);
lean_ctor_set(v___x_1398_, 13, v_inheritedTraceOptions_1394_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*14, v_diag_1391_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*14 + 1, v_suppressElabErrors_1393_);
lean_inc(v___y_1367_);
lean_inc(v___y_1365_);
lean_inc_ref(v___y_1364_);
lean_inc(v___y_1363_);
v___x_1399_ = lean_apply_6(v_x_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___x_1398_, v___y_1367_, lean_box(0));
v___y_1370_ = v___x_1399_;
goto v___jp_1369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg___boxed(lean_object* v_x_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg(v_x_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___lam__0(lean_object* v_fvars_1414_, lean_object* v_pre_1415_, lean_object* v_post_1416_, uint8_t v_usedLetOnly_1417_, uint8_t v_skipConstInApp_1418_, uint8_t v_skipInstances_1419_, lean_object* v_body_1420_, lean_object* v_x_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = lean_array_push(v_fvars_1414_, v_x_1421_);
v___x_1429_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14(v_pre_1415_, v_post_1416_, v_usedLetOnly_1417_, v_skipConstInApp_1418_, v_skipInstances_1419_, v___x_1428_, v_body_1420_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___lam__0___boxed(lean_object* v_fvars_1430_, lean_object* v_pre_1431_, lean_object* v_post_1432_, lean_object* v_usedLetOnly_1433_, lean_object* v_skipConstInApp_1434_, lean_object* v_skipInstances_1435_, lean_object* v_body_1436_, lean_object* v_x_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
uint8_t v_usedLetOnly_boxed_1444_; uint8_t v_skipConstInApp_boxed_1445_; uint8_t v_skipInstances_boxed_1446_; lean_object* v_res_1447_; 
v_usedLetOnly_boxed_1444_ = lean_unbox(v_usedLetOnly_1433_);
v_skipConstInApp_boxed_1445_ = lean_unbox(v_skipConstInApp_1434_);
v_skipInstances_boxed_1446_ = lean_unbox(v_skipInstances_1435_);
v_res_1447_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___lam__0(v_fvars_1430_, v_pre_1431_, v_post_1432_, v_usedLetOnly_boxed_1444_, v_skipConstInApp_boxed_1445_, v_skipInstances_boxed_1446_, v_body_1436_, v_x_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(lean_object* v_pre_1448_, lean_object* v_post_1449_, uint8_t v_usedLetOnly_1450_, uint8_t v_skipConstInApp_1451_, uint8_t v_skipInstances_1452_, lean_object* v_e_1453_, lean_object* v_a_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v___x_1460_; 
lean_inc_ref(v_post_1449_);
lean_inc(v___y_1458_);
lean_inc_ref(v___y_1457_);
lean_inc(v___y_1456_);
lean_inc_ref(v___y_1455_);
lean_inc_ref(v_e_1453_);
v___x_1460_ = lean_apply_6(v_post_1449_, v_e_1453_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, lean_box(0));
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1479_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1479_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1479_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
switch(lean_obj_tag(v_a_1461_))
{
case 0:
{
lean_object* v_e_1465_; lean_object* v___x_1467_; 
lean_dec_ref(v_e_1453_);
lean_dec_ref(v_post_1449_);
lean_dec_ref(v_pre_1448_);
v_e_1465_ = lean_ctor_get(v_a_1461_, 0);
lean_inc_ref(v_e_1465_);
lean_dec_ref(v_a_1461_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v_e_1465_);
v___x_1467_ = v___x_1463_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_e_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
case 1:
{
lean_object* v_e_1469_; lean_object* v___x_1470_; 
lean_del_object(v___x_1463_);
lean_dec_ref(v_e_1453_);
v_e_1469_ = lean_ctor_get(v_a_1461_, 0);
lean_inc_ref(v_e_1469_);
lean_dec_ref(v_a_1461_);
v___x_1470_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1448_, v_post_1449_, v_usedLetOnly_1450_, v_skipConstInApp_1451_, v_skipInstances_1452_, v_e_1469_, v_a_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
return v___x_1470_;
}
default: 
{
lean_object* v_e_x3f_1471_; 
lean_dec_ref(v_post_1449_);
lean_dec_ref(v_pre_1448_);
v_e_x3f_1471_ = lean_ctor_get(v_a_1461_, 0);
lean_inc(v_e_x3f_1471_);
lean_dec_ref(v_a_1461_);
if (lean_obj_tag(v_e_x3f_1471_) == 0)
{
lean_object* v___x_1473_; 
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v_e_1453_);
v___x_1473_ = v___x_1463_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_e_1453_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
else
{
lean_object* v_val_1475_; lean_object* v___x_1477_; 
lean_dec_ref(v_e_1453_);
v_val_1475_ = lean_ctor_get(v_e_x3f_1471_, 0);
lean_inc(v_val_1475_);
lean_dec_ref(v_e_x3f_1471_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v_val_1475_);
v___x_1477_ = v___x_1463_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_val_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec_ref(v_e_1453_);
lean_dec_ref(v_post_1449_);
lean_dec_ref(v_pre_1448_);
v_a_1480_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1460_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1460_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14(lean_object* v_pre_1488_, lean_object* v_post_1489_, uint8_t v_usedLetOnly_1490_, uint8_t v_skipConstInApp_1491_, uint8_t v_skipInstances_1492_, lean_object* v_fvars_1493_, lean_object* v_e_1494_, lean_object* v_a_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
if (lean_obj_tag(v_e_1494_) == 6)
{
lean_object* v_binderName_1501_; lean_object* v_binderType_1502_; lean_object* v_body_1503_; uint8_t v_binderInfo_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_binderName_1501_ = lean_ctor_get(v_e_1494_, 0);
lean_inc(v_binderName_1501_);
v_binderType_1502_ = lean_ctor_get(v_e_1494_, 1);
lean_inc_ref(v_binderType_1502_);
v_body_1503_ = lean_ctor_get(v_e_1494_, 2);
lean_inc_ref(v_body_1503_);
v_binderInfo_1504_ = lean_ctor_get_uint8(v_e_1494_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_1494_);
v___x_1505_ = lean_expr_instantiate_rev(v_binderType_1502_, v_fvars_1493_);
lean_dec_ref(v_binderType_1502_);
lean_inc_ref(v_post_1489_);
lean_inc_ref(v_pre_1488_);
v___x_1506_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1488_, v_post_1489_, v_usedLetOnly_1490_, v_skipConstInApp_1491_, v_skipInstances_1492_, v___x_1505_, v_a_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___f_1511_; uint8_t v___x_1512_; lean_object* v___x_1513_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref(v___x_1506_);
v___x_1508_ = lean_box(v_usedLetOnly_1490_);
v___x_1509_ = lean_box(v_skipConstInApp_1491_);
v___x_1510_ = lean_box(v_skipInstances_1492_);
v___f_1511_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1511_, 0, v_fvars_1493_);
lean_closure_set(v___f_1511_, 1, v_pre_1488_);
lean_closure_set(v___f_1511_, 2, v_post_1489_);
lean_closure_set(v___f_1511_, 3, v___x_1508_);
lean_closure_set(v___f_1511_, 4, v___x_1509_);
lean_closure_set(v___f_1511_, 5, v___x_1510_);
lean_closure_set(v___f_1511_, 6, v_body_1503_);
v___x_1512_ = 0;
v___x_1513_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg(v_binderName_1501_, v_binderInfo_1504_, v_a_1507_, v___f_1511_, v___x_1512_, v_a_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
return v___x_1513_;
}
else
{
lean_dec_ref(v_body_1503_);
lean_dec(v_binderName_1501_);
lean_dec_ref(v_fvars_1493_);
lean_dec_ref(v_post_1489_);
lean_dec_ref(v_pre_1488_);
return v___x_1506_;
}
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = lean_expr_instantiate_rev(v_e_1494_, v_fvars_1493_);
lean_dec_ref(v_e_1494_);
lean_inc_ref(v_post_1489_);
lean_inc_ref(v_pre_1488_);
v___x_1515_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1488_, v_post_1489_, v_usedLetOnly_1490_, v_skipConstInApp_1491_, v_skipInstances_1492_, v___x_1514_, v_a_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; uint8_t v___x_1517_; uint8_t v___x_1518_; uint8_t v___x_1519_; lean_object* v___x_1520_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref(v___x_1515_);
v___x_1517_ = 0;
v___x_1518_ = 1;
v___x_1519_ = 1;
v___x_1520_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1493_, v_a_1516_, v___x_1517_, v_usedLetOnly_1490_, v___x_1517_, v___x_1518_, v___x_1519_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec_ref(v_fvars_1493_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1522_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1488_, v_post_1489_, v_usedLetOnly_1490_, v_skipConstInApp_1491_, v_skipInstances_1492_, v_a_1521_, v_a_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
return v___x_1522_;
}
else
{
lean_dec_ref(v_post_1489_);
lean_dec_ref(v_pre_1488_);
return v___x_1520_;
}
}
else
{
lean_dec_ref(v_fvars_1493_);
lean_dec_ref(v_post_1489_);
lean_dec_ref(v_pre_1488_);
return v___x_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___lam__0(lean_object* v_fvars_1523_, lean_object* v_pre_1524_, lean_object* v_post_1525_, uint8_t v_usedLetOnly_1526_, uint8_t v_skipConstInApp_1527_, uint8_t v_skipInstances_1528_, lean_object* v_body_1529_, lean_object* v_x_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = lean_array_push(v_fvars_1523_, v_x_1530_);
v___x_1538_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15(v_pre_1524_, v_post_1525_, v_usedLetOnly_1526_, v_skipConstInApp_1527_, v_skipInstances_1528_, v___x_1537_, v_body_1529_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___lam__0___boxed(lean_object* v_fvars_1539_, lean_object* v_pre_1540_, lean_object* v_post_1541_, lean_object* v_usedLetOnly_1542_, lean_object* v_skipConstInApp_1543_, lean_object* v_skipInstances_1544_, lean_object* v_body_1545_, lean_object* v_x_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v_usedLetOnly_boxed_1553_; uint8_t v_skipConstInApp_boxed_1554_; uint8_t v_skipInstances_boxed_1555_; lean_object* v_res_1556_; 
v_usedLetOnly_boxed_1553_ = lean_unbox(v_usedLetOnly_1542_);
v_skipConstInApp_boxed_1554_ = lean_unbox(v_skipConstInApp_1543_);
v_skipInstances_boxed_1555_ = lean_unbox(v_skipInstances_1544_);
v_res_1556_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___lam__0(v_fvars_1539_, v_pre_1540_, v_post_1541_, v_usedLetOnly_boxed_1553_, v_skipConstInApp_boxed_1554_, v_skipInstances_boxed_1555_, v_body_1545_, v_x_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15(lean_object* v_pre_1557_, lean_object* v_post_1558_, uint8_t v_usedLetOnly_1559_, uint8_t v_skipConstInApp_1560_, uint8_t v_skipInstances_1561_, lean_object* v_fvars_1562_, lean_object* v_e_1563_, lean_object* v_a_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
if (lean_obj_tag(v_e_1563_) == 8)
{
lean_object* v_declName_1570_; lean_object* v_type_1571_; lean_object* v_value_1572_; lean_object* v_body_1573_; uint8_t v_nondep_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v_declName_1570_ = lean_ctor_get(v_e_1563_, 0);
lean_inc(v_declName_1570_);
v_type_1571_ = lean_ctor_get(v_e_1563_, 1);
lean_inc_ref(v_type_1571_);
v_value_1572_ = lean_ctor_get(v_e_1563_, 2);
lean_inc_ref(v_value_1572_);
v_body_1573_ = lean_ctor_get(v_e_1563_, 3);
lean_inc_ref(v_body_1573_);
v_nondep_1574_ = lean_ctor_get_uint8(v_e_1563_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_1563_);
v___x_1575_ = lean_expr_instantiate_rev(v_type_1571_, v_fvars_1562_);
lean_dec_ref(v_type_1571_);
lean_inc_ref(v_post_1558_);
lean_inc_ref(v_pre_1557_);
v___x_1576_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1557_, v_post_1558_, v_usedLetOnly_1559_, v_skipConstInApp_1560_, v_skipInstances_1561_, v___x_1575_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref(v___x_1576_);
v___x_1578_ = lean_expr_instantiate_rev(v_value_1572_, v_fvars_1562_);
lean_dec_ref(v_value_1572_);
lean_inc_ref(v_post_1558_);
lean_inc_ref(v_pre_1557_);
v___x_1579_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1557_, v_post_1558_, v_usedLetOnly_1559_, v_skipConstInApp_1560_, v_skipInstances_1561_, v___x_1578_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___f_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref(v___x_1579_);
v___x_1581_ = lean_box(v_usedLetOnly_1559_);
v___x_1582_ = lean_box(v_skipConstInApp_1560_);
v___x_1583_ = lean_box(v_skipInstances_1561_);
v___f_1584_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1584_, 0, v_fvars_1562_);
lean_closure_set(v___f_1584_, 1, v_pre_1557_);
lean_closure_set(v___f_1584_, 2, v_post_1558_);
lean_closure_set(v___f_1584_, 3, v___x_1581_);
lean_closure_set(v___f_1584_, 4, v___x_1582_);
lean_closure_set(v___f_1584_, 5, v___x_1583_);
lean_closure_set(v___f_1584_, 6, v_body_1573_);
v___x_1585_ = 0;
v___x_1586_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg(v_declName_1570_, v_a_1577_, v_a_1580_, v___f_1584_, v_nondep_1574_, v___x_1585_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
return v___x_1586_;
}
else
{
lean_dec(v_a_1577_);
lean_dec_ref(v_body_1573_);
lean_dec(v_declName_1570_);
lean_dec_ref(v_fvars_1562_);
lean_dec_ref(v_post_1558_);
lean_dec_ref(v_pre_1557_);
return v___x_1579_;
}
}
else
{
lean_dec_ref(v_body_1573_);
lean_dec_ref(v_value_1572_);
lean_dec(v_declName_1570_);
lean_dec_ref(v_fvars_1562_);
lean_dec_ref(v_post_1558_);
lean_dec_ref(v_pre_1557_);
return v___x_1576_;
}
}
else
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1587_ = lean_expr_instantiate_rev(v_e_1563_, v_fvars_1562_);
lean_dec_ref(v_e_1563_);
lean_inc_ref(v_post_1558_);
lean_inc_ref(v_pre_1557_);
v___x_1588_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1557_, v_post_1558_, v_usedLetOnly_1559_, v_skipConstInApp_1560_, v_skipInstances_1561_, v___x_1587_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; uint8_t v___x_1590_; uint8_t v___x_1591_; lean_object* v___x_1592_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref(v___x_1588_);
v___x_1590_ = 0;
v___x_1591_ = 1;
v___x_1592_ = l_Lean_Meta_mkLetFVars(v_fvars_1562_, v_a_1589_, v_usedLetOnly_1559_, v___x_1590_, v___x_1591_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
lean_dec_ref(v_fvars_1562_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v_a_1593_; lean_object* v___x_1594_; 
v_a_1593_ = lean_ctor_get(v___x_1592_, 0);
lean_inc(v_a_1593_);
lean_dec_ref(v___x_1592_);
v___x_1594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1557_, v_post_1558_, v_usedLetOnly_1559_, v_skipConstInApp_1560_, v_skipInstances_1561_, v_a_1593_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
return v___x_1594_;
}
else
{
lean_dec_ref(v_post_1558_);
lean_dec_ref(v_pre_1557_);
return v___x_1592_;
}
}
else
{
lean_dec_ref(v_fvars_1562_);
lean_dec_ref(v_post_1558_);
lean_dec_ref(v_pre_1557_);
return v___x_1588_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1595_; lean_object* v_dummy_1596_; 
v___x_1595_ = lean_box(0);
v_dummy_1596_ = l_Lean_Expr_sort___override(v___x_1595_);
return v_dummy_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__9(lean_object* v_pre_1597_, lean_object* v_post_1598_, uint8_t v_usedLetOnly_1599_, uint8_t v_skipConstInApp_1600_, uint8_t v_skipInstances_1601_, size_t v_sz_1602_, size_t v_i_1603_, lean_object* v_bs_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
uint8_t v___x_1611_; 
v___x_1611_ = lean_usize_dec_lt(v_i_1603_, v_sz_1602_);
if (v___x_1611_ == 0)
{
lean_object* v___x_1612_; 
lean_dec_ref(v_post_1598_);
lean_dec_ref(v_pre_1597_);
v___x_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1612_, 0, v_bs_1604_);
return v___x_1612_;
}
else
{
lean_object* v_v_1613_; lean_object* v___x_1614_; 
v_v_1613_ = lean_array_uget_borrowed(v_bs_1604_, v_i_1603_);
lean_inc(v_v_1613_);
lean_inc_ref(v_post_1598_);
lean_inc_ref(v_pre_1597_);
v___x_1614_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1597_, v_post_1598_, v_usedLetOnly_1599_, v_skipConstInApp_1600_, v_skipInstances_1601_, v_v_1613_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; lean_object* v___x_1616_; lean_object* v_bs_x27_1617_; size_t v___x_1618_; size_t v___x_1619_; lean_object* v___x_1620_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_a_1615_);
lean_dec_ref(v___x_1614_);
v___x_1616_ = lean_unsigned_to_nat(0u);
v_bs_x27_1617_ = lean_array_uset(v_bs_1604_, v_i_1603_, v___x_1616_);
v___x_1618_ = ((size_t)1ULL);
v___x_1619_ = lean_usize_add(v_i_1603_, v___x_1618_);
v___x_1620_ = lean_array_uset(v_bs_x27_1617_, v_i_1603_, v_a_1615_);
v_i_1603_ = v___x_1619_;
v_bs_1604_ = v___x_1620_;
goto _start;
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec_ref(v_bs_1604_);
lean_dec_ref(v_post_1598_);
lean_dec_ref(v_pre_1597_);
v_a_1622_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1614_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1614_);
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
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0(lean_object* v_pre_1630_, lean_object* v_post_1631_, uint8_t v_usedLetOnly_1632_, uint8_t v_skipConstInApp_1633_, uint8_t v_skipInstances_1634_, lean_object* v___x_1635_, lean_object* v___y_1636_, lean_object* v_b_1637_, lean_object* v_a_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1630_, v_post_1631_, v_usedLetOnly_1632_, v_skipConstInApp_1633_, v_skipInstances_1634_, v___x_1635_, v___y_1636_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1654_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1654_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1654_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1649_ = lean_array_fset(v_b_1637_, v_a_1638_, v_a_1645_);
v___x_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 0, v___x_1650_);
v___x_1652_ = v___x_1647_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
else
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec_ref(v_b_1637_);
v_a_1655_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1644_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1644_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0___boxed(lean_object* v_pre_1663_, lean_object* v_post_1664_, lean_object* v_usedLetOnly_1665_, lean_object* v_skipConstInApp_1666_, lean_object* v_skipInstances_1667_, lean_object* v___x_1668_, lean_object* v___y_1669_, lean_object* v_b_1670_, lean_object* v_a_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
uint8_t v_usedLetOnly_boxed_1677_; uint8_t v_skipConstInApp_boxed_1678_; uint8_t v_skipInstances_boxed_1679_; lean_object* v_res_1680_; 
v_usedLetOnly_boxed_1677_ = lean_unbox(v_usedLetOnly_1665_);
v_skipConstInApp_boxed_1678_ = lean_unbox(v_skipConstInApp_1666_);
v_skipInstances_boxed_1679_ = lean_unbox(v_skipInstances_1667_);
v_res_1680_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0(v_pre_1663_, v_post_1664_, v_usedLetOnly_boxed_1677_, v_skipConstInApp_boxed_1678_, v_skipInstances_boxed_1679_, v___x_1668_, v___y_1669_, v_b_1670_, v_a_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v_a_1671_);
lean_dec(v___y_1669_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg(lean_object* v_upperBound_1681_, lean_object* v___x_1682_, lean_object* v_pre_1683_, lean_object* v_post_1684_, uint8_t v_usedLetOnly_1685_, uint8_t v_skipConstInApp_1686_, uint8_t v_skipInstances_1687_, lean_object* v_a_1688_, lean_object* v_b_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___y_1697_; uint8_t v___x_1720_; 
v___x_1720_ = lean_nat_dec_lt(v_a_1688_, v_upperBound_1681_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_a_1688_);
lean_dec_ref(v_post_1684_);
lean_dec_ref(v_pre_1683_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_b_1689_);
return v___x_1721_;
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1722_ = lean_array_fget_borrowed(v_b_1689_, v_a_1688_);
v___x_1723_ = lean_array_get_size(v___x_1682_);
v___x_1724_ = lean_nat_dec_lt(v_a_1688_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___f_1728_; 
lean_inc(v___x_1722_);
v___x_1725_ = lean_box(v_usedLetOnly_1685_);
v___x_1726_ = lean_box(v_skipConstInApp_1686_);
v___x_1727_ = lean_box(v_skipInstances_1687_);
lean_inc(v_a_1688_);
lean_inc(v___y_1690_);
lean_inc_ref(v_post_1684_);
lean_inc_ref(v_pre_1683_);
v___f_1728_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1728_, 0, v_pre_1683_);
lean_closure_set(v___f_1728_, 1, v_post_1684_);
lean_closure_set(v___f_1728_, 2, v___x_1725_);
lean_closure_set(v___f_1728_, 3, v___x_1726_);
lean_closure_set(v___f_1728_, 4, v___x_1727_);
lean_closure_set(v___f_1728_, 5, v___x_1722_);
lean_closure_set(v___f_1728_, 6, v___y_1690_);
lean_closure_set(v___f_1728_, 7, v_b_1689_);
lean_closure_set(v___f_1728_, 8, v_a_1688_);
v___y_1697_ = v___f_1728_;
goto v___jp_1696_;
}
else
{
lean_object* v___x_1729_; uint8_t v_isInstance_1730_; 
v___x_1729_ = lean_array_fget_borrowed(v___x_1682_, v_a_1688_);
v_isInstance_1730_ = lean_ctor_get_uint8(v___x_1729_, sizeof(void*)*1 + 4);
if (v_isInstance_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; 
lean_inc(v___x_1722_);
v___x_1731_ = lean_box(v_usedLetOnly_1685_);
v___x_1732_ = lean_box(v_skipConstInApp_1686_);
v___x_1733_ = lean_box(v_skipInstances_1687_);
lean_inc(v_a_1688_);
lean_inc(v___y_1690_);
lean_inc_ref(v_post_1684_);
lean_inc_ref(v_pre_1683_);
v___f_1734_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1734_, 0, v_pre_1683_);
lean_closure_set(v___f_1734_, 1, v_post_1684_);
lean_closure_set(v___f_1734_, 2, v___x_1731_);
lean_closure_set(v___f_1734_, 3, v___x_1732_);
lean_closure_set(v___f_1734_, 4, v___x_1733_);
lean_closure_set(v___f_1734_, 5, v___x_1722_);
lean_closure_set(v___f_1734_, 6, v___y_1690_);
lean_closure_set(v___f_1734_, 7, v_b_1689_);
lean_closure_set(v___f_1734_, 8, v_a_1688_);
v___y_1697_ = v___f_1734_;
goto v___jp_1696_;
}
else
{
lean_object* v___x_1735_; lean_object* v___f_1736_; 
v___x_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_b_1689_);
v___f_1736_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1736_, 0, v___x_1735_);
v___y_1697_ = v___f_1736_;
goto v___jp_1696_;
}
}
}
v___jp_1696_:
{
lean_object* v___x_1698_; 
lean_inc(v___y_1694_);
lean_inc_ref(v___y_1693_);
lean_inc(v___y_1692_);
lean_inc_ref(v___y_1691_);
v___x_1698_ = lean_apply_5(v___y_1697_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, lean_box(0));
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1711_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1701_ = v___x_1698_;
v_isShared_1702_ = v_isSharedCheck_1711_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1698_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1711_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
if (lean_obj_tag(v_a_1699_) == 0)
{
lean_object* v_a_1703_; lean_object* v___x_1705_; 
lean_dec(v_a_1688_);
lean_dec_ref(v_post_1684_);
lean_dec_ref(v_pre_1683_);
v_a_1703_ = lean_ctor_get(v_a_1699_, 0);
lean_inc(v_a_1703_);
lean_dec_ref(v_a_1699_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v_a_1703_);
v___x_1705_ = v___x_1701_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
lean_del_object(v___x_1701_);
v_a_1707_ = lean_ctor_get(v_a_1699_, 0);
lean_inc(v_a_1707_);
lean_dec_ref(v_a_1699_);
v___x_1708_ = lean_unsigned_to_nat(1u);
v___x_1709_ = lean_nat_add(v_a_1688_, v___x_1708_);
lean_dec(v_a_1688_);
v_a_1688_ = v___x_1709_;
v_b_1689_ = v_a_1707_;
goto _start;
}
}
}
else
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1719_; 
lean_dec(v_a_1688_);
lean_dec_ref(v_post_1684_);
lean_dec_ref(v_pre_1683_);
v_a_1712_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1714_ = v___x_1698_;
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1698_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_a_1712_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__16(uint8_t v_skipInstances_1737_, lean_object* v_pre_1738_, lean_object* v_post_1739_, uint8_t v_usedLetOnly_1740_, uint8_t v_skipConstInApp_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_, lean_object* v_x_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_f_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; 
if (lean_obj_tag(v_x_1742_) == 5)
{
lean_object* v_fn_1800_; lean_object* v_arg_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v_fn_1800_ = lean_ctor_get(v_x_1742_, 0);
lean_inc_ref(v_fn_1800_);
v_arg_1801_ = lean_ctor_get(v_x_1742_, 1);
lean_inc_ref(v_arg_1801_);
lean_dec_ref(v_x_1742_);
v___x_1802_ = lean_array_set(v_x_1743_, v_x_1744_, v_arg_1801_);
v___x_1803_ = lean_unsigned_to_nat(1u);
v___x_1804_ = lean_nat_sub(v_x_1744_, v___x_1803_);
lean_dec(v_x_1744_);
v_x_1742_ = v_fn_1800_;
v_x_1743_ = v___x_1802_;
v_x_1744_ = v___x_1804_;
goto _start;
}
else
{
lean_dec(v_x_1744_);
if (v_skipConstInApp_1741_ == 0)
{
goto v___jp_1797_;
}
else
{
uint8_t v___x_1806_; 
v___x_1806_ = l_Lean_Expr_isConst(v_x_1742_);
if (v___x_1806_ == 0)
{
goto v___jp_1797_;
}
else
{
v_f_1752_ = v_x_1742_;
v___y_1753_ = v___y_1745_;
v___y_1754_ = v___y_1746_;
v___y_1755_ = v___y_1747_;
v___y_1756_ = v___y_1748_;
v___y_1757_ = v___y_1749_;
goto v___jp_1751_;
}
}
}
v___jp_1751_:
{
if (v_skipInstances_1737_ == 0)
{
size_t v_sz_1758_; size_t v___x_1759_; lean_object* v___x_1760_; 
v_sz_1758_ = lean_array_size(v_x_1743_);
v___x_1759_ = ((size_t)0ULL);
lean_inc_ref(v_post_1739_);
lean_inc_ref(v_pre_1738_);
v___x_1760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__9(v_pre_1738_, v_post_1739_, v_usedLetOnly_1740_, v_skipConstInApp_1741_, v_skipInstances_1737_, v_sz_1758_, v___x_1759_, v_x_1743_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref(v___x_1760_);
v___x_1762_ = l_Lean_mkAppN(v_f_1752_, v_a_1761_);
lean_dec(v_a_1761_);
v___x_1763_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1738_, v_post_1739_, v_usedLetOnly_1740_, v_skipConstInApp_1741_, v_skipInstances_1737_, v___x_1762_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
return v___x_1763_;
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_dec_ref(v_f_1752_);
lean_dec_ref(v_post_1739_);
lean_dec_ref(v_pre_1738_);
v_a_1764_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1760_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1760_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_array_get_size(v_x_1743_);
lean_inc_ref(v_f_1752_);
v___x_1773_ = l_Lean_Meta_getFunInfoNArgs(v_f_1752_, v___x_1772_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v_paramInfo_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref(v___x_1773_);
v_paramInfo_1775_ = lean_ctor_get(v_a_1774_, 0);
lean_inc_ref(v_paramInfo_1775_);
lean_dec(v_a_1774_);
v___x_1776_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1739_);
lean_inc_ref(v_pre_1738_);
v___x_1777_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg(v___x_1772_, v_paramInfo_1775_, v_pre_1738_, v_post_1739_, v_usedLetOnly_1740_, v_skipConstInApp_1741_, v_skipInstances_1737_, v___x_1776_, v_x_1743_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
lean_dec_ref(v_paramInfo_1775_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
lean_inc(v_a_1778_);
lean_dec_ref(v___x_1777_);
v___x_1779_ = l_Lean_mkAppN(v_f_1752_, v_a_1778_);
lean_dec(v_a_1778_);
v___x_1780_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1738_, v_post_1739_, v_usedLetOnly_1740_, v_skipConstInApp_1741_, v_skipInstances_1737_, v___x_1779_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
return v___x_1780_;
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec_ref(v_f_1752_);
lean_dec_ref(v_post_1739_);
lean_dec_ref(v_pre_1738_);
v_a_1781_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1777_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1777_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_dec_ref(v_f_1752_);
lean_dec_ref(v_x_1743_);
lean_dec_ref(v_post_1739_);
lean_dec_ref(v_pre_1738_);
v_a_1789_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1773_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1773_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
}
v___jp_1797_:
{
lean_object* v___x_1798_; 
lean_inc_ref(v_post_1739_);
lean_inc_ref(v_pre_1738_);
v___x_1798_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1738_, v_post_1739_, v_usedLetOnly_1740_, v_skipConstInApp_1741_, v_skipInstances_1737_, v_x_1742_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref(v___x_1798_);
v_f_1752_ = v_a_1799_;
v___y_1753_ = v___y_1745_;
v___y_1754_ = v___y_1746_;
v___y_1755_ = v___y_1747_;
v___y_1756_ = v___y_1748_;
v___y_1757_ = v___y_1749_;
goto v___jp_1751_;
}
else
{
lean_dec_ref(v_x_1743_);
lean_dec_ref(v_post_1739_);
lean_dec_ref(v_pre_1738_);
return v___x_1798_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1(lean_object* v_pre_1807_, lean_object* v_e_1808_, lean_object* v_post_1809_, uint8_t v_usedLetOnly_1810_, uint8_t v_skipConstInApp_1811_, uint8_t v_skipInstances_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___x_1819_; 
lean_inc_ref(v_pre_1807_);
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
lean_inc(v___y_1815_);
lean_inc_ref(v___y_1814_);
lean_inc_ref(v_e_1808_);
v___x_1819_ = lean_apply_6(v_pre_1807_, v_e_1808_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, lean_box(0));
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1868_; 
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1822_ = v___x_1819_;
v_isShared_1823_ = v_isSharedCheck_1868_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1819_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1868_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___y_1825_; 
switch(lean_obj_tag(v_a_1820_))
{
case 0:
{
lean_object* v_e_1860_; lean_object* v___x_1862_; 
lean_dec_ref(v_post_1809_);
lean_dec_ref(v_e_1808_);
lean_dec_ref(v_pre_1807_);
v_e_1860_ = lean_ctor_get(v_a_1820_, 0);
lean_inc_ref(v_e_1860_);
lean_dec_ref(v_a_1820_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 0, v_e_1860_);
v___x_1862_ = v___x_1822_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_e_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
case 1:
{
lean_object* v_e_1864_; lean_object* v___x_1865_; 
lean_del_object(v___x_1822_);
lean_dec_ref(v_e_1808_);
v_e_1864_ = lean_ctor_get(v_a_1820_, 0);
lean_inc_ref(v_e_1864_);
lean_dec_ref(v_a_1820_);
v___x_1865_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v_e_1864_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1865_;
}
default: 
{
lean_object* v_e_x3f_1866_; 
lean_del_object(v___x_1822_);
v_e_x3f_1866_ = lean_ctor_get(v_a_1820_, 0);
lean_inc(v_e_x3f_1866_);
lean_dec_ref(v_a_1820_);
if (lean_obj_tag(v_e_x3f_1866_) == 0)
{
v___y_1825_ = v_e_1808_;
goto v___jp_1824_;
}
else
{
lean_object* v_val_1867_; 
lean_dec_ref(v_e_1808_);
v_val_1867_ = lean_ctor_get(v_e_x3f_1866_, 0);
lean_inc(v_val_1867_);
lean_dec_ref(v_e_x3f_1866_);
v___y_1825_ = v_val_1867_;
goto v___jp_1824_;
}
}
}
v___jp_1824_:
{
switch(lean_obj_tag(v___y_1825_))
{
case 7:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1826_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__0));
v___x_1827_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___x_1826_, v___y_1825_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1827_;
}
case 6:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1828_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__0));
v___x_1829_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___x_1828_, v___y_1825_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1829_;
}
case 8:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__0));
v___x_1831_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___x_1830_, v___y_1825_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1831_;
}
case 5:
{
lean_object* v_dummy_1832_; lean_object* v_nargs_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v_dummy_1832_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1);
v_nargs_1833_ = l_Lean_Expr_getAppNumArgs(v___y_1825_);
lean_inc(v_nargs_1833_);
v___x_1834_ = lean_mk_array(v_nargs_1833_, v_dummy_1832_);
v___x_1835_ = lean_unsigned_to_nat(1u);
v___x_1836_ = lean_nat_sub(v_nargs_1833_, v___x_1835_);
lean_dec(v_nargs_1833_);
v___x_1837_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__16(v_skipInstances_1812_, v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v___y_1825_, v___x_1834_, v___x_1836_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1837_;
}
case 10:
{
lean_object* v_data_1838_; lean_object* v_expr_1839_; lean_object* v___x_1840_; 
v_data_1838_ = lean_ctor_get(v___y_1825_, 0);
v_expr_1839_ = lean_ctor_get(v___y_1825_, 1);
lean_inc_ref(v_expr_1839_);
lean_inc_ref(v_post_1809_);
lean_inc_ref(v_pre_1807_);
v___x_1840_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v_expr_1839_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; size_t v___x_1842_; size_t v___x_1843_; uint8_t v___x_1844_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref(v___x_1840_);
v___x_1842_ = lean_ptr_addr(v_expr_1839_);
v___x_1843_ = lean_ptr_addr(v_a_1841_);
v___x_1844_ = lean_usize_dec_eq(v___x_1842_, v___x_1843_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
lean_inc(v_data_1838_);
lean_dec_ref(v___y_1825_);
v___x_1845_ = l_Lean_Expr_mdata___override(v_data_1838_, v_a_1841_);
v___x_1846_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___x_1845_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1846_;
}
else
{
lean_object* v___x_1847_; 
lean_dec(v_a_1841_);
v___x_1847_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___y_1825_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1847_;
}
}
else
{
lean_dec_ref(v___y_1825_);
lean_dec_ref(v_post_1809_);
lean_dec_ref(v_pre_1807_);
return v___x_1840_;
}
}
case 11:
{
lean_object* v_typeName_1848_; lean_object* v_idx_1849_; lean_object* v_struct_1850_; lean_object* v___x_1851_; 
v_typeName_1848_ = lean_ctor_get(v___y_1825_, 0);
v_idx_1849_ = lean_ctor_get(v___y_1825_, 1);
v_struct_1850_ = lean_ctor_get(v___y_1825_, 2);
lean_inc_ref(v_struct_1850_);
lean_inc_ref(v_post_1809_);
lean_inc_ref(v_pre_1807_);
v___x_1851_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v_struct_1850_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; size_t v___x_1853_; size_t v___x_1854_; uint8_t v___x_1855_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref(v___x_1851_);
v___x_1853_ = lean_ptr_addr(v_struct_1850_);
v___x_1854_ = lean_ptr_addr(v_a_1852_);
v___x_1855_ = lean_usize_dec_eq(v___x_1853_, v___x_1854_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
lean_inc(v_idx_1849_);
lean_inc(v_typeName_1848_);
lean_dec_ref(v___y_1825_);
v___x_1856_ = l_Lean_Expr_proj___override(v_typeName_1848_, v_idx_1849_, v_a_1852_);
v___x_1857_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___x_1856_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1857_;
}
else
{
lean_object* v___x_1858_; 
lean_dec(v_a_1852_);
v___x_1858_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___y_1825_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1858_;
}
}
else
{
lean_dec_ref(v___y_1825_);
lean_dec_ref(v_post_1809_);
lean_dec_ref(v_pre_1807_);
return v___x_1851_;
}
}
default: 
{
lean_object* v___x_1859_; 
v___x_1859_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1807_, v_post_1809_, v_usedLetOnly_1810_, v_skipConstInApp_1811_, v_skipInstances_1812_, v___y_1825_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
return v___x_1859_;
}
}
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
lean_dec_ref(v_post_1809_);
lean_dec_ref(v_e_1808_);
lean_dec_ref(v_pre_1807_);
v_a_1869_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1819_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1819_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___boxed(lean_object* v_pre_1877_, lean_object* v_e_1878_, lean_object* v_post_1879_, lean_object* v_usedLetOnly_1880_, lean_object* v_skipConstInApp_1881_, lean_object* v_skipInstances_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
uint8_t v_usedLetOnly_boxed_1889_; uint8_t v_skipConstInApp_boxed_1890_; uint8_t v_skipInstances_boxed_1891_; lean_object* v_res_1892_; 
v_usedLetOnly_boxed_1889_ = lean_unbox(v_usedLetOnly_1880_);
v_skipConstInApp_boxed_1890_ = lean_unbox(v_skipConstInApp_1881_);
v_skipInstances_boxed_1891_ = lean_unbox(v_skipInstances_1882_);
v_res_1892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1(v_pre_1877_, v_e_1878_, v_post_1879_, v_usedLetOnly_boxed_1889_, v_skipConstInApp_boxed_1890_, v_skipInstances_boxed_1891_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(lean_object* v_pre_1893_, lean_object* v_post_1894_, uint8_t v_usedLetOnly_1895_, uint8_t v_skipConstInApp_1896_, uint8_t v_skipInstances_1897_, lean_object* v_e_1898_, lean_object* v_a_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
lean_inc(v_a_1899_);
v___x_1905_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1905_, 0, lean_box(0));
lean_closure_set(v___x_1905_, 1, lean_box(0));
lean_closure_set(v___x_1905_, 2, v_a_1899_);
v___x_1906_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0(lean_box(0), v___x_1905_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1940_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1940_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1940_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg(v_a_1907_, v_e_1898_);
lean_dec(v_a_1907_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___f_1915_; lean_object* v___x_1916_; 
lean_del_object(v___x_1909_);
v___x_1912_ = lean_box(v_usedLetOnly_1895_);
v___x_1913_ = lean_box(v_skipConstInApp_1896_);
v___x_1914_ = lean_box(v_skipInstances_1897_);
lean_inc_ref(v_e_1898_);
v___f_1915_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___boxed), 12, 6);
lean_closure_set(v___f_1915_, 0, v_pre_1893_);
lean_closure_set(v___f_1915_, 1, v_e_1898_);
lean_closure_set(v___f_1915_, 2, v_post_1894_);
lean_closure_set(v___f_1915_, 3, v___x_1912_);
lean_closure_set(v___f_1915_, 4, v___x_1913_);
lean_closure_set(v___f_1915_, 5, v___x_1914_);
v___x_1916_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg(v___f_1915_, v_a_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___f_1918_; lean_object* v___x_1919_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc_n(v_a_1917_, 2);
lean_dec_ref(v___x_1916_);
lean_inc(v_a_1899_);
v___f_1918_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1918_, 0, v_a_1899_);
lean_closure_set(v___f_1918_, 1, v_e_1898_);
lean_closure_set(v___f_1918_, 2, v_a_1917_);
v___x_1919_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__0(lean_box(0), v___f_1918_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1926_ == 0)
{
lean_object* v_unused_1927_; 
v_unused_1927_ = lean_ctor_get(v___x_1919_, 0);
lean_dec(v_unused_1927_);
v___x_1921_ = v___x_1919_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_dec(v___x_1919_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v_a_1917_);
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1917_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec(v_a_1917_);
v_a_1928_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1919_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1919_);
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
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec_ref(v_e_1898_);
return v___x_1916_;
}
}
else
{
lean_object* v_val_1936_; lean_object* v___x_1938_; 
lean_dec_ref(v_e_1898_);
lean_dec_ref(v_post_1894_);
lean_dec_ref(v_pre_1893_);
v_val_1936_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_val_1936_);
lean_dec_ref(v___x_1911_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v_val_1936_);
v___x_1938_ = v___x_1909_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_val_1936_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_dec_ref(v_e_1898_);
lean_dec_ref(v_post_1894_);
lean_dec_ref(v_pre_1893_);
v_a_1941_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1906_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1906_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___lam__0___boxed(lean_object* v_fvars_1949_, lean_object* v_pre_1950_, lean_object* v_post_1951_, lean_object* v_usedLetOnly_1952_, lean_object* v_skipConstInApp_1953_, lean_object* v_skipInstances_1954_, lean_object* v_body_1955_, lean_object* v_x_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
uint8_t v_usedLetOnly_boxed_1963_; uint8_t v_skipConstInApp_boxed_1964_; uint8_t v_skipInstances_boxed_1965_; lean_object* v_res_1966_; 
v_usedLetOnly_boxed_1963_ = lean_unbox(v_usedLetOnly_1952_);
v_skipConstInApp_boxed_1964_ = lean_unbox(v_skipConstInApp_1953_);
v_skipInstances_boxed_1965_ = lean_unbox(v_skipInstances_1954_);
v_res_1966_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___lam__0(v_fvars_1949_, v_pre_1950_, v_post_1951_, v_usedLetOnly_boxed_1963_, v_skipConstInApp_boxed_1964_, v_skipInstances_boxed_1965_, v_body_1955_, v_x_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13(lean_object* v_pre_1967_, lean_object* v_post_1968_, uint8_t v_usedLetOnly_1969_, uint8_t v_skipConstInApp_1970_, uint8_t v_skipInstances_1971_, lean_object* v_fvars_1972_, lean_object* v_e_1973_, lean_object* v_a_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
if (lean_obj_tag(v_e_1973_) == 7)
{
lean_object* v_binderName_1980_; lean_object* v_binderType_1981_; lean_object* v_body_1982_; uint8_t v_binderInfo_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_binderName_1980_ = lean_ctor_get(v_e_1973_, 0);
lean_inc(v_binderName_1980_);
v_binderType_1981_ = lean_ctor_get(v_e_1973_, 1);
lean_inc_ref(v_binderType_1981_);
v_body_1982_ = lean_ctor_get(v_e_1973_, 2);
lean_inc_ref(v_body_1982_);
v_binderInfo_1983_ = lean_ctor_get_uint8(v_e_1973_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_1973_);
v___x_1984_ = lean_expr_instantiate_rev(v_binderType_1981_, v_fvars_1972_);
lean_dec_ref(v_binderType_1981_);
lean_inc_ref(v_post_1968_);
lean_inc_ref(v_pre_1967_);
v___x_1985_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1967_, v_post_1968_, v_usedLetOnly_1969_, v_skipConstInApp_1970_, v_skipInstances_1971_, v___x_1984_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___f_1990_; uint8_t v___x_1991_; lean_object* v___x_1992_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = lean_box(v_usedLetOnly_1969_);
v___x_1988_ = lean_box(v_skipConstInApp_1970_);
v___x_1989_ = lean_box(v_skipInstances_1971_);
v___f_1990_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1990_, 0, v_fvars_1972_);
lean_closure_set(v___f_1990_, 1, v_pre_1967_);
lean_closure_set(v___f_1990_, 2, v_post_1968_);
lean_closure_set(v___f_1990_, 3, v___x_1987_);
lean_closure_set(v___f_1990_, 4, v___x_1988_);
lean_closure_set(v___f_1990_, 5, v___x_1989_);
lean_closure_set(v___f_1990_, 6, v_body_1982_);
v___x_1991_ = 0;
v___x_1992_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg(v_binderName_1980_, v_binderInfo_1983_, v_a_1986_, v___f_1990_, v___x_1991_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
return v___x_1992_;
}
else
{
lean_dec_ref(v_body_1982_);
lean_dec(v_binderName_1980_);
lean_dec_ref(v_fvars_1972_);
lean_dec_ref(v_post_1968_);
lean_dec_ref(v_pre_1967_);
return v___x_1985_;
}
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_expr_instantiate_rev(v_e_1973_, v_fvars_1972_);
lean_dec_ref(v_e_1973_);
lean_inc_ref(v_post_1968_);
lean_inc_ref(v_pre_1967_);
v___x_1994_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_1967_, v_post_1968_, v_usedLetOnly_1969_, v_skipConstInApp_1970_, v_skipInstances_1971_, v___x_1993_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; uint8_t v___x_1996_; uint8_t v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref(v___x_1994_);
v___x_1996_ = 0;
v___x_1997_ = 1;
v___x_1998_ = 1;
v___x_1999_ = l_Lean_Meta_mkForallFVars(v_fvars_1972_, v_a_1995_, v___x_1996_, v_usedLetOnly_1969_, v___x_1997_, v___x_1998_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec_ref(v_fvars_1972_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref(v___x_1999_);
v___x_2001_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_1967_, v_post_1968_, v_usedLetOnly_1969_, v_skipConstInApp_1970_, v_skipInstances_1971_, v_a_2000_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
return v___x_2001_;
}
else
{
lean_dec_ref(v_post_1968_);
lean_dec_ref(v_pre_1967_);
return v___x_1999_;
}
}
else
{
lean_dec_ref(v_fvars_1972_);
lean_dec_ref(v_post_1968_);
lean_dec_ref(v_pre_1967_);
return v___x_1994_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___lam__0(lean_object* v_fvars_2002_, lean_object* v_pre_2003_, lean_object* v_post_2004_, uint8_t v_usedLetOnly_2005_, uint8_t v_skipConstInApp_2006_, uint8_t v_skipInstances_2007_, lean_object* v_body_2008_, lean_object* v_x_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_array_push(v_fvars_2002_, v_x_2009_);
v___x_2017_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13(v_pre_2003_, v_post_2004_, v_usedLetOnly_2005_, v_skipConstInApp_2006_, v_skipInstances_2007_, v___x_2016_, v_body_2008_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10___boxed(lean_object* v_pre_2018_, lean_object* v_post_2019_, lean_object* v_usedLetOnly_2020_, lean_object* v_skipConstInApp_2021_, lean_object* v_skipInstances_2022_, lean_object* v_e_2023_, lean_object* v_a_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
uint8_t v_usedLetOnly_boxed_2030_; uint8_t v_skipConstInApp_boxed_2031_; uint8_t v_skipInstances_boxed_2032_; lean_object* v_res_2033_; 
v_usedLetOnly_boxed_2030_ = lean_unbox(v_usedLetOnly_2020_);
v_skipConstInApp_boxed_2031_ = lean_unbox(v_skipConstInApp_2021_);
v_skipInstances_boxed_2032_ = lean_unbox(v_skipInstances_2022_);
v_res_2033_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__10(v_pre_2018_, v_post_2019_, v_usedLetOnly_boxed_2030_, v_skipConstInApp_boxed_2031_, v_skipInstances_boxed_2032_, v_e_2023_, v_a_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v_a_2024_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__9___boxed(lean_object* v_pre_2034_, lean_object* v_post_2035_, lean_object* v_usedLetOnly_2036_, lean_object* v_skipConstInApp_2037_, lean_object* v_skipInstances_2038_, lean_object* v_sz_2039_, lean_object* v_i_2040_, lean_object* v_bs_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
uint8_t v_usedLetOnly_boxed_2048_; uint8_t v_skipConstInApp_boxed_2049_; uint8_t v_skipInstances_boxed_2050_; size_t v_sz_boxed_2051_; size_t v_i_boxed_2052_; lean_object* v_res_2053_; 
v_usedLetOnly_boxed_2048_ = lean_unbox(v_usedLetOnly_2036_);
v_skipConstInApp_boxed_2049_ = lean_unbox(v_skipConstInApp_2037_);
v_skipInstances_boxed_2050_ = lean_unbox(v_skipInstances_2038_);
v_sz_boxed_2051_ = lean_unbox_usize(v_sz_2039_);
lean_dec(v_sz_2039_);
v_i_boxed_2052_ = lean_unbox_usize(v_i_2040_);
lean_dec(v_i_2040_);
v_res_2053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__9(v_pre_2034_, v_post_2035_, v_usedLetOnly_boxed_2048_, v_skipConstInApp_boxed_2049_, v_skipInstances_boxed_2050_, v_sz_boxed_2051_, v_i_boxed_2052_, v_bs_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___boxed(lean_object* v_pre_2054_, lean_object* v_post_2055_, lean_object* v_usedLetOnly_2056_, lean_object* v_skipConstInApp_2057_, lean_object* v_skipInstances_2058_, lean_object* v_e_2059_, lean_object* v_a_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
uint8_t v_usedLetOnly_boxed_2066_; uint8_t v_skipConstInApp_boxed_2067_; uint8_t v_skipInstances_boxed_2068_; lean_object* v_res_2069_; 
v_usedLetOnly_boxed_2066_ = lean_unbox(v_usedLetOnly_2056_);
v_skipConstInApp_boxed_2067_ = lean_unbox(v_skipConstInApp_2057_);
v_skipInstances_boxed_2068_ = lean_unbox(v_skipInstances_2058_);
v_res_2069_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_2054_, v_post_2055_, v_usedLetOnly_boxed_2066_, v_skipConstInApp_boxed_2067_, v_skipInstances_boxed_2068_, v_e_2059_, v_a_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v_a_2060_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13___boxed(lean_object* v_pre_2070_, lean_object* v_post_2071_, lean_object* v_usedLetOnly_2072_, lean_object* v_skipConstInApp_2073_, lean_object* v_skipInstances_2074_, lean_object* v_fvars_2075_, lean_object* v_e_2076_, lean_object* v_a_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
uint8_t v_usedLetOnly_boxed_2083_; uint8_t v_skipConstInApp_boxed_2084_; uint8_t v_skipInstances_boxed_2085_; lean_object* v_res_2086_; 
v_usedLetOnly_boxed_2083_ = lean_unbox(v_usedLetOnly_2072_);
v_skipConstInApp_boxed_2084_ = lean_unbox(v_skipConstInApp_2073_);
v_skipInstances_boxed_2085_ = lean_unbox(v_skipInstances_2074_);
v_res_2086_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13(v_pre_2070_, v_post_2071_, v_usedLetOnly_boxed_2083_, v_skipConstInApp_boxed_2084_, v_skipInstances_boxed_2085_, v_fvars_2075_, v_e_2076_, v_a_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v_a_2077_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14___boxed(lean_object* v_pre_2087_, lean_object* v_post_2088_, lean_object* v_usedLetOnly_2089_, lean_object* v_skipConstInApp_2090_, lean_object* v_skipInstances_2091_, lean_object* v_fvars_2092_, lean_object* v_e_2093_, lean_object* v_a_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
uint8_t v_usedLetOnly_boxed_2100_; uint8_t v_skipConstInApp_boxed_2101_; uint8_t v_skipInstances_boxed_2102_; lean_object* v_res_2103_; 
v_usedLetOnly_boxed_2100_ = lean_unbox(v_usedLetOnly_2089_);
v_skipConstInApp_boxed_2101_ = lean_unbox(v_skipConstInApp_2090_);
v_skipInstances_boxed_2102_ = lean_unbox(v_skipInstances_2091_);
v_res_2103_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__14(v_pre_2087_, v_post_2088_, v_usedLetOnly_boxed_2100_, v_skipConstInApp_boxed_2101_, v_skipInstances_boxed_2102_, v_fvars_2092_, v_e_2093_, v_a_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v_a_2094_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15___boxed(lean_object* v_pre_2104_, lean_object* v_post_2105_, lean_object* v_usedLetOnly_2106_, lean_object* v_skipConstInApp_2107_, lean_object* v_skipInstances_2108_, lean_object* v_fvars_2109_, lean_object* v_e_2110_, lean_object* v_a_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
uint8_t v_usedLetOnly_boxed_2117_; uint8_t v_skipConstInApp_boxed_2118_; uint8_t v_skipInstances_boxed_2119_; lean_object* v_res_2120_; 
v_usedLetOnly_boxed_2117_ = lean_unbox(v_usedLetOnly_2106_);
v_skipConstInApp_boxed_2118_ = lean_unbox(v_skipConstInApp_2107_);
v_skipInstances_boxed_2119_ = lean_unbox(v_skipInstances_2108_);
v_res_2120_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15(v_pre_2104_, v_post_2105_, v_usedLetOnly_boxed_2117_, v_skipConstInApp_boxed_2118_, v_skipInstances_boxed_2119_, v_fvars_2109_, v_e_2110_, v_a_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v_a_2111_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_upperBound_2121_, lean_object* v___x_2122_, lean_object* v_pre_2123_, lean_object* v_post_2124_, lean_object* v_usedLetOnly_2125_, lean_object* v_skipConstInApp_2126_, lean_object* v_skipInstances_2127_, lean_object* v_a_2128_, lean_object* v_b_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
uint8_t v_usedLetOnly_boxed_2136_; uint8_t v_skipConstInApp_boxed_2137_; uint8_t v_skipInstances_boxed_2138_; lean_object* v_res_2139_; 
v_usedLetOnly_boxed_2136_ = lean_unbox(v_usedLetOnly_2125_);
v_skipConstInApp_boxed_2137_ = lean_unbox(v_skipConstInApp_2126_);
v_skipInstances_boxed_2138_ = lean_unbox(v_skipInstances_2127_);
v_res_2139_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg(v_upperBound_2121_, v___x_2122_, v_pre_2123_, v_post_2124_, v_usedLetOnly_boxed_2136_, v_skipConstInApp_boxed_2137_, v_skipInstances_boxed_2138_, v_a_2128_, v_b_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___x_2122_);
lean_dec(v_upperBound_2121_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__16___boxed(lean_object* v_skipInstances_2140_, lean_object* v_pre_2141_, lean_object* v_post_2142_, lean_object* v_usedLetOnly_2143_, lean_object* v_skipConstInApp_2144_, lean_object* v_x_2145_, lean_object* v_x_2146_, lean_object* v_x_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v_skipInstances_boxed_2154_; uint8_t v_usedLetOnly_boxed_2155_; uint8_t v_skipConstInApp_boxed_2156_; lean_object* v_res_2157_; 
v_skipInstances_boxed_2154_ = lean_unbox(v_skipInstances_2140_);
v_usedLetOnly_boxed_2155_ = lean_unbox(v_usedLetOnly_2143_);
v_skipConstInApp_boxed_2156_ = lean_unbox(v_skipConstInApp_2144_);
v_res_2157_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__16(v_skipInstances_boxed_2154_, v_pre_2141_, v_post_2142_, v_usedLetOnly_boxed_2155_, v_skipConstInApp_boxed_2156_, v_x_2145_, v_x_2146_, v_x_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
return v_res_2157_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0(void){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2159_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2159_, 0, lean_box(0));
lean_closure_set(v___x_2159_, 1, lean_box(0));
lean_closure_set(v___x_2159_, 2, v___x_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_input_2160_, lean_object* v_pre_2161_, lean_object* v_post_2162_, uint8_t v_usedLetOnly_2163_, uint8_t v_skipConstInApp_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v_a_2172_; uint8_t v___x_2173_; lean_object* v___x_2174_; 
v___x_2170_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_2171_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0(lean_box(0), v___x_2170_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref(v___x_2171_);
v___x_2173_ = 0;
v___x_2174_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8(v_pre_2161_, v_post_2162_, v_usedLetOnly_2163_, v_skipConstInApp_2164_, v___x_2173_, v_input_2160_, v_a_2172_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref(v___x_2174_);
v___x_2176_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2176_, 0, lean_box(0));
lean_closure_set(v___x_2176_, 1, lean_box(0));
lean_closure_set(v___x_2176_, 2, v_a_2172_);
v___x_2177_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___lam__0(lean_box(0), v___x_2176_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2184_ == 0)
{
lean_object* v_unused_2185_; 
v_unused_2185_ = lean_ctor_get(v___x_2177_, 0);
lean_dec(v_unused_2185_);
v___x_2179_ = v___x_2177_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_dec(v___x_2177_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 0, v_a_2175_);
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2175_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
else
{
lean_dec(v_a_2172_);
return v___x_2174_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object* v_input_2186_, lean_object* v_pre_2187_, lean_object* v_post_2188_, lean_object* v_usedLetOnly_2189_, lean_object* v_skipConstInApp_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
uint8_t v_usedLetOnly_boxed_2196_; uint8_t v_skipConstInApp_boxed_2197_; lean_object* v_res_2198_; 
v_usedLetOnly_boxed_2196_ = lean_unbox(v_usedLetOnly_2189_);
v_skipConstInApp_boxed_2197_ = lean_unbox(v_skipConstInApp_2190_);
v_res_2198_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_input_2186_, v_pre_2187_, v_post_2188_, v_usedLetOnly_boxed_2196_, v_skipConstInApp_boxed_2197_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
return v_res_2198_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___lam__0(lean_object* v___x_2199_, lean_object* v_x_2200_){
_start:
{
lean_object* v_declName_2201_; uint8_t v___x_2202_; 
v_declName_2201_ = lean_ctor_get(v_x_2200_, 3);
v___x_2202_ = lean_name_eq(v_declName_2201_, v___x_2199_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___lam__0___boxed(lean_object* v___x_2203_, lean_object* v_x_2204_){
_start:
{
uint8_t v_res_2205_; lean_object* v_r_2206_; 
v_res_2205_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___lam__0(v___x_2203_, v_x_2204_);
lean_dec_ref(v_x_2204_);
lean_dec(v___x_2203_);
v_r_2206_ = lean_box(v_res_2205_);
return v_r_2206_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0(lean_object* v_val_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2213_ = lean_st_ref_get(v_val_2207_);
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0___boxed(lean_object* v_val_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0(v_val_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v___y_2217_);
lean_dec_ref(v___y_2216_);
lean_dec(v_val_2215_);
return v_res_2221_;
}
}
static uint64_t _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0(void){
_start:
{
uint8_t v___x_2222_; uint64_t v___x_2223_; 
v___x_2222_ = 2;
v___x_2223_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg(lean_object* v_upperBound_2224_, lean_object* v_val_2225_, lean_object* v_next_2226_, lean_object* v_params_2227_, lean_object* v___x_2228_, lean_object* v_val_2229_, lean_object* v_next_2230_, uint8_t v___x_2231_, lean_object* v_a_2232_, uint8_t v_b_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
uint8_t v_a_2240_; uint8_t v___x_2244_; 
v___x_2244_ = lean_nat_dec_lt(v_a_2232_, v_upperBound_2224_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; lean_object* v___x_2246_; 
lean_dec(v_a_2232_);
lean_dec(v_next_2230_);
lean_dec_ref(v___x_2228_);
v___x_2245_ = lean_box(v_b_2233_);
v___x_2246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2245_);
return v___x_2246_;
}
else
{
lean_object* v___x_2247_; uint8_t v___x_2248_; 
v___x_2247_ = lean_st_ref_get(v_val_2225_);
v___x_2248_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_2226_, v_a_2232_, v___x_2247_);
lean_dec(v___x_2247_);
if (v___x_2248_ == 0)
{
v_a_2240_ = v_b_2233_;
goto v___jp_2239_;
}
else
{
lean_object* v___x_2249_; uint8_t v_foApprox_2250_; uint8_t v_ctxApprox_2251_; uint8_t v_quasiPatternApprox_2252_; uint8_t v_constApprox_2253_; uint8_t v_isDefEqStuckEx_2254_; uint8_t v_unificationHints_2255_; uint8_t v_assignSyntheticOpaque_2256_; uint8_t v_offsetCnstrs_2257_; uint8_t v_transparency_2258_; uint8_t v_etaStruct_2259_; uint8_t v_univApprox_2260_; uint8_t v_iota_2261_; uint8_t v_beta_2262_; uint8_t v_proj_2263_; uint8_t v_zeta_2264_; uint8_t v_zetaDelta_2265_; uint8_t v_zetaUnused_2266_; uint8_t v_zetaHave_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2330_; 
v___x_2249_ = l_Lean_Meta_Context_config(v___y_2234_);
v_foApprox_2250_ = lean_ctor_get_uint8(v___x_2249_, 0);
v_ctxApprox_2251_ = lean_ctor_get_uint8(v___x_2249_, 1);
v_quasiPatternApprox_2252_ = lean_ctor_get_uint8(v___x_2249_, 2);
v_constApprox_2253_ = lean_ctor_get_uint8(v___x_2249_, 3);
v_isDefEqStuckEx_2254_ = lean_ctor_get_uint8(v___x_2249_, 4);
v_unificationHints_2255_ = lean_ctor_get_uint8(v___x_2249_, 5);
v_assignSyntheticOpaque_2256_ = lean_ctor_get_uint8(v___x_2249_, 7);
v_offsetCnstrs_2257_ = lean_ctor_get_uint8(v___x_2249_, 8);
v_transparency_2258_ = lean_ctor_get_uint8(v___x_2249_, 9);
v_etaStruct_2259_ = lean_ctor_get_uint8(v___x_2249_, 10);
v_univApprox_2260_ = lean_ctor_get_uint8(v___x_2249_, 11);
v_iota_2261_ = lean_ctor_get_uint8(v___x_2249_, 12);
v_beta_2262_ = lean_ctor_get_uint8(v___x_2249_, 13);
v_proj_2263_ = lean_ctor_get_uint8(v___x_2249_, 14);
v_zeta_2264_ = lean_ctor_get_uint8(v___x_2249_, 15);
v_zetaDelta_2265_ = lean_ctor_get_uint8(v___x_2249_, 16);
v_zetaUnused_2266_ = lean_ctor_get_uint8(v___x_2249_, 17);
v_zetaHave_2267_ = lean_ctor_get_uint8(v___x_2249_, 18);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2269_ = v___x_2249_;
v_isShared_2270_ = v_isSharedCheck_2330_;
goto v_resetjp_2268_;
}
else
{
lean_dec(v___x_2249_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2330_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
uint8_t v_trackZetaDelta_2271_; lean_object* v_zetaDeltaSet_2272_; lean_object* v_lctx_2273_; lean_object* v_localInstances_2274_; lean_object* v_defEqCtx_x3f_2275_; lean_object* v_synthPendingDepth_2276_; lean_object* v_canUnfold_x3f_2277_; uint8_t v_univApprox_2278_; uint8_t v_inTypeClassResolution_2279_; uint8_t v_cacheInferType_2280_; uint8_t v___x_2281_; lean_object* v___x_2283_; 
v_trackZetaDelta_2271_ = lean_ctor_get_uint8(v___y_2234_, sizeof(void*)*7);
v_zetaDeltaSet_2272_ = lean_ctor_get(v___y_2234_, 1);
v_lctx_2273_ = lean_ctor_get(v___y_2234_, 2);
v_localInstances_2274_ = lean_ctor_get(v___y_2234_, 3);
v_defEqCtx_x3f_2275_ = lean_ctor_get(v___y_2234_, 4);
v_synthPendingDepth_2276_ = lean_ctor_get(v___y_2234_, 5);
v_canUnfold_x3f_2277_ = lean_ctor_get(v___y_2234_, 6);
v_univApprox_2278_ = lean_ctor_get_uint8(v___y_2234_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2279_ = lean_ctor_get_uint8(v___y_2234_, sizeof(void*)*7 + 2);
v_cacheInferType_2280_ = lean_ctor_get_uint8(v___y_2234_, sizeof(void*)*7 + 3);
v___x_2281_ = 0;
if (v_isShared_2270_ == 0)
{
v___x_2283_ = v___x_2269_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 0, v_foApprox_2250_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 1, v_ctxApprox_2251_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 2, v_quasiPatternApprox_2252_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 3, v_constApprox_2253_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 4, v_isDefEqStuckEx_2254_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 5, v_unificationHints_2255_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 7, v_assignSyntheticOpaque_2256_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 8, v_offsetCnstrs_2257_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 9, v_transparency_2258_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 10, v_etaStruct_2259_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 11, v_univApprox_2260_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 12, v_iota_2261_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 13, v_beta_2262_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 14, v_proj_2263_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 15, v_zeta_2264_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 16, v_zetaDelta_2265_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 17, v_zetaUnused_2266_);
lean_ctor_set_uint8(v_reuseFailAlloc_2329_, 18, v_zetaHave_2267_);
v___x_2283_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
uint64_t v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; uint8_t v_foApprox_2288_; uint8_t v_ctxApprox_2289_; uint8_t v_quasiPatternApprox_2290_; uint8_t v_constApprox_2291_; uint8_t v_isDefEqStuckEx_2292_; uint8_t v_unificationHints_2293_; uint8_t v_proofIrrelevance_2294_; uint8_t v_assignSyntheticOpaque_2295_; uint8_t v_offsetCnstrs_2296_; uint8_t v_etaStruct_2297_; uint8_t v_univApprox_2298_; uint8_t v_iota_2299_; uint8_t v_beta_2300_; uint8_t v_proj_2301_; uint8_t v_zeta_2302_; uint8_t v_zetaDelta_2303_; uint8_t v_zetaUnused_2304_; uint8_t v_zetaHave_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2328_; 
lean_ctor_set_uint8(v___x_2283_, 6, v___x_2281_);
v___x_2284_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2283_);
v___x_2285_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2285_, 0, v___x_2283_);
lean_ctor_set_uint64(v___x_2285_, sizeof(void*)*1, v___x_2284_);
lean_inc(v_canUnfold_x3f_2277_);
lean_inc(v_synthPendingDepth_2276_);
lean_inc(v_defEqCtx_x3f_2275_);
lean_inc_ref(v_localInstances_2274_);
lean_inc_ref(v_lctx_2273_);
lean_inc(v_zetaDeltaSet_2272_);
v___x_2286_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2286_, 0, v___x_2285_);
lean_ctor_set(v___x_2286_, 1, v_zetaDeltaSet_2272_);
lean_ctor_set(v___x_2286_, 2, v_lctx_2273_);
lean_ctor_set(v___x_2286_, 3, v_localInstances_2274_);
lean_ctor_set(v___x_2286_, 4, v_defEqCtx_x3f_2275_);
lean_ctor_set(v___x_2286_, 5, v_synthPendingDepth_2276_);
lean_ctor_set(v___x_2286_, 6, v_canUnfold_x3f_2277_);
lean_ctor_set_uint8(v___x_2286_, sizeof(void*)*7, v_trackZetaDelta_2271_);
lean_ctor_set_uint8(v___x_2286_, sizeof(void*)*7 + 1, v_univApprox_2278_);
lean_ctor_set_uint8(v___x_2286_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2279_);
lean_ctor_set_uint8(v___x_2286_, sizeof(void*)*7 + 3, v_cacheInferType_2280_);
v___x_2287_ = l_Lean_Meta_Context_config(v___x_2286_);
v_foApprox_2288_ = lean_ctor_get_uint8(v___x_2287_, 0);
v_ctxApprox_2289_ = lean_ctor_get_uint8(v___x_2287_, 1);
v_quasiPatternApprox_2290_ = lean_ctor_get_uint8(v___x_2287_, 2);
v_constApprox_2291_ = lean_ctor_get_uint8(v___x_2287_, 3);
v_isDefEqStuckEx_2292_ = lean_ctor_get_uint8(v___x_2287_, 4);
v_unificationHints_2293_ = lean_ctor_get_uint8(v___x_2287_, 5);
v_proofIrrelevance_2294_ = lean_ctor_get_uint8(v___x_2287_, 6);
v_assignSyntheticOpaque_2295_ = lean_ctor_get_uint8(v___x_2287_, 7);
v_offsetCnstrs_2296_ = lean_ctor_get_uint8(v___x_2287_, 8);
v_etaStruct_2297_ = lean_ctor_get_uint8(v___x_2287_, 10);
v_univApprox_2298_ = lean_ctor_get_uint8(v___x_2287_, 11);
v_iota_2299_ = lean_ctor_get_uint8(v___x_2287_, 12);
v_beta_2300_ = lean_ctor_get_uint8(v___x_2287_, 13);
v_proj_2301_ = lean_ctor_get_uint8(v___x_2287_, 14);
v_zeta_2302_ = lean_ctor_get_uint8(v___x_2287_, 15);
v_zetaDelta_2303_ = lean_ctor_get_uint8(v___x_2287_, 16);
v_zetaUnused_2304_ = lean_ctor_get_uint8(v___x_2287_, 17);
v_zetaHave_2305_ = lean_ctor_get_uint8(v___x_2287_, 18);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2307_ = v___x_2287_;
v_isShared_2308_ = v_isSharedCheck_2328_;
goto v_resetjp_2306_;
}
else
{
lean_dec(v___x_2287_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2328_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2309_; uint8_t v___x_2310_; lean_object* v_config_2312_; 
v___x_2309_ = lean_array_fget_borrowed(v_params_2227_, v_a_2232_);
v___x_2310_ = 2;
if (v_isShared_2308_ == 0)
{
v_config_2312_ = v___x_2307_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 0, v_foApprox_2288_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 1, v_ctxApprox_2289_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 2, v_quasiPatternApprox_2290_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 3, v_constApprox_2291_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 4, v_isDefEqStuckEx_2292_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 5, v_unificationHints_2293_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 6, v_proofIrrelevance_2294_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 7, v_assignSyntheticOpaque_2295_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 8, v_offsetCnstrs_2296_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 10, v_etaStruct_2297_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 11, v_univApprox_2298_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 12, v_iota_2299_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 13, v_beta_2300_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 14, v_proj_2301_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 15, v_zeta_2302_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 16, v_zetaDelta_2303_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 17, v_zetaUnused_2304_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, 18, v_zetaHave_2305_);
v_config_2312_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
uint64_t v___x_2313_; uint64_t v___x_2314_; uint64_t v___x_2315_; uint64_t v___x_2316_; uint64_t v___x_2317_; uint64_t v_key_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
lean_ctor_set_uint8(v_config_2312_, 9, v___x_2310_);
v___x_2313_ = l_Lean_Meta_Context_configKey(v___x_2286_);
lean_dec_ref(v___x_2286_);
v___x_2314_ = 2ULL;
v___x_2315_ = lean_uint64_shift_right(v___x_2313_, v___x_2314_);
v___x_2316_ = lean_uint64_shift_left(v___x_2315_, v___x_2314_);
v___x_2317_ = lean_uint64_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0);
v_key_2318_ = lean_uint64_lor(v___x_2316_, v___x_2317_);
v___x_2319_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2319_, 0, v_config_2312_);
lean_ctor_set_uint64(v___x_2319_, sizeof(void*)*1, v_key_2318_);
lean_inc(v_canUnfold_x3f_2277_);
lean_inc(v_synthPendingDepth_2276_);
lean_inc(v_defEqCtx_x3f_2275_);
lean_inc_ref(v_localInstances_2274_);
lean_inc_ref(v_lctx_2273_);
lean_inc(v_zetaDeltaSet_2272_);
v___x_2320_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v_zetaDeltaSet_2272_);
lean_ctor_set(v___x_2320_, 2, v_lctx_2273_);
lean_ctor_set(v___x_2320_, 3, v_localInstances_2274_);
lean_ctor_set(v___x_2320_, 4, v_defEqCtx_x3f_2275_);
lean_ctor_set(v___x_2320_, 5, v_synthPendingDepth_2276_);
lean_ctor_set(v___x_2320_, 6, v_canUnfold_x3f_2277_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*7, v_trackZetaDelta_2271_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*7 + 1, v_univApprox_2278_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2279_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*7 + 3, v_cacheInferType_2280_);
lean_inc_ref(v___x_2228_);
lean_inc(v___x_2309_);
v___x_2321_ = l_Lean_Meta_isExprDefEq(v___x_2309_, v___x_2228_, v___x_2320_, v___y_2235_, v___y_2236_, v___y_2237_);
lean_dec_ref(v___x_2320_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v_a_2322_; uint8_t v___x_2323_; 
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_a_2322_);
lean_dec_ref(v___x_2321_);
v___x_2323_ = lean_unbox(v_a_2322_);
lean_dec(v_a_2322_);
if (v___x_2323_ == 0)
{
v_a_2240_ = v_b_2233_;
goto v___jp_2239_;
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2324_ = lean_st_ref_take(v_val_2225_);
lean_inc(v_a_2232_);
lean_inc(v_next_2230_);
v___x_2325_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_2229_, v_next_2230_, v_next_2226_, v_a_2232_, v___x_2324_);
v___x_2326_ = lean_st_ref_set(v_val_2225_, v___x_2325_);
v_a_2240_ = v___x_2231_;
goto v___jp_2239_;
}
}
else
{
lean_dec(v_a_2232_);
lean_dec(v_next_2230_);
lean_dec_ref(v___x_2228_);
return v___x_2321_;
}
}
}
}
}
}
}
v___jp_2239_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_unsigned_to_nat(1u);
v___x_2242_ = lean_nat_add(v_a_2232_, v___x_2241_);
lean_dec(v_a_2232_);
v_a_2232_ = v___x_2242_;
v_b_2233_ = v_a_2240_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___boxed(lean_object* v_upperBound_2331_, lean_object* v_val_2332_, lean_object* v_next_2333_, lean_object* v_params_2334_, lean_object* v___x_2335_, lean_object* v_val_2336_, lean_object* v_next_2337_, lean_object* v___x_2338_, lean_object* v_a_2339_, lean_object* v_b_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
uint8_t v___x_44007__boxed_2346_; uint8_t v_b_boxed_2347_; lean_object* v_res_2348_; 
v___x_44007__boxed_2346_ = lean_unbox(v___x_2338_);
v_b_boxed_2347_ = lean_unbox(v_b_2340_);
v_res_2348_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg(v_upperBound_2331_, v_val_2332_, v_next_2333_, v_params_2334_, v___x_2335_, v_val_2336_, v_next_2337_, v___x_44007__boxed_2346_, v_a_2339_, v_b_boxed_2347_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_);
lean_dec(v___y_2344_);
lean_dec_ref(v___y_2343_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v_val_2336_);
lean_dec_ref(v_params_2334_);
lean_dec(v_next_2333_);
lean_dec(v_val_2332_);
lean_dec(v_upperBound_2331_);
return v_res_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object* v_msgData_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v___x_2355_; lean_object* v_env_2356_; lean_object* v___x_2357_; lean_object* v_mctx_2358_; lean_object* v_lctx_2359_; lean_object* v_options_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2355_ = lean_st_ref_get(v___y_2353_);
v_env_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc_ref(v_env_2356_);
lean_dec(v___x_2355_);
v___x_2357_ = lean_st_ref_get(v___y_2351_);
v_mctx_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc_ref(v_mctx_2358_);
lean_dec(v___x_2357_);
v_lctx_2359_ = lean_ctor_get(v___y_2350_, 2);
v_options_2360_ = lean_ctor_get(v___y_2352_, 2);
lean_inc_ref(v_options_2360_);
lean_inc_ref(v_lctx_2359_);
v___x_2361_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2361_, 0, v_env_2356_);
lean_ctor_set(v___x_2361_, 1, v_mctx_2358_);
lean_ctor_set(v___x_2361_, 2, v_lctx_2359_);
lean_ctor_set(v___x_2361_, 3, v_options_2360_);
v___x_2362_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
lean_ctor_set(v___x_2362_, 1, v_msgData_2349_);
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
lean_dec(v___y_2368_);
lean_dec_ref(v___y_2367_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
return v_res_2370_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2371_; double v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(0u);
v___x_2372_ = lean_float_of_nat(v___x_2371_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_2376_, lean_object* v_msg_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v_ref_2383_; lean_object* v___x_2384_; lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2429_; 
v_ref_2383_ = lean_ctor_get(v___y_2380_, 5);
v___x_2384_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_);
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2387_ = v___x_2384_;
v_isShared_2388_ = v_isSharedCheck_2429_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2384_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2429_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; lean_object* v_traceState_2390_; lean_object* v_env_2391_; lean_object* v_nextMacroScope_2392_; lean_object* v_ngen_2393_; lean_object* v_auxDeclNGen_2394_; lean_object* v_cache_2395_; lean_object* v_messages_2396_; lean_object* v_infoState_2397_; lean_object* v_snapshotTasks_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2428_; 
v___x_2389_ = lean_st_ref_take(v___y_2381_);
v_traceState_2390_ = lean_ctor_get(v___x_2389_, 4);
v_env_2391_ = lean_ctor_get(v___x_2389_, 0);
v_nextMacroScope_2392_ = lean_ctor_get(v___x_2389_, 1);
v_ngen_2393_ = lean_ctor_get(v___x_2389_, 2);
v_auxDeclNGen_2394_ = lean_ctor_get(v___x_2389_, 3);
v_cache_2395_ = lean_ctor_get(v___x_2389_, 5);
v_messages_2396_ = lean_ctor_get(v___x_2389_, 6);
v_infoState_2397_ = lean_ctor_get(v___x_2389_, 7);
v_snapshotTasks_2398_ = lean_ctor_get(v___x_2389_, 8);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2400_ = v___x_2389_;
v_isShared_2401_ = v_isSharedCheck_2428_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_snapshotTasks_2398_);
lean_inc(v_infoState_2397_);
lean_inc(v_messages_2396_);
lean_inc(v_cache_2395_);
lean_inc(v_traceState_2390_);
lean_inc(v_auxDeclNGen_2394_);
lean_inc(v_ngen_2393_);
lean_inc(v_nextMacroScope_2392_);
lean_inc(v_env_2391_);
lean_dec(v___x_2389_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2428_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
uint64_t v_tid_2402_; lean_object* v_traces_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2427_; 
v_tid_2402_ = lean_ctor_get_uint64(v_traceState_2390_, sizeof(void*)*1);
v_traces_2403_ = lean_ctor_get(v_traceState_2390_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v_traceState_2390_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2405_ = v_traceState_2390_;
v_isShared_2406_ = v_isSharedCheck_2427_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_traces_2403_);
lean_dec(v_traceState_2390_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2427_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; double v___x_2408_; uint8_t v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
v___x_2407_ = lean_box(0);
v___x_2408_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_2409_ = 0;
v___x_2410_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1));
v___x_2411_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2411_, 0, v_cls_2376_);
lean_ctor_set(v___x_2411_, 1, v___x_2407_);
lean_ctor_set(v___x_2411_, 2, v___x_2410_);
lean_ctor_set_float(v___x_2411_, sizeof(void*)*3, v___x_2408_);
lean_ctor_set_float(v___x_2411_, sizeof(void*)*3 + 8, v___x_2408_);
lean_ctor_set_uint8(v___x_2411_, sizeof(void*)*3 + 16, v___x_2409_);
v___x_2412_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2));
v___x_2413_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2411_);
lean_ctor_set(v___x_2413_, 1, v_a_2385_);
lean_ctor_set(v___x_2413_, 2, v___x_2412_);
lean_inc(v_ref_2383_);
v___x_2414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2414_, 0, v_ref_2383_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
v___x_2415_ = l_Lean_PersistentArray_push___redArg(v_traces_2403_, v___x_2414_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2415_);
v___x_2417_ = v___x_2405_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2415_);
lean_ctor_set_uint64(v_reuseFailAlloc_2426_, sizeof(void*)*1, v_tid_2402_);
v___x_2417_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2419_; 
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 4, v___x_2417_);
v___x_2419_ = v___x_2400_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_env_2391_);
lean_ctor_set(v_reuseFailAlloc_2425_, 1, v_nextMacroScope_2392_);
lean_ctor_set(v_reuseFailAlloc_2425_, 2, v_ngen_2393_);
lean_ctor_set(v_reuseFailAlloc_2425_, 3, v_auxDeclNGen_2394_);
lean_ctor_set(v_reuseFailAlloc_2425_, 4, v___x_2417_);
lean_ctor_set(v_reuseFailAlloc_2425_, 5, v_cache_2395_);
lean_ctor_set(v_reuseFailAlloc_2425_, 6, v_messages_2396_);
lean_ctor_set(v_reuseFailAlloc_2425_, 7, v_infoState_2397_);
lean_ctor_set(v_reuseFailAlloc_2425_, 8, v_snapshotTasks_2398_);
v___x_2419_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2420_ = lean_st_ref_set(v___y_2381_, v___x_2419_);
v___x_2421_ = lean_box(0);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 0, v___x_2421_);
v___x_2423_ = v___x_2387_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_2430_, lean_object* v_msg_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_2430_, v_msg_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(lean_object* v_val_2438_, lean_object* v_val_2439_, lean_object* v_a_2440_, lean_object* v___x_2441_, lean_object* v_____r_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2448_ = lean_st_ref_take(v_val_2438_);
v___x_2449_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_2439_, v_a_2440_, v___x_2448_);
v___x_2450_ = lean_st_ref_set(v_val_2438_, v___x_2449_);
v___x_2451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2441_);
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1___boxed(lean_object* v_val_2453_, lean_object* v_val_2454_, lean_object* v_a_2455_, lean_object* v___x_2456_, lean_object* v_____r_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2453_, v_val_2454_, v_a_2455_, v___x_2456_, v_____r_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v_val_2454_);
lean_dec(v_val_2453_);
return v_res_2463_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6(void){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2474_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3));
v___x_2475_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__5));
v___x_2476_ = l_Lean_Name_append(v___x_2475_, v___x_2474_);
return v___x_2476_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2478_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__7));
v___x_2479_ = l_Lean_stringToMessageData(v___x_2478_);
return v___x_2479_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2));
v___x_2481_ = l_Lean_stringToMessageData(v___x_2480_);
return v___x_2481_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2483_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__10));
v___x_2484_ = l_Lean_stringToMessageData(v___x_2483_);
return v___x_2484_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2486_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__12));
v___x_2487_ = l_Lean_stringToMessageData(v___x_2486_);
return v___x_2487_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__14));
v___x_2490_ = l_Lean_stringToMessageData(v___x_2489_);
return v___x_2490_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__16));
v___x_2493_ = l_Lean_stringToMessageData(v___x_2492_);
return v___x_2493_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__18));
v___x_2496_ = l_Lean_stringToMessageData(v___x_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_val_2497_, lean_object* v_val_2498_, lean_object* v_upperBound_2499_, lean_object* v_args_2500_, lean_object* v_e_2501_, lean_object* v_next_2502_, lean_object* v_params_2503_, lean_object* v___x_2504_, uint8_t v___x_2505_, lean_object* v_a_2506_, lean_object* v_b_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_){
_start:
{
lean_object* v_a_2514_; lean_object* v___y_2519_; uint8_t v___x_2538_; 
v___x_2538_ = lean_nat_dec_lt(v_a_2506_, v_upperBound_2499_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; 
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v___x_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2539_, 0, v_b_2507_);
return v___x_2539_;
}
else
{
lean_object* v___x_2540_; 
v___x_2540_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0(v_val_2497_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2542_; uint8_t v___x_2543_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref(v___x_2540_);
v___x_2542_ = lean_box(0);
v___x_2543_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_2498_, v_a_2506_, v_a_2541_);
lean_dec(v_a_2541_);
if (v___x_2543_ == 0)
{
v_a_2514_ = v___x_2542_;
goto v___jp_2513_;
}
else
{
lean_object* v___x_2544_; uint8_t v___x_2545_; 
v___x_2544_ = lean_array_get_size(v_args_2500_);
v___x_2545_ = lean_nat_dec_lt(v_a_2506_, v___x_2544_);
if (v___x_2545_ == 0)
{
lean_object* v_options_2546_; lean_object* v_inheritedTraceOptions_2547_; uint8_t v_hasTrace_2548_; 
v_options_2546_ = lean_ctor_get(v___y_2510_, 2);
v_inheritedTraceOptions_2547_ = lean_ctor_get(v___y_2510_, 13);
v_hasTrace_2548_ = lean_ctor_get_uint8(v_options_2546_, sizeof(void*)*1);
if (v_hasTrace_2548_ == 0)
{
goto v___jp_2549_;
}
else
{
lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; 
v___x_2551_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3));
v___x_2552_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6);
v___x_2553_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2547_, v_options_2546_, v___x_2552_);
if (v___x_2553_ == 0)
{
goto v___jp_2549_;
}
else
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2554_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8);
lean_inc(v_val_2498_);
v___x_2555_ = l_Nat_reprFast(v_val_2498_);
v___x_2556_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2555_);
v___x_2557_ = l_Lean_MessageData_ofFormat(v___x_2556_);
v___x_2558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2554_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
v___x_2559_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9);
v___x_2560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2558_);
lean_ctor_set(v___x_2560_, 1, v___x_2559_);
lean_inc(v_a_2506_);
v___x_2561_ = l_Nat_reprFast(v_a_2506_);
v___x_2562_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
v___x_2563_ = l_Lean_MessageData_ofFormat(v___x_2562_);
lean_inc_ref(v___x_2563_);
v___x_2564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2560_);
lean_ctor_set(v___x_2564_, 1, v___x_2563_);
v___x_2565_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11);
v___x_2566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2564_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
lean_inc_ref(v_e_2501_);
v___x_2567_ = l_Lean_MessageData_ofExpr(v_e_2501_);
v___x_2568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2566_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__13);
v___x_2570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2568_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2570_);
lean_ctor_set(v___x_2571_, 1, v___x_2563_);
v___x_2572_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2551_, v___x_2571_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; lean_object* v___x_2574_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref(v___x_2572_);
lean_inc(v_a_2506_);
v___x_2574_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2497_, v_val_2498_, v_a_2506_, v___x_2542_, v_a_2573_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
v___y_2519_ = v___x_2574_;
goto v___jp_2518_;
}
else
{
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
return v___x_2572_;
}
}
}
v___jp_2549_:
{
lean_object* v___x_2550_; 
lean_inc(v_a_2506_);
v___x_2550_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2497_, v_val_2498_, v_a_2506_, v___x_2542_, v___x_2542_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
v___y_2519_ = v___x_2550_;
goto v___jp_2518_;
}
}
else
{
lean_object* v___x_2575_; 
v___x_2575_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__0(v_val_2497_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref(v___x_2575_);
v___x_2577_ = lean_array_fget_borrowed(v_args_2500_, v_a_2506_);
v___x_2578_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_2498_, v_a_2506_, v_next_2502_, v_a_2576_);
lean_dec(v_a_2576_);
if (lean_obj_tag(v___x_2578_) == 1)
{
lean_object* v_val_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2707_; 
v_val_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2707_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_val_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2707_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2583_; uint8_t v_foApprox_2584_; uint8_t v_ctxApprox_2585_; uint8_t v_quasiPatternApprox_2586_; uint8_t v_constApprox_2587_; uint8_t v_isDefEqStuckEx_2588_; uint8_t v_unificationHints_2589_; uint8_t v_assignSyntheticOpaque_2590_; uint8_t v_offsetCnstrs_2591_; uint8_t v_transparency_2592_; uint8_t v_etaStruct_2593_; uint8_t v_univApprox_2594_; uint8_t v_iota_2595_; uint8_t v_beta_2596_; uint8_t v_proj_2597_; uint8_t v_zeta_2598_; uint8_t v_zetaDelta_2599_; uint8_t v_zetaUnused_2600_; uint8_t v_zetaHave_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2706_; 
v___x_2583_ = l_Lean_Meta_Context_config(v___y_2508_);
v_foApprox_2584_ = lean_ctor_get_uint8(v___x_2583_, 0);
v_ctxApprox_2585_ = lean_ctor_get_uint8(v___x_2583_, 1);
v_quasiPatternApprox_2586_ = lean_ctor_get_uint8(v___x_2583_, 2);
v_constApprox_2587_ = lean_ctor_get_uint8(v___x_2583_, 3);
v_isDefEqStuckEx_2588_ = lean_ctor_get_uint8(v___x_2583_, 4);
v_unificationHints_2589_ = lean_ctor_get_uint8(v___x_2583_, 5);
v_assignSyntheticOpaque_2590_ = lean_ctor_get_uint8(v___x_2583_, 7);
v_offsetCnstrs_2591_ = lean_ctor_get_uint8(v___x_2583_, 8);
v_transparency_2592_ = lean_ctor_get_uint8(v___x_2583_, 9);
v_etaStruct_2593_ = lean_ctor_get_uint8(v___x_2583_, 10);
v_univApprox_2594_ = lean_ctor_get_uint8(v___x_2583_, 11);
v_iota_2595_ = lean_ctor_get_uint8(v___x_2583_, 12);
v_beta_2596_ = lean_ctor_get_uint8(v___x_2583_, 13);
v_proj_2597_ = lean_ctor_get_uint8(v___x_2583_, 14);
v_zeta_2598_ = lean_ctor_get_uint8(v___x_2583_, 15);
v_zetaDelta_2599_ = lean_ctor_get_uint8(v___x_2583_, 16);
v_zetaUnused_2600_ = lean_ctor_get_uint8(v___x_2583_, 17);
v_zetaHave_2601_ = lean_ctor_get_uint8(v___x_2583_, 18);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2603_ = v___x_2583_;
v_isShared_2604_ = v_isSharedCheck_2706_;
goto v_resetjp_2602_;
}
else
{
lean_dec(v___x_2583_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2706_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
uint8_t v_trackZetaDelta_2605_; lean_object* v_zetaDeltaSet_2606_; lean_object* v_lctx_2607_; lean_object* v_localInstances_2608_; lean_object* v_defEqCtx_x3f_2609_; lean_object* v_synthPendingDepth_2610_; lean_object* v_canUnfold_x3f_2611_; uint8_t v_univApprox_2612_; uint8_t v_inTypeClassResolution_2613_; uint8_t v_cacheInferType_2614_; uint8_t v___x_2615_; lean_object* v___x_2617_; 
v_trackZetaDelta_2605_ = lean_ctor_get_uint8(v___y_2508_, sizeof(void*)*7);
v_zetaDeltaSet_2606_ = lean_ctor_get(v___y_2508_, 1);
v_lctx_2607_ = lean_ctor_get(v___y_2508_, 2);
v_localInstances_2608_ = lean_ctor_get(v___y_2508_, 3);
v_defEqCtx_x3f_2609_ = lean_ctor_get(v___y_2508_, 4);
v_synthPendingDepth_2610_ = lean_ctor_get(v___y_2508_, 5);
v_canUnfold_x3f_2611_ = lean_ctor_get(v___y_2508_, 6);
v_univApprox_2612_ = lean_ctor_get_uint8(v___y_2508_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2613_ = lean_ctor_get_uint8(v___y_2508_, sizeof(void*)*7 + 2);
v_cacheInferType_2614_ = lean_ctor_get_uint8(v___y_2508_, sizeof(void*)*7 + 3);
v___x_2615_ = 0;
if (v_isShared_2604_ == 0)
{
v___x_2617_ = v___x_2603_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 0, v_foApprox_2584_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 1, v_ctxApprox_2585_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 2, v_quasiPatternApprox_2586_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 3, v_constApprox_2587_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 4, v_isDefEqStuckEx_2588_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 5, v_unificationHints_2589_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 7, v_assignSyntheticOpaque_2590_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 8, v_offsetCnstrs_2591_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 9, v_transparency_2592_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 10, v_etaStruct_2593_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 11, v_univApprox_2594_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 12, v_iota_2595_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 13, v_beta_2596_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 14, v_proj_2597_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 15, v_zeta_2598_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 16, v_zetaDelta_2599_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 17, v_zetaUnused_2600_);
lean_ctor_set_uint8(v_reuseFailAlloc_2705_, 18, v_zetaHave_2601_);
v___x_2617_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
uint64_t v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; uint8_t v_foApprox_2622_; uint8_t v_ctxApprox_2623_; uint8_t v_quasiPatternApprox_2624_; uint8_t v_constApprox_2625_; uint8_t v_isDefEqStuckEx_2626_; uint8_t v_unificationHints_2627_; uint8_t v_proofIrrelevance_2628_; uint8_t v_assignSyntheticOpaque_2629_; uint8_t v_offsetCnstrs_2630_; uint8_t v_etaStruct_2631_; uint8_t v_univApprox_2632_; uint8_t v_iota_2633_; uint8_t v_beta_2634_; uint8_t v_proj_2635_; uint8_t v_zeta_2636_; uint8_t v_zetaDelta_2637_; uint8_t v_zetaUnused_2638_; uint8_t v_zetaHave_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2704_; 
lean_ctor_set_uint8(v___x_2617_, 6, v___x_2615_);
v___x_2618_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2617_);
v___x_2619_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2619_, 0, v___x_2617_);
lean_ctor_set_uint64(v___x_2619_, sizeof(void*)*1, v___x_2618_);
lean_inc(v_canUnfold_x3f_2611_);
lean_inc(v_synthPendingDepth_2610_);
lean_inc(v_defEqCtx_x3f_2609_);
lean_inc_ref(v_localInstances_2608_);
lean_inc_ref(v_lctx_2607_);
lean_inc(v_zetaDeltaSet_2606_);
v___x_2620_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
lean_ctor_set(v___x_2620_, 1, v_zetaDeltaSet_2606_);
lean_ctor_set(v___x_2620_, 2, v_lctx_2607_);
lean_ctor_set(v___x_2620_, 3, v_localInstances_2608_);
lean_ctor_set(v___x_2620_, 4, v_defEqCtx_x3f_2609_);
lean_ctor_set(v___x_2620_, 5, v_synthPendingDepth_2610_);
lean_ctor_set(v___x_2620_, 6, v_canUnfold_x3f_2611_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*7, v_trackZetaDelta_2605_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*7 + 1, v_univApprox_2612_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2613_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*7 + 3, v_cacheInferType_2614_);
v___x_2621_ = l_Lean_Meta_Context_config(v___x_2620_);
v_foApprox_2622_ = lean_ctor_get_uint8(v___x_2621_, 0);
v_ctxApprox_2623_ = lean_ctor_get_uint8(v___x_2621_, 1);
v_quasiPatternApprox_2624_ = lean_ctor_get_uint8(v___x_2621_, 2);
v_constApprox_2625_ = lean_ctor_get_uint8(v___x_2621_, 3);
v_isDefEqStuckEx_2626_ = lean_ctor_get_uint8(v___x_2621_, 4);
v_unificationHints_2627_ = lean_ctor_get_uint8(v___x_2621_, 5);
v_proofIrrelevance_2628_ = lean_ctor_get_uint8(v___x_2621_, 6);
v_assignSyntheticOpaque_2629_ = lean_ctor_get_uint8(v___x_2621_, 7);
v_offsetCnstrs_2630_ = lean_ctor_get_uint8(v___x_2621_, 8);
v_etaStruct_2631_ = lean_ctor_get_uint8(v___x_2621_, 10);
v_univApprox_2632_ = lean_ctor_get_uint8(v___x_2621_, 11);
v_iota_2633_ = lean_ctor_get_uint8(v___x_2621_, 12);
v_beta_2634_ = lean_ctor_get_uint8(v___x_2621_, 13);
v_proj_2635_ = lean_ctor_get_uint8(v___x_2621_, 14);
v_zeta_2636_ = lean_ctor_get_uint8(v___x_2621_, 15);
v_zetaDelta_2637_ = lean_ctor_get_uint8(v___x_2621_, 16);
v_zetaUnused_2638_ = lean_ctor_get_uint8(v___x_2621_, 17);
v_zetaHave_2639_ = lean_ctor_get_uint8(v___x_2621_, 18);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2641_ = v___x_2621_;
v_isShared_2642_ = v_isSharedCheck_2704_;
goto v_resetjp_2640_;
}
else
{
lean_dec(v___x_2621_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2704_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v_config_2647_; 
v___x_2643_ = l_Lean_instInhabitedExpr;
v___x_2644_ = lean_array_get_borrowed(v___x_2643_, v_params_2503_, v_val_2579_);
lean_dec(v_val_2579_);
v___x_2645_ = 2;
if (v_isShared_2642_ == 0)
{
v_config_2647_ = v___x_2641_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 0, v_foApprox_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 1, v_ctxApprox_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 2, v_quasiPatternApprox_2624_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 3, v_constApprox_2625_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 4, v_isDefEqStuckEx_2626_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 5, v_unificationHints_2627_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 6, v_proofIrrelevance_2628_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 7, v_assignSyntheticOpaque_2629_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 8, v_offsetCnstrs_2630_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 10, v_etaStruct_2631_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 11, v_univApprox_2632_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 12, v_iota_2633_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 13, v_beta_2634_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 14, v_proj_2635_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 15, v_zeta_2636_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 16, v_zetaDelta_2637_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 17, v_zetaUnused_2638_);
lean_ctor_set_uint8(v_reuseFailAlloc_2703_, 18, v_zetaHave_2639_);
v_config_2647_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
uint64_t v___x_2648_; uint64_t v___x_2649_; uint64_t v___x_2650_; uint64_t v___x_2651_; uint64_t v___x_2652_; uint64_t v_key_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
lean_ctor_set_uint8(v_config_2647_, 9, v___x_2645_);
v___x_2648_ = l_Lean_Meta_Context_configKey(v___x_2620_);
lean_dec_ref(v___x_2620_);
v___x_2649_ = 2ULL;
v___x_2650_ = lean_uint64_shift_right(v___x_2648_, v___x_2649_);
v___x_2651_ = lean_uint64_shift_left(v___x_2650_, v___x_2649_);
v___x_2652_ = lean_uint64_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg___closed__0);
v_key_2653_ = lean_uint64_lor(v___x_2651_, v___x_2652_);
v___x_2654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2654_, 0, v_config_2647_);
lean_ctor_set_uint64(v___x_2654_, sizeof(void*)*1, v_key_2653_);
lean_inc(v_canUnfold_x3f_2611_);
lean_inc(v_synthPendingDepth_2610_);
lean_inc(v_defEqCtx_x3f_2609_);
lean_inc_ref(v_localInstances_2608_);
lean_inc_ref(v_lctx_2607_);
lean_inc(v_zetaDeltaSet_2606_);
v___x_2655_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
lean_ctor_set(v___x_2655_, 1, v_zetaDeltaSet_2606_);
lean_ctor_set(v___x_2655_, 2, v_lctx_2607_);
lean_ctor_set(v___x_2655_, 3, v_localInstances_2608_);
lean_ctor_set(v___x_2655_, 4, v_defEqCtx_x3f_2609_);
lean_ctor_set(v___x_2655_, 5, v_synthPendingDepth_2610_);
lean_ctor_set(v___x_2655_, 6, v_canUnfold_x3f_2611_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7, v_trackZetaDelta_2605_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7 + 1, v_univApprox_2612_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2613_);
lean_ctor_set_uint8(v___x_2655_, sizeof(void*)*7 + 3, v_cacheInferType_2614_);
lean_inc(v___x_2577_);
lean_inc(v___x_2644_);
v___x_2656_ = l_Lean_Meta_isExprDefEq(v___x_2644_, v___x_2577_, v___x_2655_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec_ref(v___x_2655_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; uint8_t v___x_2658_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref(v___x_2656_);
v___x_2658_ = lean_unbox(v_a_2657_);
lean_dec(v_a_2657_);
if (v___x_2658_ == 0)
{
lean_object* v_options_2659_; lean_object* v_inheritedTraceOptions_2660_; uint8_t v_hasTrace_2661_; 
v_options_2659_ = lean_ctor_get(v___y_2510_, 2);
v_inheritedTraceOptions_2660_ = lean_ctor_get(v___y_2510_, 13);
v_hasTrace_2661_ = lean_ctor_get_uint8(v_options_2659_, sizeof(void*)*1);
if (v_hasTrace_2661_ == 0)
{
lean_del_object(v___x_2581_);
goto v___jp_2662_;
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2665_; uint8_t v___x_2666_; 
v___x_2664_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3));
v___x_2665_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6);
v___x_2666_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2660_, v_options_2659_, v___x_2665_);
if (v___x_2666_ == 0)
{
lean_del_object(v___x_2581_);
goto v___jp_2662_;
}
else
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2670_; 
v___x_2667_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8);
lean_inc(v_val_2498_);
v___x_2668_ = l_Nat_reprFast(v_val_2498_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set_tag(v___x_2581_, 3);
lean_ctor_set(v___x_2581_, 0, v___x_2668_);
v___x_2670_ = v___x_2581_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___x_2668_);
v___x_2670_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2671_ = l_Lean_MessageData_ofFormat(v___x_2670_);
v___x_2672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2667_);
lean_ctor_set(v___x_2672_, 1, v___x_2671_);
v___x_2673_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9);
v___x_2674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set(v___x_2674_, 1, v___x_2673_);
lean_inc(v_a_2506_);
v___x_2675_ = l_Nat_reprFast(v_a_2506_);
v___x_2676_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
v___x_2677_ = l_Lean_MessageData_ofFormat(v___x_2676_);
v___x_2678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2674_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
v___x_2679_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11);
v___x_2680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
lean_inc_ref(v_e_2501_);
v___x_2681_ = l_Lean_MessageData_ofExpr(v_e_2501_);
v___x_2682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2680_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15);
v___x_2684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2682_);
lean_ctor_set(v___x_2684_, 1, v___x_2683_);
lean_inc(v___x_2644_);
v___x_2685_ = l_Lean_MessageData_ofExpr(v___x_2644_);
v___x_2686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2684_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
v___x_2687_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__17);
v___x_2688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2686_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
lean_inc(v___x_2577_);
v___x_2689_ = l_Lean_MessageData_ofExpr(v___x_2577_);
v___x_2690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2688_);
lean_ctor_set(v___x_2690_, 1, v___x_2689_);
v___x_2691_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2664_, v___x_2690_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2693_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_a_2692_);
lean_dec_ref(v___x_2691_);
lean_inc(v_a_2506_);
v___x_2693_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2497_, v_val_2498_, v_a_2506_, v___x_2542_, v_a_2692_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
v___y_2519_ = v___x_2693_;
goto v___jp_2518_;
}
else
{
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
return v___x_2691_;
}
}
}
}
v___jp_2662_:
{
lean_object* v___x_2663_; 
lean_inc(v_a_2506_);
v___x_2663_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2497_, v_val_2498_, v_a_2506_, v___x_2542_, v___x_2542_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
v___y_2519_ = v___x_2663_;
goto v___jp_2518_;
}
}
else
{
lean_del_object(v___x_2581_);
v_a_2514_ = v___x_2542_;
goto v___jp_2513_;
}
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_del_object(v___x_2581_);
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v_a_2695_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2656_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2656_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
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
lean_object* v___x_2708_; uint8_t v___x_2709_; lean_object* v___x_2710_; 
lean_dec(v___x_2578_);
v___x_2708_ = lean_unsigned_to_nat(0u);
v___x_2709_ = 0;
lean_inc(v_a_2506_);
lean_inc(v___x_2577_);
v___x_2710_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg(v___x_2504_, v_val_2497_, v_next_2502_, v_params_2503_, v___x_2577_, v_val_2498_, v_a_2506_, v___x_2505_, v___x_2708_, v___x_2709_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; uint8_t v___x_2712_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
lean_inc(v_a_2711_);
lean_dec_ref(v___x_2710_);
v___x_2712_ = lean_unbox(v_a_2711_);
lean_dec(v_a_2711_);
if (v___x_2712_ == 0)
{
lean_object* v_options_2713_; lean_object* v_inheritedTraceOptions_2714_; uint8_t v_hasTrace_2715_; 
v_options_2713_ = lean_ctor_get(v___y_2510_, 2);
v_inheritedTraceOptions_2714_ = lean_ctor_get(v___y_2510_, 13);
v_hasTrace_2715_ = lean_ctor_get_uint8(v_options_2713_, sizeof(void*)*1);
if (v_hasTrace_2715_ == 0)
{
goto v___jp_2716_;
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; uint8_t v___x_2720_; 
v___x_2718_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3));
v___x_2719_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6);
v___x_2720_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2714_, v_options_2713_, v___x_2719_);
if (v___x_2720_ == 0)
{
goto v___jp_2716_;
}
else
{
lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2721_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__8);
lean_inc(v_val_2498_);
v___x_2722_ = l_Nat_reprFast(v_val_2498_);
v___x_2723_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
v___x_2724_ = l_Lean_MessageData_ofFormat(v___x_2723_);
v___x_2725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2721_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__9);
v___x_2727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2725_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
lean_inc(v_a_2506_);
v___x_2728_ = l_Nat_reprFast(v_a_2506_);
v___x_2729_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
v___x_2730_ = l_Lean_MessageData_ofFormat(v___x_2729_);
v___x_2731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2727_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
v___x_2732_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__11);
v___x_2733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2731_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
lean_inc_ref(v_e_2501_);
v___x_2734_ = l_Lean_MessageData_ofExpr(v_e_2501_);
v___x_2735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2735_, 0, v___x_2733_);
lean_ctor_set(v___x_2735_, 1, v___x_2734_);
v___x_2736_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__15);
v___x_2737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2735_);
lean_ctor_set(v___x_2737_, 1, v___x_2736_);
lean_inc(v___x_2577_);
v___x_2738_ = l_Lean_MessageData_ofExpr(v___x_2577_);
v___x_2739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2737_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__19);
v___x_2741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2739_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2718_, v___x_2741_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2744_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2743_);
lean_dec_ref(v___x_2742_);
lean_inc(v_a_2506_);
v___x_2744_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2497_, v_val_2498_, v_a_2506_, v___x_2542_, v_a_2743_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
v___y_2519_ = v___x_2744_;
goto v___jp_2518_;
}
else
{
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
return v___x_2742_;
}
}
}
v___jp_2716_:
{
lean_object* v___x_2717_; 
lean_inc(v_a_2506_);
v___x_2717_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___lam__1(v_val_2497_, v_val_2498_, v_a_2506_, v___x_2542_, v___x_2542_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
v___y_2519_ = v___x_2717_;
goto v___jp_2518_;
}
}
else
{
v_a_2514_ = v___x_2542_;
goto v___jp_2513_;
}
}
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v_a_2745_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2710_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2710_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v_a_2753_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2575_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2575_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
}
else
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v_a_2761_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v___x_2540_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2540_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_a_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
}
v___jp_2513_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = lean_unsigned_to_nat(1u);
v___x_2516_ = lean_nat_add(v_a_2506_, v___x_2515_);
lean_dec(v_a_2506_);
v_a_2506_ = v___x_2516_;
v_b_2507_ = v_a_2514_;
goto _start;
}
v___jp_2518_:
{
if (lean_obj_tag(v___y_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2529_; 
v_a_2520_ = lean_ctor_get(v___y_2519_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___y_2519_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2522_ = v___y_2519_;
v_isShared_2523_ = v_isSharedCheck_2529_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___y_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2529_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
if (lean_obj_tag(v_a_2520_) == 0)
{
lean_object* v_a_2524_; lean_object* v___x_2526_; 
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v_a_2524_ = lean_ctor_get(v_a_2520_, 0);
lean_inc(v_a_2524_);
lean_dec_ref(v_a_2520_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v_a_2524_);
v___x_2526_ = v___x_2522_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_a_2524_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
else
{
lean_object* v_a_2528_; 
lean_del_object(v___x_2522_);
v_a_2528_ = lean_ctor_get(v_a_2520_, 0);
lean_inc(v_a_2528_);
lean_dec_ref(v_a_2520_);
v_a_2514_ = v_a_2528_;
goto v___jp_2513_;
}
}
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
lean_dec(v_a_2506_);
lean_dec_ref(v_e_2501_);
lean_dec(v_val_2498_);
v_a_2530_ = lean_ctor_get(v___y_2519_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___y_2519_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___y_2519_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___y_2519_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_val_2769_, lean_object* v_val_2770_, lean_object* v_upperBound_2771_, lean_object* v_args_2772_, lean_object* v_e_2773_, lean_object* v_next_2774_, lean_object* v_params_2775_, lean_object* v___x_2776_, lean_object* v___x_2777_, lean_object* v_a_2778_, lean_object* v_b_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
uint8_t v___x_44407__boxed_2785_; lean_object* v_res_2786_; 
v___x_44407__boxed_2785_ = lean_unbox(v___x_2777_);
v_res_2786_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2769_, v_val_2770_, v_upperBound_2771_, v_args_2772_, v_e_2773_, v_next_2774_, v_params_2775_, v___x_2776_, v___x_44407__boxed_2785_, v_a_2778_, v_b_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec(v___x_2776_);
lean_dec_ref(v_params_2775_);
lean_dec(v_next_2774_);
lean_dec_ref(v_args_2772_);
lean_dec(v_upperBound_2771_);
lean_dec(v_val_2769_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_preDefs_2789_, lean_object* v___x_2790_, lean_object* v_val_2791_, lean_object* v_e_2792_, lean_object* v_next_2793_, lean_object* v_params_2794_, lean_object* v___x_2795_, lean_object* v_x_2796_, lean_object* v_x_2797_, lean_object* v_x_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
if (lean_obj_tag(v_x_2796_) == 5)
{
lean_object* v_fn_2804_; lean_object* v_arg_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v_fn_2804_ = lean_ctor_get(v_x_2796_, 0);
lean_inc_ref(v_fn_2804_);
v_arg_2805_ = lean_ctor_get(v_x_2796_, 1);
lean_inc_ref(v_arg_2805_);
lean_dec_ref(v_x_2796_);
v___x_2806_ = lean_array_set(v_x_2797_, v_x_2798_, v_arg_2805_);
v___x_2807_ = lean_unsigned_to_nat(1u);
v___x_2808_ = lean_nat_sub(v_x_2798_, v___x_2807_);
lean_dec(v_x_2798_);
v_x_2796_ = v_fn_2804_;
v_x_2797_ = v___x_2806_;
v_x_2798_ = v___x_2808_;
goto _start;
}
else
{
uint8_t v___x_2810_; 
lean_dec(v_x_2798_);
v___x_2810_ = l_Lean_Expr_isConst(v_x_2796_);
if (v___x_2810_ == 0)
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
lean_dec_ref(v_x_2797_);
lean_dec_ref(v_x_2796_);
lean_dec_ref(v_e_2792_);
v___x_2811_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___closed__0));
v___x_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2811_);
return v___x_2812_;
}
else
{
lean_object* v___x_2813_; lean_object* v___f_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2813_ = l_Lean_Expr_constName_x21(v_x_2796_);
lean_dec_ref(v_x_2796_);
v___f_2814_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2814_, 0, v___x_2813_);
v___x_2815_ = lean_unsigned_to_nat(0u);
v___x_2816_ = l_Array_findIdx_x3f_loop___redArg(v___f_2814_, v_preDefs_2789_, v___x_2815_);
if (lean_obj_tag(v___x_2816_) == 1)
{
lean_object* v_val_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v_val_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_val_2817_);
lean_dec_ref(v___x_2816_);
v___x_2818_ = lean_box(0);
v___x_2819_ = lean_array_get_borrowed(v___x_2815_, v___x_2790_, v_val_2817_);
v___x_2820_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2791_, v_val_2817_, v___x_2819_, v_x_2797_, v_e_2792_, v_next_2793_, v_params_2794_, v___x_2795_, v___x_2810_, v___x_2815_, v___x_2818_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_);
lean_dec_ref(v_x_2797_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2828_; 
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2828_ == 0)
{
lean_object* v_unused_2829_; 
v_unused_2829_ = lean_ctor_get(v___x_2820_, 0);
lean_dec(v_unused_2829_);
v___x_2822_ = v___x_2820_;
v_isShared_2823_ = v_isSharedCheck_2828_;
goto v_resetjp_2821_;
}
else
{
lean_dec(v___x_2820_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2828_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2824_; lean_object* v___x_2826_; 
v___x_2824_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___closed__0));
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v___x_2824_);
v___x_2826_ = v___x_2822_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v___x_2824_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
v_a_2830_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2832_ = v___x_2820_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2820_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2830_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
lean_dec(v___x_2816_);
lean_dec_ref(v_x_2797_);
lean_dec_ref(v_e_2792_);
v___x_2838_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___closed__0));
v___x_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
return v___x_2839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object* v_preDefs_2840_, lean_object* v___x_2841_, lean_object* v_val_2842_, lean_object* v_e_2843_, lean_object* v_next_2844_, lean_object* v_params_2845_, lean_object* v___x_2846_, lean_object* v_x_2847_, lean_object* v_x_2848_, lean_object* v_x_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_preDefs_2840_, v___x_2841_, v_val_2842_, v_e_2843_, v_next_2844_, v_params_2845_, v___x_2846_, v_x_2847_, v_x_2848_, v_x_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___x_2846_);
lean_dec_ref(v_params_2845_);
lean_dec(v_next_2844_);
lean_dec(v_val_2842_);
lean_dec_ref(v___x_2841_);
lean_dec_ref(v_preDefs_2840_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__1(lean_object* v_preDefs_2856_, lean_object* v___x_2857_, lean_object* v_val_2858_, lean_object* v_a_2859_, lean_object* v_params_2860_, lean_object* v___x_2861_, lean_object* v_e_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_dummy_2868_; lean_object* v_nargs_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_dummy_2868_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8___lam__1___closed__1);
v_nargs_2869_ = l_Lean_Expr_getAppNumArgs(v_e_2862_);
lean_inc(v_nargs_2869_);
v___x_2870_ = lean_mk_array(v_nargs_2869_, v_dummy_2868_);
v___x_2871_ = lean_unsigned_to_nat(1u);
v___x_2872_ = lean_nat_sub(v_nargs_2869_, v___x_2871_);
lean_dec(v_nargs_2869_);
lean_inc_ref(v_e_2862_);
v___x_2873_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_preDefs_2856_, v___x_2857_, v_val_2858_, v_e_2862_, v_a_2859_, v_params_2860_, v___x_2861_, v_e_2862_, v___x_2870_, v___x_2872_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__1___boxed(lean_object* v_preDefs_2874_, lean_object* v___x_2875_, lean_object* v_val_2876_, lean_object* v_a_2877_, lean_object* v_params_2878_, lean_object* v___x_2879_, lean_object* v_e_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__1(v_preDefs_2874_, v___x_2875_, v_val_2876_, v_a_2877_, v_params_2878_, v___x_2879_, v_e_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___x_2879_);
lean_dec_ref(v_params_2878_);
lean_dec(v_a_2877_);
lean_dec(v_val_2876_);
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_preDefs_2874_);
return v_res_2886_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2890_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__2));
v___x_2891_ = lean_unsigned_to_nat(6u);
v___x_2892_ = lean_unsigned_to_nat(201u);
v___x_2893_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__1));
v___x_2894_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_2895_ = l_mkPanicMessageWithDecl(v___x_2894_, v___x_2893_, v___x_2892_, v___x_2891_, v___x_2890_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2(lean_object* v___x_2896_, lean_object* v___x_2897_, lean_object* v_a_2898_, lean_object* v_preDefs_2899_, lean_object* v_val_2900_, lean_object* v___f_2901_, lean_object* v___x_2902_, lean_object* v_params_2903_, lean_object* v_body_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; uint8_t v___x_2912_; 
v___x_2910_ = lean_array_get_size(v_params_2903_);
v___x_2911_ = lean_array_get_borrowed(v___x_2896_, v___x_2897_, v_a_2898_);
v___x_2912_ = lean_nat_dec_eq(v___x_2910_, v___x_2911_);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
lean_dec_ref(v_body_2904_);
lean_dec_ref(v_params_2903_);
lean_dec_ref(v___f_2901_);
lean_dec(v_val_2900_);
lean_dec_ref(v_preDefs_2899_);
lean_dec(v_a_2898_);
lean_dec_ref(v___x_2897_);
v___x_2913_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__3);
v___x_2914_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6(v___x_2913_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
return v___x_2914_;
}
else
{
lean_object* v___f_2915_; uint8_t v___x_2916_; lean_object* v___x_2917_; 
v___f_2915_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__1___boxed), 12, 6);
lean_closure_set(v___f_2915_, 0, v_preDefs_2899_);
lean_closure_set(v___f_2915_, 1, v___x_2897_);
lean_closure_set(v___f_2915_, 2, v_val_2900_);
lean_closure_set(v___f_2915_, 3, v_a_2898_);
lean_closure_set(v___f_2915_, 4, v_params_2903_);
lean_closure_set(v___f_2915_, 5, v___x_2910_);
v___x_2916_ = 0;
v___x_2917_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_body_2904_, v___f_2915_, v___f_2901_, v___x_2916_, v___x_2912_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2924_ == 0)
{
lean_object* v_unused_2925_; 
v_unused_2925_ = lean_ctor_get(v___x_2917_, 0);
lean_dec(v_unused_2925_);
v___x_2919_ = v___x_2917_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_dec(v___x_2917_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 0, v___x_2902_);
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v___x_2902_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
v_a_2926_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2917_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2917_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___boxed(lean_object* v___x_2934_, lean_object* v___x_2935_, lean_object* v_a_2936_, lean_object* v_preDefs_2937_, lean_object* v_val_2938_, lean_object* v___f_2939_, lean_object* v___x_2940_, lean_object* v_params_2941_, lean_object* v_body_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v_res_2948_; 
v_res_2948_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2(v___x_2934_, v___x_2935_, v_a_2936_, v_preDefs_2937_, v_val_2938_, v___f_2939_, v___x_2940_, v_params_2941_, v_body_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2945_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec(v___x_2934_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg(lean_object* v_preDefs_2950_, lean_object* v___x_2951_, lean_object* v_val_2952_, lean_object* v_upperBound_2953_, lean_object* v_a_2954_, lean_object* v_b_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
uint8_t v___x_2961_; 
v___x_2961_ = lean_nat_dec_lt(v_a_2954_, v_upperBound_2953_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; 
lean_dec(v_a_2954_);
lean_dec(v_val_2952_);
lean_dec_ref(v___x_2951_);
lean_dec_ref(v_preDefs_2950_);
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v_b_2955_);
return v___x_2962_;
}
else
{
lean_object* v___x_2963_; lean_object* v_value_2964_; lean_object* v___f_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___f_2968_; uint8_t v___x_2969_; lean_object* v___x_2970_; 
v___x_2963_ = lean_array_fget_borrowed(v_preDefs_2950_, v_a_2954_);
v_value_2964_ = lean_ctor_get(v___x_2963_, 7);
v___f_2965_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___closed__0));
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = lean_box(0);
lean_inc(v_val_2952_);
lean_inc_ref(v_preDefs_2950_);
lean_inc(v_a_2954_);
lean_inc_ref(v___x_2951_);
v___f_2968_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_2968_, 0, v___x_2966_);
lean_closure_set(v___f_2968_, 1, v___x_2951_);
lean_closure_set(v___f_2968_, 2, v_a_2954_);
lean_closure_set(v___f_2968_, 3, v_preDefs_2950_);
lean_closure_set(v___f_2968_, 4, v_val_2952_);
lean_closure_set(v___f_2968_, 5, v___f_2965_);
lean_closure_set(v___f_2968_, 6, v___x_2967_);
v___x_2969_ = 0;
lean_inc_ref(v_value_2964_);
v___x_2970_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_2964_, v___f_2968_, v___x_2969_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
lean_dec_ref(v___x_2970_);
v___x_2971_ = lean_unsigned_to_nat(1u);
v___x_2972_ = lean_nat_add(v_a_2954_, v___x_2971_);
lean_dec(v_a_2954_);
v_a_2954_ = v___x_2972_;
v_b_2955_ = v___x_2967_;
goto _start;
}
else
{
lean_dec(v_a_2954_);
lean_dec(v_val_2952_);
lean_dec_ref(v___x_2951_);
lean_dec_ref(v_preDefs_2950_);
return v___x_2970_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___boxed(lean_object* v_preDefs_2974_, lean_object* v___x_2975_, lean_object* v_val_2976_, lean_object* v_upperBound_2977_, lean_object* v_a_2978_, lean_object* v_b_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg(v_preDefs_2974_, v___x_2975_, v_val_2976_, v_upperBound_2977_, v_a_2978_, v_b_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec(v_upperBound_2977_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t v_sz_2986_, size_t v_i_2987_, lean_object* v_bs_2988_){
_start:
{
uint8_t v___x_2989_; 
v___x_2989_ = lean_usize_dec_lt(v_i_2987_, v_sz_2986_);
if (v___x_2989_ == 0)
{
return v_bs_2988_;
}
else
{
lean_object* v_v_2990_; lean_object* v___x_2991_; lean_object* v_bs_x27_2992_; lean_object* v___x_2993_; size_t v___x_2994_; size_t v___x_2995_; lean_object* v___x_2996_; 
v_v_2990_ = lean_array_uget(v_bs_2988_, v_i_2987_);
v___x_2991_ = lean_unsigned_to_nat(0u);
v_bs_x27_2992_ = lean_array_uset(v_bs_2988_, v_i_2987_, v___x_2991_);
v___x_2993_ = lean_array_get_size(v_v_2990_);
lean_dec(v_v_2990_);
v___x_2994_ = ((size_t)1ULL);
v___x_2995_ = lean_usize_add(v_i_2987_, v___x_2994_);
v___x_2996_ = lean_array_uset(v_bs_x27_2992_, v_i_2987_, v___x_2993_);
v_i_2987_ = v___x_2995_;
v_bs_2988_ = v___x_2996_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object* v_sz_2998_, lean_object* v_i_2999_, lean_object* v_bs_3000_){
_start:
{
size_t v_sz_boxed_3001_; size_t v_i_boxed_3002_; lean_object* v_res_3003_; 
v_sz_boxed_3001_ = lean_unbox_usize(v_sz_2998_);
lean_dec(v_sz_2998_);
v_i_boxed_3002_ = lean_unbox_usize(v_i_2999_);
lean_dec(v_i_2999_);
v_res_3003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_boxed_3001_, v_i_boxed_3002_, v_bs_3000_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t v_sz_3004_, size_t v_i_3005_, lean_object* v_bs_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
uint8_t v___x_3012_; 
v___x_3012_ = lean_usize_dec_lt(v_i_3005_, v_sz_3004_);
if (v___x_3012_ == 0)
{
lean_object* v___x_3013_; 
v___x_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3013_, 0, v_bs_3006_);
return v___x_3013_;
}
else
{
lean_object* v_v_3014_; lean_object* v_value_3015_; lean_object* v___x_3016_; 
v_v_3014_ = lean_array_uget_borrowed(v_bs_3006_, v_i_3005_);
v_value_3015_ = lean_ctor_get(v_v_3014_, 7);
lean_inc_ref(v_value_3015_);
v___x_3016_ = l_Lean_Elab_getParamRevDeps(v_value_3015_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; lean_object* v___x_3018_; lean_object* v_bs_x27_3019_; size_t v___x_3020_; size_t v___x_3021_; lean_object* v___x_3022_; 
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3017_);
lean_dec_ref(v___x_3016_);
v___x_3018_ = lean_unsigned_to_nat(0u);
v_bs_x27_3019_ = lean_array_uset(v_bs_3006_, v_i_3005_, v___x_3018_);
v___x_3020_ = ((size_t)1ULL);
v___x_3021_ = lean_usize_add(v_i_3005_, v___x_3020_);
v___x_3022_ = lean_array_uset(v_bs_x27_3019_, v_i_3005_, v_a_3017_);
v_i_3005_ = v___x_3021_;
v_bs_3006_ = v___x_3022_;
goto _start;
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_dec_ref(v_bs_3006_);
v_a_3024_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_3016_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3016_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object* v_sz_3032_, lean_object* v_i_3033_, lean_object* v_bs_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
size_t v_sz_boxed_3040_; size_t v_i_boxed_3041_; lean_object* v_res_3042_; 
v_sz_boxed_3040_ = lean_unbox_usize(v_sz_3032_);
lean_dec(v_sz_3032_);
v_i_boxed_3041_ = lean_unbox_usize(v_i_3033_);
lean_dec(v_i_3033_);
v_res_3042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_boxed_3040_, v_i_boxed_3041_, v_bs_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
return v_res_3042_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3044_ = ((lean_object*)(l_Lean_Elab_getFixedParamsInfo___closed__0));
v___x_3045_ = l_Lean_stringToMessageData(v___x_3044_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_){
_start:
{
size_t v_sz_3052_; size_t v___x_3053_; lean_object* v___x_3054_; 
v_sz_3052_ = lean_array_size(v_preDefs_3046_);
v___x_3053_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3046_);
v___x_3054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_3052_, v___x_3053_, v_preDefs_3046_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v_a_3055_; size_t v_sz_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v_a_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc_n(v_a_3055_, 2);
lean_dec_ref(v___x_3054_);
v_sz_3056_ = lean_array_size(v_a_3055_);
v___x_3057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_3056_, v___x_3053_, v_a_3055_);
v___x_3058_ = l_Lean_Elab_FixedParams_Info_init(v_a_3055_);
v___x_3059_ = lean_st_mk_ref(v___x_3058_);
v___x_3060_ = lean_st_ref_take(v___x_3059_);
v___x_3061_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_3060_);
v___x_3062_ = lean_st_ref_set(v___x_3059_, v___x_3061_);
v___x_3063_ = lean_array_get_size(v_preDefs_3046_);
v___x_3064_ = lean_unsigned_to_nat(0u);
v___x_3065_ = lean_box(0);
lean_inc(v___x_3059_);
v___x_3066_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg(v_preDefs_3046_, v___x_3057_, v___x_3059_, v___x_3063_, v___x_3064_, v___x_3065_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3105_; 
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3105_ == 0)
{
lean_object* v_unused_3106_; 
v_unused_3106_ = lean_ctor_get(v___x_3066_, 0);
lean_dec(v_unused_3106_);
v___x_3068_ = v___x_3066_;
v_isShared_3069_ = v_isSharedCheck_3105_;
goto v_resetjp_3067_;
}
else
{
lean_dec(v___x_3066_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3105_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3070_; lean_object* v_options_3071_; uint8_t v_hasTrace_3072_; 
v___x_3070_ = lean_st_ref_get(v___x_3059_);
lean_dec(v___x_3059_);
v_options_3071_ = lean_ctor_get(v_a_3049_, 2);
v_hasTrace_3072_ = lean_ctor_get_uint8(v_options_3071_, sizeof(void*)*1);
if (v_hasTrace_3072_ == 0)
{
lean_object* v___x_3074_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3070_);
v___x_3074_ = v___x_3068_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3070_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; uint8_t v___x_3079_; 
v_inheritedTraceOptions_3076_ = lean_ctor_get(v_a_3049_, 13);
v___x_3077_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3));
v___x_3078_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__6);
v___x_3079_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3076_, v_options_3071_, v___x_3078_);
if (v___x_3079_ == 0)
{
lean_object* v___x_3081_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3070_);
v___x_3081_ = v___x_3068_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3070_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
else
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
lean_del_object(v___x_3068_);
v___x_3083_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_3070_);
v___x_3084_ = l_Lean_Elab_FixedParams_Info_format(v___x_3070_);
v___x_3085_ = l_Std_Format_indentD(v___x_3084_);
v___x_3086_ = l_Lean_MessageData_ofFormat(v___x_3085_);
v___x_3087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3083_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_3077_, v___x_3087_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; 
v_unused_3096_ = lean_ctor_get(v___x_3088_, 0);
lean_dec(v_unused_3096_);
v___x_3090_ = v___x_3088_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_dec(v___x_3088_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 0, v___x_3070_);
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3070_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
lean_dec(v___x_3070_);
v_a_3097_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_3088_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3088_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec(v___x_3059_);
v_a_3107_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_3066_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_3066_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec_ref(v_preDefs_3046_);
v_a_3115_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_3054_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3054_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
lean_dec(v_a_3127_);
lean_dec_ref(v_a_3126_);
lean_dec(v_a_3125_);
lean_dec_ref(v_a_3124_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v_upperBound_3130_, lean_object* v_val_3131_, lean_object* v_next_3132_, lean_object* v_params_3133_, lean_object* v___x_3134_, lean_object* v_val_3135_, lean_object* v_next_3136_, uint8_t v___x_3137_, lean_object* v_inst_3138_, lean_object* v_R_3139_, lean_object* v_a_3140_, uint8_t v_b_3141_, lean_object* v_c_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v___x_3148_; 
v___x_3148_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___redArg(v_upperBound_3130_, v_val_3131_, v_next_3132_, v_params_3133_, v___x_3134_, v_val_3135_, v_next_3136_, v___x_3137_, v_a_3140_, v_b_3141_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
return v___x_3148_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object** _args){
lean_object* v_upperBound_3149_ = _args[0];
lean_object* v_val_3150_ = _args[1];
lean_object* v_next_3151_ = _args[2];
lean_object* v_params_3152_ = _args[3];
lean_object* v___x_3153_ = _args[4];
lean_object* v_val_3154_ = _args[5];
lean_object* v_next_3155_ = _args[6];
lean_object* v___x_3156_ = _args[7];
lean_object* v_inst_3157_ = _args[8];
lean_object* v_R_3158_ = _args[9];
lean_object* v_a_3159_ = _args[10];
lean_object* v_b_3160_ = _args[11];
lean_object* v_c_3161_ = _args[12];
lean_object* v___y_3162_ = _args[13];
lean_object* v___y_3163_ = _args[14];
lean_object* v___y_3164_ = _args[15];
lean_object* v___y_3165_ = _args[16];
lean_object* v___y_3166_ = _args[17];
_start:
{
uint8_t v___x_45402__boxed_3167_; uint8_t v_b_boxed_3168_; lean_object* v_res_3169_; 
v___x_45402__boxed_3167_ = lean_unbox(v___x_3156_);
v_b_boxed_3168_ = lean_unbox(v_b_3160_);
v_res_3169_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__3(v_upperBound_3149_, v_val_3150_, v_next_3151_, v_params_3152_, v___x_3153_, v_val_3154_, v_next_3155_, v___x_45402__boxed_3167_, v_inst_3157_, v_R_3158_, v_a_3159_, v_b_boxed_3168_, v_c_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v_val_3154_);
lean_dec_ref(v_params_3152_);
lean_dec(v_next_3151_);
lean_dec(v_val_3150_);
lean_dec(v_upperBound_3149_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_val_3170_, lean_object* v_val_3171_, lean_object* v_upperBound_3172_, lean_object* v_args_3173_, lean_object* v_e_3174_, lean_object* v_next_3175_, lean_object* v_params_3176_, lean_object* v___x_3177_, uint8_t v___x_3178_, lean_object* v_inst_3179_, lean_object* v_R_3180_, lean_object* v_a_3181_, lean_object* v_b_3182_, lean_object* v_c_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_3170_, v_val_3171_, v_upperBound_3172_, v_args_3173_, v_e_3174_, v_next_3175_, v_params_3176_, v___x_3177_, v___x_3178_, v_a_3181_, v_b_3182_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_val_3190_ = _args[0];
lean_object* v_val_3191_ = _args[1];
lean_object* v_upperBound_3192_ = _args[2];
lean_object* v_args_3193_ = _args[3];
lean_object* v_e_3194_ = _args[4];
lean_object* v_next_3195_ = _args[5];
lean_object* v_params_3196_ = _args[6];
lean_object* v___x_3197_ = _args[7];
lean_object* v___x_3198_ = _args[8];
lean_object* v_inst_3199_ = _args[9];
lean_object* v_R_3200_ = _args[10];
lean_object* v_a_3201_ = _args[11];
lean_object* v_b_3202_ = _args[12];
lean_object* v_c_3203_ = _args[13];
lean_object* v___y_3204_ = _args[14];
lean_object* v___y_3205_ = _args[15];
lean_object* v___y_3206_ = _args[16];
lean_object* v___y_3207_ = _args[17];
lean_object* v___y_3208_ = _args[18];
_start:
{
uint8_t v___x_45437__boxed_3209_; lean_object* v_res_3210_; 
v___x_45437__boxed_3209_ = lean_unbox(v___x_3198_);
v_res_3210_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_val_3190_, v_val_3191_, v_upperBound_3192_, v_args_3193_, v_e_3194_, v_next_3195_, v_params_3196_, v___x_3197_, v___x_45437__boxed_3209_, v_inst_3199_, v_R_3200_, v_a_3201_, v_b_3202_, v_c_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___x_3197_);
lean_dec_ref(v_params_3196_);
lean_dec(v_next_3195_);
lean_dec_ref(v_args_3193_);
lean_dec(v_upperBound_3192_);
lean_dec(v_val_3190_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_preDefs_3211_, lean_object* v___x_3212_, lean_object* v_val_3213_, lean_object* v_upperBound_3214_, lean_object* v_inst_3215_, lean_object* v_R_3216_, lean_object* v_a_3217_, lean_object* v_b_3218_, lean_object* v_c_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
lean_object* v___x_3225_; 
v___x_3225_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg(v_preDefs_3211_, v___x_3212_, v_val_3213_, v_upperBound_3214_, v_a_3217_, v_b_3218_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_preDefs_3226_, lean_object* v___x_3227_, lean_object* v_val_3228_, lean_object* v_upperBound_3229_, lean_object* v_inst_3230_, lean_object* v_R_3231_, lean_object* v_a_3232_, lean_object* v_b_3233_, lean_object* v_c_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_preDefs_3226_, v___x_3227_, v_val_3228_, v_upperBound_3229_, v_inst_3230_, v_R_3231_, v_a_3232_, v_b_3233_, v_c_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec(v_upperBound_3229_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11(lean_object* v_upperBound_3241_, lean_object* v___x_3242_, lean_object* v_pre_3243_, lean_object* v_post_3244_, uint8_t v_usedLetOnly_3245_, uint8_t v_skipConstInApp_3246_, uint8_t v_skipInstances_3247_, lean_object* v___x_3248_, lean_object* v_inst_3249_, lean_object* v_R_3250_, lean_object* v_a_3251_, lean_object* v_b_3252_, lean_object* v_c_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___redArg(v_upperBound_3241_, v___x_3242_, v_pre_3243_, v_post_3244_, v_usedLetOnly_3245_, v_skipConstInApp_3246_, v_skipInstances_3247_, v_a_3251_, v_b_3252_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11___boxed(lean_object** _args){
lean_object* v_upperBound_3261_ = _args[0];
lean_object* v___x_3262_ = _args[1];
lean_object* v_pre_3263_ = _args[2];
lean_object* v_post_3264_ = _args[3];
lean_object* v_usedLetOnly_3265_ = _args[4];
lean_object* v_skipConstInApp_3266_ = _args[5];
lean_object* v_skipInstances_3267_ = _args[6];
lean_object* v___x_3268_ = _args[7];
lean_object* v_inst_3269_ = _args[8];
lean_object* v_R_3270_ = _args[9];
lean_object* v_a_3271_ = _args[10];
lean_object* v_b_3272_ = _args[11];
lean_object* v_c_3273_ = _args[12];
lean_object* v___y_3274_ = _args[13];
lean_object* v___y_3275_ = _args[14];
lean_object* v___y_3276_ = _args[15];
lean_object* v___y_3277_ = _args[16];
lean_object* v___y_3278_ = _args[17];
lean_object* v___y_3279_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3280_; uint8_t v_skipConstInApp_boxed_3281_; uint8_t v_skipInstances_boxed_3282_; lean_object* v_res_3283_; 
v_usedLetOnly_boxed_3280_ = lean_unbox(v_usedLetOnly_3265_);
v_skipConstInApp_boxed_3281_ = lean_unbox(v_skipConstInApp_3266_);
v_skipInstances_boxed_3282_ = lean_unbox(v_skipInstances_3267_);
v_res_3283_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__11(v_upperBound_3261_, v___x_3262_, v_pre_3263_, v_post_3264_, v_usedLetOnly_boxed_3280_, v_skipConstInApp_boxed_3281_, v_skipInstances_boxed_3282_, v___x_3268_, v_inst_3269_, v_R_3270_, v_a_3271_, v_b_3272_, v_c_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
lean_dec(v___y_3274_);
lean_dec(v___x_3268_);
lean_dec_ref(v___x_3262_);
lean_dec(v_upperBound_3261_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12(lean_object* v_00_u03b2_3284_, lean_object* v_m_3285_, lean_object* v_a_3286_){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___redArg(v_m_3285_, v_a_3286_);
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12___boxed(lean_object* v_00_u03b2_3288_, lean_object* v_m_3289_, lean_object* v_a_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12(v_00_u03b2_3288_, v_m_3289_, v_a_3290_);
lean_dec_ref(v_a_3290_);
lean_dec_ref(v_m_3289_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16(lean_object* v_00_u03b1_3292_, lean_object* v_name_3293_, uint8_t v_bi_3294_, lean_object* v_type_3295_, lean_object* v_k_3296_, uint8_t v_kind_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___redArg(v_name_3293_, v_bi_3294_, v_type_3295_, v_k_3296_, v_kind_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16___boxed(lean_object* v_00_u03b1_3305_, lean_object* v_name_3306_, lean_object* v_bi_3307_, lean_object* v_type_3308_, lean_object* v_k_3309_, lean_object* v_kind_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_){
_start:
{
uint8_t v_bi_boxed_3317_; uint8_t v_kind_boxed_3318_; lean_object* v_res_3319_; 
v_bi_boxed_3317_ = lean_unbox(v_bi_3307_);
v_kind_boxed_3318_ = lean_unbox(v_kind_3310_);
v_res_3319_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__13_spec__16(v_00_u03b1_3305_, v_name_3306_, v_bi_boxed_3317_, v_type_3308_, v_k_3309_, v_kind_boxed_3318_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19(lean_object* v_00_u03b1_3320_, lean_object* v_name_3321_, lean_object* v_type_3322_, lean_object* v_val_3323_, lean_object* v_k_3324_, uint8_t v_nondep_3325_, uint8_t v_kind_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
lean_object* v___x_3333_; 
v___x_3333_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___redArg(v_name_3321_, v_type_3322_, v_val_3323_, v_k_3324_, v_nondep_3325_, v_kind_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19___boxed(lean_object* v_00_u03b1_3334_, lean_object* v_name_3335_, lean_object* v_type_3336_, lean_object* v_val_3337_, lean_object* v_k_3338_, lean_object* v_nondep_3339_, lean_object* v_kind_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
uint8_t v_nondep_boxed_3347_; uint8_t v_kind_boxed_3348_; lean_object* v_res_3349_; 
v_nondep_boxed_3347_ = lean_unbox(v_nondep_3339_);
v_kind_boxed_3348_ = lean_unbox(v_kind_3340_);
v_res_3349_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__15_spec__19(v_00_u03b1_3334_, v_name_3335_, v_type_3336_, v_val_3337_, v_k_3338_, v_nondep_boxed_3347_, v_kind_boxed_3348_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22(lean_object* v_00_u03b1_3350_, lean_object* v_ref_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_){
_start:
{
lean_object* v___x_3357_; 
v___x_3357_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___redArg(v_ref_3351_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22___boxed(lean_object* v_00_u03b1_3358_, lean_object* v_ref_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17_spec__22(v_00_u03b1_3358_, v_ref_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17(lean_object* v_00_u03b1_3366_, lean_object* v_x_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_){
_start:
{
lean_object* v___x_3374_; 
v___x_3374_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___redArg(v_x_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
return v___x_3374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17___boxed(lean_object* v_00_u03b1_3375_, lean_object* v_x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__17(v_00_u03b1_3375_, v_x_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
lean_dec(v___y_3377_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18(lean_object* v_00_u03b2_3384_, lean_object* v_m_3385_, lean_object* v_a_3386_, lean_object* v_b_3387_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18___redArg(v_m_3385_, v_a_3386_, v_b_3387_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14(lean_object* v_00_u03b2_3389_, lean_object* v_a_3390_, lean_object* v_x_3391_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___redArg(v_a_3390_, v_x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14___boxed(lean_object* v_00_u03b2_3393_, lean_object* v_a_3394_, lean_object* v_x_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__12_spec__14(v_00_u03b2_3393_, v_a_3394_, v_x_3395_);
lean_dec(v_x_3395_);
lean_dec_ref(v_a_3394_);
return v_res_3396_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24(lean_object* v_00_u03b2_3397_, lean_object* v_a_3398_, lean_object* v_x_3399_){
_start:
{
uint8_t v___x_3400_; 
v___x_3400_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___redArg(v_a_3398_, v_x_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24___boxed(lean_object* v_00_u03b2_3401_, lean_object* v_a_3402_, lean_object* v_x_3403_){
_start:
{
uint8_t v_res_3404_; lean_object* v_r_3405_; 
v_res_3404_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__24(v_00_u03b2_3401_, v_a_3402_, v_x_3403_);
lean_dec(v_x_3403_);
lean_dec_ref(v_a_3402_);
v_r_3405_ = lean_box(v_res_3404_);
return v_r_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25(lean_object* v_00_u03b2_3406_, lean_object* v_data_3407_){
_start:
{
lean_object* v___x_3408_; 
v___x_3408_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25___redArg(v_data_3407_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26(lean_object* v_00_u03b2_3409_, lean_object* v_a_3410_, lean_object* v_b_3411_, lean_object* v_x_3412_){
_start:
{
lean_object* v___x_3413_; 
v___x_3413_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__26___redArg(v_a_3410_, v_b_3411_, v_x_3412_);
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26(lean_object* v_00_u03b2_3414_, lean_object* v_i_3415_, lean_object* v_source_3416_, lean_object* v_target_3417_){
_start:
{
lean_object* v___x_3418_; 
v___x_3418_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26___redArg(v_i_3415_, v_source_3416_, v_target_3417_);
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26_spec__27(lean_object* v_00_u03b2_3419_, lean_object* v_x_3420_, lean_object* v_x_3421_){
_start:
{
lean_object* v___x_3422_; 
v___x_3422_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__7_spec__8_spec__18_spec__25_spec__26_spec__27___redArg(v_x_3420_, v_x_3421_);
return v___x_3422_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3436_, lean_object* v_x_3437_){
_start:
{
if (lean_obj_tag(v_x_3436_) == 0)
{
lean_object* v___x_3438_; 
v___x_3438_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_3438_;
}
else
{
lean_object* v_val_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3450_; 
v_val_3439_ = lean_ctor_get(v_x_3436_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_x_3436_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3441_ = v_x_3436_;
v_isShared_3442_ = v_isSharedCheck_3450_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_val_3439_);
lean_dec(v_x_3436_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3450_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3446_; 
v___x_3443_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3));
v___x_3444_ = l_Nat_reprFast(v_val_3439_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 3);
lean_ctor_set(v___x_3441_, 0, v___x_3444_);
v___x_3446_ = v___x_3441_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3444_);
v___x_3446_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3447_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3443_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = l_Repr_addAppParen(v___x_3447_, v_x_3437_);
return v___x_3448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3451_, lean_object* v_x_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3451_, v_x_3452_);
lean_dec(v_x_3452_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3454_, lean_object* v_x_3455_, lean_object* v_x_3456_){
_start:
{
if (lean_obj_tag(v_x_3456_) == 0)
{
lean_dec(v_x_3454_);
return v_x_3455_;
}
else
{
lean_object* v_head_3457_; lean_object* v_tail_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3469_; 
v_head_3457_ = lean_ctor_get(v_x_3456_, 0);
v_tail_3458_ = lean_ctor_get(v_x_3456_, 1);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_x_3456_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3460_ = v_x_3456_;
v_isShared_3461_ = v_isSharedCheck_3469_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_tail_3458_);
lean_inc(v_head_3457_);
lean_dec(v_x_3456_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3469_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3463_; 
lean_inc(v_x_3454_);
if (v_isShared_3461_ == 0)
{
lean_ctor_set_tag(v___x_3460_, 5);
lean_ctor_set(v___x_3460_, 1, v_x_3454_);
lean_ctor_set(v___x_3460_, 0, v_x_3455_);
v___x_3463_ = v___x_3460_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_x_3455_);
lean_ctor_set(v_reuseFailAlloc_3468_, 1, v_x_3454_);
v___x_3463_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3457_, v___x_3464_);
v___x_3466_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3463_);
lean_ctor_set(v___x_3466_, 1, v___x_3465_);
v_x_3455_ = v___x_3466_;
v_x_3456_ = v_tail_3458_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3470_, lean_object* v_x_3471_, lean_object* v_x_3472_){
_start:
{
if (lean_obj_tag(v_x_3472_) == 0)
{
lean_dec(v_x_3470_);
return v_x_3471_;
}
else
{
lean_object* v_head_3473_; lean_object* v_tail_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3485_; 
v_head_3473_ = lean_ctor_get(v_x_3472_, 0);
v_tail_3474_ = lean_ctor_get(v_x_3472_, 1);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_x_3472_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3476_ = v_x_3472_;
v_isShared_3477_ = v_isSharedCheck_3485_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_tail_3474_);
lean_inc(v_head_3473_);
lean_dec(v_x_3472_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3485_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3479_; 
lean_inc(v_x_3470_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set_tag(v___x_3476_, 5);
lean_ctor_set(v___x_3476_, 1, v_x_3470_);
lean_ctor_set(v___x_3476_, 0, v_x_3471_);
v___x_3479_ = v___x_3476_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_x_3471_);
lean_ctor_set(v_reuseFailAlloc_3484_, 1, v_x_3470_);
v___x_3479_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3480_ = lean_unsigned_to_nat(0u);
v___x_3481_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3473_, v___x_3480_);
v___x_3482_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3479_);
lean_ctor_set(v___x_3482_, 1, v___x_3481_);
v___x_3483_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3470_, v___x_3482_, v_tail_3474_);
return v___x_3483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3486_){
_start:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3487_ = lean_unsigned_to_nat(0u);
v___x_3488_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3486_, v___x_3487_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3489_, lean_object* v_x_3490_){
_start:
{
if (lean_obj_tag(v_x_3489_) == 0)
{
lean_object* v___x_3491_; 
lean_dec(v_x_3490_);
v___x_3491_ = lean_box(0);
return v___x_3491_;
}
else
{
lean_object* v_tail_3492_; 
v_tail_3492_ = lean_ctor_get(v_x_3489_, 1);
if (lean_obj_tag(v_tail_3492_) == 0)
{
lean_object* v_head_3493_; lean_object* v___x_3494_; 
lean_dec(v_x_3490_);
v_head_3493_ = lean_ctor_get(v_x_3489_, 0);
lean_inc(v_head_3493_);
lean_dec_ref(v_x_3489_);
v___x_3494_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3493_);
return v___x_3494_;
}
else
{
lean_object* v_head_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_inc(v_tail_3492_);
v_head_3495_ = lean_ctor_get(v_x_3489_, 0);
lean_inc(v_head_3495_);
lean_dec_ref(v_x_3489_);
v___x_3496_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3495_);
v___x_3497_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3490_, v___x_3496_, v_tail_3492_);
return v___x_3497_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3505_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0));
v___x_3506_ = lean_string_length(v___x_3505_);
return v___x_3506_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4);
v___x_3508_ = lean_nat_to_int(v___x_3507_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3514_){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; uint8_t v___x_3517_; 
v___x_3515_ = lean_array_get_size(v_xs_3514_);
v___x_3516_ = lean_unsigned_to_nat(0u);
v___x_3517_ = lean_nat_dec_eq(v___x_3515_, v___x_3516_);
if (v___x_3517_ == 0)
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3518_ = lean_array_to_list(v_xs_3514_);
v___x_3519_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3520_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3518_, v___x_3519_);
v___x_3521_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3522_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3523_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
lean_ctor_set(v___x_3523_, 1, v___x_3520_);
v___x_3524_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3523_);
lean_ctor_set(v___x_3525_, 1, v___x_3524_);
v___x_3526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3521_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = l_Std_Format_fill(v___x_3526_);
return v___x_3527_;
}
else
{
lean_object* v___x_3528_; 
lean_dec_ref(v_xs_3514_);
v___x_3528_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3528_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3529_, lean_object* v_x_3530_, lean_object* v_x_3531_){
_start:
{
if (lean_obj_tag(v_x_3531_) == 0)
{
lean_dec(v_x_3529_);
return v_x_3530_;
}
else
{
lean_object* v_head_3532_; lean_object* v_tail_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3543_; 
v_head_3532_ = lean_ctor_get(v_x_3531_, 0);
v_tail_3533_ = lean_ctor_get(v_x_3531_, 1);
v_isSharedCheck_3543_ = !lean_is_exclusive(v_x_3531_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3535_ = v_x_3531_;
v_isShared_3536_ = v_isSharedCheck_3543_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_tail_3533_);
lean_inc(v_head_3532_);
lean_dec(v_x_3531_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3543_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
lean_inc(v_x_3529_);
if (v_isShared_3536_ == 0)
{
lean_ctor_set_tag(v___x_3535_, 5);
lean_ctor_set(v___x_3535_, 1, v_x_3529_);
lean_ctor_set(v___x_3535_, 0, v_x_3530_);
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_x_3530_);
lean_ctor_set(v_reuseFailAlloc_3542_, 1, v_x_3529_);
v___x_3538_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3539_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3532_);
v___x_3540_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3538_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v_x_3530_ = v___x_3540_;
v_x_3531_ = v_tail_3533_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3544_, lean_object* v_x_3545_){
_start:
{
if (lean_obj_tag(v_x_3544_) == 0)
{
lean_object* v___x_3546_; 
lean_dec(v_x_3545_);
v___x_3546_ = lean_box(0);
return v___x_3546_;
}
else
{
lean_object* v_tail_3547_; 
v_tail_3547_ = lean_ctor_get(v_x_3544_, 1);
if (lean_obj_tag(v_tail_3547_) == 0)
{
lean_object* v_head_3548_; lean_object* v___x_3549_; 
lean_dec(v_x_3545_);
v_head_3548_ = lean_ctor_get(v_x_3544_, 0);
lean_inc(v_head_3548_);
lean_dec_ref(v_x_3544_);
v___x_3549_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3548_);
return v___x_3549_;
}
else
{
lean_object* v_head_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
lean_inc(v_tail_3547_);
v_head_3550_ = lean_ctor_get(v_x_3544_, 0);
lean_inc(v_head_3550_);
lean_dec_ref(v_x_3544_);
v___x_3551_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3550_);
v___x_3552_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3545_, v___x_3551_, v_tail_3547_);
return v___x_3552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3553_){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; uint8_t v___x_3556_; 
v___x_3554_ = lean_array_get_size(v_xs_3553_);
v___x_3555_ = lean_unsigned_to_nat(0u);
v___x_3556_ = lean_nat_dec_eq(v___x_3554_, v___x_3555_);
if (v___x_3556_ == 0)
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3557_ = lean_array_to_list(v_xs_3553_);
v___x_3558_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3559_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3557_, v___x_3558_);
v___x_3560_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3561_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3562_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
lean_ctor_set(v___x_3562_, 1, v___x_3559_);
v___x_3563_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3564_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3562_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3560_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
v___x_3566_ = l_Std_Format_fill(v___x_3565_);
return v___x_3566_;
}
else
{
lean_object* v___x_3567_; 
lean_dec_ref(v_xs_3553_);
v___x_3567_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3568_, lean_object* v_x_3569_, lean_object* v_x_3570_){
_start:
{
if (lean_obj_tag(v_x_3570_) == 0)
{
lean_dec(v_x_3568_);
return v_x_3569_;
}
else
{
lean_object* v_head_3571_; lean_object* v_tail_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3583_; 
v_head_3571_ = lean_ctor_get(v_x_3570_, 0);
v_tail_3572_ = lean_ctor_get(v_x_3570_, 1);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_x_3570_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3574_ = v_x_3570_;
v_isShared_3575_ = v_isSharedCheck_3583_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_tail_3572_);
lean_inc(v_head_3571_);
lean_dec(v_x_3570_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3583_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
lean_inc(v_x_3568_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set_tag(v___x_3574_, 5);
lean_ctor_set(v___x_3574_, 1, v_x_3568_);
lean_ctor_set(v___x_3574_, 0, v_x_3569_);
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_x_3569_);
lean_ctor_set(v_reuseFailAlloc_3582_, 1, v_x_3568_);
v___x_3577_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3578_ = l_Nat_reprFast(v_head_3571_);
v___x_3579_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
v___x_3580_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3577_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v_x_3569_ = v___x_3580_;
v_x_3570_ = v_tail_3572_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3584_, lean_object* v_x_3585_, lean_object* v_x_3586_){
_start:
{
if (lean_obj_tag(v_x_3586_) == 0)
{
lean_dec(v_x_3584_);
return v_x_3585_;
}
else
{
lean_object* v_head_3587_; lean_object* v_tail_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3599_; 
v_head_3587_ = lean_ctor_get(v_x_3586_, 0);
v_tail_3588_ = lean_ctor_get(v_x_3586_, 1);
v_isSharedCheck_3599_ = !lean_is_exclusive(v_x_3586_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3590_ = v_x_3586_;
v_isShared_3591_ = v_isSharedCheck_3599_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_tail_3588_);
lean_inc(v_head_3587_);
lean_dec(v_x_3586_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3599_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
lean_inc(v_x_3584_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set_tag(v___x_3590_, 5);
lean_ctor_set(v___x_3590_, 1, v_x_3584_);
lean_ctor_set(v___x_3590_, 0, v_x_3585_);
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_x_3585_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v_x_3584_);
v___x_3593_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3594_ = l_Nat_reprFast(v_head_3587_);
v___x_3595_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3594_);
v___x_3596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3593_);
lean_ctor_set(v___x_3596_, 1, v___x_3595_);
v___x_3597_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3584_, v___x_3596_, v_tail_3588_);
return v___x_3597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3600_){
_start:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3601_ = l_Nat_reprFast(v___y_3600_);
v___x_3602_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3601_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3603_, lean_object* v_x_3604_){
_start:
{
if (lean_obj_tag(v_x_3603_) == 0)
{
lean_object* v___x_3605_; 
lean_dec(v_x_3604_);
v___x_3605_ = lean_box(0);
return v___x_3605_;
}
else
{
lean_object* v_tail_3606_; 
v_tail_3606_ = lean_ctor_get(v_x_3603_, 1);
if (lean_obj_tag(v_tail_3606_) == 0)
{
lean_object* v_head_3607_; lean_object* v___x_3608_; 
lean_dec(v_x_3604_);
v_head_3607_ = lean_ctor_get(v_x_3603_, 0);
lean_inc(v_head_3607_);
lean_dec_ref(v_x_3603_);
v___x_3608_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3607_);
return v___x_3608_;
}
else
{
lean_object* v_head_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
lean_inc(v_tail_3606_);
v_head_3609_ = lean_ctor_get(v_x_3603_, 0);
lean_inc(v_head_3609_);
lean_dec_ref(v_x_3603_);
v___x_3610_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3609_);
v___x_3611_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3604_, v___x_3610_, v_tail_3606_);
return v___x_3611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3612_){
_start:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; uint8_t v___x_3615_; 
v___x_3613_ = lean_array_get_size(v_xs_3612_);
v___x_3614_ = lean_unsigned_to_nat(0u);
v___x_3615_ = lean_nat_dec_eq(v___x_3613_, v___x_3614_);
if (v___x_3615_ == 0)
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3616_ = lean_array_to_list(v_xs_3612_);
v___x_3617_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3618_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3616_, v___x_3617_);
v___x_3619_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3620_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3620_);
lean_ctor_set(v___x_3621_, 1, v___x_3618_);
v___x_3622_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3621_);
lean_ctor_set(v___x_3623_, 1, v___x_3622_);
v___x_3624_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3619_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = l_Std_Format_fill(v___x_3624_);
return v___x_3625_;
}
else
{
lean_object* v___x_3626_; 
lean_dec_ref(v_xs_3612_);
v___x_3626_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3626_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3627_, lean_object* v_x_3628_, lean_object* v_x_3629_){
_start:
{
if (lean_obj_tag(v_x_3629_) == 0)
{
lean_dec(v_x_3627_);
return v_x_3628_;
}
else
{
lean_object* v_head_3630_; lean_object* v_tail_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3641_; 
v_head_3630_ = lean_ctor_get(v_x_3629_, 0);
v_tail_3631_ = lean_ctor_get(v_x_3629_, 1);
v_isSharedCheck_3641_ = !lean_is_exclusive(v_x_3629_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3633_ = v_x_3629_;
v_isShared_3634_ = v_isSharedCheck_3641_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_tail_3631_);
lean_inc(v_head_3630_);
lean_dec(v_x_3629_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3641_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
lean_inc(v_x_3627_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set_tag(v___x_3633_, 5);
lean_ctor_set(v___x_3633_, 1, v_x_3627_);
lean_ctor_set(v___x_3633_, 0, v_x_3628_);
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_x_3628_);
lean_ctor_set(v_reuseFailAlloc_3640_, 1, v_x_3627_);
v___x_3636_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3630_);
v___x_3638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3638_, 0, v___x_3636_);
lean_ctor_set(v___x_3638_, 1, v___x_3637_);
v_x_3628_ = v___x_3638_;
v_x_3629_ = v_tail_3631_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3642_, lean_object* v_x_3643_){
_start:
{
if (lean_obj_tag(v_x_3642_) == 0)
{
lean_object* v___x_3644_; 
lean_dec(v_x_3643_);
v___x_3644_ = lean_box(0);
return v___x_3644_;
}
else
{
lean_object* v_tail_3645_; 
v_tail_3645_ = lean_ctor_get(v_x_3642_, 1);
if (lean_obj_tag(v_tail_3645_) == 0)
{
lean_object* v_head_3646_; lean_object* v___x_3647_; 
lean_dec(v_x_3643_);
v_head_3646_ = lean_ctor_get(v_x_3642_, 0);
lean_inc(v_head_3646_);
lean_dec_ref(v_x_3642_);
v___x_3647_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3646_);
return v___x_3647_;
}
else
{
lean_object* v_head_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
lean_inc(v_tail_3645_);
v_head_3648_ = lean_ctor_get(v_x_3642_, 0);
lean_inc(v_head_3648_);
lean_dec_ref(v_x_3642_);
v___x_3649_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3648_);
v___x_3650_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3643_, v___x_3649_, v_tail_3645_);
return v___x_3650_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3651_){
_start:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; 
v___x_3652_ = lean_array_get_size(v_xs_3651_);
v___x_3653_ = lean_unsigned_to_nat(0u);
v___x_3654_ = lean_nat_dec_eq(v___x_3652_, v___x_3653_);
if (v___x_3654_ == 0)
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3655_ = lean_array_to_list(v_xs_3651_);
v___x_3656_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3657_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3655_, v___x_3656_);
v___x_3658_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3659_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3659_);
lean_ctor_set(v___x_3660_, 1, v___x_3657_);
v___x_3661_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3660_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3658_);
lean_ctor_set(v___x_3663_, 1, v___x_3662_);
v___x_3664_ = l_Std_Format_fill(v___x_3663_);
return v___x_3664_;
}
else
{
lean_object* v___x_3665_; 
lean_dec_ref(v_xs_3651_);
v___x_3665_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3665_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3666_, lean_object* v_x_3667_, lean_object* v_x_3668_){
_start:
{
if (lean_obj_tag(v_x_3668_) == 0)
{
lean_dec(v_x_3666_);
return v_x_3667_;
}
else
{
lean_object* v_head_3669_; lean_object* v_tail_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3680_; 
v_head_3669_ = lean_ctor_get(v_x_3668_, 0);
v_tail_3670_ = lean_ctor_get(v_x_3668_, 1);
v_isSharedCheck_3680_ = !lean_is_exclusive(v_x_3668_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3672_ = v_x_3668_;
v_isShared_3673_ = v_isSharedCheck_3680_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_tail_3670_);
lean_inc(v_head_3669_);
lean_dec(v_x_3668_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3680_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
lean_inc(v_x_3666_);
if (v_isShared_3673_ == 0)
{
lean_ctor_set_tag(v___x_3672_, 5);
lean_ctor_set(v___x_3672_, 1, v_x_3666_);
lean_ctor_set(v___x_3672_, 0, v_x_3667_);
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_x_3667_);
lean_ctor_set(v_reuseFailAlloc_3679_, 1, v_x_3666_);
v___x_3675_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3676_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3669_);
v___x_3677_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3675_);
lean_ctor_set(v___x_3677_, 1, v___x_3676_);
v_x_3667_ = v___x_3677_;
v_x_3668_ = v_tail_3670_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3681_, lean_object* v_x_3682_){
_start:
{
if (lean_obj_tag(v_x_3681_) == 0)
{
lean_object* v___x_3683_; 
lean_dec(v_x_3682_);
v___x_3683_ = lean_box(0);
return v___x_3683_;
}
else
{
lean_object* v_tail_3684_; 
v_tail_3684_ = lean_ctor_get(v_x_3681_, 1);
if (lean_obj_tag(v_tail_3684_) == 0)
{
lean_object* v_head_3685_; lean_object* v___x_3686_; 
lean_dec(v_x_3682_);
v_head_3685_ = lean_ctor_get(v_x_3681_, 0);
lean_inc(v_head_3685_);
lean_dec_ref(v_x_3681_);
v___x_3686_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3685_);
return v___x_3686_;
}
else
{
lean_object* v_head_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_inc(v_tail_3684_);
v_head_3687_ = lean_ctor_get(v_x_3681_, 0);
lean_inc(v_head_3687_);
lean_dec_ref(v_x_3681_);
v___x_3688_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3687_);
v___x_3689_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3682_, v___x_3688_, v_tail_3684_);
return v___x_3689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3690_){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; uint8_t v___x_3693_; 
v___x_3691_ = lean_array_get_size(v_xs_3690_);
v___x_3692_ = lean_unsigned_to_nat(0u);
v___x_3693_ = lean_nat_dec_eq(v___x_3691_, v___x_3692_);
if (v___x_3693_ == 0)
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3694_ = lean_array_to_list(v_xs_3690_);
v___x_3695_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3696_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3694_, v___x_3695_);
v___x_3697_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3698_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3699_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
lean_ctor_set(v___x_3699_, 1, v___x_3696_);
v___x_3700_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3699_);
lean_ctor_set(v___x_3701_, 1, v___x_3700_);
v___x_3702_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3697_);
lean_ctor_set(v___x_3702_, 1, v___x_3701_);
v___x_3703_ = l_Std_Format_fill(v___x_3702_);
return v___x_3703_;
}
else
{
lean_object* v___x_3704_; 
lean_dec_ref(v_xs_3690_);
v___x_3704_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3704_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lean_unsigned_to_nat(12u);
v___x_3719_ = lean_nat_to_int(v___x_3718_);
return v___x_3719_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; 
v___x_3723_ = lean_unsigned_to_nat(9u);
v___x_3724_ = lean_nat_to_int(v___x_3723_);
return v___x_3724_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3728_ = lean_unsigned_to_nat(11u);
v___x_3729_ = lean_nat_to_int(v___x_3728_);
return v___x_3729_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3731_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0));
v___x_3732_ = lean_string_length(v___x_3731_);
return v___x_3732_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3734_ = lean_nat_to_int(v___x_3733_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3739_){
_start:
{
lean_object* v_numFixed_3740_; lean_object* v_perms_3741_; lean_object* v_revDeps_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; uint8_t v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
v_numFixed_3740_ = lean_ctor_get(v_x_3739_, 0);
lean_inc(v_numFixed_3740_);
v_perms_3741_ = lean_ctor_get(v_x_3739_, 1);
lean_inc_ref(v_perms_3741_);
v_revDeps_3742_ = lean_ctor_get(v_x_3739_, 2);
lean_inc_ref(v_revDeps_3742_);
lean_dec_ref(v_x_3739_);
v___x_3743_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5));
v___x_3744_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6));
v___x_3745_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3746_ = l_Nat_reprFast(v_numFixed_3740_);
v___x_3747_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
v___x_3748_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3745_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
v___x_3749_ = 0;
v___x_3750_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3750_, 0, v___x_3748_);
lean_ctor_set_uint8(v___x_3750_, sizeof(void*)*1, v___x_3749_);
v___x_3751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3744_);
lean_ctor_set(v___x_3751_, 1, v___x_3750_);
v___x_3752_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2));
v___x_3753_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3751_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
v___x_3754_ = lean_box(1);
v___x_3755_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3753_);
lean_ctor_set(v___x_3755_, 1, v___x_3754_);
v___x_3756_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9));
v___x_3757_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3755_);
lean_ctor_set(v___x_3757_, 1, v___x_3756_);
v___x_3758_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
lean_ctor_set(v___x_3758_, 1, v___x_3743_);
v___x_3759_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3760_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3741_);
v___x_3761_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3759_);
lean_ctor_set(v___x_3761_, 1, v___x_3760_);
v___x_3762_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
lean_ctor_set_uint8(v___x_3762_, sizeof(void*)*1, v___x_3749_);
v___x_3763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3758_);
lean_ctor_set(v___x_3763_, 1, v___x_3762_);
v___x_3764_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
lean_ctor_set(v___x_3764_, 1, v___x_3752_);
v___x_3765_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3764_);
lean_ctor_set(v___x_3765_, 1, v___x_3754_);
v___x_3766_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12));
v___x_3767_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3765_);
lean_ctor_set(v___x_3767_, 1, v___x_3766_);
v___x_3768_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
lean_ctor_set(v___x_3768_, 1, v___x_3743_);
v___x_3769_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3770_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3742_);
v___x_3771_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3769_);
lean_ctor_set(v___x_3771_, 1, v___x_3770_);
v___x_3772_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
lean_ctor_set_uint8(v___x_3772_, sizeof(void*)*1, v___x_3749_);
v___x_3773_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3768_);
lean_ctor_set(v___x_3773_, 1, v___x_3772_);
v___x_3774_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3775_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17));
v___x_3776_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3775_);
lean_ctor_set(v___x_3776_, 1, v___x_3773_);
v___x_3777_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18));
v___x_3778_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3776_);
lean_ctor_set(v___x_3778_, 1, v___x_3777_);
v___x_3779_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3774_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*1, v___x_3749_);
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3781_, lean_object* v_prec_3782_){
_start:
{
lean_object* v___x_3783_; 
v___x_3783_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3781_);
return v___x_3783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3784_, lean_object* v_prec_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3784_, v_prec_3785_);
lean_dec(v_prec_3785_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v___f_3795_; lean_object* v___x_5797__overap_3796_; lean_object* v___x_3797_; 
v___f_3795_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_5797__overap_3796_ = lean_panic_fn_borrowed(v___f_3795_, v_msg_3789_);
lean_inc(v___y_3793_);
lean_inc_ref(v___y_3792_);
lean_inc(v___y_3791_);
lean_inc_ref(v___y_3790_);
v___x_3797_ = lean_apply_5(v___x_5797__overap_3796_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_, lean_box(0));
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_){
_start:
{
lean_object* v_res_3804_; 
v_res_3804_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v___f_3811_; lean_object* v___x_5807__overap_3812_; lean_object* v___x_3813_; 
v___f_3811_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_5807__overap_3812_ = lean_panic_fn_borrowed(v___f_3811_, v_msg_3805_);
lean_inc(v___y_3809_);
lean_inc_ref(v___y_3808_);
lean_inc(v___y_3807_);
lean_inc_ref(v___y_3806_);
v___x_3813_ = lean_apply_5(v___x_5807__overap_3812_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_, lean_box(0));
return v___x_3813_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
lean_dec(v___y_3818_);
lean_dec_ref(v___y_3817_);
lean_dec(v___y_3816_);
lean_dec_ref(v___y_3815_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v___f_3827_; lean_object* v___x_5817__overap_3828_; lean_object* v___x_3829_; 
v___f_3827_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_5817__overap_3828_ = lean_panic_fn_borrowed(v___f_3827_, v_msg_3821_);
lean_inc(v___y_3825_);
lean_inc_ref(v___y_3824_);
lean_inc(v___y_3823_);
lean_inc_ref(v___y_3822_);
v___x_3829_ = lean_apply_5(v___x_5817__overap_3828_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_, lean_box(0));
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
return v_res_3836_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; 
v___x_3839_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1));
v___x_3840_ = lean_unsigned_to_nat(12u);
v___x_3841_ = lean_unsigned_to_nat(294u);
v___x_3842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3843_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_3844_ = l_mkPanicMessageWithDecl(v___x_3843_, v___x_3842_, v___x_3841_, v___x_3840_, v___x_3839_);
return v___x_3844_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3846_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3));
v___x_3847_ = lean_unsigned_to_nat(12u);
v___x_3848_ = lean_unsigned_to_nat(297u);
v___x_3849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3850_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_3851_ = l_mkPanicMessageWithDecl(v___x_3850_, v___x_3849_, v___x_3848_, v___x_3847_, v___x_3846_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3852_, lean_object* v_as_3853_, size_t v_sz_3854_, size_t v_i_3855_, lean_object* v_b_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
lean_object* v_a_3863_; uint8_t v___x_3867_; 
v___x_3867_ = lean_usize_dec_lt(v_i_3855_, v_sz_3854_);
if (v___x_3867_ == 0)
{
lean_object* v___x_3868_; 
v___x_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3868_, 0, v_b_3856_);
return v___x_3868_;
}
else
{
lean_object* v_a_3869_; 
v_a_3869_ = lean_array_uget_borrowed(v_as_3853_, v_i_3855_);
if (lean_obj_tag(v_a_3869_) == 1)
{
lean_object* v_val_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v_val_3870_ = lean_ctor_get(v_a_3869_, 0);
v___x_3871_ = lean_unsigned_to_nat(0u);
v___x_3872_ = lean_box(0);
v___x_3873_ = lean_array_get_borrowed(v___x_3872_, v_val_3870_, v___x_3871_);
if (lean_obj_tag(v___x_3873_) == 1)
{
lean_object* v_val_3874_; lean_object* v___x_3875_; 
v_val_3874_ = lean_ctor_get(v___x_3873_, 0);
v___x_3875_ = lean_array_get_borrowed(v___x_3872_, v___x_3852_, v_val_3874_);
if (lean_obj_tag(v___x_3875_) == 0)
{
lean_object* v___x_3876_; lean_object* v___x_3877_; 
lean_dec_ref(v_b_3856_);
v___x_3876_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3877_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3876_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3887_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3880_ = v___x_3877_;
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3877_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
if (lean_obj_tag(v_a_3878_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3884_; 
v_a_3882_ = lean_ctor_get(v_a_3878_, 0);
lean_inc(v_a_3882_);
lean_dec_ref(v_a_3878_);
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 0, v_a_3882_);
v___x_3884_ = v___x_3880_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_a_3882_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
else
{
lean_object* v_a_3886_; 
lean_del_object(v___x_3880_);
v_a_3886_ = lean_ctor_get(v_a_3878_, 0);
lean_inc(v_a_3886_);
lean_dec_ref(v_a_3878_);
v_a_3863_ = v_a_3886_;
goto v___jp_3862_;
}
}
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
v_a_3888_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3877_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3877_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
}
else
{
lean_object* v___x_3896_; 
lean_inc_ref(v___x_3875_);
v___x_3896_ = lean_array_push(v_b_3856_, v___x_3875_);
v_a_3863_ = v___x_3896_;
goto v___jp_3862_;
}
}
else
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3898_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6(v___x_3897_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_dec_ref(v___x_3898_);
v_a_3863_ = v_b_3856_;
goto v___jp_3862_;
}
else
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_dec_ref(v_b_3856_);
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3898_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3898_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = lean_box(0);
v___x_3908_ = lean_array_push(v_b_3856_, v___x_3907_);
v_a_3863_ = v___x_3908_;
goto v___jp_3862_;
}
}
v___jp_3862_:
{
size_t v___x_3864_; size_t v___x_3865_; 
v___x_3864_ = ((size_t)1ULL);
v___x_3865_ = lean_usize_add(v_i_3855_, v___x_3864_);
v_i_3855_ = v___x_3865_;
v_b_3856_ = v_a_3863_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3909_, lean_object* v_as_3910_, lean_object* v_sz_3911_, lean_object* v_i_3912_, lean_object* v_b_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_){
_start:
{
size_t v_sz_boxed_3919_; size_t v_i_boxed_3920_; lean_object* v_res_3921_; 
v_sz_boxed_3919_ = lean_unbox_usize(v_sz_3911_);
lean_dec(v_sz_3911_);
v_i_boxed_3920_ = lean_unbox_usize(v_i_3912_);
lean_dec(v_i_3912_);
v_res_3921_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3909_, v_as_3910_, v_sz_boxed_3919_, v_i_boxed_3920_, v_b_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec_ref(v_as_3910_);
lean_dec_ref(v___x_3909_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3924_, lean_object* v___x_3925_, lean_object* v___x_3926_, lean_object* v_a_3927_, lean_object* v_b_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_){
_start:
{
uint8_t v___x_3934_; 
v___x_3934_ = lean_nat_dec_lt(v_a_3927_, v_upperBound_3924_);
if (v___x_3934_ == 0)
{
lean_object* v___x_3935_; 
lean_dec(v_a_3927_);
v___x_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3935_, 0, v_b_3928_);
return v___x_3935_;
}
else
{
lean_object* v___x_3936_; lean_object* v___x_3937_; size_t v_sz_3938_; size_t v___x_3939_; lean_object* v___x_3940_; 
v___x_3936_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_3937_ = lean_array_fget_borrowed(v___x_3925_, v_a_3927_);
v_sz_3938_ = lean_array_size(v___x_3937_);
v___x_3939_ = ((size_t)0ULL);
v___x_3940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3926_, v___x_3937_, v_sz_3938_, v___x_3939_, v___x_3936_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3941_);
lean_dec_ref(v___x_3940_);
v___x_3942_ = lean_array_push(v_b_3928_, v_a_3941_);
v___x_3943_ = lean_unsigned_to_nat(1u);
v___x_3944_ = lean_nat_add(v_a_3927_, v___x_3943_);
lean_dec(v_a_3927_);
v_a_3927_ = v___x_3944_;
v_b_3928_ = v___x_3942_;
goto _start;
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3953_; 
lean_dec_ref(v_b_3928_);
lean_dec(v_a_3927_);
v_a_3946_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3948_ = v___x_3940_;
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3940_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3951_; 
if (v_isShared_3949_ == 0)
{
v___x_3951_ = v___x_3948_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3946_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3954_, lean_object* v___x_3955_, lean_object* v___x_3956_, lean_object* v_a_3957_, lean_object* v_b_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3954_, v___x_3955_, v___x_3956_, v_a_3957_, v_b_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec_ref(v___x_3956_);
lean_dec_ref(v___x_3955_);
lean_dec(v_upperBound_3954_);
return v_res_3964_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3966_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0));
v___x_3967_ = lean_unsigned_to_nat(8u);
v___x_3968_ = lean_unsigned_to_nat(281u);
v___x_3969_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3970_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_3971_ = l_mkPanicMessageWithDecl(v___x_3970_, v___x_3969_, v___x_3968_, v___x_3967_, v___x_3966_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_3972_, lean_object* v_a_3973_, lean_object* v_b_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_){
_start:
{
lean_object* v_a_3981_; uint8_t v___x_3985_; 
v___x_3985_ = lean_nat_dec_lt(v_a_3973_, v_upperBound_3972_);
if (v___x_3985_ == 0)
{
lean_object* v___x_3986_; 
lean_dec(v_a_3973_);
v___x_3986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3986_, 0, v_b_3974_);
return v___x_3986_;
}
else
{
lean_object* v_snd_3987_; lean_object* v_snd_3988_; lean_object* v_snd_3989_; lean_object* v_fst_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_4114_; 
v_snd_3987_ = lean_ctor_get(v_b_3974_, 1);
lean_inc(v_snd_3987_);
v_snd_3988_ = lean_ctor_get(v_snd_3987_, 1);
lean_inc(v_snd_3988_);
v_snd_3989_ = lean_ctor_get(v_snd_3988_, 1);
lean_inc(v_snd_3989_);
v_fst_3990_ = lean_ctor_get(v_b_3974_, 0);
v_isSharedCheck_4114_ = !lean_is_exclusive(v_b_3974_);
if (v_isSharedCheck_4114_ == 0)
{
lean_object* v_unused_4115_; 
v_unused_4115_ = lean_ctor_get(v_b_3974_, 1);
lean_dec(v_unused_4115_);
v___x_3992_ = v_b_3974_;
v_isShared_3993_ = v_isSharedCheck_4114_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_fst_3990_);
lean_dec(v_b_3974_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_4114_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v_fst_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4112_; 
v_fst_3994_ = lean_ctor_get(v_snd_3987_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v_snd_3987_);
if (v_isSharedCheck_4112_ == 0)
{
lean_object* v_unused_4113_; 
v_unused_4113_ = lean_ctor_get(v_snd_3987_, 1);
lean_dec(v_unused_4113_);
v___x_3996_ = v_snd_3987_;
v_isShared_3997_ = v_isSharedCheck_4112_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_fst_3994_);
lean_dec(v_snd_3987_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4112_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v_fst_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4110_; 
v_fst_3998_ = lean_ctor_get(v_snd_3988_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v_snd_3988_);
if (v_isSharedCheck_4110_ == 0)
{
lean_object* v_unused_4111_; 
v_unused_4111_ = lean_ctor_get(v_snd_3988_, 1);
lean_dec(v_unused_4111_);
v___x_4000_ = v_snd_3988_;
v_isShared_4001_ = v_isSharedCheck_4110_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_fst_3998_);
lean_dec(v_snd_3988_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4110_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v_array_4002_; lean_object* v_start_4003_; lean_object* v_stop_4004_; uint8_t v___x_4005_; 
v_array_4002_ = lean_ctor_get(v_snd_3989_, 0);
v_start_4003_ = lean_ctor_get(v_snd_3989_, 1);
v_stop_4004_ = lean_ctor_get(v_snd_3989_, 2);
v___x_4005_ = lean_nat_dec_lt(v_start_4003_, v_stop_4004_);
if (v___x_4005_ == 0)
{
lean_object* v___x_4007_; 
lean_dec(v_a_3973_);
if (v_isShared_4001_ == 0)
{
v___x_4007_ = v___x_4000_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_fst_3998_);
lean_ctor_set(v_reuseFailAlloc_4015_, 1, v_snd_3989_);
v___x_4007_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
lean_object* v___x_4009_; 
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 1, v___x_4007_);
v___x_4009_ = v___x_3996_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_fst_3994_);
lean_ctor_set(v_reuseFailAlloc_4014_, 1, v___x_4007_);
v___x_4009_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
lean_object* v___x_4011_; 
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 1, v___x_4009_);
v___x_4011_ = v___x_3992_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_fst_3990_);
lean_ctor_set(v_reuseFailAlloc_4013_, 1, v___x_4009_);
v___x_4011_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
lean_object* v___x_4012_; 
v___x_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4011_);
return v___x_4012_;
}
}
}
}
else
{
lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4106_; 
lean_inc(v_stop_4004_);
lean_inc(v_start_4003_);
lean_inc_ref(v_array_4002_);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_snd_3989_);
if (v_isSharedCheck_4106_ == 0)
{
lean_object* v_unused_4107_; lean_object* v_unused_4108_; lean_object* v_unused_4109_; 
v_unused_4107_ = lean_ctor_get(v_snd_3989_, 2);
lean_dec(v_unused_4107_);
v_unused_4108_ = lean_ctor_get(v_snd_3989_, 1);
lean_dec(v_unused_4108_);
v_unused_4109_ = lean_ctor_get(v_snd_3989_, 0);
lean_dec(v_unused_4109_);
v___x_4017_ = v_snd_3989_;
v_isShared_4018_ = v_isSharedCheck_4106_;
goto v_resetjp_4016_;
}
else
{
lean_dec(v_snd_3989_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4106_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v_array_4019_; lean_object* v_start_4020_; lean_object* v_stop_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4026_; 
v_array_4019_ = lean_ctor_get(v_fst_3998_, 0);
v_start_4020_ = lean_ctor_get(v_fst_3998_, 1);
v_stop_4021_ = lean_ctor_get(v_fst_3998_, 2);
v___x_4022_ = lean_array_fget(v_array_4002_, v_start_4003_);
v___x_4023_ = lean_unsigned_to_nat(1u);
v___x_4024_ = lean_nat_add(v_start_4003_, v___x_4023_);
lean_dec(v_start_4003_);
if (v_isShared_4018_ == 0)
{
lean_ctor_set(v___x_4017_, 1, v___x_4024_);
v___x_4026_ = v___x_4017_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v_array_4002_);
lean_ctor_set(v_reuseFailAlloc_4105_, 1, v___x_4024_);
lean_ctor_set(v_reuseFailAlloc_4105_, 2, v_stop_4004_);
v___x_4026_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
uint8_t v___x_4027_; 
v___x_4027_ = lean_nat_dec_lt(v_start_4020_, v_stop_4021_);
if (v___x_4027_ == 0)
{
lean_object* v___x_4029_; 
lean_dec(v___x_4022_);
lean_dec(v_a_3973_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 1, v___x_4026_);
v___x_4029_ = v___x_4000_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_fst_3998_);
lean_ctor_set(v_reuseFailAlloc_4037_, 1, v___x_4026_);
v___x_4029_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
lean_object* v___x_4031_; 
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 1, v___x_4029_);
v___x_4031_ = v___x_3996_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_fst_3994_);
lean_ctor_set(v_reuseFailAlloc_4036_, 1, v___x_4029_);
v___x_4031_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
lean_object* v___x_4033_; 
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 1, v___x_4031_);
v___x_4033_ = v___x_3992_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_fst_3990_);
lean_ctor_set(v_reuseFailAlloc_4035_, 1, v___x_4031_);
v___x_4033_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
lean_object* v___x_4034_; 
v___x_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
return v___x_4034_;
}
}
}
}
else
{
lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4101_; 
lean_inc(v_stop_4021_);
lean_inc(v_start_4020_);
lean_inc_ref(v_array_4019_);
v_isSharedCheck_4101_ = !lean_is_exclusive(v_fst_3998_);
if (v_isSharedCheck_4101_ == 0)
{
lean_object* v_unused_4102_; lean_object* v_unused_4103_; lean_object* v_unused_4104_; 
v_unused_4102_ = lean_ctor_get(v_fst_3998_, 2);
lean_dec(v_unused_4102_);
v_unused_4103_ = lean_ctor_get(v_fst_3998_, 1);
lean_dec(v_unused_4103_);
v_unused_4104_ = lean_ctor_get(v_fst_3998_, 0);
lean_dec(v_unused_4104_);
v___x_4039_ = v_fst_3998_;
v_isShared_4040_ = v_isSharedCheck_4101_;
goto v_resetjp_4038_;
}
else
{
lean_dec(v_fst_3998_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4101_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4041_; lean_object* v___x_4043_; 
v___x_4041_ = lean_nat_add(v_start_4020_, v___x_4023_);
lean_dec(v_start_4020_);
if (v_isShared_4040_ == 0)
{
lean_ctor_set(v___x_4039_, 1, v___x_4041_);
v___x_4043_ = v___x_4039_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_array_4019_);
lean_ctor_set(v_reuseFailAlloc_4100_, 1, v___x_4041_);
lean_ctor_set(v_reuseFailAlloc_4100_, 2, v_stop_4021_);
v___x_4043_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
if (lean_obj_tag(v___x_4022_) == 1)
{
lean_object* v_val_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4088_; 
v_val_4044_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4046_ = v___x_4022_;
v_isShared_4047_ = v_isSharedCheck_4088_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_val_4044_);
lean_dec(v___x_4022_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4088_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4053_; 
v___x_4048_ = lean_unsigned_to_nat(0u);
v___x_4049_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_4050_ = lean_box(0);
v___x_4051_ = lean_array_get(v___x_4050_, v_val_4044_, v___x_4048_);
lean_dec(v_val_4044_);
lean_inc(v_a_3973_);
if (v_isShared_4047_ == 0)
{
lean_ctor_set(v___x_4046_, 0, v_a_3973_);
v___x_4053_ = v___x_4046_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_3973_);
v___x_4053_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
uint8_t v___x_4054_; 
v___x_4054_ = l_Option_instDecidableEq___redArg(v___x_4049_, v___x_4051_, v___x_4053_);
if (v___x_4054_ == 0)
{
lean_object* v___x_4055_; lean_object* v___x_4056_; 
lean_dec_ref(v___x_4043_);
lean_dec_ref(v___x_4026_);
lean_del_object(v___x_4000_);
lean_del_object(v___x_3996_);
lean_dec(v_fst_3994_);
lean_del_object(v___x_3992_);
lean_dec(v_fst_3990_);
v___x_4055_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_4056_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_4055_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v_a_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4066_; 
v_a_4057_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4059_ = v___x_4056_;
v_isShared_4060_ = v_isSharedCheck_4066_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_a_4057_);
lean_dec(v___x_4056_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4066_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
if (lean_obj_tag(v_a_4057_) == 0)
{
lean_object* v_a_4061_; lean_object* v___x_4063_; 
lean_dec(v_a_3973_);
v_a_4061_ = lean_ctor_get(v_a_4057_, 0);
lean_inc(v_a_4061_);
lean_dec_ref(v_a_4057_);
if (v_isShared_4060_ == 0)
{
lean_ctor_set(v___x_4059_, 0, v_a_4061_);
v___x_4063_ = v___x_4059_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4061_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
else
{
lean_object* v_a_4065_; 
lean_del_object(v___x_4059_);
v_a_4065_ = lean_ctor_get(v_a_4057_, 0);
lean_inc(v_a_4065_);
lean_dec_ref(v_a_4057_);
v_a_3981_ = v_a_4065_;
goto v___jp_3980_;
}
}
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec(v_a_3973_);
v_a_4067_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4056_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4056_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
else
{
lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4079_; 
lean_inc(v_fst_3994_);
v___x_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4075_, 0, v_fst_3994_);
v___x_4076_ = lean_array_push(v_fst_3990_, v___x_4075_);
v___x_4077_ = lean_nat_add(v_fst_3994_, v___x_4023_);
lean_dec(v_fst_3994_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 1, v___x_4026_);
lean_ctor_set(v___x_4000_, 0, v___x_4043_);
v___x_4079_ = v___x_4000_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v___x_4043_);
lean_ctor_set(v_reuseFailAlloc_4086_, 1, v___x_4026_);
v___x_4079_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4081_; 
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 1, v___x_4079_);
lean_ctor_set(v___x_3996_, 0, v___x_4077_);
v___x_4081_ = v___x_3996_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v___x_4077_);
lean_ctor_set(v_reuseFailAlloc_4085_, 1, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
lean_object* v___x_4083_; 
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 1, v___x_4081_);
lean_ctor_set(v___x_3992_, 0, v___x_4076_);
v___x_4083_ = v___x_3992_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v___x_4076_);
lean_ctor_set(v_reuseFailAlloc_4084_, 1, v___x_4081_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
v_a_3981_ = v___x_4083_;
goto v___jp_3980_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4092_; 
lean_dec(v___x_4022_);
v___x_4089_ = lean_box(0);
v___x_4090_ = lean_array_push(v_fst_3990_, v___x_4089_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 1, v___x_4026_);
lean_ctor_set(v___x_4000_, 0, v___x_4043_);
v___x_4092_ = v___x_4000_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v___x_4043_);
lean_ctor_set(v_reuseFailAlloc_4099_, 1, v___x_4026_);
v___x_4092_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
lean_object* v___x_4094_; 
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 1, v___x_4092_);
v___x_4094_ = v___x_3996_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_fst_3994_);
lean_ctor_set(v_reuseFailAlloc_4098_, 1, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
lean_object* v___x_4096_; 
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 1, v___x_4094_);
lean_ctor_set(v___x_3992_, 0, v___x_4090_);
v___x_4096_ = v___x_3992_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v___x_4090_);
lean_ctor_set(v_reuseFailAlloc_4097_, 1, v___x_4094_);
v___x_4096_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
v_a_3981_ = v___x_4096_;
goto v___jp_3980_;
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
}
}
}
}
v___jp_3980_:
{
lean_object* v___x_3982_; lean_object* v___x_3983_; 
v___x_3982_ = lean_unsigned_to_nat(1u);
v___x_3983_ = lean_nat_add(v_a_3973_, v___x_3982_);
lean_dec(v_a_3973_);
v_a_3973_ = v___x_3983_;
v_b_3974_ = v_a_3981_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4116_, lean_object* v_a_4117_, lean_object* v_b_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4116_, v_a_4117_, v_b_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec(v_upperBound_4116_);
return v_res_4124_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; 
v___x_4126_ = ((lean_object*)(l_Lean_Elab_getFixedParamPerms___lam__0___closed__0));
v___x_4127_ = lean_unsigned_to_nat(4u);
v___x_4128_ = lean_unsigned_to_nat(275u);
v___x_4129_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4130_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4131_ = l_mkPanicMessageWithDecl(v___x_4130_, v___x_4129_, v___x_4128_, v___x_4127_, v___x_4126_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4132_, lean_object* v___x_4133_, lean_object* v___x_4134_, lean_object* v_xs_4135_, lean_object* v_x_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
lean_object* v_graph_4142_; lean_object* v_revDeps_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4196_; 
v_graph_4142_ = lean_ctor_get(v_a_4132_, 0);
v_revDeps_4143_ = lean_ctor_get(v_a_4132_, 1);
v_isSharedCheck_4196_ = !lean_is_exclusive(v_a_4132_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4145_ = v_a_4132_;
v_isShared_4146_ = v_isSharedCheck_4196_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_revDeps_4143_);
lean_inc(v_graph_4142_);
lean_dec(v_a_4132_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4196_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; uint8_t v___x_4150_; 
v___x_4147_ = lean_array_get_borrowed(v___x_4133_, v_graph_4142_, v___x_4134_);
v___x_4148_ = lean_array_get_size(v_xs_4135_);
v___x_4149_ = lean_array_get_size(v___x_4147_);
v___x_4150_ = lean_nat_dec_eq(v___x_4148_, v___x_4149_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; lean_object* v___x_4152_; 
lean_del_object(v___x_4145_);
lean_dec_ref(v_revDeps_4143_);
lean_dec_ref(v_graph_4142_);
lean_dec_ref(v_xs_4135_);
lean_dec(v___x_4134_);
v___x_4151_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4152_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4151_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
return v___x_4152_;
}
else
{
lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4157_; 
v___x_4153_ = lean_mk_empty_array_with_capacity(v___x_4134_);
lean_inc_n(v___x_4134_, 2);
v___x_4154_ = l_Array_toSubarray___redArg(v_xs_4135_, v___x_4134_, v___x_4148_);
lean_inc(v___x_4147_);
v___x_4155_ = l_Array_toSubarray___redArg(v___x_4147_, v___x_4134_, v___x_4149_);
if (v_isShared_4146_ == 0)
{
lean_ctor_set(v___x_4145_, 1, v___x_4155_);
lean_ctor_set(v___x_4145_, 0, v___x_4154_);
v___x_4157_ = v___x_4145_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4154_);
lean_ctor_set(v_reuseFailAlloc_4195_, 1, v___x_4155_);
v___x_4157_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
lean_inc(v___x_4134_);
v___x_4158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4134_);
lean_ctor_set(v___x_4158_, 1, v___x_4157_);
v___x_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4153_);
lean_ctor_set(v___x_4159_, 1, v___x_4158_);
v___x_4160_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4148_, v___x_4134_, v___x_4159_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; lean_object* v_snd_4162_; lean_object* v_fst_4163_; lean_object* v_fst_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
lean_inc(v_a_4161_);
lean_dec_ref(v___x_4160_);
v_snd_4162_ = lean_ctor_get(v_a_4161_, 1);
lean_inc(v_snd_4162_);
v_fst_4163_ = lean_ctor_get(v_a_4161_, 0);
lean_inc_n(v_fst_4163_, 2);
lean_dec(v_a_4161_);
v_fst_4164_ = lean_ctor_get(v_snd_4162_, 0);
lean_inc(v_fst_4164_);
lean_dec(v_snd_4162_);
v___x_4165_ = lean_unsigned_to_nat(1u);
v___x_4166_ = lean_array_get_size(v_graph_4142_);
v___x_4167_ = lean_mk_empty_array_with_capacity(v___x_4165_);
v___x_4168_ = lean_array_push(v___x_4167_, v_fst_4163_);
v___x_4169_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4166_, v_graph_4142_, v_fst_4163_, v___x_4165_, v___x_4168_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
lean_dec(v_fst_4163_);
lean_dec_ref(v_graph_4142_);
if (lean_obj_tag(v___x_4169_) == 0)
{
lean_object* v_a_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4178_; 
v_a_4170_ = lean_ctor_get(v___x_4169_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4169_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4172_ = v___x_4169_;
v_isShared_4173_ = v_isSharedCheck_4178_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_a_4170_);
lean_dec(v___x_4169_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4178_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
lean_object* v___x_4174_; lean_object* v___x_4176_; 
v___x_4174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4174_, 0, v_fst_4164_);
lean_ctor_set(v___x_4174_, 1, v_a_4170_);
lean_ctor_set(v___x_4174_, 2, v_revDeps_4143_);
if (v_isShared_4173_ == 0)
{
lean_ctor_set(v___x_4172_, 0, v___x_4174_);
v___x_4176_ = v___x_4172_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4174_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
lean_dec(v_fst_4164_);
lean_dec_ref(v_revDeps_4143_);
v_a_4179_ = lean_ctor_get(v___x_4169_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4169_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4181_ = v___x_4169_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v___x_4169_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
lean_dec_ref(v_revDeps_4143_);
lean_dec_ref(v_graph_4142_);
v_a_4187_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___x_4160_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4160_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4197_, lean_object* v___x_4198_, lean_object* v___x_4199_, lean_object* v_xs_4200_, lean_object* v_x_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4197_, v___x_4198_, v___x_4199_, v_xs_4200_, v_x_4201_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
lean_dec(v___y_4203_);
lean_dec_ref(v___y_4202_);
lean_dec_ref(v_x_4201_);
lean_dec_ref(v___x_4198_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_, lean_object* v_a_4212_){
_start:
{
lean_object* v___x_4214_; 
lean_inc_ref(v_preDefs_4208_);
v___x_4214_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4208_, v_a_4209_, v_a_4210_, v_a_4211_, v_a_4212_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v_value_4219_; lean_object* v___x_4220_; lean_object* v___f_4221_; uint8_t v___x_4222_; lean_object* v___x_4223_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
lean_inc(v_a_4215_);
lean_dec_ref(v___x_4214_);
v___x_4216_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4217_ = lean_unsigned_to_nat(0u);
v___x_4218_ = lean_array_get(v___x_4216_, v_preDefs_4208_, v___x_4217_);
lean_dec_ref(v_preDefs_4208_);
v_value_4219_ = lean_ctor_get(v___x_4218_, 7);
lean_inc_ref(v_value_4219_);
lean_dec(v___x_4218_);
v___x_4220_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___f_4221_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4221_, 0, v_a_4215_);
lean_closure_set(v___f_4221_, 1, v___x_4220_);
lean_closure_set(v___f_4221_, 2, v___x_4217_);
v___x_4222_ = 0;
v___x_4223_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4219_, v___f_4221_, v___x_4222_, v_a_4209_, v_a_4210_, v_a_4211_, v_a_4212_);
return v___x_4223_;
}
else
{
lean_object* v_a_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4231_; 
lean_dec_ref(v_preDefs_4208_);
v_a_4224_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4231_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4226_ = v___x_4214_;
v_isShared_4227_ = v_isSharedCheck_4231_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_a_4224_);
lean_dec(v___x_4214_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4231_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4229_; 
if (v_isShared_4227_ == 0)
{
v___x_4229_ = v___x_4226_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v_a_4224_);
v___x_4229_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
return v___x_4229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_){
_start:
{
lean_object* v_res_4238_; 
v_res_4238_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4232_, v_a_4233_, v_a_4234_, v_a_4235_, v_a_4236_);
lean_dec(v_a_4236_);
lean_dec_ref(v_a_4235_);
lean_dec(v_a_4234_);
lean_dec_ref(v_a_4233_);
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4239_, lean_object* v___x_4240_, lean_object* v___x_4241_, lean_object* v_inst_4242_, lean_object* v_R_4243_, lean_object* v_a_4244_, lean_object* v_b_4245_, lean_object* v_c_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___x_4252_; 
v___x_4252_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4239_, v___x_4240_, v___x_4241_, v_a_4244_, v_b_4245_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
return v___x_4252_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4253_, lean_object* v___x_4254_, lean_object* v___x_4255_, lean_object* v_inst_4256_, lean_object* v_R_4257_, lean_object* v_a_4258_, lean_object* v_b_4259_, lean_object* v_c_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_){
_start:
{
lean_object* v_res_4266_; 
v_res_4266_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4253_, v___x_4254_, v___x_4255_, v_inst_4256_, v_R_4257_, v_a_4258_, v_b_4259_, v_c_4260_, v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_);
lean_dec(v___y_4264_);
lean_dec_ref(v___y_4263_);
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec_ref(v___x_4255_);
lean_dec_ref(v___x_4254_);
lean_dec(v_upperBound_4253_);
return v_res_4266_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4267_, lean_object* v_inst_4268_, lean_object* v_R_4269_, lean_object* v_a_4270_, lean_object* v_b_4271_, lean_object* v_c_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v___x_4278_; 
v___x_4278_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4267_, v_a_4270_, v_b_4271_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_);
return v___x_4278_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4279_, lean_object* v_inst_4280_, lean_object* v_R_4281_, lean_object* v_a_4282_, lean_object* v_b_4283_, lean_object* v_c_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4279_, v_inst_4280_, v_R_4281_, v_a_4282_, v_b_4283_, v_c_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_);
lean_dec(v___y_4288_);
lean_dec_ref(v___y_4287_);
lean_dec(v___y_4286_);
lean_dec_ref(v___y_4285_);
lean_dec(v_upperBound_4279_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4291_, size_t v_i_4292_, size_t v_stop_4293_, lean_object* v_b_4294_){
_start:
{
uint8_t v___x_4295_; 
v___x_4295_ = lean_usize_dec_eq(v_i_4292_, v_stop_4293_);
if (v___x_4295_ == 0)
{
size_t v___x_4296_; size_t v___x_4297_; lean_object* v___x_4298_; 
v___x_4296_ = ((size_t)1ULL);
v___x_4297_ = lean_usize_sub(v_i_4292_, v___x_4296_);
v___x_4298_ = lean_array_uget_borrowed(v_as_4291_, v___x_4297_);
if (lean_obj_tag(v___x_4298_) == 0)
{
v_i_4292_ = v___x_4297_;
goto _start;
}
else
{
lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4300_ = lean_unsigned_to_nat(1u);
v___x_4301_ = lean_nat_add(v_b_4294_, v___x_4300_);
lean_dec(v_b_4294_);
v_i_4292_ = v___x_4297_;
v_b_4294_ = v___x_4301_;
goto _start;
}
}
else
{
return v_b_4294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4303_, lean_object* v_i_4304_, lean_object* v_stop_4305_, lean_object* v_b_4306_){
_start:
{
size_t v_i_boxed_4307_; size_t v_stop_boxed_4308_; lean_object* v_res_4309_; 
v_i_boxed_4307_ = lean_unbox_usize(v_i_4304_);
lean_dec(v_i_4304_);
v_stop_boxed_4308_ = lean_unbox_usize(v_stop_4305_);
lean_dec(v_stop_4305_);
v_res_4309_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4303_, v_i_boxed_4307_, v_stop_boxed_4308_, v_b_4306_);
lean_dec_ref(v_as_4303_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4310_){
_start:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; uint8_t v___x_4313_; 
v___x_4311_ = lean_unsigned_to_nat(0u);
v___x_4312_ = lean_array_get_size(v_perm_4310_);
v___x_4313_ = lean_nat_dec_lt(v___x_4311_, v___x_4312_);
if (v___x_4313_ == 0)
{
return v___x_4311_;
}
else
{
size_t v___x_4314_; size_t v___x_4315_; lean_object* v___x_4316_; 
v___x_4314_ = lean_usize_of_nat(v___x_4312_);
v___x_4315_ = ((size_t)0ULL);
v___x_4316_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4310_, v___x_4314_, v___x_4315_, v___x_4311_);
return v___x_4316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4317_);
lean_dec_ref(v_perm_4317_);
return v_res_4318_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4319_, lean_object* v_i_4320_){
_start:
{
lean_object* v___x_4321_; uint8_t v___x_4322_; 
v___x_4321_ = lean_array_get_size(v_perm_4319_);
v___x_4322_ = lean_nat_dec_lt(v_i_4320_, v___x_4321_);
if (v___x_4322_ == 0)
{
return v___x_4322_;
}
else
{
lean_object* v___x_4323_; 
v___x_4323_ = lean_array_fget_borrowed(v_perm_4319_, v_i_4320_);
if (lean_obj_tag(v___x_4323_) == 0)
{
uint8_t v___x_4324_; 
v___x_4324_ = 0;
return v___x_4324_;
}
else
{
return v___x_4322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4325_, lean_object* v_i_4326_){
_start:
{
uint8_t v_res_4327_; lean_object* v_r_4328_; 
v_res_4327_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4325_, v_i_4326_);
lean_dec(v_i_4326_);
lean_dec_ref(v_perm_4325_);
v_r_4328_ = lean_box(v_res_4327_);
return v_r_4328_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_){
_start:
{
lean_object* v___f_4335_; lean_object* v___x_1076__overap_4336_; lean_object* v___x_4337_; 
v___f_4335_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_1076__overap_4336_ = lean_panic_fn_borrowed(v___f_4335_, v_msg_4329_);
lean_inc(v___y_4333_);
lean_inc_ref(v___y_4332_);
lean_inc(v___y_4331_);
lean_inc_ref(v___y_4330_);
v___x_4337_ = lean_apply_5(v___x_1076__overap_4336_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_, lean_box(0));
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_){
_start:
{
lean_object* v_res_4344_; 
v_res_4344_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4338_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_);
lean_dec(v___y_4342_);
lean_dec_ref(v___y_4341_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
return v_res_4344_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4345_, lean_object* v_msg_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_){
_start:
{
lean_object* v___x_4352_; 
v___x_4352_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4353_, lean_object* v_msg_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4353_, v_msg_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_);
lean_dec(v___y_4358_);
lean_dec_ref(v___y_4357_);
lean_dec(v___y_4356_);
lean_dec_ref(v___y_4355_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4361_, lean_object* v_maxFVars_x3f_4362_, lean_object* v_k_4363_, uint8_t v_cleanupAnnotations_4364_, uint8_t v_whnfType_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_){
_start:
{
lean_object* v___f_4371_; lean_object* v___x_4372_; 
v___f_4371_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4371_, 0, v_k_4363_);
v___x_4372_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4361_, v_maxFVars_x3f_4362_, v___f_4371_, v_cleanupAnnotations_4364_, v_whnfType_4365_, v___y_4366_, v___y_4367_, v___y_4368_, v___y_4369_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4380_; 
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4375_ = v___x_4372_;
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4378_; 
if (v_isShared_4376_ == 0)
{
v___x_4378_ = v___x_4375_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_a_4373_);
v___x_4378_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
return v___x_4378_;
}
}
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4388_; 
v_a_4381_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4383_ = v___x_4372_;
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4372_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4389_, lean_object* v_maxFVars_x3f_4390_, lean_object* v_k_4391_, lean_object* v_cleanupAnnotations_4392_, lean_object* v_whnfType_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4399_; uint8_t v_whnfType_boxed_4400_; lean_object* v_res_4401_; 
v_cleanupAnnotations_boxed_4399_ = lean_unbox(v_cleanupAnnotations_4392_);
v_whnfType_boxed_4400_ = lean_unbox(v_whnfType_4393_);
v_res_4401_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4389_, v_maxFVars_x3f_4390_, v_k_4391_, v_cleanupAnnotations_boxed_4399_, v_whnfType_boxed_4400_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4402_, lean_object* v_type_4403_, lean_object* v_maxFVars_x3f_4404_, lean_object* v_k_4405_, uint8_t v_cleanupAnnotations_4406_, uint8_t v_whnfType_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_){
_start:
{
lean_object* v___x_4413_; 
v___x_4413_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4403_, v_maxFVars_x3f_4404_, v_k_4405_, v_cleanupAnnotations_4406_, v_whnfType_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_);
return v___x_4413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4414_, lean_object* v_type_4415_, lean_object* v_maxFVars_x3f_4416_, lean_object* v_k_4417_, lean_object* v_cleanupAnnotations_4418_, lean_object* v_whnfType_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4425_; uint8_t v_whnfType_boxed_4426_; lean_object* v_res_4427_; 
v_cleanupAnnotations_boxed_4425_ = lean_unbox(v_cleanupAnnotations_4418_);
v_whnfType_boxed_4426_ = lean_unbox(v_whnfType_4419_);
v_res_4427_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4414_, v_type_4415_, v_maxFVars_x3f_4416_, v_k_4417_, v_cleanupAnnotations_boxed_4425_, v_whnfType_boxed_4426_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_);
lean_dec(v___y_4423_);
lean_dec_ref(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec_ref(v___y_4420_);
return v_res_4427_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4430_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1));
v___x_4431_ = lean_unsigned_to_nat(6u);
v___x_4432_ = lean_unsigned_to_nat(329u);
v___x_4433_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4434_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4435_ = l_mkPanicMessageWithDecl(v___x_4434_, v___x_4433_, v___x_4432_, v___x_4431_, v___x_4430_);
return v___x_4435_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4439_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0));
v___x_4440_ = lean_unsigned_to_nat(8u);
v___x_4441_ = lean_unsigned_to_nat(322u);
v___x_4442_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4443_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4444_ = l_mkPanicMessageWithDecl(v___x_4443_, v___x_4442_, v___x_4441_, v___x_4440_, v___x_4439_);
return v___x_4444_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; 
v___x_4446_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4447_ = lean_unsigned_to_nat(8u);
v___x_4448_ = lean_unsigned_to_nat(325u);
v___x_4449_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4450_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4451_ = l_mkPanicMessageWithDecl(v___x_4450_, v___x_4449_, v___x_4448_, v___x_4447_, v___x_4446_);
return v___x_4451_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4453_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4));
v___x_4454_ = lean_unsigned_to_nat(8u);
v___x_4455_ = lean_unsigned_to_nat(324u);
v___x_4456_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4457_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4458_ = l_mkPanicMessageWithDecl(v___x_4457_, v___x_4456_, v___x_4455_, v___x_4454_, v___x_4453_);
return v___x_4458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4459_, lean_object* v_xs_4460_, lean_object* v_val_4461_, lean_object* v_i_4462_, lean_object* v_perm_4463_, lean_object* v_k_4464_, lean_object* v_xs_x27_4465_, lean_object* v_type_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_){
_start:
{
lean_object* v___x_4472_; uint8_t v___x_4473_; 
v___x_4472_ = lean_array_get_size(v_xs_x27_4465_);
v___x_4473_ = lean_nat_dec_eq(v___x_4472_, v___x_4459_);
if (v___x_4473_ == 0)
{
lean_object* v___x_4474_; lean_object* v___x_4475_; 
lean_dec_ref(v_type_4466_);
lean_dec_ref(v_k_4464_);
lean_dec_ref(v_perm_4463_);
lean_dec_ref(v_xs_4460_);
v___x_4474_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4475_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4474_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4475_;
}
else
{
lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v_x_4478_; lean_object* v___x_4479_; 
v___x_4476_ = l_Lean_instInhabitedExpr;
v___x_4477_ = lean_unsigned_to_nat(0u);
v_x_4478_ = lean_array_get_borrowed(v___x_4476_, v_xs_x27_4465_, v___x_4477_);
lean_inc(v___y_4470_);
lean_inc_ref(v___y_4469_);
lean_inc(v___y_4468_);
lean_inc_ref(v___y_4467_);
lean_inc(v_x_4478_);
v___x_4479_ = lean_infer_type(v_x_4478_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; uint8_t v___x_4481_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_a_4480_);
lean_dec_ref(v___x_4479_);
v___x_4481_ = l_Lean_Expr_hasLooseBVars(v_a_4480_);
lean_dec(v_a_4480_);
if (v___x_4481_ == 0)
{
lean_object* v___x_4482_; uint8_t v___x_4483_; 
v___x_4482_ = lean_array_get_size(v_xs_4460_);
v___x_4483_ = lean_nat_dec_lt(v_val_4461_, v___x_4482_);
if (v___x_4483_ == 0)
{
lean_object* v___x_4484_; lean_object* v___x_4485_; 
lean_dec_ref(v_type_4466_);
lean_dec_ref(v_k_4464_);
lean_dec_ref(v_perm_4463_);
lean_dec_ref(v_xs_4460_);
v___x_4484_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4485_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4484_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4485_;
}
else
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4486_ = lean_nat_add(v_i_4462_, v___x_4459_);
lean_inc(v_x_4478_);
v___x_4487_ = lean_array_set(v_xs_4460_, v_val_4461_, v_x_4478_);
v___x_4488_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4463_, v_k_4464_, v___x_4486_, v_type_4466_, v___x_4487_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4488_;
}
}
else
{
lean_object* v___x_4489_; lean_object* v___x_4490_; 
lean_dec_ref(v_type_4466_);
lean_dec_ref(v_k_4464_);
lean_dec_ref(v_perm_4463_);
lean_dec_ref(v_xs_4460_);
v___x_4489_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4490_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4489_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4490_;
}
}
else
{
lean_object* v_a_4491_; lean_object* v___x_4493_; uint8_t v_isShared_4494_; uint8_t v_isSharedCheck_4498_; 
lean_dec_ref(v_type_4466_);
lean_dec_ref(v_k_4464_);
lean_dec_ref(v_perm_4463_);
lean_dec_ref(v_xs_4460_);
v_a_4491_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4498_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4498_ == 0)
{
v___x_4493_ = v___x_4479_;
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
else
{
lean_inc(v_a_4491_);
lean_dec(v___x_4479_);
v___x_4493_ = lean_box(0);
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
v_resetjp_4492_:
{
lean_object* v___x_4496_; 
if (v_isShared_4494_ == 0)
{
v___x_4496_ = v___x_4493_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v_a_4491_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
return v___x_4496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4499_, lean_object* v_xs_4500_, lean_object* v_val_4501_, lean_object* v_i_4502_, lean_object* v_perm_4503_, lean_object* v_k_4504_, lean_object* v_xs_x27_4505_, lean_object* v_type_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_){
_start:
{
lean_object* v_res_4512_; 
v_res_4512_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4499_, v_xs_4500_, v_val_4501_, v_i_4502_, v_perm_4503_, v_k_4504_, v_xs_x27_4505_, v_type_4506_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_);
lean_dec(v___y_4510_);
lean_dec_ref(v___y_4509_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec_ref(v_xs_x27_4505_);
lean_dec(v_i_4502_);
lean_dec(v_val_4501_);
lean_dec(v___x_4499_);
return v_res_4512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4513_, lean_object* v_k_4514_, lean_object* v_i_4515_, lean_object* v_type_4516_, lean_object* v_xs_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_){
_start:
{
lean_object* v___x_4523_; uint8_t v___x_4524_; 
v___x_4523_ = lean_array_get_size(v_perm_4513_);
v___x_4524_ = lean_nat_dec_lt(v_i_4515_, v___x_4523_);
if (v___x_4524_ == 0)
{
lean_object* v___x_4525_; 
lean_dec_ref(v_type_4516_);
lean_dec(v_i_4515_);
lean_dec_ref(v_perm_4513_);
lean_inc(v_a_4521_);
lean_inc_ref(v_a_4520_);
lean_inc(v_a_4519_);
lean_inc_ref(v_a_4518_);
v___x_4525_ = lean_apply_6(v_k_4514_, v_xs_4517_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_, lean_box(0));
return v___x_4525_;
}
else
{
lean_object* v___x_4526_; 
v___x_4526_ = lean_array_fget_borrowed(v_perm_4513_, v_i_4515_);
if (lean_obj_tag(v___x_4526_) == 0)
{
lean_object* v___x_4527_; 
lean_inc(v_a_4521_);
lean_inc_ref(v_a_4520_);
lean_inc(v_a_4519_);
lean_inc_ref(v_a_4518_);
v___x_4527_ = lean_whnf(v_type_4516_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; uint8_t v___x_4529_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_a_4528_);
lean_dec_ref(v___x_4527_);
v___x_4529_ = l_Lean_Expr_isForall(v_a_4528_);
if (v___x_4529_ == 0)
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_dec(v_a_4528_);
lean_dec_ref(v_xs_4517_);
lean_dec(v_i_4515_);
lean_dec_ref(v_k_4514_);
lean_dec_ref(v_perm_4513_);
v___x_4530_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4531_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4530_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
return v___x_4531_;
}
else
{
lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4532_ = lean_unsigned_to_nat(1u);
v___x_4533_ = lean_nat_add(v_i_4515_, v___x_4532_);
lean_dec(v_i_4515_);
v___x_4534_ = l_Lean_Expr_bindingBody_x21(v_a_4528_);
lean_dec(v_a_4528_);
v_i_4515_ = v___x_4533_;
v_type_4516_ = v___x_4534_;
goto _start;
}
}
else
{
lean_object* v_a_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4543_; 
lean_dec_ref(v_xs_4517_);
lean_dec(v_i_4515_);
lean_dec_ref(v_k_4514_);
lean_dec_ref(v_perm_4513_);
v_a_4536_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4543_ == 0)
{
v___x_4538_ = v___x_4527_;
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_a_4536_);
lean_dec(v___x_4527_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
lean_object* v___x_4541_; 
if (v_isShared_4539_ == 0)
{
v___x_4541_ = v___x_4538_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4536_);
v___x_4541_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
return v___x_4541_;
}
}
}
}
else
{
lean_object* v_val_4544_; lean_object* v___x_4545_; lean_object* v___f_4546_; lean_object* v___x_4547_; uint8_t v___x_4548_; lean_object* v___x_4549_; 
v_val_4544_ = lean_ctor_get(v___x_4526_, 0);
lean_inc(v_val_4544_);
v___x_4545_ = lean_unsigned_to_nat(1u);
v___f_4546_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_4546_, 0, v___x_4545_);
lean_closure_set(v___f_4546_, 1, v_xs_4517_);
lean_closure_set(v___f_4546_, 2, v_val_4544_);
lean_closure_set(v___f_4546_, 3, v_i_4515_);
lean_closure_set(v___f_4546_, 4, v_perm_4513_);
lean_closure_set(v___f_4546_, 5, v_k_4514_);
v___x_4547_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4548_ = 0;
v___x_4549_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4516_, v___x_4547_, v___f_4546_, v___x_4524_, v___x_4548_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
return v___x_4549_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4550_, lean_object* v_k_4551_, lean_object* v_i_4552_, lean_object* v_type_4553_, lean_object* v_xs_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4550_, v_k_4551_, v_i_4552_, v_type_4553_, v_xs_4554_, v_a_4555_, v_a_4556_, v_a_4557_, v_a_4558_);
lean_dec(v_a_4558_);
lean_dec_ref(v_a_4557_);
lean_dec(v_a_4556_);
lean_dec_ref(v_a_4555_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4561_, lean_object* v_perm_4562_, lean_object* v_k_4563_, lean_object* v_i_4564_, lean_object* v_type_4565_, lean_object* v_xs_4566_, lean_object* v_a_4567_, lean_object* v_a_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_){
_start:
{
lean_object* v___x_4572_; 
v___x_4572_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4562_, v_k_4563_, v_i_4564_, v_type_4565_, v_xs_4566_, v_a_4567_, v_a_4568_, v_a_4569_, v_a_4570_);
return v___x_4572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4573_, lean_object* v_perm_4574_, lean_object* v_k_4575_, lean_object* v_i_4576_, lean_object* v_type_4577_, lean_object* v_xs_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4573_, v_perm_4574_, v_k_4575_, v_i_4576_, v_type_4577_, v_xs_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_);
lean_dec(v_a_4582_);
lean_dec_ref(v_a_4581_);
lean_dec(v_a_4580_);
lean_dec_ref(v_a_4579_);
return v_res_4584_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; 
v___x_4585_ = lean_unsigned_to_nat(0u);
v___x_4586_ = l_Lean_Level_ofNat(v___x_4585_);
return v___x_4586_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4587_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4588_ = l_Lean_mkSort(v___x_4587_);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4589_, lean_object* v_type_4590_, lean_object* v_k_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v___x_4597_ = lean_unsigned_to_nat(0u);
v___x_4598_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4589_);
v___x_4599_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4600_ = lean_mk_array(v___x_4598_, v___x_4599_);
v___x_4601_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4589_, v_k_4591_, v___x_4597_, v_type_4590_, v___x_4600_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4602_, lean_object* v_type_4603_, lean_object* v_k_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_){
_start:
{
lean_object* v_res_4610_; 
v_res_4610_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4602_, v_type_4603_, v_k_4604_, v_a_4605_, v_a_4606_, v_a_4607_, v_a_4608_);
lean_dec(v_a_4608_);
lean_dec_ref(v_a_4607_);
lean_dec(v_a_4606_);
lean_dec_ref(v_a_4605_);
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4611_, lean_object* v_perm_4612_, lean_object* v_type_4613_, lean_object* v_k_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_){
_start:
{
lean_object* v___x_4620_; 
v___x_4620_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4612_, v_type_4613_, v_k_4614_, v_a_4615_, v_a_4616_, v_a_4617_, v_a_4618_);
return v___x_4620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4621_, lean_object* v_perm_4622_, lean_object* v_type_4623_, lean_object* v_k_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_){
_start:
{
lean_object* v_res_4630_; 
v_res_4630_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4621_, v_perm_4622_, v_type_4623_, v_k_4624_, v_a_4625_, v_a_4626_, v_a_4627_, v_a_4628_);
lean_dec(v_a_4628_);
lean_dec_ref(v_a_4627_);
lean_dec(v_a_4626_);
lean_dec_ref(v_a_4625_);
return v_res_4630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4631_, lean_object* v_runInBase_4632_, lean_object* v_b_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_){
_start:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4639_ = lean_apply_1(v_k_4631_, v_b_4633_);
lean_inc(v___y_4637_);
lean_inc_ref(v___y_4636_);
lean_inc(v___y_4635_);
lean_inc_ref(v___y_4634_);
v___x_4640_ = lean_apply_7(v_runInBase_4632_, lean_box(0), v___x_4639_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_, lean_box(0));
return v___x_4640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4641_, lean_object* v_runInBase_4642_, lean_object* v_b_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_){
_start:
{
lean_object* v_res_4649_; 
v_res_4649_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4641_, v_runInBase_4642_, v_b_4643_, v___y_4644_, v___y_4645_, v___y_4646_, v___y_4647_);
lean_dec(v___y_4647_);
lean_dec_ref(v___y_4646_);
lean_dec(v___y_4645_);
lean_dec_ref(v___y_4644_);
return v_res_4649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4650_, lean_object* v_perm_4651_, lean_object* v_type_4652_, lean_object* v_runInBase_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v___f_4659_; lean_object* v___x_4660_; 
v___f_4659_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4659_, 0, v_k_4650_);
lean_closure_set(v___f_4659_, 1, v_runInBase_4653_);
v___x_4660_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4651_, v_type_4652_, v___f_4659_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
return v___x_4660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4661_, lean_object* v_perm_4662_, lean_object* v_type_4663_, lean_object* v_runInBase_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_){
_start:
{
lean_object* v_res_4670_; 
v_res_4670_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4661_, v_perm_4662_, v_type_4663_, v_runInBase_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
lean_dec(v___y_4668_);
lean_dec_ref(v___y_4667_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
return v_res_4670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4671_, lean_object* v_inst_4672_, lean_object* v_perm_4673_, lean_object* v_type_4674_, lean_object* v_k_4675_){
_start:
{
lean_object* v_toBind_4676_; lean_object* v_liftWith_4677_; lean_object* v_restoreM_4678_; lean_object* v___f_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; 
v_toBind_4676_ = lean_ctor_get(v_inst_4672_, 1);
lean_inc(v_toBind_4676_);
lean_dec_ref(v_inst_4672_);
v_liftWith_4677_ = lean_ctor_get(v_inst_4671_, 0);
lean_inc(v_liftWith_4677_);
v_restoreM_4678_ = lean_ctor_get(v_inst_4671_, 1);
lean_inc(v_restoreM_4678_);
lean_dec_ref(v_inst_4671_);
v___f_4679_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4679_, 0, v_k_4675_);
lean_closure_set(v___f_4679_, 1, v_perm_4673_);
lean_closure_set(v___f_4679_, 2, v_type_4674_);
v___x_4680_ = lean_apply_2(v_liftWith_4677_, lean_box(0), v___f_4679_);
v___x_4681_ = lean_apply_1(v_restoreM_4678_, lean_box(0));
v___x_4682_ = lean_apply_4(v_toBind_4676_, lean_box(0), lean_box(0), v___x_4680_, v___x_4681_);
return v___x_4682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4683_, lean_object* v_00_u03b1_4684_, lean_object* v_inst_4685_, lean_object* v_inst_4686_, lean_object* v_perm_4687_, lean_object* v_type_4688_, lean_object* v_k_4689_){
_start:
{
lean_object* v___x_4690_; 
v___x_4690_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4685_, v_inst_4686_, v_perm_4687_, v_type_4688_, v_k_4689_);
return v___x_4690_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_){
_start:
{
lean_object* v___f_4697_; lean_object* v___x_603__overap_4698_; lean_object* v___x_4699_; 
v___f_4697_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_603__overap_4698_ = lean_panic_fn_borrowed(v___f_4697_, v_msg_4691_);
lean_inc(v___y_4695_);
lean_inc_ref(v___y_4694_);
lean_inc(v___y_4693_);
lean_inc_ref(v___y_4692_);
v___x_4699_ = lean_apply_5(v___x_603__overap_4698_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_, lean_box(0));
return v___x_4699_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_){
_start:
{
lean_object* v_res_4706_; 
v_res_4706_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_);
lean_dec(v___y_4704_);
lean_dec_ref(v___y_4703_);
lean_dec(v___y_4702_);
lean_dec_ref(v___y_4701_);
return v_res_4706_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4709_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1));
v___x_4710_ = lean_unsigned_to_nat(10u);
v___x_4711_ = lean_unsigned_to_nat(353u);
v___x_4712_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4713_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4714_ = l_mkPanicMessageWithDecl(v___x_4713_, v___x_4712_, v___x_4711_, v___x_4710_, v___x_4709_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4715_, lean_object* v_xs_4716_, lean_object* v_tail_4717_, lean_object* v_ys_4718_, lean_object* v_type_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4715_, v_xs_4716_, v_tail_4717_, v_ys_4718_, v_type_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec_ref(v_ys_4718_);
lean_dec(v___x_4715_);
return v_res_4725_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
v___x_4726_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4727_ = lean_unsigned_to_nat(8u);
v___x_4728_ = lean_unsigned_to_nat(349u);
v___x_4729_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4730_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4731_ = l_mkPanicMessageWithDecl(v___x_4730_, v___x_4729_, v___x_4728_, v___x_4727_, v___x_4726_);
return v___x_4731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4732_, lean_object* v_x_4733_, lean_object* v_x_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_, lean_object* v_a_4738_){
_start:
{
if (lean_obj_tag(v_x_4733_) == 0)
{
lean_object* v___x_4740_; 
lean_dec_ref(v_xs_4732_);
v___x_4740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4740_, 0, v_x_4734_);
return v___x_4740_;
}
else
{
lean_object* v_head_4741_; 
v_head_4741_ = lean_ctor_get(v_x_4733_, 0);
if (lean_obj_tag(v_head_4741_) == 0)
{
lean_object* v_tail_4742_; lean_object* v___x_4743_; lean_object* v___f_4744_; lean_object* v___x_4745_; uint8_t v___x_4746_; lean_object* v___x_4747_; 
v_tail_4742_ = lean_ctor_get(v_x_4733_, 1);
lean_inc(v_tail_4742_);
lean_dec_ref(v_x_4733_);
v___x_4743_ = lean_unsigned_to_nat(1u);
v___f_4744_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4744_, 0, v___x_4743_);
lean_closure_set(v___f_4744_, 1, v_xs_4732_);
lean_closure_set(v___f_4744_, 2, v_tail_4742_);
v___x_4745_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4746_ = 0;
v___x_4747_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4734_, v___x_4745_, v___f_4744_, v___x_4746_, v___x_4746_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_);
return v___x_4747_;
}
else
{
lean_object* v_tail_4748_; lean_object* v_val_4749_; lean_object* v___x_4750_; uint8_t v___x_4751_; 
lean_inc_ref(v_head_4741_);
v_tail_4748_ = lean_ctor_get(v_x_4733_, 1);
lean_inc(v_tail_4748_);
lean_dec_ref(v_x_4733_);
v_val_4749_ = lean_ctor_get(v_head_4741_, 0);
lean_inc(v_val_4749_);
lean_dec_ref(v_head_4741_);
v___x_4750_ = lean_array_get_size(v_xs_4732_);
v___x_4751_ = lean_nat_dec_lt(v_val_4749_, v___x_4750_);
if (v___x_4751_ == 0)
{
lean_object* v___x_4752_; lean_object* v___x_4753_; 
lean_dec(v_val_4749_);
lean_dec(v_tail_4748_);
lean_dec_ref(v_x_4734_);
lean_dec_ref(v_xs_4732_);
v___x_4752_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4753_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4752_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_);
return v___x_4753_;
}
else
{
lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; 
v___x_4754_ = l_Lean_instInhabitedExpr;
v___x_4755_ = lean_array_get_borrowed(v___x_4754_, v_xs_4732_, v_val_4749_);
lean_dec(v_val_4749_);
v___x_4756_ = lean_unsigned_to_nat(1u);
v___x_4757_ = lean_mk_empty_array_with_capacity(v___x_4756_);
lean_inc(v___x_4755_);
v___x_4758_ = lean_array_push(v___x_4757_, v___x_4755_);
v___x_4759_ = l_Lean_Meta_instantiateForall(v_x_4734_, v___x_4758_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_);
lean_dec_ref(v___x_4758_);
if (lean_obj_tag(v___x_4759_) == 0)
{
lean_object* v_a_4760_; 
v_a_4760_ = lean_ctor_get(v___x_4759_, 0);
lean_inc(v_a_4760_);
lean_dec_ref(v___x_4759_);
v_x_4733_ = v_tail_4748_;
v_x_4734_ = v_a_4760_;
goto _start;
}
else
{
lean_dec(v_tail_4748_);
lean_dec_ref(v_xs_4732_);
return v___x_4759_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4762_, lean_object* v_xs_4763_, lean_object* v_tail_4764_, lean_object* v_ys_4765_, lean_object* v_type_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_){
_start:
{
lean_object* v___x_4772_; uint8_t v___x_4773_; 
v___x_4772_ = lean_array_get_size(v_ys_4765_);
v___x_4773_ = lean_nat_dec_eq(v___x_4772_, v___x_4762_);
if (v___x_4773_ == 0)
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
lean_dec_ref(v_type_4766_);
lean_dec(v_tail_4764_);
lean_dec_ref(v_xs_4763_);
v___x_4774_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4775_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4774_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_);
return v___x_4775_;
}
else
{
lean_object* v___x_4776_; 
v___x_4776_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4763_, v_tail_4764_, v_type_4766_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v_a_4777_; uint8_t v___x_4778_; uint8_t v___x_4779_; lean_object* v___x_4780_; 
v_a_4777_ = lean_ctor_get(v___x_4776_, 0);
lean_inc(v_a_4777_);
lean_dec_ref(v___x_4776_);
v___x_4778_ = 0;
v___x_4779_ = 1;
v___x_4780_ = l_Lean_Meta_mkForallFVars(v_ys_4765_, v_a_4777_, v___x_4778_, v___x_4773_, v___x_4773_, v___x_4779_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_);
return v___x_4780_;
}
else
{
return v___x_4776_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4781_, lean_object* v_x_4782_, lean_object* v_x_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_){
_start:
{
lean_object* v_res_4789_; 
v_res_4789_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4781_, v_x_4782_, v_x_4783_, v_a_4784_, v_a_4785_, v_a_4786_, v_a_4787_);
lean_dec(v_a_4787_);
lean_dec_ref(v_a_4786_);
lean_dec(v_a_4785_);
lean_dec_ref(v_a_4784_);
return v_res_4789_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4792_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4793_ = lean_unsigned_to_nat(2u);
v___x_4794_ = lean_unsigned_to_nat(343u);
v___x_4795_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0));
v___x_4796_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4797_ = l_mkPanicMessageWithDecl(v___x_4796_, v___x_4795_, v___x_4794_, v___x_4793_, v___x_4792_);
return v___x_4797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4798_, lean_object* v_type_u2080_4799_, lean_object* v_xs_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_){
_start:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; uint8_t v___x_4808_; 
v___x_4806_ = lean_array_get_size(v_xs_4800_);
v___x_4807_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4798_);
v___x_4808_ = lean_nat_dec_eq(v___x_4806_, v___x_4807_);
lean_dec(v___x_4807_);
if (v___x_4808_ == 0)
{
lean_object* v___x_4809_; lean_object* v___x_4810_; 
lean_dec_ref(v_xs_4800_);
lean_dec_ref(v_type_u2080_4799_);
lean_dec_ref(v_perm_4798_);
v___x_4809_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4810_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4809_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_);
return v___x_4810_;
}
else
{
lean_object* v_mask_4811_; lean_object* v___x_4812_; 
v_mask_4811_ = lean_array_to_list(v_perm_4798_);
v___x_4812_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4800_, v_mask_4811_, v_type_u2080_4799_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_);
return v___x_4812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4813_, lean_object* v_type_u2080_4814_, lean_object* v_xs_4815_, lean_object* v_a_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_, lean_object* v_a_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4813_, v_type_u2080_4814_, v_xs_4815_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_);
lean_dec(v_a_4819_);
lean_dec_ref(v_a_4818_);
lean_dec(v_a_4817_);
lean_dec_ref(v_a_4816_);
return v_res_4821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg(lean_object* v_e_4822_, lean_object* v_maxFVars_4823_, lean_object* v_k_4824_, uint8_t v_cleanupAnnotations_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_){
_start:
{
lean_object* v___f_4831_; uint8_t v___x_4832_; uint8_t v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___f_4831_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4831_, 0, v_k_4824_);
v___x_4832_ = 1;
v___x_4833_ = 0;
v___x_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4834_, 0, v_maxFVars_4823_);
v___x_4835_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4822_, v___x_4832_, v___x_4833_, v___x_4832_, v___x_4833_, v___x_4834_, v___f_4831_, v_cleanupAnnotations_4825_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_);
lean_dec_ref(v___x_4834_);
if (lean_obj_tag(v___x_4835_) == 0)
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
v_a_4836_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4835_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4835_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4839_ == 0)
{
v___x_4841_ = v___x_4838_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
v_a_4844_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4835_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4835_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg___boxed(lean_object* v_e_4852_, lean_object* v_maxFVars_4853_, lean_object* v_k_4854_, lean_object* v_cleanupAnnotations_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4861_; lean_object* v_res_4862_; 
v_cleanupAnnotations_boxed_4861_ = lean_unbox(v_cleanupAnnotations_4855_);
v_res_4862_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg(v_e_4852_, v_maxFVars_4853_, v_k_4854_, v_cleanupAnnotations_boxed_4861_, v___y_4856_, v___y_4857_, v___y_4858_, v___y_4859_);
lean_dec(v___y_4859_);
lean_dec_ref(v___y_4858_);
lean_dec(v___y_4857_);
lean_dec_ref(v___y_4856_);
return v_res_4862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_00_u03b1_4863_, lean_object* v_e_4864_, lean_object* v_maxFVars_4865_, lean_object* v_k_4866_, uint8_t v_cleanupAnnotations_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_){
_start:
{
lean_object* v___x_4873_; 
v___x_4873_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg(v_e_4864_, v_maxFVars_4865_, v_k_4866_, v_cleanupAnnotations_4867_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
return v___x_4873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_00_u03b1_4874_, lean_object* v_e_4875_, lean_object* v_maxFVars_4876_, lean_object* v_k_4877_, lean_object* v_cleanupAnnotations_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4884_; lean_object* v_res_4885_; 
v_cleanupAnnotations_boxed_4884_ = lean_unbox(v_cleanupAnnotations_4878_);
v_res_4885_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_00_u03b1_4874_, v_e_4875_, v_maxFVars_4876_, v_k_4877_, v_cleanupAnnotations_boxed_4884_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_);
lean_dec(v___y_4882_);
lean_dec_ref(v___y_4881_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
return v_res_4885_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___y_4886_){
_start:
{
if (lean_obj_tag(v___y_4886_) == 0)
{
uint8_t v___x_4887_; 
v___x_4887_ = 1;
return v___x_4887_;
}
else
{
uint8_t v___x_4888_; 
v___x_4888_ = 0;
return v___x_4888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___y_4889_){
_start:
{
uint8_t v_res_4890_; lean_object* v_r_4891_; 
v_res_4890_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___y_4889_);
lean_dec(v___y_4889_);
v_r_4891_ = lean_box(v_res_4890_);
return v_r_4891_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__2(void){
_start:
{
lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4894_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__1));
v___x_4895_ = lean_unsigned_to_nat(12u);
v___x_4896_ = lean_unsigned_to_nat(376u);
v___x_4897_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__0));
v___x_4898_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4899_ = l_mkPanicMessageWithDecl(v___x_4898_, v___x_4897_, v___x_4896_, v___x_4895_, v___x_4894_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___boxed(lean_object* v___x_4901_, lean_object* v_xs_4902_, lean_object* v_tail_4903_, lean_object* v___x_4904_, lean_object* v___x_4905_, lean_object* v_ys_4906_, lean_object* v_value_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
uint8_t v___x_1280__boxed_4913_; uint8_t v___x_1281__boxed_4914_; lean_object* v_res_4915_; 
v___x_1280__boxed_4913_ = lean_unbox(v___x_4904_);
v___x_1281__boxed_4914_ = lean_unbox(v___x_4905_);
v_res_4915_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1(v___x_4901_, v_xs_4902_, v_tail_4903_, v___x_1280__boxed_4913_, v___x_1281__boxed_4914_, v_ys_4906_, v_value_4907_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
lean_dec(v___y_4911_);
lean_dec_ref(v___y_4910_);
lean_dec(v___y_4909_);
lean_dec_ref(v___y_4908_);
lean_dec_ref(v_ys_4906_);
lean_dec(v___x_4901_);
return v_res_4915_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__1(void){
_start:
{
lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___x_4916_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4917_ = lean_unsigned_to_nat(8u);
v___x_4918_ = lean_unsigned_to_nat(368u);
v___x_4919_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__0));
v___x_4920_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4921_ = l_mkPanicMessageWithDecl(v___x_4920_, v___x_4919_, v___x_4918_, v___x_4917_, v___x_4916_);
return v___x_4921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4922_, lean_object* v_x_4923_, lean_object* v_x_4924_, lean_object* v_a_4925_, lean_object* v_a_4926_, lean_object* v_a_4927_, lean_object* v_a_4928_){
_start:
{
if (lean_obj_tag(v_x_4923_) == 0)
{
lean_object* v___x_4930_; 
lean_dec_ref(v_xs_4922_);
v___x_4930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4930_, 0, v_x_4924_);
return v___x_4930_;
}
else
{
lean_object* v_head_4931_; 
v_head_4931_ = lean_ctor_get(v_x_4923_, 0);
if (lean_obj_tag(v_head_4931_) == 0)
{
lean_object* v_tail_4932_; lean_object* v___f_4933_; uint8_t v___x_4934_; 
v_tail_4932_ = lean_ctor_get(v_x_4923_, 1);
lean_inc_n(v_tail_4932_, 2);
lean_dec_ref(v_x_4923_);
v___f_4933_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0));
v___x_4934_ = l_List_all___redArg(v_tail_4932_, v___f_4933_);
if (v___x_4934_ == 0)
{
uint8_t v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___f_4939_; lean_object* v___x_4940_; 
v___x_4935_ = 1;
v___x_4936_ = lean_unsigned_to_nat(1u);
v___x_4937_ = lean_box(v___x_4934_);
v___x_4938_ = lean_box(v___x_4935_);
v___f_4939_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___boxed), 12, 5);
lean_closure_set(v___f_4939_, 0, v___x_4936_);
lean_closure_set(v___f_4939_, 1, v_xs_4922_);
lean_closure_set(v___f_4939_, 2, v_tail_4932_);
lean_closure_set(v___f_4939_, 3, v___x_4937_);
lean_closure_set(v___f_4939_, 4, v___x_4938_);
v___x_4940_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___redArg(v_x_4924_, v___x_4936_, v___f_4939_, v___x_4934_, v_a_4925_, v_a_4926_, v_a_4927_, v_a_4928_);
return v___x_4940_;
}
else
{
lean_object* v___x_4941_; 
lean_dec(v_tail_4932_);
lean_dec_ref(v_xs_4922_);
v___x_4941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4941_, 0, v_x_4924_);
return v___x_4941_;
}
}
else
{
lean_object* v_tail_4942_; lean_object* v_val_4943_; lean_object* v___x_4944_; uint8_t v___x_4945_; 
lean_inc_ref(v_head_4931_);
v_tail_4942_ = lean_ctor_get(v_x_4923_, 1);
lean_inc(v_tail_4942_);
lean_dec_ref(v_x_4923_);
v_val_4943_ = lean_ctor_get(v_head_4931_, 0);
lean_inc(v_val_4943_);
lean_dec_ref(v_head_4931_);
v___x_4944_ = lean_array_get_size(v_xs_4922_);
v___x_4945_ = lean_nat_dec_lt(v_val_4943_, v___x_4944_);
if (v___x_4945_ == 0)
{
lean_object* v___x_4946_; lean_object* v___x_4947_; 
lean_dec(v_val_4943_);
lean_dec(v_tail_4942_);
lean_dec_ref(v_x_4924_);
lean_dec_ref(v_xs_4922_);
v___x_4946_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__1);
v___x_4947_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4946_, v_a_4925_, v_a_4926_, v_a_4927_, v_a_4928_);
return v___x_4947_;
}
else
{
lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; 
v___x_4948_ = l_Lean_instInhabitedExpr;
v___x_4949_ = lean_array_get_borrowed(v___x_4948_, v_xs_4922_, v_val_4943_);
lean_dec(v_val_4943_);
v___x_4950_ = lean_unsigned_to_nat(1u);
v___x_4951_ = lean_mk_empty_array_with_capacity(v___x_4950_);
lean_inc(v___x_4949_);
v___x_4952_ = lean_array_push(v___x_4951_, v___x_4949_);
v___x_4953_ = l_Lean_Meta_instantiateLambda(v_x_4924_, v___x_4952_, v_a_4925_, v_a_4926_, v_a_4927_, v_a_4928_);
lean_dec_ref(v___x_4952_);
if (lean_obj_tag(v___x_4953_) == 0)
{
lean_object* v_a_4954_; 
v_a_4954_ = lean_ctor_get(v___x_4953_, 0);
lean_inc(v_a_4954_);
lean_dec_ref(v___x_4953_);
v_x_4923_ = v_tail_4942_;
v_x_4924_ = v_a_4954_;
goto _start;
}
else
{
lean_dec(v_tail_4942_);
lean_dec_ref(v_xs_4922_);
return v___x_4953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1(lean_object* v___x_4956_, lean_object* v_xs_4957_, lean_object* v_tail_4958_, uint8_t v___x_4959_, uint8_t v___x_4960_, lean_object* v_ys_4961_, lean_object* v_value_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_){
_start:
{
lean_object* v___x_4968_; uint8_t v___x_4969_; 
v___x_4968_ = lean_array_get_size(v_ys_4961_);
v___x_4969_ = lean_nat_dec_eq(v___x_4968_, v___x_4956_);
if (v___x_4969_ == 0)
{
lean_object* v___x_4970_; lean_object* v___x_4971_; 
lean_dec_ref(v_value_4962_);
lean_dec(v_tail_4958_);
lean_dec_ref(v_xs_4957_);
v___x_4970_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__1___closed__2);
v___x_4971_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4970_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
return v___x_4971_;
}
else
{
lean_object* v___x_4972_; 
v___x_4972_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4957_, v_tail_4958_, v_value_4962_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; uint8_t v___x_4974_; lean_object* v___x_4975_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc(v_a_4973_);
lean_dec_ref(v___x_4972_);
v___x_4974_ = 1;
v___x_4975_ = l_Lean_Meta_mkLambdaFVars(v_ys_4961_, v_a_4973_, v___x_4959_, v___x_4960_, v___x_4959_, v___x_4960_, v___x_4974_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
return v___x_4975_;
}
else
{
return v___x_4972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_4976_, lean_object* v_x_4977_, lean_object* v_x_4978_, lean_object* v_a_4979_, lean_object* v_a_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_){
_start:
{
lean_object* v_res_4984_; 
v_res_4984_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4976_, v_x_4977_, v_x_4978_, v_a_4979_, v_a_4980_, v_a_4981_, v_a_4982_);
lean_dec(v_a_4982_);
lean_dec_ref(v_a_4981_);
lean_dec(v_a_4980_);
lean_dec_ref(v_a_4979_);
return v_res_4984_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; 
v___x_4986_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4987_ = lean_unsigned_to_nat(2u);
v___x_4988_ = lean_unsigned_to_nat(362u);
v___x_4989_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0));
v___x_4990_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_4991_ = l_mkPanicMessageWithDecl(v___x_4990_, v___x_4989_, v___x_4988_, v___x_4987_, v___x_4986_);
return v___x_4991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_4992_, lean_object* v_value_u2080_4993_, lean_object* v_xs_4994_, lean_object* v_a_4995_, lean_object* v_a_4996_, lean_object* v_a_4997_, lean_object* v_a_4998_){
_start:
{
lean_object* v___x_5000_; lean_object* v___x_5001_; uint8_t v___x_5002_; 
v___x_5000_ = lean_array_get_size(v_xs_4994_);
v___x_5001_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4992_);
v___x_5002_ = lean_nat_dec_eq(v___x_5000_, v___x_5001_);
lean_dec(v___x_5001_);
if (v___x_5002_ == 0)
{
lean_object* v___x_5003_; lean_object* v___x_5004_; 
lean_dec_ref(v_xs_4994_);
lean_dec_ref(v_value_u2080_4993_);
lean_dec_ref(v_perm_4992_);
v___x_5003_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_5004_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_5003_, v_a_4995_, v_a_4996_, v_a_4997_, v_a_4998_);
return v___x_5004_;
}
else
{
lean_object* v_mask_5005_; lean_object* v___x_5006_; 
v_mask_5005_ = lean_array_to_list(v_perm_4992_);
v___x_5006_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4994_, v_mask_5005_, v_value_u2080_4993_, v_a_4995_, v_a_4996_, v_a_4997_, v_a_4998_);
return v___x_5006_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_5007_, lean_object* v_value_u2080_5008_, lean_object* v_xs_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_, lean_object* v_a_5013_, lean_object* v_a_5014_){
_start:
{
lean_object* v_res_5015_; 
v_res_5015_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_5007_, v_value_u2080_5008_, v_xs_5009_, v_a_5010_, v_a_5011_, v_a_5012_, v_a_5013_);
lean_dec(v_a_5013_);
lean_dec_ref(v_a_5012_);
lean_dec(v_a_5011_);
lean_dec_ref(v_a_5010_);
return v_res_5015_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_5023_; 
v___x_5023_ = l_Array_instInhabited(lean_box(0));
return v___x_5023_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_5024_){
_start:
{
lean_object* v___f_5025_; lean_object* v___f_5026_; lean_object* v___f_5027_; lean_object* v___f_5028_; lean_object* v___f_5029_; lean_object* v___f_5030_; lean_object* v___f_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; 
v___f_5025_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5026_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5027_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5028_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5029_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5030_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5031_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5032_, 0, v___f_5025_);
lean_ctor_set(v___x_5032_, 1, v___f_5026_);
v___x_5033_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5033_, 0, v___x_5032_);
lean_ctor_set(v___x_5033_, 1, v___f_5027_);
lean_ctor_set(v___x_5033_, 2, v___f_5028_);
lean_ctor_set(v___x_5033_, 3, v___f_5029_);
lean_ctor_set(v___x_5033_, 4, v___f_5030_);
v___x_5034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5033_);
lean_ctor_set(v___x_5034_, 1, v___f_5031_);
v___x_5035_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7);
v___x_5036_ = l_instInhabitedOfMonad___redArg(v___x_5034_, v___x_5035_);
v___x_5037_ = lean_panic_fn_borrowed(v___x_5036_, v_msg_5024_);
lean_dec(v___x_5036_);
return v___x_5037_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_5038_, lean_object* v_msg_5039_){
_start:
{
lean_object* v___x_5040_; 
v___x_5040_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_5039_);
return v___x_5040_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5043_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1));
v___x_5044_ = lean_unsigned_to_nat(8u);
v___x_5045_ = lean_unsigned_to_nat(394u);
v___x_5046_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0));
v___x_5047_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5048_ = l_mkPanicMessageWithDecl(v___x_5047_, v___x_5046_, v___x_5045_, v___x_5044_, v___x_5043_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_5049_, lean_object* v_x_5050_){
_start:
{
if (lean_obj_tag(v_x_5049_) == 0)
{
return v_x_5050_;
}
else
{
lean_object* v_head_5051_; lean_object* v_fst_5052_; 
v_head_5051_ = lean_ctor_get(v_x_5049_, 0);
v_fst_5052_ = lean_ctor_get(v_head_5051_, 0);
if (lean_obj_tag(v_fst_5052_) == 0)
{
lean_object* v_tail_5053_; 
v_tail_5053_ = lean_ctor_get(v_x_5049_, 1);
lean_inc(v_tail_5053_);
lean_dec_ref(v_x_5049_);
v_x_5049_ = v_tail_5053_;
goto _start;
}
else
{
lean_object* v_tail_5055_; lean_object* v_snd_5056_; lean_object* v_val_5057_; lean_object* v___x_5058_; uint8_t v___x_5059_; 
lean_inc_ref(v_fst_5052_);
lean_inc(v_head_5051_);
v_tail_5055_ = lean_ctor_get(v_x_5049_, 1);
lean_inc(v_tail_5055_);
lean_dec_ref(v_x_5049_);
v_snd_5056_ = lean_ctor_get(v_head_5051_, 1);
lean_inc(v_snd_5056_);
lean_dec(v_head_5051_);
v_val_5057_ = lean_ctor_get(v_fst_5052_, 0);
lean_inc(v_val_5057_);
lean_dec_ref(v_fst_5052_);
v___x_5058_ = lean_array_get_size(v_x_5050_);
v___x_5059_ = lean_nat_dec_lt(v_val_5057_, v___x_5058_);
if (v___x_5059_ == 0)
{
lean_object* v___x_5060_; lean_object* v___x_5061_; 
lean_dec(v_val_5057_);
lean_dec(v_snd_5056_);
lean_dec(v_tail_5055_);
lean_dec_ref(v_x_5050_);
v___x_5060_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_5061_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5060_);
return v___x_5061_;
}
else
{
lean_object* v___x_5062_; 
v___x_5062_ = lean_array_set(v_x_5050_, v_val_5057_, v_snd_5056_);
lean_dec(v_val_5057_);
v_x_5049_ = v_tail_5055_;
v_x_5050_ = v___x_5062_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_5064_, lean_object* v_x_5065_, lean_object* v_x_5066_){
_start:
{
lean_object* v___x_5067_; 
v___x_5067_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_5065_, v_x_5066_);
return v___x_5067_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; 
v___x_5070_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1));
v___x_5071_ = lean_unsigned_to_nat(2u);
v___x_5072_ = lean_unsigned_to_nat(384u);
v___x_5073_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0));
v___x_5074_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5075_ = l_mkPanicMessageWithDecl(v___x_5074_, v___x_5073_, v___x_5072_, v___x_5071_, v___x_5070_);
return v___x_5075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_5078_, lean_object* v_xs_5079_){
_start:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; uint8_t v___x_5082_; 
v___x_5080_ = lean_array_get_size(v_xs_5079_);
v___x_5081_ = lean_array_get_size(v_perm_5078_);
v___x_5082_ = lean_nat_dec_eq(v___x_5080_, v___x_5081_);
if (v___x_5082_ == 0)
{
lean_object* v___x_5083_; lean_object* v___x_5084_; 
v___x_5083_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_5084_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5083_);
return v___x_5084_;
}
else
{
lean_object* v___x_5085_; uint8_t v___x_5086_; 
v___x_5085_ = lean_unsigned_to_nat(0u);
v___x_5086_ = lean_nat_dec_eq(v___x_5080_, v___x_5085_);
if (v___x_5086_ == 0)
{
lean_object* v_dummy_5087_; lean_object* v___x_5088_; lean_object* v_ys_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; 
v_dummy_5087_ = lean_array_fget_borrowed(v_xs_5079_, v___x_5085_);
v___x_5088_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5078_);
lean_inc(v_dummy_5087_);
v_ys_5089_ = lean_mk_array(v___x_5088_, v_dummy_5087_);
v___x_5090_ = l_Array_zip___redArg(v_perm_5078_, v_xs_5079_);
v___x_5091_ = lean_array_to_list(v___x_5090_);
v___x_5092_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5091_, v_ys_5089_);
return v___x_5092_;
}
else
{
lean_object* v___x_5093_; 
v___x_5093_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
return v___x_5093_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5094_, lean_object* v_xs_5095_){
_start:
{
lean_object* v_res_5096_; 
v_res_5096_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5094_, v_xs_5095_);
lean_dec_ref(v_xs_5095_);
lean_dec_ref(v_perm_5094_);
return v_res_5096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5097_, lean_object* v_perm_5098_, lean_object* v_xs_5099_){
_start:
{
lean_object* v___x_5100_; 
v___x_5100_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5098_, v_xs_5099_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5101_, lean_object* v_perm_5102_, lean_object* v_xs_5103_){
_start:
{
lean_object* v_res_5104_; 
v_res_5104_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5101_, v_perm_5102_, v_xs_5103_);
lean_dec_ref(v_xs_5103_);
lean_dec_ref(v_perm_5102_);
return v_res_5104_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5105_, lean_object* v_upperBound_5106_, lean_object* v_perm_5107_, lean_object* v_a_5108_, lean_object* v_b_5109_){
_start:
{
lean_object* v_a_5111_; uint8_t v___x_5118_; 
v___x_5118_ = lean_nat_dec_lt(v_a_5108_, v_upperBound_5106_);
if (v___x_5118_ == 0)
{
lean_dec(v_a_5108_);
return v_b_5109_;
}
else
{
lean_object* v___x_5119_; uint8_t v___x_5120_; 
v___x_5119_ = lean_array_get_size(v_perm_5107_);
v___x_5120_ = lean_nat_dec_lt(v_a_5108_, v___x_5119_);
if (v___x_5120_ == 0)
{
goto v___jp_5115_;
}
else
{
lean_object* v___x_5121_; 
v___x_5121_ = lean_array_fget_borrowed(v_perm_5107_, v_a_5108_);
if (lean_obj_tag(v___x_5121_) == 0)
{
goto v___jp_5115_;
}
else
{
v_a_5111_ = v_b_5109_;
goto v___jp_5110_;
}
}
}
v___jp_5110_:
{
lean_object* v___x_5112_; lean_object* v___x_5113_; 
v___x_5112_ = lean_unsigned_to_nat(1u);
v___x_5113_ = lean_nat_add(v_a_5108_, v___x_5112_);
lean_dec(v_a_5108_);
v_a_5108_ = v___x_5113_;
v_b_5109_ = v_a_5111_;
goto _start;
}
v___jp_5115_:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; 
v___x_5116_ = lean_array_fget_borrowed(v_xs_5105_, v_a_5108_);
lean_inc(v___x_5116_);
v___x_5117_ = lean_array_push(v_b_5109_, v___x_5116_);
v_a_5111_ = v___x_5117_;
goto v___jp_5110_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5122_, lean_object* v_upperBound_5123_, lean_object* v_perm_5124_, lean_object* v_a_5125_, lean_object* v_b_5126_){
_start:
{
lean_object* v_res_5127_; 
v_res_5127_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5122_, v_upperBound_5123_, v_perm_5124_, v_a_5125_, v_b_5126_);
lean_dec_ref(v_perm_5124_);
lean_dec(v_upperBound_5123_);
lean_dec_ref(v_xs_5122_);
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5128_, lean_object* v_xs_5129_){
_start:
{
lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v_ys_5132_; lean_object* v___x_5133_; 
v___x_5130_ = lean_array_get_size(v_xs_5129_);
v___x_5131_ = lean_unsigned_to_nat(0u);
v_ys_5132_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5133_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5129_, v___x_5130_, v_perm_5128_, v___x_5131_, v_ys_5132_);
return v___x_5133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5134_, lean_object* v_xs_5135_){
_start:
{
lean_object* v_res_5136_; 
v_res_5136_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5134_, v_xs_5135_);
lean_dec_ref(v_xs_5135_);
lean_dec_ref(v_perm_5134_);
return v_res_5136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5137_, lean_object* v_perm_5138_, lean_object* v_xs_5139_){
_start:
{
lean_object* v___x_5140_; 
v___x_5140_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5138_, v_xs_5139_);
return v___x_5140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5141_, lean_object* v_perm_5142_, lean_object* v_xs_5143_){
_start:
{
lean_object* v_res_5144_; 
v_res_5144_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5141_, v_perm_5142_, v_xs_5143_);
lean_dec_ref(v_xs_5143_);
lean_dec_ref(v_perm_5142_);
return v_res_5144_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5145_, lean_object* v_xs_5146_, lean_object* v_upperBound_5147_, lean_object* v_perm_5148_, lean_object* v_inst_5149_, lean_object* v_R_5150_, lean_object* v_a_5151_, lean_object* v_b_5152_, lean_object* v_c_5153_){
_start:
{
lean_object* v___x_5154_; 
v___x_5154_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5146_, v_upperBound_5147_, v_perm_5148_, v_a_5151_, v_b_5152_);
return v___x_5154_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5155_, lean_object* v_xs_5156_, lean_object* v_upperBound_5157_, lean_object* v_perm_5158_, lean_object* v_inst_5159_, lean_object* v_R_5160_, lean_object* v_a_5161_, lean_object* v_b_5162_, lean_object* v_c_5163_){
_start:
{
lean_object* v_res_5164_; 
v_res_5164_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5155_, v_xs_5156_, v_upperBound_5157_, v_perm_5158_, v_inst_5159_, v_R_5160_, v_a_5161_, v_b_5162_, v_c_5163_);
lean_dec_ref(v_perm_5158_);
lean_dec(v_upperBound_5157_);
lean_dec_ref(v_xs_5156_);
return v_res_5164_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(lean_object* v_msg_5165_){
_start:
{
lean_object* v___x_5166_; lean_object* v___x_5167_; 
v___x_5166_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7);
v___x_5167_ = lean_panic_fn_borrowed(v___x_5166_, v_msg_5165_);
return v___x_5167_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_00_u03b1_5168_, lean_object* v_msg_5169_){
_start:
{
lean_object* v___x_5170_; 
v___x_5170_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v_msg_5169_);
return v___x_5170_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_as_5171_, size_t v_i_5172_, size_t v_stop_5173_){
_start:
{
uint8_t v___x_5174_; 
v___x_5174_ = lean_usize_dec_eq(v_i_5172_, v_stop_5173_);
if (v___x_5174_ == 0)
{
uint8_t v___x_5175_; lean_object* v___x_5176_; 
v___x_5175_ = 1;
v___x_5176_ = lean_array_uget_borrowed(v_as_5171_, v_i_5172_);
if (lean_obj_tag(v___x_5176_) == 0)
{
if (v___x_5174_ == 0)
{
size_t v___x_5177_; size_t v___x_5178_; 
v___x_5177_ = ((size_t)1ULL);
v___x_5178_ = lean_usize_add(v_i_5172_, v___x_5177_);
v_i_5172_ = v___x_5178_;
goto _start;
}
else
{
return v___x_5175_;
}
}
else
{
return v___x_5175_;
}
}
else
{
uint8_t v___x_5180_; 
v___x_5180_ = 0;
return v___x_5180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___boxed(lean_object* v_as_5181_, lean_object* v_i_5182_, lean_object* v_stop_5183_){
_start:
{
size_t v_i_boxed_5184_; size_t v_stop_boxed_5185_; uint8_t v_res_5186_; lean_object* v_r_5187_; 
v_i_boxed_5184_ = lean_unbox_usize(v_i_5182_);
lean_dec(v_i_5182_);
v_stop_boxed_5185_ = lean_unbox_usize(v_stop_5183_);
lean_dec(v_stop_5183_);
v_res_5186_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(v_as_5181_, v_i_boxed_5184_, v_stop_boxed_5185_);
lean_dec_ref(v_as_5181_);
v_r_5187_ = lean_box(v_res_5186_);
return v_r_5187_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
v___x_5190_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1));
v___x_5191_ = lean_unsigned_to_nat(12u);
v___x_5192_ = lean_unsigned_to_nat(433u);
v___x_5193_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5194_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5195_ = l_mkPanicMessageWithDecl(v___x_5194_, v___x_5193_, v___x_5192_, v___x_5191_, v___x_5190_);
return v___x_5195_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; 
v___x_5197_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3));
v___x_5198_ = lean_unsigned_to_nat(10u);
v___x_5199_ = lean_unsigned_to_nat(425u);
v___x_5200_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5201_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5202_ = l_mkPanicMessageWithDecl(v___x_5201_, v___x_5200_, v___x_5199_, v___x_5198_, v___x_5197_);
return v___x_5202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5203_, lean_object* v_fixedArgs_5204_, lean_object* v_varyingArgs_5205_, lean_object* v_i_5206_, lean_object* v_j_5207_, lean_object* v_xs_5208_){
_start:
{
lean_object* v_lower_5210_; lean_object* v_upper_5211_; lean_object* v___y_5216_; lean_object* v___y_5217_; lean_object* v___y_5218_; lean_object* v_lower_5226_; lean_object* v_upper_5227_; lean_object* v___x_5235_; uint8_t v___x_5236_; 
v___x_5235_ = lean_array_get_size(v_perm_5203_);
v___x_5236_ = lean_nat_dec_lt(v_i_5206_, v___x_5235_);
if (v___x_5236_ == 0)
{
lean_object* v___x_5237_; lean_object* v___x_5238_; uint8_t v___x_5239_; 
lean_dec(v_i_5206_);
lean_dec_ref(v_perm_5203_);
v___x_5237_ = lean_unsigned_to_nat(0u);
v___x_5238_ = lean_array_get_size(v_varyingArgs_5205_);
v___x_5239_ = lean_nat_dec_le(v_j_5207_, v___x_5237_);
if (v___x_5239_ == 0)
{
v_lower_5210_ = v_j_5207_;
v_upper_5211_ = v___x_5238_;
goto v___jp_5209_;
}
else
{
lean_dec(v_j_5207_);
v_lower_5210_ = v___x_5237_;
v_upper_5211_ = v___x_5238_;
goto v___jp_5209_;
}
}
else
{
lean_object* v___x_5240_; 
v___x_5240_ = lean_array_fget_borrowed(v_perm_5203_, v_i_5206_);
if (lean_obj_tag(v___x_5240_) == 1)
{
lean_object* v_val_5241_; lean_object* v___x_5242_; uint8_t v___x_5243_; 
v_val_5241_ = lean_ctor_get(v___x_5240_, 0);
v___x_5242_ = lean_array_get_size(v_fixedArgs_5204_);
v___x_5243_ = lean_nat_dec_lt(v_val_5241_, v___x_5242_);
if (v___x_5243_ == 0)
{
lean_object* v___x_5244_; lean_object* v___x_5245_; 
lean_dec_ref(v_xs_5208_);
lean_dec(v_j_5207_);
lean_dec(v_i_5206_);
lean_dec_ref(v_varyingArgs_5205_);
lean_dec_ref(v_perm_5203_);
v___x_5244_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5245_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v___x_5244_);
return v___x_5245_;
}
else
{
lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; 
v___x_5246_ = lean_unsigned_to_nat(1u);
v___x_5247_ = lean_nat_add(v_i_5206_, v___x_5246_);
lean_dec(v_i_5206_);
v___x_5248_ = lean_array_fget_borrowed(v_fixedArgs_5204_, v_val_5241_);
lean_inc(v___x_5248_);
v___x_5249_ = lean_array_push(v_xs_5208_, v___x_5248_);
v_i_5206_ = v___x_5247_;
v_xs_5208_ = v___x_5249_;
goto _start;
}
}
else
{
lean_object* v___x_5251_; uint8_t v___x_5252_; 
v___x_5251_ = lean_array_get_size(v_varyingArgs_5205_);
v___x_5252_ = lean_nat_dec_lt(v_j_5207_, v___x_5251_);
if (v___x_5252_ == 0)
{
lean_object* v___x_5253_; uint8_t v___x_5254_; 
lean_dec(v_j_5207_);
lean_dec_ref(v_varyingArgs_5205_);
v___x_5253_ = lean_unsigned_to_nat(0u);
v___x_5254_ = lean_nat_dec_le(v_i_5206_, v___x_5253_);
if (v___x_5254_ == 0)
{
v_lower_5226_ = v_i_5206_;
v_upper_5227_ = v___x_5235_;
goto v___jp_5225_;
}
else
{
lean_dec(v_i_5206_);
v_lower_5226_ = v___x_5253_;
v_upper_5227_ = v___x_5235_;
goto v___jp_5225_;
}
}
else
{
lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; 
v___x_5255_ = lean_unsigned_to_nat(1u);
v___x_5256_ = lean_nat_add(v_i_5206_, v___x_5255_);
lean_dec(v_i_5206_);
v___x_5257_ = lean_nat_add(v_j_5207_, v___x_5255_);
v___x_5258_ = lean_array_fget_borrowed(v_varyingArgs_5205_, v_j_5207_);
lean_dec(v_j_5207_);
lean_inc(v___x_5258_);
v___x_5259_ = lean_array_push(v_xs_5208_, v___x_5258_);
v_i_5206_ = v___x_5256_;
v_j_5207_ = v___x_5257_;
v_xs_5208_ = v___x_5259_;
goto _start;
}
}
}
v___jp_5209_:
{
lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; 
v___x_5212_ = l_Array_toSubarray___redArg(v_varyingArgs_5205_, v_lower_5210_, v_upper_5211_);
v___x_5213_ = l_Subarray_copy___redArg(v___x_5212_);
v___x_5214_ = l_Array_append___redArg(v_xs_5208_, v___x_5213_);
lean_dec_ref(v___x_5213_);
return v___x_5214_;
}
v___jp_5215_:
{
uint8_t v___x_5219_; 
v___x_5219_ = lean_nat_dec_lt(v___y_5217_, v___y_5218_);
if (v___x_5219_ == 0)
{
lean_dec(v___y_5218_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
return v_xs_5208_;
}
else
{
size_t v___x_5220_; size_t v___x_5221_; uint8_t v___x_5222_; 
v___x_5220_ = lean_usize_of_nat(v___y_5217_);
lean_dec(v___y_5217_);
v___x_5221_ = lean_usize_of_nat(v___y_5218_);
lean_dec(v___y_5218_);
v___x_5222_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(v___y_5216_, v___x_5220_, v___x_5221_);
lean_dec_ref(v___y_5216_);
if (v___x_5222_ == 0)
{
return v_xs_5208_;
}
else
{
lean_object* v___x_5223_; lean_object* v___x_5224_; 
lean_dec_ref(v_xs_5208_);
v___x_5223_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5224_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v___x_5223_);
return v___x_5224_;
}
}
}
v___jp_5225_:
{
lean_object* v___x_5228_; lean_object* v_array_5229_; lean_object* v_start_5230_; lean_object* v_stop_5231_; uint8_t v___x_5232_; 
v___x_5228_ = l_Array_toSubarray___redArg(v_perm_5203_, v_lower_5226_, v_upper_5227_);
v_array_5229_ = lean_ctor_get(v___x_5228_, 0);
lean_inc_ref(v_array_5229_);
v_start_5230_ = lean_ctor_get(v___x_5228_, 1);
lean_inc(v_start_5230_);
v_stop_5231_ = lean_ctor_get(v___x_5228_, 2);
lean_inc(v_stop_5231_);
lean_dec_ref(v___x_5228_);
v___x_5232_ = lean_nat_dec_lt(v_start_5230_, v_stop_5231_);
if (v___x_5232_ == 0)
{
lean_dec(v_stop_5231_);
lean_dec(v_start_5230_);
lean_dec_ref(v_array_5229_);
return v_xs_5208_;
}
else
{
lean_object* v___x_5233_; uint8_t v___x_5234_; 
v___x_5233_ = lean_array_get_size(v_array_5229_);
v___x_5234_ = lean_nat_dec_le(v_stop_5231_, v___x_5233_);
if (v___x_5234_ == 0)
{
lean_dec(v_stop_5231_);
v___y_5216_ = v_array_5229_;
v___y_5217_ = v_start_5230_;
v___y_5218_ = v___x_5233_;
goto v___jp_5215_;
}
else
{
v___y_5216_ = v_array_5229_;
v___y_5217_ = v_start_5230_;
v___y_5218_ = v_stop_5231_;
goto v___jp_5215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5261_, lean_object* v_fixedArgs_5262_, lean_object* v_varyingArgs_5263_, lean_object* v_i_5264_, lean_object* v_j_5265_, lean_object* v_xs_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5261_, v_fixedArgs_5262_, v_varyingArgs_5263_, v_i_5264_, v_j_5265_, v_xs_5266_);
lean_dec_ref(v_fixedArgs_5262_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5268_, lean_object* v_perm_5269_, lean_object* v_fixedArgs_5270_, lean_object* v_varyingArgs_5271_, lean_object* v_i_5272_, lean_object* v_j_5273_, lean_object* v_xs_5274_){
_start:
{
lean_object* v___x_5275_; 
v___x_5275_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5269_, v_fixedArgs_5270_, v_varyingArgs_5271_, v_i_5272_, v_j_5273_, v_xs_5274_);
return v___x_5275_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5276_, lean_object* v_perm_5277_, lean_object* v_fixedArgs_5278_, lean_object* v_varyingArgs_5279_, lean_object* v_i_5280_, lean_object* v_j_5281_, lean_object* v_xs_5282_){
_start:
{
lean_object* v_res_5283_; 
v_res_5283_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5276_, v_perm_5277_, v_fixedArgs_5278_, v_varyingArgs_5279_, v_i_5280_, v_j_5281_, v_xs_5282_);
lean_dec_ref(v_fixedArgs_5278_);
return v_res_5283_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5286_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1));
v___x_5287_ = lean_unsigned_to_nat(2u);
v___x_5288_ = lean_unsigned_to_nat(416u);
v___x_5289_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0));
v___x_5290_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5291_ = l_mkPanicMessageWithDecl(v___x_5290_, v___x_5289_, v___x_5288_, v___x_5287_, v___x_5286_);
return v___x_5291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5292_, lean_object* v_fixedArgs_5293_, lean_object* v_varyingArgs_5294_){
_start:
{
lean_object* v___x_5295_; lean_object* v___x_5296_; uint8_t v___x_5297_; 
v___x_5295_ = lean_array_get_size(v_fixedArgs_5293_);
v___x_5296_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5292_);
v___x_5297_ = lean_nat_dec_eq(v___x_5295_, v___x_5296_);
lean_dec(v___x_5296_);
if (v___x_5297_ == 0)
{
lean_object* v___x_5298_; lean_object* v___x_5299_; 
lean_dec_ref(v_varyingArgs_5294_);
lean_dec_ref(v_perm_5292_);
v___x_5298_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5299_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v___x_5298_);
return v___x_5299_;
}
else
{
lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; 
v___x_5300_ = lean_unsigned_to_nat(0u);
v___x_5301_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5302_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5292_, v_fixedArgs_5293_, v_varyingArgs_5294_, v___x_5300_, v___x_5300_, v___x_5301_);
return v___x_5302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5303_, lean_object* v_fixedArgs_5304_, lean_object* v_varyingArgs_5305_){
_start:
{
lean_object* v_res_5306_; 
v_res_5306_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5303_, v_fixedArgs_5304_, v_varyingArgs_5305_);
lean_dec_ref(v_fixedArgs_5304_);
return v_res_5306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5307_, lean_object* v_perm_5308_, lean_object* v_fixedArgs_5309_, lean_object* v_varyingArgs_5310_){
_start:
{
lean_object* v___x_5311_; 
v___x_5311_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5308_, v_fixedArgs_5309_, v_varyingArgs_5310_);
return v___x_5311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5312_, lean_object* v_perm_5313_, lean_object* v_fixedArgs_5314_, lean_object* v_varyingArgs_5315_){
_start:
{
lean_object* v_res_5316_; 
v_res_5316_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5312_, v_perm_5313_, v_fixedArgs_5314_, v_varyingArgs_5315_);
lean_dec_ref(v_fixedArgs_5314_);
return v_res_5316_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5317_, lean_object* v_x_5318_){
_start:
{
if (lean_obj_tag(v_x_5317_) == 0)
{
if (lean_obj_tag(v_x_5318_) == 0)
{
uint8_t v___x_5319_; 
v___x_5319_ = 1;
return v___x_5319_;
}
else
{
uint8_t v___x_5320_; 
v___x_5320_ = 0;
return v___x_5320_;
}
}
else
{
if (lean_obj_tag(v_x_5318_) == 0)
{
uint8_t v___x_5321_; 
v___x_5321_ = 0;
return v___x_5321_;
}
else
{
lean_object* v_val_5322_; lean_object* v_val_5323_; uint8_t v___x_5324_; 
v_val_5322_ = lean_ctor_get(v_x_5317_, 0);
v_val_5323_ = lean_ctor_get(v_x_5318_, 0);
v___x_5324_ = lean_nat_dec_eq(v_val_5322_, v_val_5323_);
return v___x_5324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5325_, lean_object* v_x_5326_){
_start:
{
uint8_t v_res_5327_; lean_object* v_r_5328_; 
v_res_5327_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5325_, v_x_5326_);
lean_dec(v_x_5326_);
lean_dec(v_x_5325_);
v_r_5328_ = lean_box(v_res_5327_);
return v_r_5328_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5329_, lean_object* v_ys_5330_, lean_object* v_x_5331_){
_start:
{
lean_object* v_zero_5332_; uint8_t v_isZero_5333_; 
v_zero_5332_ = lean_unsigned_to_nat(0u);
v_isZero_5333_ = lean_nat_dec_eq(v_x_5331_, v_zero_5332_);
if (v_isZero_5333_ == 1)
{
lean_dec(v_x_5331_);
return v_isZero_5333_;
}
else
{
lean_object* v_one_5334_; lean_object* v_n_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; uint8_t v___x_5338_; 
v_one_5334_ = lean_unsigned_to_nat(1u);
v_n_5335_ = lean_nat_sub(v_x_5331_, v_one_5334_);
lean_dec(v_x_5331_);
v___x_5336_ = lean_array_fget_borrowed(v_xs_5329_, v_n_5335_);
v___x_5337_ = lean_array_fget_borrowed(v_ys_5330_, v_n_5335_);
v___x_5338_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5336_, v___x_5337_);
if (v___x_5338_ == 0)
{
lean_dec(v_n_5335_);
return v___x_5338_;
}
else
{
v_x_5331_ = v_n_5335_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5340_, lean_object* v_ys_5341_, lean_object* v_x_5342_){
_start:
{
uint8_t v_res_5343_; lean_object* v_r_5344_; 
v_res_5343_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5340_, v_ys_5341_, v_x_5342_);
lean_dec_ref(v_ys_5341_);
lean_dec_ref(v_xs_5340_);
v_r_5344_ = lean_box(v_res_5343_);
return v_r_5344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5345_, size_t v_i_5346_, lean_object* v_bs_5347_){
_start:
{
uint8_t v___x_5348_; 
v___x_5348_ = lean_usize_dec_lt(v_i_5346_, v_sz_5345_);
if (v___x_5348_ == 0)
{
return v_bs_5347_;
}
else
{
lean_object* v_v_5349_; lean_object* v___x_5350_; lean_object* v_bs_x27_5351_; lean_object* v___x_5352_; size_t v___x_5353_; size_t v___x_5354_; lean_object* v___x_5355_; 
v_v_5349_ = lean_array_uget(v_bs_5347_, v_i_5346_);
v___x_5350_ = lean_unsigned_to_nat(0u);
v_bs_x27_5351_ = lean_array_uset(v_bs_5347_, v_i_5346_, v___x_5350_);
v___x_5352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5352_, 0, v_v_5349_);
v___x_5353_ = ((size_t)1ULL);
v___x_5354_ = lean_usize_add(v_i_5346_, v___x_5353_);
v___x_5355_ = lean_array_uset(v_bs_x27_5351_, v_i_5346_, v___x_5352_);
v_i_5346_ = v___x_5354_;
v_bs_5347_ = v___x_5355_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5357_, lean_object* v_i_5358_, lean_object* v_bs_5359_){
_start:
{
size_t v_sz_boxed_5360_; size_t v_i_boxed_5361_; lean_object* v_res_5362_; 
v_sz_boxed_5360_ = lean_unbox_usize(v_sz_5357_);
lean_dec(v_sz_5357_);
v_i_boxed_5361_ = lean_unbox_usize(v_i_5358_);
lean_dec(v_i_5358_);
v_res_5362_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5360_, v_i_boxed_5361_, v_bs_5359_);
return v_res_5362_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5363_, lean_object* v_as_5364_, size_t v_i_5365_, size_t v_stop_5366_){
_start:
{
uint8_t v___x_5367_; 
v___x_5367_ = lean_usize_dec_eq(v_i_5365_, v_stop_5366_);
if (v___x_5367_ == 0)
{
lean_object* v_numFixed_5368_; uint8_t v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; size_t v_sz_5372_; size_t v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; uint8_t v___x_5381_; 
v_numFixed_5368_ = lean_ctor_get(v_fixedParamPerms_5363_, 0);
v___x_5369_ = 1;
v___x_5370_ = lean_array_uget_borrowed(v_as_5364_, v_i_5365_);
lean_inc(v_numFixed_5368_);
v___x_5371_ = l_Array_range(v_numFixed_5368_);
v_sz_5372_ = lean_array_size(v___x_5371_);
v___x_5373_ = ((size_t)0ULL);
v___x_5374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5372_, v___x_5373_, v___x_5371_);
v___x_5375_ = lean_array_get_size(v___x_5370_);
v___x_5376_ = lean_nat_sub(v___x_5375_, v_numFixed_5368_);
v___x_5377_ = lean_box(0);
v___x_5378_ = lean_mk_array(v___x_5376_, v___x_5377_);
v___x_5379_ = l_Array_append___redArg(v___x_5374_, v___x_5378_);
lean_dec_ref(v___x_5378_);
v___x_5380_ = lean_array_get_size(v___x_5379_);
v___x_5381_ = lean_nat_dec_eq(v___x_5375_, v___x_5380_);
if (v___x_5381_ == 0)
{
lean_dec_ref(v___x_5379_);
lean_dec_ref(v_fixedParamPerms_5363_);
return v___x_5369_;
}
else
{
uint8_t v___x_5382_; 
v___x_5382_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5370_, v___x_5379_, v___x_5375_);
lean_dec_ref(v___x_5379_);
if (v___x_5382_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5363_);
return v___x_5369_;
}
else
{
if (v___x_5367_ == 0)
{
size_t v___x_5383_; size_t v___x_5384_; 
v___x_5383_ = ((size_t)1ULL);
v___x_5384_ = lean_usize_add(v_i_5365_, v___x_5383_);
v_i_5365_ = v___x_5384_;
goto _start;
}
else
{
lean_dec_ref(v_fixedParamPerms_5363_);
return v___x_5369_;
}
}
}
}
else
{
uint8_t v___x_5386_; 
lean_dec_ref(v_fixedParamPerms_5363_);
v___x_5386_ = 0;
return v___x_5386_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5387_, lean_object* v_as_5388_, lean_object* v_i_5389_, lean_object* v_stop_5390_){
_start:
{
size_t v_i_boxed_5391_; size_t v_stop_boxed_5392_; uint8_t v_res_5393_; lean_object* v_r_5394_; 
v_i_boxed_5391_ = lean_unbox_usize(v_i_5389_);
lean_dec(v_i_5389_);
v_stop_boxed_5392_ = lean_unbox_usize(v_stop_5390_);
lean_dec(v_stop_5390_);
v_res_5393_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5387_, v_as_5388_, v_i_boxed_5391_, v_stop_boxed_5392_);
lean_dec_ref(v_as_5388_);
v_r_5394_ = lean_box(v_res_5393_);
return v_r_5394_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5395_){
_start:
{
lean_object* v_perms_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; uint8_t v___x_5399_; 
v_perms_5396_ = lean_ctor_get(v_fixedParamPerms_5395_, 1);
lean_inc_ref(v_perms_5396_);
v___x_5397_ = lean_unsigned_to_nat(0u);
v___x_5398_ = lean_array_get_size(v_perms_5396_);
v___x_5399_ = lean_nat_dec_lt(v___x_5397_, v___x_5398_);
if (v___x_5399_ == 0)
{
uint8_t v___x_5400_; 
lean_dec_ref(v_perms_5396_);
lean_dec_ref(v_fixedParamPerms_5395_);
v___x_5400_ = 1;
return v___x_5400_;
}
else
{
if (v___x_5399_ == 0)
{
lean_dec_ref(v_perms_5396_);
lean_dec_ref(v_fixedParamPerms_5395_);
return v___x_5399_;
}
else
{
size_t v___x_5401_; size_t v___x_5402_; uint8_t v___x_5403_; 
v___x_5401_ = ((size_t)0ULL);
v___x_5402_ = lean_usize_of_nat(v___x_5398_);
v___x_5403_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5395_, v_perms_5396_, v___x_5401_, v___x_5402_);
lean_dec_ref(v_perms_5396_);
if (v___x_5403_ == 0)
{
return v___x_5399_;
}
else
{
uint8_t v___x_5404_; 
v___x_5404_ = 0;
return v___x_5404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5405_){
_start:
{
uint8_t v_res_5406_; lean_object* v_r_5407_; 
v_res_5406_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5405_);
v_r_5407_ = lean_box(v_res_5406_);
return v_r_5407_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5408_, lean_object* v_ys_5409_, lean_object* v_hsz_5410_, lean_object* v_x_5411_, lean_object* v_x_5412_){
_start:
{
uint8_t v___x_5413_; 
v___x_5413_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5408_, v_ys_5409_, v_x_5411_);
return v___x_5413_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5414_, lean_object* v_ys_5415_, lean_object* v_hsz_5416_, lean_object* v_x_5417_, lean_object* v_x_5418_){
_start:
{
uint8_t v_res_5419_; lean_object* v_r_5420_; 
v_res_5419_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5414_, v_ys_5415_, v_hsz_5416_, v_x_5417_, v_x_5418_);
lean_dec_ref(v_ys_5415_);
lean_dec_ref(v_xs_5414_);
v_r_5420_ = lean_box(v_res_5419_);
return v_r_5420_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5421_; 
v___x_5421_ = l_Array_instInhabited(lean_box(0));
return v___x_5421_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5422_){
_start:
{
lean_object* v___f_5423_; lean_object* v___f_5424_; lean_object* v___f_5425_; lean_object* v___f_5426_; lean_object* v___f_5427_; lean_object* v___f_5428_; lean_object* v___f_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; 
v___f_5423_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5424_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5425_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5426_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5427_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5428_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5429_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5430_, 0, v___f_5423_);
lean_ctor_set(v___x_5430_, 1, v___f_5424_);
v___x_5431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5431_, 0, v___x_5430_);
lean_ctor_set(v___x_5431_, 1, v___f_5425_);
lean_ctor_set(v___x_5431_, 2, v___f_5426_);
lean_ctor_set(v___x_5431_, 3, v___f_5427_);
lean_ctor_set(v___x_5431_, 4, v___f_5428_);
v___x_5432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5432_, 0, v___x_5431_);
lean_ctor_set(v___x_5432_, 1, v___f_5429_);
v___x_5433_ = ((lean_object*)(l_Lean_Elab_instInhabitedFixedParamPerms_default));
v___x_5434_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5435_, 0, v___x_5434_);
lean_ctor_set(v___x_5435_, 1, v___x_5434_);
v___x_5436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5436_, 0, v___x_5433_);
lean_ctor_set(v___x_5436_, 1, v___x_5435_);
v___x_5437_ = l_instInhabitedOfMonad___redArg(v___x_5432_, v___x_5436_);
v___x_5438_ = lean_panic_fn_borrowed(v___x_5437_, v_msg_5422_);
lean_dec(v___x_5437_);
return v___x_5438_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5439_; 
v___x_5439_ = l_Array_instInhabited(lean_box(0));
return v___x_5439_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5440_){
_start:
{
lean_object* v___f_5441_; lean_object* v___f_5442_; lean_object* v___f_5443_; lean_object* v___f_5444_; lean_object* v___f_5445_; lean_object* v___f_5446_; lean_object* v___f_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___f_5441_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5442_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5443_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5444_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5445_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5446_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5447_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5448_, 0, v___f_5441_);
lean_ctor_set(v___x_5448_, 1, v___f_5442_);
v___x_5449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5448_);
lean_ctor_set(v___x_5449_, 1, v___f_5443_);
lean_ctor_set(v___x_5449_, 2, v___f_5444_);
lean_ctor_set(v___x_5449_, 3, v___f_5445_);
lean_ctor_set(v___x_5449_, 4, v___f_5446_);
v___x_5450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5450_, 0, v___x_5449_);
lean_ctor_set(v___x_5450_, 1, v___f_5447_);
v___x_5451_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5452_, 0, v___x_5451_);
v___x_5453_ = l_instInhabitedOfMonad___redArg(v___x_5450_, v___x_5452_);
v___x_5454_ = lean_panic_fn_borrowed(v___x_5453_, v_msg_5440_);
lean_dec(v___x_5453_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5455_, lean_object* v_a_5456_, lean_object* v_b_5457_){
_start:
{
lean_object* v_a_5459_; uint8_t v___x_5463_; 
v___x_5463_ = lean_nat_dec_lt(v_a_5456_, v_upperBound_5455_);
if (v___x_5463_ == 0)
{
lean_dec(v_a_5456_);
return v_b_5457_;
}
else
{
lean_object* v_snd_5464_; lean_object* v_snd_5465_; lean_object* v_snd_5466_; lean_object* v_snd_5467_; lean_object* v_fst_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5580_; 
v_snd_5464_ = lean_ctor_get(v_b_5457_, 1);
lean_inc(v_snd_5464_);
v_snd_5465_ = lean_ctor_get(v_snd_5464_, 1);
lean_inc(v_snd_5465_);
v_snd_5466_ = lean_ctor_get(v_snd_5465_, 1);
lean_inc(v_snd_5466_);
v_snd_5467_ = lean_ctor_get(v_snd_5466_, 1);
lean_inc(v_snd_5467_);
v_fst_5468_ = lean_ctor_get(v_b_5457_, 0);
v_isSharedCheck_5580_ = !lean_is_exclusive(v_b_5457_);
if (v_isSharedCheck_5580_ == 0)
{
lean_object* v_unused_5581_; 
v_unused_5581_ = lean_ctor_get(v_b_5457_, 1);
lean_dec(v_unused_5581_);
v___x_5470_ = v_b_5457_;
v_isShared_5471_ = v_isSharedCheck_5580_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_fst_5468_);
lean_dec(v_b_5457_);
v___x_5470_ = lean_box(0);
v_isShared_5471_ = v_isSharedCheck_5580_;
goto v_resetjp_5469_;
}
v_resetjp_5469_:
{
lean_object* v_fst_5472_; lean_object* v___x_5474_; uint8_t v_isShared_5475_; uint8_t v_isSharedCheck_5578_; 
v_fst_5472_ = lean_ctor_get(v_snd_5464_, 0);
v_isSharedCheck_5578_ = !lean_is_exclusive(v_snd_5464_);
if (v_isSharedCheck_5578_ == 0)
{
lean_object* v_unused_5579_; 
v_unused_5579_ = lean_ctor_get(v_snd_5464_, 1);
lean_dec(v_unused_5579_);
v___x_5474_ = v_snd_5464_;
v_isShared_5475_ = v_isSharedCheck_5578_;
goto v_resetjp_5473_;
}
else
{
lean_inc(v_fst_5472_);
lean_dec(v_snd_5464_);
v___x_5474_ = lean_box(0);
v_isShared_5475_ = v_isSharedCheck_5578_;
goto v_resetjp_5473_;
}
v_resetjp_5473_:
{
lean_object* v_fst_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5576_; 
v_fst_5476_ = lean_ctor_get(v_snd_5465_, 0);
v_isSharedCheck_5576_ = !lean_is_exclusive(v_snd_5465_);
if (v_isSharedCheck_5576_ == 0)
{
lean_object* v_unused_5577_; 
v_unused_5577_ = lean_ctor_get(v_snd_5465_, 1);
lean_dec(v_unused_5577_);
v___x_5478_ = v_snd_5465_;
v_isShared_5479_ = v_isSharedCheck_5576_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_fst_5476_);
lean_dec(v_snd_5465_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5576_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v_fst_5480_; lean_object* v___x_5482_; uint8_t v_isShared_5483_; uint8_t v_isSharedCheck_5574_; 
v_fst_5480_ = lean_ctor_get(v_snd_5466_, 0);
v_isSharedCheck_5574_ = !lean_is_exclusive(v_snd_5466_);
if (v_isSharedCheck_5574_ == 0)
{
lean_object* v_unused_5575_; 
v_unused_5575_ = lean_ctor_get(v_snd_5466_, 1);
lean_dec(v_unused_5575_);
v___x_5482_ = v_snd_5466_;
v_isShared_5483_ = v_isSharedCheck_5574_;
goto v_resetjp_5481_;
}
else
{
lean_inc(v_fst_5480_);
lean_dec(v_snd_5466_);
v___x_5482_ = lean_box(0);
v_isShared_5483_ = v_isSharedCheck_5574_;
goto v_resetjp_5481_;
}
v_resetjp_5481_:
{
lean_object* v_array_5484_; lean_object* v_start_5485_; lean_object* v_stop_5486_; uint8_t v___x_5487_; 
v_array_5484_ = lean_ctor_get(v_snd_5467_, 0);
v_start_5485_ = lean_ctor_get(v_snd_5467_, 1);
v_stop_5486_ = lean_ctor_get(v_snd_5467_, 2);
v___x_5487_ = lean_nat_dec_lt(v_start_5485_, v_stop_5486_);
if (v___x_5487_ == 0)
{
lean_object* v___x_5489_; 
lean_dec(v_a_5456_);
if (v_isShared_5483_ == 0)
{
v___x_5489_ = v___x_5482_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v_fst_5480_);
lean_ctor_set(v_reuseFailAlloc_5499_, 1, v_snd_5467_);
v___x_5489_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
lean_object* v___x_5491_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5489_);
v___x_5491_ = v___x_5478_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5498_; 
v_reuseFailAlloc_5498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5498_, 0, v_fst_5476_);
lean_ctor_set(v_reuseFailAlloc_5498_, 1, v___x_5489_);
v___x_5491_ = v_reuseFailAlloc_5498_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
lean_object* v___x_5493_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5491_);
v___x_5493_ = v___x_5474_;
goto v_reusejp_5492_;
}
else
{
lean_object* v_reuseFailAlloc_5497_; 
v_reuseFailAlloc_5497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5497_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5497_, 1, v___x_5491_);
v___x_5493_ = v_reuseFailAlloc_5497_;
goto v_reusejp_5492_;
}
v_reusejp_5492_:
{
lean_object* v___x_5495_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5493_);
v___x_5495_ = v___x_5470_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5496_; 
v_reuseFailAlloc_5496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5496_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5496_, 1, v___x_5493_);
v___x_5495_ = v_reuseFailAlloc_5496_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
return v___x_5495_;
}
}
}
}
}
else
{
lean_object* v___x_5501_; uint8_t v_isShared_5502_; uint8_t v_isSharedCheck_5570_; 
lean_inc(v_stop_5486_);
lean_inc(v_start_5485_);
lean_inc_ref(v_array_5484_);
v_isSharedCheck_5570_ = !lean_is_exclusive(v_snd_5467_);
if (v_isSharedCheck_5570_ == 0)
{
lean_object* v_unused_5571_; lean_object* v_unused_5572_; lean_object* v_unused_5573_; 
v_unused_5571_ = lean_ctor_get(v_snd_5467_, 2);
lean_dec(v_unused_5571_);
v_unused_5572_ = lean_ctor_get(v_snd_5467_, 1);
lean_dec(v_unused_5572_);
v_unused_5573_ = lean_ctor_get(v_snd_5467_, 0);
lean_dec(v_unused_5573_);
v___x_5501_ = v_snd_5467_;
v_isShared_5502_ = v_isSharedCheck_5570_;
goto v_resetjp_5500_;
}
else
{
lean_dec(v_snd_5467_);
v___x_5501_ = lean_box(0);
v_isShared_5502_ = v_isSharedCheck_5570_;
goto v_resetjp_5500_;
}
v_resetjp_5500_:
{
lean_object* v_array_5503_; lean_object* v_start_5504_; lean_object* v_stop_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5510_; 
v_array_5503_ = lean_ctor_get(v_fst_5480_, 0);
v_start_5504_ = lean_ctor_get(v_fst_5480_, 1);
v_stop_5505_ = lean_ctor_get(v_fst_5480_, 2);
v___x_5506_ = lean_array_fget(v_array_5484_, v_start_5485_);
v___x_5507_ = lean_unsigned_to_nat(1u);
v___x_5508_ = lean_nat_add(v_start_5485_, v___x_5507_);
lean_dec(v_start_5485_);
if (v_isShared_5502_ == 0)
{
lean_ctor_set(v___x_5501_, 1, v___x_5508_);
v___x_5510_ = v___x_5501_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5569_; 
v_reuseFailAlloc_5569_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5569_, 0, v_array_5484_);
lean_ctor_set(v_reuseFailAlloc_5569_, 1, v___x_5508_);
lean_ctor_set(v_reuseFailAlloc_5569_, 2, v_stop_5486_);
v___x_5510_ = v_reuseFailAlloc_5569_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
uint8_t v___x_5511_; 
v___x_5511_ = lean_nat_dec_lt(v_start_5504_, v_stop_5505_);
if (v___x_5511_ == 0)
{
lean_object* v___x_5513_; 
lean_dec(v___x_5506_);
lean_dec(v_a_5456_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5510_);
v___x_5513_ = v___x_5482_;
goto v_reusejp_5512_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_fst_5480_);
lean_ctor_set(v_reuseFailAlloc_5523_, 1, v___x_5510_);
v___x_5513_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5512_;
}
v_reusejp_5512_:
{
lean_object* v___x_5515_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5513_);
v___x_5515_ = v___x_5478_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v_fst_5476_);
lean_ctor_set(v_reuseFailAlloc_5522_, 1, v___x_5513_);
v___x_5515_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
lean_object* v___x_5517_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5515_);
v___x_5517_ = v___x_5474_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v___x_5515_);
v___x_5517_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
lean_object* v___x_5519_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5517_);
v___x_5519_ = v___x_5470_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v___x_5517_);
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
lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5565_; 
lean_inc(v_stop_5505_);
lean_inc(v_start_5504_);
lean_inc_ref(v_array_5503_);
v_isSharedCheck_5565_ = !lean_is_exclusive(v_fst_5480_);
if (v_isSharedCheck_5565_ == 0)
{
lean_object* v_unused_5566_; lean_object* v_unused_5567_; lean_object* v_unused_5568_; 
v_unused_5566_ = lean_ctor_get(v_fst_5480_, 2);
lean_dec(v_unused_5566_);
v_unused_5567_ = lean_ctor_get(v_fst_5480_, 1);
lean_dec(v_unused_5567_);
v_unused_5568_ = lean_ctor_get(v_fst_5480_, 0);
lean_dec(v_unused_5568_);
v___x_5525_ = v_fst_5480_;
v_isShared_5526_ = v_isSharedCheck_5565_;
goto v_resetjp_5524_;
}
else
{
lean_dec(v_fst_5480_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5565_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5530_; 
v___x_5527_ = lean_array_fget(v_array_5503_, v_start_5504_);
v___x_5528_ = lean_nat_add(v_start_5504_, v___x_5507_);
lean_dec(v_start_5504_);
if (v_isShared_5526_ == 0)
{
lean_ctor_set(v___x_5525_, 1, v___x_5528_);
v___x_5530_ = v___x_5525_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5564_; 
v_reuseFailAlloc_5564_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5564_, 0, v_array_5503_);
lean_ctor_set(v_reuseFailAlloc_5564_, 1, v___x_5528_);
lean_ctor_set(v_reuseFailAlloc_5564_, 2, v_stop_5505_);
v___x_5530_ = v_reuseFailAlloc_5564_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
uint8_t v___x_5531_; 
v___x_5531_ = lean_unbox(v___x_5527_);
lean_dec(v___x_5527_);
if (v___x_5531_ == 0)
{
lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5537_; 
v___x_5532_ = lean_array_get_size(v_fst_5476_);
v___x_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5532_);
v___x_5534_ = lean_array_push(v_fst_5468_, v___x_5533_);
v___x_5535_ = lean_array_push(v_fst_5476_, v___x_5506_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5510_);
lean_ctor_set(v___x_5482_, 0, v___x_5530_);
v___x_5537_ = v___x_5482_;
goto v_reusejp_5536_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v___x_5530_);
lean_ctor_set(v_reuseFailAlloc_5547_, 1, v___x_5510_);
v___x_5537_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5536_;
}
v_reusejp_5536_:
{
lean_object* v___x_5539_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5537_);
lean_ctor_set(v___x_5478_, 0, v___x_5535_);
v___x_5539_ = v___x_5478_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v___x_5535_);
lean_ctor_set(v_reuseFailAlloc_5546_, 1, v___x_5537_);
v___x_5539_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
lean_object* v___x_5541_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5539_);
v___x_5541_ = v___x_5474_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5545_; 
v_reuseFailAlloc_5545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5545_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5545_, 1, v___x_5539_);
v___x_5541_ = v_reuseFailAlloc_5545_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
lean_object* v___x_5543_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5541_);
lean_ctor_set(v___x_5470_, 0, v___x_5534_);
v___x_5543_ = v___x_5470_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5544_; 
v_reuseFailAlloc_5544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5544_, 0, v___x_5534_);
lean_ctor_set(v_reuseFailAlloc_5544_, 1, v___x_5541_);
v___x_5543_ = v_reuseFailAlloc_5544_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
v_a_5459_ = v___x_5543_;
goto v___jp_5458_;
}
}
}
}
}
else
{
lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5553_; 
v___x_5548_ = lean_box(0);
v___x_5549_ = lean_array_push(v_fst_5468_, v___x_5548_);
v___x_5550_ = l_Lean_Expr_fvarId_x21(v___x_5506_);
lean_dec(v___x_5506_);
v___x_5551_ = lean_array_push(v_fst_5472_, v___x_5550_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5510_);
lean_ctor_set(v___x_5482_, 0, v___x_5530_);
v___x_5553_ = v___x_5482_;
goto v_reusejp_5552_;
}
else
{
lean_object* v_reuseFailAlloc_5563_; 
v_reuseFailAlloc_5563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5563_, 0, v___x_5530_);
lean_ctor_set(v_reuseFailAlloc_5563_, 1, v___x_5510_);
v___x_5553_ = v_reuseFailAlloc_5563_;
goto v_reusejp_5552_;
}
v_reusejp_5552_:
{
lean_object* v___x_5555_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5553_);
v___x_5555_ = v___x_5478_;
goto v_reusejp_5554_;
}
else
{
lean_object* v_reuseFailAlloc_5562_; 
v_reuseFailAlloc_5562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5562_, 0, v_fst_5476_);
lean_ctor_set(v_reuseFailAlloc_5562_, 1, v___x_5553_);
v___x_5555_ = v_reuseFailAlloc_5562_;
goto v_reusejp_5554_;
}
v_reusejp_5554_:
{
lean_object* v___x_5557_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5555_);
lean_ctor_set(v___x_5474_, 0, v___x_5551_);
v___x_5557_ = v___x_5474_;
goto v_reusejp_5556_;
}
else
{
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v___x_5551_);
lean_ctor_set(v_reuseFailAlloc_5561_, 1, v___x_5555_);
v___x_5557_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5556_;
}
v_reusejp_5556_:
{
lean_object* v___x_5559_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5557_);
lean_ctor_set(v___x_5470_, 0, v___x_5549_);
v___x_5559_ = v___x_5470_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v___x_5549_);
lean_ctor_set(v_reuseFailAlloc_5560_, 1, v___x_5557_);
v___x_5559_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
v_a_5459_ = v___x_5559_;
goto v___jp_5458_;
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
}
}
}
}
}
}
v___jp_5458_:
{
lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5460_ = lean_unsigned_to_nat(1u);
v___x_5461_ = lean_nat_add(v_a_5456_, v___x_5460_);
lean_dec(v_a_5456_);
v_a_5456_ = v___x_5461_;
v_b_5457_ = v_a_5459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5582_, lean_object* v_a_5583_, lean_object* v_b_5584_){
_start:
{
lean_object* v_res_5585_; 
v_res_5585_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5582_, v_a_5583_, v_b_5584_);
lean_dec(v_upperBound_5582_);
return v_res_5585_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5586_, size_t v_i_5587_, size_t v_stop_5588_){
_start:
{
uint8_t v___x_5589_; 
v___x_5589_ = lean_usize_dec_eq(v_i_5587_, v_stop_5588_);
if (v___x_5589_ == 0)
{
uint8_t v___x_5590_; lean_object* v___x_5591_; uint8_t v___x_5592_; 
v___x_5590_ = 1;
v___x_5591_ = lean_array_uget_borrowed(v_as_5586_, v_i_5587_);
v___x_5592_ = l_Lean_Expr_isFVar(v___x_5591_);
if (v___x_5592_ == 0)
{
return v___x_5590_;
}
else
{
if (v___x_5589_ == 0)
{
size_t v___x_5593_; size_t v___x_5594_; 
v___x_5593_ = ((size_t)1ULL);
v___x_5594_ = lean_usize_add(v_i_5587_, v___x_5593_);
v_i_5587_ = v___x_5594_;
goto _start;
}
else
{
return v___x_5590_;
}
}
}
else
{
uint8_t v___x_5596_; 
v___x_5596_ = 0;
return v___x_5596_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5597_, lean_object* v_i_5598_, lean_object* v_stop_5599_){
_start:
{
size_t v_i_boxed_5600_; size_t v_stop_boxed_5601_; uint8_t v_res_5602_; lean_object* v_r_5603_; 
v_i_boxed_5600_ = lean_unbox_usize(v_i_5598_);
lean_dec(v_i_5598_);
v_stop_boxed_5601_ = lean_unbox_usize(v_stop_5599_);
lean_dec(v_stop_5599_);
v_res_5602_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5597_, v_i_boxed_5600_, v_stop_boxed_5601_);
lean_dec_ref(v_as_5597_);
v_r_5603_ = lean_box(v_res_5602_);
return v_r_5603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5604_, size_t v_sz_5605_, size_t v_i_5606_, lean_object* v_bs_5607_){
_start:
{
uint8_t v___x_5608_; 
v___x_5608_ = lean_usize_dec_lt(v_i_5606_, v_sz_5605_);
if (v___x_5608_ == 0)
{
return v_bs_5607_;
}
else
{
lean_object* v_v_5609_; lean_object* v___x_5610_; lean_object* v_bs_x27_5611_; lean_object* v___y_5613_; 
v_v_5609_ = lean_array_uget(v_bs_5607_, v_i_5606_);
v___x_5610_ = lean_unsigned_to_nat(0u);
v_bs_x27_5611_ = lean_array_uset(v_bs_5607_, v_i_5606_, v___x_5610_);
if (lean_obj_tag(v_v_5609_) == 0)
{
v___y_5613_ = v_v_5609_;
goto v___jp_5612_;
}
else
{
lean_object* v_val_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; 
v_val_5618_ = lean_ctor_get(v_v_5609_, 0);
lean_inc(v_val_5618_);
lean_dec_ref(v_v_5609_);
v___x_5619_ = lean_box(0);
v___x_5620_ = lean_array_get_borrowed(v___x_5619_, v___x_5604_, v_val_5618_);
lean_dec(v_val_5618_);
lean_inc(v___x_5620_);
v___y_5613_ = v___x_5620_;
goto v___jp_5612_;
}
v___jp_5612_:
{
size_t v___x_5614_; size_t v___x_5615_; lean_object* v___x_5616_; 
v___x_5614_ = ((size_t)1ULL);
v___x_5615_ = lean_usize_add(v_i_5606_, v___x_5614_);
v___x_5616_ = lean_array_uset(v_bs_x27_5611_, v_i_5606_, v___y_5613_);
v_i_5606_ = v___x_5615_;
v_bs_5607_ = v___x_5616_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5621_, lean_object* v_sz_5622_, lean_object* v_i_5623_, lean_object* v_bs_5624_){
_start:
{
size_t v_sz_boxed_5625_; size_t v_i_boxed_5626_; lean_object* v_res_5627_; 
v_sz_boxed_5625_ = lean_unbox_usize(v_sz_5622_);
lean_dec(v_sz_5622_);
v_i_boxed_5626_ = lean_unbox_usize(v_i_5623_);
lean_dec(v_i_5623_);
v_res_5627_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5621_, v_sz_boxed_5625_, v_i_boxed_5626_, v_bs_5624_);
lean_dec_ref(v___x_5621_);
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5628_, size_t v_sz_5629_, size_t v_i_5630_, lean_object* v_bs_5631_){
_start:
{
uint8_t v___x_5632_; 
v___x_5632_ = lean_usize_dec_lt(v_i_5630_, v_sz_5629_);
if (v___x_5632_ == 0)
{
return v_bs_5631_;
}
else
{
lean_object* v_v_5633_; lean_object* v___x_5634_; lean_object* v_bs_x27_5635_; size_t v_sz_5636_; size_t v___x_5637_; lean_object* v___x_5638_; size_t v___x_5639_; size_t v___x_5640_; lean_object* v___x_5641_; 
v_v_5633_ = lean_array_uget(v_bs_5631_, v_i_5630_);
v___x_5634_ = lean_unsigned_to_nat(0u);
v_bs_x27_5635_ = lean_array_uset(v_bs_5631_, v_i_5630_, v___x_5634_);
v_sz_5636_ = lean_array_size(v_v_5633_);
v___x_5637_ = ((size_t)0ULL);
v___x_5638_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5628_, v_sz_5636_, v___x_5637_, v_v_5633_);
v___x_5639_ = ((size_t)1ULL);
v___x_5640_ = lean_usize_add(v_i_5630_, v___x_5639_);
v___x_5641_ = lean_array_uset(v_bs_x27_5635_, v_i_5630_, v___x_5638_);
v_i_5630_ = v___x_5640_;
v_bs_5631_ = v___x_5641_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5643_, lean_object* v_sz_5644_, lean_object* v_i_5645_, lean_object* v_bs_5646_){
_start:
{
size_t v_sz_boxed_5647_; size_t v_i_boxed_5648_; lean_object* v_res_5649_; 
v_sz_boxed_5647_ = lean_unbox_usize(v_sz_5644_);
lean_dec(v_sz_5644_);
v_i_boxed_5648_ = lean_unbox_usize(v_i_5645_);
lean_dec(v_i_5645_);
v_res_5649_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5643_, v_sz_boxed_5647_, v_i_boxed_5648_, v_bs_5646_);
lean_dec_ref(v___x_5643_);
return v_res_5649_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; 
v___x_5652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1));
v___x_5653_ = lean_unsigned_to_nat(6u);
v___x_5654_ = lean_unsigned_to_nat(463u);
v___x_5655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5656_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5657_ = l_mkPanicMessageWithDecl(v___x_5656_, v___x_5655_, v___x_5654_, v___x_5653_, v___x_5652_);
return v___x_5657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5658_, lean_object* v_as_5659_, size_t v_sz_5660_, size_t v_i_5661_, lean_object* v_b_5662_){
_start:
{
lean_object* v_a_5664_; uint8_t v___x_5668_; 
v___x_5668_ = lean_usize_dec_lt(v_i_5661_, v_sz_5660_);
if (v___x_5668_ == 0)
{
return v_b_5662_;
}
else
{
lean_object* v_a_5669_; lean_object* v___x_5670_; uint8_t v_changed_5671_; 
v_a_5669_ = lean_array_uget_borrowed(v_as_5659_, v_i_5661_);
v___x_5670_ = lean_array_get_size(v___x_5658_);
v_changed_5671_ = lean_nat_dec_lt(v_a_5669_, v___x_5670_);
if (v_changed_5671_ == 0)
{
lean_object* v___x_5672_; lean_object* v___x_5673_; 
lean_dec_ref(v_b_5662_);
v___x_5672_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5673_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5672_);
if (lean_obj_tag(v___x_5673_) == 0)
{
lean_object* v_a_5674_; 
v_a_5674_ = lean_ctor_get(v___x_5673_, 0);
lean_inc(v_a_5674_);
lean_dec_ref(v___x_5673_);
return v_a_5674_;
}
else
{
lean_object* v_a_5675_; 
v_a_5675_ = lean_ctor_get(v___x_5673_, 0);
lean_inc(v_a_5675_);
lean_dec_ref(v___x_5673_);
v_a_5664_ = v_a_5675_;
goto v___jp_5663_;
}
}
else
{
lean_object* v___x_5676_; lean_object* v___x_5677_; 
v___x_5676_ = lean_box(0);
v___x_5677_ = lean_array_get_borrowed(v___x_5676_, v___x_5658_, v_a_5669_);
if (lean_obj_tag(v___x_5677_) == 1)
{
lean_object* v_val_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; 
v_val_5678_ = lean_ctor_get(v___x_5677_, 0);
v___x_5679_ = lean_box(v_changed_5671_);
v___x_5680_ = lean_array_set(v_b_5662_, v_val_5678_, v___x_5679_);
v_a_5664_ = v___x_5680_;
goto v___jp_5663_;
}
else
{
v_a_5664_ = v_b_5662_;
goto v___jp_5663_;
}
}
}
v___jp_5663_:
{
size_t v___x_5665_; size_t v___x_5666_; 
v___x_5665_ = ((size_t)1ULL);
v___x_5666_ = lean_usize_add(v_i_5661_, v___x_5665_);
v_i_5661_ = v___x_5666_;
v_b_5662_ = v_a_5664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5681_, lean_object* v_as_5682_, lean_object* v_sz_5683_, lean_object* v_i_5684_, lean_object* v_b_5685_){
_start:
{
size_t v_sz_boxed_5686_; size_t v_i_boxed_5687_; lean_object* v_res_5688_; 
v_sz_boxed_5686_ = lean_unbox_usize(v_sz_5683_);
lean_dec(v_sz_5683_);
v_i_boxed_5687_ = lean_unbox_usize(v_i_5684_);
lean_dec(v_i_5684_);
v_res_5688_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5681_, v_as_5682_, v_sz_boxed_5686_, v_i_boxed_5687_, v_b_5685_);
lean_dec_ref(v_as_5682_);
lean_dec_ref(v___x_5681_);
return v_res_5688_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_5689_, lean_object* v_a_5690_, lean_object* v_b_5691_){
_start:
{
uint8_t v___x_5692_; 
v___x_5692_ = lean_nat_dec_lt(v_a_5690_, v_upperBound_5689_);
if (v___x_5692_ == 0)
{
lean_dec(v_a_5690_);
return v_b_5691_;
}
else
{
lean_object* v_snd_5693_; lean_object* v_snd_5694_; lean_object* v_fst_5695_; lean_object* v___x_5697_; uint8_t v_isShared_5698_; uint8_t v_isSharedCheck_5761_; 
v_snd_5693_ = lean_ctor_get(v_b_5691_, 1);
lean_inc(v_snd_5693_);
v_snd_5694_ = lean_ctor_get(v_snd_5693_, 1);
lean_inc(v_snd_5694_);
v_fst_5695_ = lean_ctor_get(v_b_5691_, 0);
v_isSharedCheck_5761_ = !lean_is_exclusive(v_b_5691_);
if (v_isSharedCheck_5761_ == 0)
{
lean_object* v_unused_5762_; 
v_unused_5762_ = lean_ctor_get(v_b_5691_, 1);
lean_dec(v_unused_5762_);
v___x_5697_ = v_b_5691_;
v_isShared_5698_ = v_isSharedCheck_5761_;
goto v_resetjp_5696_;
}
else
{
lean_inc(v_fst_5695_);
lean_dec(v_b_5691_);
v___x_5697_ = lean_box(0);
v_isShared_5698_ = v_isSharedCheck_5761_;
goto v_resetjp_5696_;
}
v_resetjp_5696_:
{
lean_object* v_fst_5699_; lean_object* v___x_5701_; uint8_t v_isShared_5702_; uint8_t v_isSharedCheck_5759_; 
v_fst_5699_ = lean_ctor_get(v_snd_5693_, 0);
v_isSharedCheck_5759_ = !lean_is_exclusive(v_snd_5693_);
if (v_isSharedCheck_5759_ == 0)
{
lean_object* v_unused_5760_; 
v_unused_5760_ = lean_ctor_get(v_snd_5693_, 1);
lean_dec(v_unused_5760_);
v___x_5701_ = v_snd_5693_;
v_isShared_5702_ = v_isSharedCheck_5759_;
goto v_resetjp_5700_;
}
else
{
lean_inc(v_fst_5699_);
lean_dec(v_snd_5693_);
v___x_5701_ = lean_box(0);
v_isShared_5702_ = v_isSharedCheck_5759_;
goto v_resetjp_5700_;
}
v_resetjp_5700_:
{
lean_object* v_array_5703_; lean_object* v_start_5704_; lean_object* v_stop_5705_; uint8_t v___x_5706_; 
v_array_5703_ = lean_ctor_get(v_snd_5694_, 0);
v_start_5704_ = lean_ctor_get(v_snd_5694_, 1);
v_stop_5705_ = lean_ctor_get(v_snd_5694_, 2);
v___x_5706_ = lean_nat_dec_lt(v_start_5704_, v_stop_5705_);
if (v___x_5706_ == 0)
{
lean_object* v___x_5708_; 
lean_dec(v_a_5690_);
if (v_isShared_5702_ == 0)
{
v___x_5708_ = v___x_5701_;
goto v_reusejp_5707_;
}
else
{
lean_object* v_reuseFailAlloc_5712_; 
v_reuseFailAlloc_5712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5712_, 0, v_fst_5699_);
lean_ctor_set(v_reuseFailAlloc_5712_, 1, v_snd_5694_);
v___x_5708_ = v_reuseFailAlloc_5712_;
goto v_reusejp_5707_;
}
v_reusejp_5707_:
{
lean_object* v___x_5710_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5708_);
v___x_5710_ = v___x_5697_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v_fst_5695_);
lean_ctor_set(v_reuseFailAlloc_5711_, 1, v___x_5708_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
return v___x_5710_;
}
}
}
else
{
lean_object* v___x_5714_; uint8_t v_isShared_5715_; uint8_t v_isSharedCheck_5755_; 
lean_inc(v_stop_5705_);
lean_inc(v_start_5704_);
lean_inc_ref(v_array_5703_);
v_isSharedCheck_5755_ = !lean_is_exclusive(v_snd_5694_);
if (v_isSharedCheck_5755_ == 0)
{
lean_object* v_unused_5756_; lean_object* v_unused_5757_; lean_object* v_unused_5758_; 
v_unused_5756_ = lean_ctor_get(v_snd_5694_, 2);
lean_dec(v_unused_5756_);
v_unused_5757_ = lean_ctor_get(v_snd_5694_, 1);
lean_dec(v_unused_5757_);
v_unused_5758_ = lean_ctor_get(v_snd_5694_, 0);
lean_dec(v_unused_5758_);
v___x_5714_ = v_snd_5694_;
v_isShared_5715_ = v_isSharedCheck_5755_;
goto v_resetjp_5713_;
}
else
{
lean_dec(v_snd_5694_);
v___x_5714_ = lean_box(0);
v_isShared_5715_ = v_isSharedCheck_5755_;
goto v_resetjp_5713_;
}
v_resetjp_5713_:
{
lean_object* v_array_5716_; lean_object* v_start_5717_; lean_object* v_stop_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5723_; 
v_array_5716_ = lean_ctor_get(v_fst_5699_, 0);
v_start_5717_ = lean_ctor_get(v_fst_5699_, 1);
v_stop_5718_ = lean_ctor_get(v_fst_5699_, 2);
v___x_5719_ = lean_array_fget(v_array_5703_, v_start_5704_);
v___x_5720_ = lean_unsigned_to_nat(1u);
v___x_5721_ = lean_nat_add(v_start_5704_, v___x_5720_);
lean_dec(v_start_5704_);
if (v_isShared_5715_ == 0)
{
lean_ctor_set(v___x_5714_, 1, v___x_5721_);
v___x_5723_ = v___x_5714_;
goto v_reusejp_5722_;
}
else
{
lean_object* v_reuseFailAlloc_5754_; 
v_reuseFailAlloc_5754_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5754_, 0, v_array_5703_);
lean_ctor_set(v_reuseFailAlloc_5754_, 1, v___x_5721_);
lean_ctor_set(v_reuseFailAlloc_5754_, 2, v_stop_5705_);
v___x_5723_ = v_reuseFailAlloc_5754_;
goto v_reusejp_5722_;
}
v_reusejp_5722_:
{
uint8_t v___x_5724_; 
v___x_5724_ = lean_nat_dec_lt(v_start_5717_, v_stop_5718_);
if (v___x_5724_ == 0)
{
lean_object* v___x_5726_; 
lean_dec(v___x_5719_);
lean_dec(v_a_5690_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v___x_5723_);
v___x_5726_ = v___x_5701_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v_fst_5699_);
lean_ctor_set(v_reuseFailAlloc_5730_, 1, v___x_5723_);
v___x_5726_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
lean_object* v___x_5728_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5726_);
v___x_5728_ = v___x_5697_;
goto v_reusejp_5727_;
}
else
{
lean_object* v_reuseFailAlloc_5729_; 
v_reuseFailAlloc_5729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5729_, 0, v_fst_5695_);
lean_ctor_set(v_reuseFailAlloc_5729_, 1, v___x_5726_);
v___x_5728_ = v_reuseFailAlloc_5729_;
goto v_reusejp_5727_;
}
v_reusejp_5727_:
{
return v___x_5728_;
}
}
}
else
{
lean_object* v___x_5732_; uint8_t v_isShared_5733_; uint8_t v_isSharedCheck_5750_; 
lean_inc(v_stop_5718_);
lean_inc(v_start_5717_);
lean_inc_ref(v_array_5716_);
v_isSharedCheck_5750_ = !lean_is_exclusive(v_fst_5699_);
if (v_isSharedCheck_5750_ == 0)
{
lean_object* v_unused_5751_; lean_object* v_unused_5752_; lean_object* v_unused_5753_; 
v_unused_5751_ = lean_ctor_get(v_fst_5699_, 2);
lean_dec(v_unused_5751_);
v_unused_5752_ = lean_ctor_get(v_fst_5699_, 1);
lean_dec(v_unused_5752_);
v_unused_5753_ = lean_ctor_get(v_fst_5699_, 0);
lean_dec(v_unused_5753_);
v___x_5732_ = v_fst_5699_;
v_isShared_5733_ = v_isSharedCheck_5750_;
goto v_resetjp_5731_;
}
else
{
lean_dec(v_fst_5699_);
v___x_5732_ = lean_box(0);
v_isShared_5733_ = v_isSharedCheck_5750_;
goto v_resetjp_5731_;
}
v_resetjp_5731_:
{
lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5737_; 
v___x_5734_ = lean_array_fget(v_array_5716_, v_start_5717_);
v___x_5735_ = lean_nat_add(v_start_5717_, v___x_5720_);
lean_dec(v_start_5717_);
if (v_isShared_5733_ == 0)
{
lean_ctor_set(v___x_5732_, 1, v___x_5735_);
v___x_5737_ = v___x_5732_;
goto v_reusejp_5736_;
}
else
{
lean_object* v_reuseFailAlloc_5749_; 
v_reuseFailAlloc_5749_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5749_, 0, v_array_5716_);
lean_ctor_set(v_reuseFailAlloc_5749_, 1, v___x_5735_);
lean_ctor_set(v_reuseFailAlloc_5749_, 2, v_stop_5718_);
v___x_5737_ = v_reuseFailAlloc_5749_;
goto v_reusejp_5736_;
}
v_reusejp_5736_:
{
size_t v_sz_5738_; size_t v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5742_; 
v_sz_5738_ = lean_array_size(v___x_5734_);
v___x_5739_ = ((size_t)0ULL);
v___x_5740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5719_, v___x_5734_, v_sz_5738_, v___x_5739_, v_fst_5695_);
lean_dec(v___x_5734_);
lean_dec(v___x_5719_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v___x_5723_);
lean_ctor_set(v___x_5701_, 0, v___x_5737_);
v___x_5742_ = v___x_5701_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5748_; 
v_reuseFailAlloc_5748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5748_, 0, v___x_5737_);
lean_ctor_set(v_reuseFailAlloc_5748_, 1, v___x_5723_);
v___x_5742_ = v_reuseFailAlloc_5748_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
lean_object* v___x_5744_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5742_);
lean_ctor_set(v___x_5697_, 0, v___x_5740_);
v___x_5744_ = v___x_5697_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5747_; 
v_reuseFailAlloc_5747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5747_, 0, v___x_5740_);
lean_ctor_set(v_reuseFailAlloc_5747_, 1, v___x_5742_);
v___x_5744_ = v_reuseFailAlloc_5747_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
lean_object* v___x_5745_; 
v___x_5745_ = lean_nat_add(v_a_5690_, v___x_5720_);
lean_dec(v_a_5690_);
v_a_5690_ = v___x_5745_;
v_b_5691_ = v___x_5744_;
goto _start;
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
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_5763_, lean_object* v_a_5764_, lean_object* v_b_5765_){
_start:
{
lean_object* v_res_5766_; 
v_res_5766_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_5763_, v_a_5764_, v_b_5765_);
lean_dec(v_upperBound_5763_);
return v_res_5766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5767_, uint8_t v___x_5768_, lean_object* v_as_5769_, size_t v_sz_5770_, size_t v_i_5771_, lean_object* v_b_5772_){
_start:
{
lean_object* v_a_5774_; uint8_t v___x_5778_; 
v___x_5778_ = lean_usize_dec_lt(v_i_5771_, v_sz_5770_);
if (v___x_5778_ == 0)
{
return v_b_5772_;
}
else
{
lean_object* v_fst_5779_; lean_object* v_snd_5780_; lean_object* v___x_5782_; uint8_t v_isShared_5783_; uint8_t v_isSharedCheck_5801_; 
v_fst_5779_ = lean_ctor_get(v_b_5772_, 0);
v_snd_5780_ = lean_ctor_get(v_b_5772_, 1);
v_isSharedCheck_5801_ = !lean_is_exclusive(v_b_5772_);
if (v_isSharedCheck_5801_ == 0)
{
v___x_5782_ = v_b_5772_;
v_isShared_5783_ = v_isSharedCheck_5801_;
goto v_resetjp_5781_;
}
else
{
lean_inc(v_snd_5780_);
lean_inc(v_fst_5779_);
lean_dec(v_b_5772_);
v___x_5782_ = lean_box(0);
v_isShared_5783_ = v_isSharedCheck_5801_;
goto v_resetjp_5781_;
}
v_resetjp_5781_:
{
lean_object* v_a_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; 
v_a_5788_ = lean_array_uget_borrowed(v_as_5769_, v_i_5771_);
v___x_5789_ = lean_box(0);
v___x_5790_ = lean_array_get_borrowed(v___x_5789_, v___x_5767_, v_a_5788_);
if (lean_obj_tag(v___x_5790_) == 1)
{
lean_object* v_val_5791_; uint8_t v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; uint8_t v___x_5795_; 
v_val_5791_ = lean_ctor_get(v___x_5790_, 0);
v___x_5792_ = 0;
v___x_5793_ = lean_box(v___x_5792_);
v___x_5794_ = lean_array_get(v___x_5793_, v_fst_5779_, v_val_5791_);
lean_dec(v___x_5793_);
v___x_5795_ = lean_unbox(v___x_5794_);
lean_dec(v___x_5794_);
if (v___x_5795_ == 0)
{
if (v___x_5768_ == 0)
{
goto v___jp_5784_;
}
else
{
lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; 
lean_del_object(v___x_5782_);
lean_dec(v_snd_5780_);
v___x_5796_ = lean_box(v___x_5768_);
v___x_5797_ = lean_array_set(v_fst_5779_, v_val_5791_, v___x_5796_);
v___x_5798_ = lean_box(v___x_5768_);
v___x_5799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5797_);
lean_ctor_set(v___x_5799_, 1, v___x_5798_);
v_a_5774_ = v___x_5799_;
goto v___jp_5773_;
}
}
else
{
goto v___jp_5784_;
}
}
else
{
lean_object* v___x_5800_; 
lean_del_object(v___x_5782_);
v___x_5800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5800_, 0, v_fst_5779_);
lean_ctor_set(v___x_5800_, 1, v_snd_5780_);
v_a_5774_ = v___x_5800_;
goto v___jp_5773_;
}
v___jp_5784_:
{
lean_object* v___x_5786_; 
if (v_isShared_5783_ == 0)
{
v___x_5786_ = v___x_5782_;
goto v_reusejp_5785_;
}
else
{
lean_object* v_reuseFailAlloc_5787_; 
v_reuseFailAlloc_5787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5787_, 0, v_fst_5779_);
lean_ctor_set(v_reuseFailAlloc_5787_, 1, v_snd_5780_);
v___x_5786_ = v_reuseFailAlloc_5787_;
goto v_reusejp_5785_;
}
v_reusejp_5785_:
{
v_a_5774_ = v___x_5786_;
goto v___jp_5773_;
}
}
}
}
v___jp_5773_:
{
size_t v___x_5775_; size_t v___x_5776_; 
v___x_5775_ = ((size_t)1ULL);
v___x_5776_ = lean_usize_add(v_i_5771_, v___x_5775_);
v_i_5771_ = v___x_5776_;
v_b_5772_ = v_a_5774_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5802_, lean_object* v___x_5803_, lean_object* v_as_5804_, lean_object* v_sz_5805_, lean_object* v_i_5806_, lean_object* v_b_5807_){
_start:
{
uint8_t v___x_8471__boxed_5808_; size_t v_sz_boxed_5809_; size_t v_i_boxed_5810_; lean_object* v_res_5811_; 
v___x_8471__boxed_5808_ = lean_unbox(v___x_5803_);
v_sz_boxed_5809_ = lean_unbox_usize(v_sz_5805_);
lean_dec(v_sz_5805_);
v_i_boxed_5810_ = lean_unbox_usize(v_i_5806_);
lean_dec(v_i_5806_);
v_res_5811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5802_, v___x_8471__boxed_5808_, v_as_5804_, v_sz_boxed_5809_, v_i_boxed_5810_, v_b_5807_);
lean_dec_ref(v_as_5804_);
lean_dec_ref(v___x_5802_);
return v_res_5811_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5812_, lean_object* v___x_5813_, lean_object* v_fixedParamPerms_5814_, lean_object* v_next_5815_, lean_object* v_a_5816_, lean_object* v_b_5817_){
_start:
{
lean_object* v_a_5819_; uint8_t v___x_5823_; 
v___x_5823_ = lean_nat_dec_lt(v_a_5816_, v_upperBound_5812_);
if (v___x_5823_ == 0)
{
lean_dec(v_a_5816_);
return v_b_5817_;
}
else
{
lean_object* v_fst_5824_; lean_object* v_snd_5825_; lean_object* v___x_5827_; uint8_t v_isShared_5828_; uint8_t v_isSharedCheck_5861_; 
v_fst_5824_ = lean_ctor_get(v_b_5817_, 0);
v_snd_5825_ = lean_ctor_get(v_b_5817_, 1);
v_isSharedCheck_5861_ = !lean_is_exclusive(v_b_5817_);
if (v_isSharedCheck_5861_ == 0)
{
v___x_5827_ = v_b_5817_;
v_isShared_5828_ = v_isSharedCheck_5861_;
goto v_resetjp_5826_;
}
else
{
lean_inc(v_snd_5825_);
lean_inc(v_fst_5824_);
lean_dec(v_b_5817_);
v___x_5827_ = lean_box(0);
v_isShared_5828_ = v_isSharedCheck_5861_;
goto v_resetjp_5826_;
}
v_resetjp_5826_:
{
lean_object* v___x_5829_; 
v___x_5829_ = lean_array_fget_borrowed(v___x_5813_, v_a_5816_);
if (lean_obj_tag(v___x_5829_) == 1)
{
lean_object* v_val_5830_; uint8_t v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; uint8_t v___x_5834_; 
v_val_5830_ = lean_ctor_get(v___x_5829_, 0);
v___x_5831_ = 0;
v___x_5832_ = lean_box(v___x_5831_);
v___x_5833_ = lean_array_get(v___x_5832_, v_fst_5824_, v_val_5830_);
lean_dec(v___x_5832_);
v___x_5834_ = lean_unbox(v___x_5833_);
if (v___x_5834_ == 0)
{
lean_object* v___x_5836_; 
lean_dec(v___x_5833_);
if (v_isShared_5828_ == 0)
{
v___x_5836_ = v___x_5827_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v_fst_5824_);
lean_ctor_set(v_reuseFailAlloc_5837_, 1, v_snd_5825_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
v_a_5819_ = v___x_5836_;
goto v___jp_5818_;
}
}
else
{
lean_object* v_revDeps_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5843_; 
v_revDeps_5838_ = lean_ctor_get(v_fixedParamPerms_5814_, 2);
v___x_5839_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_setVarying___closed__0, &l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0);
v___x_5840_ = lean_array_get_borrowed(v___x_5839_, v_revDeps_5838_, v_next_5815_);
v___x_5841_ = lean_array_get_borrowed(v___x_5839_, v___x_5840_, v_a_5816_);
if (v_isShared_5828_ == 0)
{
v___x_5843_ = v___x_5827_;
goto v_reusejp_5842_;
}
else
{
lean_object* v_reuseFailAlloc_5857_; 
v_reuseFailAlloc_5857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5857_, 0, v_fst_5824_);
lean_ctor_set(v_reuseFailAlloc_5857_, 1, v_snd_5825_);
v___x_5843_ = v_reuseFailAlloc_5857_;
goto v_reusejp_5842_;
}
v_reusejp_5842_:
{
size_t v_sz_5844_; size_t v___x_5845_; uint8_t v___x_5846_; lean_object* v___x_5847_; lean_object* v_fst_5848_; lean_object* v_snd_5849_; lean_object* v___x_5851_; uint8_t v_isShared_5852_; uint8_t v_isSharedCheck_5856_; 
v_sz_5844_ = lean_array_size(v___x_5841_);
v___x_5845_ = ((size_t)0ULL);
v___x_5846_ = lean_unbox(v___x_5833_);
lean_dec(v___x_5833_);
v___x_5847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5813_, v___x_5846_, v___x_5841_, v_sz_5844_, v___x_5845_, v___x_5843_);
v_fst_5848_ = lean_ctor_get(v___x_5847_, 0);
v_snd_5849_ = lean_ctor_get(v___x_5847_, 1);
v_isSharedCheck_5856_ = !lean_is_exclusive(v___x_5847_);
if (v_isSharedCheck_5856_ == 0)
{
v___x_5851_ = v___x_5847_;
v_isShared_5852_ = v_isSharedCheck_5856_;
goto v_resetjp_5850_;
}
else
{
lean_inc(v_snd_5849_);
lean_inc(v_fst_5848_);
lean_dec(v___x_5847_);
v___x_5851_ = lean_box(0);
v_isShared_5852_ = v_isSharedCheck_5856_;
goto v_resetjp_5850_;
}
v_resetjp_5850_:
{
lean_object* v___x_5854_; 
if (v_isShared_5852_ == 0)
{
v___x_5854_ = v___x_5851_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5855_; 
v_reuseFailAlloc_5855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5855_, 0, v_fst_5848_);
lean_ctor_set(v_reuseFailAlloc_5855_, 1, v_snd_5849_);
v___x_5854_ = v_reuseFailAlloc_5855_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
v_a_5819_ = v___x_5854_;
goto v___jp_5818_;
}
}
}
}
}
else
{
lean_object* v___x_5859_; 
if (v_isShared_5828_ == 0)
{
v___x_5859_ = v___x_5827_;
goto v_reusejp_5858_;
}
else
{
lean_object* v_reuseFailAlloc_5860_; 
v_reuseFailAlloc_5860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5860_, 0, v_fst_5824_);
lean_ctor_set(v_reuseFailAlloc_5860_, 1, v_snd_5825_);
v___x_5859_ = v_reuseFailAlloc_5860_;
goto v_reusejp_5858_;
}
v_reusejp_5858_:
{
v_a_5819_ = v___x_5859_;
goto v___jp_5818_;
}
}
}
}
v___jp_5818_:
{
lean_object* v___x_5820_; lean_object* v___x_5821_; 
v___x_5820_ = lean_unsigned_to_nat(1u);
v___x_5821_ = lean_nat_add(v_a_5816_, v___x_5820_);
lean_dec(v_a_5816_);
v_a_5816_ = v___x_5821_;
v_b_5817_ = v_a_5819_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5862_, lean_object* v___x_5863_, lean_object* v_fixedParamPerms_5864_, lean_object* v_next_5865_, lean_object* v_a_5866_, lean_object* v_b_5867_){
_start:
{
lean_object* v_res_5868_; 
v_res_5868_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5862_, v___x_5863_, v_fixedParamPerms_5864_, v_next_5865_, v_a_5866_, v_b_5867_);
lean_dec(v_next_5865_);
lean_dec_ref(v_fixedParamPerms_5864_);
lean_dec_ref(v___x_5863_);
lean_dec(v_upperBound_5862_);
return v_res_5868_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5869_, lean_object* v___x_5870_, lean_object* v_fixedParamPerms_5871_, lean_object* v_a_5872_, lean_object* v_b_5873_){
_start:
{
uint8_t v___x_5874_; 
v___x_5874_ = lean_nat_dec_lt(v_a_5872_, v_upperBound_5869_);
if (v___x_5874_ == 0)
{
lean_dec(v_a_5872_);
return v_b_5873_;
}
else
{
lean_object* v_fst_5875_; lean_object* v_snd_5876_; lean_object* v___x_5878_; uint8_t v_isShared_5879_; uint8_t v_isSharedCheck_5899_; 
v_fst_5875_ = lean_ctor_get(v_b_5873_, 0);
v_snd_5876_ = lean_ctor_get(v_b_5873_, 1);
v_isSharedCheck_5899_ = !lean_is_exclusive(v_b_5873_);
if (v_isSharedCheck_5899_ == 0)
{
v___x_5878_ = v_b_5873_;
v_isShared_5879_ = v_isSharedCheck_5899_;
goto v_resetjp_5877_;
}
else
{
lean_inc(v_snd_5876_);
lean_inc(v_fst_5875_);
lean_dec(v_b_5873_);
v___x_5878_ = lean_box(0);
v_isShared_5879_ = v_isSharedCheck_5899_;
goto v_resetjp_5877_;
}
v_resetjp_5877_:
{
lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5884_; 
v___x_5880_ = lean_array_fget_borrowed(v___x_5870_, v_a_5872_);
v___x_5881_ = lean_array_get_size(v___x_5880_);
v___x_5882_ = lean_unsigned_to_nat(0u);
if (v_isShared_5879_ == 0)
{
v___x_5884_ = v___x_5878_;
goto v_reusejp_5883_;
}
else
{
lean_object* v_reuseFailAlloc_5898_; 
v_reuseFailAlloc_5898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5898_, 0, v_fst_5875_);
lean_ctor_set(v_reuseFailAlloc_5898_, 1, v_snd_5876_);
v___x_5884_ = v_reuseFailAlloc_5898_;
goto v_reusejp_5883_;
}
v_reusejp_5883_:
{
lean_object* v___x_5885_; lean_object* v_fst_5886_; lean_object* v_snd_5887_; lean_object* v___x_5889_; uint8_t v_isShared_5890_; uint8_t v_isSharedCheck_5897_; 
v___x_5885_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5881_, v___x_5880_, v_fixedParamPerms_5871_, v_a_5872_, v___x_5882_, v___x_5884_);
v_fst_5886_ = lean_ctor_get(v___x_5885_, 0);
v_snd_5887_ = lean_ctor_get(v___x_5885_, 1);
v_isSharedCheck_5897_ = !lean_is_exclusive(v___x_5885_);
if (v_isSharedCheck_5897_ == 0)
{
v___x_5889_ = v___x_5885_;
v_isShared_5890_ = v_isSharedCheck_5897_;
goto v_resetjp_5888_;
}
else
{
lean_inc(v_snd_5887_);
lean_inc(v_fst_5886_);
lean_dec(v___x_5885_);
v___x_5889_ = lean_box(0);
v_isShared_5890_ = v_isSharedCheck_5897_;
goto v_resetjp_5888_;
}
v_resetjp_5888_:
{
lean_object* v___x_5892_; 
if (v_isShared_5890_ == 0)
{
v___x_5892_ = v___x_5889_;
goto v_reusejp_5891_;
}
else
{
lean_object* v_reuseFailAlloc_5896_; 
v_reuseFailAlloc_5896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5896_, 0, v_fst_5886_);
lean_ctor_set(v_reuseFailAlloc_5896_, 1, v_snd_5887_);
v___x_5892_ = v_reuseFailAlloc_5896_;
goto v_reusejp_5891_;
}
v_reusejp_5891_:
{
lean_object* v___x_5893_; lean_object* v___x_5894_; 
v___x_5893_ = lean_unsigned_to_nat(1u);
v___x_5894_ = lean_nat_add(v_a_5872_, v___x_5893_);
lean_dec(v_a_5872_);
v_a_5872_ = v___x_5894_;
v_b_5873_ = v___x_5892_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5900_, lean_object* v___x_5901_, lean_object* v_fixedParamPerms_5902_, lean_object* v_a_5903_, lean_object* v_b_5904_){
_start:
{
lean_object* v_res_5905_; 
v_res_5905_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5900_, v___x_5901_, v_fixedParamPerms_5902_, v_a_5903_, v_b_5904_);
lean_dec_ref(v_fixedParamPerms_5902_);
lean_dec_ref(v___x_5901_);
lean_dec(v_upperBound_5900_);
return v_res_5905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_5906_, lean_object* v___x_5907_, lean_object* v_fixedParamPerms_5908_, lean_object* v_b_5909_){
_start:
{
lean_object* v_snd_5910_; uint8_t v___x_5911_; 
v_snd_5910_ = lean_ctor_get(v_b_5909_, 1);
v___x_5911_ = lean_unbox(v_snd_5910_);
if (v___x_5911_ == 0)
{
lean_object* v_fst_5912_; lean_object* v___x_5914_; uint8_t v_isShared_5915_; uint8_t v_isSharedCheck_5919_; 
lean_inc(v_snd_5910_);
v_fst_5912_ = lean_ctor_get(v_b_5909_, 0);
v_isSharedCheck_5919_ = !lean_is_exclusive(v_b_5909_);
if (v_isSharedCheck_5919_ == 0)
{
lean_object* v_unused_5920_; 
v_unused_5920_ = lean_ctor_get(v_b_5909_, 1);
lean_dec(v_unused_5920_);
v___x_5914_ = v_b_5909_;
v_isShared_5915_ = v_isSharedCheck_5919_;
goto v_resetjp_5913_;
}
else
{
lean_inc(v_fst_5912_);
lean_dec(v_b_5909_);
v___x_5914_ = lean_box(0);
v_isShared_5915_ = v_isSharedCheck_5919_;
goto v_resetjp_5913_;
}
v_resetjp_5913_:
{
lean_object* v___x_5917_; 
if (v_isShared_5915_ == 0)
{
v___x_5917_ = v___x_5914_;
goto v_reusejp_5916_;
}
else
{
lean_object* v_reuseFailAlloc_5918_; 
v_reuseFailAlloc_5918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5918_, 0, v_fst_5912_);
lean_ctor_set(v_reuseFailAlloc_5918_, 1, v_snd_5910_);
v___x_5917_ = v_reuseFailAlloc_5918_;
goto v_reusejp_5916_;
}
v_reusejp_5916_:
{
return v___x_5917_;
}
}
}
else
{
lean_object* v_fst_5921_; lean_object* v___x_5923_; uint8_t v_isShared_5924_; uint8_t v_isSharedCheck_5942_; 
v_fst_5921_ = lean_ctor_get(v_b_5909_, 0);
v_isSharedCheck_5942_ = !lean_is_exclusive(v_b_5909_);
if (v_isSharedCheck_5942_ == 0)
{
lean_object* v_unused_5943_; 
v_unused_5943_ = lean_ctor_get(v_b_5909_, 1);
lean_dec(v_unused_5943_);
v___x_5923_ = v_b_5909_;
v_isShared_5924_ = v_isSharedCheck_5942_;
goto v_resetjp_5922_;
}
else
{
lean_inc(v_fst_5921_);
lean_dec(v_b_5909_);
v___x_5923_ = lean_box(0);
v_isShared_5924_ = v_isSharedCheck_5942_;
goto v_resetjp_5922_;
}
v_resetjp_5922_:
{
uint8_t v_changed_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5929_; 
v_changed_5925_ = 0;
v___x_5926_ = lean_unsigned_to_nat(0u);
v___x_5927_ = lean_box(v_changed_5925_);
if (v_isShared_5924_ == 0)
{
lean_ctor_set(v___x_5923_, 1, v___x_5927_);
v___x_5929_ = v___x_5923_;
goto v_reusejp_5928_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_fst_5921_);
lean_ctor_set(v_reuseFailAlloc_5941_, 1, v___x_5927_);
v___x_5929_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5928_;
}
v_reusejp_5928_:
{
lean_object* v___x_5930_; lean_object* v_fst_5931_; lean_object* v_snd_5932_; lean_object* v___x_5934_; uint8_t v_isShared_5935_; uint8_t v_isSharedCheck_5940_; 
v___x_5930_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5906_, v___x_5907_, v_fixedParamPerms_5908_, v___x_5926_, v___x_5929_);
v_fst_5931_ = lean_ctor_get(v___x_5930_, 0);
v_snd_5932_ = lean_ctor_get(v___x_5930_, 1);
v_isSharedCheck_5940_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_5940_ == 0)
{
v___x_5934_ = v___x_5930_;
v_isShared_5935_ = v_isSharedCheck_5940_;
goto v_resetjp_5933_;
}
else
{
lean_inc(v_snd_5932_);
lean_inc(v_fst_5931_);
lean_dec(v___x_5930_);
v___x_5934_ = lean_box(0);
v_isShared_5935_ = v_isSharedCheck_5940_;
goto v_resetjp_5933_;
}
v_resetjp_5933_:
{
lean_object* v___x_5937_; 
if (v_isShared_5935_ == 0)
{
v___x_5937_ = v___x_5934_;
goto v_reusejp_5936_;
}
else
{
lean_object* v_reuseFailAlloc_5939_; 
v_reuseFailAlloc_5939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5939_, 0, v_fst_5931_);
lean_ctor_set(v_reuseFailAlloc_5939_, 1, v_snd_5932_);
v___x_5937_ = v_reuseFailAlloc_5939_;
goto v_reusejp_5936_;
}
v_reusejp_5936_:
{
v_b_5909_ = v___x_5937_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_5944_, lean_object* v___x_5945_, lean_object* v_fixedParamPerms_5946_, lean_object* v_b_5947_){
_start:
{
lean_object* v_res_5948_; 
v_res_5948_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_5944_, v___x_5945_, v_fixedParamPerms_5946_, v_b_5947_);
lean_dec_ref(v_fixedParamPerms_5946_);
lean_dec_ref(v___x_5945_);
lean_dec(v___x_5944_);
return v_res_5948_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; 
v___x_5950_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__0));
v___x_5951_ = lean_unsigned_to_nat(2u);
v___x_5952_ = lean_unsigned_to_nat(457u);
v___x_5953_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5954_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5955_ = l_mkPanicMessageWithDecl(v___x_5954_, v___x_5953_, v___x_5952_, v___x_5951_, v___x_5950_);
return v___x_5955_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; 
v___x_5957_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__2));
v___x_5958_ = lean_unsigned_to_nat(2u);
v___x_5959_ = lean_unsigned_to_nat(458u);
v___x_5960_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5961_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5962_ = l_mkPanicMessageWithDecl(v___x_5961_, v___x_5960_, v___x_5959_, v___x_5958_, v___x_5957_);
return v___x_5962_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; 
v___x_5964_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__4));
v___x_5965_ = lean_unsigned_to_nat(2u);
v___x_5966_ = lean_unsigned_to_nat(456u);
v___x_5967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5968_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__8___redArg___lam__2___closed__0));
v___x_5969_ = l_mkPanicMessageWithDecl(v___x_5968_, v___x_5967_, v___x_5966_, v___x_5965_, v___x_5964_);
return v___x_5969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_5970_, lean_object* v_xs_5971_, lean_object* v_toErase_5972_){
_start:
{
lean_object* v___x_5973_; lean_object* v___x_5974_; uint8_t v___x_6058_; 
v___x_5973_ = lean_unsigned_to_nat(0u);
v___x_5974_ = lean_array_get_size(v_xs_5971_);
v___x_6058_ = lean_nat_dec_lt(v___x_5973_, v___x_5974_);
if (v___x_6058_ == 0)
{
goto v___jp_5975_;
}
else
{
if (v___x_6058_ == 0)
{
goto v___jp_5975_;
}
else
{
size_t v___x_6059_; size_t v___x_6060_; uint8_t v___x_6061_; 
v___x_6059_ = ((size_t)0ULL);
v___x_6060_ = lean_usize_of_nat(v___x_5974_);
v___x_6061_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_5971_, v___x_6059_, v___x_6060_);
if (v___x_6061_ == 0)
{
goto v___jp_5975_;
}
else
{
lean_object* v___x_6062_; lean_object* v___x_6063_; 
lean_dec_ref(v_toErase_5972_);
lean_dec_ref(v_xs_5971_);
lean_dec_ref(v_fixedParamPerms_5970_);
v___x_6062_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6063_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6062_);
return v___x_6063_;
}
}
}
v___jp_5975_:
{
lean_object* v_numFixed_5976_; lean_object* v_perms_5977_; lean_object* v_revDeps_5978_; uint8_t v___x_5979_; 
v_numFixed_5976_ = lean_ctor_get(v_fixedParamPerms_5970_, 0);
v_perms_5977_ = lean_ctor_get(v_fixedParamPerms_5970_, 1);
lean_inc_ref(v_perms_5977_);
v_revDeps_5978_ = lean_ctor_get(v_fixedParamPerms_5970_, 2);
lean_inc_ref(v_revDeps_5978_);
v___x_5979_ = lean_nat_dec_eq(v_numFixed_5976_, v___x_5974_);
if (v___x_5979_ == 0)
{
lean_object* v___x_5980_; lean_object* v___x_5981_; 
lean_dec_ref(v_revDeps_5978_);
lean_dec_ref(v_perms_5977_);
lean_dec_ref(v_toErase_5972_);
lean_dec_ref(v_xs_5971_);
lean_dec_ref(v_fixedParamPerms_5970_);
v___x_5980_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_5981_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_5980_);
return v___x_5981_;
}
else
{
lean_object* v___x_5982_; lean_object* v___x_5983_; uint8_t v_changed_5984_; 
v___x_5982_ = lean_array_get_size(v_toErase_5972_);
v___x_5983_ = lean_array_get_size(v_perms_5977_);
v_changed_5984_ = lean_nat_dec_eq(v___x_5982_, v___x_5983_);
if (v_changed_5984_ == 0)
{
lean_object* v___x_5985_; lean_object* v___x_5986_; 
lean_dec_ref(v_revDeps_5978_);
lean_dec_ref(v_perms_5977_);
lean_dec_ref(v_toErase_5972_);
lean_dec_ref(v_xs_5971_);
lean_dec_ref(v_fixedParamPerms_5970_);
v___x_5985_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_5986_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_5985_);
return v___x_5986_;
}
else
{
uint8_t v_changed_5987_; lean_object* v___x_5988_; lean_object* v_mask_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v_fst_5995_; lean_object* v___x_5997_; uint8_t v_isShared_5998_; uint8_t v_isSharedCheck_6056_; 
v_changed_5987_ = 0;
v___x_5988_ = lean_box(v_changed_5987_);
lean_inc(v_numFixed_5976_);
v_mask_5989_ = lean_mk_array(v_numFixed_5976_, v___x_5988_);
v___x_5990_ = l_Array_toSubarray___redArg(v_toErase_5972_, v___x_5973_, v___x_5982_);
lean_inc_ref(v_perms_5977_);
v___x_5991_ = l_Array_toSubarray___redArg(v_perms_5977_, v___x_5973_, v___x_5983_);
v___x_5992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5992_, 0, v___x_5990_);
lean_ctor_set(v___x_5992_, 1, v___x_5991_);
v___x_5993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5993_, 0, v_mask_5989_);
lean_ctor_set(v___x_5993_, 1, v___x_5992_);
v___x_5994_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_5982_, v___x_5973_, v___x_5993_);
v_fst_5995_ = lean_ctor_get(v___x_5994_, 0);
v_isSharedCheck_6056_ = !lean_is_exclusive(v___x_5994_);
if (v_isSharedCheck_6056_ == 0)
{
lean_object* v_unused_6057_; 
v_unused_6057_ = lean_ctor_get(v___x_5994_, 1);
lean_dec(v_unused_6057_);
v___x_5997_ = v___x_5994_;
v_isShared_5998_ = v_isSharedCheck_6056_;
goto v_resetjp_5996_;
}
else
{
lean_inc(v_fst_5995_);
lean_dec(v___x_5994_);
v___x_5997_ = lean_box(0);
v_isShared_5998_ = v_isSharedCheck_6056_;
goto v_resetjp_5996_;
}
v_resetjp_5996_:
{
lean_object* v___x_5999_; lean_object* v___x_6001_; 
v___x_5999_ = lean_box(v_changed_5984_);
if (v_isShared_5998_ == 0)
{
lean_ctor_set(v___x_5997_, 1, v___x_5999_);
v___x_6001_ = v___x_5997_;
goto v_reusejp_6000_;
}
else
{
lean_object* v_reuseFailAlloc_6055_; 
v_reuseFailAlloc_6055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6055_, 0, v_fst_5995_);
lean_ctor_set(v_reuseFailAlloc_6055_, 1, v___x_5999_);
v___x_6001_ = v_reuseFailAlloc_6055_;
goto v_reusejp_6000_;
}
v_reusejp_6000_:
{
lean_object* v___x_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6051_; 
v___x_6002_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_5983_, v_perms_5977_, v_fixedParamPerms_5970_, v___x_6001_);
v_isSharedCheck_6051_ = !lean_is_exclusive(v_fixedParamPerms_5970_);
if (v_isSharedCheck_6051_ == 0)
{
lean_object* v_unused_6052_; lean_object* v_unused_6053_; lean_object* v_unused_6054_; 
v_unused_6052_ = lean_ctor_get(v_fixedParamPerms_5970_, 2);
lean_dec(v_unused_6052_);
v_unused_6053_ = lean_ctor_get(v_fixedParamPerms_5970_, 1);
lean_dec(v_unused_6053_);
v_unused_6054_ = lean_ctor_get(v_fixedParamPerms_5970_, 0);
lean_dec(v_unused_6054_);
v___x_6004_ = v_fixedParamPerms_5970_;
v_isShared_6005_ = v_isSharedCheck_6051_;
goto v_resetjp_6003_;
}
else
{
lean_dec(v_fixedParamPerms_5970_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6051_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v_fst_6006_; lean_object* v___x_6008_; uint8_t v_isShared_6009_; uint8_t v_isSharedCheck_6049_; 
v_fst_6006_ = lean_ctor_get(v___x_6002_, 0);
v_isSharedCheck_6049_ = !lean_is_exclusive(v___x_6002_);
if (v_isSharedCheck_6049_ == 0)
{
lean_object* v_unused_6050_; 
v_unused_6050_ = lean_ctor_get(v___x_6002_, 1);
lean_dec(v_unused_6050_);
v___x_6008_ = v___x_6002_;
v_isShared_6009_ = v_isSharedCheck_6049_;
goto v_resetjp_6007_;
}
else
{
lean_inc(v_fst_6006_);
lean_dec(v___x_6002_);
v___x_6008_ = lean_box(0);
v_isShared_6009_ = v_isSharedCheck_6049_;
goto v_resetjp_6007_;
}
v_resetjp_6007_:
{
lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6015_; 
v___x_6010_ = lean_array_get_size(v_fst_6006_);
v___x_6011_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_6012_ = l_Array_toSubarray___redArg(v_fst_6006_, v___x_5973_, v___x_6010_);
v___x_6013_ = l_Array_toSubarray___redArg(v_xs_5971_, v___x_5973_, v___x_5974_);
if (v_isShared_6009_ == 0)
{
lean_ctor_set(v___x_6008_, 1, v___x_6013_);
lean_ctor_set(v___x_6008_, 0, v___x_6012_);
v___x_6015_ = v___x_6008_;
goto v_reusejp_6014_;
}
else
{
lean_object* v_reuseFailAlloc_6048_; 
v_reuseFailAlloc_6048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6048_, 0, v___x_6012_);
lean_ctor_set(v_reuseFailAlloc_6048_, 1, v___x_6013_);
v___x_6015_ = v_reuseFailAlloc_6048_;
goto v_reusejp_6014_;
}
v_reusejp_6014_:
{
lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v_snd_6020_; lean_object* v_snd_6021_; lean_object* v_fst_6022_; lean_object* v_fst_6023_; lean_object* v___x_6025_; uint8_t v_isShared_6026_; uint8_t v_isSharedCheck_6046_; 
v___x_6016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6016_, 0, v___x_6011_);
lean_ctor_set(v___x_6016_, 1, v___x_6015_);
v___x_6017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6017_, 0, v___x_6011_);
lean_ctor_set(v___x_6017_, 1, v___x_6016_);
v___x_6018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6018_, 0, v___x_6011_);
lean_ctor_set(v___x_6018_, 1, v___x_6017_);
v___x_6019_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6010_, v___x_5973_, v___x_6018_);
v_snd_6020_ = lean_ctor_get(v___x_6019_, 1);
lean_inc(v_snd_6020_);
v_snd_6021_ = lean_ctor_get(v_snd_6020_, 1);
lean_inc(v_snd_6021_);
v_fst_6022_ = lean_ctor_get(v___x_6019_, 0);
lean_inc(v_fst_6022_);
lean_dec_ref(v___x_6019_);
v_fst_6023_ = lean_ctor_get(v_snd_6020_, 0);
v_isSharedCheck_6046_ = !lean_is_exclusive(v_snd_6020_);
if (v_isSharedCheck_6046_ == 0)
{
lean_object* v_unused_6047_; 
v_unused_6047_ = lean_ctor_get(v_snd_6020_, 1);
lean_dec(v_unused_6047_);
v___x_6025_ = v_snd_6020_;
v_isShared_6026_ = v_isSharedCheck_6046_;
goto v_resetjp_6024_;
}
else
{
lean_inc(v_fst_6023_);
lean_dec(v_snd_6020_);
v___x_6025_ = lean_box(0);
v_isShared_6026_ = v_isSharedCheck_6046_;
goto v_resetjp_6024_;
}
v_resetjp_6024_:
{
lean_object* v_fst_6027_; lean_object* v___x_6029_; uint8_t v_isShared_6030_; uint8_t v_isSharedCheck_6044_; 
v_fst_6027_ = lean_ctor_get(v_snd_6021_, 0);
v_isSharedCheck_6044_ = !lean_is_exclusive(v_snd_6021_);
if (v_isSharedCheck_6044_ == 0)
{
lean_object* v_unused_6045_; 
v_unused_6045_ = lean_ctor_get(v_snd_6021_, 1);
lean_dec(v_unused_6045_);
v___x_6029_ = v_snd_6021_;
v_isShared_6030_ = v_isSharedCheck_6044_;
goto v_resetjp_6028_;
}
else
{
lean_inc(v_fst_6027_);
lean_dec(v_snd_6021_);
v___x_6029_ = lean_box(0);
v_isShared_6030_ = v_isSharedCheck_6044_;
goto v_resetjp_6028_;
}
v_resetjp_6028_:
{
lean_object* v___x_6031_; size_t v_sz_6032_; size_t v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6036_; 
v___x_6031_ = lean_array_get_size(v_fst_6027_);
v_sz_6032_ = lean_array_size(v_perms_5977_);
v___x_6033_ = ((size_t)0ULL);
v___x_6034_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6022_, v_sz_6032_, v___x_6033_, v_perms_5977_);
lean_dec(v_fst_6022_);
if (v_isShared_6005_ == 0)
{
lean_ctor_set(v___x_6004_, 1, v___x_6034_);
lean_ctor_set(v___x_6004_, 0, v___x_6031_);
v___x_6036_ = v___x_6004_;
goto v_reusejp_6035_;
}
else
{
lean_object* v_reuseFailAlloc_6043_; 
v_reuseFailAlloc_6043_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6043_, 0, v___x_6031_);
lean_ctor_set(v_reuseFailAlloc_6043_, 1, v___x_6034_);
lean_ctor_set(v_reuseFailAlloc_6043_, 2, v_revDeps_5978_);
v___x_6036_ = v_reuseFailAlloc_6043_;
goto v_reusejp_6035_;
}
v_reusejp_6035_:
{
lean_object* v___x_6038_; 
if (v_isShared_6030_ == 0)
{
lean_ctor_set(v___x_6029_, 1, v_fst_6023_);
v___x_6038_ = v___x_6029_;
goto v_reusejp_6037_;
}
else
{
lean_object* v_reuseFailAlloc_6042_; 
v_reuseFailAlloc_6042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6042_, 0, v_fst_6027_);
lean_ctor_set(v_reuseFailAlloc_6042_, 1, v_fst_6023_);
v___x_6038_ = v_reuseFailAlloc_6042_;
goto v_reusejp_6037_;
}
v_reusejp_6037_:
{
lean_object* v___x_6040_; 
if (v_isShared_6026_ == 0)
{
lean_ctor_set(v___x_6025_, 1, v___x_6038_);
lean_ctor_set(v___x_6025_, 0, v___x_6036_);
v___x_6040_ = v___x_6025_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6041_; 
v_reuseFailAlloc_6041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6041_, 0, v___x_6036_);
lean_ctor_set(v_reuseFailAlloc_6041_, 1, v___x_6038_);
v___x_6040_ = v_reuseFailAlloc_6041_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
return v___x_6040_;
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6064_, lean_object* v___x_6065_, lean_object* v_fixedParamPerms_6066_, lean_object* v_next_6067_, lean_object* v_inst_6068_, lean_object* v_R_6069_, lean_object* v_a_6070_, lean_object* v_b_6071_, lean_object* v_c_6072_){
_start:
{
lean_object* v___x_6073_; 
v___x_6073_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6064_, v___x_6065_, v_fixedParamPerms_6066_, v_next_6067_, v_a_6070_, v_b_6071_);
return v___x_6073_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6074_, lean_object* v___x_6075_, lean_object* v_fixedParamPerms_6076_, lean_object* v_next_6077_, lean_object* v_inst_6078_, lean_object* v_R_6079_, lean_object* v_a_6080_, lean_object* v_b_6081_, lean_object* v_c_6082_){
_start:
{
lean_object* v_res_6083_; 
v_res_6083_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6074_, v___x_6075_, v_fixedParamPerms_6076_, v_next_6077_, v_inst_6078_, v_R_6079_, v_a_6080_, v_b_6081_, v_c_6082_);
lean_dec(v_next_6077_);
lean_dec_ref(v_fixedParamPerms_6076_);
lean_dec_ref(v___x_6075_);
lean_dec(v_upperBound_6074_);
return v_res_6083_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6084_, lean_object* v___x_6085_, lean_object* v_fixedParamPerms_6086_, lean_object* v_inst_6087_, lean_object* v_R_6088_, lean_object* v_a_6089_, lean_object* v_b_6090_, lean_object* v_c_6091_){
_start:
{
lean_object* v___x_6092_; 
v___x_6092_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6084_, v___x_6085_, v_fixedParamPerms_6086_, v_a_6089_, v_b_6090_);
return v___x_6092_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6093_, lean_object* v___x_6094_, lean_object* v_fixedParamPerms_6095_, lean_object* v_inst_6096_, lean_object* v_R_6097_, lean_object* v_a_6098_, lean_object* v_b_6099_, lean_object* v_c_6100_){
_start:
{
lean_object* v_res_6101_; 
v_res_6101_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6093_, v___x_6094_, v_fixedParamPerms_6095_, v_inst_6096_, v_R_6097_, v_a_6098_, v_b_6099_, v_c_6100_);
lean_dec_ref(v_fixedParamPerms_6095_);
lean_dec_ref(v___x_6094_);
lean_dec(v_upperBound_6093_);
return v_res_6101_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6102_, lean_object* v_inst_6103_, lean_object* v_R_6104_, lean_object* v_a_6105_, lean_object* v_b_6106_, lean_object* v_c_6107_){
_start:
{
lean_object* v___x_6108_; 
v___x_6108_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6102_, v_a_6105_, v_b_6106_);
return v___x_6108_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6109_, lean_object* v_inst_6110_, lean_object* v_R_6111_, lean_object* v_a_6112_, lean_object* v_b_6113_, lean_object* v_c_6114_){
_start:
{
lean_object* v_res_6115_; 
v_res_6115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6109_, v_inst_6110_, v_R_6111_, v_a_6112_, v_b_6113_, v_c_6114_);
lean_dec(v_upperBound_6109_);
return v_res_6115_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6116_, lean_object* v_inst_6117_, lean_object* v_R_6118_, lean_object* v_a_6119_, lean_object* v_b_6120_, lean_object* v_c_6121_){
_start:
{
lean_object* v___x_6122_; 
v___x_6122_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6116_, v_a_6119_, v_b_6120_);
return v___x_6122_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6123_, lean_object* v_inst_6124_, lean_object* v_R_6125_, lean_object* v_a_6126_, lean_object* v_b_6127_, lean_object* v_c_6128_){
_start:
{
lean_object* v_res_6129_; 
v_res_6129_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6123_, v_inst_6124_, v_R_6125_, v_a_6126_, v_b_6127_, v_c_6128_);
lean_dec(v_upperBound_6123_);
return v_res_6129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6187_; uint8_t v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; 
v___x_6187_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__3));
v___x_6188_ = 0;
v___x_6189_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6190_ = l_Lean_registerTraceClass(v___x_6187_, v___x_6188_, v___x_6189_);
return v___x_6190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object* v_a_6191_){
_start:
{
lean_object* v_res_6192_; 
v_res_6192_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
return v_res_6192_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
