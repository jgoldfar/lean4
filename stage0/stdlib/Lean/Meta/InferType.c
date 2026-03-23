// Lean compiler output
// Module: Lean.Meta.InferType
// Imports: public import Lean.Data.LBool public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_isBVar(lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_getConfig___redArg(lean_object*);
uint8_t l_Lean_Meta_instDecidableEqProjReductionKind(uint8_t, uint8_t);
uint8_t l_Lean_Meta_instBEqEtaStructMode_beq(uint8_t, uint8_t);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
uint8_t l_Lean_Level_isNeverZero(lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_throwUnknown___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Core_instantiateTypeLevelParams___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_mkExprConfigCacheKey___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRange(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_Literal_type(lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Meta.InferType.0.Lean.Expr.instantiateBetaRevRange.visit"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.InferType"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object*);
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Expr.instantiateBetaRevRange"};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__0 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__0_value;
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "assertion violation: stop ≤ args.size\n    "};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__1 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__1_value;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__2;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__3;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwFunctionExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "function expected"};
static const lean_object* l_Lean_Meta_throwFunctionExpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwFunctionExpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwFunctionExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "incorrect number of universe levels "};
static const lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid projection"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nfrom type"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwTypeExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "type expected"};
static const lean_object* l_Lean_Meta_throwTypeExpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwTypeExpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwTypeExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwTypeExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwUnknownMVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unknown metavariable '\?"};
static const lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwUnknownMVar___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__1;
static const lean_string_object l_Lean_Meta_throwUnknownMVar___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_throwUnknownMVar___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected bound variable "};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "outParam"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_isPropFormerType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_isPropFormerType___closed__0 = (const lean_object*)&l_Lean_Meta_isPropFormerType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected dependent type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "type "};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " does not have "};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___f_3_; 
v___x_2_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_3_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3_, 0, v___x_2_);
return v___f_3_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object* v_msg_13_, lean_object* v___y_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___f_16_; lean_object* v___f_17_; lean_object* v___x_18_; lean_object* v___f_19_; lean_object* v___f_20_; lean_object* v___f_21_; lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_4201__overap_34_; lean_object* v___x_35_; 
v___x_15_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0));
v___f_16_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1, &l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1);
v___f_17_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_17_, 0, v___x_15_);
lean_closure_set(v___f_17_, 1, v___f_16_);
v___x_18_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2));
v___f_19_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3));
v___f_20_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_20_, 0, v___x_18_);
lean_closure_set(v___f_20_, 1, v___f_19_);
v___f_21_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4));
v___f_22_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5));
v___f_23_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6));
v___f_24_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7));
v___f_25_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8));
v___f_26_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9));
v___f_27_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10));
v___x_28_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_28_, 0, v___f_21_);
lean_ctor_set(v___x_28_, 1, v___f_22_);
v___x_29_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___f_23_);
lean_ctor_set(v___x_29_, 2, v___f_24_);
lean_ctor_set(v___x_29_, 3, v___f_25_);
lean_ctor_set(v___x_29_, 4, v___f_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___f_27_);
v___x_31_ = l_Lean_MonadStateCacheT_instMonad___redArg(v___f_17_, v___f_20_, v___x_30_);
v___x_32_ = l_Lean_instInhabitedExpr;
v___x_33_ = l_instInhabitedOfMonad___redArg(v___x_31_, v___x_32_);
v___x_4201__overap_34_ = lean_panic_fn(v___x_33_, v_msg_13_);
v___x_35_ = lean_apply_1(v___x_4201__overap_34_, v___y_14_);
return v___x_35_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg(lean_object* v_a_36_, lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
uint8_t v___x_38_; 
v___x_38_ = 0;
return v___x_38_;
}
else
{
lean_object* v_key_39_; lean_object* v_tail_40_; uint8_t v___y_42_; lean_object* v_fst_44_; lean_object* v_snd_45_; lean_object* v_fst_46_; lean_object* v_snd_47_; uint8_t v___x_48_; 
v_key_39_ = lean_ctor_get(v_x_37_, 0);
v_tail_40_ = lean_ctor_get(v_x_37_, 2);
v_fst_44_ = lean_ctor_get(v_key_39_, 0);
v_snd_45_ = lean_ctor_get(v_key_39_, 1);
v_fst_46_ = lean_ctor_get(v_a_36_, 0);
v_snd_47_ = lean_ctor_get(v_a_36_, 1);
v___x_48_ = l_Lean_ExprStructEq_beq(v_fst_44_, v_fst_46_);
if (v___x_48_ == 0)
{
v___y_42_ = v___x_48_;
goto v___jp_41_;
}
else
{
uint8_t v___x_49_; 
v___x_49_ = lean_nat_dec_eq(v_snd_45_, v_snd_47_);
v___y_42_ = v___x_49_;
goto v___jp_41_;
}
v___jp_41_:
{
if (v___y_42_ == 0)
{
v_x_37_ = v_tail_40_;
goto _start;
}
else
{
return v___y_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg___boxed(lean_object* v_a_50_, lean_object* v_x_51_){
_start:
{
uint8_t v_res_52_; lean_object* v_r_53_; 
v_res_52_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg(v_a_50_, v_x_51_);
lean_dec(v_x_51_);
lean_dec_ref(v_a_50_);
v_r_53_ = lean_box(v_res_52_);
return v_r_53_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
return v_x_54_;
}
else
{
lean_object* v_key_56_; lean_object* v_value_57_; lean_object* v_tail_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_85_; 
v_key_56_ = lean_ctor_get(v_x_55_, 0);
v_value_57_ = lean_ctor_get(v_x_55_, 1);
v_tail_58_ = lean_ctor_get(v_x_55_, 2);
v_isSharedCheck_85_ = !lean_is_exclusive(v_x_55_);
if (v_isSharedCheck_85_ == 0)
{
v___x_60_ = v_x_55_;
v_isShared_61_ = v_isSharedCheck_85_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_tail_58_);
lean_inc(v_value_57_);
lean_inc(v_key_56_);
lean_dec(v_x_55_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_85_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v_fst_62_; lean_object* v_snd_63_; lean_object* v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v___x_69_; uint64_t v_fold_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; size_t v___x_74_; size_t v___x_75_; size_t v___x_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v_fst_62_ = lean_ctor_get(v_key_56_, 0);
v_snd_63_ = lean_ctor_get(v_key_56_, 1);
v___x_64_ = lean_array_get_size(v_x_54_);
v___x_65_ = l_Lean_ExprStructEq_hash(v_fst_62_);
v___x_66_ = lean_uint64_of_nat(v_snd_63_);
v___x_67_ = lean_uint64_mix_hash(v___x_65_, v___x_66_);
v___x_68_ = 32ULL;
v___x_69_ = lean_uint64_shift_right(v___x_67_, v___x_68_);
v_fold_70_ = lean_uint64_xor(v___x_67_, v___x_69_);
v___x_71_ = 16ULL;
v___x_72_ = lean_uint64_shift_right(v_fold_70_, v___x_71_);
v___x_73_ = lean_uint64_xor(v_fold_70_, v___x_72_);
v___x_74_ = lean_uint64_to_usize(v___x_73_);
v___x_75_ = lean_usize_of_nat(v___x_64_);
v___x_76_ = ((size_t)1ULL);
v___x_77_ = lean_usize_sub(v___x_75_, v___x_76_);
v___x_78_ = lean_usize_land(v___x_74_, v___x_77_);
v___x_79_ = lean_array_uget_borrowed(v_x_54_, v___x_78_);
lean_inc(v___x_79_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 2, v___x_79_);
v___x_81_ = v___x_60_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_key_56_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_value_57_);
lean_ctor_set(v_reuseFailAlloc_84_, 2, v___x_79_);
v___x_81_ = v_reuseFailAlloc_84_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; 
v___x_82_ = lean_array_uset(v_x_54_, v___x_78_, v___x_81_);
v_x_54_ = v___x_82_;
v_x_55_ = v_tail_58_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4___redArg(lean_object* v_i_86_, lean_object* v_source_87_, lean_object* v_target_88_){
_start:
{
lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_89_ = lean_array_get_size(v_source_87_);
v___x_90_ = lean_nat_dec_lt(v_i_86_, v___x_89_);
if (v___x_90_ == 0)
{
lean_dec_ref(v_source_87_);
lean_dec(v_i_86_);
return v_target_88_;
}
else
{
lean_object* v_es_91_; lean_object* v___x_92_; lean_object* v_source_93_; lean_object* v_target_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v_es_91_ = lean_array_fget(v_source_87_, v_i_86_);
v___x_92_ = lean_box(0);
v_source_93_ = lean_array_fset(v_source_87_, v_i_86_, v___x_92_);
v_target_94_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4_spec__7___redArg(v_target_88_, v_es_91_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_nat_add(v_i_86_, v___x_95_);
lean_dec(v_i_86_);
v_i_86_ = v___x_96_;
v_source_87_ = v_source_93_;
v_target_88_ = v_target_94_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2___redArg(lean_object* v_data_98_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_nbuckets_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_99_ = lean_array_get_size(v_data_98_);
v___x_100_ = lean_unsigned_to_nat(2u);
v_nbuckets_101_ = lean_nat_mul(v___x_99_, v___x_100_);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_box(0);
v___x_104_ = lean_mk_array(v_nbuckets_101_, v___x_103_);
v___x_105_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4___redArg(v___x_102_, v_data_98_, v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3___redArg(lean_object* v_a_106_, lean_object* v_b_107_, lean_object* v_x_108_){
_start:
{
if (lean_obj_tag(v_x_108_) == 0)
{
lean_dec(v_b_107_);
lean_dec_ref(v_a_106_);
return v_x_108_;
}
else
{
lean_object* v_key_109_; lean_object* v_value_110_; lean_object* v_tail_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_130_; 
v_key_109_ = lean_ctor_get(v_x_108_, 0);
v_value_110_ = lean_ctor_get(v_x_108_, 1);
v_tail_111_ = lean_ctor_get(v_x_108_, 2);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_130_ == 0)
{
v___x_113_ = v_x_108_;
v_isShared_114_ = v_isSharedCheck_130_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_value_110_);
lean_inc(v_key_109_);
lean_dec(v_x_108_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_130_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
uint8_t v___y_116_; lean_object* v_fst_124_; lean_object* v_snd_125_; lean_object* v_fst_126_; lean_object* v_snd_127_; uint8_t v___x_128_; 
v_fst_124_ = lean_ctor_get(v_key_109_, 0);
v_snd_125_ = lean_ctor_get(v_key_109_, 1);
v_fst_126_ = lean_ctor_get(v_a_106_, 0);
v_snd_127_ = lean_ctor_get(v_a_106_, 1);
v___x_128_ = l_Lean_ExprStructEq_beq(v_fst_124_, v_fst_126_);
if (v___x_128_ == 0)
{
v___y_116_ = v___x_128_;
goto v___jp_115_;
}
else
{
uint8_t v___x_129_; 
v___x_129_ = lean_nat_dec_eq(v_snd_125_, v_snd_127_);
v___y_116_ = v___x_129_;
goto v___jp_115_;
}
v___jp_115_:
{
if (v___y_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_117_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3___redArg(v_a_106_, v_b_107_, v_tail_111_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 2, v___x_117_);
v___x_119_ = v___x_113_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_key_109_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_value_110_);
lean_ctor_set(v_reuseFailAlloc_120_, 2, v___x_117_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
else
{
lean_object* v___x_122_; 
lean_dec(v_value_110_);
lean_dec(v_key_109_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v_b_107_);
lean_ctor_set(v___x_113_, 0, v_a_106_);
v___x_122_ = v___x_113_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_106_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v_b_107_);
lean_ctor_set(v_reuseFailAlloc_123_, 2, v_tail_111_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1___redArg(lean_object* v_m_131_, lean_object* v_a_132_, lean_object* v_b_133_){
_start:
{
lean_object* v_size_134_; lean_object* v_buckets_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_182_; 
v_size_134_ = lean_ctor_get(v_m_131_, 0);
v_buckets_135_ = lean_ctor_get(v_m_131_, 1);
v_isSharedCheck_182_ = !lean_is_exclusive(v_m_131_);
if (v_isSharedCheck_182_ == 0)
{
v___x_137_ = v_m_131_;
v_isShared_138_ = v_isSharedCheck_182_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_buckets_135_);
lean_inc(v_size_134_);
lean_dec(v_m_131_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_182_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v_fst_139_; lean_object* v_snd_140_; lean_object* v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; uint64_t v___x_146_; uint64_t v_fold_147_; uint64_t v___x_148_; uint64_t v___x_149_; uint64_t v___x_150_; size_t v___x_151_; size_t v___x_152_; size_t v___x_153_; size_t v___x_154_; size_t v___x_155_; lean_object* v_bkt_156_; uint8_t v___x_157_; 
v_fst_139_ = lean_ctor_get(v_a_132_, 0);
v_snd_140_ = lean_ctor_get(v_a_132_, 1);
v___x_141_ = lean_array_get_size(v_buckets_135_);
v___x_142_ = l_Lean_ExprStructEq_hash(v_fst_139_);
v___x_143_ = lean_uint64_of_nat(v_snd_140_);
v___x_144_ = lean_uint64_mix_hash(v___x_142_, v___x_143_);
v___x_145_ = 32ULL;
v___x_146_ = lean_uint64_shift_right(v___x_144_, v___x_145_);
v_fold_147_ = lean_uint64_xor(v___x_144_, v___x_146_);
v___x_148_ = 16ULL;
v___x_149_ = lean_uint64_shift_right(v_fold_147_, v___x_148_);
v___x_150_ = lean_uint64_xor(v_fold_147_, v___x_149_);
v___x_151_ = lean_uint64_to_usize(v___x_150_);
v___x_152_ = lean_usize_of_nat(v___x_141_);
v___x_153_ = ((size_t)1ULL);
v___x_154_ = lean_usize_sub(v___x_152_, v___x_153_);
v___x_155_ = lean_usize_land(v___x_151_, v___x_154_);
v_bkt_156_ = lean_array_uget_borrowed(v_buckets_135_, v___x_155_);
v___x_157_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg(v_a_132_, v_bkt_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; lean_object* v_size_x27_159_; lean_object* v___x_160_; lean_object* v_buckets_x27_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_158_ = lean_unsigned_to_nat(1u);
v_size_x27_159_ = lean_nat_add(v_size_134_, v___x_158_);
lean_dec(v_size_134_);
lean_inc(v_bkt_156_);
v___x_160_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_160_, 0, v_a_132_);
lean_ctor_set(v___x_160_, 1, v_b_133_);
lean_ctor_set(v___x_160_, 2, v_bkt_156_);
v_buckets_x27_161_ = lean_array_uset(v_buckets_135_, v___x_155_, v___x_160_);
v___x_162_ = lean_unsigned_to_nat(4u);
v___x_163_ = lean_nat_mul(v_size_x27_159_, v___x_162_);
v___x_164_ = lean_unsigned_to_nat(3u);
v___x_165_ = lean_nat_div(v___x_163_, v___x_164_);
lean_dec(v___x_163_);
v___x_166_ = lean_array_get_size(v_buckets_x27_161_);
v___x_167_ = lean_nat_dec_le(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
if (v___x_167_ == 0)
{
lean_object* v_val_168_; lean_object* v___x_170_; 
v_val_168_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2___redArg(v_buckets_x27_161_);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 1, v_val_168_);
lean_ctor_set(v___x_137_, 0, v_size_x27_159_);
v___x_170_ = v___x_137_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_size_x27_159_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_val_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
else
{
lean_object* v___x_173_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 1, v_buckets_x27_161_);
lean_ctor_set(v___x_137_, 0, v_size_x27_159_);
v___x_173_ = v___x_137_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_size_x27_159_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_buckets_x27_161_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
else
{
lean_object* v___x_175_; lean_object* v_buckets_x27_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
lean_inc(v_bkt_156_);
v___x_175_ = lean_box(0);
v_buckets_x27_176_ = lean_array_uset(v_buckets_135_, v___x_155_, v___x_175_);
v___x_177_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3___redArg(v_a_132_, v_b_133_, v_bkt_156_);
v___x_178_ = lean_array_uset(v_buckets_x27_176_, v___x_155_, v___x_177_);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 1, v___x_178_);
v___x_180_ = v___x_137_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_size_134_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg(lean_object* v_a_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
lean_object* v_key_186_; lean_object* v_value_187_; lean_object* v_tail_188_; uint8_t v___y_190_; lean_object* v_fst_193_; lean_object* v_snd_194_; lean_object* v_fst_195_; lean_object* v_snd_196_; uint8_t v___x_197_; 
v_key_186_ = lean_ctor_get(v_x_184_, 0);
v_value_187_ = lean_ctor_get(v_x_184_, 1);
v_tail_188_ = lean_ctor_get(v_x_184_, 2);
v_fst_193_ = lean_ctor_get(v_key_186_, 0);
v_snd_194_ = lean_ctor_get(v_key_186_, 1);
v_fst_195_ = lean_ctor_get(v_a_183_, 0);
v_snd_196_ = lean_ctor_get(v_a_183_, 1);
v___x_197_ = l_Lean_ExprStructEq_beq(v_fst_193_, v_fst_195_);
if (v___x_197_ == 0)
{
v___y_190_ = v___x_197_;
goto v___jp_189_;
}
else
{
uint8_t v___x_198_; 
v___x_198_ = lean_nat_dec_eq(v_snd_194_, v_snd_196_);
v___y_190_ = v___x_198_;
goto v___jp_189_;
}
v___jp_189_:
{
if (v___y_190_ == 0)
{
v_x_184_ = v_tail_188_;
goto _start;
}
else
{
lean_object* v___x_192_; 
lean_inc(v_value_187_);
v___x_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_192_, 0, v_value_187_);
return v___x_192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg___boxed(lean_object* v_a_199_, lean_object* v_x_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg(v_a_199_, v_x_200_);
lean_dec(v_x_200_);
lean_dec_ref(v_a_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg(lean_object* v_m_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_buckets_204_; lean_object* v_fst_205_; lean_object* v_snd_206_; lean_object* v___x_207_; uint64_t v___x_208_; uint64_t v___x_209_; uint64_t v___x_210_; uint64_t v___x_211_; uint64_t v___x_212_; uint64_t v_fold_213_; uint64_t v___x_214_; uint64_t v___x_215_; uint64_t v___x_216_; size_t v___x_217_; size_t v___x_218_; size_t v___x_219_; size_t v___x_220_; size_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_buckets_204_ = lean_ctor_get(v_m_202_, 1);
v_fst_205_ = lean_ctor_get(v_a_203_, 0);
v_snd_206_ = lean_ctor_get(v_a_203_, 1);
v___x_207_ = lean_array_get_size(v_buckets_204_);
v___x_208_ = l_Lean_ExprStructEq_hash(v_fst_205_);
v___x_209_ = lean_uint64_of_nat(v_snd_206_);
v___x_210_ = lean_uint64_mix_hash(v___x_208_, v___x_209_);
v___x_211_ = 32ULL;
v___x_212_ = lean_uint64_shift_right(v___x_210_, v___x_211_);
v_fold_213_ = lean_uint64_xor(v___x_210_, v___x_212_);
v___x_214_ = 16ULL;
v___x_215_ = lean_uint64_shift_right(v_fold_213_, v___x_214_);
v___x_216_ = lean_uint64_xor(v_fold_213_, v___x_215_);
v___x_217_ = lean_uint64_to_usize(v___x_216_);
v___x_218_ = lean_usize_of_nat(v___x_207_);
v___x_219_ = ((size_t)1ULL);
v___x_220_ = lean_usize_sub(v___x_218_, v___x_219_);
v___x_221_ = lean_usize_land(v___x_217_, v___x_220_);
v___x_222_ = lean_array_uget_borrowed(v_buckets_204_, v___x_221_);
v___x_223_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg(v_a_203_, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg___boxed(lean_object* v_m_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg(v_m_224_, v_a_225_);
lean_dec_ref(v_a_225_);
lean_dec_ref(v_m_224_);
return v_res_226_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_230_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_231_ = lean_unsigned_to_nat(21u);
v___x_232_ = lean_unsigned_to_nat(69u);
v___x_233_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_234_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_235_ = l_mkPanicMessageWithDecl(v___x_234_, v___x_233_, v___x_232_, v___x_231_, v___x_230_);
return v___x_235_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_236_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_237_ = lean_unsigned_to_nat(21u);
v___x_238_ = lean_unsigned_to_nat(70u);
v___x_239_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_240_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_241_ = l_mkPanicMessageWithDecl(v___x_240_, v___x_239_, v___x_238_, v___x_237_, v___x_236_);
return v___x_241_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_242_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_243_ = lean_unsigned_to_nat(21u);
v___x_244_ = lean_unsigned_to_nat(71u);
v___x_245_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_246_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_247_ = l_mkPanicMessageWithDecl(v___x_246_, v___x_245_, v___x_244_, v___x_243_, v___x_242_);
return v___x_247_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_248_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_249_ = lean_unsigned_to_nat(21u);
v___x_250_ = lean_unsigned_to_nat(68u);
v___x_251_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_252_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_253_ = l_mkPanicMessageWithDecl(v___x_252_, v___x_251_, v___x_250_, v___x_249_, v___x_248_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object* v_start_254_, lean_object* v_stop_255_, lean_object* v_args_256_, lean_object* v_offset_257_, lean_object* v_x_258_, lean_object* v_x_259_, lean_object* v___y_260_){
_start:
{
if (lean_obj_tag(v_x_258_) == 5)
{
lean_object* v_fn_261_; lean_object* v_arg_262_; lean_object* v___x_263_; 
v_fn_261_ = lean_ctor_get(v_x_258_, 0);
lean_inc_ref(v_fn_261_);
v_arg_262_ = lean_ctor_get(v_x_258_, 1);
lean_inc_ref(v_arg_262_);
lean_dec_ref(v_x_258_);
v___x_263_ = lean_array_push(v_x_259_, v_arg_262_);
v_x_258_ = v_fn_261_;
v_x_259_ = v___x_263_;
goto _start;
}
else
{
lean_object* v___x_265_; lean_object* v_fst_266_; lean_object* v_snd_267_; size_t v_sz_268_; size_t v___x_269_; lean_object* v___x_270_; lean_object* v_fst_271_; lean_object* v_snd_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_286_; 
lean_inc(v_offset_257_);
lean_inc_ref(v_x_258_);
v___x_265_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_254_, v_stop_255_, v_args_256_, v_x_258_, v_offset_257_, v___y_260_);
v_fst_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_fst_266_);
v_snd_267_ = lean_ctor_get(v___x_265_, 1);
lean_inc(v_snd_267_);
lean_dec_ref(v___x_265_);
v_sz_268_ = lean_array_size(v_x_259_);
v___x_269_ = ((size_t)0ULL);
v___x_270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__0(v_start_254_, v_stop_255_, v_args_256_, v_offset_257_, v_sz_268_, v___x_269_, v_x_259_, v_snd_267_);
v_fst_271_ = lean_ctor_get(v___x_270_, 0);
v_snd_272_ = lean_ctor_get(v___x_270_, 1);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_286_ == 0)
{
v___x_274_ = v___x_270_;
v_isShared_275_ = v_isSharedCheck_286_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_snd_272_);
lean_inc(v_fst_271_);
lean_dec(v___x_270_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_286_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
uint8_t v___x_276_; 
v___x_276_ = l_Lean_Expr_isBVar(v_x_258_);
lean_dec_ref(v_x_258_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_277_ = l_Lean_mkAppRev(v_fst_266_, v_fst_271_);
lean_dec(v_fst_271_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_277_);
v___x_279_ = v___x_274_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v_snd_272_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
else
{
uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_281_ = 0;
v___x_282_ = l_Lean_Expr_betaRev(v_fst_266_, v_fst_271_, v___x_281_, v___x_281_);
lean_dec(v_fst_271_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_282_);
v___x_284_ = v___x_274_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_snd_272_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_287_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_288_ = lean_unsigned_to_nat(21u);
v___x_289_ = lean_unsigned_to_nat(72u);
v___x_290_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_291_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_292_ = l_mkPanicMessageWithDecl(v___x_291_, v___x_290_, v___x_289_, v___x_288_, v___x_287_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object* v_start_293_, lean_object* v_stop_294_, lean_object* v_args_295_, lean_object* v_e_296_, lean_object* v_offset_297_, lean_object* v_a_298_){
_start:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = l_Lean_Expr_looseBVarRange(v_e_296_);
v___x_300_ = lean_nat_dec_le(v___x_299_, v_offset_297_);
lean_dec(v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v_fst_303_; lean_object* v_snd_304_; lean_object* v___y_308_; lean_object* v___x_311_; 
lean_inc(v_offset_297_);
lean_inc_ref(v_e_296_);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v_e_296_);
lean_ctor_set(v___x_301_, 1, v_offset_297_);
v___x_311_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg(v_a_298_, v___x_301_);
if (lean_obj_tag(v___x_311_) == 0)
{
switch(lean_obj_tag(v_e_296_))
{
case 0:
{
lean_object* v_deBruijnIndex_312_; lean_object* v_n_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v_deBruijnIndex_312_ = lean_ctor_get(v_e_296_, 0);
lean_inc(v_deBruijnIndex_312_);
lean_dec_ref(v_e_296_);
v_n_313_ = lean_nat_sub(v_stop_294_, v_start_293_);
v___x_314_ = lean_nat_add(v_offset_297_, v_n_313_);
v___x_315_ = lean_nat_dec_lt(v_deBruijnIndex_312_, v___x_314_);
lean_dec(v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec(v_offset_297_);
v___x_316_ = lean_nat_sub(v_deBruijnIndex_312_, v_n_313_);
lean_dec(v_n_313_);
lean_dec(v_deBruijnIndex_312_);
v___x_317_ = l_Lean_mkBVar(v___x_316_);
v_fst_303_ = v___x_317_;
v_snd_304_ = v_a_298_;
goto v___jp_302_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec(v_n_313_);
v___x_318_ = l_Lean_instInhabitedExpr;
v___x_319_ = lean_nat_sub(v_deBruijnIndex_312_, v_offset_297_);
lean_dec(v_deBruijnIndex_312_);
v___x_320_ = lean_nat_sub(v_stop_294_, v___x_319_);
lean_dec(v___x_319_);
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_sub(v___x_320_, v___x_321_);
lean_dec(v___x_320_);
v___x_323_ = lean_array_get_borrowed(v___x_318_, v_args_295_, v___x_322_);
lean_dec(v___x_322_);
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_expr_lift_loose_bvars(v___x_323_, v___x_324_, v_offset_297_);
lean_dec(v_offset_297_);
v_fst_303_ = v___x_325_;
v_snd_304_ = v_a_298_;
goto v___jp_302_;
}
}
case 1:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec_ref(v_e_296_);
lean_dec(v_offset_297_);
v___x_326_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3);
v___x_327_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_326_, v_a_298_);
v___y_308_ = v___x_327_;
goto v___jp_307_;
}
case 2:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref(v_e_296_);
lean_dec(v_offset_297_);
v___x_328_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4);
v___x_329_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_328_, v_a_298_);
v___y_308_ = v___x_329_;
goto v___jp_307_;
}
case 3:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec_ref(v_e_296_);
lean_dec(v_offset_297_);
v___x_330_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5);
v___x_331_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_330_, v_a_298_);
v___y_308_ = v___x_331_;
goto v___jp_307_;
}
case 4:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec_ref(v_e_296_);
lean_dec(v_offset_297_);
v___x_332_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6);
v___x_333_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_332_, v_a_298_);
v___y_308_ = v___x_333_;
goto v___jp_307_;
}
case 5:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = l_Lean_Expr_getAppNumArgs(v_e_296_);
v___x_335_ = lean_mk_empty_array_with_capacity(v___x_334_);
lean_dec(v___x_334_);
v___x_336_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_293_, v_stop_294_, v_args_295_, v_offset_297_, v_e_296_, v___x_335_, v_a_298_);
v___y_308_ = v___x_336_;
goto v___jp_307_;
}
case 6:
{
lean_object* v_binderName_337_; lean_object* v_binderType_338_; lean_object* v_body_339_; uint8_t v_binderInfo_340_; lean_object* v___x_341_; lean_object* v_fst_342_; lean_object* v_snd_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v_fst_347_; lean_object* v_snd_348_; uint8_t v___y_350_; size_t v___x_354_; size_t v___x_355_; uint8_t v___x_356_; 
v_binderName_337_ = lean_ctor_get(v_e_296_, 0);
v_binderType_338_ = lean_ctor_get(v_e_296_, 1);
v_body_339_ = lean_ctor_get(v_e_296_, 2);
v_binderInfo_340_ = lean_ctor_get_uint8(v_e_296_, sizeof(void*)*3 + 8);
lean_inc(v_offset_297_);
lean_inc_ref(v_binderType_338_);
v___x_341_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_binderType_338_, v_offset_297_, v_a_298_);
v_fst_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_fst_342_);
v_snd_343_ = lean_ctor_get(v___x_341_, 1);
lean_inc(v_snd_343_);
lean_dec_ref(v___x_341_);
v___x_344_ = lean_unsigned_to_nat(1u);
v___x_345_ = lean_nat_add(v_offset_297_, v___x_344_);
lean_dec(v_offset_297_);
lean_inc_ref(v_body_339_);
v___x_346_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_body_339_, v___x_345_, v_snd_343_);
v_fst_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_fst_347_);
v_snd_348_ = lean_ctor_get(v___x_346_, 1);
lean_inc(v_snd_348_);
lean_dec_ref(v___x_346_);
v___x_354_ = lean_ptr_addr(v_binderType_338_);
v___x_355_ = lean_ptr_addr(v_fst_342_);
v___x_356_ = lean_usize_dec_eq(v___x_354_, v___x_355_);
if (v___x_356_ == 0)
{
v___y_350_ = v___x_356_;
goto v___jp_349_;
}
else
{
size_t v___x_357_; size_t v___x_358_; uint8_t v___x_359_; 
v___x_357_ = lean_ptr_addr(v_body_339_);
v___x_358_ = lean_ptr_addr(v_fst_347_);
v___x_359_ = lean_usize_dec_eq(v___x_357_, v___x_358_);
v___y_350_ = v___x_359_;
goto v___jp_349_;
}
v___jp_349_:
{
if (v___y_350_ == 0)
{
lean_object* v___x_351_; 
lean_inc(v_binderName_337_);
lean_dec_ref(v_e_296_);
v___x_351_ = l_Lean_Expr_lam___override(v_binderName_337_, v_fst_342_, v_fst_347_, v_binderInfo_340_);
v_fst_303_ = v___x_351_;
v_snd_304_ = v_snd_348_;
goto v___jp_302_;
}
else
{
uint8_t v___x_352_; 
v___x_352_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_340_, v_binderInfo_340_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; 
lean_inc(v_binderName_337_);
lean_dec_ref(v_e_296_);
v___x_353_ = l_Lean_Expr_lam___override(v_binderName_337_, v_fst_342_, v_fst_347_, v_binderInfo_340_);
v_fst_303_ = v___x_353_;
v_snd_304_ = v_snd_348_;
goto v___jp_302_;
}
else
{
lean_dec(v_fst_347_);
lean_dec(v_fst_342_);
v_fst_303_ = v_e_296_;
v_snd_304_ = v_snd_348_;
goto v___jp_302_;
}
}
}
}
case 7:
{
lean_object* v_binderName_360_; lean_object* v_binderType_361_; lean_object* v_body_362_; uint8_t v_binderInfo_363_; lean_object* v___x_364_; lean_object* v_fst_365_; lean_object* v_snd_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_fst_370_; lean_object* v_snd_371_; uint8_t v___y_373_; size_t v___x_377_; size_t v___x_378_; uint8_t v___x_379_; 
v_binderName_360_ = lean_ctor_get(v_e_296_, 0);
v_binderType_361_ = lean_ctor_get(v_e_296_, 1);
v_body_362_ = lean_ctor_get(v_e_296_, 2);
v_binderInfo_363_ = lean_ctor_get_uint8(v_e_296_, sizeof(void*)*3 + 8);
lean_inc(v_offset_297_);
lean_inc_ref(v_binderType_361_);
v___x_364_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_binderType_361_, v_offset_297_, v_a_298_);
v_fst_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_fst_365_);
v_snd_366_ = lean_ctor_get(v___x_364_, 1);
lean_inc(v_snd_366_);
lean_dec_ref(v___x_364_);
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = lean_nat_add(v_offset_297_, v___x_367_);
lean_dec(v_offset_297_);
lean_inc_ref(v_body_362_);
v___x_369_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_body_362_, v___x_368_, v_snd_366_);
v_fst_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_fst_370_);
v_snd_371_ = lean_ctor_get(v___x_369_, 1);
lean_inc(v_snd_371_);
lean_dec_ref(v___x_369_);
v___x_377_ = lean_ptr_addr(v_binderType_361_);
v___x_378_ = lean_ptr_addr(v_fst_365_);
v___x_379_ = lean_usize_dec_eq(v___x_377_, v___x_378_);
if (v___x_379_ == 0)
{
v___y_373_ = v___x_379_;
goto v___jp_372_;
}
else
{
size_t v___x_380_; size_t v___x_381_; uint8_t v___x_382_; 
v___x_380_ = lean_ptr_addr(v_body_362_);
v___x_381_ = lean_ptr_addr(v_fst_370_);
v___x_382_ = lean_usize_dec_eq(v___x_380_, v___x_381_);
v___y_373_ = v___x_382_;
goto v___jp_372_;
}
v___jp_372_:
{
if (v___y_373_ == 0)
{
lean_object* v___x_374_; 
lean_inc(v_binderName_360_);
lean_dec_ref(v_e_296_);
v___x_374_ = l_Lean_Expr_forallE___override(v_binderName_360_, v_fst_365_, v_fst_370_, v_binderInfo_363_);
v_fst_303_ = v___x_374_;
v_snd_304_ = v_snd_371_;
goto v___jp_302_;
}
else
{
uint8_t v___x_375_; 
v___x_375_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_363_, v_binderInfo_363_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; 
lean_inc(v_binderName_360_);
lean_dec_ref(v_e_296_);
v___x_376_ = l_Lean_Expr_forallE___override(v_binderName_360_, v_fst_365_, v_fst_370_, v_binderInfo_363_);
v_fst_303_ = v___x_376_;
v_snd_304_ = v_snd_371_;
goto v___jp_302_;
}
else
{
lean_dec(v_fst_370_);
lean_dec(v_fst_365_);
v_fst_303_ = v_e_296_;
v_snd_304_ = v_snd_371_;
goto v___jp_302_;
}
}
}
}
case 8:
{
lean_object* v_declName_383_; lean_object* v_type_384_; lean_object* v_value_385_; lean_object* v_body_386_; uint8_t v_nondep_387_; lean_object* v___x_388_; lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_391_; lean_object* v_fst_392_; lean_object* v_snd_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v_fst_397_; lean_object* v_snd_398_; uint8_t v___y_400_; size_t v___x_406_; size_t v___x_407_; uint8_t v___x_408_; 
v_declName_383_ = lean_ctor_get(v_e_296_, 0);
v_type_384_ = lean_ctor_get(v_e_296_, 1);
v_value_385_ = lean_ctor_get(v_e_296_, 2);
v_body_386_ = lean_ctor_get(v_e_296_, 3);
v_nondep_387_ = lean_ctor_get_uint8(v_e_296_, sizeof(void*)*4 + 8);
lean_inc(v_offset_297_);
lean_inc_ref(v_type_384_);
v___x_388_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_type_384_, v_offset_297_, v_a_298_);
v_fst_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_fst_389_);
v_snd_390_ = lean_ctor_get(v___x_388_, 1);
lean_inc(v_snd_390_);
lean_dec_ref(v___x_388_);
lean_inc(v_offset_297_);
lean_inc_ref(v_value_385_);
v___x_391_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_value_385_, v_offset_297_, v_snd_390_);
v_fst_392_ = lean_ctor_get(v___x_391_, 0);
lean_inc(v_fst_392_);
v_snd_393_ = lean_ctor_get(v___x_391_, 1);
lean_inc(v_snd_393_);
lean_dec_ref(v___x_391_);
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_offset_297_, v___x_394_);
lean_dec(v_offset_297_);
lean_inc_ref(v_body_386_);
v___x_396_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_body_386_, v___x_395_, v_snd_393_);
v_fst_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_fst_397_);
v_snd_398_ = lean_ctor_get(v___x_396_, 1);
lean_inc(v_snd_398_);
lean_dec_ref(v___x_396_);
v___x_406_ = lean_ptr_addr(v_type_384_);
v___x_407_ = lean_ptr_addr(v_fst_389_);
v___x_408_ = lean_usize_dec_eq(v___x_406_, v___x_407_);
if (v___x_408_ == 0)
{
v___y_400_ = v___x_408_;
goto v___jp_399_;
}
else
{
size_t v___x_409_; size_t v___x_410_; uint8_t v___x_411_; 
v___x_409_ = lean_ptr_addr(v_value_385_);
v___x_410_ = lean_ptr_addr(v_fst_392_);
v___x_411_ = lean_usize_dec_eq(v___x_409_, v___x_410_);
v___y_400_ = v___x_411_;
goto v___jp_399_;
}
v___jp_399_:
{
if (v___y_400_ == 0)
{
lean_object* v___x_401_; 
lean_inc(v_declName_383_);
lean_dec_ref(v_e_296_);
v___x_401_ = l_Lean_Expr_letE___override(v_declName_383_, v_fst_389_, v_fst_392_, v_fst_397_, v_nondep_387_);
v_fst_303_ = v___x_401_;
v_snd_304_ = v_snd_398_;
goto v___jp_302_;
}
else
{
size_t v___x_402_; size_t v___x_403_; uint8_t v___x_404_; 
v___x_402_ = lean_ptr_addr(v_body_386_);
v___x_403_ = lean_ptr_addr(v_fst_397_);
v___x_404_ = lean_usize_dec_eq(v___x_402_, v___x_403_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; 
lean_inc(v_declName_383_);
lean_dec_ref(v_e_296_);
v___x_405_ = l_Lean_Expr_letE___override(v_declName_383_, v_fst_389_, v_fst_392_, v_fst_397_, v_nondep_387_);
v_fst_303_ = v___x_405_;
v_snd_304_ = v_snd_398_;
goto v___jp_302_;
}
else
{
lean_dec(v_fst_397_);
lean_dec(v_fst_392_);
lean_dec(v_fst_389_);
v_fst_303_ = v_e_296_;
v_snd_304_ = v_snd_398_;
goto v___jp_302_;
}
}
}
}
case 9:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec_ref(v_e_296_);
lean_dec(v_offset_297_);
v___x_412_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7);
v___x_413_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_412_, v_a_298_);
v___y_308_ = v___x_413_;
goto v___jp_307_;
}
case 10:
{
lean_object* v_data_414_; lean_object* v_expr_415_; lean_object* v___x_416_; lean_object* v_fst_417_; lean_object* v_snd_418_; size_t v___x_419_; size_t v___x_420_; uint8_t v___x_421_; 
v_data_414_ = lean_ctor_get(v_e_296_, 0);
v_expr_415_ = lean_ctor_get(v_e_296_, 1);
lean_inc_ref(v_expr_415_);
v___x_416_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_expr_415_, v_offset_297_, v_a_298_);
v_fst_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_fst_417_);
v_snd_418_ = lean_ctor_get(v___x_416_, 1);
lean_inc(v_snd_418_);
lean_dec_ref(v___x_416_);
v___x_419_ = lean_ptr_addr(v_expr_415_);
v___x_420_ = lean_ptr_addr(v_fst_417_);
v___x_421_ = lean_usize_dec_eq(v___x_419_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
lean_inc(v_data_414_);
lean_dec_ref(v_e_296_);
v___x_422_ = l_Lean_Expr_mdata___override(v_data_414_, v_fst_417_);
v_fst_303_ = v___x_422_;
v_snd_304_ = v_snd_418_;
goto v___jp_302_;
}
else
{
lean_dec(v_fst_417_);
v_fst_303_ = v_e_296_;
v_snd_304_ = v_snd_418_;
goto v___jp_302_;
}
}
default: 
{
lean_object* v_typeName_423_; lean_object* v_idx_424_; lean_object* v_struct_425_; lean_object* v___x_426_; lean_object* v_fst_427_; lean_object* v_snd_428_; size_t v___x_429_; size_t v___x_430_; uint8_t v___x_431_; 
v_typeName_423_ = lean_ctor_get(v_e_296_, 0);
v_idx_424_ = lean_ctor_get(v_e_296_, 1);
v_struct_425_ = lean_ctor_get(v_e_296_, 2);
lean_inc_ref(v_struct_425_);
v___x_426_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_293_, v_stop_294_, v_args_295_, v_struct_425_, v_offset_297_, v_a_298_);
v_fst_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_fst_427_);
v_snd_428_ = lean_ctor_get(v___x_426_, 1);
lean_inc(v_snd_428_);
lean_dec_ref(v___x_426_);
v___x_429_ = lean_ptr_addr(v_struct_425_);
v___x_430_ = lean_ptr_addr(v_fst_427_);
v___x_431_ = lean_usize_dec_eq(v___x_429_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
lean_inc(v_idx_424_);
lean_inc(v_typeName_423_);
lean_dec_ref(v_e_296_);
v___x_432_ = l_Lean_Expr_proj___override(v_typeName_423_, v_idx_424_, v_fst_427_);
v_fst_303_ = v___x_432_;
v_snd_304_ = v_snd_428_;
goto v___jp_302_;
}
else
{
lean_dec(v_fst_427_);
v_fst_303_ = v_e_296_;
v_snd_304_ = v_snd_428_;
goto v___jp_302_;
}
}
}
}
else
{
lean_object* v_val_433_; lean_object* v___x_434_; 
lean_dec_ref(v___x_301_);
lean_dec(v_offset_297_);
lean_dec_ref(v_e_296_);
v_val_433_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_val_433_);
lean_dec_ref(v___x_311_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v_val_433_);
lean_ctor_set(v___x_434_, 1, v_a_298_);
return v___x_434_;
}
v___jp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
lean_inc_ref(v_fst_303_);
v___x_305_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1___redArg(v_snd_304_, v___x_301_, v_fst_303_);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v_fst_303_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
return v___x_306_;
}
v___jp_307_:
{
lean_object* v_fst_309_; lean_object* v_snd_310_; 
v_fst_309_ = lean_ctor_get(v___y_308_, 0);
lean_inc(v_fst_309_);
v_snd_310_ = lean_ctor_get(v___y_308_, 1);
lean_inc(v_snd_310_);
lean_dec_ref(v___y_308_);
v_fst_303_ = v_fst_309_;
v_snd_304_ = v_snd_310_;
goto v___jp_302_;
}
}
else
{
lean_object* v___x_435_; 
lean_dec(v_offset_297_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v_e_296_);
lean_ctor_set(v___x_435_, 1, v_a_298_);
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__0(lean_object* v_start_436_, lean_object* v_stop_437_, lean_object* v_args_438_, lean_object* v_offset_439_, size_t v_sz_440_, size_t v_i_441_, lean_object* v_bs_442_, lean_object* v___y_443_){
_start:
{
uint8_t v___x_444_; 
v___x_444_ = lean_usize_dec_lt(v_i_441_, v_sz_440_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; 
lean_dec(v_offset_439_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v_bs_442_);
lean_ctor_set(v___x_445_, 1, v___y_443_);
return v___x_445_;
}
else
{
lean_object* v_v_446_; lean_object* v___x_447_; lean_object* v_fst_448_; lean_object* v_snd_449_; lean_object* v___x_450_; lean_object* v_bs_x27_451_; size_t v___x_452_; size_t v___x_453_; lean_object* v___x_454_; 
v_v_446_ = lean_array_uget_borrowed(v_bs_442_, v_i_441_);
lean_inc(v_offset_439_);
lean_inc(v_v_446_);
v___x_447_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_436_, v_stop_437_, v_args_438_, v_v_446_, v_offset_439_, v___y_443_);
v_fst_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc(v_fst_448_);
v_snd_449_ = lean_ctor_get(v___x_447_, 1);
lean_inc(v_snd_449_);
lean_dec_ref(v___x_447_);
v___x_450_ = lean_unsigned_to_nat(0u);
v_bs_x27_451_ = lean_array_uset(v_bs_442_, v_i_441_, v___x_450_);
v___x_452_ = ((size_t)1ULL);
v___x_453_ = lean_usize_add(v_i_441_, v___x_452_);
v___x_454_ = lean_array_uset(v_bs_x27_451_, v_i_441_, v_fst_448_);
v_i_441_ = v___x_453_;
v_bs_442_ = v___x_454_;
v___y_443_ = v_snd_449_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__0___boxed(lean_object* v_start_456_, lean_object* v_stop_457_, lean_object* v_args_458_, lean_object* v_offset_459_, lean_object* v_sz_460_, lean_object* v_i_461_, lean_object* v_bs_462_, lean_object* v___y_463_){
_start:
{
size_t v_sz_boxed_464_; size_t v_i_boxed_465_; lean_object* v_res_466_; 
v_sz_boxed_464_ = lean_unbox_usize(v_sz_460_);
lean_dec(v_sz_460_);
v_i_boxed_465_ = lean_unbox_usize(v_i_461_);
lean_dec(v_i_461_);
v_res_466_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__0(v_start_456_, v_stop_457_, v_args_458_, v_offset_459_, v_sz_boxed_464_, v_i_boxed_465_, v_bs_462_, v___y_463_);
lean_dec_ref(v_args_458_);
lean_dec(v_stop_457_);
lean_dec(v_start_456_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object* v_start_467_, lean_object* v_stop_468_, lean_object* v_args_469_, lean_object* v_offset_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v___y_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_467_, v_stop_468_, v_args_469_, v_offset_470_, v_x_471_, v_x_472_, v___y_473_);
lean_dec_ref(v_args_469_);
lean_dec(v_stop_468_);
lean_dec(v_start_467_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed(lean_object* v_start_475_, lean_object* v_stop_476_, lean_object* v_args_477_, lean_object* v_e_478_, lean_object* v_offset_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_475_, v_stop_476_, v_args_477_, v_e_478_, v_offset_479_, v_a_480_);
lean_dec_ref(v_args_477_);
lean_dec(v_stop_476_);
lean_dec(v_start_475_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1(lean_object* v_00_u03b2_482_, lean_object* v_m_483_, lean_object* v_a_484_, lean_object* v_b_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1___redArg(v_m_483_, v_a_484_, v_b_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2(lean_object* v_00_u03b2_487_, lean_object* v_m_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___redArg(v_m_488_, v_a_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2___boxed(lean_object* v_00_u03b2_491_, lean_object* v_m_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2(v_00_u03b2_491_, v_m_492_, v_a_493_);
lean_dec_ref(v_a_493_);
lean_dec_ref(v_m_492_);
return v_res_494_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1(lean_object* v_00_u03b2_495_, lean_object* v_a_496_, lean_object* v_x_497_){
_start:
{
uint8_t v___x_498_; 
v___x_498_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___redArg(v_a_496_, v_x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1___boxed(lean_object* v_00_u03b2_499_, lean_object* v_a_500_, lean_object* v_x_501_){
_start:
{
uint8_t v_res_502_; lean_object* v_r_503_; 
v_res_502_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__1(v_00_u03b2_499_, v_a_500_, v_x_501_);
lean_dec(v_x_501_);
lean_dec_ref(v_a_500_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2(lean_object* v_00_u03b2_504_, lean_object* v_data_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2___redArg(v_data_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3(lean_object* v_00_u03b2_507_, lean_object* v_a_508_, lean_object* v_b_509_, lean_object* v_x_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__3___redArg(v_a_508_, v_b_509_, v_x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5(lean_object* v_00_u03b2_512_, lean_object* v_a_513_, lean_object* v_x_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___redArg(v_a_513_, v_x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5___boxed(lean_object* v_00_u03b2_516_, lean_object* v_a_517_, lean_object* v_x_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__2_spec__5(v_00_u03b2_516_, v_a_517_, v_x_518_);
lean_dec(v_x_518_);
lean_dec_ref(v_a_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_520_, lean_object* v_i_521_, lean_object* v_source_522_, lean_object* v_target_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4___redArg(v_i_521_, v_source_522_, v_target_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_525_, lean_object* v_x_526_, lean_object* v_x_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__1_spec__2_spec__4_spec__7___redArg(v_x_526_, v_x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object* v_msg_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = l_Lean_instInhabitedExpr;
v___x_531_ = lean_panic_fn(v___x_530_, v_msg_529_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__2(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_534_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__1));
v___x_535_ = lean_unsigned_to_nat(4u);
v___x_536_ = lean_unsigned_to_nat(34u);
v___x_537_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__0));
v___x_538_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_539_ = l_mkPanicMessageWithDecl(v___x_538_, v___x_537_, v___x_536_, v___x_535_, v___x_534_);
return v___x_539_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__3(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = lean_box(0);
v___x_541_ = lean_unsigned_to_nat(16u);
v___x_542_ = lean_mk_array(v___x_541_, v___x_540_);
return v___x_542_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__4(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__3, &l_Lean_Expr_instantiateBetaRevRange___closed__3_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__3);
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
lean_ctor_set(v___x_545_, 1, v___x_543_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object* v_e_546_, lean_object* v_start_547_, lean_object* v_stop_548_, lean_object* v_args_549_){
_start:
{
uint8_t v___y_551_; uint8_t v___x_560_; 
v___x_560_ = l_Lean_Expr_hasLooseBVars(v_e_546_);
if (v___x_560_ == 0)
{
v___y_551_ = v___x_560_;
goto v___jp_550_;
}
else
{
uint8_t v___x_561_; 
v___x_561_ = lean_nat_dec_lt(v_start_547_, v_stop_548_);
v___y_551_ = v___x_561_;
goto v___jp_550_;
}
v___jp_550_:
{
if (v___y_551_ == 0)
{
return v_e_546_;
}
else
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_array_get_size(v_args_549_);
v___x_553_ = lean_nat_dec_le(v_stop_548_, v___x_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec_ref(v_e_546_);
v___x_554_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__2, &l_Lean_Expr_instantiateBetaRevRange___closed__2_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__2);
v___x_555_ = l_panic___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v___x_554_);
return v___x_555_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v_fst_559_; 
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__4, &l_Lean_Expr_instantiateBetaRevRange___closed__4_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__4);
v___x_558_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_547_, v_stop_548_, v_args_549_, v_e_546_, v___x_556_, v___x_557_);
v_fst_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_fst_559_);
lean_dec_ref(v___x_558_);
return v_fst_559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange___boxed(lean_object* v_e_562_, lean_object* v_start_563_, lean_object* v_stop_564_, lean_object* v_args_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Expr_instantiateBetaRevRange(v_e_562_, v_start_563_, v_stop_564_, v_args_565_);
lean_dec_ref(v_args_565_);
lean_dec(v_stop_564_);
lean_dec(v_start_563_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object* v_msgData_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v___x_573_; lean_object* v_env_574_; lean_object* v___x_575_; lean_object* v_mctx_576_; lean_object* v_lctx_577_; lean_object* v_options_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_573_ = lean_st_ref_get(v___y_571_);
v_env_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc_ref(v_env_574_);
lean_dec(v___x_573_);
v___x_575_ = lean_st_ref_get(v___y_569_);
v_mctx_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc_ref(v_mctx_576_);
lean_dec(v___x_575_);
v_lctx_577_ = lean_ctor_get(v___y_568_, 2);
v_options_578_ = lean_ctor_get(v___y_570_, 2);
lean_inc_ref(v_options_578_);
lean_inc_ref(v_lctx_577_);
v___x_579_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_579_, 0, v_env_574_);
lean_ctor_set(v___x_579_, 1, v_mctx_576_);
lean_ctor_set(v___x_579_, 2, v_lctx_577_);
lean_ctor_set(v___x_579_, 3, v_options_578_);
v___x_580_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v_msgData_567_);
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object* v_msgData_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msgData_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object* v_msg_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v_ref_595_; lean_object* v___x_596_; lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_605_; 
v_ref_595_ = lean_ctor_get(v___y_592_, 5);
v___x_596_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msg_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_605_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_605_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_605_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
lean_inc(v_ref_595_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v_ref_595_);
lean_ctor_set(v___x_601_, 1, v_a_597_);
if (v_isShared_600_ == 0)
{
lean_ctor_set_tag(v___x_599_, 1);
lean_ctor_set(v___x_599_, 0, v___x_601_);
v___x_603_ = v___x_599_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object* v_msg_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
return v_res_612_;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = ((lean_object*)(l_Lean_Meta_throwFunctionExpected___redArg___closed__0));
v___x_615_ = l_Lean_stringToMessageData(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object* v_f_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_622_ = lean_obj_once(&l_Lean_Meta_throwFunctionExpected___redArg___closed__1, &l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1);
v___x_623_ = l_Lean_indentExpr(v_f_616_);
v___x_624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_624_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object* v_f_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object* v_00_u03b1_633_, lean_object* v_f_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object* v_00_u03b1_641_, lean_object* v_f_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Lean_Meta_throwFunctionExpected(v_00_u03b1_641_, v_f_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object* v_00_u03b1_649_, lean_object* v_msg_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object* v_00_u03b1_657_, lean_object* v_msg_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(v_00_u03b1_657_, v_msg_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object* v_upperBound_665_, lean_object* v_args_666_, lean_object* v_f_667_, lean_object* v_a_668_, lean_object* v_b_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_a_676_; uint8_t v___x_680_; 
v___x_680_ = lean_nat_dec_lt(v_a_668_, v_upperBound_665_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; 
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v_a_668_);
lean_dec_ref(v_f_667_);
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v_b_669_);
return v___x_681_;
}
else
{
lean_object* v_fst_682_; 
v_fst_682_ = lean_ctor_get(v_b_669_, 0);
lean_inc(v_fst_682_);
if (lean_obj_tag(v_fst_682_) == 7)
{
lean_object* v_snd_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_691_; 
v_snd_683_ = lean_ctor_get(v_b_669_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v_b_669_);
if (v_isSharedCheck_691_ == 0)
{
lean_object* v_unused_692_; 
v_unused_692_ = lean_ctor_get(v_b_669_, 0);
lean_dec(v_unused_692_);
v___x_685_ = v_b_669_;
v_isShared_686_ = v_isSharedCheck_691_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_snd_683_);
lean_dec(v_b_669_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_691_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v_body_687_; lean_object* v___x_689_; 
v_body_687_ = lean_ctor_get(v_fst_682_, 2);
lean_inc_ref(v_body_687_);
lean_dec_ref(v_fst_682_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v_body_687_);
v___x_689_ = v___x_685_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_body_687_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_snd_683_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
v_a_676_ = v___x_689_;
goto v___jp_675_;
}
}
}
else
{
lean_object* v_snd_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_728_; 
v_snd_693_ = lean_ctor_get(v_b_669_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_b_669_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; 
v_unused_729_ = lean_ctor_get(v_b_669_, 0);
lean_dec(v_unused_729_);
v___x_695_ = v_b_669_;
v_isShared_696_ = v_isSharedCheck_728_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_snd_693_);
lean_dec(v_b_669_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_728_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_inc(v_fst_682_);
v___x_697_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_682_, v_snd_693_, v_a_668_, v_args_666_);
lean_inc(v___y_673_);
lean_inc_ref(v___y_672_);
lean_inc(v___y_671_);
lean_inc_ref(v___y_670_);
v___x_698_ = lean_whnf(v___x_697_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_a_699_);
lean_dec_ref(v___x_698_);
if (lean_obj_tag(v_a_699_) == 7)
{
lean_object* v_body_700_; lean_object* v___x_702_; 
lean_dec(v_snd_693_);
lean_dec(v_fst_682_);
v_body_700_ = lean_ctor_get(v_a_699_, 2);
lean_inc_ref(v_body_700_);
lean_dec_ref(v_a_699_);
lean_inc(v_a_668_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 1, v_a_668_);
lean_ctor_set(v___x_695_, 0, v_body_700_);
v___x_702_ = v___x_695_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_body_700_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_a_668_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
v_a_676_ = v___x_702_;
goto v___jp_675_;
}
}
else
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec(v_a_699_);
v___x_704_ = lean_unsigned_to_nat(0u);
v___x_705_ = lean_unsigned_to_nat(1u);
v___x_706_ = lean_nat_add(v_a_668_, v___x_705_);
lean_inc_ref(v_f_667_);
v___x_707_ = l_Lean_mkAppRange(v_f_667_, v___x_704_, v___x_706_, v_args_666_);
lean_dec(v___x_706_);
v___x_708_ = l_Lean_Meta_throwFunctionExpected___redArg(v___x_707_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_710_; 
lean_dec_ref(v___x_708_);
if (v_isShared_696_ == 0)
{
v___x_710_ = v___x_695_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_fst_682_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_snd_693_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
v_a_676_ = v___x_710_;
goto v___jp_675_;
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_del_object(v___x_695_);
lean_dec(v_snd_693_);
lean_dec(v_fst_682_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v_a_668_);
lean_dec_ref(v_f_667_);
v_a_712_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_708_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_708_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_del_object(v___x_695_);
lean_dec(v_snd_693_);
lean_dec(v_fst_682_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v_a_668_);
lean_dec_ref(v_f_667_);
v_a_720_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_698_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_698_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_unsigned_to_nat(1u);
v___x_678_ = lean_nat_add(v_a_668_, v___x_677_);
lean_dec(v_a_668_);
v_a_668_ = v___x_678_;
v_b_669_ = v_a_676_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object* v_upperBound_730_, lean_object* v_args_731_, lean_object* v_f_732_, lean_object* v_a_733_, lean_object* v_b_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_730_, v_args_731_, v_f_732_, v_a_733_, v_b_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec_ref(v_args_731_);
lean_dec(v_upperBound_730_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object* v_f_741_, lean_object* v_args_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v___x_748_; 
lean_inc(v_a_746_);
lean_inc_ref(v_a_745_);
lean_inc(v_a_744_);
lean_inc_ref(v_a_743_);
lean_inc_ref(v_f_741_);
v___x_748_ = lean_infer_type(v_f_741_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref(v___x_748_);
v___x_750_ = lean_array_get_size(v_args_742_);
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v_a_749_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v___x_750_, v_args_742_, v_f_741_, v___x_751_, v___x_752_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_764_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_764_ == 0)
{
v___x_756_ = v___x_753_;
v_isShared_757_ = v_isSharedCheck_764_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_753_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_764_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v_fst_758_; lean_object* v_snd_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
v_fst_758_ = lean_ctor_get(v_a_754_, 0);
lean_inc(v_fst_758_);
v_snd_759_ = lean_ctor_get(v_a_754_, 1);
lean_inc(v_snd_759_);
lean_dec(v_a_754_);
v___x_760_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_758_, v_snd_759_, v___x_750_, v_args_742_);
lean_dec(v_snd_759_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_760_);
v___x_762_ = v___x_756_;
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
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
v_a_765_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_753_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_753_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_a_744_);
lean_dec_ref(v_a_743_);
lean_dec_ref(v_f_741_);
return v___x_748_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object* v_f_773_, lean_object* v_args_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v_f_773_, v_args_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_);
lean_dec_ref(v_args_774_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object* v_upperBound_781_, lean_object* v_args_782_, lean_object* v_f_783_, lean_object* v_inst_784_, lean_object* v_R_785_, lean_object* v_a_786_, lean_object* v_b_787_, lean_object* v_c_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_781_, v_args_782_, v_f_783_, v_a_786_, v_b_787_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object* v_upperBound_795_, lean_object* v_args_796_, lean_object* v_f_797_, lean_object* v_inst_798_, lean_object* v_R_799_, lean_object* v_a_800_, lean_object* v_b_801_, lean_object* v_c_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(v_upperBound_795_, v_args_796_, v_f_797_, v_inst_798_, v_R_799_, v_a_800_, v_b_801_, v_c_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec_ref(v_args_796_);
lean_dec(v_upperBound_795_);
return v_res_808_;
}
}
static lean_object* _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1(void){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = ((lean_object*)(l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0));
v___x_811_ = l_Lean_stringToMessageData(v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object* v_constName_812_, lean_object* v_us_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_819_ = lean_obj_once(&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1, &l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once, _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1);
v___x_820_ = l_Lean_mkConst(v_constName_812_, v_us_813_);
v___x_821_ = l_Lean_MessageData_ofExpr(v___x_820_);
v___x_822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_819_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v___x_823_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_822_, v_a_814_, v_a_815_, v_a_816_, v_a_817_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object* v_constName_824_, lean_object* v_us_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_824_, v_us_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
lean_dec(v_a_829_);
lean_dec_ref(v_a_828_);
lean_dec(v_a_827_);
lean_dec_ref(v_a_826_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object* v_00_u03b1_832_, lean_object* v_constName_833_, lean_object* v_us_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_833_, v_us_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object* v_00_u03b1_841_, lean_object* v_constName_842_, lean_object* v_us_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lean_Meta_throwIncorrectNumberOfLevels(v_00_u03b1_841_, v_constName_842_, v_us_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_850_, lean_object* v_msg_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
lean_object* v_fileName_857_; lean_object* v_fileMap_858_; lean_object* v_options_859_; lean_object* v_currRecDepth_860_; lean_object* v_maxRecDepth_861_; lean_object* v_ref_862_; lean_object* v_currNamespace_863_; lean_object* v_openDecls_864_; lean_object* v_initHeartbeats_865_; lean_object* v_maxHeartbeats_866_; lean_object* v_quotContext_867_; lean_object* v_currMacroScope_868_; uint8_t v_diag_869_; lean_object* v_cancelTk_x3f_870_; uint8_t v_suppressElabErrors_871_; lean_object* v_inheritedTraceOptions_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_881_; 
v_fileName_857_ = lean_ctor_get(v___y_854_, 0);
v_fileMap_858_ = lean_ctor_get(v___y_854_, 1);
v_options_859_ = lean_ctor_get(v___y_854_, 2);
v_currRecDepth_860_ = lean_ctor_get(v___y_854_, 3);
v_maxRecDepth_861_ = lean_ctor_get(v___y_854_, 4);
v_ref_862_ = lean_ctor_get(v___y_854_, 5);
v_currNamespace_863_ = lean_ctor_get(v___y_854_, 6);
v_openDecls_864_ = lean_ctor_get(v___y_854_, 7);
v_initHeartbeats_865_ = lean_ctor_get(v___y_854_, 8);
v_maxHeartbeats_866_ = lean_ctor_get(v___y_854_, 9);
v_quotContext_867_ = lean_ctor_get(v___y_854_, 10);
v_currMacroScope_868_ = lean_ctor_get(v___y_854_, 11);
v_diag_869_ = lean_ctor_get_uint8(v___y_854_, sizeof(void*)*14);
v_cancelTk_x3f_870_ = lean_ctor_get(v___y_854_, 12);
v_suppressElabErrors_871_ = lean_ctor_get_uint8(v___y_854_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_872_ = lean_ctor_get(v___y_854_, 13);
v_isSharedCheck_881_ = !lean_is_exclusive(v___y_854_);
if (v_isSharedCheck_881_ == 0)
{
v___x_874_ = v___y_854_;
v_isShared_875_ = v_isSharedCheck_881_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_inheritedTraceOptions_872_);
lean_inc(v_cancelTk_x3f_870_);
lean_inc(v_currMacroScope_868_);
lean_inc(v_quotContext_867_);
lean_inc(v_maxHeartbeats_866_);
lean_inc(v_initHeartbeats_865_);
lean_inc(v_openDecls_864_);
lean_inc(v_currNamespace_863_);
lean_inc(v_ref_862_);
lean_inc(v_maxRecDepth_861_);
lean_inc(v_currRecDepth_860_);
lean_inc(v_options_859_);
lean_inc(v_fileMap_858_);
lean_inc(v_fileName_857_);
lean_dec(v___y_854_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_881_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v_ref_876_; lean_object* v___x_878_; 
v_ref_876_ = l_Lean_replaceRef(v_ref_850_, v_ref_862_);
lean_dec(v_ref_862_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 5, v_ref_876_);
v___x_878_ = v___x_874_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_fileName_857_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_fileMap_858_);
lean_ctor_set(v_reuseFailAlloc_880_, 2, v_options_859_);
lean_ctor_set(v_reuseFailAlloc_880_, 3, v_currRecDepth_860_);
lean_ctor_set(v_reuseFailAlloc_880_, 4, v_maxRecDepth_861_);
lean_ctor_set(v_reuseFailAlloc_880_, 5, v_ref_876_);
lean_ctor_set(v_reuseFailAlloc_880_, 6, v_currNamespace_863_);
lean_ctor_set(v_reuseFailAlloc_880_, 7, v_openDecls_864_);
lean_ctor_set(v_reuseFailAlloc_880_, 8, v_initHeartbeats_865_);
lean_ctor_set(v_reuseFailAlloc_880_, 9, v_maxHeartbeats_866_);
lean_ctor_set(v_reuseFailAlloc_880_, 10, v_quotContext_867_);
lean_ctor_set(v_reuseFailAlloc_880_, 11, v_currMacroScope_868_);
lean_ctor_set(v_reuseFailAlloc_880_, 12, v_cancelTk_x3f_870_);
lean_ctor_set(v_reuseFailAlloc_880_, 13, v_inheritedTraceOptions_872_);
lean_ctor_set_uint8(v_reuseFailAlloc_880_, sizeof(void*)*14, v_diag_869_);
lean_ctor_set_uint8(v_reuseFailAlloc_880_, sizeof(void*)*14 + 1, v_suppressElabErrors_871_);
v___x_878_ = v_reuseFailAlloc_880_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; 
v___x_879_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_851_, v___y_852_, v___y_853_, v___x_878_, v___y_855_);
lean_dec_ref(v___x_878_);
return v___x_879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_882_, lean_object* v_msg_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_882_, v_msg_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v_ref_882_);
return v_res_889_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_890_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
return v___x_892_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
lean_ctor_set(v___x_895_, 2, v___x_894_);
lean_ctor_set(v___x_895_, 3, v___x_893_);
lean_ctor_set(v___x_895_, 4, v___x_893_);
lean_ctor_set(v___x_895_, 5, v___x_893_);
lean_ctor_set(v___x_895_, 6, v___x_893_);
lean_ctor_set(v___x_895_, 7, v___x_893_);
lean_ctor_set(v___x_895_, 8, v___x_893_);
return v___x_895_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = lean_unsigned_to_nat(32u);
v___x_897_ = lean_mk_empty_array_with_capacity(v___x_896_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_899_ = ((size_t)5ULL);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = lean_unsigned_to_nat(32u);
v___x_902_ = lean_mk_empty_array_with_capacity(v___x_901_);
v___x_903_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_904_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set(v___x_904_, 1, v___x_902_);
lean_ctor_set(v___x_904_, 2, v___x_900_);
lean_ctor_set(v___x_904_, 3, v___x_900_);
lean_ctor_set_usize(v___x_904_, 4, v___x_899_);
return v___x_904_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_905_ = lean_box(1);
v___x_906_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_907_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_908_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v___x_906_);
lean_ctor_set(v___x_908_, 2, v___x_905_);
return v___x_908_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_911_ = l_Lean_stringToMessageData(v___x_910_);
return v___x_911_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_914_ = l_Lean_stringToMessageData(v___x_913_);
return v___x_914_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_917_ = l_Lean_stringToMessageData(v___x_916_);
return v___x_917_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_920_ = l_Lean_stringToMessageData(v___x_919_);
return v___x_920_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14));
v___x_923_ = l_Lean_stringToMessageData(v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16));
v___x_926_ = l_Lean_stringToMessageData(v___x_925_);
return v___x_926_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18));
v___x_929_ = l_Lean_stringToMessageData(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_930_, lean_object* v_declHint_931_, lean_object* v___y_932_){
_start:
{
lean_object* v___x_934_; lean_object* v_env_935_; uint8_t v___x_936_; 
v___x_934_ = lean_st_ref_get(v___y_932_);
v_env_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc_ref(v_env_935_);
lean_dec(v___x_934_);
v___x_936_ = l_Lean_Name_isAnonymous(v_declHint_931_);
if (v___x_936_ == 0)
{
uint8_t v_isExporting_937_; 
v_isExporting_937_ = lean_ctor_get_uint8(v_env_935_, sizeof(void*)*8);
if (v_isExporting_937_ == 0)
{
lean_object* v___x_938_; 
lean_dec_ref(v_env_935_);
lean_dec(v_declHint_931_);
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v_msg_930_);
return v___x_938_;
}
else
{
lean_object* v___x_939_; uint8_t v___x_940_; 
lean_inc_ref(v_env_935_);
v___x_939_ = l_Lean_Environment_setExporting(v_env_935_, v___x_936_);
lean_inc(v_declHint_931_);
lean_inc_ref(v___x_939_);
v___x_940_ = l_Lean_Environment_contains(v___x_939_, v_declHint_931_, v_isExporting_937_);
if (v___x_940_ == 0)
{
lean_object* v___x_941_; 
lean_dec_ref(v___x_939_);
lean_dec_ref(v_env_935_);
lean_dec(v_declHint_931_);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v_msg_930_);
return v___x_941_;
}
else
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_c_947_; lean_object* v___x_948_; 
v___x_942_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_943_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_944_ = l_Lean_Options_empty;
v___x_945_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_945_, 0, v___x_939_);
lean_ctor_set(v___x_945_, 1, v___x_942_);
lean_ctor_set(v___x_945_, 2, v___x_943_);
lean_ctor_set(v___x_945_, 3, v___x_944_);
lean_inc(v_declHint_931_);
v___x_946_ = l_Lean_MessageData_ofConstName(v_declHint_931_, v___x_936_);
v_c_947_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_947_, 0, v___x_945_);
lean_ctor_set(v_c_947_, 1, v___x_946_);
v___x_948_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_935_, v_declHint_931_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec_ref(v_env_935_);
lean_dec(v_declHint_931_);
v___x_949_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v_c_947_);
v___x_951_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = l_Lean_MessageData_note(v___x_952_);
v___x_954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_954_, 0, v_msg_930_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
else
{
lean_object* v_val_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_991_; 
v_val_956_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_991_ == 0)
{
v___x_958_ = v___x_948_;
v_isShared_959_ = v_isSharedCheck_991_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_val_956_);
lean_dec(v___x_948_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_991_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v_mod_963_; uint8_t v___x_964_; 
v___x_960_ = lean_box(0);
v___x_961_ = l_Lean_Environment_header(v_env_935_);
lean_dec_ref(v_env_935_);
v___x_962_ = l_Lean_EnvironmentHeader_moduleNames(v___x_961_);
v_mod_963_ = lean_array_get(v___x_960_, v___x_962_, v_val_956_);
lean_dec(v_val_956_);
lean_dec_ref(v___x_962_);
v___x_964_ = l_Lean_isPrivateName(v_declHint_931_);
lean_dec(v_declHint_931_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_965_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set(v___x_966_, 1, v_c_947_);
v___x_967_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = l_Lean_MessageData_ofName(v_mod_963_);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = l_Lean_MessageData_note(v___x_972_);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v_msg_930_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
if (v_isShared_959_ == 0)
{
lean_ctor_set_tag(v___x_958_, 0);
lean_ctor_set(v___x_958_, 0, v___x_974_);
v___x_976_ = v___x_958_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_978_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
lean_ctor_set(v___x_979_, 1, v_c_947_);
v___x_980_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17);
v___x_981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = l_Lean_MessageData_ofName(v_mod_963_);
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_MessageData_note(v___x_985_);
v___x_987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_987_, 0, v_msg_930_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
if (v_isShared_959_ == 0)
{
lean_ctor_set_tag(v___x_958_, 0);
lean_ctor_set(v___x_958_, 0, v___x_987_);
v___x_989_ = v___x_958_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_992_; 
lean_dec_ref(v_env_935_);
lean_dec(v_declHint_931_);
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v_msg_930_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_993_, lean_object* v_declHint_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_993_, v_declHint_994_, v___y_995_);
lean_dec(v___y_995_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_998_, lean_object* v_declHint_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1015_; 
v___x_1005_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_998_, v_declHint_999_, v___y_1003_);
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1015_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1015_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1010_ = l_Lean_unknownIdentifierMessageTag;
v___x_1011_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set(v___x_1011_, 1, v_a_1006_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1011_);
v___x_1013_ = v___x_1008_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_1016_, lean_object* v_declHint_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1016_, v_declHint_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1024_, lean_object* v_msg_1025_, lean_object* v_declHint_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; lean_object* v_a_1033_; lean_object* v___x_1034_; 
v___x_1032_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1025_, v_declHint_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_a_1033_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1024_, v_a_1033_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1035_, lean_object* v_msg_1036_, lean_object* v_declHint_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1035_, v_msg_1036_, v_declHint_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v_ref_1035_);
return v_res_1043_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1046_ = l_Lean_stringToMessageData(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1049_ = l_Lean_stringToMessageData(v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1050_, lean_object* v_constName_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v___x_1057_; uint8_t v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1057_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1058_ = 0;
lean_inc(v_constName_1051_);
v___x_1059_ = l_Lean_MessageData_ofConstName(v_constName_1051_, v___x_1058_);
v___x_1060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1057_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1050_, v___x_1062_, v_constName_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1064_, lean_object* v_constName_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1064_, v_constName_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec(v___y_1069_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v_ref_1064_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object* v_constName_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_ref_1078_; lean_object* v___x_1079_; 
v_ref_1078_ = lean_ctor_get(v___y_1075_, 5);
lean_inc(v_ref_1078_);
v___x_1079_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1078_, v_constName_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v_ref_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object* v_constName_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v___x_1093_; lean_object* v_env_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; 
v___x_1093_ = lean_st_ref_get(v___y_1091_);
v_env_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc_ref(v_env_1094_);
lean_dec(v___x_1093_);
v___x_1095_ = 0;
lean_inc(v_constName_1087_);
v___x_1096_ = l_Lean_Environment_findConstVal_x3f(v_env_1094_, v_constName_1087_, v___x_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v___x_1097_; 
v___x_1097_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
return v___x_1097_;
}
else
{
lean_object* v_val_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
lean_dec_ref(v___y_1090_);
lean_dec(v_constName_1087_);
v_val_1098_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1096_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_val_1098_);
lean_dec(v___x_1096_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set_tag(v___x_1100_, 0);
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_val_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object* v_constName_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_constName_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object* v_c_1113_, lean_object* v_us_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v___x_1120_; 
lean_inc_ref(v_a_1117_);
lean_inc(v_c_1113_);
v___x_1120_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_c_1113_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v_levelParams_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref(v___x_1120_);
v_levelParams_1122_ = lean_ctor_get(v_a_1121_, 1);
v___x_1123_ = l_List_lengthTR___redArg(v_levelParams_1122_);
v___x_1124_ = l_List_lengthTR___redArg(v_us_1114_);
v___x_1125_ = lean_nat_dec_eq(v___x_1123_, v___x_1124_);
lean_dec(v___x_1124_);
lean_dec(v___x_1123_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_a_1121_);
v___x_1126_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_c_1113_, v_us_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
lean_dec_ref(v_a_1117_);
return v___x_1126_;
}
else
{
lean_object* v___x_1127_; 
lean_dec_ref(v_a_1117_);
lean_dec(v_c_1113_);
v___x_1127_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_1121_, v_us_1114_, v_a_1118_);
return v___x_1127_;
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec_ref(v_a_1117_);
lean_dec(v_us_1114_);
lean_dec(v_c_1113_);
v_a_1128_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1120_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1120_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object* v_c_1136_, lean_object* v_us_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_c_1136_, v_us_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
lean_dec(v_a_1141_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object* v_00_u03b1_1144_, lean_object* v_constName_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1152_, lean_object* v_constName_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(v_00_u03b1_1152_, v_constName_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1160_, lean_object* v_ref_1161_, lean_object* v_constName_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1161_, v_constName_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1169_, lean_object* v_ref_1170_, lean_object* v_constName_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(v_00_u03b1_1169_, v_ref_1170_, v_constName_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v_ref_1170_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1178_, lean_object* v_ref_1179_, lean_object* v_msg_1180_, lean_object* v_declHint_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1179_, v_msg_1180_, v_declHint_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1188_, lean_object* v_ref_1189_, lean_object* v_msg_1190_, lean_object* v_declHint_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1188_, v_ref_1189_, v_msg_1190_, v_declHint_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
lean_dec(v___y_1195_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v_ref_1189_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1198_, lean_object* v_declHint_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1198_, v_declHint_1199_, v___y_1203_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1206_, lean_object* v_declHint_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1206_, v_declHint_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1214_, lean_object* v_ref_1215_, lean_object* v_msg_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1215_, v_msg_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1223_, lean_object* v_ref_1224_, lean_object* v_msg_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1223_, v_ref_1224_, v_msg_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v_ref_1224_);
return v_res_1231_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0));
v___x_1234_ = l_Lean_stringToMessageData(v___x_1233_);
return v___x_1234_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2));
v___x_1237_ = l_Lean_stringToMessageData(v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object* v_structName_1238_, lean_object* v_idx_1239_, lean_object* v_e_1240_, lean_object* v_a_1241_, lean_object* v_00_u03b1_1242_, lean_object* v_x_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1249_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
v___x_1250_ = l_Lean_mkProj(v_structName_1238_, v_idx_1239_, v_e_1240_);
v___x_1251_ = l_Lean_indentExpr(v___x_1250_);
v___x_1252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1249_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = l_Lean_indentExpr(v_a_1241_);
v___x_1256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1254_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1256_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object* v_structName_1258_, lean_object* v_idx_1259_, lean_object* v_e_1260_, lean_object* v_a_1261_, lean_object* v_00_u03b1_1262_, lean_object* v_x_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1258_, v_idx_1259_, v_e_1260_, v_a_1261_, v_00_u03b1_1262_, v_x_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object* v_constName_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v___x_1276_; lean_object* v_env_1277_; uint8_t v___x_1278_; lean_object* v___x_1279_; 
v___x_1276_ = lean_st_ref_get(v___y_1274_);
v_env_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc_ref(v_env_1277_);
lean_dec(v___x_1276_);
v___x_1278_ = 0;
lean_inc(v_constName_1270_);
v___x_1279_ = l_Lean_Environment_find_x3f(v_env_1277_, v_constName_1270_, v___x_1278_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
return v___x_1280_;
}
else
{
lean_object* v_val_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
lean_dec_ref(v___y_1273_);
lean_dec(v_constName_1270_);
v_val_1281_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1279_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_val_1281_);
lean_dec(v___x_1279_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
lean_ctor_set_tag(v___x_1283_, 0);
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_val_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object* v_constName_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_constName_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
lean_dec(v___y_1293_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object* v_upperBound_1296_, lean_object* v_structName_1297_, lean_object* v_e_1298_, lean_object* v_idx_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_b_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_a_1309_; uint8_t v___x_1313_; 
v___x_1313_ = lean_nat_dec_lt(v_a_1301_, v_upperBound_1296_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; 
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_idx_1299_);
lean_dec_ref(v_e_1298_);
lean_dec(v_structName_1297_);
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_b_1302_);
return v___x_1314_;
}
else
{
lean_object* v___x_1315_; 
lean_inc(v___y_1306_);
lean_inc_ref(v___y_1305_);
lean_inc(v___y_1304_);
lean_inc_ref(v___y_1303_);
v___x_1315_ = lean_whnf(v_b_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1316_);
lean_dec_ref(v___x_1315_);
if (lean_obj_tag(v_a_1316_) == 7)
{
lean_object* v_body_1317_; uint8_t v___x_1318_; 
v_body_1317_ = lean_ctor_get(v_a_1316_, 2);
lean_inc_ref(v_body_1317_);
lean_dec_ref(v_a_1316_);
v___x_1318_ = l_Lean_Expr_hasLooseBVars(v_body_1317_);
if (v___x_1318_ == 0)
{
v_a_1309_ = v_body_1317_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
lean_inc_ref(v_e_1298_);
lean_inc(v_a_1301_);
lean_inc(v_structName_1297_);
v___x_1319_ = l_Lean_mkProj(v_structName_1297_, v_a_1301_, v_e_1298_);
v___x_1320_ = lean_expr_instantiate1(v_body_1317_, v___x_1319_);
lean_dec_ref(v___x_1319_);
lean_dec_ref(v_body_1317_);
v_a_1309_ = v___x_1320_;
goto v___jp_1308_;
}
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1321_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1298_);
lean_inc(v_idx_1299_);
lean_inc(v_structName_1297_);
v___x_1322_ = l_Lean_mkProj(v_structName_1297_, v_idx_1299_, v_e_1298_);
v___x_1323_ = l_Lean_indentExpr(v___x_1322_);
v___x_1324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1321_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
lean_inc_ref(v_a_1300_);
v___x_1327_ = l_Lean_indentExpr(v_a_1300_);
v___x_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1328_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_dec_ref(v___x_1329_);
v_a_1309_ = v_a_1316_;
goto v___jp_1308_;
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
lean_dec(v_a_1316_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_idx_1299_);
lean_dec_ref(v_e_1298_);
lean_dec(v_structName_1297_);
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1329_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1329_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
else
{
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_idx_1299_);
lean_dec_ref(v_e_1298_);
lean_dec(v_structName_1297_);
return v___x_1315_;
}
}
v___jp_1308_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = lean_unsigned_to_nat(1u);
v___x_1311_ = lean_nat_add(v_a_1301_, v___x_1310_);
lean_dec(v_a_1301_);
v_a_1301_ = v___x_1311_;
v_b_1302_ = v_a_1309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object* v_upperBound_1338_, lean_object* v_structName_1339_, lean_object* v_e_1340_, lean_object* v_idx_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_b_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1338_, v_structName_1339_, v_e_1340_, v_idx_1341_, v_a_1342_, v_a_1343_, v_b_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
lean_dec(v_upperBound_1338_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object* v_upperBound_1351_, lean_object* v_structName_1352_, lean_object* v_e_1353_, lean_object* v_idx_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_b_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_a_1364_; uint8_t v___x_1368_; 
v___x_1368_ = lean_nat_dec_lt(v_a_1356_, v_upperBound_1351_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; 
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v_a_1356_);
lean_dec_ref(v_a_1355_);
lean_dec(v_idx_1354_);
lean_dec_ref(v_e_1353_);
lean_dec(v_structName_1352_);
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v_b_1357_);
return v___x_1369_;
}
else
{
lean_object* v___x_1370_; 
lean_inc(v___y_1361_);
lean_inc_ref(v___y_1360_);
lean_inc(v___y_1359_);
lean_inc_ref(v___y_1358_);
v___x_1370_ = lean_whnf(v_b_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref(v___x_1370_);
if (lean_obj_tag(v_a_1371_) == 7)
{
lean_object* v_body_1372_; uint8_t v___x_1373_; 
v_body_1372_ = lean_ctor_get(v_a_1371_, 2);
lean_inc_ref(v_body_1372_);
lean_dec_ref(v_a_1371_);
v___x_1373_ = l_Lean_Expr_hasLooseBVars(v_body_1372_);
if (v___x_1373_ == 0)
{
v_a_1364_ = v_body_1372_;
goto v___jp_1363_;
}
else
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
lean_inc_ref(v_e_1353_);
lean_inc(v_a_1356_);
lean_inc(v_structName_1352_);
v___x_1374_ = l_Lean_mkProj(v_structName_1352_, v_a_1356_, v_e_1353_);
v___x_1375_ = lean_expr_instantiate1(v_body_1372_, v___x_1374_);
lean_dec_ref(v___x_1374_);
lean_dec_ref(v_body_1372_);
v_a_1364_ = v___x_1375_;
goto v___jp_1363_;
}
}
else
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1376_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1353_);
lean_inc(v_idx_1354_);
lean_inc(v_structName_1352_);
v___x_1377_ = l_Lean_mkProj(v_structName_1352_, v_idx_1354_, v_e_1353_);
v___x_1378_ = l_Lean_indentExpr(v___x_1377_);
v___x_1379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1376_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1379_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
lean_inc_ref(v_a_1355_);
v___x_1382_ = l_Lean_indentExpr(v_a_1355_);
v___x_1383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1381_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
v___x_1384_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1383_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_dec_ref(v___x_1384_);
v_a_1364_ = v_a_1371_;
goto v___jp_1363_;
}
else
{
lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1392_; 
lean_dec(v_a_1371_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v_a_1356_);
lean_dec_ref(v_a_1355_);
lean_dec(v_idx_1354_);
lean_dec_ref(v_e_1353_);
lean_dec(v_structName_1352_);
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1387_ = v___x_1384_;
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v___x_1384_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_a_1385_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
}
else
{
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v_a_1356_);
lean_dec_ref(v_a_1355_);
lean_dec(v_idx_1354_);
lean_dec_ref(v_e_1353_);
lean_dec(v_structName_1352_);
return v___x_1370_;
}
}
v___jp_1363_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_unsigned_to_nat(1u);
v___x_1366_ = lean_nat_add(v_a_1356_, v___x_1365_);
lean_dec(v_a_1356_);
v___x_1367_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1351_, v_structName_1352_, v_e_1353_, v_idx_1354_, v_a_1355_, v___x_1366_, v_a_1364_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
return v___x_1367_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object* v_upperBound_1393_, lean_object* v_structName_1394_, lean_object* v_e_1395_, lean_object* v_idx_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_b_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1393_, v_structName_1394_, v_e_1395_, v_idx_1396_, v_a_1397_, v_a_1398_, v_b_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
lean_dec(v_upperBound_1393_);
return v_res_1405_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0(void){
_start:
{
lean_object* v___x_1406_; lean_object* v_dummy_1407_; 
v___x_1406_ = lean_box(0);
v_dummy_1407_ = l_Lean_Expr_sort___override(v___x_1406_);
return v_dummy_1407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object* v_structName_1408_, lean_object* v_idx_1409_, lean_object* v_e_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_){
_start:
{
lean_object* v___x_1416_; 
lean_inc(v_a_1414_);
lean_inc_ref(v_a_1413_);
lean_inc(v_a_1412_);
lean_inc_ref(v_a_1411_);
lean_inc_ref(v_e_1410_);
v___x_1416_ = lean_infer_type(v_e_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref(v___x_1416_);
lean_inc(v_a_1414_);
lean_inc_ref(v_a_1413_);
lean_inc(v_a_1412_);
lean_inc_ref(v_a_1411_);
v___x_1418_ = lean_whnf(v_a_1417_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1420_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref(v___x_1418_);
v___x_1420_ = l_Lean_Expr_getAppFn(v_a_1419_);
if (lean_obj_tag(v___x_1420_) == 4)
{
lean_object* v_declName_1421_; lean_object* v_us_1422_; lean_object* v___x_1423_; lean_object* v_env_1427_; uint8_t v___x_1428_; lean_object* v___x_1429_; 
v_declName_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_declName_1421_);
v_us_1422_ = lean_ctor_get(v___x_1420_, 1);
lean_inc(v_us_1422_);
lean_dec_ref(v___x_1420_);
v___x_1423_ = lean_st_ref_get(v_a_1414_);
v_env_1427_ = lean_ctor_get(v___x_1423_, 0);
lean_inc_ref(v_env_1427_);
lean_dec(v___x_1423_);
v___x_1428_ = 0;
v___x_1429_ = l_Lean_Environment_find_x3f(v_env_1427_, v_declName_1421_, v___x_1428_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
lean_dec(v_us_1422_);
v___x_1430_ = lean_box(0);
v___x_1431_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1430_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
return v___x_1431_;
}
else
{
lean_object* v_val_1432_; 
v_val_1432_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_val_1432_);
lean_dec_ref(v___x_1429_);
if (lean_obj_tag(v_val_1432_) == 5)
{
lean_object* v_val_1433_; lean_object* v_ctors_1434_; 
v_val_1433_ = lean_ctor_get(v_val_1432_, 0);
lean_inc_ref(v_val_1433_);
lean_dec_ref(v_val_1432_);
v_ctors_1434_ = lean_ctor_get(v_val_1433_, 4);
lean_inc(v_ctors_1434_);
if (lean_obj_tag(v_ctors_1434_) == 1)
{
lean_object* v_tail_1435_; 
v_tail_1435_ = lean_ctor_get(v_ctors_1434_, 1);
if (lean_obj_tag(v_tail_1435_) == 0)
{
lean_object* v_toConstantVal_1436_; lean_object* v_numParams_1437_; lean_object* v_numIndices_1438_; lean_object* v_head_1439_; lean_object* v___x_1440_; 
v_toConstantVal_1436_ = lean_ctor_get(v_val_1433_, 0);
lean_inc_ref(v_toConstantVal_1436_);
v_numParams_1437_ = lean_ctor_get(v_val_1433_, 1);
lean_inc(v_numParams_1437_);
v_numIndices_1438_ = lean_ctor_get(v_val_1433_, 2);
lean_inc(v_numIndices_1438_);
lean_dec_ref(v_val_1433_);
v_head_1439_ = lean_ctor_get(v_ctors_1434_, 0);
lean_inc(v_head_1439_);
lean_dec_ref(v_ctors_1434_);
lean_inc_ref(v_a_1413_);
v___x_1440_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_head_1439_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref(v___x_1440_);
if (lean_obj_tag(v_a_1441_) == 6)
{
lean_object* v_val_1442_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v_name_1482_; uint8_t v___x_1483_; 
v_val_1442_ = lean_ctor_get(v_a_1441_, 0);
lean_inc_ref(v_val_1442_);
lean_dec_ref(v_a_1441_);
v_name_1482_ = lean_ctor_get(v_toConstantVal_1436_, 0);
lean_inc(v_name_1482_);
lean_dec_ref(v_toConstantVal_1436_);
v___x_1483_ = lean_name_eq(v_name_1482_, v_structName_1408_);
lean_dec(v_name_1482_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec_ref(v_val_1442_);
lean_dec(v_numIndices_1438_);
lean_dec(v_numParams_1437_);
lean_dec(v_us_1422_);
v___x_1484_ = lean_box(0);
v___x_1485_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1484_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1485_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1485_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
else
{
v___y_1444_ = v_a_1411_;
v___y_1445_ = v_a_1412_;
v___y_1446_ = v_a_1413_;
v___y_1447_ = v_a_1414_;
goto v___jp_1443_;
}
v___jp_1443_:
{
lean_object* v_dummy_1448_; lean_object* v_nargs_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; uint8_t v___x_1456_; 
v_dummy_1448_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
v_nargs_1449_ = l_Lean_Expr_getAppNumArgs(v_a_1419_);
lean_inc(v_nargs_1449_);
v___x_1450_ = lean_mk_array(v_nargs_1449_, v_dummy_1448_);
v___x_1451_ = lean_unsigned_to_nat(1u);
v___x_1452_ = lean_nat_sub(v_nargs_1449_, v___x_1451_);
lean_dec(v_nargs_1449_);
lean_inc(v_a_1419_);
v___x_1453_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1419_, v___x_1450_, v___x_1452_);
v___x_1454_ = lean_nat_add(v_numParams_1437_, v_numIndices_1438_);
lean_dec(v_numIndices_1438_);
v___x_1455_ = lean_array_get_size(v___x_1453_);
v___x_1456_ = lean_nat_dec_eq(v___x_1454_, v___x_1455_);
lean_dec(v___x_1454_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_dec_ref(v___x_1453_);
lean_dec_ref(v_val_1442_);
lean_dec(v_numParams_1437_);
lean_dec(v_us_1422_);
v___x_1457_ = lean_box(0);
v___x_1458_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1457_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
return v___x_1458_;
}
else
{
lean_object* v_toConstantVal_1459_; lean_object* v_name_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_toConstantVal_1459_ = lean_ctor_get(v_val_1442_, 0);
lean_inc_ref(v_toConstantVal_1459_);
lean_dec_ref(v_val_1442_);
v_name_1460_ = lean_ctor_get(v_toConstantVal_1459_, 0);
lean_inc(v_name_1460_);
lean_dec_ref(v_toConstantVal_1459_);
v___x_1461_ = l_Lean_mkConst(v_name_1460_, v_us_1422_);
v___x_1462_ = lean_unsigned_to_nat(0u);
v___x_1463_ = l_Array_toSubarray___redArg(v___x_1453_, v___x_1462_, v_numParams_1437_);
v___x_1464_ = l_Subarray_copy___redArg(v___x_1463_);
lean_inc(v___y_1447_);
lean_inc_ref(v___y_1446_);
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
v___x_1465_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_1461_, v___x_1464_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
lean_dec_ref(v___x_1464_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1467_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref(v___x_1465_);
lean_inc(v___y_1447_);
lean_inc_ref(v___y_1446_);
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v_a_1419_);
lean_inc_ref(v_e_1410_);
lean_inc(v_structName_1408_);
lean_inc(v_idx_1409_);
v___x_1467_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_idx_1409_, v_structName_1408_, v_e_1410_, v_idx_1409_, v_a_1419_, v___x_1462_, v_a_1466_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1469_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc(v_a_1468_);
lean_dec_ref(v___x_1467_);
lean_inc(v___y_1447_);
lean_inc_ref(v___y_1446_);
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
v___x_1469_ = lean_whnf(v_a_1468_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1481_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1472_ = v___x_1469_;
v_isShared_1473_ = v_isSharedCheck_1481_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1481_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
if (lean_obj_tag(v_a_1470_) == 7)
{
lean_object* v_binderType_1474_; lean_object* v___x_1475_; lean_object* v___x_1477_; 
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v_a_1419_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
v_binderType_1474_ = lean_ctor_get(v_a_1470_, 1);
lean_inc_ref(v_binderType_1474_);
lean_dec_ref(v_a_1470_);
v___x_1475_ = lean_expr_consume_type_annotations(v_binderType_1474_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v___x_1475_);
v___x_1477_ = v___x_1472_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
lean_del_object(v___x_1472_);
lean_dec(v_a_1470_);
v___x_1479_ = lean_box(0);
v___x_1480_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1479_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
return v___x_1480_;
}
}
}
else
{
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v_a_1419_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
return v___x_1469_;
}
}
else
{
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v_a_1419_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
return v___x_1467_;
}
}
else
{
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v_a_1419_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
return v___x_1465_;
}
}
}
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_dec(v_a_1441_);
lean_dec(v_numIndices_1438_);
lean_dec(v_numParams_1437_);
lean_dec_ref(v_toConstantVal_1436_);
lean_dec(v_us_1422_);
v___x_1494_ = lean_box(0);
v___x_1495_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1494_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
return v___x_1495_;
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_numIndices_1438_);
lean_dec(v_numParams_1437_);
lean_dec_ref(v_toConstantVal_1436_);
lean_dec(v_us_1422_);
lean_dec(v_a_1419_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
v_a_1496_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1440_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1440_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
else
{
lean_dec_ref(v_ctors_1434_);
lean_dec_ref(v_val_1433_);
lean_dec(v_us_1422_);
goto v___jp_1424_;
}
}
else
{
lean_dec(v_ctors_1434_);
lean_dec_ref(v_val_1433_);
lean_dec(v_us_1422_);
goto v___jp_1424_;
}
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec(v_val_1432_);
lean_dec(v_us_1422_);
v___x_1504_ = lean_box(0);
v___x_1505_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1504_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
return v___x_1505_;
}
}
v___jp_1424_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1425_ = lean_box(0);
v___x_1426_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1425_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
return v___x_1426_;
}
}
else
{
lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec_ref(v___x_1420_);
v___x_1506_ = lean_box(0);
v___x_1507_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1408_, v_idx_1409_, v_e_1410_, v_a_1419_, lean_box(0), v___x_1506_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
return v___x_1507_;
}
}
else
{
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
return v___x_1418_;
}
}
else
{
lean_dec(v_a_1414_);
lean_dec_ref(v_a_1413_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec_ref(v_e_1410_);
lean_dec(v_idx_1409_);
lean_dec(v_structName_1408_);
return v___x_1416_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object* v_structName_1508_, lean_object* v_idx_1509_, lean_object* v_e_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_structName_1508_, v_idx_1509_, v_e_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object* v_upperBound_1517_, lean_object* v_structName_1518_, lean_object* v_e_1519_, lean_object* v_idx_1520_, lean_object* v_a_1521_, lean_object* v_inst_1522_, lean_object* v_R_1523_, lean_object* v_a_1524_, lean_object* v_b_1525_, lean_object* v_c_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1517_, v_structName_1518_, v_e_1519_, v_idx_1520_, v_a_1521_, v_a_1524_, v_b_1525_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object* v_upperBound_1533_, lean_object* v_structName_1534_, lean_object* v_e_1535_, lean_object* v_idx_1536_, lean_object* v_a_1537_, lean_object* v_inst_1538_, lean_object* v_R_1539_, lean_object* v_a_1540_, lean_object* v_b_1541_, lean_object* v_c_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(v_upperBound_1533_, v_structName_1534_, v_e_1535_, v_idx_1536_, v_a_1537_, v_inst_1538_, v_R_1539_, v_a_1540_, v_b_1541_, v_c_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec(v_upperBound_1533_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object* v_upperBound_1549_, lean_object* v_structName_1550_, lean_object* v_e_1551_, lean_object* v_idx_1552_, lean_object* v_a_1553_, lean_object* v_inst_1554_, lean_object* v_R_1555_, lean_object* v_a_1556_, lean_object* v_b_1557_, lean_object* v_c_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1549_, v_structName_1550_, v_e_1551_, v_idx_1552_, v_a_1553_, v_a_1556_, v_b_1557_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object* v_upperBound_1565_, lean_object* v_structName_1566_, lean_object* v_e_1567_, lean_object* v_idx_1568_, lean_object* v_a_1569_, lean_object* v_inst_1570_, lean_object* v_R_1571_, lean_object* v_a_1572_, lean_object* v_b_1573_, lean_object* v_c_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(v_upperBound_1565_, v_structName_1566_, v_e_1567_, v_idx_1568_, v_a_1569_, v_inst_1570_, v_R_1571_, v_a_1572_, v_b_1573_, v_c_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
lean_dec(v_upperBound_1565_);
return v_res_1580_;
}
}
static lean_object* _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(l_Lean_Meta_throwTypeExpected___redArg___closed__0));
v___x_1583_ = l_Lean_stringToMessageData(v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object* v_type_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1590_ = lean_obj_once(&l_Lean_Meta_throwTypeExpected___redArg___closed__1, &l_Lean_Meta_throwTypeExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1);
v___x_1591_ = l_Lean_indentExpr(v_type_1584_);
v___x_1592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1590_);
lean_ctor_set(v___x_1592_, 1, v___x_1591_);
v___x_1593_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1592_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object* v_type_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_);
lean_dec(v_a_1598_);
lean_dec_ref(v_a_1597_);
lean_dec(v_a_1596_);
lean_dec_ref(v_a_1595_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object* v_00_u03b1_1601_, lean_object* v_type_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object* v_00_u03b1_1609_, lean_object* v_type_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_Meta_throwTypeExpected(v_00_u03b1_1609_, v_type_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1617_, lean_object* v_x_1618_, lean_object* v_x_1619_, lean_object* v_x_1620_){
_start:
{
lean_object* v_ks_1621_; lean_object* v_vs_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1646_; 
v_ks_1621_ = lean_ctor_get(v_x_1617_, 0);
v_vs_1622_ = lean_ctor_get(v_x_1617_, 1);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_x_1617_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1624_ = v_x_1617_;
v_isShared_1625_ = v_isSharedCheck_1646_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_vs_1622_);
lean_inc(v_ks_1621_);
lean_dec(v_x_1617_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1646_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1626_ = lean_array_get_size(v_ks_1621_);
v___x_1627_ = lean_nat_dec_lt(v_x_1618_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
lean_dec(v_x_1618_);
v___x_1628_ = lean_array_push(v_ks_1621_, v_x_1619_);
v___x_1629_ = lean_array_push(v_vs_1622_, v_x_1620_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 1, v___x_1629_);
lean_ctor_set(v___x_1624_, 0, v___x_1628_);
v___x_1631_ = v___x_1624_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
else
{
lean_object* v_k_x27_1633_; uint8_t v___x_1634_; 
v_k_x27_1633_ = lean_array_fget_borrowed(v_ks_1621_, v_x_1618_);
v___x_1634_ = l_Lean_instBEqMVarId_beq(v_x_1619_, v_k_x27_1633_);
if (v___x_1634_ == 0)
{
lean_object* v___x_1636_; 
if (v_isShared_1625_ == 0)
{
v___x_1636_ = v___x_1624_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_ks_1621_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_vs_1622_);
v___x_1636_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = lean_unsigned_to_nat(1u);
v___x_1638_ = lean_nat_add(v_x_1618_, v___x_1637_);
lean_dec(v_x_1618_);
v_x_1617_ = v___x_1636_;
v_x_1618_ = v___x_1638_;
goto _start;
}
}
else
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1641_ = lean_array_fset(v_ks_1621_, v_x_1618_, v_x_1619_);
v___x_1642_ = lean_array_fset(v_vs_1622_, v_x_1618_, v_x_1620_);
lean_dec(v_x_1618_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 1, v___x_1642_);
lean_ctor_set(v___x_1624_, 0, v___x_1641_);
v___x_1644_ = v___x_1624_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1641_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1647_, lean_object* v_k_1648_, lean_object* v_v_1649_){
_start:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_unsigned_to_nat(0u);
v___x_1651_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1647_, v___x_1650_, v_k_1648_, v_v_1649_);
return v___x_1651_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_1652_; size_t v___x_1653_; size_t v___x_1654_; 
v___x_1652_ = ((size_t)5ULL);
v___x_1653_ = ((size_t)1ULL);
v___x_1654_ = lean_usize_shift_left(v___x_1653_, v___x_1652_);
return v___x_1654_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1655_; size_t v___x_1656_; size_t v___x_1657_; 
v___x_1655_ = ((size_t)1ULL);
v___x_1656_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_1657_ = lean_usize_sub(v___x_1656_, v___x_1655_);
return v___x_1657_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1659_, size_t v_x_1660_, size_t v_x_1661_, lean_object* v_x_1662_, lean_object* v_x_1663_){
_start:
{
if (lean_obj_tag(v_x_1659_) == 0)
{
lean_object* v_es_1664_; size_t v___x_1665_; size_t v___x_1666_; size_t v___x_1667_; size_t v___x_1668_; lean_object* v_j_1669_; lean_object* v___x_1670_; uint8_t v___x_1671_; 
v_es_1664_ = lean_ctor_get(v_x_1659_, 0);
v___x_1665_ = ((size_t)5ULL);
v___x_1666_ = ((size_t)1ULL);
v___x_1667_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1668_ = lean_usize_land(v_x_1660_, v___x_1667_);
v_j_1669_ = lean_usize_to_nat(v___x_1668_);
v___x_1670_ = lean_array_get_size(v_es_1664_);
v___x_1671_ = lean_nat_dec_lt(v_j_1669_, v___x_1670_);
if (v___x_1671_ == 0)
{
lean_dec(v_j_1669_);
lean_dec(v_x_1663_);
lean_dec(v_x_1662_);
return v_x_1659_;
}
else
{
lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1708_; 
lean_inc_ref(v_es_1664_);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_x_1659_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; 
v_unused_1709_ = lean_ctor_get(v_x_1659_, 0);
lean_dec(v_unused_1709_);
v___x_1673_ = v_x_1659_;
v_isShared_1674_ = v_isSharedCheck_1708_;
goto v_resetjp_1672_;
}
else
{
lean_dec(v_x_1659_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1708_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v_v_1675_; lean_object* v___x_1676_; lean_object* v_xs_x27_1677_; lean_object* v___y_1679_; 
v_v_1675_ = lean_array_fget(v_es_1664_, v_j_1669_);
v___x_1676_ = lean_box(0);
v_xs_x27_1677_ = lean_array_fset(v_es_1664_, v_j_1669_, v___x_1676_);
switch(lean_obj_tag(v_v_1675_))
{
case 0:
{
lean_object* v_key_1684_; lean_object* v_val_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1695_; 
v_key_1684_ = lean_ctor_get(v_v_1675_, 0);
v_val_1685_ = lean_ctor_get(v_v_1675_, 1);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_v_1675_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1687_ = v_v_1675_;
v_isShared_1688_ = v_isSharedCheck_1695_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_val_1685_);
lean_inc(v_key_1684_);
lean_dec(v_v_1675_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1695_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
uint8_t v___x_1689_; 
v___x_1689_ = l_Lean_instBEqMVarId_beq(v_x_1662_, v_key_1684_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_del_object(v___x_1687_);
v___x_1690_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1684_, v_val_1685_, v_x_1662_, v_x_1663_);
v___x_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___y_1679_ = v___x_1691_;
goto v___jp_1678_;
}
else
{
lean_object* v___x_1693_; 
lean_dec(v_val_1685_);
lean_dec(v_key_1684_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 1, v_x_1663_);
lean_ctor_set(v___x_1687_, 0, v_x_1662_);
v___x_1693_ = v___x_1687_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_x_1662_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v_x_1663_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
v___y_1679_ = v___x_1693_;
goto v___jp_1678_;
}
}
}
}
case 1:
{
lean_object* v_node_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1706_; 
v_node_1696_ = lean_ctor_get(v_v_1675_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_v_1675_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1698_ = v_v_1675_;
v_isShared_1699_ = v_isSharedCheck_1706_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_node_1696_);
lean_dec(v_v_1675_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1706_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
size_t v___x_1700_; size_t v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1700_ = lean_usize_shift_right(v_x_1660_, v___x_1665_);
v___x_1701_ = lean_usize_add(v_x_1661_, v___x_1666_);
v___x_1702_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_node_1696_, v___x_1700_, v___x_1701_, v_x_1662_, v_x_1663_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 0, v___x_1702_);
v___x_1704_ = v___x_1698_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
v___y_1679_ = v___x_1704_;
goto v___jp_1678_;
}
}
}
default: 
{
lean_object* v___x_1707_; 
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v_x_1662_);
lean_ctor_set(v___x_1707_, 1, v_x_1663_);
v___y_1679_ = v___x_1707_;
goto v___jp_1678_;
}
}
v___jp_1678_:
{
lean_object* v___x_1680_; lean_object* v___x_1682_; 
v___x_1680_ = lean_array_fset(v_xs_x27_1677_, v_j_1669_, v___y_1679_);
lean_dec(v_j_1669_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1680_);
v___x_1682_ = v___x_1673_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1680_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
else
{
lean_object* v_ks_1710_; lean_object* v_vs_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1731_; 
v_ks_1710_ = lean_ctor_get(v_x_1659_, 0);
v_vs_1711_ = lean_ctor_get(v_x_1659_, 1);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_x_1659_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1713_ = v_x_1659_;
v_isShared_1714_ = v_isSharedCheck_1731_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_vs_1711_);
lean_inc(v_ks_1710_);
lean_dec(v_x_1659_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1731_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_ks_1710_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v_vs_1711_);
v___x_1716_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v_newNode_1717_; uint8_t v___y_1719_; size_t v___x_1725_; uint8_t v___x_1726_; 
v_newNode_1717_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1716_, v_x_1662_, v_x_1663_);
v___x_1725_ = ((size_t)7ULL);
v___x_1726_ = lean_usize_dec_le(v___x_1725_, v_x_1661_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1727_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1717_);
v___x_1728_ = lean_unsigned_to_nat(4u);
v___x_1729_ = lean_nat_dec_lt(v___x_1727_, v___x_1728_);
lean_dec(v___x_1727_);
v___y_1719_ = v___x_1729_;
goto v___jp_1718_;
}
else
{
v___y_1719_ = v___x_1726_;
goto v___jp_1718_;
}
v___jp_1718_:
{
if (v___y_1719_ == 0)
{
lean_object* v_ks_1720_; lean_object* v_vs_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_ks_1720_ = lean_ctor_get(v_newNode_1717_, 0);
lean_inc_ref(v_ks_1720_);
v_vs_1721_ = lean_ctor_get(v_newNode_1717_, 1);
lean_inc_ref(v_vs_1721_);
lean_dec_ref(v_newNode_1717_);
v___x_1722_ = lean_unsigned_to_nat(0u);
v___x_1723_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_1724_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1661_, v_ks_1720_, v_vs_1721_, v___x_1722_, v___x_1723_);
lean_dec_ref(v_vs_1721_);
lean_dec_ref(v_ks_1720_);
return v___x_1724_;
}
else
{
return v_newNode_1717_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1732_, lean_object* v_keys_1733_, lean_object* v_vals_1734_, lean_object* v_i_1735_, lean_object* v_entries_1736_){
_start:
{
lean_object* v___x_1737_; uint8_t v___x_1738_; 
v___x_1737_ = lean_array_get_size(v_keys_1733_);
v___x_1738_ = lean_nat_dec_lt(v_i_1735_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_dec(v_i_1735_);
return v_entries_1736_;
}
else
{
lean_object* v_k_1739_; lean_object* v_v_1740_; uint64_t v___x_1741_; size_t v_h_1742_; size_t v___x_1743_; lean_object* v___x_1744_; size_t v___x_1745_; size_t v___x_1746_; size_t v___x_1747_; size_t v_h_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v_k_1739_ = lean_array_fget_borrowed(v_keys_1733_, v_i_1735_);
v_v_1740_ = lean_array_fget_borrowed(v_vals_1734_, v_i_1735_);
v___x_1741_ = l_Lean_instHashableMVarId_hash(v_k_1739_);
v_h_1742_ = lean_uint64_to_usize(v___x_1741_);
v___x_1743_ = ((size_t)5ULL);
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = ((size_t)1ULL);
v___x_1746_ = lean_usize_sub(v_depth_1732_, v___x_1745_);
v___x_1747_ = lean_usize_mul(v___x_1743_, v___x_1746_);
v_h_1748_ = lean_usize_shift_right(v_h_1742_, v___x_1747_);
v___x_1749_ = lean_nat_add(v_i_1735_, v___x_1744_);
lean_dec(v_i_1735_);
lean_inc(v_v_1740_);
lean_inc(v_k_1739_);
v___x_1750_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_entries_1736_, v_h_1748_, v_depth_1732_, v_k_1739_, v_v_1740_);
v_i_1735_ = v___x_1749_;
v_entries_1736_ = v___x_1750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1752_, lean_object* v_keys_1753_, lean_object* v_vals_1754_, lean_object* v_i_1755_, lean_object* v_entries_1756_){
_start:
{
size_t v_depth_boxed_1757_; lean_object* v_res_1758_; 
v_depth_boxed_1757_ = lean_unbox_usize(v_depth_1752_);
lean_dec(v_depth_1752_);
v_res_1758_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1757_, v_keys_1753_, v_vals_1754_, v_i_1755_, v_entries_1756_);
lean_dec_ref(v_vals_1754_);
lean_dec_ref(v_keys_1753_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1759_, lean_object* v_x_1760_, lean_object* v_x_1761_, lean_object* v_x_1762_, lean_object* v_x_1763_){
_start:
{
size_t v_x_1244__boxed_1764_; size_t v_x_1245__boxed_1765_; lean_object* v_res_1766_; 
v_x_1244__boxed_1764_ = lean_unbox_usize(v_x_1760_);
lean_dec(v_x_1760_);
v_x_1245__boxed_1765_ = lean_unbox_usize(v_x_1761_);
lean_dec(v_x_1761_);
v_res_1766_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1759_, v_x_1244__boxed_1764_, v_x_1245__boxed_1765_, v_x_1762_, v_x_1763_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object* v_x_1767_, lean_object* v_x_1768_, lean_object* v_x_1769_){
_start:
{
uint64_t v___x_1770_; size_t v___x_1771_; size_t v___x_1772_; lean_object* v___x_1773_; 
v___x_1770_ = l_Lean_instHashableMVarId_hash(v_x_1768_);
v___x_1771_ = lean_uint64_to_usize(v___x_1770_);
v___x_1772_ = ((size_t)1ULL);
v___x_1773_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1767_, v___x_1771_, v___x_1772_, v_x_1768_, v_x_1769_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object* v_mvarId_1774_, lean_object* v_val_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v___x_1778_; lean_object* v_mctx_1779_; lean_object* v_cache_1780_; lean_object* v_zetaDeltaFVarIds_1781_; lean_object* v_postponed_1782_; lean_object* v_diag_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1810_; 
v___x_1778_ = lean_st_ref_take(v___y_1776_);
v_mctx_1779_ = lean_ctor_get(v___x_1778_, 0);
v_cache_1780_ = lean_ctor_get(v___x_1778_, 1);
v_zetaDeltaFVarIds_1781_ = lean_ctor_get(v___x_1778_, 2);
v_postponed_1782_ = lean_ctor_get(v___x_1778_, 3);
v_diag_1783_ = lean_ctor_get(v___x_1778_, 4);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1785_ = v___x_1778_;
v_isShared_1786_ = v_isSharedCheck_1810_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_diag_1783_);
lean_inc(v_postponed_1782_);
lean_inc(v_zetaDeltaFVarIds_1781_);
lean_inc(v_cache_1780_);
lean_inc(v_mctx_1779_);
lean_dec(v___x_1778_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1810_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v_depth_1787_; lean_object* v_levelAssignDepth_1788_; lean_object* v_mvarCounter_1789_; lean_object* v_lDepth_1790_; lean_object* v_decls_1791_; lean_object* v_userNames_1792_; lean_object* v_lAssignment_1793_; lean_object* v_eAssignment_1794_; lean_object* v_dAssignment_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1809_; 
v_depth_1787_ = lean_ctor_get(v_mctx_1779_, 0);
v_levelAssignDepth_1788_ = lean_ctor_get(v_mctx_1779_, 1);
v_mvarCounter_1789_ = lean_ctor_get(v_mctx_1779_, 2);
v_lDepth_1790_ = lean_ctor_get(v_mctx_1779_, 3);
v_decls_1791_ = lean_ctor_get(v_mctx_1779_, 4);
v_userNames_1792_ = lean_ctor_get(v_mctx_1779_, 5);
v_lAssignment_1793_ = lean_ctor_get(v_mctx_1779_, 6);
v_eAssignment_1794_ = lean_ctor_get(v_mctx_1779_, 7);
v_dAssignment_1795_ = lean_ctor_get(v_mctx_1779_, 8);
v_isSharedCheck_1809_ = !lean_is_exclusive(v_mctx_1779_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1797_ = v_mctx_1779_;
v_isShared_1798_ = v_isSharedCheck_1809_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_dAssignment_1795_);
lean_inc(v_eAssignment_1794_);
lean_inc(v_lAssignment_1793_);
lean_inc(v_userNames_1792_);
lean_inc(v_decls_1791_);
lean_inc(v_lDepth_1790_);
lean_inc(v_mvarCounter_1789_);
lean_inc(v_levelAssignDepth_1788_);
lean_inc(v_depth_1787_);
lean_dec(v_mctx_1779_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1809_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1799_; lean_object* v___x_1801_; 
v___x_1799_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_eAssignment_1794_, v_mvarId_1774_, v_val_1775_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 7, v___x_1799_);
v___x_1801_ = v___x_1797_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_depth_1787_);
lean_ctor_set(v_reuseFailAlloc_1808_, 1, v_levelAssignDepth_1788_);
lean_ctor_set(v_reuseFailAlloc_1808_, 2, v_mvarCounter_1789_);
lean_ctor_set(v_reuseFailAlloc_1808_, 3, v_lDepth_1790_);
lean_ctor_set(v_reuseFailAlloc_1808_, 4, v_decls_1791_);
lean_ctor_set(v_reuseFailAlloc_1808_, 5, v_userNames_1792_);
lean_ctor_set(v_reuseFailAlloc_1808_, 6, v_lAssignment_1793_);
lean_ctor_set(v_reuseFailAlloc_1808_, 7, v___x_1799_);
lean_ctor_set(v_reuseFailAlloc_1808_, 8, v_dAssignment_1795_);
v___x_1801_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
lean_object* v___x_1803_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v___x_1801_);
v___x_1803_ = v___x_1785_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v_cache_1780_);
lean_ctor_set(v_reuseFailAlloc_1807_, 2, v_zetaDeltaFVarIds_1781_);
lean_ctor_set(v_reuseFailAlloc_1807_, 3, v_postponed_1782_);
lean_ctor_set(v_reuseFailAlloc_1807_, 4, v_diag_1783_);
v___x_1803_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1804_ = lean_st_ref_set(v___y_1776_, v___x_1803_);
v___x_1805_ = lean_box(0);
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
return v___x_1806_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object* v_mvarId_1811_, lean_object* v_val_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1811_, v_val_1812_, v___y_1813_);
lean_dec(v___y_1813_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object* v_type_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v___x_1822_; 
lean_inc(v_a_1820_);
lean_inc_ref(v_a_1819_);
lean_inc(v_a_1818_);
lean_inc_ref(v_a_1817_);
lean_inc_ref(v_type_1816_);
v___x_1822_ = lean_infer_type(v_type_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1824_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
lean_dec_ref(v___x_1822_);
lean_inc(v_a_1820_);
lean_inc_ref(v_a_1819_);
lean_inc(v_a_1818_);
lean_inc_ref(v_a_1817_);
v___x_1824_ = l_Lean_Meta_whnfD(v_a_1823_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1859_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1827_ = v___x_1824_;
v_isShared_1828_ = v_isSharedCheck_1859_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_a_1825_);
lean_dec(v___x_1824_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1859_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
switch(lean_obj_tag(v_a_1825_))
{
case 3:
{
lean_object* v_u_1829_; lean_object* v___x_1831_; 
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_type_1816_);
v_u_1829_ = lean_ctor_get(v_a_1825_, 0);
lean_inc(v_u_1829_);
lean_dec_ref(v_a_1825_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 0, v_u_1829_);
v___x_1831_ = v___x_1827_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_u_1829_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
case 2:
{
lean_object* v_mvarId_1833_; lean_object* v___x_1834_; 
lean_del_object(v___x_1827_);
v_mvarId_1833_ = lean_ctor_get(v_a_1825_, 0);
lean_inc(v_mvarId_1833_);
lean_dec_ref(v_a_1825_);
lean_inc(v_mvarId_1833_);
v___x_1834_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1833_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; uint8_t v___x_1836_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1835_);
lean_dec_ref(v___x_1834_);
v___x_1836_ = lean_unbox(v_a_1835_);
lean_dec(v_a_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
lean_dec_ref(v_type_1816_);
v___x_1837_ = l_Lean_Meta_mkFreshLevelMVar(v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec_ref(v_a_1817_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref(v___x_1837_);
lean_inc(v_a_1838_);
v___x_1839_ = l_Lean_mkSort(v_a_1838_);
v___x_1840_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1833_, v___x_1839_, v_a_1818_);
lean_dec(v_a_1818_);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1847_ == 0)
{
lean_object* v_unused_1848_; 
v_unused_1848_ = lean_ctor_get(v___x_1840_, 0);
lean_dec(v_unused_1848_);
v___x_1842_ = v___x_1840_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_dec(v___x_1840_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 0, v_a_1838_);
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1838_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
else
{
lean_dec(v_mvarId_1833_);
lean_dec(v_a_1818_);
return v___x_1837_;
}
}
else
{
lean_object* v___x_1849_; 
lean_dec(v_mvarId_1833_);
v___x_1849_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
return v___x_1849_;
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v_mvarId_1833_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_type_1816_);
v_a_1850_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1834_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1834_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
default: 
{
lean_object* v___x_1858_; 
lean_del_object(v___x_1827_);
lean_dec(v_a_1825_);
v___x_1858_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
return v___x_1858_;
}
}
}
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_type_1816_);
v_a_1860_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1824_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1824_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_type_1816_);
v_a_1868_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1822_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1822_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object* v_type_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_Meta_getLevel(v_type_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object* v_mvarId_1883_, lean_object* v_val_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1883_, v_val_1884_, v___y_1886_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object* v_mvarId_1891_, lean_object* v_val_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(v_mvarId_1891_, v_val_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object* v_00_u03b2_1899_, lean_object* v_x_1900_, lean_object* v_x_1901_, lean_object* v_x_1902_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_x_1900_, v_x_1901_, v_x_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1904_, lean_object* v_x_1905_, size_t v_x_1906_, size_t v_x_1907_, lean_object* v_x_1908_, lean_object* v_x_1909_){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1905_, v_x_1906_, v_x_1907_, v_x_1908_, v_x_1909_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1911_, lean_object* v_x_1912_, lean_object* v_x_1913_, lean_object* v_x_1914_, lean_object* v_x_1915_, lean_object* v_x_1916_){
_start:
{
size_t v_x_1615__boxed_1917_; size_t v_x_1616__boxed_1918_; lean_object* v_res_1919_; 
v_x_1615__boxed_1917_ = lean_unbox_usize(v_x_1913_);
lean_dec(v_x_1913_);
v_x_1616__boxed_1918_ = lean_unbox_usize(v_x_1914_);
lean_dec(v_x_1914_);
v_res_1919_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(v_00_u03b2_1911_, v_x_1912_, v_x_1615__boxed_1917_, v_x_1616__boxed_1918_, v_x_1915_, v_x_1916_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1920_, lean_object* v_n_1921_, lean_object* v_k_1922_, lean_object* v_v_1923_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1921_, v_k_1922_, v_v_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1925_, size_t v_depth_1926_, lean_object* v_keys_1927_, lean_object* v_vals_1928_, lean_object* v_heq_1929_, lean_object* v_i_1930_, lean_object* v_entries_1931_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_1926_, v_keys_1927_, v_vals_1928_, v_i_1930_, v_entries_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1933_, lean_object* v_depth_1934_, lean_object* v_keys_1935_, lean_object* v_vals_1936_, lean_object* v_heq_1937_, lean_object* v_i_1938_, lean_object* v_entries_1939_){
_start:
{
size_t v_depth_boxed_1940_; lean_object* v_res_1941_; 
v_depth_boxed_1940_ = lean_unbox_usize(v_depth_1934_);
lean_dec(v_depth_1934_);
v_res_1941_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1933_, v_depth_boxed_1940_, v_keys_1935_, v_vals_1936_, v_heq_1937_, v_i_1938_, v_entries_1939_);
lean_dec_ref(v_vals_1936_);
lean_dec_ref(v_keys_1935_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1942_, lean_object* v_x_1943_, lean_object* v_x_1944_, lean_object* v_x_1945_, lean_object* v_x_1946_){
_start:
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1943_, v_x_1944_, v_x_1945_, v_x_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object* v_k_1948_, lean_object* v_b_1949_, lean_object* v_c_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_apply_7(v_k_1948_, v_b_1949_, v_c_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, lean_box(0));
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object* v_k_1957_, lean_object* v_b_1958_, lean_object* v_c_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(v_k_1957_, v_b_1958_, v_c_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object* v_type_1966_, lean_object* v_k_1967_, uint8_t v_cleanupAnnotations_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___f_1974_; uint8_t v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___f_1974_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1974_, 0, v_k_1967_);
v___x_1975_ = 0;
v___x_1976_ = lean_box(0);
v___x_1977_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1975_, v___x_1976_, v_type_1966_, v___f_1974_, v_cleanupAnnotations_1968_, v___x_1975_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1977_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
v_a_1986_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1977_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1977_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object* v_type_1994_, lean_object* v_k_1995_, lean_object* v_cleanupAnnotations_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2002_; lean_object* v_res_2003_; 
v_cleanupAnnotations_boxed_2002_ = lean_unbox(v_cleanupAnnotations_1996_);
v_res_2003_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_1994_, v_k_1995_, v_cleanupAnnotations_boxed_2002_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object* v_00_u03b1_2004_, lean_object* v_type_2005_, lean_object* v_k_2006_, uint8_t v_cleanupAnnotations_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2005_, v_k_2006_, v_cleanupAnnotations_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object* v_00_u03b1_2014_, lean_object* v_type_2015_, lean_object* v_k_2016_, lean_object* v_cleanupAnnotations_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2023_; lean_object* v_res_2024_; 
v_cleanupAnnotations_boxed_2023_ = lean_unbox(v_cleanupAnnotations_2017_);
v_res_2024_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(v_00_u03b1_2014_, v_type_2015_, v_k_2016_, v_cleanupAnnotations_boxed_2023_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object* v_as_2025_, size_t v_i_2026_, size_t v_stop_2027_, lean_object* v_b_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
uint8_t v___x_2034_; 
v___x_2034_ = lean_usize_dec_eq(v_i_2026_, v_stop_2027_);
if (v___x_2034_ == 0)
{
size_t v___x_2035_; size_t v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2035_ = ((size_t)1ULL);
v___x_2036_ = lean_usize_sub(v_i_2026_, v___x_2035_);
v___x_2037_ = lean_array_uget_borrowed(v_as_2025_, v___x_2036_);
lean_inc(v___y_2032_);
lean_inc_ref(v___y_2031_);
lean_inc(v___y_2030_);
lean_inc_ref(v___y_2029_);
lean_inc(v___x_2037_);
v___x_2038_ = lean_infer_type(v___x_2037_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref(v___x_2038_);
lean_inc(v___y_2032_);
lean_inc_ref(v___y_2031_);
lean_inc(v___y_2030_);
lean_inc_ref(v___y_2029_);
v___x_2040_ = l_Lean_Meta_getLevel(v_a_2039_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref(v___x_2040_);
v___x_2042_ = l_Lean_mkLevelIMax_x27(v_a_2041_, v_b_2028_);
v_i_2026_ = v___x_2036_;
v_b_2028_ = v___x_2042_;
goto _start;
}
else
{
lean_dec(v_b_2028_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2044_; 
v_a_2044_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2044_);
lean_dec_ref(v___x_2040_);
v_i_2026_ = v___x_2036_;
v_b_2028_ = v_a_2044_;
goto _start;
}
else
{
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
return v___x_2040_;
}
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2053_; 
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v_b_2028_);
v_a_2046_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2048_ = v___x_2038_;
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2038_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2053_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2051_; 
if (v_isShared_2049_ == 0)
{
v___x_2051_ = v___x_2048_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2046_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
else
{
lean_object* v___x_2054_; 
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
v___x_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2054_, 0, v_b_2028_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object* v_as_2055_, lean_object* v_i_2056_, lean_object* v_stop_2057_, lean_object* v_b_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
size_t v_i_boxed_2064_; size_t v_stop_boxed_2065_; lean_object* v_res_2066_; 
v_i_boxed_2064_ = lean_unbox_usize(v_i_2056_);
lean_dec(v_i_2056_);
v_stop_boxed_2065_ = lean_unbox_usize(v_stop_2057_);
lean_dec(v_stop_2057_);
v_res_2066_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_as_2055_, v_i_boxed_2064_, v_stop_boxed_2065_, v_b_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec_ref(v_as_2055_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object* v_xs_2067_, lean_object* v_e_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v___y_2075_; lean_object* v___x_2094_; 
lean_inc(v___y_2072_);
lean_inc_ref(v___y_2071_);
lean_inc(v___y_2070_);
lean_inc_ref(v___y_2069_);
v___x_2094_ = l_Lean_Meta_getLevel(v_e_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; uint8_t v___x_2098_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
v___x_2096_ = lean_array_get_size(v_xs_2067_);
v___x_2097_ = lean_unsigned_to_nat(0u);
v___x_2098_ = lean_nat_dec_lt(v___x_2097_, v___x_2096_);
if (v___x_2098_ == 0)
{
lean_dec(v_a_2095_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
v___y_2075_ = v___x_2094_;
goto v___jp_2074_;
}
else
{
size_t v___x_2099_; size_t v___x_2100_; lean_object* v___x_2101_; 
lean_dec_ref(v___x_2094_);
v___x_2099_ = lean_usize_of_nat(v___x_2096_);
v___x_2100_ = ((size_t)0ULL);
v___x_2101_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_xs_2067_, v___x_2099_, v___x_2100_, v_a_2095_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
v___y_2075_ = v___x_2101_;
goto v___jp_2074_;
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
v_a_2102_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2094_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2094_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
v___jp_2074_:
{
if (lean_obj_tag(v___y_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2085_; 
v_a_2076_ = lean_ctor_get(v___y_2075_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___y_2075_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2078_ = v___y_2075_;
v_isShared_2079_ = v_isSharedCheck_2085_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___y_2075_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2085_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v___x_2080_ = l_Lean_Level_normalize(v_a_2076_);
lean_dec(v_a_2076_);
v___x_2081_ = l_Lean_mkSort(v___x_2080_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 0, v___x_2081_);
v___x_2083_ = v___x_2078_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_a_2086_ = lean_ctor_get(v___y_2075_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___y_2075_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___y_2075_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___y_2075_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object* v_xs_2110_, lean_object* v_e_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(v_xs_2110_, v_e_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_);
lean_dec_ref(v_xs_2110_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object* v_e_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v___f_2125_; uint8_t v___x_2126_; lean_object* v___x_2127_; 
v___f_2125_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0));
v___x_2126_ = 0;
v___x_2127_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_e_2119_, v___f_2125_, v___x_2126_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object* v_e_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object* v_e_2135_, lean_object* v_k_2136_, uint8_t v_cleanupAnnotations_2137_, uint8_t v_preserveNondepLet_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
lean_object* v___f_2144_; uint8_t v___x_2145_; uint8_t v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___f_2144_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2144_, 0, v_k_2136_);
v___x_2145_ = 1;
v___x_2146_ = 0;
v___x_2147_ = lean_box(0);
v___x_2148_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2135_, v___x_2145_, v___x_2145_, v_preserveNondepLet_2138_, v___x_2146_, v___x_2147_, v___f_2144_, v_cleanupAnnotations_2137_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2148_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
v_a_2157_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2148_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2148_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object* v_e_2165_, lean_object* v_k_2166_, lean_object* v_cleanupAnnotations_2167_, lean_object* v_preserveNondepLet_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2174_; uint8_t v_preserveNondepLet_boxed_2175_; lean_object* v_res_2176_; 
v_cleanupAnnotations_boxed_2174_ = lean_unbox(v_cleanupAnnotations_2167_);
v_preserveNondepLet_boxed_2175_ = lean_unbox(v_preserveNondepLet_2168_);
v_res_2176_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2165_, v_k_2166_, v_cleanupAnnotations_boxed_2174_, v_preserveNondepLet_boxed_2175_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object* v_00_u03b1_2177_, lean_object* v_e_2178_, lean_object* v_k_2179_, uint8_t v_cleanupAnnotations_2180_, uint8_t v_preserveNondepLet_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
lean_object* v___x_2187_; 
v___x_2187_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2178_, v_k_2179_, v_cleanupAnnotations_2180_, v_preserveNondepLet_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object* v_00_u03b1_2188_, lean_object* v_e_2189_, lean_object* v_k_2190_, lean_object* v_cleanupAnnotations_2191_, lean_object* v_preserveNondepLet_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2198_; uint8_t v_preserveNondepLet_boxed_2199_; lean_object* v_res_2200_; 
v_cleanupAnnotations_boxed_2198_ = lean_unbox(v_cleanupAnnotations_2191_);
v_preserveNondepLet_boxed_2199_ = lean_unbox(v_preserveNondepLet_2192_);
v_res_2200_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(v_00_u03b1_2188_, v_e_2189_, v_k_2190_, v_cleanupAnnotations_boxed_2198_, v_preserveNondepLet_boxed_2199_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object* v_xs_2201_, lean_object* v_e_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
lean_object* v___x_2208_; 
lean_inc(v___y_2206_);
lean_inc_ref(v___y_2205_);
lean_inc(v___y_2204_);
lean_inc_ref(v___y_2203_);
v___x_2208_ = lean_infer_type(v_e_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; uint8_t v___x_2210_; uint8_t v___x_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2209_);
lean_dec_ref(v___x_2208_);
v___x_2210_ = 0;
v___x_2211_ = 1;
v___x_2212_ = 1;
v___x_2213_ = l_Lean_Meta_mkForallFVars(v_xs_2201_, v_a_2209_, v___x_2210_, v___x_2211_, v___x_2210_, v___x_2212_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
return v___x_2213_;
}
else
{
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
return v___x_2208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object* v_xs_2214_, lean_object* v_e_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(v_xs_2214_, v_e_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
lean_dec_ref(v_xs_2214_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object* v_e_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v___f_2229_; uint8_t v___x_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; 
v___f_2229_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0));
v___x_2230_ = 0;
v___x_2231_ = 1;
v___x_2232_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2223_, v___f_2229_, v___x_2230_, v___x_2231_, v_a_2224_, v_a_2225_, v_a_2226_, v_a_2227_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object* v_e_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2233_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_);
return v_res_2239_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__0));
v___x_2242_ = l_Lean_stringToMessageData(v___x_2241_);
return v___x_2242_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3(void){
_start:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2244_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__2));
v___x_2245_ = l_Lean_stringToMessageData(v___x_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object* v_mvarId_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2252_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__1, &l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1);
v___x_2253_ = l_Lean_MessageData_ofName(v_mvarId_2246_);
v___x_2254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2252_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__3, &l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3);
v___x_2256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_2256_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object* v_mvarId_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
lean_dec(v_a_2262_);
lean_dec_ref(v_a_2261_);
lean_dec(v_a_2260_);
lean_dec_ref(v_a_2259_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object* v_00_u03b1_2265_, lean_object* v_mvarId_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2266_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object* v_00_u03b1_2273_, lean_object* v_mvarId_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lean_Meta_throwUnknownMVar(v_00_u03b1_2273_, v_mvarId_2274_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
lean_dec(v_a_2278_);
lean_dec_ref(v_a_2277_);
lean_dec(v_a_2276_);
lean_dec_ref(v_a_2275_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object* v_mvarId_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_){
_start:
{
lean_object* v___x_2287_; lean_object* v_mctx_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_st_ref_get(v_a_2283_);
v_mctx_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc_ref(v_mctx_2288_);
lean_dec(v___x_2287_);
v___x_2289_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2288_, v_mvarId_2281_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v___x_2290_; 
v___x_2290_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2281_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_);
return v___x_2290_;
}
else
{
lean_object* v_val_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_mvarId_2281_);
v_val_2291_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2293_ = v___x_2289_;
v_isShared_2294_ = v_isSharedCheck_2299_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_val_2291_);
lean_dec(v___x_2289_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2299_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v_type_2295_; lean_object* v___x_2297_; 
v_type_2295_ = lean_ctor_get(v_val_2291_, 2);
lean_inc_ref(v_type_2295_);
lean_dec(v_val_2291_);
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 0);
lean_ctor_set(v___x_2293_, 0, v_type_2295_);
v___x_2297_ = v___x_2293_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_type_2295_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object* v_mvarId_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_2300_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_);
lean_dec(v_a_2304_);
lean_dec_ref(v_a_2303_);
lean_dec(v_a_2302_);
lean_dec_ref(v_a_2301_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object* v_fvarId_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v_lctx_2312_; lean_object* v___x_2313_; 
v_lctx_2312_ = lean_ctor_get(v_a_2308_, 2);
lean_inc_ref(v_lctx_2312_);
lean_dec_ref(v_a_2308_);
lean_inc(v_fvarId_2307_);
v___x_2313_ = lean_local_ctx_find(v_lctx_2312_, v_fvarId_2307_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v___x_2314_; 
v___x_2314_ = l_Lean_FVarId_throwUnknown___redArg(v_fvarId_2307_, v_a_2309_, v_a_2310_);
return v___x_2314_;
}
else
{
lean_object* v_val_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_fvarId_2307_);
v_val_2315_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2317_ = v___x_2313_;
v_isShared_2318_ = v_isSharedCheck_2323_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_val_2315_);
lean_dec(v___x_2313_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2323_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2319_; lean_object* v___x_2321_; 
v___x_2319_ = l_Lean_LocalDecl_type(v_val_2315_);
lean_dec(v_val_2315_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set_tag(v___x_2317_, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2319_);
v___x_2321_ = v___x_2317_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v___x_2319_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object* v_fvarId_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2324_, v_a_2325_, v_a_2326_, v_a_2327_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2326_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object* v_fvarId_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2330_, v_a_2331_, v_a_2333_, v_a_2334_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object* v_fvarId_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(v_fvarId_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
lean_dec(v_a_2341_);
lean_dec_ref(v_a_2340_);
lean_dec(v_a_2339_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object* v_e_2346_, lean_object* v_inferType_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_){
_start:
{
uint8_t v_cacheInferType_2353_; 
v_cacheInferType_2353_ = lean_ctor_get_uint8(v_a_2348_, sizeof(void*)*7 + 3);
if (v_cacheInferType_2353_ == 0)
{
lean_object* v___x_2354_; 
lean_dec_ref(v_e_2346_);
v___x_2354_ = lean_apply_5(v_inferType_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, lean_box(0));
return v___x_2354_;
}
else
{
uint8_t v___x_2355_; 
v___x_2355_ = l_Lean_Expr_hasMVar(v_e_2346_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2346_, v_a_2348_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2410_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2359_ = v___x_2356_;
v_isShared_2360_ = v_isSharedCheck_2410_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2356_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2410_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2361_; lean_object* v_cache_2362_; lean_object* v_inferType_2363_; lean_object* v___f_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2361_ = lean_st_ref_get(v_a_2349_);
v_cache_2362_ = lean_ctor_get(v___x_2361_, 1);
lean_inc_ref(v_cache_2362_);
lean_dec(v___x_2361_);
v_inferType_2363_ = lean_ctor_get(v_cache_2362_, 0);
lean_inc_ref(v_inferType_2363_);
lean_dec_ref(v_cache_2362_);
v___f_2364_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0));
v___x_2365_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1));
lean_inc(v_a_2357_);
v___x_2366_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2364_, v___x_2365_, v_inferType_2363_, v_a_2357_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v___x_2367_; 
lean_del_object(v___x_2359_);
lean_inc(v_a_2349_);
v___x_2367_ = lean_apply_5(v_inferType_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, lean_box(0));
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; uint8_t v___x_2369_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
v___x_2369_ = l_Lean_Expr_hasMVar(v_a_2368_);
if (v___x_2369_ == 0)
{
lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2404_; 
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2404_ == 0)
{
lean_object* v_unused_2405_; 
v_unused_2405_ = lean_ctor_get(v___x_2367_, 0);
lean_dec(v_unused_2405_);
v___x_2371_ = v___x_2367_;
v_isShared_2372_ = v_isSharedCheck_2404_;
goto v_resetjp_2370_;
}
else
{
lean_dec(v___x_2367_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2404_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2373_; lean_object* v_cache_2374_; lean_object* v_mctx_2375_; lean_object* v_zetaDeltaFVarIds_2376_; lean_object* v_postponed_2377_; lean_object* v_diag_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2403_; 
v___x_2373_ = lean_st_ref_take(v_a_2349_);
v_cache_2374_ = lean_ctor_get(v___x_2373_, 1);
v_mctx_2375_ = lean_ctor_get(v___x_2373_, 0);
v_zetaDeltaFVarIds_2376_ = lean_ctor_get(v___x_2373_, 2);
v_postponed_2377_ = lean_ctor_get(v___x_2373_, 3);
v_diag_2378_ = lean_ctor_get(v___x_2373_, 4);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2380_ = v___x_2373_;
v_isShared_2381_ = v_isSharedCheck_2403_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_diag_2378_);
lean_inc(v_postponed_2377_);
lean_inc(v_zetaDeltaFVarIds_2376_);
lean_inc(v_cache_2374_);
lean_inc(v_mctx_2375_);
lean_dec(v___x_2373_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2403_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v_inferType_2382_; lean_object* v_funInfo_2383_; lean_object* v_synthInstance_2384_; lean_object* v_whnf_2385_; lean_object* v_defEqTrans_2386_; lean_object* v_defEqPerm_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2402_; 
v_inferType_2382_ = lean_ctor_get(v_cache_2374_, 0);
v_funInfo_2383_ = lean_ctor_get(v_cache_2374_, 1);
v_synthInstance_2384_ = lean_ctor_get(v_cache_2374_, 2);
v_whnf_2385_ = lean_ctor_get(v_cache_2374_, 3);
v_defEqTrans_2386_ = lean_ctor_get(v_cache_2374_, 4);
v_defEqPerm_2387_ = lean_ctor_get(v_cache_2374_, 5);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_cache_2374_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2389_ = v_cache_2374_;
v_isShared_2390_ = v_isSharedCheck_2402_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_defEqPerm_2387_);
lean_inc(v_defEqTrans_2386_);
lean_inc(v_whnf_2385_);
lean_inc(v_synthInstance_2384_);
lean_inc(v_funInfo_2383_);
lean_inc(v_inferType_2382_);
lean_dec(v_cache_2374_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2402_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2391_; lean_object* v___x_2393_; 
lean_inc(v_a_2368_);
v___x_2391_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2364_, v___x_2365_, v_inferType_2382_, v_a_2357_, v_a_2368_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 0, v___x_2391_);
v___x_2393_ = v___x_2389_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v___x_2391_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_funInfo_2383_);
lean_ctor_set(v_reuseFailAlloc_2401_, 2, v_synthInstance_2384_);
lean_ctor_set(v_reuseFailAlloc_2401_, 3, v_whnf_2385_);
lean_ctor_set(v_reuseFailAlloc_2401_, 4, v_defEqTrans_2386_);
lean_ctor_set(v_reuseFailAlloc_2401_, 5, v_defEqPerm_2387_);
v___x_2393_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
lean_object* v___x_2395_; 
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 1, v___x_2393_);
v___x_2395_ = v___x_2380_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_mctx_2375_);
lean_ctor_set(v_reuseFailAlloc_2400_, 1, v___x_2393_);
lean_ctor_set(v_reuseFailAlloc_2400_, 2, v_zetaDeltaFVarIds_2376_);
lean_ctor_set(v_reuseFailAlloc_2400_, 3, v_postponed_2377_);
lean_ctor_set(v_reuseFailAlloc_2400_, 4, v_diag_2378_);
v___x_2395_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
lean_object* v___x_2396_; lean_object* v___x_2398_; 
v___x_2396_ = lean_st_ref_set(v_a_2349_, v___x_2395_);
lean_dec(v_a_2349_);
if (v_isShared_2372_ == 0)
{
v___x_2398_ = v___x_2371_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2368_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2368_);
lean_dec(v_a_2357_);
lean_dec(v_a_2349_);
return v___x_2367_;
}
}
else
{
lean_dec(v_a_2357_);
lean_dec(v_a_2349_);
return v___x_2367_;
}
}
else
{
lean_object* v_val_2406_; lean_object* v___x_2408_; 
lean_dec(v_a_2357_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec_ref(v_inferType_2347_);
v_val_2406_ = lean_ctor_get(v___x_2366_, 0);
lean_inc(v_val_2406_);
lean_dec_ref(v___x_2366_);
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 0, v_val_2406_);
v___x_2408_ = v___x_2359_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_val_2406_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec_ref(v_inferType_2347_);
v_a_2411_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2356_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2356_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
else
{
lean_object* v___x_2419_; 
lean_dec_ref(v_e_2346_);
v___x_2419_ = lean_apply_5(v_inferType_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, lean_box(0));
return v___x_2419_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object* v_e_2420_, lean_object* v_inferType_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(v_e_2420_, v_inferType_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object* v_x_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_){
_start:
{
uint8_t v___y_2435_; lean_object* v___y_2436_; uint8_t v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; uint8_t v___y_2442_; lean_object* v___y_2443_; uint8_t v___y_2444_; lean_object* v___y_2445_; uint8_t v___y_2474_; lean_object* v___x_2554_; uint8_t v_transparency_2555_; uint8_t v___x_2556_; uint8_t v___x_2557_; 
v___x_2554_ = l_Lean_Meta_Context_config(v_a_2429_);
v_transparency_2555_ = lean_ctor_get_uint8(v___x_2554_, 9);
lean_dec_ref(v___x_2554_);
v___x_2556_ = 1;
v___x_2557_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2555_, v___x_2556_);
if (v___x_2557_ == 0)
{
v___y_2474_ = v_transparency_2555_;
goto v___jp_2473_;
}
else
{
v___y_2474_ = v___x_2556_;
goto v___jp_2473_;
}
v___jp_2434_:
{
lean_object* v___x_2446_; uint8_t v_foApprox_2447_; uint8_t v_ctxApprox_2448_; uint8_t v_quasiPatternApprox_2449_; uint8_t v_constApprox_2450_; uint8_t v_isDefEqStuckEx_2451_; uint8_t v_unificationHints_2452_; uint8_t v_proofIrrelevance_2453_; uint8_t v_assignSyntheticOpaque_2454_; uint8_t v_offsetCnstrs_2455_; uint8_t v_transparency_2456_; uint8_t v_univApprox_2457_; uint8_t v_zetaUnused_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2472_; 
v___x_2446_ = l_Lean_Meta_Context_config(v___y_2441_);
lean_dec_ref(v___y_2441_);
v_foApprox_2447_ = lean_ctor_get_uint8(v___x_2446_, 0);
v_ctxApprox_2448_ = lean_ctor_get_uint8(v___x_2446_, 1);
v_quasiPatternApprox_2449_ = lean_ctor_get_uint8(v___x_2446_, 2);
v_constApprox_2450_ = lean_ctor_get_uint8(v___x_2446_, 3);
v_isDefEqStuckEx_2451_ = lean_ctor_get_uint8(v___x_2446_, 4);
v_unificationHints_2452_ = lean_ctor_get_uint8(v___x_2446_, 5);
v_proofIrrelevance_2453_ = lean_ctor_get_uint8(v___x_2446_, 6);
v_assignSyntheticOpaque_2454_ = lean_ctor_get_uint8(v___x_2446_, 7);
v_offsetCnstrs_2455_ = lean_ctor_get_uint8(v___x_2446_, 8);
v_transparency_2456_ = lean_ctor_get_uint8(v___x_2446_, 9);
v_univApprox_2457_ = lean_ctor_get_uint8(v___x_2446_, 11);
v_zetaUnused_2458_ = lean_ctor_get_uint8(v___x_2446_, 17);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2460_ = v___x_2446_;
v_isShared_2461_ = v_isSharedCheck_2472_;
goto v_resetjp_2459_;
}
else
{
lean_dec(v___x_2446_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2472_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
uint8_t v___x_2462_; uint8_t v___x_2463_; uint8_t v___x_2464_; lean_object* v___x_2466_; 
v___x_2462_ = 1;
v___x_2463_ = 0;
v___x_2464_ = 2;
if (v_isShared_2461_ == 0)
{
v___x_2466_ = v___x_2460_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 0, v_foApprox_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 1, v_ctxApprox_2448_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 2, v_quasiPatternApprox_2449_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 3, v_constApprox_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 4, v_isDefEqStuckEx_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 5, v_unificationHints_2452_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 6, v_proofIrrelevance_2453_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 7, v_assignSyntheticOpaque_2454_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 8, v_offsetCnstrs_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 9, v_transparency_2456_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 11, v_univApprox_2457_);
lean_ctor_set_uint8(v_reuseFailAlloc_2471_, 17, v_zetaUnused_2458_);
v___x_2466_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
uint64_t v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
lean_ctor_set_uint8(v___x_2466_, 10, v___x_2463_);
lean_ctor_set_uint8(v___x_2466_, 12, v___x_2462_);
lean_ctor_set_uint8(v___x_2466_, 13, v___x_2462_);
lean_ctor_set_uint8(v___x_2466_, 14, v___x_2464_);
lean_ctor_set_uint8(v___x_2466_, 15, v___x_2462_);
lean_ctor_set_uint8(v___x_2466_, 16, v___x_2462_);
lean_ctor_set_uint8(v___x_2466_, 18, v___x_2462_);
v___x_2467_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2466_);
v___x_2468_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2468_, 0, v___x_2466_);
lean_ctor_set_uint64(v___x_2468_, sizeof(void*)*1, v___x_2467_);
v___x_2469_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2469_, 0, v___x_2468_);
lean_ctor_set(v___x_2469_, 1, v___y_2439_);
lean_ctor_set(v___x_2469_, 2, v___y_2445_);
lean_ctor_set(v___x_2469_, 3, v___y_2440_);
lean_ctor_set(v___x_2469_, 4, v___y_2443_);
lean_ctor_set(v___x_2469_, 5, v___y_2438_);
lean_ctor_set(v___x_2469_, 6, v___y_2436_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*7, v___y_2437_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*7 + 1, v___y_2435_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*7 + 2, v___y_2444_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*7 + 3, v___y_2442_);
v___x_2470_ = lean_apply_5(v_x_2428_, v___x_2469_, v_a_2430_, v_a_2431_, v_a_2432_, lean_box(0));
return v___x_2470_;
}
}
}
v___jp_2473_:
{
lean_object* v___x_2475_; uint8_t v_foApprox_2476_; uint8_t v_ctxApprox_2477_; uint8_t v_quasiPatternApprox_2478_; uint8_t v_constApprox_2479_; uint8_t v_isDefEqStuckEx_2480_; uint8_t v_unificationHints_2481_; uint8_t v_proofIrrelevance_2482_; uint8_t v_assignSyntheticOpaque_2483_; uint8_t v_offsetCnstrs_2484_; uint8_t v_etaStruct_2485_; uint8_t v_univApprox_2486_; uint8_t v_iota_2487_; uint8_t v_beta_2488_; uint8_t v_proj_2489_; uint8_t v_zeta_2490_; uint8_t v_zetaDelta_2491_; uint8_t v_zetaUnused_2492_; uint8_t v_zetaHave_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2553_; 
v___x_2475_ = l_Lean_Meta_Context_config(v_a_2429_);
v_foApprox_2476_ = lean_ctor_get_uint8(v___x_2475_, 0);
v_ctxApprox_2477_ = lean_ctor_get_uint8(v___x_2475_, 1);
v_quasiPatternApprox_2478_ = lean_ctor_get_uint8(v___x_2475_, 2);
v_constApprox_2479_ = lean_ctor_get_uint8(v___x_2475_, 3);
v_isDefEqStuckEx_2480_ = lean_ctor_get_uint8(v___x_2475_, 4);
v_unificationHints_2481_ = lean_ctor_get_uint8(v___x_2475_, 5);
v_proofIrrelevance_2482_ = lean_ctor_get_uint8(v___x_2475_, 6);
v_assignSyntheticOpaque_2483_ = lean_ctor_get_uint8(v___x_2475_, 7);
v_offsetCnstrs_2484_ = lean_ctor_get_uint8(v___x_2475_, 8);
v_etaStruct_2485_ = lean_ctor_get_uint8(v___x_2475_, 10);
v_univApprox_2486_ = lean_ctor_get_uint8(v___x_2475_, 11);
v_iota_2487_ = lean_ctor_get_uint8(v___x_2475_, 12);
v_beta_2488_ = lean_ctor_get_uint8(v___x_2475_, 13);
v_proj_2489_ = lean_ctor_get_uint8(v___x_2475_, 14);
v_zeta_2490_ = lean_ctor_get_uint8(v___x_2475_, 15);
v_zetaDelta_2491_ = lean_ctor_get_uint8(v___x_2475_, 16);
v_zetaUnused_2492_ = lean_ctor_get_uint8(v___x_2475_, 17);
v_zetaHave_2493_ = lean_ctor_get_uint8(v___x_2475_, 18);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2495_ = v___x_2475_;
v_isShared_2496_ = v_isSharedCheck_2553_;
goto v_resetjp_2494_;
}
else
{
lean_dec(v___x_2475_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2553_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
uint8_t v_trackZetaDelta_2497_; lean_object* v_zetaDeltaSet_2498_; lean_object* v_lctx_2499_; lean_object* v_localInstances_2500_; lean_object* v_defEqCtx_x3f_2501_; lean_object* v_synthPendingDepth_2502_; lean_object* v_canUnfold_x3f_2503_; uint8_t v_univApprox_2504_; uint8_t v_inTypeClassResolution_2505_; uint8_t v_cacheInferType_2506_; lean_object* v_config_2508_; 
v_trackZetaDelta_2497_ = lean_ctor_get_uint8(v_a_2429_, sizeof(void*)*7);
v_zetaDeltaSet_2498_ = lean_ctor_get(v_a_2429_, 1);
lean_inc(v_zetaDeltaSet_2498_);
v_lctx_2499_ = lean_ctor_get(v_a_2429_, 2);
lean_inc_ref(v_lctx_2499_);
v_localInstances_2500_ = lean_ctor_get(v_a_2429_, 3);
lean_inc_ref(v_localInstances_2500_);
v_defEqCtx_x3f_2501_ = lean_ctor_get(v_a_2429_, 4);
lean_inc(v_defEqCtx_x3f_2501_);
v_synthPendingDepth_2502_ = lean_ctor_get(v_a_2429_, 5);
lean_inc(v_synthPendingDepth_2502_);
v_canUnfold_x3f_2503_ = lean_ctor_get(v_a_2429_, 6);
lean_inc(v_canUnfold_x3f_2503_);
v_univApprox_2504_ = lean_ctor_get_uint8(v_a_2429_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2505_ = lean_ctor_get_uint8(v_a_2429_, sizeof(void*)*7 + 2);
v_cacheInferType_2506_ = lean_ctor_get_uint8(v_a_2429_, sizeof(void*)*7 + 3);
if (v_isShared_2496_ == 0)
{
v_config_2508_ = v___x_2495_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 0, v_foApprox_2476_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 1, v_ctxApprox_2477_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 2, v_quasiPatternApprox_2478_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 3, v_constApprox_2479_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 4, v_isDefEqStuckEx_2480_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 5, v_unificationHints_2481_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 6, v_proofIrrelevance_2482_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 7, v_assignSyntheticOpaque_2483_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 8, v_offsetCnstrs_2484_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 10, v_etaStruct_2485_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 11, v_univApprox_2486_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 12, v_iota_2487_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 13, v_beta_2488_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 14, v_proj_2489_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 15, v_zeta_2490_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 16, v_zetaDelta_2491_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 17, v_zetaUnused_2492_);
lean_ctor_set_uint8(v_reuseFailAlloc_2552_, 18, v_zetaHave_2493_);
v_config_2508_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
uint64_t v___x_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2544_; 
lean_ctor_set_uint8(v_config_2508_, 9, v___y_2474_);
v___x_2509_ = l_Lean_Meta_Context_configKey(v_a_2429_);
v_isSharedCheck_2544_ = !lean_is_exclusive(v_a_2429_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; lean_object* v_unused_2546_; lean_object* v_unused_2547_; lean_object* v_unused_2548_; lean_object* v_unused_2549_; lean_object* v_unused_2550_; lean_object* v_unused_2551_; 
v_unused_2545_ = lean_ctor_get(v_a_2429_, 6);
lean_dec(v_unused_2545_);
v_unused_2546_ = lean_ctor_get(v_a_2429_, 5);
lean_dec(v_unused_2546_);
v_unused_2547_ = lean_ctor_get(v_a_2429_, 4);
lean_dec(v_unused_2547_);
v_unused_2548_ = lean_ctor_get(v_a_2429_, 3);
lean_dec(v_unused_2548_);
v_unused_2549_ = lean_ctor_get(v_a_2429_, 2);
lean_dec(v_unused_2549_);
v_unused_2550_ = lean_ctor_get(v_a_2429_, 1);
lean_dec(v_unused_2550_);
v_unused_2551_ = lean_ctor_get(v_a_2429_, 0);
lean_dec(v_unused_2551_);
v___x_2511_ = v_a_2429_;
v_isShared_2512_ = v_isSharedCheck_2544_;
goto v_resetjp_2510_;
}
else
{
lean_dec(v_a_2429_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2544_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
uint64_t v___x_2513_; uint64_t v___x_2514_; uint64_t v___x_2515_; uint64_t v___x_2516_; uint64_t v_key_2517_; lean_object* v___x_2518_; lean_object* v___x_2520_; 
v___x_2513_ = 2ULL;
v___x_2514_ = lean_uint64_shift_right(v___x_2509_, v___x_2513_);
v___x_2515_ = lean_uint64_shift_left(v___x_2514_, v___x_2513_);
v___x_2516_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_2474_);
v_key_2517_ = lean_uint64_lor(v___x_2515_, v___x_2516_);
v___x_2518_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2518_, 0, v_config_2508_);
lean_ctor_set_uint64(v___x_2518_, sizeof(void*)*1, v_key_2517_);
lean_inc(v_canUnfold_x3f_2503_);
lean_inc(v_synthPendingDepth_2502_);
lean_inc(v_defEqCtx_x3f_2501_);
lean_inc_ref(v_localInstances_2500_);
lean_inc_ref(v_lctx_2499_);
lean_inc(v_zetaDeltaSet_2498_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2518_);
v___x_2520_ = v___x_2511_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2518_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v_zetaDeltaSet_2498_);
lean_ctor_set(v_reuseFailAlloc_2543_, 2, v_lctx_2499_);
lean_ctor_set(v_reuseFailAlloc_2543_, 3, v_localInstances_2500_);
lean_ctor_set(v_reuseFailAlloc_2543_, 4, v_defEqCtx_x3f_2501_);
lean_ctor_set(v_reuseFailAlloc_2543_, 5, v_synthPendingDepth_2502_);
lean_ctor_set(v_reuseFailAlloc_2543_, 6, v_canUnfold_x3f_2503_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*7, v_trackZetaDelta_2497_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*7 + 1, v_univApprox_2504_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2505_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*7 + 3, v_cacheInferType_2506_);
v___x_2520_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
lean_object* v___x_2521_; 
v___x_2521_ = l_Lean_Meta_getConfig___redArg(v___x_2520_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; uint8_t v_beta_2523_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref(v___x_2521_);
v_beta_2523_ = lean_ctor_get_uint8(v_a_2522_, 13);
if (v_beta_2523_ == 0)
{
lean_dec(v_a_2522_);
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
uint8_t v_iota_2524_; 
v_iota_2524_ = lean_ctor_get_uint8(v_a_2522_, 12);
if (v_iota_2524_ == 0)
{
lean_dec(v_a_2522_);
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
uint8_t v_zeta_2525_; 
v_zeta_2525_ = lean_ctor_get_uint8(v_a_2522_, 15);
if (v_zeta_2525_ == 0)
{
lean_dec(v_a_2522_);
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
uint8_t v_zetaHave_2526_; 
v_zetaHave_2526_ = lean_ctor_get_uint8(v_a_2522_, 18);
if (v_zetaHave_2526_ == 0)
{
lean_dec(v_a_2522_);
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
uint8_t v_zetaDelta_2527_; 
v_zetaDelta_2527_ = lean_ctor_get_uint8(v_a_2522_, 16);
if (v_zetaDelta_2527_ == 0)
{
lean_dec(v_a_2522_);
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
uint8_t v_etaStruct_2528_; uint8_t v_proj_2529_; uint8_t v___x_2530_; uint8_t v___x_2531_; 
v_etaStruct_2528_ = lean_ctor_get_uint8(v_a_2522_, 10);
v_proj_2529_ = lean_ctor_get_uint8(v_a_2522_, 14);
lean_dec(v_a_2522_);
v___x_2530_ = 2;
v___x_2531_ = l_Lean_Meta_instDecidableEqProjReductionKind(v_proj_2529_, v___x_2530_);
if (v___x_2531_ == 0)
{
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
uint8_t v___x_2532_; uint8_t v___x_2533_; 
v___x_2532_ = 0;
v___x_2533_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_2528_, v___x_2532_);
if (v___x_2533_ == 0)
{
v___y_2435_ = v_univApprox_2504_;
v___y_2436_ = v_canUnfold_x3f_2503_;
v___y_2437_ = v_trackZetaDelta_2497_;
v___y_2438_ = v_synthPendingDepth_2502_;
v___y_2439_ = v_zetaDeltaSet_2498_;
v___y_2440_ = v_localInstances_2500_;
v___y_2441_ = v___x_2520_;
v___y_2442_ = v_cacheInferType_2506_;
v___y_2443_ = v_defEqCtx_x3f_2501_;
v___y_2444_ = v_inTypeClassResolution_2505_;
v___y_2445_ = v_lctx_2499_;
goto v___jp_2434_;
}
else
{
lean_object* v___x_2534_; 
lean_dec(v_canUnfold_x3f_2503_);
lean_dec(v_synthPendingDepth_2502_);
lean_dec(v_defEqCtx_x3f_2501_);
lean_dec_ref(v_localInstances_2500_);
lean_dec_ref(v_lctx_2499_);
lean_dec(v_zetaDeltaSet_2498_);
v___x_2534_ = lean_apply_5(v_x_2428_, v___x_2520_, v_a_2430_, v_a_2431_, v_a_2432_, lean_box(0));
return v___x_2534_;
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
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec_ref(v___x_2520_);
lean_dec(v_canUnfold_x3f_2503_);
lean_dec(v_synthPendingDepth_2502_);
lean_dec(v_defEqCtx_x3f_2501_);
lean_dec_ref(v_localInstances_2500_);
lean_dec_ref(v_lctx_2499_);
lean_dec(v_zetaDeltaSet_2498_);
lean_dec(v_a_2432_);
lean_dec_ref(v_a_2431_);
lean_dec(v_a_2430_);
lean_dec_ref(v_x_2428_);
v_a_2535_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2521_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2521_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object* v_x_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l_Lean_Meta_withInferTypeConfig___redArg(v_x_2558_, v_a_2559_, v_a_2560_, v_a_2561_, v_a_2562_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object* v_00_u03b1_2565_, lean_object* v_x_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_){
_start:
{
uint8_t v___y_2573_; lean_object* v___y_2574_; uint8_t v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; uint8_t v___y_2580_; lean_object* v___y_2581_; uint8_t v___y_2582_; lean_object* v___y_2583_; uint8_t v___y_2612_; lean_object* v___x_2692_; uint8_t v_transparency_2693_; uint8_t v___x_2694_; uint8_t v___x_2695_; 
v___x_2692_ = l_Lean_Meta_Context_config(v_a_2567_);
v_transparency_2693_ = lean_ctor_get_uint8(v___x_2692_, 9);
lean_dec_ref(v___x_2692_);
v___x_2694_ = 1;
v___x_2695_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2693_, v___x_2694_);
if (v___x_2695_ == 0)
{
v___y_2612_ = v_transparency_2693_;
goto v___jp_2611_;
}
else
{
v___y_2612_ = v___x_2694_;
goto v___jp_2611_;
}
v___jp_2572_:
{
lean_object* v___x_2584_; uint8_t v_foApprox_2585_; uint8_t v_ctxApprox_2586_; uint8_t v_quasiPatternApprox_2587_; uint8_t v_constApprox_2588_; uint8_t v_isDefEqStuckEx_2589_; uint8_t v_unificationHints_2590_; uint8_t v_proofIrrelevance_2591_; uint8_t v_assignSyntheticOpaque_2592_; uint8_t v_offsetCnstrs_2593_; uint8_t v_transparency_2594_; uint8_t v_univApprox_2595_; uint8_t v_zetaUnused_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2610_; 
v___x_2584_ = l_Lean_Meta_Context_config(v___y_2579_);
lean_dec_ref(v___y_2579_);
v_foApprox_2585_ = lean_ctor_get_uint8(v___x_2584_, 0);
v_ctxApprox_2586_ = lean_ctor_get_uint8(v___x_2584_, 1);
v_quasiPatternApprox_2587_ = lean_ctor_get_uint8(v___x_2584_, 2);
v_constApprox_2588_ = lean_ctor_get_uint8(v___x_2584_, 3);
v_isDefEqStuckEx_2589_ = lean_ctor_get_uint8(v___x_2584_, 4);
v_unificationHints_2590_ = lean_ctor_get_uint8(v___x_2584_, 5);
v_proofIrrelevance_2591_ = lean_ctor_get_uint8(v___x_2584_, 6);
v_assignSyntheticOpaque_2592_ = lean_ctor_get_uint8(v___x_2584_, 7);
v_offsetCnstrs_2593_ = lean_ctor_get_uint8(v___x_2584_, 8);
v_transparency_2594_ = lean_ctor_get_uint8(v___x_2584_, 9);
v_univApprox_2595_ = lean_ctor_get_uint8(v___x_2584_, 11);
v_zetaUnused_2596_ = lean_ctor_get_uint8(v___x_2584_, 17);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2598_ = v___x_2584_;
v_isShared_2599_ = v_isSharedCheck_2610_;
goto v_resetjp_2597_;
}
else
{
lean_dec(v___x_2584_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2610_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
uint8_t v___x_2600_; uint8_t v___x_2601_; uint8_t v___x_2602_; lean_object* v___x_2604_; 
v___x_2600_ = 1;
v___x_2601_ = 0;
v___x_2602_ = 2;
if (v_isShared_2599_ == 0)
{
v___x_2604_ = v___x_2598_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 0, v_foApprox_2585_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 1, v_ctxApprox_2586_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 2, v_quasiPatternApprox_2587_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 3, v_constApprox_2588_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 4, v_isDefEqStuckEx_2589_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 5, v_unificationHints_2590_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 6, v_proofIrrelevance_2591_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 7, v_assignSyntheticOpaque_2592_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 8, v_offsetCnstrs_2593_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 9, v_transparency_2594_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 11, v_univApprox_2595_);
lean_ctor_set_uint8(v_reuseFailAlloc_2609_, 17, v_zetaUnused_2596_);
v___x_2604_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
uint64_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
lean_ctor_set_uint8(v___x_2604_, 10, v___x_2601_);
lean_ctor_set_uint8(v___x_2604_, 12, v___x_2600_);
lean_ctor_set_uint8(v___x_2604_, 13, v___x_2600_);
lean_ctor_set_uint8(v___x_2604_, 14, v___x_2602_);
lean_ctor_set_uint8(v___x_2604_, 15, v___x_2600_);
lean_ctor_set_uint8(v___x_2604_, 16, v___x_2600_);
lean_ctor_set_uint8(v___x_2604_, 18, v___x_2600_);
v___x_2605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2604_);
v___x_2606_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2606_, 0, v___x_2604_);
lean_ctor_set_uint64(v___x_2606_, sizeof(void*)*1, v___x_2605_);
v___x_2607_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
lean_ctor_set(v___x_2607_, 1, v___y_2577_);
lean_ctor_set(v___x_2607_, 2, v___y_2583_);
lean_ctor_set(v___x_2607_, 3, v___y_2578_);
lean_ctor_set(v___x_2607_, 4, v___y_2581_);
lean_ctor_set(v___x_2607_, 5, v___y_2576_);
lean_ctor_set(v___x_2607_, 6, v___y_2574_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*7, v___y_2575_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*7 + 1, v___y_2573_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*7 + 2, v___y_2582_);
lean_ctor_set_uint8(v___x_2607_, sizeof(void*)*7 + 3, v___y_2580_);
v___x_2608_ = lean_apply_5(v_x_2566_, v___x_2607_, v_a_2568_, v_a_2569_, v_a_2570_, lean_box(0));
return v___x_2608_;
}
}
}
v___jp_2611_:
{
lean_object* v___x_2613_; uint8_t v_foApprox_2614_; uint8_t v_ctxApprox_2615_; uint8_t v_quasiPatternApprox_2616_; uint8_t v_constApprox_2617_; uint8_t v_isDefEqStuckEx_2618_; uint8_t v_unificationHints_2619_; uint8_t v_proofIrrelevance_2620_; uint8_t v_assignSyntheticOpaque_2621_; uint8_t v_offsetCnstrs_2622_; uint8_t v_etaStruct_2623_; uint8_t v_univApprox_2624_; uint8_t v_iota_2625_; uint8_t v_beta_2626_; uint8_t v_proj_2627_; uint8_t v_zeta_2628_; uint8_t v_zetaDelta_2629_; uint8_t v_zetaUnused_2630_; uint8_t v_zetaHave_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2691_; 
v___x_2613_ = l_Lean_Meta_Context_config(v_a_2567_);
v_foApprox_2614_ = lean_ctor_get_uint8(v___x_2613_, 0);
v_ctxApprox_2615_ = lean_ctor_get_uint8(v___x_2613_, 1);
v_quasiPatternApprox_2616_ = lean_ctor_get_uint8(v___x_2613_, 2);
v_constApprox_2617_ = lean_ctor_get_uint8(v___x_2613_, 3);
v_isDefEqStuckEx_2618_ = lean_ctor_get_uint8(v___x_2613_, 4);
v_unificationHints_2619_ = lean_ctor_get_uint8(v___x_2613_, 5);
v_proofIrrelevance_2620_ = lean_ctor_get_uint8(v___x_2613_, 6);
v_assignSyntheticOpaque_2621_ = lean_ctor_get_uint8(v___x_2613_, 7);
v_offsetCnstrs_2622_ = lean_ctor_get_uint8(v___x_2613_, 8);
v_etaStruct_2623_ = lean_ctor_get_uint8(v___x_2613_, 10);
v_univApprox_2624_ = lean_ctor_get_uint8(v___x_2613_, 11);
v_iota_2625_ = lean_ctor_get_uint8(v___x_2613_, 12);
v_beta_2626_ = lean_ctor_get_uint8(v___x_2613_, 13);
v_proj_2627_ = lean_ctor_get_uint8(v___x_2613_, 14);
v_zeta_2628_ = lean_ctor_get_uint8(v___x_2613_, 15);
v_zetaDelta_2629_ = lean_ctor_get_uint8(v___x_2613_, 16);
v_zetaUnused_2630_ = lean_ctor_get_uint8(v___x_2613_, 17);
v_zetaHave_2631_ = lean_ctor_get_uint8(v___x_2613_, 18);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2633_ = v___x_2613_;
v_isShared_2634_ = v_isSharedCheck_2691_;
goto v_resetjp_2632_;
}
else
{
lean_dec(v___x_2613_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2691_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
uint8_t v_trackZetaDelta_2635_; lean_object* v_zetaDeltaSet_2636_; lean_object* v_lctx_2637_; lean_object* v_localInstances_2638_; lean_object* v_defEqCtx_x3f_2639_; lean_object* v_synthPendingDepth_2640_; lean_object* v_canUnfold_x3f_2641_; uint8_t v_univApprox_2642_; uint8_t v_inTypeClassResolution_2643_; uint8_t v_cacheInferType_2644_; lean_object* v_config_2646_; 
v_trackZetaDelta_2635_ = lean_ctor_get_uint8(v_a_2567_, sizeof(void*)*7);
v_zetaDeltaSet_2636_ = lean_ctor_get(v_a_2567_, 1);
lean_inc(v_zetaDeltaSet_2636_);
v_lctx_2637_ = lean_ctor_get(v_a_2567_, 2);
lean_inc_ref(v_lctx_2637_);
v_localInstances_2638_ = lean_ctor_get(v_a_2567_, 3);
lean_inc_ref(v_localInstances_2638_);
v_defEqCtx_x3f_2639_ = lean_ctor_get(v_a_2567_, 4);
lean_inc(v_defEqCtx_x3f_2639_);
v_synthPendingDepth_2640_ = lean_ctor_get(v_a_2567_, 5);
lean_inc(v_synthPendingDepth_2640_);
v_canUnfold_x3f_2641_ = lean_ctor_get(v_a_2567_, 6);
lean_inc(v_canUnfold_x3f_2641_);
v_univApprox_2642_ = lean_ctor_get_uint8(v_a_2567_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2643_ = lean_ctor_get_uint8(v_a_2567_, sizeof(void*)*7 + 2);
v_cacheInferType_2644_ = lean_ctor_get_uint8(v_a_2567_, sizeof(void*)*7 + 3);
if (v_isShared_2634_ == 0)
{
v_config_2646_ = v___x_2633_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 0, v_foApprox_2614_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 1, v_ctxApprox_2615_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 2, v_quasiPatternApprox_2616_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 3, v_constApprox_2617_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 4, v_isDefEqStuckEx_2618_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 5, v_unificationHints_2619_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 6, v_proofIrrelevance_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 7, v_assignSyntheticOpaque_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 8, v_offsetCnstrs_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 10, v_etaStruct_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 11, v_univApprox_2624_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 12, v_iota_2625_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 13, v_beta_2626_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 14, v_proj_2627_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 15, v_zeta_2628_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 16, v_zetaDelta_2629_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 17, v_zetaUnused_2630_);
lean_ctor_set_uint8(v_reuseFailAlloc_2690_, 18, v_zetaHave_2631_);
v_config_2646_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
uint64_t v___x_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2682_; 
lean_ctor_set_uint8(v_config_2646_, 9, v___y_2612_);
v___x_2647_ = l_Lean_Meta_Context_configKey(v_a_2567_);
v_isSharedCheck_2682_ = !lean_is_exclusive(v_a_2567_);
if (v_isSharedCheck_2682_ == 0)
{
lean_object* v_unused_2683_; lean_object* v_unused_2684_; lean_object* v_unused_2685_; lean_object* v_unused_2686_; lean_object* v_unused_2687_; lean_object* v_unused_2688_; lean_object* v_unused_2689_; 
v_unused_2683_ = lean_ctor_get(v_a_2567_, 6);
lean_dec(v_unused_2683_);
v_unused_2684_ = lean_ctor_get(v_a_2567_, 5);
lean_dec(v_unused_2684_);
v_unused_2685_ = lean_ctor_get(v_a_2567_, 4);
lean_dec(v_unused_2685_);
v_unused_2686_ = lean_ctor_get(v_a_2567_, 3);
lean_dec(v_unused_2686_);
v_unused_2687_ = lean_ctor_get(v_a_2567_, 2);
lean_dec(v_unused_2687_);
v_unused_2688_ = lean_ctor_get(v_a_2567_, 1);
lean_dec(v_unused_2688_);
v_unused_2689_ = lean_ctor_get(v_a_2567_, 0);
lean_dec(v_unused_2689_);
v___x_2649_ = v_a_2567_;
v_isShared_2650_ = v_isSharedCheck_2682_;
goto v_resetjp_2648_;
}
else
{
lean_dec(v_a_2567_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2682_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
uint64_t v___x_2651_; uint64_t v___x_2652_; uint64_t v___x_2653_; uint64_t v___x_2654_; uint64_t v_key_2655_; lean_object* v___x_2656_; lean_object* v___x_2658_; 
v___x_2651_ = 2ULL;
v___x_2652_ = lean_uint64_shift_right(v___x_2647_, v___x_2651_);
v___x_2653_ = lean_uint64_shift_left(v___x_2652_, v___x_2651_);
v___x_2654_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_2612_);
v_key_2655_ = lean_uint64_lor(v___x_2653_, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2656_, 0, v_config_2646_);
lean_ctor_set_uint64(v___x_2656_, sizeof(void*)*1, v_key_2655_);
lean_inc(v_canUnfold_x3f_2641_);
lean_inc(v_synthPendingDepth_2640_);
lean_inc(v_defEqCtx_x3f_2639_);
lean_inc_ref(v_localInstances_2638_);
lean_inc_ref(v_lctx_2637_);
lean_inc(v_zetaDeltaSet_2636_);
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v___x_2656_);
v___x_2658_ = v___x_2649_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v___x_2656_);
lean_ctor_set(v_reuseFailAlloc_2681_, 1, v_zetaDeltaSet_2636_);
lean_ctor_set(v_reuseFailAlloc_2681_, 2, v_lctx_2637_);
lean_ctor_set(v_reuseFailAlloc_2681_, 3, v_localInstances_2638_);
lean_ctor_set(v_reuseFailAlloc_2681_, 4, v_defEqCtx_x3f_2639_);
lean_ctor_set(v_reuseFailAlloc_2681_, 5, v_synthPendingDepth_2640_);
lean_ctor_set(v_reuseFailAlloc_2681_, 6, v_canUnfold_x3f_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2681_, sizeof(void*)*7, v_trackZetaDelta_2635_);
lean_ctor_set_uint8(v_reuseFailAlloc_2681_, sizeof(void*)*7 + 1, v_univApprox_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2681_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2681_, sizeof(void*)*7 + 3, v_cacheInferType_2644_);
v___x_2658_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
lean_object* v___x_2659_; 
v___x_2659_ = l_Lean_Meta_getConfig___redArg(v___x_2658_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; uint8_t v_beta_2661_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref(v___x_2659_);
v_beta_2661_ = lean_ctor_get_uint8(v_a_2660_, 13);
if (v_beta_2661_ == 0)
{
lean_dec(v_a_2660_);
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
uint8_t v_iota_2662_; 
v_iota_2662_ = lean_ctor_get_uint8(v_a_2660_, 12);
if (v_iota_2662_ == 0)
{
lean_dec(v_a_2660_);
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
uint8_t v_zeta_2663_; 
v_zeta_2663_ = lean_ctor_get_uint8(v_a_2660_, 15);
if (v_zeta_2663_ == 0)
{
lean_dec(v_a_2660_);
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
uint8_t v_zetaHave_2664_; 
v_zetaHave_2664_ = lean_ctor_get_uint8(v_a_2660_, 18);
if (v_zetaHave_2664_ == 0)
{
lean_dec(v_a_2660_);
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
uint8_t v_zetaDelta_2665_; 
v_zetaDelta_2665_ = lean_ctor_get_uint8(v_a_2660_, 16);
if (v_zetaDelta_2665_ == 0)
{
lean_dec(v_a_2660_);
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
uint8_t v_etaStruct_2666_; uint8_t v_proj_2667_; uint8_t v___x_2668_; uint8_t v___x_2669_; 
v_etaStruct_2666_ = lean_ctor_get_uint8(v_a_2660_, 10);
v_proj_2667_ = lean_ctor_get_uint8(v_a_2660_, 14);
lean_dec(v_a_2660_);
v___x_2668_ = 2;
v___x_2669_ = l_Lean_Meta_instDecidableEqProjReductionKind(v_proj_2667_, v___x_2668_);
if (v___x_2669_ == 0)
{
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
uint8_t v___x_2670_; uint8_t v___x_2671_; 
v___x_2670_ = 0;
v___x_2671_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_2666_, v___x_2670_);
if (v___x_2671_ == 0)
{
v___y_2573_ = v_univApprox_2642_;
v___y_2574_ = v_canUnfold_x3f_2641_;
v___y_2575_ = v_trackZetaDelta_2635_;
v___y_2576_ = v_synthPendingDepth_2640_;
v___y_2577_ = v_zetaDeltaSet_2636_;
v___y_2578_ = v_localInstances_2638_;
v___y_2579_ = v___x_2658_;
v___y_2580_ = v_cacheInferType_2644_;
v___y_2581_ = v_defEqCtx_x3f_2639_;
v___y_2582_ = v_inTypeClassResolution_2643_;
v___y_2583_ = v_lctx_2637_;
goto v___jp_2572_;
}
else
{
lean_object* v___x_2672_; 
lean_dec(v_canUnfold_x3f_2641_);
lean_dec(v_synthPendingDepth_2640_);
lean_dec(v_defEqCtx_x3f_2639_);
lean_dec_ref(v_localInstances_2638_);
lean_dec_ref(v_lctx_2637_);
lean_dec(v_zetaDeltaSet_2636_);
v___x_2672_ = lean_apply_5(v_x_2566_, v___x_2658_, v_a_2568_, v_a_2569_, v_a_2570_, lean_box(0));
return v___x_2672_;
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
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2680_; 
lean_dec_ref(v___x_2658_);
lean_dec(v_canUnfold_x3f_2641_);
lean_dec(v_synthPendingDepth_2640_);
lean_dec(v_defEqCtx_x3f_2639_);
lean_dec_ref(v_localInstances_2638_);
lean_dec_ref(v_lctx_2637_);
lean_dec(v_zetaDeltaSet_2636_);
lean_dec(v_a_2570_);
lean_dec_ref(v_a_2569_);
lean_dec(v_a_2568_);
lean_dec_ref(v_x_2566_);
v_a_2673_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2675_ = v___x_2659_;
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2659_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2678_; 
if (v_isShared_2676_ == 0)
{
v___x_2678_ = v___x_2675_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_a_2673_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object* v_00_u03b1_2696_, lean_object* v_x_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l_Lean_Meta_withInferTypeConfig(v_00_u03b1_2696_, v_x_2697_, v_a_2698_, v_a_2699_, v_a_2700_, v_a_2701_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_2704_, lean_object* v_x_2705_, lean_object* v_x_2706_, lean_object* v_x_2707_){
_start:
{
lean_object* v_ks_2708_; lean_object* v_vs_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2738_; 
v_ks_2708_ = lean_ctor_get(v_x_2704_, 0);
v_vs_2709_ = lean_ctor_get(v_x_2704_, 1);
v_isSharedCheck_2738_ = !lean_is_exclusive(v_x_2704_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2711_ = v_x_2704_;
v_isShared_2712_ = v_isSharedCheck_2738_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_vs_2709_);
lean_inc(v_ks_2708_);
lean_dec(v_x_2704_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2738_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
uint8_t v___y_2714_; lean_object* v___x_2726_; uint8_t v___x_2727_; 
v___x_2726_ = lean_array_get_size(v_ks_2708_);
v___x_2727_ = lean_nat_dec_lt(v_x_2705_, v___x_2726_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
lean_del_object(v___x_2711_);
lean_dec(v_x_2705_);
v___x_2728_ = lean_array_push(v_ks_2708_, v_x_2706_);
v___x_2729_ = lean_array_push(v_vs_2709_, v_x_2707_);
v___x_2730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2728_);
lean_ctor_set(v___x_2730_, 1, v___x_2729_);
return v___x_2730_;
}
else
{
lean_object* v_expr_2731_; uint64_t v_configKey_2732_; lean_object* v_k_x27_2733_; lean_object* v_expr_2734_; uint64_t v_configKey_2735_; uint8_t v___x_2736_; 
v_expr_2731_ = lean_ctor_get(v_x_2706_, 0);
v_configKey_2732_ = lean_ctor_get_uint64(v_x_2706_, sizeof(void*)*1);
v_k_x27_2733_ = lean_array_fget_borrowed(v_ks_2708_, v_x_2705_);
v_expr_2734_ = lean_ctor_get(v_k_x27_2733_, 0);
v_configKey_2735_ = lean_ctor_get_uint64(v_k_x27_2733_, sizeof(void*)*1);
v___x_2736_ = lean_expr_equal(v_expr_2731_, v_expr_2734_);
if (v___x_2736_ == 0)
{
v___y_2714_ = v___x_2736_;
goto v___jp_2713_;
}
else
{
uint8_t v___x_2737_; 
v___x_2737_ = lean_uint64_dec_eq(v_configKey_2732_, v_configKey_2735_);
v___y_2714_ = v___x_2737_;
goto v___jp_2713_;
}
}
v___jp_2713_:
{
if (v___y_2714_ == 0)
{
lean_object* v___x_2716_; 
if (v_isShared_2712_ == 0)
{
v___x_2716_ = v___x_2711_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_ks_2708_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_vs_2709_);
v___x_2716_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = lean_unsigned_to_nat(1u);
v___x_2718_ = lean_nat_add(v_x_2705_, v___x_2717_);
lean_dec(v_x_2705_);
v_x_2704_ = v___x_2716_;
v_x_2705_ = v___x_2718_;
goto _start;
}
}
else
{
lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2724_; 
v___x_2721_ = lean_array_fset(v_ks_2708_, v_x_2705_, v_x_2706_);
v___x_2722_ = lean_array_fset(v_vs_2709_, v_x_2705_, v_x_2707_);
lean_dec(v_x_2705_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 1, v___x_2722_);
lean_ctor_set(v___x_2711_, 0, v___x_2721_);
v___x_2724_ = v___x_2711_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2721_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v___x_2722_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4___redArg(lean_object* v_n_2739_, lean_object* v_k_2740_, lean_object* v_v_2741_){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = lean_unsigned_to_nat(0u);
v___x_2743_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4_spec__5___redArg(v_n_2739_, v___x_2742_, v_k_2740_, v_v_2741_);
return v___x_2743_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2744_; 
v___x_2744_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(lean_object* v_x_2745_, size_t v_x_2746_, size_t v_x_2747_, lean_object* v_x_2748_, lean_object* v_x_2749_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v_es_2750_; size_t v___x_2751_; size_t v___x_2752_; size_t v___x_2753_; size_t v___x_2754_; lean_object* v_j_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; 
v_es_2750_ = lean_ctor_get(v_x_2745_, 0);
v___x_2751_ = ((size_t)5ULL);
v___x_2752_ = ((size_t)1ULL);
v___x_2753_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2754_ = lean_usize_land(v_x_2746_, v___x_2753_);
v_j_2755_ = lean_usize_to_nat(v___x_2754_);
v___x_2756_ = lean_array_get_size(v_es_2750_);
v___x_2757_ = lean_nat_dec_lt(v_j_2755_, v___x_2756_);
if (v___x_2757_ == 0)
{
lean_dec(v_j_2755_);
lean_dec(v_x_2749_);
lean_dec_ref(v_x_2748_);
return v_x_2745_;
}
else
{
lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2801_; 
lean_inc_ref(v_es_2750_);
v_isSharedCheck_2801_ = !lean_is_exclusive(v_x_2745_);
if (v_isSharedCheck_2801_ == 0)
{
lean_object* v_unused_2802_; 
v_unused_2802_ = lean_ctor_get(v_x_2745_, 0);
lean_dec(v_unused_2802_);
v___x_2759_ = v_x_2745_;
v_isShared_2760_ = v_isSharedCheck_2801_;
goto v_resetjp_2758_;
}
else
{
lean_dec(v_x_2745_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2801_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v_v_2761_; lean_object* v___x_2762_; lean_object* v_xs_x27_2763_; lean_object* v___y_2765_; 
v_v_2761_ = lean_array_fget(v_es_2750_, v_j_2755_);
v___x_2762_ = lean_box(0);
v_xs_x27_2763_ = lean_array_fset(v_es_2750_, v_j_2755_, v___x_2762_);
switch(lean_obj_tag(v_v_2761_))
{
case 0:
{
lean_object* v_key_2770_; lean_object* v_val_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2788_; 
v_key_2770_ = lean_ctor_get(v_v_2761_, 0);
v_val_2771_ = lean_ctor_get(v_v_2761_, 1);
v_isSharedCheck_2788_ = !lean_is_exclusive(v_v_2761_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2773_ = v_v_2761_;
v_isShared_2774_ = v_isSharedCheck_2788_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_val_2771_);
lean_inc(v_key_2770_);
lean_dec(v_v_2761_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2788_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
uint8_t v___y_2776_; lean_object* v_expr_2782_; uint64_t v_configKey_2783_; lean_object* v_expr_2784_; uint64_t v_configKey_2785_; uint8_t v___x_2786_; 
v_expr_2782_ = lean_ctor_get(v_x_2748_, 0);
v_configKey_2783_ = lean_ctor_get_uint64(v_x_2748_, sizeof(void*)*1);
v_expr_2784_ = lean_ctor_get(v_key_2770_, 0);
v_configKey_2785_ = lean_ctor_get_uint64(v_key_2770_, sizeof(void*)*1);
v___x_2786_ = lean_expr_equal(v_expr_2782_, v_expr_2784_);
if (v___x_2786_ == 0)
{
v___y_2776_ = v___x_2786_;
goto v___jp_2775_;
}
else
{
uint8_t v___x_2787_; 
v___x_2787_ = lean_uint64_dec_eq(v_configKey_2783_, v_configKey_2785_);
v___y_2776_ = v___x_2787_;
goto v___jp_2775_;
}
v___jp_2775_:
{
if (v___y_2776_ == 0)
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
lean_del_object(v___x_2773_);
v___x_2777_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2770_, v_val_2771_, v_x_2748_, v_x_2749_);
v___x_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
v___y_2765_ = v___x_2778_;
goto v___jp_2764_;
}
else
{
lean_object* v___x_2780_; 
lean_dec(v_val_2771_);
lean_dec(v_key_2770_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 1, v_x_2749_);
lean_ctor_set(v___x_2773_, 0, v_x_2748_);
v___x_2780_ = v___x_2773_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_x_2748_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_x_2749_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
v___y_2765_ = v___x_2780_;
goto v___jp_2764_;
}
}
}
}
}
case 1:
{
lean_object* v_node_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2799_; 
v_node_2789_ = lean_ctor_get(v_v_2761_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v_v_2761_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2791_ = v_v_2761_;
v_isShared_2792_ = v_isSharedCheck_2799_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_node_2789_);
lean_dec(v_v_2761_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2799_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
size_t v___x_2793_; size_t v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2797_; 
v___x_2793_ = lean_usize_shift_right(v_x_2746_, v___x_2751_);
v___x_2794_ = lean_usize_add(v_x_2747_, v___x_2752_);
v___x_2795_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(v_node_2789_, v___x_2793_, v___x_2794_, v_x_2748_, v_x_2749_);
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 0, v___x_2795_);
v___x_2797_ = v___x_2791_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v___x_2795_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
v___y_2765_ = v___x_2797_;
goto v___jp_2764_;
}
}
}
default: 
{
lean_object* v___x_2800_; 
v___x_2800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2800_, 0, v_x_2748_);
lean_ctor_set(v___x_2800_, 1, v_x_2749_);
v___y_2765_ = v___x_2800_;
goto v___jp_2764_;
}
}
v___jp_2764_:
{
lean_object* v___x_2766_; lean_object* v___x_2768_; 
v___x_2766_ = lean_array_fset(v_xs_x27_2763_, v_j_2755_, v___y_2765_);
lean_dec(v_j_2755_);
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v___x_2766_);
v___x_2768_ = v___x_2759_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
else
{
lean_object* v_ks_2803_; lean_object* v_vs_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2824_; 
v_ks_2803_ = lean_ctor_get(v_x_2745_, 0);
v_vs_2804_ = lean_ctor_get(v_x_2745_, 1);
v_isSharedCheck_2824_ = !lean_is_exclusive(v_x_2745_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2806_ = v_x_2745_;
v_isShared_2807_ = v_isSharedCheck_2824_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_vs_2804_);
lean_inc(v_ks_2803_);
lean_dec(v_x_2745_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2824_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_ks_2803_);
lean_ctor_set(v_reuseFailAlloc_2823_, 1, v_vs_2804_);
v___x_2809_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v_newNode_2810_; uint8_t v___y_2812_; size_t v___x_2818_; uint8_t v___x_2819_; 
v_newNode_2810_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4___redArg(v___x_2809_, v_x_2748_, v_x_2749_);
v___x_2818_ = ((size_t)7ULL);
v___x_2819_ = lean_usize_dec_le(v___x_2818_, v_x_2747_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; 
v___x_2820_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2810_);
v___x_2821_ = lean_unsigned_to_nat(4u);
v___x_2822_ = lean_nat_dec_lt(v___x_2820_, v___x_2821_);
lean_dec(v___x_2820_);
v___y_2812_ = v___x_2822_;
goto v___jp_2811_;
}
else
{
v___y_2812_ = v___x_2819_;
goto v___jp_2811_;
}
v___jp_2811_:
{
if (v___y_2812_ == 0)
{
lean_object* v_ks_2813_; lean_object* v_vs_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v_ks_2813_ = lean_ctor_get(v_newNode_2810_, 0);
lean_inc_ref(v_ks_2813_);
v_vs_2814_ = lean_ctor_get(v_newNode_2810_, 1);
lean_inc_ref(v_vs_2814_);
lean_dec_ref(v_newNode_2810_);
v___x_2815_ = lean_unsigned_to_nat(0u);
v___x_2816_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___closed__0);
v___x_2817_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg(v_x_2747_, v_ks_2813_, v_vs_2814_, v___x_2815_, v___x_2816_);
lean_dec_ref(v_vs_2814_);
lean_dec_ref(v_ks_2813_);
return v___x_2817_;
}
else
{
return v_newNode_2810_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg(size_t v_depth_2825_, lean_object* v_keys_2826_, lean_object* v_vals_2827_, lean_object* v_i_2828_, lean_object* v_entries_2829_){
_start:
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2830_ = lean_array_get_size(v_keys_2826_);
v___x_2831_ = lean_nat_dec_lt(v_i_2828_, v___x_2830_);
if (v___x_2831_ == 0)
{
lean_dec(v_i_2828_);
return v_entries_2829_;
}
else
{
lean_object* v_k_2832_; lean_object* v_expr_2833_; uint64_t v_configKey_2834_; lean_object* v_v_2835_; uint64_t v___x_2836_; uint64_t v___x_2837_; size_t v_h_2838_; size_t v___x_2839_; lean_object* v___x_2840_; size_t v___x_2841_; size_t v___x_2842_; size_t v___x_2843_; size_t v_h_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v_k_2832_ = lean_array_fget_borrowed(v_keys_2826_, v_i_2828_);
v_expr_2833_ = lean_ctor_get(v_k_2832_, 0);
v_configKey_2834_ = lean_ctor_get_uint64(v_k_2832_, sizeof(void*)*1);
v_v_2835_ = lean_array_fget_borrowed(v_vals_2827_, v_i_2828_);
v___x_2836_ = l_Lean_Expr_hash(v_expr_2833_);
v___x_2837_ = lean_uint64_mix_hash(v___x_2836_, v_configKey_2834_);
v_h_2838_ = lean_uint64_to_usize(v___x_2837_);
v___x_2839_ = ((size_t)5ULL);
v___x_2840_ = lean_unsigned_to_nat(1u);
v___x_2841_ = ((size_t)1ULL);
v___x_2842_ = lean_usize_sub(v_depth_2825_, v___x_2841_);
v___x_2843_ = lean_usize_mul(v___x_2839_, v___x_2842_);
v_h_2844_ = lean_usize_shift_right(v_h_2838_, v___x_2843_);
v___x_2845_ = lean_nat_add(v_i_2828_, v___x_2840_);
lean_dec(v_i_2828_);
lean_inc(v_v_2835_);
lean_inc(v_k_2832_);
v___x_2846_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(v_entries_2829_, v_h_2844_, v_depth_2825_, v_k_2832_, v_v_2835_);
v_i_2828_ = v___x_2845_;
v_entries_2829_ = v___x_2846_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_2848_, lean_object* v_keys_2849_, lean_object* v_vals_2850_, lean_object* v_i_2851_, lean_object* v_entries_2852_){
_start:
{
size_t v_depth_boxed_2853_; lean_object* v_res_2854_; 
v_depth_boxed_2853_ = lean_unbox_usize(v_depth_2848_);
lean_dec(v_depth_2848_);
v_res_2854_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg(v_depth_boxed_2853_, v_keys_2849_, v_vals_2850_, v_i_2851_, v_entries_2852_);
lean_dec_ref(v_vals_2850_);
lean_dec_ref(v_keys_2849_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg___boxed(lean_object* v_x_2855_, lean_object* v_x_2856_, lean_object* v_x_2857_, lean_object* v_x_2858_, lean_object* v_x_2859_){
_start:
{
size_t v_x_2109__boxed_2860_; size_t v_x_2110__boxed_2861_; lean_object* v_res_2862_; 
v_x_2109__boxed_2860_ = lean_unbox_usize(v_x_2856_);
lean_dec(v_x_2856_);
v_x_2110__boxed_2861_ = lean_unbox_usize(v_x_2857_);
lean_dec(v_x_2857_);
v_res_2862_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(v_x_2855_, v_x_2109__boxed_2860_, v_x_2110__boxed_2861_, v_x_2858_, v_x_2859_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object* v_x_2863_, lean_object* v_x_2864_, lean_object* v_x_2865_){
_start:
{
lean_object* v_expr_2866_; uint64_t v_configKey_2867_; uint64_t v___x_2868_; uint64_t v___x_2869_; size_t v___x_2870_; size_t v___x_2871_; lean_object* v___x_2872_; 
v_expr_2866_ = lean_ctor_get(v_x_2864_, 0);
v_configKey_2867_ = lean_ctor_get_uint64(v_x_2864_, sizeof(void*)*1);
v___x_2868_ = l_Lean_Expr_hash(v_expr_2866_);
v___x_2869_ = lean_uint64_mix_hash(v___x_2868_, v_configKey_2867_);
v___x_2870_ = lean_uint64_to_usize(v___x_2869_);
v___x_2871_ = ((size_t)1ULL);
v___x_2872_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(v_x_2863_, v___x_2870_, v___x_2871_, v_x_2864_, v_x_2865_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2873_, lean_object* v_vals_2874_, lean_object* v_i_2875_, lean_object* v_k_2876_){
_start:
{
uint8_t v___y_2878_; lean_object* v___x_2884_; uint8_t v___x_2885_; 
v___x_2884_ = lean_array_get_size(v_keys_2873_);
v___x_2885_ = lean_nat_dec_lt(v_i_2875_, v___x_2884_);
if (v___x_2885_ == 0)
{
lean_object* v___x_2886_; 
lean_dec(v_i_2875_);
v___x_2886_ = lean_box(0);
return v___x_2886_;
}
else
{
lean_object* v_expr_2887_; uint64_t v_configKey_2888_; lean_object* v_k_x27_2889_; lean_object* v_expr_2890_; uint64_t v_configKey_2891_; uint8_t v___x_2892_; 
v_expr_2887_ = lean_ctor_get(v_k_2876_, 0);
v_configKey_2888_ = lean_ctor_get_uint64(v_k_2876_, sizeof(void*)*1);
v_k_x27_2889_ = lean_array_fget_borrowed(v_keys_2873_, v_i_2875_);
v_expr_2890_ = lean_ctor_get(v_k_x27_2889_, 0);
v_configKey_2891_ = lean_ctor_get_uint64(v_k_x27_2889_, sizeof(void*)*1);
v___x_2892_ = lean_expr_equal(v_expr_2887_, v_expr_2890_);
if (v___x_2892_ == 0)
{
v___y_2878_ = v___x_2892_;
goto v___jp_2877_;
}
else
{
uint8_t v___x_2893_; 
v___x_2893_ = lean_uint64_dec_eq(v_configKey_2888_, v_configKey_2891_);
v___y_2878_ = v___x_2893_;
goto v___jp_2877_;
}
}
v___jp_2877_:
{
if (v___y_2878_ == 0)
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = lean_unsigned_to_nat(1u);
v___x_2880_ = lean_nat_add(v_i_2875_, v___x_2879_);
lean_dec(v_i_2875_);
v_i_2875_ = v___x_2880_;
goto _start;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = lean_array_fget_borrowed(v_vals_2874_, v_i_2875_);
lean_dec(v_i_2875_);
lean_inc(v___x_2882_);
v___x_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2894_, lean_object* v_vals_2895_, lean_object* v_i_2896_, lean_object* v_k_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg(v_keys_2894_, v_vals_2895_, v_i_2896_, v_k_2897_);
lean_dec_ref(v_k_2897_);
lean_dec_ref(v_vals_2895_);
lean_dec_ref(v_keys_2894_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg(lean_object* v_x_2899_, size_t v_x_2900_, lean_object* v_x_2901_){
_start:
{
if (lean_obj_tag(v_x_2899_) == 0)
{
lean_object* v_es_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2930_; 
v_es_2902_ = lean_ctor_get(v_x_2899_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v_x_2899_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2904_ = v_x_2899_;
v_isShared_2905_ = v_isSharedCheck_2930_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_es_2902_);
lean_dec(v_x_2899_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2930_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2906_; size_t v___x_2907_; size_t v___x_2908_; size_t v___x_2909_; lean_object* v_j_2910_; lean_object* v___x_2911_; 
v___x_2906_ = lean_box(2);
v___x_2907_ = ((size_t)5ULL);
v___x_2908_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2909_ = lean_usize_land(v_x_2900_, v___x_2908_);
v_j_2910_ = lean_usize_to_nat(v___x_2909_);
v___x_2911_ = lean_array_get(v___x_2906_, v_es_2902_, v_j_2910_);
lean_dec(v_j_2910_);
lean_dec_ref(v_es_2902_);
switch(lean_obj_tag(v___x_2911_))
{
case 0:
{
lean_object* v_key_2912_; lean_object* v_val_2913_; uint8_t v___y_2915_; lean_object* v_expr_2920_; uint64_t v_configKey_2921_; lean_object* v_expr_2922_; uint64_t v_configKey_2923_; uint8_t v___x_2924_; 
v_key_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_key_2912_);
v_val_2913_ = lean_ctor_get(v___x_2911_, 1);
lean_inc(v_val_2913_);
lean_dec_ref(v___x_2911_);
v_expr_2920_ = lean_ctor_get(v_x_2901_, 0);
v_configKey_2921_ = lean_ctor_get_uint64(v_x_2901_, sizeof(void*)*1);
v_expr_2922_ = lean_ctor_get(v_key_2912_, 0);
lean_inc_ref(v_expr_2922_);
v_configKey_2923_ = lean_ctor_get_uint64(v_key_2912_, sizeof(void*)*1);
lean_dec(v_key_2912_);
v___x_2924_ = lean_expr_equal(v_expr_2920_, v_expr_2922_);
lean_dec_ref(v_expr_2922_);
if (v___x_2924_ == 0)
{
v___y_2915_ = v___x_2924_;
goto v___jp_2914_;
}
else
{
uint8_t v___x_2925_; 
v___x_2925_ = lean_uint64_dec_eq(v_configKey_2921_, v_configKey_2923_);
v___y_2915_ = v___x_2925_;
goto v___jp_2914_;
}
v___jp_2914_:
{
if (v___y_2915_ == 0)
{
lean_object* v___x_2916_; 
lean_dec(v_val_2913_);
lean_del_object(v___x_2904_);
v___x_2916_ = lean_box(0);
return v___x_2916_;
}
else
{
lean_object* v___x_2918_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set_tag(v___x_2904_, 1);
lean_ctor_set(v___x_2904_, 0, v_val_2913_);
v___x_2918_ = v___x_2904_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_val_2913_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
}
case 1:
{
lean_object* v_node_2926_; size_t v___x_2927_; 
lean_del_object(v___x_2904_);
v_node_2926_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_node_2926_);
lean_dec_ref(v___x_2911_);
v___x_2927_ = lean_usize_shift_right(v_x_2900_, v___x_2907_);
v_x_2899_ = v_node_2926_;
v_x_2900_ = v___x_2927_;
goto _start;
}
default: 
{
lean_object* v___x_2929_; 
lean_del_object(v___x_2904_);
v___x_2929_ = lean_box(0);
return v___x_2929_;
}
}
}
}
else
{
lean_object* v_ks_2931_; lean_object* v_vs_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v_ks_2931_ = lean_ctor_get(v_x_2899_, 0);
lean_inc_ref(v_ks_2931_);
v_vs_2932_ = lean_ctor_get(v_x_2899_, 1);
lean_inc_ref(v_vs_2932_);
lean_dec_ref(v_x_2899_);
v___x_2933_ = lean_unsigned_to_nat(0u);
v___x_2934_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg(v_ks_2931_, v_vs_2932_, v___x_2933_, v_x_2901_);
lean_dec_ref(v_vs_2932_);
lean_dec_ref(v_ks_2931_);
return v___x_2934_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg___boxed(lean_object* v_x_2935_, lean_object* v_x_2936_, lean_object* v_x_2937_){
_start:
{
size_t v_x_2324__boxed_2938_; lean_object* v_res_2939_; 
v_x_2324__boxed_2938_ = lean_unbox_usize(v_x_2936_);
lean_dec(v_x_2936_);
v_res_2939_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg(v_x_2935_, v_x_2324__boxed_2938_, v_x_2937_);
lean_dec_ref(v_x_2937_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(lean_object* v_x_2940_, lean_object* v_x_2941_){
_start:
{
lean_object* v_expr_2942_; uint64_t v_configKey_2943_; uint64_t v___x_2944_; uint64_t v___x_2945_; size_t v___x_2946_; lean_object* v___x_2947_; 
v_expr_2942_ = lean_ctor_get(v_x_2941_, 0);
v_configKey_2943_ = lean_ctor_get_uint64(v_x_2941_, sizeof(void*)*1);
v___x_2944_ = l_Lean_Expr_hash(v_expr_2942_);
v___x_2945_ = lean_uint64_mix_hash(v___x_2944_, v_configKey_2943_);
v___x_2946_ = lean_uint64_to_usize(v___x_2945_);
v___x_2947_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg(v_x_2940_, v___x_2946_, v_x_2941_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object* v_x_2948_, lean_object* v_x_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_x_2948_, v_x_2949_);
lean_dec_ref(v_x_2949_);
return v_res_2950_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1(void){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0));
v___x_2953_ = l_Lean_stringToMessageData(v___x_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object* v_e_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_){
_start:
{
switch(lean_obj_tag(v_e_2954_))
{
case 0:
{
lean_object* v_deBruijnIndex_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_deBruijnIndex_2960_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_deBruijnIndex_2960_);
lean_dec_ref(v_e_2954_);
v___x_2961_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1);
v___x_2962_ = l_Lean_mkBVar(v_deBruijnIndex_2960_);
v___x_2963_ = l_Lean_MessageData_ofExpr(v___x_2962_);
v___x_2964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2961_);
lean_ctor_set(v___x_2964_, 1, v___x_2963_);
v___x_2965_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_2964_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
return v___x_2965_;
}
case 1:
{
lean_object* v_fvarId_2966_; lean_object* v___x_2967_; 
lean_dec(v_a_2956_);
v_fvarId_2966_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_fvarId_2966_);
lean_dec_ref(v_e_2954_);
v___x_2967_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2966_, v_a_2955_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
return v___x_2967_;
}
case 2:
{
lean_object* v_mvarId_2968_; lean_object* v___x_2969_; 
v_mvarId_2968_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_mvarId_2968_);
lean_dec_ref(v_e_2954_);
v___x_2969_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_2968_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
return v___x_2969_;
}
case 3:
{
lean_object* v_u_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_u_2970_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_u_2970_);
lean_dec_ref(v_e_2954_);
v___x_2971_ = l_Lean_Level_succ___override(v_u_2970_);
v___x_2972_ = l_Lean_mkSort(v___x_2971_);
v___x_2973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
return v___x_2973_;
}
case 4:
{
lean_object* v_us_2974_; 
v_us_2974_ = lean_ctor_get(v_e_2954_, 1);
lean_inc(v_us_2974_);
if (lean_obj_tag(v_us_2974_) == 0)
{
lean_object* v_declName_2975_; lean_object* v___x_2976_; 
v_declName_2975_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_declName_2975_);
lean_dec_ref(v_e_2954_);
v___x_2976_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_2975_, v_us_2974_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
return v___x_2976_;
}
else
{
uint8_t v_cacheInferType_2977_; 
v_cacheInferType_2977_ = lean_ctor_get_uint8(v_a_2955_, sizeof(void*)*7 + 3);
if (v_cacheInferType_2977_ == 0)
{
lean_object* v_declName_2978_; lean_object* v___x_2979_; 
v_declName_2978_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_declName_2978_);
lean_dec_ref(v_e_2954_);
v___x_2979_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_2978_, v_us_2974_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
return v___x_2979_;
}
else
{
lean_object* v_declName_2980_; uint8_t v___x_2981_; 
v_declName_2980_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_declName_2980_);
v___x_2981_ = l_Lean_Expr_hasMVar(v_e_2954_);
if (v___x_2981_ == 0)
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2954_, v_a_2955_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_3034_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_2985_ = v___x_2982_;
v_isShared_2986_ = v_isSharedCheck_3034_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2982_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_3034_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2987_; lean_object* v_cache_2988_; lean_object* v_inferType_2989_; lean_object* v___x_2990_; 
v___x_2987_ = lean_st_ref_get(v_a_2956_);
v_cache_2988_ = lean_ctor_get(v___x_2987_, 1);
lean_inc_ref(v_cache_2988_);
lean_dec(v___x_2987_);
v_inferType_2989_ = lean_ctor_get(v_cache_2988_, 0);
lean_inc_ref(v_inferType_2989_);
lean_dec_ref(v_cache_2988_);
v___x_2990_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_inferType_2989_, v_a_2983_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_object* v___x_2991_; 
lean_del_object(v___x_2985_);
v___x_2991_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_2980_, v_us_2974_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2955_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; uint8_t v___x_2993_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
v___x_2993_ = l_Lean_Expr_hasMVar(v_a_2992_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3028_; 
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v___x_2991_, 0);
lean_dec(v_unused_3029_);
v___x_2995_ = v___x_2991_;
v_isShared_2996_ = v_isSharedCheck_3028_;
goto v_resetjp_2994_;
}
else
{
lean_dec(v___x_2991_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3028_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2997_; lean_object* v_cache_2998_; lean_object* v_mctx_2999_; lean_object* v_zetaDeltaFVarIds_3000_; lean_object* v_postponed_3001_; lean_object* v_diag_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3027_; 
v___x_2997_ = lean_st_ref_take(v_a_2956_);
v_cache_2998_ = lean_ctor_get(v___x_2997_, 1);
v_mctx_2999_ = lean_ctor_get(v___x_2997_, 0);
v_zetaDeltaFVarIds_3000_ = lean_ctor_get(v___x_2997_, 2);
v_postponed_3001_ = lean_ctor_get(v___x_2997_, 3);
v_diag_3002_ = lean_ctor_get(v___x_2997_, 4);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3004_ = v___x_2997_;
v_isShared_3005_ = v_isSharedCheck_3027_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_diag_3002_);
lean_inc(v_postponed_3001_);
lean_inc(v_zetaDeltaFVarIds_3000_);
lean_inc(v_cache_2998_);
lean_inc(v_mctx_2999_);
lean_dec(v___x_2997_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3027_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v_inferType_3006_; lean_object* v_funInfo_3007_; lean_object* v_synthInstance_3008_; lean_object* v_whnf_3009_; lean_object* v_defEqTrans_3010_; lean_object* v_defEqPerm_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3026_; 
v_inferType_3006_ = lean_ctor_get(v_cache_2998_, 0);
v_funInfo_3007_ = lean_ctor_get(v_cache_2998_, 1);
v_synthInstance_3008_ = lean_ctor_get(v_cache_2998_, 2);
v_whnf_3009_ = lean_ctor_get(v_cache_2998_, 3);
v_defEqTrans_3010_ = lean_ctor_get(v_cache_2998_, 4);
v_defEqPerm_3011_ = lean_ctor_get(v_cache_2998_, 5);
v_isSharedCheck_3026_ = !lean_is_exclusive(v_cache_2998_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3013_ = v_cache_2998_;
v_isShared_3014_ = v_isSharedCheck_3026_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_defEqPerm_3011_);
lean_inc(v_defEqTrans_3010_);
lean_inc(v_whnf_3009_);
lean_inc(v_synthInstance_3008_);
lean_inc(v_funInfo_3007_);
lean_inc(v_inferType_3006_);
lean_dec(v_cache_2998_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3026_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3015_; lean_object* v___x_3017_; 
lean_inc(v_a_2992_);
v___x_3015_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3006_, v_a_2983_, v_a_2992_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 0, v___x_3015_);
v___x_3017_ = v___x_3013_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v___x_3015_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v_funInfo_3007_);
lean_ctor_set(v_reuseFailAlloc_3025_, 2, v_synthInstance_3008_);
lean_ctor_set(v_reuseFailAlloc_3025_, 3, v_whnf_3009_);
lean_ctor_set(v_reuseFailAlloc_3025_, 4, v_defEqTrans_3010_);
lean_ctor_set(v_reuseFailAlloc_3025_, 5, v_defEqPerm_3011_);
v___x_3017_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3019_; 
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 1, v___x_3017_);
v___x_3019_ = v___x_3004_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_mctx_2999_);
lean_ctor_set(v_reuseFailAlloc_3024_, 1, v___x_3017_);
lean_ctor_set(v_reuseFailAlloc_3024_, 2, v_zetaDeltaFVarIds_3000_);
lean_ctor_set(v_reuseFailAlloc_3024_, 3, v_postponed_3001_);
lean_ctor_set(v_reuseFailAlloc_3024_, 4, v_diag_3002_);
v___x_3019_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3020_ = lean_st_ref_set(v_a_2956_, v___x_3019_);
lean_dec(v_a_2956_);
if (v_isShared_2996_ == 0)
{
v___x_3022_ = v___x_2995_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_2992_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2992_);
lean_dec(v_a_2983_);
lean_dec(v_a_2956_);
return v___x_2991_;
}
}
else
{
lean_dec(v_a_2983_);
lean_dec(v_a_2956_);
return v___x_2991_;
}
}
else
{
lean_object* v_val_3030_; lean_object* v___x_3032_; 
lean_dec(v_a_2983_);
lean_dec(v_declName_2980_);
lean_dec(v_us_2974_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_val_3030_ = lean_ctor_get(v___x_2990_, 0);
lean_inc(v_val_3030_);
lean_dec_ref(v___x_2990_);
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 0, v_val_3030_);
v___x_3032_ = v___x_2985_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_val_3030_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
}
else
{
lean_object* v_a_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
lean_dec(v_declName_2980_);
lean_dec(v_us_2974_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_a_3035_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3037_ = v___x_2982_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_a_3035_);
lean_dec(v___x_2982_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3035_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
else
{
lean_object* v___x_3043_; 
lean_dec_ref(v_e_2954_);
v___x_3043_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_2980_, v_us_2974_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
return v___x_3043_;
}
}
}
}
case 5:
{
lean_object* v_fn_3044_; uint8_t v_cacheInferType_3045_; lean_object* v_nargs_3046_; lean_object* v___x_3047_; lean_object* v_dummy_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v_fn_3044_ = lean_ctor_get(v_e_2954_, 0);
v_cacheInferType_3045_ = lean_ctor_get_uint8(v_a_2955_, sizeof(void*)*7 + 3);
v_nargs_3046_ = l_Lean_Expr_getAppNumArgs(v_e_2954_);
v___x_3047_ = l_Lean_Expr_getAppFn(v_fn_3044_);
v_dummy_3048_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
lean_inc(v_nargs_3046_);
v___x_3049_ = lean_mk_array(v_nargs_3046_, v_dummy_3048_);
v___x_3050_ = lean_unsigned_to_nat(1u);
v___x_3051_ = lean_nat_sub(v_nargs_3046_, v___x_3050_);
lean_dec(v_nargs_3046_);
lean_inc_ref(v_e_2954_);
v___x_3052_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2954_, v___x_3049_, v___x_3051_);
if (v_cacheInferType_3045_ == 0)
{
lean_object* v___x_3053_; 
lean_dec_ref(v_e_2954_);
v___x_3053_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3047_, v___x_3052_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec_ref(v___x_3052_);
return v___x_3053_;
}
else
{
uint8_t v___x_3054_; 
v___x_3054_ = l_Lean_Expr_hasMVar(v_e_2954_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; 
v___x_3055_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2954_, v_a_2955_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3107_; 
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3058_ = v___x_3055_;
v_isShared_3059_ = v_isSharedCheck_3107_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3055_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3107_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3060_; lean_object* v_cache_3061_; lean_object* v_inferType_3062_; lean_object* v___x_3063_; 
v___x_3060_ = lean_st_ref_get(v_a_2956_);
v_cache_3061_ = lean_ctor_get(v___x_3060_, 1);
lean_inc_ref(v_cache_3061_);
lean_dec(v___x_3060_);
v_inferType_3062_ = lean_ctor_get(v_cache_3061_, 0);
lean_inc_ref(v_inferType_3062_);
lean_dec_ref(v_cache_3061_);
v___x_3063_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_inferType_3062_, v_a_3056_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v___x_3064_; 
lean_del_object(v___x_3058_);
lean_inc(v_a_2956_);
v___x_3064_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3047_, v___x_3052_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec_ref(v___x_3052_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; uint8_t v___x_3066_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
lean_inc(v_a_3065_);
v___x_3066_ = l_Lean_Expr_hasMVar(v_a_3065_);
if (v___x_3066_ == 0)
{
lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3101_; 
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3101_ == 0)
{
lean_object* v_unused_3102_; 
v_unused_3102_ = lean_ctor_get(v___x_3064_, 0);
lean_dec(v_unused_3102_);
v___x_3068_ = v___x_3064_;
v_isShared_3069_ = v_isSharedCheck_3101_;
goto v_resetjp_3067_;
}
else
{
lean_dec(v___x_3064_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3101_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3070_; lean_object* v_cache_3071_; lean_object* v_mctx_3072_; lean_object* v_zetaDeltaFVarIds_3073_; lean_object* v_postponed_3074_; lean_object* v_diag_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3100_; 
v___x_3070_ = lean_st_ref_take(v_a_2956_);
v_cache_3071_ = lean_ctor_get(v___x_3070_, 1);
v_mctx_3072_ = lean_ctor_get(v___x_3070_, 0);
v_zetaDeltaFVarIds_3073_ = lean_ctor_get(v___x_3070_, 2);
v_postponed_3074_ = lean_ctor_get(v___x_3070_, 3);
v_diag_3075_ = lean_ctor_get(v___x_3070_, 4);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3077_ = v___x_3070_;
v_isShared_3078_ = v_isSharedCheck_3100_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_diag_3075_);
lean_inc(v_postponed_3074_);
lean_inc(v_zetaDeltaFVarIds_3073_);
lean_inc(v_cache_3071_);
lean_inc(v_mctx_3072_);
lean_dec(v___x_3070_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3100_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v_inferType_3079_; lean_object* v_funInfo_3080_; lean_object* v_synthInstance_3081_; lean_object* v_whnf_3082_; lean_object* v_defEqTrans_3083_; lean_object* v_defEqPerm_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3099_; 
v_inferType_3079_ = lean_ctor_get(v_cache_3071_, 0);
v_funInfo_3080_ = lean_ctor_get(v_cache_3071_, 1);
v_synthInstance_3081_ = lean_ctor_get(v_cache_3071_, 2);
v_whnf_3082_ = lean_ctor_get(v_cache_3071_, 3);
v_defEqTrans_3083_ = lean_ctor_get(v_cache_3071_, 4);
v_defEqPerm_3084_ = lean_ctor_get(v_cache_3071_, 5);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_cache_3071_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3086_ = v_cache_3071_;
v_isShared_3087_ = v_isSharedCheck_3099_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_defEqPerm_3084_);
lean_inc(v_defEqTrans_3083_);
lean_inc(v_whnf_3082_);
lean_inc(v_synthInstance_3081_);
lean_inc(v_funInfo_3080_);
lean_inc(v_inferType_3079_);
lean_dec(v_cache_3071_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3099_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3088_; lean_object* v___x_3090_; 
lean_inc(v_a_3065_);
v___x_3088_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3079_, v_a_3056_, v_a_3065_);
if (v_isShared_3087_ == 0)
{
lean_ctor_set(v___x_3086_, 0, v___x_3088_);
v___x_3090_ = v___x_3086_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v___x_3088_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_funInfo_3080_);
lean_ctor_set(v_reuseFailAlloc_3098_, 2, v_synthInstance_3081_);
lean_ctor_set(v_reuseFailAlloc_3098_, 3, v_whnf_3082_);
lean_ctor_set(v_reuseFailAlloc_3098_, 4, v_defEqTrans_3083_);
lean_ctor_set(v_reuseFailAlloc_3098_, 5, v_defEqPerm_3084_);
v___x_3090_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
lean_object* v___x_3092_; 
if (v_isShared_3078_ == 0)
{
lean_ctor_set(v___x_3077_, 1, v___x_3090_);
v___x_3092_ = v___x_3077_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_mctx_3072_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v___x_3090_);
lean_ctor_set(v_reuseFailAlloc_3097_, 2, v_zetaDeltaFVarIds_3073_);
lean_ctor_set(v_reuseFailAlloc_3097_, 3, v_postponed_3074_);
lean_ctor_set(v_reuseFailAlloc_3097_, 4, v_diag_3075_);
v___x_3092_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3093_; lean_object* v___x_3095_; 
v___x_3093_ = lean_st_ref_set(v_a_2956_, v___x_3092_);
lean_dec(v_a_2956_);
if (v_isShared_3069_ == 0)
{
v___x_3095_ = v___x_3068_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3065_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3065_);
lean_dec(v_a_3056_);
lean_dec(v_a_2956_);
return v___x_3064_;
}
}
else
{
lean_dec(v_a_3056_);
lean_dec(v_a_2956_);
return v___x_3064_;
}
}
else
{
lean_object* v_val_3103_; lean_object* v___x_3105_; 
lean_dec(v_a_3056_);
lean_dec_ref(v___x_3052_);
lean_dec_ref(v___x_3047_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_val_3103_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_val_3103_);
lean_dec_ref(v___x_3063_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 0, v_val_3103_);
v___x_3105_ = v___x_3058_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_val_3103_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec_ref(v___x_3052_);
lean_dec_ref(v___x_3047_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_a_3108_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3055_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3055_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
else
{
lean_object* v___x_3116_; 
lean_dec_ref(v_e_2954_);
v___x_3116_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3047_, v___x_3052_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
lean_dec_ref(v___x_3052_);
return v___x_3116_;
}
}
}
case 7:
{
uint8_t v_cacheInferType_3117_; 
v_cacheInferType_3117_ = lean_ctor_get_uint8(v_a_2955_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3117_ == 0)
{
lean_object* v___x_3118_; 
v___x_3118_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
return v___x_3118_;
}
else
{
uint8_t v___x_3119_; 
v___x_3119_ = l_Lean_Expr_hasMVar(v_e_2954_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; 
lean_inc_ref(v_e_2954_);
v___x_3120_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2954_, v_a_2955_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3172_; 
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3123_ = v___x_3120_;
v_isShared_3124_ = v_isSharedCheck_3172_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3120_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3172_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3125_; lean_object* v_cache_3126_; lean_object* v_inferType_3127_; lean_object* v___x_3128_; 
v___x_3125_ = lean_st_ref_get(v_a_2956_);
v_cache_3126_ = lean_ctor_get(v___x_3125_, 1);
lean_inc_ref(v_cache_3126_);
lean_dec(v___x_3125_);
v_inferType_3127_ = lean_ctor_get(v_cache_3126_, 0);
lean_inc_ref(v_inferType_3127_);
lean_dec_ref(v_cache_3126_);
v___x_3128_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_inferType_3127_, v_a_3121_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v___x_3129_; 
lean_del_object(v___x_3123_);
lean_inc(v_a_2956_);
v___x_3129_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v_a_3130_; uint8_t v___x_3131_; 
v_a_3130_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_a_3130_);
v___x_3131_ = l_Lean_Expr_hasMVar(v_a_3130_);
if (v___x_3131_ == 0)
{
lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3166_; 
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3166_ == 0)
{
lean_object* v_unused_3167_; 
v_unused_3167_ = lean_ctor_get(v___x_3129_, 0);
lean_dec(v_unused_3167_);
v___x_3133_ = v___x_3129_;
v_isShared_3134_ = v_isSharedCheck_3166_;
goto v_resetjp_3132_;
}
else
{
lean_dec(v___x_3129_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3166_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3135_; lean_object* v_cache_3136_; lean_object* v_mctx_3137_; lean_object* v_zetaDeltaFVarIds_3138_; lean_object* v_postponed_3139_; lean_object* v_diag_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3165_; 
v___x_3135_ = lean_st_ref_take(v_a_2956_);
v_cache_3136_ = lean_ctor_get(v___x_3135_, 1);
v_mctx_3137_ = lean_ctor_get(v___x_3135_, 0);
v_zetaDeltaFVarIds_3138_ = lean_ctor_get(v___x_3135_, 2);
v_postponed_3139_ = lean_ctor_get(v___x_3135_, 3);
v_diag_3140_ = lean_ctor_get(v___x_3135_, 4);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3142_ = v___x_3135_;
v_isShared_3143_ = v_isSharedCheck_3165_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_diag_3140_);
lean_inc(v_postponed_3139_);
lean_inc(v_zetaDeltaFVarIds_3138_);
lean_inc(v_cache_3136_);
lean_inc(v_mctx_3137_);
lean_dec(v___x_3135_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3165_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v_inferType_3144_; lean_object* v_funInfo_3145_; lean_object* v_synthInstance_3146_; lean_object* v_whnf_3147_; lean_object* v_defEqTrans_3148_; lean_object* v_defEqPerm_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3164_; 
v_inferType_3144_ = lean_ctor_get(v_cache_3136_, 0);
v_funInfo_3145_ = lean_ctor_get(v_cache_3136_, 1);
v_synthInstance_3146_ = lean_ctor_get(v_cache_3136_, 2);
v_whnf_3147_ = lean_ctor_get(v_cache_3136_, 3);
v_defEqTrans_3148_ = lean_ctor_get(v_cache_3136_, 4);
v_defEqPerm_3149_ = lean_ctor_get(v_cache_3136_, 5);
v_isSharedCheck_3164_ = !lean_is_exclusive(v_cache_3136_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3151_ = v_cache_3136_;
v_isShared_3152_ = v_isSharedCheck_3164_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_defEqPerm_3149_);
lean_inc(v_defEqTrans_3148_);
lean_inc(v_whnf_3147_);
lean_inc(v_synthInstance_3146_);
lean_inc(v_funInfo_3145_);
lean_inc(v_inferType_3144_);
lean_dec(v_cache_3136_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3164_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3153_; lean_object* v___x_3155_; 
lean_inc(v_a_3130_);
v___x_3153_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3144_, v_a_3121_, v_a_3130_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 0, v___x_3153_);
v___x_3155_ = v___x_3151_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v___x_3153_);
lean_ctor_set(v_reuseFailAlloc_3163_, 1, v_funInfo_3145_);
lean_ctor_set(v_reuseFailAlloc_3163_, 2, v_synthInstance_3146_);
lean_ctor_set(v_reuseFailAlloc_3163_, 3, v_whnf_3147_);
lean_ctor_set(v_reuseFailAlloc_3163_, 4, v_defEqTrans_3148_);
lean_ctor_set(v_reuseFailAlloc_3163_, 5, v_defEqPerm_3149_);
v___x_3155_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
lean_object* v___x_3157_; 
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 1, v___x_3155_);
v___x_3157_ = v___x_3142_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_mctx_3137_);
lean_ctor_set(v_reuseFailAlloc_3162_, 1, v___x_3155_);
lean_ctor_set(v_reuseFailAlloc_3162_, 2, v_zetaDeltaFVarIds_3138_);
lean_ctor_set(v_reuseFailAlloc_3162_, 3, v_postponed_3139_);
lean_ctor_set(v_reuseFailAlloc_3162_, 4, v_diag_3140_);
v___x_3157_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3160_; 
v___x_3158_ = lean_st_ref_set(v_a_2956_, v___x_3157_);
lean_dec(v_a_2956_);
if (v_isShared_3134_ == 0)
{
v___x_3160_ = v___x_3133_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3130_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3130_);
lean_dec(v_a_3121_);
lean_dec(v_a_2956_);
return v___x_3129_;
}
}
else
{
lean_dec(v_a_3121_);
lean_dec(v_a_2956_);
return v___x_3129_;
}
}
else
{
lean_object* v_val_3168_; lean_object* v___x_3170_; 
lean_dec(v_a_3121_);
lean_dec_ref(v_e_2954_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_val_3168_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_val_3168_);
lean_dec_ref(v___x_3128_);
if (v_isShared_3124_ == 0)
{
lean_ctor_set(v___x_3123_, 0, v_val_3168_);
v___x_3170_ = v___x_3123_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_val_3168_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
else
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
lean_dec_ref(v_e_2954_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_a_3173_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3120_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3120_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
else
{
lean_object* v___x_3181_; 
v___x_3181_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
return v___x_3181_;
}
}
}
case 9:
{
lean_object* v_a_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_a_3182_ = lean_ctor_get(v_e_2954_, 0);
lean_inc_ref(v_a_3182_);
lean_dec_ref(v_e_2954_);
v___x_3183_ = l_Lean_Literal_type(v_a_3182_);
lean_dec_ref(v_a_3182_);
v___x_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
return v___x_3184_;
}
case 10:
{
lean_object* v_expr_3185_; 
v_expr_3185_ = lean_ctor_get(v_e_2954_, 1);
lean_inc_ref(v_expr_3185_);
lean_dec_ref(v_e_2954_);
v_e_2954_ = v_expr_3185_;
goto _start;
}
case 11:
{
uint8_t v_cacheInferType_3187_; 
v_cacheInferType_3187_ = lean_ctor_get_uint8(v_a_2955_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3187_ == 0)
{
lean_object* v_typeName_3188_; lean_object* v_idx_3189_; lean_object* v_struct_3190_; lean_object* v___x_3191_; 
v_typeName_3188_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_typeName_3188_);
v_idx_3189_ = lean_ctor_get(v_e_2954_, 1);
lean_inc(v_idx_3189_);
v_struct_3190_ = lean_ctor_get(v_e_2954_, 2);
lean_inc_ref(v_struct_3190_);
lean_dec_ref(v_e_2954_);
v___x_3191_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3188_, v_idx_3189_, v_struct_3190_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
return v___x_3191_;
}
else
{
lean_object* v_typeName_3192_; lean_object* v_idx_3193_; lean_object* v_struct_3194_; uint8_t v___x_3195_; 
v_typeName_3192_ = lean_ctor_get(v_e_2954_, 0);
lean_inc(v_typeName_3192_);
v_idx_3193_ = lean_ctor_get(v_e_2954_, 1);
lean_inc(v_idx_3193_);
v_struct_3194_ = lean_ctor_get(v_e_2954_, 2);
lean_inc_ref(v_struct_3194_);
v___x_3195_ = l_Lean_Expr_hasMVar(v_e_2954_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; 
v___x_3196_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2954_, v_a_2955_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_a_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3248_; 
v_a_3197_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3199_ = v___x_3196_;
v_isShared_3200_ = v_isSharedCheck_3248_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_a_3197_);
lean_dec(v___x_3196_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3248_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v___x_3201_; lean_object* v_cache_3202_; lean_object* v_inferType_3203_; lean_object* v___x_3204_; 
v___x_3201_ = lean_st_ref_get(v_a_2956_);
v_cache_3202_ = lean_ctor_get(v___x_3201_, 1);
lean_inc_ref(v_cache_3202_);
lean_dec(v___x_3201_);
v_inferType_3203_ = lean_ctor_get(v_cache_3202_, 0);
lean_inc_ref(v_inferType_3203_);
lean_dec_ref(v_cache_3202_);
v___x_3204_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_inferType_3203_, v_a_3197_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3205_; 
lean_del_object(v___x_3199_);
lean_inc(v_a_2956_);
v___x_3205_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3192_, v_idx_3193_, v_struct_3194_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; uint8_t v___x_3207_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
v___x_3207_ = l_Lean_Expr_hasMVar(v_a_3206_);
if (v___x_3207_ == 0)
{
lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3242_; 
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3242_ == 0)
{
lean_object* v_unused_3243_; 
v_unused_3243_ = lean_ctor_get(v___x_3205_, 0);
lean_dec(v_unused_3243_);
v___x_3209_ = v___x_3205_;
v_isShared_3210_ = v_isSharedCheck_3242_;
goto v_resetjp_3208_;
}
else
{
lean_dec(v___x_3205_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3242_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3211_; lean_object* v_cache_3212_; lean_object* v_mctx_3213_; lean_object* v_zetaDeltaFVarIds_3214_; lean_object* v_postponed_3215_; lean_object* v_diag_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3241_; 
v___x_3211_ = lean_st_ref_take(v_a_2956_);
v_cache_3212_ = lean_ctor_get(v___x_3211_, 1);
v_mctx_3213_ = lean_ctor_get(v___x_3211_, 0);
v_zetaDeltaFVarIds_3214_ = lean_ctor_get(v___x_3211_, 2);
v_postponed_3215_ = lean_ctor_get(v___x_3211_, 3);
v_diag_3216_ = lean_ctor_get(v___x_3211_, 4);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3218_ = v___x_3211_;
v_isShared_3219_ = v_isSharedCheck_3241_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_diag_3216_);
lean_inc(v_postponed_3215_);
lean_inc(v_zetaDeltaFVarIds_3214_);
lean_inc(v_cache_3212_);
lean_inc(v_mctx_3213_);
lean_dec(v___x_3211_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3241_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v_inferType_3220_; lean_object* v_funInfo_3221_; lean_object* v_synthInstance_3222_; lean_object* v_whnf_3223_; lean_object* v_defEqTrans_3224_; lean_object* v_defEqPerm_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3240_; 
v_inferType_3220_ = lean_ctor_get(v_cache_3212_, 0);
v_funInfo_3221_ = lean_ctor_get(v_cache_3212_, 1);
v_synthInstance_3222_ = lean_ctor_get(v_cache_3212_, 2);
v_whnf_3223_ = lean_ctor_get(v_cache_3212_, 3);
v_defEqTrans_3224_ = lean_ctor_get(v_cache_3212_, 4);
v_defEqPerm_3225_ = lean_ctor_get(v_cache_3212_, 5);
v_isSharedCheck_3240_ = !lean_is_exclusive(v_cache_3212_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3227_ = v_cache_3212_;
v_isShared_3228_ = v_isSharedCheck_3240_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_defEqPerm_3225_);
lean_inc(v_defEqTrans_3224_);
lean_inc(v_whnf_3223_);
lean_inc(v_synthInstance_3222_);
lean_inc(v_funInfo_3221_);
lean_inc(v_inferType_3220_);
lean_dec(v_cache_3212_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3240_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3229_; lean_object* v___x_3231_; 
lean_inc(v_a_3206_);
v___x_3229_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3220_, v_a_3197_, v_a_3206_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v___x_3229_);
v___x_3231_ = v___x_3227_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v___x_3229_);
lean_ctor_set(v_reuseFailAlloc_3239_, 1, v_funInfo_3221_);
lean_ctor_set(v_reuseFailAlloc_3239_, 2, v_synthInstance_3222_);
lean_ctor_set(v_reuseFailAlloc_3239_, 3, v_whnf_3223_);
lean_ctor_set(v_reuseFailAlloc_3239_, 4, v_defEqTrans_3224_);
lean_ctor_set(v_reuseFailAlloc_3239_, 5, v_defEqPerm_3225_);
v___x_3231_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3233_; 
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 1, v___x_3231_);
v___x_3233_ = v___x_3218_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_mctx_3213_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v___x_3231_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_zetaDeltaFVarIds_3214_);
lean_ctor_set(v_reuseFailAlloc_3238_, 3, v_postponed_3215_);
lean_ctor_set(v_reuseFailAlloc_3238_, 4, v_diag_3216_);
v___x_3233_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3234_ = lean_st_ref_set(v_a_2956_, v___x_3233_);
lean_dec(v_a_2956_);
if (v_isShared_3210_ == 0)
{
v___x_3236_ = v___x_3209_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3206_);
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
else
{
lean_dec(v_a_3206_);
lean_dec(v_a_3197_);
lean_dec(v_a_2956_);
return v___x_3205_;
}
}
else
{
lean_dec(v_a_3197_);
lean_dec(v_a_2956_);
return v___x_3205_;
}
}
else
{
lean_object* v_val_3244_; lean_object* v___x_3246_; 
lean_dec(v_a_3197_);
lean_dec_ref(v_struct_3194_);
lean_dec(v_idx_3193_);
lean_dec(v_typeName_3192_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_val_3244_ = lean_ctor_get(v___x_3204_, 0);
lean_inc(v_val_3244_);
lean_dec_ref(v___x_3204_);
if (v_isShared_3200_ == 0)
{
lean_ctor_set(v___x_3199_, 0, v_val_3244_);
v___x_3246_ = v___x_3199_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_val_3244_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec_ref(v_struct_3194_);
lean_dec(v_idx_3193_);
lean_dec(v_typeName_3192_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
v_a_3249_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3196_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3196_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
else
{
lean_object* v___x_3257_; 
lean_dec_ref(v_e_2954_);
v___x_3257_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3192_, v_idx_3193_, v_struct_3194_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
return v___x_3257_;
}
}
}
default: 
{
uint8_t v_cacheInferType_3258_; 
v_cacheInferType_3258_ = lean_ctor_get_uint8(v_a_2955_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3258_ == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
return v___x_3259_;
}
else
{
uint8_t v___x_3260_; 
v___x_3260_ = l_Lean_Expr_hasMVar(v_e_2954_);
if (v___x_3260_ == 0)
{
lean_object* v___x_3261_; 
lean_inc_ref(v_e_2954_);
v___x_3261_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2954_, v_a_2955_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3313_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3313_ == 0)
{
v___x_3264_ = v___x_3261_;
v_isShared_3265_ = v_isSharedCheck_3313_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3261_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3313_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3266_; lean_object* v_cache_3267_; lean_object* v_inferType_3268_; lean_object* v___x_3269_; 
v___x_3266_ = lean_st_ref_get(v_a_2956_);
v_cache_3267_ = lean_ctor_get(v___x_3266_, 1);
lean_inc_ref(v_cache_3267_);
lean_dec(v___x_3266_);
v_inferType_3268_ = lean_ctor_get(v_cache_3267_, 0);
lean_inc_ref(v_inferType_3268_);
lean_dec_ref(v_cache_3267_);
v___x_3269_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_inferType_3268_, v_a_3262_);
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_object* v___x_3270_; 
lean_del_object(v___x_3264_);
lean_inc(v_a_2956_);
v___x_3270_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; uint8_t v___x_3272_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
v___x_3272_ = l_Lean_Expr_hasMVar(v_a_3271_);
if (v___x_3272_ == 0)
{
lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3307_; 
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3307_ == 0)
{
lean_object* v_unused_3308_; 
v_unused_3308_ = lean_ctor_get(v___x_3270_, 0);
lean_dec(v_unused_3308_);
v___x_3274_ = v___x_3270_;
v_isShared_3275_ = v_isSharedCheck_3307_;
goto v_resetjp_3273_;
}
else
{
lean_dec(v___x_3270_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3307_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3276_; lean_object* v_cache_3277_; lean_object* v_mctx_3278_; lean_object* v_zetaDeltaFVarIds_3279_; lean_object* v_postponed_3280_; lean_object* v_diag_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3306_; 
v___x_3276_ = lean_st_ref_take(v_a_2956_);
v_cache_3277_ = lean_ctor_get(v___x_3276_, 1);
v_mctx_3278_ = lean_ctor_get(v___x_3276_, 0);
v_zetaDeltaFVarIds_3279_ = lean_ctor_get(v___x_3276_, 2);
v_postponed_3280_ = lean_ctor_get(v___x_3276_, 3);
v_diag_3281_ = lean_ctor_get(v___x_3276_, 4);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3283_ = v___x_3276_;
v_isShared_3284_ = v_isSharedCheck_3306_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_diag_3281_);
lean_inc(v_postponed_3280_);
lean_inc(v_zetaDeltaFVarIds_3279_);
lean_inc(v_cache_3277_);
lean_inc(v_mctx_3278_);
lean_dec(v___x_3276_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3306_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v_inferType_3285_; lean_object* v_funInfo_3286_; lean_object* v_synthInstance_3287_; lean_object* v_whnf_3288_; lean_object* v_defEqTrans_3289_; lean_object* v_defEqPerm_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3305_; 
v_inferType_3285_ = lean_ctor_get(v_cache_3277_, 0);
v_funInfo_3286_ = lean_ctor_get(v_cache_3277_, 1);
v_synthInstance_3287_ = lean_ctor_get(v_cache_3277_, 2);
v_whnf_3288_ = lean_ctor_get(v_cache_3277_, 3);
v_defEqTrans_3289_ = lean_ctor_get(v_cache_3277_, 4);
v_defEqPerm_3290_ = lean_ctor_get(v_cache_3277_, 5);
v_isSharedCheck_3305_ = !lean_is_exclusive(v_cache_3277_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3292_ = v_cache_3277_;
v_isShared_3293_ = v_isSharedCheck_3305_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_defEqPerm_3290_);
lean_inc(v_defEqTrans_3289_);
lean_inc(v_whnf_3288_);
lean_inc(v_synthInstance_3287_);
lean_inc(v_funInfo_3286_);
lean_inc(v_inferType_3285_);
lean_dec(v_cache_3277_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3305_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3294_; lean_object* v___x_3296_; 
lean_inc(v_a_3271_);
v___x_3294_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3285_, v_a_3262_, v_a_3271_);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 0, v___x_3294_);
v___x_3296_ = v___x_3292_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v___x_3294_);
lean_ctor_set(v_reuseFailAlloc_3304_, 1, v_funInfo_3286_);
lean_ctor_set(v_reuseFailAlloc_3304_, 2, v_synthInstance_3287_);
lean_ctor_set(v_reuseFailAlloc_3304_, 3, v_whnf_3288_);
lean_ctor_set(v_reuseFailAlloc_3304_, 4, v_defEqTrans_3289_);
lean_ctor_set(v_reuseFailAlloc_3304_, 5, v_defEqPerm_3290_);
v___x_3296_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
lean_object* v___x_3298_; 
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 1, v___x_3296_);
v___x_3298_ = v___x_3283_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v_mctx_3278_);
lean_ctor_set(v_reuseFailAlloc_3303_, 1, v___x_3296_);
lean_ctor_set(v_reuseFailAlloc_3303_, 2, v_zetaDeltaFVarIds_3279_);
lean_ctor_set(v_reuseFailAlloc_3303_, 3, v_postponed_3280_);
lean_ctor_set(v_reuseFailAlloc_3303_, 4, v_diag_3281_);
v___x_3298_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
lean_object* v___x_3299_; lean_object* v___x_3301_; 
v___x_3299_ = lean_st_ref_set(v_a_2956_, v___x_3298_);
lean_dec(v_a_2956_);
if (v_isShared_3275_ == 0)
{
v___x_3301_ = v___x_3274_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_a_3271_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3271_);
lean_dec(v_a_3262_);
lean_dec(v_a_2956_);
return v___x_3270_;
}
}
else
{
lean_dec(v_a_3262_);
lean_dec(v_a_2956_);
return v___x_3270_;
}
}
else
{
lean_object* v_val_3309_; lean_object* v___x_3311_; 
lean_dec(v_a_3262_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
lean_dec_ref(v_e_2954_);
v_val_3309_ = lean_ctor_get(v___x_3269_, 0);
lean_inc(v_val_3309_);
lean_dec_ref(v___x_3269_);
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 0, v_val_3309_);
v___x_3311_ = v___x_3264_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_val_3309_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
}
else
{
lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
lean_dec_ref(v_e_2954_);
v_a_3314_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3316_ = v___x_3261_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3261_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3314_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
}
else
{
lean_object* v___x_3322_; 
v___x_3322_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_);
return v___x_3322_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object* v_e_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object* v_00_u03b2_3330_, lean_object* v_x_3331_, lean_object* v_x_3332_){
_start:
{
lean_object* v___x_3333_; 
v___x_3333_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(v_x_3331_, v_x_3332_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object* v_00_u03b2_3334_, lean_object* v_x_3335_, lean_object* v_x_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(v_00_u03b2_3334_, v_x_3335_, v_x_3336_);
lean_dec_ref(v_x_3336_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object* v_00_u03b2_3338_, lean_object* v_x_3339_, lean_object* v_x_3340_, lean_object* v_x_3341_){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_x_3339_, v_x_3340_, v_x_3341_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0(lean_object* v_00_u03b2_3343_, lean_object* v_x_3344_, size_t v_x_3345_, lean_object* v_x_3346_){
_start:
{
lean_object* v___x_3347_; 
v___x_3347_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___redArg(v_x_3344_, v_x_3345_, v_x_3346_);
return v___x_3347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3348_, lean_object* v_x_3349_, lean_object* v_x_3350_, lean_object* v_x_3351_){
_start:
{
size_t v_x_3148__boxed_3352_; lean_object* v_res_3353_; 
v_x_3148__boxed_3352_ = lean_unbox_usize(v_x_3350_);
lean_dec(v_x_3350_);
v_res_3353_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0(v_00_u03b2_3348_, v_x_3349_, v_x_3148__boxed_3352_, v_x_3351_);
lean_dec_ref(v_x_3351_);
return v_res_3353_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2(lean_object* v_00_u03b2_3354_, lean_object* v_x_3355_, size_t v_x_3356_, size_t v_x_3357_, lean_object* v_x_3358_, lean_object* v_x_3359_){
_start:
{
lean_object* v___x_3360_; 
v___x_3360_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___redArg(v_x_3355_, v_x_3356_, v_x_3357_, v_x_3358_, v_x_3359_);
return v___x_3360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3361_, lean_object* v_x_3362_, lean_object* v_x_3363_, lean_object* v_x_3364_, lean_object* v_x_3365_, lean_object* v_x_3366_){
_start:
{
size_t v_x_3159__boxed_3367_; size_t v_x_3160__boxed_3368_; lean_object* v_res_3369_; 
v_x_3159__boxed_3367_ = lean_unbox_usize(v_x_3363_);
lean_dec(v_x_3363_);
v_x_3160__boxed_3368_ = lean_unbox_usize(v_x_3364_);
lean_dec(v_x_3364_);
v_res_3369_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2(v_00_u03b2_3361_, v_x_3362_, v_x_3159__boxed_3367_, v_x_3160__boxed_3368_, v_x_3365_, v_x_3366_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3370_, lean_object* v_keys_3371_, lean_object* v_vals_3372_, lean_object* v_heq_3373_, lean_object* v_i_3374_, lean_object* v_k_3375_){
_start:
{
lean_object* v___x_3376_; 
v___x_3376_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___redArg(v_keys_3371_, v_vals_3372_, v_i_3374_, v_k_3375_);
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3377_, lean_object* v_keys_3378_, lean_object* v_vals_3379_, lean_object* v_heq_3380_, lean_object* v_i_3381_, lean_object* v_k_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0_spec__0_spec__1(v_00_u03b2_3377_, v_keys_3378_, v_vals_3379_, v_heq_3380_, v_i_3381_, v_k_3382_);
lean_dec_ref(v_k_3382_);
lean_dec_ref(v_vals_3379_);
lean_dec_ref(v_keys_3378_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3384_, lean_object* v_n_3385_, lean_object* v_k_3386_, lean_object* v_v_3387_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4___redArg(v_n_3385_, v_k_3386_, v_v_3387_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_3389_, size_t v_depth_3390_, lean_object* v_keys_3391_, lean_object* v_vals_3392_, lean_object* v_heq_3393_, lean_object* v_i_3394_, lean_object* v_entries_3395_){
_start:
{
lean_object* v___x_3396_; 
v___x_3396_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___redArg(v_depth_3390_, v_keys_3391_, v_vals_3392_, v_i_3394_, v_entries_3395_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3397_, lean_object* v_depth_3398_, lean_object* v_keys_3399_, lean_object* v_vals_3400_, lean_object* v_heq_3401_, lean_object* v_i_3402_, lean_object* v_entries_3403_){
_start:
{
size_t v_depth_boxed_3404_; lean_object* v_res_3405_; 
v_depth_boxed_3404_ = lean_unbox_usize(v_depth_3398_);
lean_dec(v_depth_3398_);
v_res_3405_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__5(v_00_u03b2_3397_, v_depth_boxed_3404_, v_keys_3399_, v_vals_3400_, v_heq_3401_, v_i_3402_, v_entries_3403_);
lean_dec_ref(v_vals_3400_);
lean_dec_ref(v_keys_3399_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_3406_, lean_object* v_x_3407_, lean_object* v_x_3408_, lean_object* v_x_3409_, lean_object* v_x_3410_){
_start:
{
lean_object* v___x_3411_; 
v___x_3411_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__2_spec__4_spec__5___redArg(v_x_3407_, v_x_3408_, v_x_3409_, v_x_3410_);
return v___x_3411_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3417_ = l_Lean_maxRecDepthErrorMessage;
v___x_3418_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
return v___x_3418_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3);
v___x_3420_ = l_Lean_MessageData_ofFormat(v___x_3419_);
return v___x_3420_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4);
v___x_3422_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2));
v___x_3423_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
lean_ctor_set(v___x_3423_, 1, v___x_3421_);
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object* v_ref_3424_){
_start:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3426_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5);
v___x_3427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3427_, 0, v_ref_3424_);
lean_ctor_set(v___x_3427_, 1, v___x_3426_);
v___x_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
return v___x_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object* v_ref_3429_, lean_object* v___y_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3429_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object* v_00_u03b1_3432_, lean_object* v_ref_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_){
_start:
{
lean_object* v___x_3439_; 
v___x_3439_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3433_);
return v___x_3439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object* v_00_u03b1_3440_, lean_object* v_ref_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(v_00_u03b1_3440_, v_ref_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* lean_infer_type(lean_object* v_e_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_){
_start:
{
lean_object* v_fileName_3454_; lean_object* v_fileMap_3455_; lean_object* v_options_3456_; lean_object* v_currRecDepth_3457_; lean_object* v_maxRecDepth_3458_; lean_object* v_ref_3459_; lean_object* v_currNamespace_3460_; lean_object* v_openDecls_3461_; lean_object* v_initHeartbeats_3462_; lean_object* v_maxHeartbeats_3463_; lean_object* v_quotContext_3464_; lean_object* v_currMacroScope_3465_; uint8_t v_diag_3466_; lean_object* v_cancelTk_x3f_3467_; uint8_t v_suppressElabErrors_3468_; lean_object* v_inheritedTraceOptions_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3603_; 
v_fileName_3454_ = lean_ctor_get(v_a_3451_, 0);
v_fileMap_3455_ = lean_ctor_get(v_a_3451_, 1);
v_options_3456_ = lean_ctor_get(v_a_3451_, 2);
v_currRecDepth_3457_ = lean_ctor_get(v_a_3451_, 3);
v_maxRecDepth_3458_ = lean_ctor_get(v_a_3451_, 4);
v_ref_3459_ = lean_ctor_get(v_a_3451_, 5);
v_currNamespace_3460_ = lean_ctor_get(v_a_3451_, 6);
v_openDecls_3461_ = lean_ctor_get(v_a_3451_, 7);
v_initHeartbeats_3462_ = lean_ctor_get(v_a_3451_, 8);
v_maxHeartbeats_3463_ = lean_ctor_get(v_a_3451_, 9);
v_quotContext_3464_ = lean_ctor_get(v_a_3451_, 10);
v_currMacroScope_3465_ = lean_ctor_get(v_a_3451_, 11);
v_diag_3466_ = lean_ctor_get_uint8(v_a_3451_, sizeof(void*)*14);
v_cancelTk_x3f_3467_ = lean_ctor_get(v_a_3451_, 12);
v_suppressElabErrors_3468_ = lean_ctor_get_uint8(v_a_3451_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3469_ = lean_ctor_get(v_a_3451_, 13);
v_isSharedCheck_3603_ = !lean_is_exclusive(v_a_3451_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3471_ = v_a_3451_;
v_isShared_3472_ = v_isSharedCheck_3603_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_inheritedTraceOptions_3469_);
lean_inc(v_cancelTk_x3f_3467_);
lean_inc(v_currMacroScope_3465_);
lean_inc(v_quotContext_3464_);
lean_inc(v_maxHeartbeats_3463_);
lean_inc(v_initHeartbeats_3462_);
lean_inc(v_openDecls_3461_);
lean_inc(v_currNamespace_3460_);
lean_inc(v_ref_3459_);
lean_inc(v_maxRecDepth_3458_);
lean_inc(v_currRecDepth_3457_);
lean_inc(v_options_3456_);
lean_inc(v_fileMap_3455_);
lean_inc(v_fileName_3454_);
lean_dec(v_a_3451_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3603_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
uint8_t v___x_3473_; 
v___x_3473_ = lean_nat_dec_eq(v_currRecDepth_3457_, v_maxRecDepth_3458_);
if (v___x_3473_ == 0)
{
lean_object* v___x_3474_; uint8_t v_transparency_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
v___x_3474_ = l_Lean_Meta_Context_config(v_a_3449_);
v_transparency_3475_ = lean_ctor_get_uint8(v___x_3474_, 9);
v___x_3476_ = lean_unsigned_to_nat(1u);
v___x_3477_ = lean_nat_add(v_currRecDepth_3457_, v___x_3476_);
lean_dec(v_currRecDepth_3457_);
if (v_isShared_3472_ == 0)
{
lean_ctor_set(v___x_3471_, 3, v___x_3477_);
v___x_3479_ = v___x_3471_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_fileName_3454_);
lean_ctor_set(v_reuseFailAlloc_3601_, 1, v_fileMap_3455_);
lean_ctor_set(v_reuseFailAlloc_3601_, 2, v_options_3456_);
lean_ctor_set(v_reuseFailAlloc_3601_, 3, v___x_3477_);
lean_ctor_set(v_reuseFailAlloc_3601_, 4, v_maxRecDepth_3458_);
lean_ctor_set(v_reuseFailAlloc_3601_, 5, v_ref_3459_);
lean_ctor_set(v_reuseFailAlloc_3601_, 6, v_currNamespace_3460_);
lean_ctor_set(v_reuseFailAlloc_3601_, 7, v_openDecls_3461_);
lean_ctor_set(v_reuseFailAlloc_3601_, 8, v_initHeartbeats_3462_);
lean_ctor_set(v_reuseFailAlloc_3601_, 9, v_maxHeartbeats_3463_);
lean_ctor_set(v_reuseFailAlloc_3601_, 10, v_quotContext_3464_);
lean_ctor_set(v_reuseFailAlloc_3601_, 11, v_currMacroScope_3465_);
lean_ctor_set(v_reuseFailAlloc_3601_, 12, v_cancelTk_x3f_3467_);
lean_ctor_set(v_reuseFailAlloc_3601_, 13, v_inheritedTraceOptions_3469_);
lean_ctor_set_uint8(v_reuseFailAlloc_3601_, sizeof(void*)*14, v_diag_3466_);
lean_ctor_set_uint8(v_reuseFailAlloc_3601_, sizeof(void*)*14 + 1, v_suppressElabErrors_3468_);
v___x_3479_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; uint8_t v___y_3485_; uint8_t v___y_3486_; uint8_t v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; uint8_t v___y_3490_; lean_object* v___y_3491_; uint8_t v___y_3520_; uint8_t v___x_3599_; uint8_t v___x_3600_; 
v___x_3599_ = 1;
v___x_3600_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_3475_, v___x_3599_);
if (v___x_3600_ == 0)
{
v___y_3520_ = v_transparency_3475_;
goto v___jp_3519_;
}
else
{
v___y_3520_ = v___x_3599_;
goto v___jp_3519_;
}
v___jp_3480_:
{
lean_object* v___x_3492_; uint8_t v_foApprox_3493_; uint8_t v_ctxApprox_3494_; uint8_t v_quasiPatternApprox_3495_; uint8_t v_constApprox_3496_; uint8_t v_isDefEqStuckEx_3497_; uint8_t v_unificationHints_3498_; uint8_t v_proofIrrelevance_3499_; uint8_t v_assignSyntheticOpaque_3500_; uint8_t v_offsetCnstrs_3501_; uint8_t v_transparency_3502_; uint8_t v_univApprox_3503_; uint8_t v_zetaUnused_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3518_; 
v___x_3492_ = l_Lean_Meta_Context_config(v___y_3482_);
lean_dec_ref(v___y_3482_);
v_foApprox_3493_ = lean_ctor_get_uint8(v___x_3492_, 0);
v_ctxApprox_3494_ = lean_ctor_get_uint8(v___x_3492_, 1);
v_quasiPatternApprox_3495_ = lean_ctor_get_uint8(v___x_3492_, 2);
v_constApprox_3496_ = lean_ctor_get_uint8(v___x_3492_, 3);
v_isDefEqStuckEx_3497_ = lean_ctor_get_uint8(v___x_3492_, 4);
v_unificationHints_3498_ = lean_ctor_get_uint8(v___x_3492_, 5);
v_proofIrrelevance_3499_ = lean_ctor_get_uint8(v___x_3492_, 6);
v_assignSyntheticOpaque_3500_ = lean_ctor_get_uint8(v___x_3492_, 7);
v_offsetCnstrs_3501_ = lean_ctor_get_uint8(v___x_3492_, 8);
v_transparency_3502_ = lean_ctor_get_uint8(v___x_3492_, 9);
v_univApprox_3503_ = lean_ctor_get_uint8(v___x_3492_, 11);
v_zetaUnused_3504_ = lean_ctor_get_uint8(v___x_3492_, 17);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3506_ = v___x_3492_;
v_isShared_3507_ = v_isSharedCheck_3518_;
goto v_resetjp_3505_;
}
else
{
lean_dec(v___x_3492_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3518_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
uint8_t v___x_3508_; uint8_t v___x_3509_; uint8_t v___x_3510_; lean_object* v___x_3512_; 
v___x_3508_ = 1;
v___x_3509_ = 0;
v___x_3510_ = 2;
if (v_isShared_3507_ == 0)
{
v___x_3512_ = v___x_3506_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 0, v_foApprox_3493_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 1, v_ctxApprox_3494_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 2, v_quasiPatternApprox_3495_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 3, v_constApprox_3496_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 4, v_isDefEqStuckEx_3497_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 5, v_unificationHints_3498_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 6, v_proofIrrelevance_3499_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 7, v_assignSyntheticOpaque_3500_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 8, v_offsetCnstrs_3501_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 9, v_transparency_3502_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 11, v_univApprox_3503_);
lean_ctor_set_uint8(v_reuseFailAlloc_3517_, 17, v_zetaUnused_3504_);
v___x_3512_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
uint64_t v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
lean_ctor_set_uint8(v___x_3512_, 10, v___x_3509_);
lean_ctor_set_uint8(v___x_3512_, 12, v___x_3508_);
lean_ctor_set_uint8(v___x_3512_, 13, v___x_3508_);
lean_ctor_set_uint8(v___x_3512_, 14, v___x_3510_);
lean_ctor_set_uint8(v___x_3512_, 15, v___x_3508_);
lean_ctor_set_uint8(v___x_3512_, 16, v___x_3508_);
lean_ctor_set_uint8(v___x_3512_, 18, v___x_3508_);
v___x_3513_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3512_);
v___x_3514_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3514_, 0, v___x_3512_);
lean_ctor_set_uint64(v___x_3514_, sizeof(void*)*1, v___x_3513_);
v___x_3515_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
lean_ctor_set(v___x_3515_, 1, v___y_3491_);
lean_ctor_set(v___x_3515_, 2, v___y_3489_);
lean_ctor_set(v___x_3515_, 3, v___y_3488_);
lean_ctor_set(v___x_3515_, 4, v___y_3481_);
lean_ctor_set(v___x_3515_, 5, v___y_3484_);
lean_ctor_set(v___x_3515_, 6, v___y_3483_);
lean_ctor_set_uint8(v___x_3515_, sizeof(void*)*7, v___y_3490_);
lean_ctor_set_uint8(v___x_3515_, sizeof(void*)*7 + 1, v___y_3485_);
lean_ctor_set_uint8(v___x_3515_, sizeof(void*)*7 + 2, v___y_3486_);
lean_ctor_set_uint8(v___x_3515_, sizeof(void*)*7 + 3, v___y_3487_);
v___x_3516_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3448_, v___x_3515_, v_a_3450_, v___x_3479_, v_a_3452_);
return v___x_3516_;
}
}
}
v___jp_3519_:
{
uint8_t v_foApprox_3521_; uint8_t v_ctxApprox_3522_; uint8_t v_quasiPatternApprox_3523_; uint8_t v_constApprox_3524_; uint8_t v_isDefEqStuckEx_3525_; uint8_t v_unificationHints_3526_; uint8_t v_proofIrrelevance_3527_; uint8_t v_assignSyntheticOpaque_3528_; uint8_t v_offsetCnstrs_3529_; uint8_t v_etaStruct_3530_; uint8_t v_univApprox_3531_; uint8_t v_iota_3532_; uint8_t v_beta_3533_; uint8_t v_proj_3534_; uint8_t v_zeta_3535_; uint8_t v_zetaDelta_3536_; uint8_t v_zetaUnused_3537_; uint8_t v_zetaHave_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3598_; 
v_foApprox_3521_ = lean_ctor_get_uint8(v___x_3474_, 0);
v_ctxApprox_3522_ = lean_ctor_get_uint8(v___x_3474_, 1);
v_quasiPatternApprox_3523_ = lean_ctor_get_uint8(v___x_3474_, 2);
v_constApprox_3524_ = lean_ctor_get_uint8(v___x_3474_, 3);
v_isDefEqStuckEx_3525_ = lean_ctor_get_uint8(v___x_3474_, 4);
v_unificationHints_3526_ = lean_ctor_get_uint8(v___x_3474_, 5);
v_proofIrrelevance_3527_ = lean_ctor_get_uint8(v___x_3474_, 6);
v_assignSyntheticOpaque_3528_ = lean_ctor_get_uint8(v___x_3474_, 7);
v_offsetCnstrs_3529_ = lean_ctor_get_uint8(v___x_3474_, 8);
v_etaStruct_3530_ = lean_ctor_get_uint8(v___x_3474_, 10);
v_univApprox_3531_ = lean_ctor_get_uint8(v___x_3474_, 11);
v_iota_3532_ = lean_ctor_get_uint8(v___x_3474_, 12);
v_beta_3533_ = lean_ctor_get_uint8(v___x_3474_, 13);
v_proj_3534_ = lean_ctor_get_uint8(v___x_3474_, 14);
v_zeta_3535_ = lean_ctor_get_uint8(v___x_3474_, 15);
v_zetaDelta_3536_ = lean_ctor_get_uint8(v___x_3474_, 16);
v_zetaUnused_3537_ = lean_ctor_get_uint8(v___x_3474_, 17);
v_zetaHave_3538_ = lean_ctor_get_uint8(v___x_3474_, 18);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3540_ = v___x_3474_;
v_isShared_3541_ = v_isSharedCheck_3598_;
goto v_resetjp_3539_;
}
else
{
lean_dec(v___x_3474_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3598_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
uint8_t v_trackZetaDelta_3542_; lean_object* v_zetaDeltaSet_3543_; lean_object* v_lctx_3544_; lean_object* v_localInstances_3545_; lean_object* v_defEqCtx_x3f_3546_; lean_object* v_synthPendingDepth_3547_; lean_object* v_canUnfold_x3f_3548_; uint8_t v_univApprox_3549_; uint8_t v_inTypeClassResolution_3550_; uint8_t v_cacheInferType_3551_; lean_object* v_config_3553_; 
v_trackZetaDelta_3542_ = lean_ctor_get_uint8(v_a_3449_, sizeof(void*)*7);
v_zetaDeltaSet_3543_ = lean_ctor_get(v_a_3449_, 1);
lean_inc(v_zetaDeltaSet_3543_);
v_lctx_3544_ = lean_ctor_get(v_a_3449_, 2);
lean_inc_ref(v_lctx_3544_);
v_localInstances_3545_ = lean_ctor_get(v_a_3449_, 3);
lean_inc_ref(v_localInstances_3545_);
v_defEqCtx_x3f_3546_ = lean_ctor_get(v_a_3449_, 4);
lean_inc(v_defEqCtx_x3f_3546_);
v_synthPendingDepth_3547_ = lean_ctor_get(v_a_3449_, 5);
lean_inc(v_synthPendingDepth_3547_);
v_canUnfold_x3f_3548_ = lean_ctor_get(v_a_3449_, 6);
lean_inc(v_canUnfold_x3f_3548_);
v_univApprox_3549_ = lean_ctor_get_uint8(v_a_3449_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3550_ = lean_ctor_get_uint8(v_a_3449_, sizeof(void*)*7 + 2);
v_cacheInferType_3551_ = lean_ctor_get_uint8(v_a_3449_, sizeof(void*)*7 + 3);
if (v_isShared_3541_ == 0)
{
v_config_3553_ = v___x_3540_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 0, v_foApprox_3521_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 1, v_ctxApprox_3522_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 2, v_quasiPatternApprox_3523_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 3, v_constApprox_3524_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 4, v_isDefEqStuckEx_3525_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 5, v_unificationHints_3526_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 6, v_proofIrrelevance_3527_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 7, v_assignSyntheticOpaque_3528_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 8, v_offsetCnstrs_3529_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 10, v_etaStruct_3530_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 11, v_univApprox_3531_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 12, v_iota_3532_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 13, v_beta_3533_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 14, v_proj_3534_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 15, v_zeta_3535_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 16, v_zetaDelta_3536_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 17, v_zetaUnused_3537_);
lean_ctor_set_uint8(v_reuseFailAlloc_3597_, 18, v_zetaHave_3538_);
v_config_3553_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
uint64_t v___x_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3589_; 
lean_ctor_set_uint8(v_config_3553_, 9, v___y_3520_);
v___x_3554_ = l_Lean_Meta_Context_configKey(v_a_3449_);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_a_3449_);
if (v_isSharedCheck_3589_ == 0)
{
lean_object* v_unused_3590_; lean_object* v_unused_3591_; lean_object* v_unused_3592_; lean_object* v_unused_3593_; lean_object* v_unused_3594_; lean_object* v_unused_3595_; lean_object* v_unused_3596_; 
v_unused_3590_ = lean_ctor_get(v_a_3449_, 6);
lean_dec(v_unused_3590_);
v_unused_3591_ = lean_ctor_get(v_a_3449_, 5);
lean_dec(v_unused_3591_);
v_unused_3592_ = lean_ctor_get(v_a_3449_, 4);
lean_dec(v_unused_3592_);
v_unused_3593_ = lean_ctor_get(v_a_3449_, 3);
lean_dec(v_unused_3593_);
v_unused_3594_ = lean_ctor_get(v_a_3449_, 2);
lean_dec(v_unused_3594_);
v_unused_3595_ = lean_ctor_get(v_a_3449_, 1);
lean_dec(v_unused_3595_);
v_unused_3596_ = lean_ctor_get(v_a_3449_, 0);
lean_dec(v_unused_3596_);
v___x_3556_ = v_a_3449_;
v_isShared_3557_ = v_isSharedCheck_3589_;
goto v_resetjp_3555_;
}
else
{
lean_dec(v_a_3449_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3589_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
uint64_t v___x_3558_; uint64_t v___x_3559_; uint64_t v___x_3560_; uint64_t v___x_3561_; uint64_t v_key_3562_; lean_object* v___x_3563_; lean_object* v___x_3565_; 
v___x_3558_ = 2ULL;
v___x_3559_ = lean_uint64_shift_right(v___x_3554_, v___x_3558_);
v___x_3560_ = lean_uint64_shift_left(v___x_3559_, v___x_3558_);
v___x_3561_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_3520_);
v_key_3562_ = lean_uint64_lor(v___x_3560_, v___x_3561_);
v___x_3563_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3563_, 0, v_config_3553_);
lean_ctor_set_uint64(v___x_3563_, sizeof(void*)*1, v_key_3562_);
lean_inc(v_canUnfold_x3f_3548_);
lean_inc(v_synthPendingDepth_3547_);
lean_inc(v_defEqCtx_x3f_3546_);
lean_inc_ref(v_localInstances_3545_);
lean_inc_ref(v_lctx_3544_);
lean_inc(v_zetaDeltaSet_3543_);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v___x_3563_);
v___x_3565_ = v___x_3556_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_3563_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_zetaDeltaSet_3543_);
lean_ctor_set(v_reuseFailAlloc_3588_, 2, v_lctx_3544_);
lean_ctor_set(v_reuseFailAlloc_3588_, 3, v_localInstances_3545_);
lean_ctor_set(v_reuseFailAlloc_3588_, 4, v_defEqCtx_x3f_3546_);
lean_ctor_set(v_reuseFailAlloc_3588_, 5, v_synthPendingDepth_3547_);
lean_ctor_set(v_reuseFailAlloc_3588_, 6, v_canUnfold_x3f_3548_);
lean_ctor_set_uint8(v_reuseFailAlloc_3588_, sizeof(void*)*7, v_trackZetaDelta_3542_);
lean_ctor_set_uint8(v_reuseFailAlloc_3588_, sizeof(void*)*7 + 1, v_univApprox_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3588_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3550_);
lean_ctor_set_uint8(v_reuseFailAlloc_3588_, sizeof(void*)*7 + 3, v_cacheInferType_3551_);
v___x_3565_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_object* v___x_3566_; 
v___x_3566_ = l_Lean_Meta_getConfig___redArg(v___x_3565_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; uint8_t v_beta_3568_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref(v___x_3566_);
v_beta_3568_ = lean_ctor_get_uint8(v_a_3567_, 13);
if (v_beta_3568_ == 0)
{
lean_dec(v_a_3567_);
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
uint8_t v_iota_3569_; 
v_iota_3569_ = lean_ctor_get_uint8(v_a_3567_, 12);
if (v_iota_3569_ == 0)
{
lean_dec(v_a_3567_);
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
uint8_t v_zeta_3570_; 
v_zeta_3570_ = lean_ctor_get_uint8(v_a_3567_, 15);
if (v_zeta_3570_ == 0)
{
lean_dec(v_a_3567_);
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
uint8_t v_zetaHave_3571_; 
v_zetaHave_3571_ = lean_ctor_get_uint8(v_a_3567_, 18);
if (v_zetaHave_3571_ == 0)
{
lean_dec(v_a_3567_);
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
uint8_t v_zetaDelta_3572_; 
v_zetaDelta_3572_ = lean_ctor_get_uint8(v_a_3567_, 16);
if (v_zetaDelta_3572_ == 0)
{
lean_dec(v_a_3567_);
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
uint8_t v_etaStruct_3573_; uint8_t v_proj_3574_; uint8_t v___x_3575_; uint8_t v___x_3576_; 
v_etaStruct_3573_ = lean_ctor_get_uint8(v_a_3567_, 10);
v_proj_3574_ = lean_ctor_get_uint8(v_a_3567_, 14);
lean_dec(v_a_3567_);
v___x_3575_ = 2;
v___x_3576_ = l_Lean_Meta_instDecidableEqProjReductionKind(v_proj_3574_, v___x_3575_);
if (v___x_3576_ == 0)
{
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
uint8_t v___x_3577_; uint8_t v___x_3578_; 
v___x_3577_ = 0;
v___x_3578_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_3573_, v___x_3577_);
if (v___x_3578_ == 0)
{
v___y_3481_ = v_defEqCtx_x3f_3546_;
v___y_3482_ = v___x_3565_;
v___y_3483_ = v_canUnfold_x3f_3548_;
v___y_3484_ = v_synthPendingDepth_3547_;
v___y_3485_ = v_univApprox_3549_;
v___y_3486_ = v_inTypeClassResolution_3550_;
v___y_3487_ = v_cacheInferType_3551_;
v___y_3488_ = v_localInstances_3545_;
v___y_3489_ = v_lctx_3544_;
v___y_3490_ = v_trackZetaDelta_3542_;
v___y_3491_ = v_zetaDeltaSet_3543_;
goto v___jp_3480_;
}
else
{
lean_object* v___x_3579_; 
lean_dec(v_canUnfold_x3f_3548_);
lean_dec(v_synthPendingDepth_3547_);
lean_dec(v_defEqCtx_x3f_3546_);
lean_dec_ref(v_localInstances_3545_);
lean_dec_ref(v_lctx_3544_);
lean_dec(v_zetaDeltaSet_3543_);
v___x_3579_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3448_, v___x_3565_, v_a_3450_, v___x_3479_, v_a_3452_);
return v___x_3579_;
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
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
lean_dec_ref(v___x_3565_);
lean_dec(v_canUnfold_x3f_3548_);
lean_dec(v_synthPendingDepth_3547_);
lean_dec(v_defEqCtx_x3f_3546_);
lean_dec_ref(v_localInstances_3545_);
lean_dec_ref(v_lctx_3544_);
lean_dec(v_zetaDeltaSet_3543_);
lean_dec_ref(v___x_3479_);
lean_dec(v_a_3452_);
lean_dec(v_a_3450_);
lean_dec_ref(v_e_3448_);
v_a_3580_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3566_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3566_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
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
lean_object* v___x_3602_; 
lean_del_object(v___x_3471_);
lean_dec_ref(v_inheritedTraceOptions_3469_);
lean_dec(v_cancelTk_x3f_3467_);
lean_dec(v_currMacroScope_3465_);
lean_dec(v_quotContext_3464_);
lean_dec(v_maxHeartbeats_3463_);
lean_dec(v_initHeartbeats_3462_);
lean_dec(v_openDecls_3461_);
lean_dec(v_currNamespace_3460_);
lean_dec(v_maxRecDepth_3458_);
lean_dec(v_currRecDepth_3457_);
lean_dec_ref(v_options_3456_);
lean_dec_ref(v_fileMap_3455_);
lean_dec_ref(v_fileName_3454_);
lean_dec(v_a_3452_);
lean_dec(v_a_3450_);
lean_dec_ref(v_a_3449_);
lean_dec_ref(v_e_3448_);
v___x_3602_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3459_);
return v___x_3602_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object* v_e_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = lean_infer_type(v_e_3604_, v_a_3605_, v_a_3606_, v_a_3607_, v_a_3608_);
return v_res_3610_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object* v_x_3611_){
_start:
{
switch(lean_obj_tag(v_x_3611_))
{
case 0:
{
uint8_t v___x_3612_; 
v___x_3612_ = 1;
return v___x_3612_;
}
case 2:
{
lean_object* v_a_3613_; lean_object* v_a_3614_; uint8_t v___x_3615_; 
v_a_3613_ = lean_ctor_get(v_x_3611_, 0);
v_a_3614_ = lean_ctor_get(v_x_3611_, 1);
v___x_3615_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3613_);
if (v___x_3615_ == 0)
{
return v___x_3615_;
}
else
{
v_x_3611_ = v_a_3614_;
goto _start;
}
}
case 3:
{
lean_object* v_a_3617_; 
v_a_3617_ = lean_ctor_get(v_x_3611_, 1);
v_x_3611_ = v_a_3617_;
goto _start;
}
default: 
{
uint8_t v___x_3619_; 
v___x_3619_ = 0;
return v___x_3619_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object* v_x_3620_){
_start:
{
uint8_t v_res_3621_; lean_object* v_r_3622_; 
v_res_3621_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_x_3620_);
lean_dec(v_x_3620_);
v_r_3622_ = lean_box(v_res_3621_);
return v_r_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object* v_l_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v___x_3626_; lean_object* v_mctx_3627_; lean_object* v___x_3628_; lean_object* v_fst_3629_; lean_object* v_snd_3630_; lean_object* v___x_3631_; lean_object* v_cache_3632_; lean_object* v_zetaDeltaFVarIds_3633_; lean_object* v_postponed_3634_; lean_object* v_diag_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3644_; 
v___x_3626_ = lean_st_ref_get(v___y_3624_);
v_mctx_3627_ = lean_ctor_get(v___x_3626_, 0);
lean_inc_ref(v_mctx_3627_);
lean_dec(v___x_3626_);
v___x_3628_ = lean_instantiate_level_mvars(v_mctx_3627_, v_l_3623_);
v_fst_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_fst_3629_);
v_snd_3630_ = lean_ctor_get(v___x_3628_, 1);
lean_inc(v_snd_3630_);
lean_dec_ref(v___x_3628_);
v___x_3631_ = lean_st_ref_take(v___y_3624_);
v_cache_3632_ = lean_ctor_get(v___x_3631_, 1);
v_zetaDeltaFVarIds_3633_ = lean_ctor_get(v___x_3631_, 2);
v_postponed_3634_ = lean_ctor_get(v___x_3631_, 3);
v_diag_3635_ = lean_ctor_get(v___x_3631_, 4);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3644_ == 0)
{
lean_object* v_unused_3645_; 
v_unused_3645_ = lean_ctor_get(v___x_3631_, 0);
lean_dec(v_unused_3645_);
v___x_3637_ = v___x_3631_;
v_isShared_3638_ = v_isSharedCheck_3644_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_diag_3635_);
lean_inc(v_postponed_3634_);
lean_inc(v_zetaDeltaFVarIds_3633_);
lean_inc(v_cache_3632_);
lean_dec(v___x_3631_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3644_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
lean_ctor_set(v___x_3637_, 0, v_fst_3629_);
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_fst_3629_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v_cache_3632_);
lean_ctor_set(v_reuseFailAlloc_3643_, 2, v_zetaDeltaFVarIds_3633_);
lean_ctor_set(v_reuseFailAlloc_3643_, 3, v_postponed_3634_);
lean_ctor_set(v_reuseFailAlloc_3643_, 4, v_diag_3635_);
v___x_3640_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = lean_st_ref_set(v___y_3624_, v___x_3640_);
v___x_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3642_, 0, v_snd_3630_);
return v___x_3642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object* v_l_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3646_, v___y_3647_);
lean_dec(v___y_3647_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object* v_l_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_){
_start:
{
lean_object* v___x_3656_; 
v___x_3656_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3650_, v___y_3652_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object* v_l_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(v_l_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object* v_x_3664_, lean_object* v_x_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_){
_start:
{
switch(lean_obj_tag(v_x_3664_))
{
case 3:
{
lean_object* v_u_3675_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
v_u_3675_ = lean_ctor_get(v_x_3664_, 0);
lean_inc(v_u_3675_);
lean_dec_ref(v_x_3664_);
v___x_3676_ = lean_unsigned_to_nat(0u);
v___x_3677_ = lean_nat_dec_eq(v_x_3665_, v___x_3676_);
lean_dec(v_x_3665_);
if (v___x_3677_ == 0)
{
lean_dec(v_u_3675_);
goto v___jp_3671_;
}
else
{
lean_object* v___x_3678_; 
v___x_3678_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_3675_, v_a_3667_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3689_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3689_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3689_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
uint8_t v___x_3683_; uint8_t v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3687_; 
v___x_3683_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3679_);
lean_dec(v_a_3679_);
v___x_3684_ = l_Bool_toLBool(v___x_3683_);
v___x_3685_ = lean_box(v___x_3684_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 0, v___x_3685_);
v___x_3687_ = v___x_3681_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3685_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
v_a_3690_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3678_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3678_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
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
case 7:
{
lean_object* v_body_3698_; lean_object* v_zero_3699_; uint8_t v_isZero_3700_; 
v_body_3698_ = lean_ctor_get(v_x_3664_, 2);
lean_inc_ref(v_body_3698_);
lean_dec_ref(v_x_3664_);
v_zero_3699_ = lean_unsigned_to_nat(0u);
v_isZero_3700_ = lean_nat_dec_eq(v_x_3665_, v_zero_3699_);
if (v_isZero_3700_ == 1)
{
uint8_t v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
lean_dec_ref(v_body_3698_);
lean_dec(v_x_3665_);
v___x_3701_ = 0;
v___x_3702_ = lean_box(v___x_3701_);
v___x_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3702_);
return v___x_3703_;
}
else
{
lean_object* v_one_3704_; lean_object* v_n_3705_; 
v_one_3704_ = lean_unsigned_to_nat(1u);
v_n_3705_ = lean_nat_sub(v_x_3665_, v_one_3704_);
lean_dec(v_x_3665_);
v_x_3664_ = v_body_3698_;
v_x_3665_ = v_n_3705_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3707_; 
v_body_3707_ = lean_ctor_get(v_x_3664_, 3);
lean_inc_ref(v_body_3707_);
lean_dec_ref(v_x_3664_);
v_x_3664_ = v_body_3707_;
goto _start;
}
case 10:
{
lean_object* v_expr_3709_; 
v_expr_3709_ = lean_ctor_get(v_x_3664_, 1);
lean_inc_ref(v_expr_3709_);
lean_dec_ref(v_x_3664_);
v_x_3664_ = v_expr_3709_;
goto _start;
}
default: 
{
lean_dec(v_x_3665_);
lean_dec_ref(v_x_3664_);
goto v___jp_3671_;
}
}
v___jp_3671_:
{
uint8_t v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3672_ = 2;
v___x_3673_ = lean_box(v___x_3672_);
v___x_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3673_);
return v___x_3674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object* v_x_3711_, lean_object* v_x_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_, lean_object* v_a_3717_){
_start:
{
lean_object* v_res_3718_; 
v_res_3718_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_x_3711_, v_x_3712_, v_a_3713_, v_a_3714_, v_a_3715_, v_a_3716_);
lean_dec(v_a_3716_);
lean_dec_ref(v_a_3715_);
lean_dec(v_a_3714_);
lean_dec_ref(v_a_3713_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object* v_x_3719_, lean_object* v_x_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_){
_start:
{
switch(lean_obj_tag(v_x_3719_))
{
case 4:
{
lean_object* v_declName_3726_; lean_object* v_us_3727_; lean_object* v___x_3728_; 
v_declName_3726_ = lean_ctor_get(v_x_3719_, 0);
lean_inc(v_declName_3726_);
v_us_3727_ = lean_ctor_get(v_x_3719_, 1);
lean_inc(v_us_3727_);
lean_dec_ref(v_x_3719_);
lean_inc_ref(v_a_3723_);
v___x_3728_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3726_, v_us_3727_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; lean_object* v___x_3730_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref(v___x_3728_);
v___x_3730_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3729_, v_x_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
return v___x_3730_;
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
lean_dec(v_x_3720_);
v_a_3731_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3728_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3728_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_3739_; lean_object* v___x_3740_; 
v_fvarId_3739_ = lean_ctor_get(v_x_3719_, 0);
lean_inc(v_fvarId_3739_);
lean_dec_ref(v_x_3719_);
lean_inc_ref(v_a_3721_);
v___x_3740_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3739_, v_a_3721_, v_a_3723_, v_a_3724_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3742_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref(v___x_3740_);
v___x_3742_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3741_, v_x_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
return v___x_3742_;
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
lean_dec(v_x_3720_);
v_a_3743_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3740_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3740_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_3751_; lean_object* v___x_3752_; 
v_mvarId_3751_ = lean_ctor_get(v_x_3719_, 0);
lean_inc(v_mvarId_3751_);
lean_dec_ref(v_x_3719_);
v___x_3752_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3751_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v___x_3754_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
lean_inc(v_a_3753_);
lean_dec_ref(v___x_3752_);
v___x_3754_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3753_, v_x_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
return v___x_3754_;
}
else
{
lean_object* v_a_3755_; lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3762_; 
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
lean_dec(v_x_3720_);
v_a_3755_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3757_ = v___x_3752_;
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
else
{
lean_inc(v_a_3755_);
lean_dec(v___x_3752_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v___x_3760_; 
if (v_isShared_3758_ == 0)
{
v___x_3760_ = v___x_3757_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_a_3755_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
}
}
case 5:
{
lean_object* v_fn_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v_fn_3763_ = lean_ctor_get(v_x_3719_, 0);
lean_inc_ref(v_fn_3763_);
lean_dec_ref(v_x_3719_);
v___x_3764_ = lean_unsigned_to_nat(1u);
v___x_3765_ = lean_nat_add(v_x_3720_, v___x_3764_);
lean_dec(v_x_3720_);
v_x_3719_ = v_fn_3763_;
v_x_3720_ = v___x_3765_;
goto _start;
}
case 10:
{
lean_object* v_expr_3767_; 
v_expr_3767_ = lean_ctor_get(v_x_3719_, 1);
lean_inc_ref(v_expr_3767_);
lean_dec_ref(v_x_3719_);
v_x_3719_ = v_expr_3767_;
goto _start;
}
case 8:
{
lean_object* v_body_3769_; 
v_body_3769_ = lean_ctor_get(v_x_3719_, 3);
lean_inc_ref(v_body_3769_);
lean_dec_ref(v_x_3719_);
v_x_3719_ = v_body_3769_;
goto _start;
}
case 6:
{
lean_object* v_body_3771_; lean_object* v_zero_3772_; uint8_t v_isZero_3773_; 
v_body_3771_ = lean_ctor_get(v_x_3719_, 2);
lean_inc_ref(v_body_3771_);
lean_dec_ref(v_x_3719_);
v_zero_3772_ = lean_unsigned_to_nat(0u);
v_isZero_3773_ = lean_nat_dec_eq(v_x_3720_, v_zero_3772_);
if (v_isZero_3773_ == 1)
{
uint8_t v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
lean_dec_ref(v_body_3771_);
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
lean_dec(v_x_3720_);
v___x_3774_ = 0;
v___x_3775_ = lean_box(v___x_3774_);
v___x_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3775_);
return v___x_3776_;
}
else
{
lean_object* v_one_3777_; lean_object* v_n_3778_; 
v_one_3777_ = lean_unsigned_to_nat(1u);
v_n_3778_ = lean_nat_sub(v_x_3720_, v_one_3777_);
lean_dec(v_x_3720_);
v_x_3719_ = v_body_3771_;
v_x_3720_ = v_n_3778_;
goto _start;
}
}
default: 
{
uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
lean_dec_ref(v_a_3723_);
lean_dec_ref(v_a_3721_);
lean_dec(v_x_3720_);
lean_dec_ref(v_x_3719_);
v___x_3780_ = 2;
v___x_3781_ = lean_box(v___x_3780_);
v___x_3782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
return v___x_3782_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object* v_x_3783_, lean_object* v_x_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_x_3783_, v_x_3784_, v_a_3785_, v_a_3786_, v_a_3787_, v_a_3788_);
lean_dec(v_a_3788_);
lean_dec(v_a_3786_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object* v_x_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_){
_start:
{
switch(lean_obj_tag(v_x_3791_))
{
case 0:
{
uint8_t v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
lean_dec_ref(v_x_3791_);
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
v___x_3797_ = 2;
v___x_3798_ = lean_box(v___x_3797_);
v___x_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3798_);
return v___x_3799_;
}
case 1:
{
lean_object* v_fvarId_3800_; lean_object* v___x_3801_; 
v_fvarId_3800_ = lean_ctor_get(v_x_3791_, 0);
lean_inc(v_fvarId_3800_);
lean_dec_ref(v_x_3791_);
lean_inc_ref(v_a_3792_);
v___x_3801_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3800_, v_a_3792_, v_a_3794_, v_a_3795_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3802_);
lean_dec_ref(v___x_3801_);
v___x_3803_ = lean_unsigned_to_nat(0u);
v___x_3804_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3802_, v___x_3803_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_);
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
return v___x_3804_;
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3812_; 
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
v_a_3805_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3807_ = v___x_3801_;
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3801_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3810_; 
if (v_isShared_3808_ == 0)
{
v___x_3810_ = v___x_3807_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v_a_3805_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_3813_; lean_object* v___x_3814_; 
v_mvarId_3813_ = lean_ctor_get(v_x_3791_, 0);
lean_inc(v_mvarId_3813_);
lean_dec_ref(v_x_3791_);
v___x_3814_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3813_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_a_3815_);
lean_dec_ref(v___x_3814_);
v___x_3816_ = lean_unsigned_to_nat(0u);
v___x_3817_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3815_, v___x_3816_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_);
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
return v___x_3817_;
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
v_a_3818_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3814_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3814_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
}
case 4:
{
lean_object* v_declName_3826_; lean_object* v_us_3827_; lean_object* v___x_3828_; 
v_declName_3826_ = lean_ctor_get(v_x_3791_, 0);
lean_inc(v_declName_3826_);
v_us_3827_ = lean_ctor_get(v_x_3791_, 1);
lean_inc(v_us_3827_);
lean_dec_ref(v_x_3791_);
lean_inc_ref(v_a_3794_);
v___x_3828_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3826_, v_us_3827_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_a_3829_);
lean_dec_ref(v___x_3828_);
v___x_3830_ = lean_unsigned_to_nat(0u);
v___x_3831_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3829_, v___x_3830_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_);
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
return v___x_3831_;
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
v_a_3832_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3828_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3828_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
case 5:
{
lean_object* v_fn_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v_fn_3840_ = lean_ctor_get(v_x_3791_, 0);
lean_inc_ref(v_fn_3840_);
lean_dec_ref(v_x_3791_);
v___x_3841_ = lean_unsigned_to_nat(1u);
v___x_3842_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_fn_3840_, v___x_3841_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_);
return v___x_3842_;
}
case 7:
{
lean_object* v_body_3843_; 
v_body_3843_ = lean_ctor_get(v_x_3791_, 2);
lean_inc_ref(v_body_3843_);
lean_dec_ref(v_x_3791_);
v_x_3791_ = v_body_3843_;
goto _start;
}
case 8:
{
lean_object* v_body_3845_; 
v_body_3845_ = lean_ctor_get(v_x_3791_, 3);
lean_inc_ref(v_body_3845_);
lean_dec_ref(v_x_3791_);
v_x_3791_ = v_body_3845_;
goto _start;
}
case 10:
{
lean_object* v_expr_3847_; 
v_expr_3847_ = lean_ctor_get(v_x_3791_, 1);
lean_inc_ref(v_expr_3847_);
lean_dec_ref(v_x_3791_);
v_x_3791_ = v_expr_3847_;
goto _start;
}
case 11:
{
uint8_t v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
lean_dec_ref(v_x_3791_);
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
v___x_3849_ = 2;
v___x_3850_ = lean_box(v___x_3849_);
v___x_3851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3850_);
return v___x_3851_;
}
default: 
{
uint8_t v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
lean_dec_ref(v_a_3794_);
lean_dec_ref(v_a_3792_);
lean_dec_ref(v_x_3791_);
v___x_3852_ = 0;
v___x_3853_ = lean_box(v___x_3852_);
v___x_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
return v___x_3854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object* v_x_3855_, lean_object* v_a_3856_, lean_object* v_a_3857_, lean_object* v_a_3858_, lean_object* v_a_3859_, lean_object* v_a_3860_){
_start:
{
lean_object* v_res_3861_; 
v_res_3861_ = l_Lean_Meta_isPropQuick(v_x_3855_, v_a_3856_, v_a_3857_, v_a_3858_, v_a_3859_);
lean_dec(v_a_3859_);
lean_dec(v_a_3857_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object* v_e_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v___x_3868_; 
lean_inc_ref(v_a_3865_);
lean_inc_ref(v_a_3863_);
lean_inc_ref(v_e_3862_);
v___x_3868_ = l_Lean_Meta_isPropQuick(v_e_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
if (lean_obj_tag(v___x_3868_) == 0)
{
lean_object* v_a_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3925_; 
v_a_3869_ = lean_ctor_get(v___x_3868_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v___x_3868_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3871_ = v___x_3868_;
v_isShared_3872_ = v_isSharedCheck_3925_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_a_3869_);
lean_dec(v___x_3868_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3925_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
uint8_t v___x_3873_; 
v___x_3873_ = lean_unbox(v_a_3869_);
lean_dec(v_a_3869_);
switch(v___x_3873_)
{
case 0:
{
uint8_t v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3877_; 
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
lean_dec_ref(v_e_3862_);
v___x_3874_ = 0;
v___x_3875_ = lean_box(v___x_3874_);
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 0, v___x_3875_);
v___x_3877_ = v___x_3871_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v___x_3875_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
case 1:
{
uint8_t v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3882_; 
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
lean_dec_ref(v_e_3862_);
v___x_3879_ = 1;
v___x_3880_ = lean_box(v___x_3879_);
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 0, v___x_3880_);
v___x_3882_ = v___x_3871_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3883_; 
v_reuseFailAlloc_3883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3883_, 0, v___x_3880_);
v___x_3882_ = v_reuseFailAlloc_3883_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
return v___x_3882_;
}
}
default: 
{
lean_object* v___x_3884_; 
lean_del_object(v___x_3871_);
lean_inc(v_a_3866_);
lean_inc_ref(v_a_3865_);
lean_inc(v_a_3864_);
lean_inc_ref(v_a_3863_);
v___x_3884_ = lean_infer_type(v_e_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v_a_3885_; lean_object* v___x_3886_; 
v_a_3885_ = lean_ctor_get(v___x_3884_, 0);
lean_inc(v_a_3885_);
lean_dec_ref(v___x_3884_);
lean_inc(v_a_3864_);
v___x_3886_ = l_Lean_Meta_whnfD(v_a_3885_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3908_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3889_ = v___x_3886_;
v_isShared_3890_ = v_isSharedCheck_3908_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3886_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3908_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
if (lean_obj_tag(v_a_3887_) == 3)
{
lean_object* v_u_3891_; lean_object* v___x_3892_; lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3902_; 
lean_del_object(v___x_3889_);
v_u_3891_ = lean_ctor_get(v_a_3887_, 0);
lean_inc(v_u_3891_);
lean_dec_ref(v_a_3887_);
v___x_3892_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_3891_, v_a_3864_);
lean_dec(v_a_3864_);
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3895_ = v___x_3892_;
v_isShared_3896_ = v_isSharedCheck_3902_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3892_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3902_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
uint8_t v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3900_; 
v___x_3897_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3893_);
lean_dec(v_a_3893_);
v___x_3898_ = lean_box(v___x_3897_);
if (v_isShared_3896_ == 0)
{
lean_ctor_set(v___x_3895_, 0, v___x_3898_);
v___x_3900_ = v___x_3895_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
else
{
uint8_t v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3906_; 
lean_dec(v_a_3887_);
lean_dec(v_a_3864_);
v___x_3903_ = 0;
v___x_3904_ = lean_box(v___x_3903_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3904_);
v___x_3906_ = v___x_3889_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v___x_3904_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
return v___x_3906_;
}
}
}
}
else
{
lean_object* v_a_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3916_; 
lean_dec(v_a_3864_);
v_a_3909_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3911_ = v___x_3886_;
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_a_3909_);
lean_dec(v___x_3886_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3914_; 
if (v_isShared_3912_ == 0)
{
v___x_3914_ = v___x_3911_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_a_3909_);
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
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
v_a_3917_ = lean_ctor_get(v___x_3884_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3884_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3884_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3922_; 
if (v_isShared_3920_ == 0)
{
v___x_3922_ = v___x_3919_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3917_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
lean_dec_ref(v_e_3862_);
v_a_3926_ = lean_ctor_get(v___x_3868_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3868_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3868_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3868_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object* v_e_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_){
_start:
{
lean_object* v_res_3940_; 
v_res_3940_ = l_Lean_Meta_isProp(v_e_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object* v_x_3941_){
_start:
{
switch(lean_obj_tag(v_x_3941_))
{
case 0:
{
lean_object* v___x_3942_; 
v___x_3942_ = lean_unsigned_to_nat(0u);
return v___x_3942_;
}
case 1:
{
lean_object* v___x_3943_; 
v___x_3943_ = lean_unsigned_to_nat(1u);
return v___x_3943_;
}
case 2:
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_unsigned_to_nat(2u);
return v___x_3944_;
}
default: 
{
lean_object* v___x_3945_; 
v___x_3945_ = lean_unsigned_to_nat(3u);
return v___x_3945_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object* v_x_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(v_x_3946_);
lean_dec(v_x_3946_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object* v_t_3948_, lean_object* v_k_3949_){
_start:
{
if (lean_obj_tag(v_t_3948_) == 3)
{
lean_object* v_idx_3950_; lean_object* v___x_3951_; 
v_idx_3950_ = lean_ctor_get(v_t_3948_, 0);
lean_inc(v_idx_3950_);
lean_dec_ref(v_t_3948_);
v___x_3951_ = lean_apply_1(v_k_3949_, v_idx_3950_);
return v___x_3951_;
}
else
{
lean_dec(v_t_3948_);
return v_k_3949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object* v_motive_3952_, lean_object* v_ctorIdx_3953_, lean_object* v_t_3954_, lean_object* v_h_3955_, lean_object* v_k_3956_){
_start:
{
lean_object* v___x_3957_; 
v___x_3957_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3954_, v_k_3956_);
return v___x_3957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object* v_motive_3958_, lean_object* v_ctorIdx_3959_, lean_object* v_t_3960_, lean_object* v_h_3961_, lean_object* v_k_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(v_motive_3958_, v_ctorIdx_3959_, v_t_3960_, v_h_3961_, v_k_3962_);
lean_dec(v_ctorIdx_3959_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object* v_t_3964_, lean_object* v_false_3965_){
_start:
{
lean_object* v___x_3966_; 
v___x_3966_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3964_, v_false_3965_);
return v___x_3966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object* v_motive_3967_, lean_object* v_t_3968_, lean_object* v_h_3969_, lean_object* v_false_3970_){
_start:
{
lean_object* v___x_3971_; 
v___x_3971_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3968_, v_false_3970_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object* v_t_3972_, lean_object* v_true_3973_){
_start:
{
lean_object* v___x_3974_; 
v___x_3974_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3972_, v_true_3973_);
return v___x_3974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object* v_motive_3975_, lean_object* v_t_3976_, lean_object* v_h_3977_, lean_object* v_true_3978_){
_start:
{
lean_object* v___x_3979_; 
v___x_3979_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3976_, v_true_3978_);
return v___x_3979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object* v_t_3980_, lean_object* v_undef_3981_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3980_, v_undef_3981_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object* v_motive_3983_, lean_object* v_t_3984_, lean_object* v_h_3985_, lean_object* v_undef_3986_){
_start:
{
lean_object* v___x_3987_; 
v___x_3987_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3984_, v_undef_3986_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object* v_t_3988_, lean_object* v_bvar_3989_){
_start:
{
lean_object* v___x_3990_; 
v___x_3990_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3988_, v_bvar_3989_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object* v_motive_3991_, lean_object* v_t_3992_, lean_object* v_h_3993_, lean_object* v_bvar_3994_){
_start:
{
lean_object* v___x_3995_; 
v___x_3995_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_3992_, v_bvar_3994_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t v_x_3996_){
_start:
{
switch(v_x_3996_)
{
case 0:
{
lean_object* v___x_3997_; 
v___x_3997_ = lean_box(0);
return v___x_3997_;
}
case 1:
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_box(1);
return v___x_3998_;
}
default: 
{
lean_object* v___x_3999_; 
v___x_3999_ = lean_box(2);
return v___x_3999_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object* v_x_4000_){
_start:
{
uint8_t v_x_25__boxed_4001_; lean_object* v_res_4002_; 
v_x_25__boxed_4001_ = lean_unbox(v_x_4000_);
v_res_4002_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v_x_25__boxed_4001_);
return v_res_4002_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object* v_x_4003_){
_start:
{
switch(lean_obj_tag(v_x_4003_))
{
case 0:
{
uint8_t v___x_4004_; 
v___x_4004_ = 0;
return v___x_4004_;
}
case 1:
{
uint8_t v___x_4005_; 
v___x_4005_ = 1;
return v___x_4005_;
}
default: 
{
uint8_t v___x_4006_; 
v___x_4006_ = 2;
return v___x_4006_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object* v_x_4007_){
_start:
{
uint8_t v_res_4008_; lean_object* v_r_4009_; 
v_res_4008_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_x_4007_);
lean_dec(v_x_4007_);
v_r_4009_ = lean_box(v_res_4008_);
return v_r_4009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object* v_e_4011_){
_start:
{
switch(lean_obj_tag(v_e_4011_))
{
case 3:
{
lean_object* v_u_4012_; uint8_t v___x_4013_; 
v_u_4012_ = lean_ctor_get(v_e_4011_, 0);
v___x_4013_ = l_Lean_Level_isNeverZero(v_u_4012_);
if (v___x_4013_ == 0)
{
uint8_t v___x_4014_; 
v___x_4014_ = l_Lean_Level_isZero(v_u_4012_);
if (v___x_4014_ == 0)
{
lean_object* v___x_4015_; 
v___x_4015_ = lean_box(2);
return v___x_4015_;
}
else
{
lean_object* v___x_4016_; 
v___x_4016_ = lean_box(1);
return v___x_4016_;
}
}
else
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_box(0);
return v___x_4017_;
}
}
case 5:
{
lean_object* v_fn_4018_; 
v_fn_4018_ = lean_ctor_get(v_e_4011_, 0);
if (lean_obj_tag(v_fn_4018_) == 4)
{
lean_object* v_declName_4019_; 
v_declName_4019_ = lean_ctor_get(v_fn_4018_, 0);
if (lean_obj_tag(v_declName_4019_) == 1)
{
lean_object* v_pre_4020_; 
v_pre_4020_ = lean_ctor_get(v_declName_4019_, 0);
if (lean_obj_tag(v_pre_4020_) == 0)
{
lean_object* v_arg_4021_; lean_object* v_str_4022_; lean_object* v___x_4023_; uint8_t v___x_4024_; 
v_arg_4021_ = lean_ctor_get(v_e_4011_, 1);
v_str_4022_ = lean_ctor_get(v_declName_4019_, 1);
v___x_4023_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0));
v___x_4024_ = lean_string_dec_eq(v_str_4022_, v___x_4023_);
if (v___x_4024_ == 0)
{
lean_object* v___x_4025_; 
v___x_4025_ = lean_box(2);
return v___x_4025_;
}
else
{
v_e_4011_ = v_arg_4021_;
goto _start;
}
}
else
{
lean_object* v___x_4027_; 
v___x_4027_ = lean_box(2);
return v___x_4027_;
}
}
else
{
lean_object* v___x_4028_; 
v___x_4028_ = lean_box(2);
return v___x_4028_;
}
}
else
{
lean_object* v___x_4029_; 
v___x_4029_ = lean_box(2);
return v___x_4029_;
}
}
default: 
{
lean_object* v___x_4030_; 
v___x_4030_ = lean_box(2);
return v___x_4030_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object* v_e_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_e_4031_);
lean_dec_ref(v_e_4031_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object* v_r_4033_, lean_object* v_binderType_4034_){
_start:
{
if (lean_obj_tag(v_r_4033_) == 3)
{
lean_object* v_idx_4035_; lean_object* v___x_4037_; uint8_t v_isShared_4038_; uint8_t v_isSharedCheck_4047_; 
v_idx_4035_ = lean_ctor_get(v_r_4033_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v_r_4033_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4037_ = v_r_4033_;
v_isShared_4038_ = v_isSharedCheck_4047_;
goto v_resetjp_4036_;
}
else
{
lean_inc(v_idx_4035_);
lean_dec(v_r_4033_);
v___x_4037_ = lean_box(0);
v_isShared_4038_ = v_isSharedCheck_4047_;
goto v_resetjp_4036_;
}
v_resetjp_4036_:
{
lean_object* v_zero_4039_; uint8_t v_isZero_4040_; 
v_zero_4039_ = lean_unsigned_to_nat(0u);
v_isZero_4040_ = lean_nat_dec_eq(v_idx_4035_, v_zero_4039_);
if (v_isZero_4040_ == 1)
{
lean_object* v___x_4041_; 
lean_del_object(v___x_4037_);
lean_dec(v_idx_4035_);
v___x_4041_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_binderType_4034_);
return v___x_4041_;
}
else
{
lean_object* v_one_4042_; lean_object* v_n_4043_; lean_object* v___x_4045_; 
v_one_4042_ = lean_unsigned_to_nat(1u);
v_n_4043_ = lean_nat_sub(v_idx_4035_, v_one_4042_);
lean_dec(v_idx_4035_);
if (v_isShared_4038_ == 0)
{
lean_ctor_set(v___x_4037_, 0, v_n_4043_);
v___x_4045_ = v___x_4037_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_n_4043_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
else
{
return v_r_4033_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object* v_r_4048_, lean_object* v_binderType_4049_){
_start:
{
lean_object* v_res_4050_; 
v_res_4050_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_r_4048_, v_binderType_4049_);
lean_dec_ref(v_binderType_4049_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object* v_x_4051_, lean_object* v_x_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_){
_start:
{
lean_object* v_type_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___y_4063_; 
switch(lean_obj_tag(v_x_4051_))
{
case 7:
{
lean_object* v_binderType_4086_; lean_object* v_body_4087_; lean_object* v_zero_4088_; uint8_t v_isZero_4089_; 
v_binderType_4086_ = lean_ctor_get(v_x_4051_, 1);
v_body_4087_ = lean_ctor_get(v_x_4051_, 2);
v_zero_4088_ = lean_unsigned_to_nat(0u);
v_isZero_4089_ = lean_nat_dec_eq(v_x_4052_, v_zero_4088_);
if (v_isZero_4089_ == 1)
{
v_type_4059_ = v_x_4051_;
v___y_4060_ = v_a_4053_;
v___y_4061_ = v_a_4054_;
v___y_4062_ = v_a_4055_;
v___y_4063_ = v_a_4056_;
goto v___jp_4058_;
}
else
{
lean_object* v_one_4090_; lean_object* v_n_4091_; lean_object* v___x_4092_; 
lean_inc_ref(v_body_4087_);
lean_inc_ref(v_binderType_4086_);
lean_dec_ref(v_x_4051_);
v_one_4090_ = lean_unsigned_to_nat(1u);
v_n_4091_ = lean_nat_sub(v_x_4052_, v_one_4090_);
v___x_4092_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4087_, v_n_4091_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_);
lean_dec(v_n_4091_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4101_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4095_ = v___x_4092_;
v_isShared_4096_ = v_isSharedCheck_4101_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4092_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4101_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4097_; lean_object* v___x_4099_; 
v___x_4097_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4093_, v_binderType_4086_);
lean_dec_ref(v_binderType_4086_);
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 0, v___x_4097_);
v___x_4099_ = v___x_4095_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v___x_4097_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
else
{
lean_dec_ref(v_binderType_4086_);
return v___x_4092_;
}
}
}
case 8:
{
lean_object* v_type_4102_; lean_object* v_body_4103_; lean_object* v___x_4104_; 
v_type_4102_ = lean_ctor_get(v_x_4051_, 1);
lean_inc_ref(v_type_4102_);
v_body_4103_ = lean_ctor_get(v_x_4051_, 3);
lean_inc_ref(v_body_4103_);
lean_dec_ref(v_x_4051_);
v___x_4104_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4103_, v_x_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_);
if (lean_obj_tag(v___x_4104_) == 0)
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4113_; 
v_a_4105_ = lean_ctor_get(v___x_4104_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4104_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4107_ = v___x_4104_;
v_isShared_4108_ = v_isSharedCheck_4113_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4104_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4113_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4109_; lean_object* v___x_4111_; 
v___x_4109_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4105_, v_type_4102_);
lean_dec_ref(v_type_4102_);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v___x_4109_);
v___x_4111_ = v___x_4107_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v___x_4109_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
else
{
lean_dec_ref(v_type_4102_);
return v___x_4104_;
}
}
case 10:
{
lean_object* v_expr_4114_; 
v_expr_4114_ = lean_ctor_get(v_x_4051_, 1);
lean_inc_ref(v_expr_4114_);
lean_dec_ref(v_x_4051_);
v_x_4051_ = v_expr_4114_;
goto _start;
}
case 0:
{
lean_object* v_deBruijnIndex_4116_; lean_object* v___x_4117_; uint8_t v___x_4118_; 
lean_dec_ref(v_a_4055_);
lean_dec_ref(v_a_4053_);
v_deBruijnIndex_4116_ = lean_ctor_get(v_x_4051_, 0);
lean_inc(v_deBruijnIndex_4116_);
lean_dec_ref(v_x_4051_);
v___x_4117_ = lean_unsigned_to_nat(0u);
v___x_4118_ = lean_nat_dec_eq(v_x_4052_, v___x_4117_);
if (v___x_4118_ == 0)
{
lean_dec(v_deBruijnIndex_4116_);
goto v___jp_4083_;
}
else
{
lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4119_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4119_, 0, v_deBruijnIndex_4116_);
v___x_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
return v___x_4120_;
}
}
default: 
{
lean_object* v___x_4121_; uint8_t v___x_4122_; 
v___x_4121_ = lean_unsigned_to_nat(0u);
v___x_4122_ = lean_nat_dec_eq(v_x_4052_, v___x_4121_);
if (v___x_4122_ == 0)
{
lean_dec_ref(v_a_4055_);
lean_dec_ref(v_a_4053_);
lean_dec_ref(v_x_4051_);
goto v___jp_4083_;
}
else
{
v_type_4059_ = v_x_4051_;
v___y_4060_ = v_a_4053_;
v___y_4061_ = v_a_4054_;
v___y_4062_ = v_a_4055_;
v___y_4063_ = v_a_4056_;
goto v___jp_4058_;
}
}
}
v___jp_4058_:
{
lean_object* v___x_4064_; 
v___x_4064_ = l_Lean_Meta_isPropQuick(v_type_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4074_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4067_ = v___x_4064_;
v_isShared_4068_ = v_isSharedCheck_4074_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4064_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4074_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
uint8_t v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4072_; 
v___x_4069_ = lean_unbox(v_a_4065_);
lean_dec(v_a_4065_);
v___x_4070_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v___x_4069_);
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 0, v___x_4070_);
v___x_4072_ = v___x_4067_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v___x_4070_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
else
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4082_; 
v_a_4075_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4077_ = v___x_4064_;
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_4064_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4080_; 
if (v_isShared_4078_ == 0)
{
v___x_4080_ = v___x_4077_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4075_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
}
}
v___jp_4083_:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4084_ = lean_box(2);
v___x_4085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
return v___x_4085_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object* v_x_4123_, lean_object* v_x_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_x_4123_, v_x_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_);
lean_dec(v_a_4128_);
lean_dec(v_a_4126_);
lean_dec(v_x_4124_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object* v_e_4131_, lean_object* v_n_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_){
_start:
{
lean_object* v___x_4138_; 
v___x_4138_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_e_4131_, v_n_4132_, v_a_4133_, v_a_4134_, v_a_4135_, v_a_4136_);
if (lean_obj_tag(v___x_4138_) == 0)
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4148_; 
v_a_4139_ = lean_ctor_get(v___x_4138_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4141_ = v___x_4138_;
v_isShared_4142_ = v_isSharedCheck_4148_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4138_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4148_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
uint8_t v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4146_; 
v___x_4143_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_a_4139_);
lean_dec(v_a_4139_);
v___x_4144_ = lean_box(v___x_4143_);
if (v_isShared_4142_ == 0)
{
lean_ctor_set(v___x_4141_, 0, v___x_4144_);
v___x_4146_ = v___x_4141_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v___x_4144_);
v___x_4146_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
return v___x_4146_;
}
}
}
else
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4156_; 
v_a_4149_ = lean_ctor_get(v___x_4138_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4138_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4151_ = v___x_4138_;
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v___x_4138_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
return v___x_4154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object* v_e_4157_, lean_object* v_n_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_e_4157_, v_n_4158_, v_a_4159_, v_a_4160_, v_a_4161_, v_a_4162_);
lean_dec(v_a_4162_);
lean_dec(v_a_4160_);
lean_dec(v_n_4158_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object* v_x_4165_, lean_object* v_x_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_){
_start:
{
switch(lean_obj_tag(v_x_4165_))
{
case 4:
{
lean_object* v_declName_4172_; lean_object* v_us_4173_; lean_object* v___x_4174_; 
v_declName_4172_ = lean_ctor_get(v_x_4165_, 0);
lean_inc(v_declName_4172_);
v_us_4173_ = lean_ctor_get(v_x_4165_, 1);
lean_inc(v_us_4173_);
lean_dec_ref(v_x_4165_);
lean_inc_ref(v_a_4169_);
v___x_4174_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4172_, v_us_4173_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
if (lean_obj_tag(v___x_4174_) == 0)
{
lean_object* v_a_4175_; lean_object* v___x_4176_; 
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
lean_inc(v_a_4175_);
lean_dec_ref(v___x_4174_);
v___x_4176_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4175_, v_x_4166_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
lean_dec(v_x_4166_);
return v___x_4176_;
}
else
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
lean_dec_ref(v_a_4169_);
lean_dec_ref(v_a_4167_);
lean_dec(v_x_4166_);
v_a_4177_ = lean_ctor_get(v___x_4174_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4174_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4179_ = v___x_4174_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v___x_4174_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v_a_4177_);
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
case 1:
{
lean_object* v_fvarId_4185_; lean_object* v___x_4186_; 
v_fvarId_4185_ = lean_ctor_get(v_x_4165_, 0);
lean_inc(v_fvarId_4185_);
lean_dec_ref(v_x_4165_);
lean_inc_ref(v_a_4167_);
v___x_4186_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4185_, v_a_4167_, v_a_4169_, v_a_4170_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v___x_4188_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_a_4187_);
lean_dec_ref(v___x_4186_);
v___x_4188_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4187_, v_x_4166_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
lean_dec(v_x_4166_);
return v___x_4188_;
}
else
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4196_; 
lean_dec_ref(v_a_4169_);
lean_dec_ref(v_a_4167_);
lean_dec(v_x_4166_);
v_a_4189_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4191_ = v___x_4186_;
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v___x_4186_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___x_4194_; 
if (v_isShared_4192_ == 0)
{
v___x_4194_ = v___x_4191_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v_a_4189_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4197_; lean_object* v___x_4198_; 
v_mvarId_4197_ = lean_ctor_get(v_x_4165_, 0);
lean_inc(v_mvarId_4197_);
lean_dec_ref(v_x_4165_);
v___x_4198_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4197_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
if (lean_obj_tag(v___x_4198_) == 0)
{
lean_object* v_a_4199_; lean_object* v___x_4200_; 
v_a_4199_ = lean_ctor_get(v___x_4198_, 0);
lean_inc(v_a_4199_);
lean_dec_ref(v___x_4198_);
v___x_4200_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4199_, v_x_4166_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
lean_dec(v_x_4166_);
return v___x_4200_;
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
lean_dec_ref(v_a_4169_);
lean_dec_ref(v_a_4167_);
lean_dec(v_x_4166_);
v_a_4201_ = lean_ctor_get(v___x_4198_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4198_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4198_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4198_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
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
case 5:
{
lean_object* v_fn_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
v_fn_4209_ = lean_ctor_get(v_x_4165_, 0);
lean_inc_ref(v_fn_4209_);
lean_dec_ref(v_x_4165_);
v___x_4210_ = lean_unsigned_to_nat(1u);
v___x_4211_ = lean_nat_add(v_x_4166_, v___x_4210_);
lean_dec(v_x_4166_);
v_x_4165_ = v_fn_4209_;
v_x_4166_ = v___x_4211_;
goto _start;
}
case 10:
{
lean_object* v_expr_4213_; 
v_expr_4213_ = lean_ctor_get(v_x_4165_, 1);
lean_inc_ref(v_expr_4213_);
lean_dec_ref(v_x_4165_);
v_x_4165_ = v_expr_4213_;
goto _start;
}
case 8:
{
lean_object* v_body_4215_; 
v_body_4215_ = lean_ctor_get(v_x_4165_, 3);
lean_inc_ref(v_body_4215_);
lean_dec_ref(v_x_4165_);
v_x_4165_ = v_body_4215_;
goto _start;
}
case 6:
{
lean_object* v_body_4217_; lean_object* v_zero_4218_; uint8_t v_isZero_4219_; 
v_body_4217_ = lean_ctor_get(v_x_4165_, 2);
lean_inc_ref(v_body_4217_);
lean_dec_ref(v_x_4165_);
v_zero_4218_ = lean_unsigned_to_nat(0u);
v_isZero_4219_ = lean_nat_dec_eq(v_x_4166_, v_zero_4218_);
if (v_isZero_4219_ == 1)
{
lean_object* v___x_4220_; 
lean_dec(v_x_4166_);
v___x_4220_ = l_Lean_Meta_isProofQuick(v_body_4217_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
return v___x_4220_;
}
else
{
lean_object* v_one_4221_; lean_object* v_n_4222_; 
v_one_4221_ = lean_unsigned_to_nat(1u);
v_n_4222_ = lean_nat_sub(v_x_4166_, v_one_4221_);
lean_dec(v_x_4166_);
v_x_4165_ = v_body_4217_;
v_x_4166_ = v_n_4222_;
goto _start;
}
}
default: 
{
uint8_t v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
lean_dec_ref(v_a_4169_);
lean_dec_ref(v_a_4167_);
lean_dec(v_x_4166_);
lean_dec_ref(v_x_4165_);
v___x_4224_ = 2;
v___x_4225_ = lean_box(v___x_4224_);
v___x_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4225_);
return v___x_4226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object* v_x_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_){
_start:
{
switch(lean_obj_tag(v_x_4227_))
{
case 0:
{
uint8_t v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
lean_dec_ref(v_x_4227_);
lean_dec_ref(v_a_4230_);
lean_dec_ref(v_a_4228_);
v___x_4233_ = 2;
v___x_4234_ = lean_box(v___x_4233_);
v___x_4235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4234_);
return v___x_4235_;
}
case 1:
{
lean_object* v_fvarId_4236_; lean_object* v___x_4237_; 
v_fvarId_4236_ = lean_ctor_get(v_x_4227_, 0);
lean_inc(v_fvarId_4236_);
lean_dec_ref(v_x_4227_);
lean_inc_ref(v_a_4228_);
v___x_4237_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4236_, v_a_4228_, v_a_4230_, v_a_4231_);
if (lean_obj_tag(v___x_4237_) == 0)
{
lean_object* v_a_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v_a_4238_ = lean_ctor_get(v___x_4237_, 0);
lean_inc(v_a_4238_);
lean_dec_ref(v___x_4237_);
v___x_4239_ = lean_unsigned_to_nat(0u);
v___x_4240_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4238_, v___x_4239_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
return v___x_4240_;
}
else
{
lean_object* v_a_4241_; lean_object* v___x_4243_; uint8_t v_isShared_4244_; uint8_t v_isSharedCheck_4248_; 
lean_dec_ref(v_a_4230_);
lean_dec_ref(v_a_4228_);
v_a_4241_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4243_ = v___x_4237_;
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
else
{
lean_inc(v_a_4241_);
lean_dec(v___x_4237_);
v___x_4243_ = lean_box(0);
v_isShared_4244_ = v_isSharedCheck_4248_;
goto v_resetjp_4242_;
}
v_resetjp_4242_:
{
lean_object* v___x_4246_; 
if (v_isShared_4244_ == 0)
{
v___x_4246_ = v___x_4243_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v_a_4241_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4249_; lean_object* v___x_4250_; 
v_mvarId_4249_ = lean_ctor_get(v_x_4227_, 0);
lean_inc(v_mvarId_4249_);
lean_dec_ref(v_x_4227_);
v___x_4250_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4249_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
if (lean_obj_tag(v___x_4250_) == 0)
{
lean_object* v_a_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; 
v_a_4251_ = lean_ctor_get(v___x_4250_, 0);
lean_inc(v_a_4251_);
lean_dec_ref(v___x_4250_);
v___x_4252_ = lean_unsigned_to_nat(0u);
v___x_4253_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4251_, v___x_4252_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
return v___x_4253_;
}
else
{
lean_object* v_a_4254_; lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4261_; 
lean_dec_ref(v_a_4230_);
lean_dec_ref(v_a_4228_);
v_a_4254_ = lean_ctor_get(v___x_4250_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4250_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4256_ = v___x_4250_;
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
else
{
lean_inc(v_a_4254_);
lean_dec(v___x_4250_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
if (v_isShared_4257_ == 0)
{
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4254_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
}
case 4:
{
lean_object* v_declName_4262_; lean_object* v_us_4263_; lean_object* v___x_4264_; 
v_declName_4262_ = lean_ctor_get(v_x_4227_, 0);
lean_inc(v_declName_4262_);
v_us_4263_ = lean_ctor_get(v_x_4227_, 1);
lean_inc(v_us_4263_);
lean_dec_ref(v_x_4227_);
lean_inc_ref(v_a_4230_);
v___x_4264_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4262_, v_us_4263_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
if (lean_obj_tag(v___x_4264_) == 0)
{
lean_object* v_a_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
v_a_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc(v_a_4265_);
lean_dec_ref(v___x_4264_);
v___x_4266_ = lean_unsigned_to_nat(0u);
v___x_4267_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4265_, v___x_4266_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
return v___x_4267_;
}
else
{
lean_object* v_a_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4275_; 
lean_dec_ref(v_a_4230_);
lean_dec_ref(v_a_4228_);
v_a_4268_ = lean_ctor_get(v___x_4264_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4264_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4270_ = v___x_4264_;
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_a_4268_);
lean_dec(v___x_4264_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v___x_4273_; 
if (v_isShared_4271_ == 0)
{
v___x_4273_ = v___x_4270_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4268_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
}
}
case 5:
{
lean_object* v_fn_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; 
v_fn_4276_ = lean_ctor_get(v_x_4227_, 0);
lean_inc_ref(v_fn_4276_);
lean_dec_ref(v_x_4227_);
v___x_4277_ = lean_unsigned_to_nat(1u);
v___x_4278_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_fn_4276_, v___x_4277_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
return v___x_4278_;
}
case 6:
{
lean_object* v_body_4279_; 
v_body_4279_ = lean_ctor_get(v_x_4227_, 2);
lean_inc_ref(v_body_4279_);
lean_dec_ref(v_x_4227_);
v_x_4227_ = v_body_4279_;
goto _start;
}
case 8:
{
lean_object* v_body_4281_; 
v_body_4281_ = lean_ctor_get(v_x_4227_, 3);
lean_inc_ref(v_body_4281_);
lean_dec_ref(v_x_4227_);
v_x_4227_ = v_body_4281_;
goto _start;
}
case 10:
{
lean_object* v_expr_4283_; 
v_expr_4283_ = lean_ctor_get(v_x_4227_, 1);
lean_inc_ref(v_expr_4283_);
lean_dec_ref(v_x_4227_);
v_x_4227_ = v_expr_4283_;
goto _start;
}
case 11:
{
uint8_t v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
lean_dec_ref(v_x_4227_);
lean_dec_ref(v_a_4230_);
lean_dec_ref(v_a_4228_);
v___x_4285_ = 2;
v___x_4286_ = lean_box(v___x_4285_);
v___x_4287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
return v___x_4287_;
}
default: 
{
uint8_t v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
lean_dec_ref(v_a_4230_);
lean_dec_ref(v_a_4228_);
lean_dec_ref(v_x_4227_);
v___x_4288_ = 0;
v___x_4289_ = lean_box(v___x_4288_);
v___x_4290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4290_, 0, v___x_4289_);
return v___x_4290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object* v_x_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lean_Meta_isProofQuick(v_x_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec(v_a_4293_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object* v_x_4298_, lean_object* v_x_4299_, lean_object* v_a_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_x_4298_, v_x_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_);
lean_dec(v_a_4303_);
lean_dec(v_a_4301_);
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object* v_e_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_){
_start:
{
lean_object* v___x_4312_; 
lean_inc_ref(v_a_4309_);
lean_inc_ref(v_a_4307_);
lean_inc_ref(v_e_4306_);
v___x_4312_ = l_Lean_Meta_isProofQuick(v_e_4306_, v_a_4307_, v_a_4308_, v_a_4309_, v_a_4310_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4339_; 
v_a_4313_ = lean_ctor_get(v___x_4312_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4315_ = v___x_4312_;
v_isShared_4316_ = v_isSharedCheck_4339_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4312_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4339_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
uint8_t v___x_4317_; 
v___x_4317_ = lean_unbox(v_a_4313_);
lean_dec(v_a_4313_);
switch(v___x_4317_)
{
case 0:
{
uint8_t v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4321_; 
lean_dec(v_a_4310_);
lean_dec_ref(v_a_4309_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
lean_dec_ref(v_e_4306_);
v___x_4318_ = 0;
v___x_4319_ = lean_box(v___x_4318_);
if (v_isShared_4316_ == 0)
{
lean_ctor_set(v___x_4315_, 0, v___x_4319_);
v___x_4321_ = v___x_4315_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v___x_4319_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
return v___x_4321_;
}
}
case 1:
{
uint8_t v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4326_; 
lean_dec(v_a_4310_);
lean_dec_ref(v_a_4309_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
lean_dec_ref(v_e_4306_);
v___x_4323_ = 1;
v___x_4324_ = lean_box(v___x_4323_);
if (v_isShared_4316_ == 0)
{
lean_ctor_set(v___x_4315_, 0, v___x_4324_);
v___x_4326_ = v___x_4315_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v___x_4324_);
v___x_4326_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
return v___x_4326_;
}
}
default: 
{
lean_object* v___x_4328_; 
lean_del_object(v___x_4315_);
lean_inc(v_a_4310_);
lean_inc_ref(v_a_4309_);
lean_inc(v_a_4308_);
lean_inc_ref(v_a_4307_);
v___x_4328_ = lean_infer_type(v_e_4306_, v_a_4307_, v_a_4308_, v_a_4309_, v_a_4310_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4330_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4329_);
lean_dec_ref(v___x_4328_);
v___x_4330_ = l_Lean_Meta_isProp(v_a_4329_, v_a_4307_, v_a_4308_, v_a_4309_, v_a_4310_);
return v___x_4330_;
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
lean_dec(v_a_4310_);
lean_dec_ref(v_a_4309_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
v_a_4331_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4328_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4328_);
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
}
}
else
{
lean_object* v_a_4340_; lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4347_; 
lean_dec(v_a_4310_);
lean_dec_ref(v_a_4309_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
lean_dec_ref(v_e_4306_);
v_a_4340_ = lean_ctor_get(v___x_4312_, 0);
v_isSharedCheck_4347_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4347_ == 0)
{
v___x_4342_ = v___x_4312_;
v_isShared_4343_ = v_isSharedCheck_4347_;
goto v_resetjp_4341_;
}
else
{
lean_inc(v_a_4340_);
lean_dec(v___x_4312_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4347_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4345_; 
if (v_isShared_4343_ == 0)
{
v___x_4345_ = v___x_4342_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v_a_4340_);
v___x_4345_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
return v___x_4345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object* v_e_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_Lean_Meta_isProof(v_e_4348_, v_a_4349_, v_a_4350_, v_a_4351_, v_a_4352_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object* v_x_4355_, lean_object* v_x_4356_){
_start:
{
switch(lean_obj_tag(v_x_4355_))
{
case 3:
{
lean_object* v___x_4362_; uint8_t v___x_4363_; 
v___x_4362_ = lean_unsigned_to_nat(0u);
v___x_4363_ = lean_nat_dec_eq(v_x_4356_, v___x_4362_);
lean_dec(v_x_4356_);
if (v___x_4363_ == 0)
{
goto v___jp_4358_;
}
else
{
uint8_t v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v___x_4364_ = 1;
v___x_4365_ = lean_box(v___x_4364_);
v___x_4366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4365_);
return v___x_4366_;
}
}
case 7:
{
lean_object* v_body_4367_; lean_object* v_zero_4368_; uint8_t v_isZero_4369_; 
v_body_4367_ = lean_ctor_get(v_x_4355_, 2);
v_zero_4368_ = lean_unsigned_to_nat(0u);
v_isZero_4369_ = lean_nat_dec_eq(v_x_4356_, v_zero_4368_);
if (v_isZero_4369_ == 1)
{
uint8_t v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
lean_dec(v_x_4356_);
v___x_4370_ = 0;
v___x_4371_ = lean_box(v___x_4370_);
v___x_4372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4371_);
return v___x_4372_;
}
else
{
lean_object* v_one_4373_; lean_object* v_n_4374_; 
v_one_4373_ = lean_unsigned_to_nat(1u);
v_n_4374_ = lean_nat_sub(v_x_4356_, v_one_4373_);
lean_dec(v_x_4356_);
v_x_4355_ = v_body_4367_;
v_x_4356_ = v_n_4374_;
goto _start;
}
}
case 8:
{
lean_object* v_body_4376_; 
v_body_4376_ = lean_ctor_get(v_x_4355_, 3);
v_x_4355_ = v_body_4376_;
goto _start;
}
case 10:
{
lean_object* v_expr_4378_; 
v_expr_4378_ = lean_ctor_get(v_x_4355_, 1);
v_x_4355_ = v_expr_4378_;
goto _start;
}
default: 
{
lean_dec(v_x_4356_);
goto v___jp_4358_;
}
}
v___jp_4358_:
{
uint8_t v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4359_ = 2;
v___x_4360_ = lean_box(v___x_4359_);
v___x_4361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4361_, 0, v___x_4360_);
return v___x_4361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object* v_x_4380_, lean_object* v_x_4381_, lean_object* v_a_4382_){
_start:
{
lean_object* v_res_4383_; 
v_res_4383_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4380_, v_x_4381_);
lean_dec_ref(v_x_4380_);
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object* v_x_4384_, lean_object* v_x_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_, lean_object* v_a_4389_){
_start:
{
lean_object* v___x_4391_; 
v___x_4391_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4384_, v_x_4385_);
return v___x_4391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object* v_x_4392_, lean_object* v_x_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_){
_start:
{
lean_object* v_res_4399_; 
v_res_4399_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(v_x_4392_, v_x_4393_, v_a_4394_, v_a_4395_, v_a_4396_, v_a_4397_);
lean_dec(v_a_4397_);
lean_dec_ref(v_a_4396_);
lean_dec(v_a_4395_);
lean_dec_ref(v_a_4394_);
lean_dec_ref(v_x_4392_);
return v_res_4399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object* v_x_4400_, lean_object* v_x_4401_, lean_object* v_a_4402_, lean_object* v_a_4403_, lean_object* v_a_4404_, lean_object* v_a_4405_){
_start:
{
switch(lean_obj_tag(v_x_4400_))
{
case 4:
{
lean_object* v_declName_4407_; lean_object* v_us_4408_; lean_object* v___x_4409_; 
v_declName_4407_ = lean_ctor_get(v_x_4400_, 0);
lean_inc(v_declName_4407_);
v_us_4408_ = lean_ctor_get(v_x_4400_, 1);
lean_inc(v_us_4408_);
lean_dec_ref(v_x_4400_);
v___x_4409_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4407_, v_us_4408_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
lean_dec_ref(v_a_4402_);
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4411_; 
v_a_4410_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_a_4410_);
lean_dec_ref(v___x_4409_);
v___x_4411_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4410_, v_x_4401_);
lean_dec(v_a_4410_);
return v___x_4411_;
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
lean_dec(v_x_4401_);
v_a_4412_ = lean_ctor_get(v___x_4409_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4409_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4409_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4409_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4420_; lean_object* v___x_4421_; 
v_fvarId_4420_ = lean_ctor_get(v_x_4400_, 0);
lean_inc(v_fvarId_4420_);
lean_dec_ref(v_x_4400_);
v___x_4421_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4420_, v_a_4402_, v_a_4404_, v_a_4405_);
lean_dec_ref(v_a_4404_);
if (lean_obj_tag(v___x_4421_) == 0)
{
lean_object* v_a_4422_; lean_object* v___x_4423_; 
v_a_4422_ = lean_ctor_get(v___x_4421_, 0);
lean_inc(v_a_4422_);
lean_dec_ref(v___x_4421_);
v___x_4423_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4422_, v_x_4401_);
lean_dec(v_a_4422_);
return v___x_4423_;
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4431_; 
lean_dec(v_x_4401_);
v_a_4424_ = lean_ctor_get(v___x_4421_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4421_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4426_ = v___x_4421_;
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_dec(v___x_4421_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4429_; 
if (v_isShared_4427_ == 0)
{
v___x_4429_ = v___x_4426_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_a_4424_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4432_; lean_object* v___x_4433_; 
v_mvarId_4432_ = lean_ctor_get(v_x_4400_, 0);
lean_inc(v_mvarId_4432_);
lean_dec_ref(v_x_4400_);
v___x_4433_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4432_, v_a_4402_, v_a_4403_, v_a_4404_, v_a_4405_);
lean_dec_ref(v_a_4404_);
lean_dec_ref(v_a_4402_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v___x_4435_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
lean_inc(v_a_4434_);
lean_dec_ref(v___x_4433_);
v___x_4435_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4434_, v_x_4401_);
lean_dec(v_a_4434_);
return v___x_4435_;
}
else
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4443_; 
lean_dec(v_x_4401_);
v_a_4436_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4443_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4438_ = v___x_4433_;
v_isShared_4439_ = v_isSharedCheck_4443_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4433_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4443_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4441_; 
if (v_isShared_4439_ == 0)
{
v___x_4441_ = v___x_4438_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v_a_4436_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
return v___x_4441_;
}
}
}
}
case 5:
{
lean_object* v_fn_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_fn_4444_ = lean_ctor_get(v_x_4400_, 0);
lean_inc_ref(v_fn_4444_);
lean_dec_ref(v_x_4400_);
v___x_4445_ = lean_unsigned_to_nat(1u);
v___x_4446_ = lean_nat_add(v_x_4401_, v___x_4445_);
lean_dec(v_x_4401_);
v_x_4400_ = v_fn_4444_;
v_x_4401_ = v___x_4446_;
goto _start;
}
case 10:
{
lean_object* v_expr_4448_; 
v_expr_4448_ = lean_ctor_get(v_x_4400_, 1);
lean_inc_ref(v_expr_4448_);
lean_dec_ref(v_x_4400_);
v_x_4400_ = v_expr_4448_;
goto _start;
}
case 8:
{
lean_object* v_body_4450_; 
v_body_4450_ = lean_ctor_get(v_x_4400_, 3);
lean_inc_ref(v_body_4450_);
lean_dec_ref(v_x_4400_);
v_x_4400_ = v_body_4450_;
goto _start;
}
case 6:
{
lean_object* v_body_4452_; lean_object* v_zero_4453_; uint8_t v_isZero_4454_; 
v_body_4452_ = lean_ctor_get(v_x_4400_, 2);
lean_inc_ref(v_body_4452_);
lean_dec_ref(v_x_4400_);
v_zero_4453_ = lean_unsigned_to_nat(0u);
v_isZero_4454_ = lean_nat_dec_eq(v_x_4401_, v_zero_4453_);
if (v_isZero_4454_ == 1)
{
uint8_t v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; 
lean_dec_ref(v_body_4452_);
lean_dec_ref(v_a_4404_);
lean_dec_ref(v_a_4402_);
lean_dec(v_x_4401_);
v___x_4455_ = 0;
v___x_4456_ = lean_box(v___x_4455_);
v___x_4457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4457_, 0, v___x_4456_);
return v___x_4457_;
}
else
{
lean_object* v_one_4458_; lean_object* v_n_4459_; 
v_one_4458_ = lean_unsigned_to_nat(1u);
v_n_4459_ = lean_nat_sub(v_x_4401_, v_one_4458_);
lean_dec(v_x_4401_);
v_x_4400_ = v_body_4452_;
v_x_4401_ = v_n_4459_;
goto _start;
}
}
default: 
{
uint8_t v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
lean_dec_ref(v_a_4404_);
lean_dec_ref(v_a_4402_);
lean_dec(v_x_4401_);
lean_dec_ref(v_x_4400_);
v___x_4461_ = 2;
v___x_4462_ = lean_box(v___x_4461_);
v___x_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4462_);
return v___x_4463_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object* v_x_4464_, lean_object* v_x_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_){
_start:
{
lean_object* v_res_4471_; 
v_res_4471_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_x_4464_, v_x_4465_, v_a_4466_, v_a_4467_, v_a_4468_, v_a_4469_);
lean_dec(v_a_4469_);
lean_dec(v_a_4467_);
return v_res_4471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object* v_x_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_){
_start:
{
switch(lean_obj_tag(v_x_4472_))
{
case 1:
{
lean_object* v_fvarId_4478_; lean_object* v___x_4479_; 
v_fvarId_4478_ = lean_ctor_get(v_x_4472_, 0);
lean_inc(v_fvarId_4478_);
lean_dec_ref(v_x_4472_);
v___x_4479_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4478_, v_a_4473_, v_a_4475_, v_a_4476_);
lean_dec_ref(v_a_4475_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_a_4480_);
lean_dec_ref(v___x_4479_);
v___x_4481_ = lean_unsigned_to_nat(0u);
v___x_4482_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4480_, v___x_4481_);
lean_dec(v_a_4480_);
return v___x_4482_;
}
else
{
lean_object* v_a_4483_; lean_object* v___x_4485_; uint8_t v_isShared_4486_; uint8_t v_isSharedCheck_4490_; 
v_a_4483_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4490_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4490_ == 0)
{
v___x_4485_ = v___x_4479_;
v_isShared_4486_ = v_isSharedCheck_4490_;
goto v_resetjp_4484_;
}
else
{
lean_inc(v_a_4483_);
lean_dec(v___x_4479_);
v___x_4485_ = lean_box(0);
v_isShared_4486_ = v_isSharedCheck_4490_;
goto v_resetjp_4484_;
}
v_resetjp_4484_:
{
lean_object* v___x_4488_; 
if (v_isShared_4486_ == 0)
{
v___x_4488_ = v___x_4485_;
goto v_reusejp_4487_;
}
else
{
lean_object* v_reuseFailAlloc_4489_; 
v_reuseFailAlloc_4489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4489_, 0, v_a_4483_);
v___x_4488_ = v_reuseFailAlloc_4489_;
goto v_reusejp_4487_;
}
v_reusejp_4487_:
{
return v___x_4488_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4491_; lean_object* v___x_4492_; 
v_mvarId_4491_ = lean_ctor_get(v_x_4472_, 0);
lean_inc(v_mvarId_4491_);
lean_dec_ref(v_x_4472_);
v___x_4492_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4491_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_);
lean_dec_ref(v_a_4475_);
lean_dec_ref(v_a_4473_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_a_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc(v_a_4493_);
lean_dec_ref(v___x_4492_);
v___x_4494_ = lean_unsigned_to_nat(0u);
v___x_4495_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4493_, v___x_4494_);
lean_dec(v_a_4493_);
return v___x_4495_;
}
else
{
lean_object* v_a_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4503_; 
v_a_4496_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4498_ = v___x_4492_;
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_a_4496_);
lean_dec(v___x_4492_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4496_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
return v___x_4501_;
}
}
}
}
case 3:
{
uint8_t v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
lean_dec_ref(v_x_4472_);
lean_dec_ref(v_a_4475_);
lean_dec_ref(v_a_4473_);
v___x_4504_ = 1;
v___x_4505_ = lean_box(v___x_4504_);
v___x_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4505_);
return v___x_4506_;
}
case 4:
{
lean_object* v_declName_4507_; lean_object* v_us_4508_; lean_object* v___x_4509_; 
v_declName_4507_ = lean_ctor_get(v_x_4472_, 0);
lean_inc(v_declName_4507_);
v_us_4508_ = lean_ctor_get(v_x_4472_, 1);
lean_inc(v_us_4508_);
lean_dec_ref(v_x_4472_);
v___x_4509_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4507_, v_us_4508_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_);
lean_dec_ref(v_a_4473_);
if (lean_obj_tag(v___x_4509_) == 0)
{
lean_object* v_a_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v_a_4510_ = lean_ctor_get(v___x_4509_, 0);
lean_inc(v_a_4510_);
lean_dec_ref(v___x_4509_);
v___x_4511_ = lean_unsigned_to_nat(0u);
v___x_4512_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4510_, v___x_4511_);
lean_dec(v_a_4510_);
return v___x_4512_;
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
v_a_4513_ = lean_ctor_get(v___x_4509_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4509_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4509_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4509_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
case 5:
{
lean_object* v_fn_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v_fn_4521_ = lean_ctor_get(v_x_4472_, 0);
lean_inc_ref(v_fn_4521_);
lean_dec_ref(v_x_4472_);
v___x_4522_ = lean_unsigned_to_nat(1u);
v___x_4523_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_fn_4521_, v___x_4522_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_);
return v___x_4523_;
}
case 6:
{
uint8_t v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
lean_dec_ref(v_x_4472_);
lean_dec_ref(v_a_4475_);
lean_dec_ref(v_a_4473_);
v___x_4524_ = 0;
v___x_4525_ = lean_box(v___x_4524_);
v___x_4526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
return v___x_4526_;
}
case 7:
{
uint8_t v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
lean_dec_ref(v_x_4472_);
lean_dec_ref(v_a_4475_);
lean_dec_ref(v_a_4473_);
v___x_4527_ = 1;
v___x_4528_ = lean_box(v___x_4527_);
v___x_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
case 8:
{
lean_object* v_body_4530_; 
v_body_4530_ = lean_ctor_get(v_x_4472_, 3);
lean_inc_ref(v_body_4530_);
lean_dec_ref(v_x_4472_);
v_x_4472_ = v_body_4530_;
goto _start;
}
case 9:
{
uint8_t v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
lean_dec_ref(v_x_4472_);
lean_dec_ref(v_a_4475_);
lean_dec_ref(v_a_4473_);
v___x_4532_ = 0;
v___x_4533_ = lean_box(v___x_4532_);
v___x_4534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
return v___x_4534_;
}
case 10:
{
lean_object* v_expr_4535_; 
v_expr_4535_ = lean_ctor_get(v_x_4472_, 1);
lean_inc_ref(v_expr_4535_);
lean_dec_ref(v_x_4472_);
v_x_4472_ = v_expr_4535_;
goto _start;
}
default: 
{
uint8_t v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
lean_dec_ref(v_a_4475_);
lean_dec_ref(v_a_4473_);
lean_dec_ref(v_x_4472_);
v___x_4537_ = 2;
v___x_4538_ = lean_box(v___x_4537_);
v___x_4539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4538_);
return v___x_4539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object* v_x_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_){
_start:
{
lean_object* v_res_4546_; 
v_res_4546_ = l_Lean_Meta_isTypeQuick(v_x_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
lean_dec(v_a_4544_);
lean_dec(v_a_4542_);
return v_res_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object* v_e_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_){
_start:
{
lean_object* v___x_4553_; 
lean_inc_ref(v_a_4550_);
lean_inc_ref(v_a_4548_);
lean_inc_ref(v_e_4547_);
v___x_4553_ = l_Lean_Meta_isTypeQuick(v_e_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_);
if (lean_obj_tag(v___x_4553_) == 0)
{
lean_object* v_a_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4603_; 
v_a_4554_ = lean_ctor_get(v___x_4553_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4553_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4556_ = v___x_4553_;
v_isShared_4557_ = v_isSharedCheck_4603_;
goto v_resetjp_4555_;
}
else
{
lean_inc(v_a_4554_);
lean_dec(v___x_4553_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4603_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
uint8_t v___x_4558_; 
v___x_4558_ = lean_unbox(v_a_4554_);
lean_dec(v_a_4554_);
switch(v___x_4558_)
{
case 0:
{
uint8_t v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4562_; 
lean_dec(v_a_4551_);
lean_dec_ref(v_a_4550_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
lean_dec_ref(v_e_4547_);
v___x_4559_ = 0;
v___x_4560_ = lean_box(v___x_4559_);
if (v_isShared_4557_ == 0)
{
lean_ctor_set(v___x_4556_, 0, v___x_4560_);
v___x_4562_ = v___x_4556_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v___x_4560_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
}
}
case 1:
{
uint8_t v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4567_; 
lean_dec(v_a_4551_);
lean_dec_ref(v_a_4550_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
lean_dec_ref(v_e_4547_);
v___x_4564_ = 1;
v___x_4565_ = lean_box(v___x_4564_);
if (v_isShared_4557_ == 0)
{
lean_ctor_set(v___x_4556_, 0, v___x_4565_);
v___x_4567_ = v___x_4556_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v___x_4565_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
return v___x_4567_;
}
}
default: 
{
lean_object* v___x_4569_; 
lean_del_object(v___x_4556_);
lean_inc(v_a_4551_);
lean_inc_ref(v_a_4550_);
lean_inc(v_a_4549_);
lean_inc_ref(v_a_4548_);
v___x_4569_ = lean_infer_type(v_e_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4571_; 
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
lean_inc(v_a_4570_);
lean_dec_ref(v___x_4569_);
v___x_4571_ = l_Lean_Meta_whnfD(v_a_4570_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_);
if (lean_obj_tag(v___x_4571_) == 0)
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4586_; 
v_a_4572_ = lean_ctor_get(v___x_4571_, 0);
v_isSharedCheck_4586_ = !lean_is_exclusive(v___x_4571_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4574_ = v___x_4571_;
v_isShared_4575_ = v_isSharedCheck_4586_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4571_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4586_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
if (lean_obj_tag(v_a_4572_) == 3)
{
uint8_t v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4579_; 
lean_dec_ref(v_a_4572_);
v___x_4576_ = 1;
v___x_4577_ = lean_box(v___x_4576_);
if (v_isShared_4575_ == 0)
{
lean_ctor_set(v___x_4574_, 0, v___x_4577_);
v___x_4579_ = v___x_4574_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v___x_4577_);
v___x_4579_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
return v___x_4579_;
}
}
else
{
uint8_t v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4584_; 
lean_dec(v_a_4572_);
v___x_4581_ = 0;
v___x_4582_ = lean_box(v___x_4581_);
if (v_isShared_4575_ == 0)
{
lean_ctor_set(v___x_4574_, 0, v___x_4582_);
v___x_4584_ = v___x_4574_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v___x_4582_);
v___x_4584_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
return v___x_4584_;
}
}
}
}
else
{
lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4594_; 
v_a_4587_ = lean_ctor_get(v___x_4571_, 0);
v_isSharedCheck_4594_ = !lean_is_exclusive(v___x_4571_);
if (v_isSharedCheck_4594_ == 0)
{
v___x_4589_ = v___x_4571_;
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_dec(v___x_4571_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v___x_4592_; 
if (v_isShared_4590_ == 0)
{
v___x_4592_ = v___x_4589_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_a_4587_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
else
{
lean_object* v_a_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4602_; 
lean_dec(v_a_4551_);
lean_dec_ref(v_a_4550_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
v_a_4595_ = lean_ctor_get(v___x_4569_, 0);
v_isSharedCheck_4602_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4602_ == 0)
{
v___x_4597_ = v___x_4569_;
v_isShared_4598_ = v_isSharedCheck_4602_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_a_4595_);
lean_dec(v___x_4569_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4602_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
lean_object* v___x_4600_; 
if (v_isShared_4598_ == 0)
{
v___x_4600_ = v___x_4597_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v_a_4595_);
v___x_4600_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
return v___x_4600_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4611_; 
lean_dec(v_a_4551_);
lean_dec_ref(v_a_4550_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
lean_dec_ref(v_e_4547_);
v_a_4604_ = lean_ctor_get(v___x_4553_, 0);
v_isSharedCheck_4611_ = !lean_is_exclusive(v___x_4553_);
if (v_isSharedCheck_4611_ == 0)
{
v___x_4606_ = v___x_4553_;
v_isShared_4607_ = v_isSharedCheck_4611_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v___x_4553_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4611_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4609_; 
if (v_isShared_4607_ == 0)
{
v___x_4609_ = v___x_4606_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v_a_4604_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
return v___x_4609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object* v_e_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l_Lean_Meta_isType(v_e_4612_, v_a_4613_, v_a_4614_, v_a_4615_, v_a_4616_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object* v_x_4619_){
_start:
{
switch(lean_obj_tag(v_x_4619_))
{
case 7:
{
lean_object* v_body_4620_; 
v_body_4620_ = lean_ctor_get(v_x_4619_, 2);
v_x_4619_ = v_body_4620_;
goto _start;
}
case 3:
{
lean_object* v_u_4622_; lean_object* v___x_4623_; 
v_u_4622_ = lean_ctor_get(v_x_4619_, 0);
lean_inc(v_u_4622_);
v___x_4623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4623_, 0, v_u_4622_);
return v___x_4623_;
}
default: 
{
lean_object* v___x_4624_; 
v___x_4624_ = lean_box(0);
return v___x_4624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object* v_x_4625_){
_start:
{
lean_object* v_res_4626_; 
v_res_4626_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_x_4625_);
lean_dec_ref(v_x_4625_);
return v_res_4626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object* v_xs_4627_, lean_object* v_body_4628_, lean_object* v_x_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_){
_start:
{
lean_object* v_res_4635_; 
v_res_4635_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(v_xs_4627_, v_body_4628_, v_x_4629_, v___y_4630_, v___y_4631_, v___y_4632_, v___y_4633_);
return v_res_4635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object* v_type_4638_, lean_object* v_xs_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_){
_start:
{
switch(lean_obj_tag(v_type_4638_))
{
case 3:
{
lean_object* v_u_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; 
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
lean_dec_ref(v_xs_4639_);
v_u_4645_ = lean_ctor_get(v_type_4638_, 0);
lean_inc(v_u_4645_);
lean_dec_ref(v_type_4638_);
v___x_4646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4646_, 0, v_u_4645_);
v___x_4647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4647_, 0, v___x_4646_);
return v___x_4647_;
}
case 7:
{
lean_object* v_binderName_4648_; lean_object* v_binderType_4649_; lean_object* v_body_4650_; uint8_t v_binderInfo_4651_; lean_object* v___f_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; 
v_binderName_4648_ = lean_ctor_get(v_type_4638_, 0);
lean_inc(v_binderName_4648_);
v_binderType_4649_ = lean_ctor_get(v_type_4638_, 1);
lean_inc_ref(v_binderType_4649_);
v_body_4650_ = lean_ctor_get(v_type_4638_, 2);
lean_inc_ref(v_body_4650_);
v_binderInfo_4651_ = lean_ctor_get_uint8(v_type_4638_, sizeof(void*)*3 + 8);
lean_dec_ref(v_type_4638_);
lean_inc_ref(v_xs_4639_);
v___f_4652_ = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4652_, 0, v_xs_4639_);
lean_closure_set(v___f_4652_, 1, v_body_4650_);
v___x_4653_ = lean_expr_instantiate_rev(v_binderType_4649_, v_xs_4639_);
lean_dec_ref(v_xs_4639_);
lean_dec_ref(v_binderType_4649_);
v___x_4654_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_4648_, v_binderInfo_4651_, v___x_4653_, v___f_4652_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_);
return v___x_4654_;
}
default: 
{
lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4655_ = lean_expr_instantiate_rev(v_type_4638_, v_xs_4639_);
lean_dec_ref(v_xs_4639_);
lean_dec_ref(v_type_4638_);
lean_inc(v_a_4643_);
lean_inc_ref(v_a_4642_);
lean_inc(v_a_4641_);
lean_inc_ref(v_a_4640_);
v___x_4656_ = l_Lean_Meta_whnfD(v___x_4655_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4672_; 
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4659_ = v___x_4656_;
v_isShared_4660_ = v_isSharedCheck_4672_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4656_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4672_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
switch(lean_obj_tag(v_a_4657_))
{
case 3:
{
lean_object* v_u_4661_; lean_object* v___x_4662_; lean_object* v___x_4664_; 
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
v_u_4661_ = lean_ctor_get(v_a_4657_, 0);
lean_inc(v_u_4661_);
lean_dec_ref(v_a_4657_);
v___x_4662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4662_, 0, v_u_4661_);
if (v_isShared_4660_ == 0)
{
lean_ctor_set(v___x_4659_, 0, v___x_4662_);
v___x_4664_ = v___x_4659_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v___x_4662_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
case 7:
{
lean_object* v___x_4666_; 
lean_del_object(v___x_4659_);
v___x_4666_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v_type_4638_ = v_a_4657_;
v_xs_4639_ = v___x_4666_;
goto _start;
}
default: 
{
lean_object* v___x_4668_; lean_object* v___x_4670_; 
lean_dec(v_a_4657_);
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
v___x_4668_ = lean_box(0);
if (v_isShared_4660_ == 0)
{
lean_ctor_set(v___x_4659_, 0, v___x_4668_);
v___x_4670_ = v___x_4659_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v___x_4668_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
}
else
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
v_a_4673_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4656_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4656_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object* v_xs_4681_, lean_object* v_body_4682_, lean_object* v_x_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4689_ = lean_array_push(v_xs_4681_, v_x_4683_);
v___x_4690_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_body_4682_, v___x_4689_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_);
return v___x_4690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object* v_type_4691_, lean_object* v_xs_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4691_, v_xs_4692_, v_a_4693_, v_a_4694_, v_a_4695_, v_a_4696_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object* v_a_4699_, lean_object* v_cache_4700_, lean_object* v_a_x3f_4701_){
_start:
{
lean_object* v___x_4703_; lean_object* v_mctx_4704_; lean_object* v_zetaDeltaFVarIds_4705_; lean_object* v_postponed_4706_; lean_object* v_diag_4707_; lean_object* v___x_4709_; uint8_t v_isShared_4710_; uint8_t v_isSharedCheck_4717_; 
v___x_4703_ = lean_st_ref_take(v_a_4699_);
v_mctx_4704_ = lean_ctor_get(v___x_4703_, 0);
v_zetaDeltaFVarIds_4705_ = lean_ctor_get(v___x_4703_, 2);
v_postponed_4706_ = lean_ctor_get(v___x_4703_, 3);
v_diag_4707_ = lean_ctor_get(v___x_4703_, 4);
v_isSharedCheck_4717_ = !lean_is_exclusive(v___x_4703_);
if (v_isSharedCheck_4717_ == 0)
{
lean_object* v_unused_4718_; 
v_unused_4718_ = lean_ctor_get(v___x_4703_, 1);
lean_dec(v_unused_4718_);
v___x_4709_ = v___x_4703_;
v_isShared_4710_ = v_isSharedCheck_4717_;
goto v_resetjp_4708_;
}
else
{
lean_inc(v_diag_4707_);
lean_inc(v_postponed_4706_);
lean_inc(v_zetaDeltaFVarIds_4705_);
lean_inc(v_mctx_4704_);
lean_dec(v___x_4703_);
v___x_4709_ = lean_box(0);
v_isShared_4710_ = v_isSharedCheck_4717_;
goto v_resetjp_4708_;
}
v_resetjp_4708_:
{
lean_object* v___x_4712_; 
if (v_isShared_4710_ == 0)
{
lean_ctor_set(v___x_4709_, 1, v_cache_4700_);
v___x_4712_ = v___x_4709_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v_mctx_4704_);
lean_ctor_set(v_reuseFailAlloc_4716_, 1, v_cache_4700_);
lean_ctor_set(v_reuseFailAlloc_4716_, 2, v_zetaDeltaFVarIds_4705_);
lean_ctor_set(v_reuseFailAlloc_4716_, 3, v_postponed_4706_);
lean_ctor_set(v_reuseFailAlloc_4716_, 4, v_diag_4707_);
v___x_4712_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___x_4713_ = lean_st_ref_set(v_a_4699_, v___x_4712_);
v___x_4714_ = lean_box(0);
v___x_4715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4714_);
return v___x_4715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object* v_a_4719_, lean_object* v_cache_4720_, lean_object* v_a_x3f_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_4719_, v_cache_4720_, v_a_x3f_4721_);
lean_dec(v_a_x3f_4721_);
lean_dec(v_a_4719_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object* v_type_4724_, lean_object* v_a_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_, lean_object* v_a_4728_){
_start:
{
lean_object* v___x_4730_; 
v___x_4730_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_type_4724_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v___x_4731_; lean_object* v_cache_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4731_ = lean_st_ref_get(v_a_4726_);
v_cache_4732_ = lean_ctor_get(v___x_4731_, 1);
lean_inc_ref(v_cache_4732_);
lean_dec(v___x_4731_);
v___x_4733_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
lean_inc(v_a_4726_);
v___x_4734_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4724_, v___x_4733_, v_a_4725_, v_a_4726_, v_a_4727_, v_a_4728_);
if (lean_obj_tag(v___x_4734_) == 0)
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4751_; 
v_a_4735_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4737_ = v___x_4734_;
v_isShared_4738_ = v_isSharedCheck_4751_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4734_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4751_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
lean_inc(v_a_4735_);
if (v_isShared_4738_ == 0)
{
lean_ctor_set_tag(v___x_4737_, 1);
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
lean_object* v___x_4741_; lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4748_; 
v___x_4741_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_4726_, v_cache_4732_, v___x_4740_);
lean_dec_ref(v___x_4740_);
lean_dec(v_a_4726_);
v_isSharedCheck_4748_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4748_ == 0)
{
lean_object* v_unused_4749_; 
v_unused_4749_ = lean_ctor_get(v___x_4741_, 0);
lean_dec(v_unused_4749_);
v___x_4743_ = v___x_4741_;
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
else
{
lean_dec(v___x_4741_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
lean_object* v___x_4746_; 
if (v_isShared_4744_ == 0)
{
lean_ctor_set(v___x_4743_, 0, v_a_4735_);
v___x_4746_ = v___x_4743_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v_a_4735_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
return v___x_4746_;
}
}
}
}
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4761_; 
v_a_4752_ = lean_ctor_get(v___x_4734_, 0);
lean_inc(v_a_4752_);
lean_dec_ref(v___x_4734_);
v___x_4753_ = lean_box(0);
v___x_4754_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_4726_, v_cache_4732_, v___x_4753_);
lean_dec(v_a_4726_);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4754_);
if (v_isSharedCheck_4761_ == 0)
{
lean_object* v_unused_4762_; 
v_unused_4762_ = lean_ctor_get(v___x_4754_, 0);
lean_dec(v_unused_4762_);
v___x_4756_ = v___x_4754_;
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
else
{
lean_dec(v___x_4754_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
lean_ctor_set_tag(v___x_4756_, 1);
lean_ctor_set(v___x_4756_, 0, v_a_4752_);
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4752_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
else
{
lean_object* v___x_4763_; 
lean_dec(v_a_4728_);
lean_dec_ref(v_a_4727_);
lean_dec(v_a_4726_);
lean_dec_ref(v_a_4725_);
lean_dec_ref(v_type_4724_);
v___x_4763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4730_);
return v___x_4763_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object* v_type_4764_, lean_object* v_a_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_){
_start:
{
lean_object* v_res_4770_; 
v_res_4770_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_);
return v_res_4770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object* v_type_4771_, lean_object* v_a_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_, lean_object* v_a_4775_){
_start:
{
lean_object* v___x_4777_; 
v___x_4777_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4771_, v_a_4772_, v_a_4773_, v_a_4774_, v_a_4775_);
if (lean_obj_tag(v___x_4777_) == 0)
{
lean_object* v_a_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4792_; 
v_a_4778_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4792_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4792_ == 0)
{
v___x_4780_ = v___x_4777_;
v_isShared_4781_ = v_isSharedCheck_4792_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_a_4778_);
lean_dec(v___x_4777_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4792_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
if (lean_obj_tag(v_a_4778_) == 0)
{
uint8_t v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4785_; 
v___x_4782_ = 0;
v___x_4783_ = lean_box(v___x_4782_);
if (v_isShared_4781_ == 0)
{
lean_ctor_set(v___x_4780_, 0, v___x_4783_);
v___x_4785_ = v___x_4780_;
goto v_reusejp_4784_;
}
else
{
lean_object* v_reuseFailAlloc_4786_; 
v_reuseFailAlloc_4786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4786_, 0, v___x_4783_);
v___x_4785_ = v_reuseFailAlloc_4786_;
goto v_reusejp_4784_;
}
v_reusejp_4784_:
{
return v___x_4785_;
}
}
else
{
uint8_t v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4790_; 
lean_dec_ref(v_a_4778_);
v___x_4787_ = 1;
v___x_4788_ = lean_box(v___x_4787_);
if (v_isShared_4781_ == 0)
{
lean_ctor_set(v___x_4780_, 0, v___x_4788_);
v___x_4790_ = v___x_4780_;
goto v_reusejp_4789_;
}
else
{
lean_object* v_reuseFailAlloc_4791_; 
v_reuseFailAlloc_4791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4791_, 0, v___x_4788_);
v___x_4790_ = v_reuseFailAlloc_4791_;
goto v_reusejp_4789_;
}
v_reusejp_4789_:
{
return v___x_4790_;
}
}
}
}
else
{
lean_object* v_a_4793_; lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4800_; 
v_a_4793_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4800_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4800_ == 0)
{
v___x_4795_ = v___x_4777_;
v_isShared_4796_ = v_isSharedCheck_4800_;
goto v_resetjp_4794_;
}
else
{
lean_inc(v_a_4793_);
lean_dec(v___x_4777_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4800_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4798_; 
if (v_isShared_4796_ == 0)
{
v___x_4798_ = v___x_4795_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4799_; 
v_reuseFailAlloc_4799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4799_, 0, v_a_4793_);
v___x_4798_ = v_reuseFailAlloc_4799_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
return v___x_4798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object* v_type_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_){
_start:
{
lean_object* v_res_4807_; 
v_res_4807_ = l_Lean_Meta_isTypeFormerType(v_type_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_);
return v_res_4807_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object* v_x_4808_, lean_object* v_x_4809_){
_start:
{
if (lean_obj_tag(v_x_4808_) == 0)
{
if (lean_obj_tag(v_x_4809_) == 0)
{
uint8_t v___x_4810_; 
v___x_4810_ = 1;
return v___x_4810_;
}
else
{
uint8_t v___x_4811_; 
v___x_4811_ = 0;
return v___x_4811_;
}
}
else
{
if (lean_obj_tag(v_x_4809_) == 0)
{
uint8_t v___x_4812_; 
v___x_4812_ = 0;
return v___x_4812_;
}
else
{
lean_object* v_val_4813_; lean_object* v_val_4814_; uint8_t v___x_4815_; 
v_val_4813_ = lean_ctor_get(v_x_4808_, 0);
v_val_4814_ = lean_ctor_get(v_x_4809_, 0);
v___x_4815_ = lean_level_eq(v_val_4813_, v_val_4814_);
return v___x_4815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object* v_x_4816_, lean_object* v_x_4817_){
_start:
{
uint8_t v_res_4818_; lean_object* v_r_4819_; 
v_res_4818_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_x_4816_, v_x_4817_);
lean_dec(v_x_4817_);
lean_dec(v_x_4816_);
v_r_4819_ = lean_box(v_res_4818_);
return v_r_4819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object* v_type_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_){
_start:
{
lean_object* v___x_4828_; 
v___x_4828_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4822_, v_a_4823_, v_a_4824_, v_a_4825_, v_a_4826_);
if (lean_obj_tag(v___x_4828_) == 0)
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4839_; 
v_a_4829_ = lean_ctor_get(v___x_4828_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4831_ = v___x_4828_;
v_isShared_4832_ = v_isSharedCheck_4839_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4828_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4839_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4833_; uint8_t v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4837_; 
v___x_4833_ = ((lean_object*)(l_Lean_Meta_isPropFormerType___closed__0));
v___x_4834_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_a_4829_, v___x_4833_);
lean_dec(v_a_4829_);
v___x_4835_ = lean_box(v___x_4834_);
if (v_isShared_4832_ == 0)
{
lean_ctor_set(v___x_4831_, 0, v___x_4835_);
v___x_4837_ = v___x_4831_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v___x_4835_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
else
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4847_; 
v_a_4840_ = lean_ctor_get(v___x_4828_, 0);
v_isSharedCheck_4847_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4847_ == 0)
{
v___x_4842_ = v___x_4828_;
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4828_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v___x_4845_; 
if (v_isShared_4843_ == 0)
{
v___x_4845_ = v___x_4842_;
goto v_reusejp_4844_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v_a_4840_);
v___x_4845_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4844_;
}
v_reusejp_4844_:
{
return v___x_4845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object* v_type_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l_Lean_Meta_isPropFormerType(v_type_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object* v_e_4855_, lean_object* v_a_4856_, lean_object* v_a_4857_, lean_object* v_a_4858_, lean_object* v_a_4859_){
_start:
{
lean_object* v___x_4861_; 
lean_inc(v_a_4859_);
lean_inc_ref(v_a_4858_);
lean_inc(v_a_4857_);
lean_inc_ref(v_a_4856_);
v___x_4861_ = lean_infer_type(v_e_4855_, v_a_4856_, v_a_4857_, v_a_4858_, v_a_4859_);
if (lean_obj_tag(v___x_4861_) == 0)
{
lean_object* v_a_4862_; lean_object* v___x_4863_; 
v_a_4862_ = lean_ctor_get(v___x_4861_, 0);
lean_inc(v_a_4862_);
lean_dec_ref(v___x_4861_);
v___x_4863_ = l_Lean_Meta_isTypeFormerType(v_a_4862_, v_a_4856_, v_a_4857_, v_a_4858_, v_a_4859_);
return v___x_4863_;
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec(v_a_4859_);
lean_dec_ref(v_a_4858_);
lean_dec(v_a_4857_);
lean_dec_ref(v_a_4856_);
v_a_4864_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4861_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4861_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object* v_e_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_, lean_object* v_a_4875_, lean_object* v_a_4876_, lean_object* v_a_4877_){
_start:
{
lean_object* v_res_4878_; 
v_res_4878_ = l_Lean_Meta_isTypeFormer(v_e_4872_, v_a_4873_, v_a_4874_, v_a_4875_, v_a_4876_);
return v_res_4878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object* v_type_4879_, lean_object* v_maxFVars_x3f_4880_, lean_object* v_k_4881_, uint8_t v_cleanupAnnotations_4882_, uint8_t v_whnfType_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_){
_start:
{
lean_object* v___f_4889_; lean_object* v___x_4890_; 
v___f_4889_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4889_, 0, v_k_4881_);
v___x_4890_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4879_, v_maxFVars_x3f_4880_, v___f_4889_, v_cleanupAnnotations_4882_, v_whnfType_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_);
if (lean_obj_tag(v___x_4890_) == 0)
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_4898_; 
v_a_4891_ = lean_ctor_get(v___x_4890_, 0);
v_isSharedCheck_4898_ = !lean_is_exclusive(v___x_4890_);
if (v_isSharedCheck_4898_ == 0)
{
v___x_4893_ = v___x_4890_;
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v___x_4890_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4896_; 
if (v_isShared_4894_ == 0)
{
v___x_4896_ = v___x_4893_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v_a_4891_);
v___x_4896_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
return v___x_4896_;
}
}
}
else
{
lean_object* v_a_4899_; lean_object* v___x_4901_; uint8_t v_isShared_4902_; uint8_t v_isSharedCheck_4906_; 
v_a_4899_ = lean_ctor_get(v___x_4890_, 0);
v_isSharedCheck_4906_ = !lean_is_exclusive(v___x_4890_);
if (v_isSharedCheck_4906_ == 0)
{
v___x_4901_ = v___x_4890_;
v_isShared_4902_ = v_isSharedCheck_4906_;
goto v_resetjp_4900_;
}
else
{
lean_inc(v_a_4899_);
lean_dec(v___x_4890_);
v___x_4901_ = lean_box(0);
v_isShared_4902_ = v_isSharedCheck_4906_;
goto v_resetjp_4900_;
}
v_resetjp_4900_:
{
lean_object* v___x_4904_; 
if (v_isShared_4902_ == 0)
{
v___x_4904_ = v___x_4901_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_a_4899_);
v___x_4904_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
return v___x_4904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object* v_type_4907_, lean_object* v_maxFVars_x3f_4908_, lean_object* v_k_4909_, lean_object* v_cleanupAnnotations_4910_, lean_object* v_whnfType_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4917_; uint8_t v_whnfType_boxed_4918_; lean_object* v_res_4919_; 
v_cleanupAnnotations_boxed_4917_ = lean_unbox(v_cleanupAnnotations_4910_);
v_whnfType_boxed_4918_ = lean_unbox(v_whnfType_4911_);
v_res_4919_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_4907_, v_maxFVars_x3f_4908_, v_k_4909_, v_cleanupAnnotations_boxed_4917_, v_whnfType_boxed_4918_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object* v_00_u03b1_4920_, lean_object* v_type_4921_, lean_object* v_maxFVars_x3f_4922_, lean_object* v_k_4923_, uint8_t v_cleanupAnnotations_4924_, uint8_t v_whnfType_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_){
_start:
{
lean_object* v___x_4931_; 
v___x_4931_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_4921_, v_maxFVars_x3f_4922_, v_k_4923_, v_cleanupAnnotations_4924_, v_whnfType_4925_, v___y_4926_, v___y_4927_, v___y_4928_, v___y_4929_);
return v___x_4931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object* v_00_u03b1_4932_, lean_object* v_type_4933_, lean_object* v_maxFVars_x3f_4934_, lean_object* v_k_4935_, lean_object* v_cleanupAnnotations_4936_, lean_object* v_whnfType_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4943_; uint8_t v_whnfType_boxed_4944_; lean_object* v_res_4945_; 
v_cleanupAnnotations_boxed_4943_ = lean_unbox(v_cleanupAnnotations_4936_);
v_whnfType_boxed_4944_ = lean_unbox(v_whnfType_4937_);
v_res_4945_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(v_00_u03b1_4932_, v_type_4933_, v_maxFVars_x3f_4934_, v_k_4935_, v_cleanupAnnotations_boxed_4943_, v_whnfType_boxed_4944_, v___y_4938_, v___y_4939_, v___y_4940_, v___y_4941_);
return v_res_4945_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object* v_a_4946_, lean_object* v_as_4947_, size_t v_i_4948_, size_t v_stop_4949_){
_start:
{
uint8_t v___x_4950_; 
v___x_4950_ = lean_usize_dec_eq(v_i_4948_, v_stop_4949_);
if (v___x_4950_ == 0)
{
lean_object* v___x_4951_; uint8_t v___x_4952_; 
v___x_4951_ = lean_array_uget_borrowed(v_as_4947_, v_i_4948_);
v___x_4952_ = lean_expr_eqv(v_a_4946_, v___x_4951_);
if (v___x_4952_ == 0)
{
size_t v___x_4953_; size_t v___x_4954_; 
v___x_4953_ = ((size_t)1ULL);
v___x_4954_ = lean_usize_add(v_i_4948_, v___x_4953_);
v_i_4948_ = v___x_4954_;
goto _start;
}
else
{
return v___x_4952_;
}
}
else
{
uint8_t v___x_4956_; 
v___x_4956_ = 0;
return v___x_4956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object* v_a_4957_, lean_object* v_as_4958_, lean_object* v_i_4959_, lean_object* v_stop_4960_){
_start:
{
size_t v_i_boxed_4961_; size_t v_stop_boxed_4962_; uint8_t v_res_4963_; lean_object* v_r_4964_; 
v_i_boxed_4961_ = lean_unbox_usize(v_i_4959_);
lean_dec(v_i_4959_);
v_stop_boxed_4962_ = lean_unbox_usize(v_stop_4960_);
lean_dec(v_stop_4960_);
v_res_4963_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_4957_, v_as_4958_, v_i_boxed_4961_, v_stop_boxed_4962_);
lean_dec_ref(v_as_4958_);
lean_dec_ref(v_a_4957_);
v_r_4964_ = lean_box(v_res_4963_);
return v_r_4964_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object* v_as_4965_, lean_object* v_a_4966_){
_start:
{
lean_object* v___x_4967_; lean_object* v___x_4968_; uint8_t v___x_4969_; 
v___x_4967_ = lean_unsigned_to_nat(0u);
v___x_4968_ = lean_array_get_size(v_as_4965_);
v___x_4969_ = lean_nat_dec_lt(v___x_4967_, v___x_4968_);
if (v___x_4969_ == 0)
{
return v___x_4969_;
}
else
{
if (v___x_4969_ == 0)
{
return v___x_4969_;
}
else
{
size_t v___x_4970_; size_t v___x_4971_; uint8_t v___x_4972_; 
v___x_4970_ = ((size_t)0ULL);
v___x_4971_ = lean_usize_of_nat(v___x_4968_);
v___x_4972_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_4966_, v_as_4965_, v___x_4970_, v___x_4971_);
return v___x_4972_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object* v_as_4973_, lean_object* v_a_4974_){
_start:
{
uint8_t v_res_4975_; lean_object* v_r_4976_; 
v_res_4975_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_as_4973_, v_a_4974_);
lean_dec_ref(v_a_4974_);
lean_dec_ref(v_as_4973_);
v_r_4976_ = lean_box(v_res_4975_);
return v_r_4976_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object* v_xs_4977_, lean_object* v_e_4978_){
_start:
{
uint8_t v___x_4979_; lean_object* v_d_4981_; lean_object* v_b_4982_; 
v___x_4979_ = l_Lean_Expr_hasFVar(v_e_4978_);
if (v___x_4979_ == 0)
{
lean_dec_ref(v_e_4978_);
return v___x_4979_;
}
else
{
switch(lean_obj_tag(v_e_4978_))
{
case 7:
{
lean_object* v_binderType_4985_; lean_object* v_body_4986_; 
v_binderType_4985_ = lean_ctor_get(v_e_4978_, 1);
lean_inc_ref(v_binderType_4985_);
v_body_4986_ = lean_ctor_get(v_e_4978_, 2);
lean_inc_ref(v_body_4986_);
lean_dec_ref(v_e_4978_);
v_d_4981_ = v_binderType_4985_;
v_b_4982_ = v_body_4986_;
goto v___jp_4980_;
}
case 6:
{
lean_object* v_binderType_4987_; lean_object* v_body_4988_; 
v_binderType_4987_ = lean_ctor_get(v_e_4978_, 1);
lean_inc_ref(v_binderType_4987_);
v_body_4988_ = lean_ctor_get(v_e_4978_, 2);
lean_inc_ref(v_body_4988_);
lean_dec_ref(v_e_4978_);
v_d_4981_ = v_binderType_4987_;
v_b_4982_ = v_body_4988_;
goto v___jp_4980_;
}
case 10:
{
lean_object* v_expr_4989_; 
v_expr_4989_ = lean_ctor_get(v_e_4978_, 1);
lean_inc_ref(v_expr_4989_);
lean_dec_ref(v_e_4978_);
v_e_4978_ = v_expr_4989_;
goto _start;
}
case 8:
{
lean_object* v_type_4991_; lean_object* v_value_4992_; lean_object* v_body_4993_; uint8_t v___x_4994_; 
v_type_4991_ = lean_ctor_get(v_e_4978_, 1);
lean_inc_ref(v_type_4991_);
v_value_4992_ = lean_ctor_get(v_e_4978_, 2);
lean_inc_ref(v_value_4992_);
v_body_4993_ = lean_ctor_get(v_e_4978_, 3);
lean_inc_ref(v_body_4993_);
lean_dec_ref(v_e_4978_);
v___x_4994_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_4977_, v_type_4991_);
if (v___x_4994_ == 0)
{
uint8_t v___x_4995_; 
v___x_4995_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_4977_, v_value_4992_);
if (v___x_4995_ == 0)
{
v_e_4978_ = v_body_4993_;
goto _start;
}
else
{
lean_dec_ref(v_body_4993_);
return v___x_4979_;
}
}
else
{
lean_dec_ref(v_body_4993_);
lean_dec_ref(v_value_4992_);
return v___x_4979_;
}
}
case 5:
{
lean_object* v_fn_4997_; lean_object* v_arg_4998_; uint8_t v___x_4999_; 
v_fn_4997_ = lean_ctor_get(v_e_4978_, 0);
lean_inc_ref(v_fn_4997_);
v_arg_4998_ = lean_ctor_get(v_e_4978_, 1);
lean_inc_ref(v_arg_4998_);
lean_dec_ref(v_e_4978_);
v___x_4999_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_4977_, v_fn_4997_);
if (v___x_4999_ == 0)
{
v_e_4978_ = v_arg_4998_;
goto _start;
}
else
{
lean_dec_ref(v_arg_4998_);
return v___x_4979_;
}
}
case 11:
{
lean_object* v_struct_5001_; 
v_struct_5001_ = lean_ctor_get(v_e_4978_, 2);
lean_inc_ref(v_struct_5001_);
lean_dec_ref(v_e_4978_);
v_e_4978_ = v_struct_5001_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_5003_; lean_object* v___x_5004_; uint8_t v___x_5005_; 
v_fvarId_5003_ = lean_ctor_get(v_e_4978_, 0);
lean_inc(v_fvarId_5003_);
lean_dec_ref(v_e_4978_);
v___x_5004_ = l_Lean_Expr_fvar___override(v_fvarId_5003_);
v___x_5005_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_xs_4977_, v___x_5004_);
lean_dec_ref(v___x_5004_);
return v___x_5005_;
}
default: 
{
uint8_t v___x_5006_; 
lean_dec_ref(v_e_4978_);
v___x_5006_ = 0;
return v___x_5006_;
}
}
}
v___jp_4980_:
{
uint8_t v___x_4983_; 
v___x_4983_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_4977_, v_d_4981_);
if (v___x_4983_ == 0)
{
v_e_4978_ = v_b_4982_;
goto _start;
}
else
{
lean_dec_ref(v_b_4982_);
return v___x_4979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object* v_xs_5007_, lean_object* v_e_5008_){
_start:
{
uint8_t v_res_5009_; lean_object* v_r_5010_; 
v_res_5009_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5007_, v_e_5008_);
lean_dec_ref(v_xs_5007_);
v_r_5010_ = lean_box(v_res_5009_);
return v_r_5010_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1(void){
_start:
{
lean_object* v___x_5012_; lean_object* v___x_5013_; 
v___x_5012_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0));
v___x_5013_ = l_Lean_stringToMessageData(v___x_5012_);
return v___x_5013_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2));
v___x_5016_ = l_Lean_stringToMessageData(v___x_5015_);
return v___x_5016_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object* v_xs_5017_, lean_object* v_type_5018_, lean_object* v_as_5019_, size_t v_sz_5020_, size_t v_i_5021_, lean_object* v_b_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_){
_start:
{
lean_object* v_a_5029_; uint8_t v___x_5033_; 
v___x_5033_ = lean_usize_dec_lt(v_i_5021_, v_sz_5020_);
if (v___x_5033_ == 0)
{
lean_object* v___x_5034_; 
lean_dec_ref(v_type_5018_);
v___x_5034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5034_, 0, v_b_5022_);
return v___x_5034_;
}
else
{
lean_object* v___x_5035_; lean_object* v_a_5036_; uint8_t v___x_5037_; 
v___x_5035_ = lean_box(0);
v_a_5036_ = lean_array_uget_borrowed(v_as_5019_, v_i_5021_);
lean_inc(v_a_5036_);
v___x_5037_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5017_, v_a_5036_);
if (v___x_5037_ == 0)
{
v_a_5029_ = v___x_5035_;
goto v___jp_5028_;
}
else
{
lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; 
v___x_5038_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1);
lean_inc(v_a_5036_);
v___x_5039_ = l_Lean_MessageData_ofExpr(v_a_5036_);
v___x_5040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5040_, 0, v___x_5038_);
lean_ctor_set(v___x_5040_, 1, v___x_5039_);
v___x_5041_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3);
v___x_5042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5040_);
lean_ctor_set(v___x_5042_, 1, v___x_5041_);
lean_inc_ref(v_type_5018_);
v___x_5043_ = l_Lean_MessageData_ofExpr(v_type_5018_);
v___x_5044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5044_, 0, v___x_5042_);
lean_ctor_set(v___x_5044_, 1, v___x_5043_);
v___x_5045_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5044_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_);
if (lean_obj_tag(v___x_5045_) == 0)
{
lean_dec_ref(v___x_5045_);
v_a_5029_ = v___x_5035_;
goto v___jp_5028_;
}
else
{
lean_dec_ref(v_type_5018_);
return v___x_5045_;
}
}
}
v___jp_5028_:
{
size_t v___x_5030_; size_t v___x_5031_; 
v___x_5030_ = ((size_t)1ULL);
v___x_5031_ = lean_usize_add(v_i_5021_, v___x_5030_);
v_i_5021_ = v___x_5031_;
v_b_5022_ = v_a_5029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object* v_xs_5046_, lean_object* v_type_5047_, lean_object* v_as_5048_, lean_object* v_sz_5049_, lean_object* v_i_5050_, lean_object* v_b_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_){
_start:
{
size_t v_sz_boxed_5057_; size_t v_i_boxed_5058_; lean_object* v_res_5059_; 
v_sz_boxed_5057_ = lean_unbox_usize(v_sz_5049_);
lean_dec(v_sz_5049_);
v_i_boxed_5058_ = lean_unbox_usize(v_i_5050_);
lean_dec(v_i_5050_);
v_res_5059_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5046_, v_type_5047_, v_as_5048_, v_sz_boxed_5057_, v_i_boxed_5058_, v_b_5051_, v___y_5052_, v___y_5053_, v___y_5054_, v___y_5055_);
lean_dec(v___y_5055_);
lean_dec_ref(v___y_5054_);
lean_dec(v___y_5053_);
lean_dec_ref(v___y_5052_);
lean_dec_ref(v_as_5048_);
lean_dec_ref(v_xs_5046_);
return v_res_5059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t v_sz_5060_, size_t v_i_5061_, lean_object* v_bs_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_){
_start:
{
uint8_t v___x_5068_; 
v___x_5068_ = lean_usize_dec_lt(v_i_5061_, v_sz_5060_);
if (v___x_5068_ == 0)
{
lean_object* v___x_5069_; 
lean_dec(v___y_5066_);
lean_dec_ref(v___y_5065_);
lean_dec(v___y_5064_);
lean_dec_ref(v___y_5063_);
v___x_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5069_, 0, v_bs_5062_);
return v___x_5069_;
}
else
{
lean_object* v_v_5070_; lean_object* v___x_5071_; 
v_v_5070_ = lean_array_uget_borrowed(v_bs_5062_, v_i_5061_);
lean_inc(v___y_5066_);
lean_inc_ref(v___y_5065_);
lean_inc(v___y_5064_);
lean_inc_ref(v___y_5063_);
lean_inc(v_v_5070_);
v___x_5071_ = lean_infer_type(v_v_5070_, v___y_5063_, v___y_5064_, v___y_5065_, v___y_5066_);
if (lean_obj_tag(v___x_5071_) == 0)
{
lean_object* v_a_5072_; lean_object* v___x_5073_; lean_object* v_bs_x27_5074_; size_t v___x_5075_; size_t v___x_5076_; lean_object* v___x_5077_; 
v_a_5072_ = lean_ctor_get(v___x_5071_, 0);
lean_inc(v_a_5072_);
lean_dec_ref(v___x_5071_);
v___x_5073_ = lean_unsigned_to_nat(0u);
v_bs_x27_5074_ = lean_array_uset(v_bs_5062_, v_i_5061_, v___x_5073_);
v___x_5075_ = ((size_t)1ULL);
v___x_5076_ = lean_usize_add(v_i_5061_, v___x_5075_);
v___x_5077_ = lean_array_uset(v_bs_x27_5074_, v_i_5061_, v_a_5072_);
v_i_5061_ = v___x_5076_;
v_bs_5062_ = v___x_5077_;
goto _start;
}
else
{
lean_object* v_a_5079_; lean_object* v___x_5081_; uint8_t v_isShared_5082_; uint8_t v_isSharedCheck_5086_; 
lean_dec(v___y_5066_);
lean_dec_ref(v___y_5065_);
lean_dec(v___y_5064_);
lean_dec_ref(v___y_5063_);
lean_dec_ref(v_bs_5062_);
v_a_5079_ = lean_ctor_get(v___x_5071_, 0);
v_isSharedCheck_5086_ = !lean_is_exclusive(v___x_5071_);
if (v_isSharedCheck_5086_ == 0)
{
v___x_5081_ = v___x_5071_;
v_isShared_5082_ = v_isSharedCheck_5086_;
goto v_resetjp_5080_;
}
else
{
lean_inc(v_a_5079_);
lean_dec(v___x_5071_);
v___x_5081_ = lean_box(0);
v_isShared_5082_ = v_isSharedCheck_5086_;
goto v_resetjp_5080_;
}
v_resetjp_5080_:
{
lean_object* v___x_5084_; 
if (v_isShared_5082_ == 0)
{
v___x_5084_ = v___x_5081_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5085_; 
v_reuseFailAlloc_5085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5085_, 0, v_a_5079_);
v___x_5084_ = v_reuseFailAlloc_5085_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
return v___x_5084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object* v_sz_5087_, lean_object* v_i_5088_, lean_object* v_bs_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_){
_start:
{
size_t v_sz_boxed_5095_; size_t v_i_boxed_5096_; lean_object* v_res_5097_; 
v_sz_boxed_5095_ = lean_unbox_usize(v_sz_5087_);
lean_dec(v_sz_5087_);
v_i_boxed_5096_ = lean_unbox_usize(v_i_5088_);
lean_dec(v_i_5088_);
v_res_5097_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_boxed_5095_, v_i_boxed_5096_, v_bs_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_);
return v_res_5097_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5099_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__0));
v___x_5100_ = l_Lean_stringToMessageData(v___x_5099_);
return v___x_5100_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5102_; lean_object* v___x_5103_; 
v___x_5102_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__2));
v___x_5103_ = l_Lean_stringToMessageData(v___x_5102_);
return v___x_5103_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5105_; lean_object* v___x_5106_; 
v___x_5105_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__4));
v___x_5106_ = l_Lean_stringToMessageData(v___x_5105_);
return v___x_5106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object* v_type_5107_, lean_object* v_n_5108_, lean_object* v_xs_5109_, lean_object* v_x_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_){
_start:
{
lean_object* v___x_5140_; uint8_t v___x_5141_; 
v___x_5140_ = lean_array_get_size(v_xs_5109_);
v___x_5141_ = lean_nat_dec_eq(v___x_5140_, v_n_5108_);
if (v___x_5141_ == 0)
{
lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v_a_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5161_; 
lean_dec_ref(v_xs_5109_);
v___x_5142_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__1, &l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1);
v___x_5143_ = l_Lean_MessageData_ofExpr(v_type_5107_);
v___x_5144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5144_, 0, v___x_5142_);
lean_ctor_set(v___x_5144_, 1, v___x_5143_);
v___x_5145_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__3, &l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3);
v___x_5146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5146_, 0, v___x_5144_);
lean_ctor_set(v___x_5146_, 1, v___x_5145_);
v___x_5147_ = l_Nat_reprFast(v_n_5108_);
v___x_5148_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5148_, 0, v___x_5147_);
v___x_5149_ = l_Lean_MessageData_ofFormat(v___x_5148_);
v___x_5150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5150_, 0, v___x_5146_);
lean_ctor_set(v___x_5150_, 1, v___x_5149_);
v___x_5151_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__5, &l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5);
v___x_5152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5152_, 0, v___x_5150_);
lean_ctor_set(v___x_5152_, 1, v___x_5151_);
v___x_5153_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5152_, v___y_5111_, v___y_5112_, v___y_5113_, v___y_5114_);
lean_dec(v___y_5114_);
lean_dec_ref(v___y_5113_);
lean_dec(v___y_5112_);
lean_dec_ref(v___y_5111_);
v_a_5154_ = lean_ctor_get(v___x_5153_, 0);
v_isSharedCheck_5161_ = !lean_is_exclusive(v___x_5153_);
if (v_isSharedCheck_5161_ == 0)
{
v___x_5156_ = v___x_5153_;
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
else
{
lean_inc(v_a_5154_);
lean_dec(v___x_5153_);
v___x_5156_ = lean_box(0);
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
v_resetjp_5155_:
{
lean_object* v___x_5159_; 
if (v_isShared_5157_ == 0)
{
v___x_5159_ = v___x_5156_;
goto v_reusejp_5158_;
}
else
{
lean_object* v_reuseFailAlloc_5160_; 
v_reuseFailAlloc_5160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5160_, 0, v_a_5154_);
v___x_5159_ = v_reuseFailAlloc_5160_;
goto v_reusejp_5158_;
}
v_reusejp_5158_:
{
return v___x_5159_;
}
}
}
else
{
lean_dec(v_n_5108_);
goto v___jp_5116_;
}
v___jp_5116_:
{
size_t v_sz_5117_; size_t v___x_5118_; lean_object* v___x_5119_; 
v_sz_5117_ = lean_array_size(v_xs_5109_);
v___x_5118_ = ((size_t)0ULL);
lean_inc(v___y_5114_);
lean_inc_ref(v___y_5113_);
lean_inc(v___y_5112_);
lean_inc_ref(v___y_5111_);
lean_inc_ref(v_xs_5109_);
v___x_5119_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_5117_, v___x_5118_, v_xs_5109_, v___y_5111_, v___y_5112_, v___y_5113_, v___y_5114_);
if (lean_obj_tag(v___x_5119_) == 0)
{
lean_object* v_a_5120_; lean_object* v___x_5121_; size_t v_sz_5122_; lean_object* v___x_5123_; 
v_a_5120_ = lean_ctor_get(v___x_5119_, 0);
lean_inc(v_a_5120_);
lean_dec_ref(v___x_5119_);
v___x_5121_ = lean_box(0);
v_sz_5122_ = lean_array_size(v_a_5120_);
v___x_5123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5109_, v_type_5107_, v_a_5120_, v_sz_5122_, v___x_5118_, v___x_5121_, v___y_5111_, v___y_5112_, v___y_5113_, v___y_5114_);
lean_dec(v___y_5114_);
lean_dec_ref(v___y_5113_);
lean_dec(v___y_5112_);
lean_dec_ref(v___y_5111_);
lean_dec_ref(v_xs_5109_);
if (lean_obj_tag(v___x_5123_) == 0)
{
lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5130_; 
v_isSharedCheck_5130_ = !lean_is_exclusive(v___x_5123_);
if (v_isSharedCheck_5130_ == 0)
{
lean_object* v_unused_5131_; 
v_unused_5131_ = lean_ctor_get(v___x_5123_, 0);
lean_dec(v_unused_5131_);
v___x_5125_ = v___x_5123_;
v_isShared_5126_ = v_isSharedCheck_5130_;
goto v_resetjp_5124_;
}
else
{
lean_dec(v___x_5123_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5130_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v___x_5128_; 
if (v_isShared_5126_ == 0)
{
lean_ctor_set(v___x_5125_, 0, v_a_5120_);
v___x_5128_ = v___x_5125_;
goto v_reusejp_5127_;
}
else
{
lean_object* v_reuseFailAlloc_5129_; 
v_reuseFailAlloc_5129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5129_, 0, v_a_5120_);
v___x_5128_ = v_reuseFailAlloc_5129_;
goto v_reusejp_5127_;
}
v_reusejp_5127_:
{
return v___x_5128_;
}
}
}
else
{
lean_object* v_a_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5139_; 
lean_dec(v_a_5120_);
v_a_5132_ = lean_ctor_get(v___x_5123_, 0);
v_isSharedCheck_5139_ = !lean_is_exclusive(v___x_5123_);
if (v_isSharedCheck_5139_ == 0)
{
v___x_5134_ = v___x_5123_;
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_a_5132_);
lean_dec(v___x_5123_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v___x_5137_; 
if (v_isShared_5135_ == 0)
{
v___x_5137_ = v___x_5134_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5138_; 
v_reuseFailAlloc_5138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5138_, 0, v_a_5132_);
v___x_5137_ = v_reuseFailAlloc_5138_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
return v___x_5137_;
}
}
}
}
else
{
lean_dec(v___y_5114_);
lean_dec_ref(v___y_5113_);
lean_dec(v___y_5112_);
lean_dec_ref(v___y_5111_);
lean_dec_ref(v_xs_5109_);
lean_dec_ref(v_type_5107_);
return v___x_5119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object* v_type_5162_, lean_object* v_n_5163_, lean_object* v_xs_5164_, lean_object* v_x_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_){
_start:
{
lean_object* v_res_5171_; 
v_res_5171_ = l_Lean_Meta_arrowDomainsN___lam__0(v_type_5162_, v_n_5163_, v_xs_5164_, v_x_5165_, v___y_5166_, v___y_5167_, v___y_5168_, v___y_5169_);
lean_dec_ref(v_x_5165_);
return v_res_5171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object* v_n_5172_, lean_object* v_type_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_){
_start:
{
lean_object* v___f_5179_; lean_object* v___x_5180_; uint8_t v___x_5181_; lean_object* v___x_5182_; 
lean_inc(v_n_5172_);
lean_inc_ref(v_type_5173_);
v___f_5179_ = lean_alloc_closure((void*)(l_Lean_Meta_arrowDomainsN___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5179_, 0, v_type_5173_);
lean_closure_set(v___f_5179_, 1, v_n_5172_);
v___x_5180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5180_, 0, v_n_5172_);
v___x_5181_ = 0;
v___x_5182_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5173_, v___x_5180_, v___f_5179_, v___x_5181_, v___x_5181_, v_a_5174_, v_a_5175_, v_a_5176_, v_a_5177_);
return v___x_5182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object* v_n_5183_, lean_object* v_type_5184_, lean_object* v_a_5185_, lean_object* v_a_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_){
_start:
{
lean_object* v_res_5190_; 
v_res_5190_ = l_Lean_Meta_arrowDomainsN(v_n_5183_, v_type_5184_, v_a_5185_, v_a_5186_, v_a_5187_, v_a_5188_);
return v_res_5190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object* v_n_5191_, lean_object* v_e_5192_, lean_object* v_a_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_, lean_object* v_a_5196_){
_start:
{
lean_object* v___x_5198_; 
lean_inc(v_a_5196_);
lean_inc_ref(v_a_5195_);
lean_inc(v_a_5194_);
lean_inc_ref(v_a_5193_);
v___x_5198_ = lean_infer_type(v_e_5192_, v_a_5193_, v_a_5194_, v_a_5195_, v_a_5196_);
if (lean_obj_tag(v___x_5198_) == 0)
{
lean_object* v_a_5199_; lean_object* v___x_5200_; 
v_a_5199_ = lean_ctor_get(v___x_5198_, 0);
lean_inc(v_a_5199_);
lean_dec_ref(v___x_5198_);
v___x_5200_ = l_Lean_Meta_arrowDomainsN(v_n_5191_, v_a_5199_, v_a_5193_, v_a_5194_, v_a_5195_, v_a_5196_);
return v___x_5200_;
}
else
{
lean_object* v_a_5201_; lean_object* v___x_5203_; uint8_t v_isShared_5204_; uint8_t v_isSharedCheck_5208_; 
lean_dec(v_a_5196_);
lean_dec_ref(v_a_5195_);
lean_dec(v_a_5194_);
lean_dec_ref(v_a_5193_);
lean_dec(v_n_5191_);
v_a_5201_ = lean_ctor_get(v___x_5198_, 0);
v_isSharedCheck_5208_ = !lean_is_exclusive(v___x_5198_);
if (v_isSharedCheck_5208_ == 0)
{
v___x_5203_ = v___x_5198_;
v_isShared_5204_ = v_isSharedCheck_5208_;
goto v_resetjp_5202_;
}
else
{
lean_inc(v_a_5201_);
lean_dec(v___x_5198_);
v___x_5203_ = lean_box(0);
v_isShared_5204_ = v_isSharedCheck_5208_;
goto v_resetjp_5202_;
}
v_resetjp_5202_:
{
lean_object* v___x_5206_; 
if (v_isShared_5204_ == 0)
{
v___x_5206_ = v___x_5203_;
goto v_reusejp_5205_;
}
else
{
lean_object* v_reuseFailAlloc_5207_; 
v_reuseFailAlloc_5207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5207_, 0, v_a_5201_);
v___x_5206_ = v_reuseFailAlloc_5207_;
goto v_reusejp_5205_;
}
v_reusejp_5205_:
{
return v___x_5206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object* v_n_5209_, lean_object* v_e_5210_, lean_object* v_a_5211_, lean_object* v_a_5212_, lean_object* v_a_5213_, lean_object* v_a_5214_, lean_object* v_a_5215_){
_start:
{
lean_object* v_res_5216_; 
v_res_5216_ = l_Lean_Meta_inferArgumentTypesN(v_n_5209_, v_e_5210_, v_a_5211_, v_a_5212_, v_a_5213_, v_a_5214_);
return v_res_5216_;
}
}
lean_object* runtime_initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_InferType(builtin);
}
#ifdef __cplusplus
}
#endif
