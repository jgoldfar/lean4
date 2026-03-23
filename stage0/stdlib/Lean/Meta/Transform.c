// Lean compiler output
// Module: Lean.Meta.Transform
// Imports: public import Lean.Meta.FunInfo import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkForallFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_patternWithRef_x3f(lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Core_liftIOCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_inaccessible_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedTransformStep_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedTransformStep_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTransformStep_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedTransformStep_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep;
static const lean_string_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.TransformStep.done"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__0 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__1 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__2 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__3;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__4;
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TransformStep.visit"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__5 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__6 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__7 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__7_value;
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.TransformStep.continue"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__8 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__9 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__10 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprTransformStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprTransformStep_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprTransformStep___closed__0 = (const lean_object*)&l_Lean_instReprTransformStep___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprTransformStep = (const lean_object*)&l_Lean_instReprTransformStep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Core_betaReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Core_betaReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Core_betaReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Core_betaReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_betaReduce___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Core_betaReduce___closed__0 = (const lean_object*)&l_Lean_Core_betaReduce___closed__0_value;
static const lean_closure_object l_Lean_Core_betaReduce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_betaReduce___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Core_betaReduce___closed__1 = (const lean_object*)&l_Lean_Core_betaReduce___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object**);
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_zetaReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_zetaReduce___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_zetaReduce___closed__0 = (const lean_object*)&l_Lean_Meta_zetaReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__0 = (const lean_object*)&l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_value;
static const lean_closure_object l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__1 = (const lean_object*)&l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_erasePatternRefAnnotations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_erasePatternRefAnnotations___closed__0 = (const lean_object*)&l_Lean_Meta_erasePatternRefAnnotations___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_TransformStep_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_e_x3f_9_; lean_object* v___x_10_; 
v_e_x3f_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_e_x3f_9_);
lean_dec_ref(v_t_7_);
v___x_10_ = lean_apply_1(v_k_8_, v_e_x3f_9_);
return v___x_10_;
}
else
{
lean_object* v_e_11_; lean_object* v___x_12_; 
v_e_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_e_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_e_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_TransformStep_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_TransformStep_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object* v_t_25_, lean_object* v_done_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_TransformStep_ctorElim___redArg(v_t_25_, v_done_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_done_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_TransformStep_ctorElim___redArg(v_t_29_, v_done_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object* v_t_33_, lean_object* v_visit_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_TransformStep_ctorElim___redArg(v_t_33_, v_visit_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_visit_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_TransformStep_ctorElim___redArg(v_t_37_, v_visit_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object* v_t_41_, lean_object* v_continue_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_TransformStep_ctorElim___redArg(v_t_41_, v_continue_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_continue_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_TransformStep_ctorElim___redArg(v_t_45_, v_continue_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__2(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_box(0);
v___x_53_ = ((lean_object*)(l_Lean_instInhabitedTransformStep_default___closed__1));
v___x_54_ = l_Lean_Expr_const___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__3(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__2, &l_Lean_instInhabitedTransformStep_default___closed__2_once, _init_l_Lean_instInhabitedTransformStep_default___closed__2);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__3, &l_Lean_instInhabitedTransformStep_default___closed__3_once, _init_l_Lean_instInhabitedTransformStep_default___closed__3);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_instInhabitedTransformStep_default;
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_object* v___x_67_; 
v___x_67_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1));
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_val_68_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_val_68_);
lean_dec_ref(v_x_65_);
v___x_69_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3));
v___x_70_ = lean_unsigned_to_nat(1024u);
v___x_71_ = l_Lean_instReprExpr_repr(v_val_68_, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_69_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_x_66_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_x_74_, v_x_75_);
lean_dec(v_x_75_);
return v_res_76_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__3(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(2u);
v___x_84_ = lean_nat_to_int(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__4(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_to_int(v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object* v_x_99_, lean_object* v_prec_100_){
_start:
{
switch(lean_obj_tag(v_x_99_))
{
case 0:
{
lean_object* v_e_101_; lean_object* v___y_103_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_e_101_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_101_);
lean_dec_ref(v_x_99_);
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_100_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_103_ = v___x_114_;
goto v___jp_102_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_103_ = v___x_115_;
goto v___jp_102_;
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_104_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__2));
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = l_Lean_instReprExpr_repr(v_e_101_, v___x_105_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_104_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_103_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = l_Repr_addAppParen(v___x_110_, v_prec_100_);
return v___x_111_;
}
}
case 1:
{
lean_object* v_e_116_; lean_object* v___y_118_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_e_116_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_116_);
lean_dec_ref(v_x_99_);
v___x_127_ = lean_unsigned_to_nat(1024u);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_prec_100_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_118_ = v___x_129_;
goto v___jp_117_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_118_ = v___x_130_;
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_119_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__7));
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = l_Lean_instReprExpr_repr(v_e_116_, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_123_, 0, v___y_118_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = 0;
v___x_125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_125_, sizeof(void*)*1, v___x_124_);
v___x_126_ = l_Repr_addAppParen(v___x_125_, v_prec_100_);
return v___x_126_;
}
}
default: 
{
lean_object* v_e_x3f_131_; lean_object* v___y_133_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_e_x3f_131_ = lean_ctor_get(v_x_99_, 0);
lean_inc(v_e_x3f_131_);
lean_dec_ref(v_x_99_);
v___x_142_ = lean_unsigned_to_nat(1024u);
v___x_143_ = lean_nat_dec_le(v___x_142_, v_prec_100_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_133_ = v___x_144_;
goto v___jp_132_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_134_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__10));
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_e_x3f_131_, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_133_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_100_);
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object* v_x_146_, lean_object* v_prec_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_instReprTransformStep_repr(v_x_146_, v_prec_147_);
lean_dec(v_prec_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object* v_toApplicative_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_toPure_154_; lean_object* v___x_155_; 
v_toPure_154_ = lean_ctor_get(v_toApplicative_151_, 1);
lean_inc(v_toPure_154_);
lean_dec_ref(v_toApplicative_151_);
v___x_155_ = lean_apply_2(v_toPure_154_, lean_box(0), v_a_152_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v_e_158_, lean_object* v_a_159_, lean_object* v_s_160_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_box(0);
v___x_162_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_156_, v___x_157_, v_s_160_, v_e_158_, v_a_159_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object* v_toApplicative_164_, lean_object* v___x_165_, lean_object* v___x_166_, lean_object* v_e_167_, lean_object* v_a_168_, lean_object* v_x_169_, lean_object* v_toBind_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
lean_inc_ref(v_a_171_);
v___f_172_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0), 3, 2);
lean_closure_set(v___f_172_, 0, v_toApplicative_164_);
lean_closure_set(v___f_172_, 1, v_a_171_);
v___f_173_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1), 5, 4);
lean_closure_set(v___f_173_, 0, v___x_165_);
lean_closure_set(v___f_173_, 1, v___x_166_);
lean_closure_set(v___f_173_, 2, v_e_167_);
lean_closure_set(v___f_173_, 3, v_a_171_);
v___x_174_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_174_, 0, lean_box(0));
lean_closure_set(v___x_174_, 1, lean_box(0));
lean_closure_set(v___x_174_, 2, lean_box(0));
lean_closure_set(v___x_174_, 3, v_a_168_);
lean_closure_set(v___x_174_, 4, v___f_173_);
v___x_175_ = lean_apply_2(v_x_169_, lean_box(0), v___x_174_);
v___x_176_ = lean_apply_4(v_toBind_170_, lean_box(0), lean_box(0), v___x_175_, v___f_172_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object* v_toApplicative_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v_e_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_toPure_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_toPure_182_ = lean_ctor_get(v_toApplicative_177_, 1);
lean_inc(v_toPure_182_);
lean_dec_ref(v_toApplicative_177_);
v___x_183_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_178_, v___x_179_, v_a_181_, v_e_180_);
v___x_184_ = lean_apply_2(v_toPure_182_, lean_box(0), v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_185_, lean_object* v___x_186_, lean_object* v___x_187_, lean_object* v_e_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(v_toApplicative_185_, v___x_186_, v___x_187_, v_e_188_, v_a_189_);
lean_dec_ref(v_a_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object* v_pre_191_, lean_object* v_e_192_, lean_object* v_x_193_, lean_object* v___x_194_, lean_object* v___x_195_, lean_object* v_inst_196_, lean_object* v___f_197_, lean_object* v___x_198_, lean_object* v___x_199_, lean_object* v_a_200_, lean_object* v_toBind_201_, lean_object* v___f_202_, lean_object* v_toApplicative_203_, lean_object* v_a_204_){
_start:
{
if (lean_obj_tag(v_a_204_) == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_2141__overap_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
lean_dec_ref(v_toApplicative_203_);
v___x_205_ = lean_apply_1(v_pre_191_, v_e_192_);
lean_inc_ref(v___x_195_);
lean_inc_ref(v___x_194_);
v___x_206_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_206_, 0, lean_box(0));
lean_closure_set(v___x_206_, 1, lean_box(0));
lean_closure_set(v___x_206_, 2, lean_box(0));
lean_closure_set(v___x_206_, 3, lean_box(0));
lean_closure_set(v___x_206_, 4, v_x_193_);
lean_closure_set(v___x_206_, 5, v___x_194_);
lean_closure_set(v___x_206_, 6, v___x_195_);
lean_closure_set(v___x_206_, 7, lean_box(0));
lean_closure_set(v___x_206_, 8, v___x_205_);
v___x_207_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_207_, 0, lean_box(0));
lean_closure_set(v___x_207_, 1, lean_box(0));
lean_closure_set(v___x_207_, 2, lean_box(0));
lean_closure_set(v___x_207_, 3, lean_box(0));
lean_closure_set(v___x_207_, 4, v_x_193_);
lean_closure_set(v___x_207_, 5, v___x_194_);
lean_closure_set(v___x_207_, 6, v___x_195_);
lean_closure_set(v___x_207_, 7, v_inst_196_);
lean_closure_set(v___x_207_, 8, lean_box(0));
lean_closure_set(v___x_207_, 9, lean_box(0));
lean_closure_set(v___x_207_, 10, v___x_206_);
lean_closure_set(v___x_207_, 11, v___f_197_);
v___x_2141__overap_208_ = l_Lean_Core_withIncRecDepth___redArg(v___x_198_, v___x_199_, v___x_207_);
v___x_209_ = lean_apply_1(v___x_2141__overap_208_, v_a_200_);
v___x_210_ = lean_apply_4(v_toBind_201_, lean_box(0), lean_box(0), v___x_209_, v___f_202_);
return v___x_210_;
}
else
{
lean_object* v_val_211_; lean_object* v_toPure_212_; lean_object* v___x_213_; 
lean_dec(v___f_202_);
lean_dec(v_toBind_201_);
lean_dec(v_a_200_);
lean_dec_ref(v___x_199_);
lean_dec_ref(v___x_198_);
lean_dec(v___f_197_);
lean_dec_ref(v_inst_196_);
lean_dec_ref(v___x_195_);
lean_dec_ref(v___x_194_);
lean_dec_ref(v_e_192_);
lean_dec(v_pre_191_);
v_val_211_ = lean_ctor_get(v_a_204_, 0);
lean_inc(v_val_211_);
lean_dec_ref(v_a_204_);
v_toPure_212_ = lean_ctor_get(v_toApplicative_203_, 1);
lean_inc(v_toPure_212_);
lean_dec_ref(v_toApplicative_203_);
v___x_213_ = lean_apply_2(v_toPure_212_, lean_box(0), v_val_211_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object* v_a_216_, lean_object* v_inst_217_, lean_object* v_inst_218_, lean_object* v_pre_219_, lean_object* v_post_220_, lean_object* v_x_221_, lean_object* v_x_222_, lean_object* v___y_223_, lean_object* v_a_224_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = l_Lean_mkAppN(v_a_216_, v_a_224_);
v___x_226_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_217_, v_inst_218_, v_pre_219_, v_post_220_, v_x_221_, v_x_222_, v___x_225_, v___y_223_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object* v_a_227_, lean_object* v_inst_228_, lean_object* v_inst_229_, lean_object* v_pre_230_, lean_object* v_post_231_, lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v___y_234_, lean_object* v_a_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(v_a_227_, v_inst_228_, v_inst_229_, v_pre_230_, v_post_231_, v_x_232_, v_x_233_, v___y_234_, v_a_235_);
lean_dec_ref(v_a_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object* v_inst_237_, lean_object* v_inst_238_, lean_object* v_pre_239_, lean_object* v_post_240_, lean_object* v_x_241_, lean_object* v_x_242_, lean_object* v___y_243_, lean_object* v_args_244_, lean_object* v___x_245_, lean_object* v_toBind_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___f_248_; lean_object* v___x_249_; size_t v_sz_250_; size_t v___x_251_; lean_object* v___x_1896__overap_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_inc(v___y_243_);
lean_inc(v_x_242_);
lean_inc(v_post_240_);
lean_inc(v_pre_239_);
lean_inc_ref(v_inst_238_);
lean_inc_ref(v_inst_237_);
v___f_248_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_248_, 0, v_a_247_);
lean_closure_set(v___f_248_, 1, v_inst_237_);
lean_closure_set(v___f_248_, 2, v_inst_238_);
lean_closure_set(v___f_248_, 3, v_pre_239_);
lean_closure_set(v___f_248_, 4, v_post_240_);
lean_closure_set(v___f_248_, 5, v_x_241_);
lean_closure_set(v___f_248_, 6, v_x_242_);
lean_closure_set(v___f_248_, 7, v___y_243_);
v___x_249_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg), 8, 6);
lean_closure_set(v___x_249_, 0, v_inst_237_);
lean_closure_set(v___x_249_, 1, v_inst_238_);
lean_closure_set(v___x_249_, 2, v_pre_239_);
lean_closure_set(v___x_249_, 3, v_post_240_);
lean_closure_set(v___x_249_, 4, v_x_241_);
lean_closure_set(v___x_249_, 5, v_x_242_);
v_sz_250_ = lean_array_size(v_args_244_);
v___x_251_ = ((size_t)0ULL);
v___x_1896__overap_252_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_245_, v___x_249_, v_sz_250_, v___x_251_, v_args_244_);
v___x_253_ = lean_apply_1(v___x_1896__overap_252_, v___y_243_);
v___x_254_ = lean_apply_4(v_toBind_246_, lean_box(0), lean_box(0), v___x_253_, v___f_248_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object* v_inst_255_, lean_object* v_inst_256_, lean_object* v_pre_257_, lean_object* v_post_258_, lean_object* v_x_259_, lean_object* v_x_260_, lean_object* v___x_261_, lean_object* v_toBind_262_, lean_object* v_f_263_, lean_object* v_args_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___f_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
lean_inc(v_toBind_262_);
lean_inc(v___y_265_);
lean_inc(v_x_260_);
lean_inc(v_post_258_);
lean_inc(v_pre_257_);
lean_inc_ref(v_inst_256_);
lean_inc_ref(v_inst_255_);
v___f_266_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5), 11, 10);
lean_closure_set(v___f_266_, 0, v_inst_255_);
lean_closure_set(v___f_266_, 1, v_inst_256_);
lean_closure_set(v___f_266_, 2, v_pre_257_);
lean_closure_set(v___f_266_, 3, v_post_258_);
lean_closure_set(v___f_266_, 4, v_x_259_);
lean_closure_set(v___f_266_, 5, v_x_260_);
lean_closure_set(v___f_266_, 6, v___y_265_);
lean_closure_set(v___f_266_, 7, v_args_264_);
lean_closure_set(v___f_266_, 8, v___x_261_);
lean_closure_set(v___f_266_, 9, v_toBind_262_);
v___x_267_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_255_, v_inst_256_, v_pre_257_, v_post_258_, v_x_259_, v_x_260_, v_f_263_, v___y_265_);
v___x_268_ = lean_apply_4(v_toBind_262_, lean_box(0), lean_box(0), v___x_267_, v___f_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object* v_binderName_269_, lean_object* v_a_270_, uint8_t v_binderInfo_271_, lean_object* v_inst_272_, lean_object* v_inst_273_, lean_object* v_pre_274_, lean_object* v_post_275_, lean_object* v_x_276_, lean_object* v_x_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v_binderType_280_, lean_object* v_body_281_, lean_object* v_a_282_){
_start:
{
uint8_t v___y_284_; size_t v___x_291_; size_t v___x_292_; uint8_t v___x_293_; 
v___x_291_ = lean_ptr_addr(v_binderType_280_);
v___x_292_ = lean_ptr_addr(v_a_270_);
v___x_293_ = lean_usize_dec_eq(v___x_291_, v___x_292_);
if (v___x_293_ == 0)
{
v___y_284_ = v___x_293_;
goto v___jp_283_;
}
else
{
size_t v___x_294_; size_t v___x_295_; uint8_t v___x_296_; 
v___x_294_ = lean_ptr_addr(v_body_281_);
v___x_295_ = lean_ptr_addr(v_a_282_);
v___x_296_ = lean_usize_dec_eq(v___x_294_, v___x_295_);
v___y_284_ = v___x_296_;
goto v___jp_283_;
}
v___jp_283_:
{
if (v___y_284_ == 0)
{
lean_object* v___x_285_; lean_object* v___x_286_; 
lean_dec_ref(v___y_279_);
v___x_285_ = l_Lean_Expr_forallE___override(v_binderName_269_, v_a_270_, v_a_282_, v_binderInfo_271_);
v___x_286_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_272_, v_inst_273_, v_pre_274_, v_post_275_, v_x_276_, v_x_277_, v___x_285_, v___y_278_);
return v___x_286_;
}
else
{
uint8_t v___x_287_; 
v___x_287_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_271_, v_binderInfo_271_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec_ref(v___y_279_);
v___x_288_ = l_Lean_Expr_forallE___override(v_binderName_269_, v_a_270_, v_a_282_, v_binderInfo_271_);
v___x_289_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_272_, v_inst_273_, v_pre_274_, v_post_275_, v_x_276_, v_x_277_, v___x_288_, v___y_278_);
return v___x_289_;
}
else
{
lean_object* v___x_290_; 
lean_dec_ref(v_a_282_);
lean_dec_ref(v_a_270_);
lean_dec(v_binderName_269_);
v___x_290_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_272_, v_inst_273_, v_pre_274_, v_post_275_, v_x_276_, v_x_277_, v___y_279_, v___y_278_);
return v___x_290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object* v_binderName_297_, lean_object* v_a_298_, lean_object* v_binderInfo_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_pre_302_, lean_object* v_post_303_, lean_object* v_x_304_, lean_object* v_x_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v_binderType_308_, lean_object* v_body_309_, lean_object* v_a_310_){
_start:
{
uint8_t v_binderInfo_2420__boxed_311_; lean_object* v_res_312_; 
v_binderInfo_2420__boxed_311_ = lean_unbox(v_binderInfo_299_);
v_res_312_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(v_binderName_297_, v_a_298_, v_binderInfo_2420__boxed_311_, v_inst_300_, v_inst_301_, v_pre_302_, v_post_303_, v_x_304_, v_x_305_, v___y_306_, v___y_307_, v_binderType_308_, v_body_309_, v_a_310_);
lean_dec_ref(v_body_309_);
lean_dec_ref(v_binderType_308_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object* v_binderName_313_, uint8_t v_binderInfo_314_, lean_object* v_inst_315_, lean_object* v_inst_316_, lean_object* v_pre_317_, lean_object* v_post_318_, lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v_binderType_323_, lean_object* v_body_324_, lean_object* v_toBind_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_327_; lean_object* v___f_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_327_ = lean_box(v_binderInfo_314_);
lean_inc_ref(v_body_324_);
lean_inc(v___y_321_);
lean_inc(v_x_320_);
lean_inc(v_post_318_);
lean_inc(v_pre_317_);
lean_inc_ref(v_inst_316_);
lean_inc_ref(v_inst_315_);
v___f_328_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed), 14, 13);
lean_closure_set(v___f_328_, 0, v_binderName_313_);
lean_closure_set(v___f_328_, 1, v_a_326_);
lean_closure_set(v___f_328_, 2, v___x_327_);
lean_closure_set(v___f_328_, 3, v_inst_315_);
lean_closure_set(v___f_328_, 4, v_inst_316_);
lean_closure_set(v___f_328_, 5, v_pre_317_);
lean_closure_set(v___f_328_, 6, v_post_318_);
lean_closure_set(v___f_328_, 7, v_x_319_);
lean_closure_set(v___f_328_, 8, v_x_320_);
lean_closure_set(v___f_328_, 9, v___y_321_);
lean_closure_set(v___f_328_, 10, v___y_322_);
lean_closure_set(v___f_328_, 11, v_binderType_323_);
lean_closure_set(v___f_328_, 12, v_body_324_);
v___x_329_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_315_, v_inst_316_, v_pre_317_, v_post_318_, v_x_319_, v_x_320_, v_body_324_, v___y_321_);
v___x_330_ = lean_apply_4(v_toBind_325_, lean_box(0), lean_box(0), v___x_329_, v___f_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object* v_binderName_331_, lean_object* v_binderInfo_332_, lean_object* v_inst_333_, lean_object* v_inst_334_, lean_object* v_pre_335_, lean_object* v_post_336_, lean_object* v_x_337_, lean_object* v_x_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v_binderType_341_, lean_object* v_body_342_, lean_object* v_toBind_343_, lean_object* v_a_344_){
_start:
{
uint8_t v_binderInfo_2298__boxed_345_; lean_object* v_res_346_; 
v_binderInfo_2298__boxed_345_ = lean_unbox(v_binderInfo_332_);
v_res_346_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(v_binderName_331_, v_binderInfo_2298__boxed_345_, v_inst_333_, v_inst_334_, v_pre_335_, v_post_336_, v_x_337_, v_x_338_, v___y_339_, v___y_340_, v_binderType_341_, v_body_342_, v_toBind_343_, v_a_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object* v_binderName_347_, lean_object* v_a_348_, uint8_t v_binderInfo_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_pre_352_, lean_object* v_post_353_, lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v_binderType_358_, lean_object* v_body_359_, lean_object* v_a_360_){
_start:
{
uint8_t v___y_362_; size_t v___x_369_; size_t v___x_370_; uint8_t v___x_371_; 
v___x_369_ = lean_ptr_addr(v_binderType_358_);
v___x_370_ = lean_ptr_addr(v_a_348_);
v___x_371_ = lean_usize_dec_eq(v___x_369_, v___x_370_);
if (v___x_371_ == 0)
{
v___y_362_ = v___x_371_;
goto v___jp_361_;
}
else
{
size_t v___x_372_; size_t v___x_373_; uint8_t v___x_374_; 
v___x_372_ = lean_ptr_addr(v_body_359_);
v___x_373_ = lean_ptr_addr(v_a_360_);
v___x_374_ = lean_usize_dec_eq(v___x_372_, v___x_373_);
v___y_362_ = v___x_374_;
goto v___jp_361_;
}
v___jp_361_:
{
if (v___y_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec_ref(v___y_357_);
v___x_363_ = l_Lean_Expr_lam___override(v_binderName_347_, v_a_348_, v_a_360_, v_binderInfo_349_);
v___x_364_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_350_, v_inst_351_, v_pre_352_, v_post_353_, v_x_354_, v_x_355_, v___x_363_, v___y_356_);
return v___x_364_;
}
else
{
uint8_t v___x_365_; 
v___x_365_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_349_, v_binderInfo_349_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec_ref(v___y_357_);
v___x_366_ = l_Lean_Expr_lam___override(v_binderName_347_, v_a_348_, v_a_360_, v_binderInfo_349_);
v___x_367_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_350_, v_inst_351_, v_pre_352_, v_post_353_, v_x_354_, v_x_355_, v___x_366_, v___y_356_);
return v___x_367_;
}
else
{
lean_object* v___x_368_; 
lean_dec_ref(v_a_360_);
lean_dec_ref(v_a_348_);
lean_dec(v_binderName_347_);
v___x_368_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_350_, v_inst_351_, v_pre_352_, v_post_353_, v_x_354_, v_x_355_, v___y_357_, v___y_356_);
return v___x_368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object* v_binderName_375_, lean_object* v_a_376_, lean_object* v_binderInfo_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_pre_380_, lean_object* v_post_381_, lean_object* v_x_382_, lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v_binderType_386_, lean_object* v_body_387_, lean_object* v_a_388_){
_start:
{
uint8_t v_binderInfo_2396__boxed_389_; lean_object* v_res_390_; 
v_binderInfo_2396__boxed_389_ = lean_unbox(v_binderInfo_377_);
v_res_390_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(v_binderName_375_, v_a_376_, v_binderInfo_2396__boxed_389_, v_inst_378_, v_inst_379_, v_pre_380_, v_post_381_, v_x_382_, v_x_383_, v___y_384_, v___y_385_, v_binderType_386_, v_body_387_, v_a_388_);
lean_dec_ref(v_body_387_);
lean_dec_ref(v_binderType_386_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object* v_binderName_391_, uint8_t v_binderInfo_392_, lean_object* v_inst_393_, lean_object* v_inst_394_, lean_object* v_pre_395_, lean_object* v_post_396_, lean_object* v_x_397_, lean_object* v_x_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v_binderType_401_, lean_object* v_body_402_, lean_object* v_toBind_403_, lean_object* v_a_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___f_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_405_ = lean_box(v_binderInfo_392_);
lean_inc_ref(v_body_402_);
lean_inc(v___y_399_);
lean_inc(v_x_398_);
lean_inc(v_post_396_);
lean_inc(v_pre_395_);
lean_inc_ref(v_inst_394_);
lean_inc_ref(v_inst_393_);
v___f_406_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed), 14, 13);
lean_closure_set(v___f_406_, 0, v_binderName_391_);
lean_closure_set(v___f_406_, 1, v_a_404_);
lean_closure_set(v___f_406_, 2, v___x_405_);
lean_closure_set(v___f_406_, 3, v_inst_393_);
lean_closure_set(v___f_406_, 4, v_inst_394_);
lean_closure_set(v___f_406_, 5, v_pre_395_);
lean_closure_set(v___f_406_, 6, v_post_396_);
lean_closure_set(v___f_406_, 7, v_x_397_);
lean_closure_set(v___f_406_, 8, v_x_398_);
lean_closure_set(v___f_406_, 9, v___y_399_);
lean_closure_set(v___f_406_, 10, v___y_400_);
lean_closure_set(v___f_406_, 11, v_binderType_401_);
lean_closure_set(v___f_406_, 12, v_body_402_);
v___x_407_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_393_, v_inst_394_, v_pre_395_, v_post_396_, v_x_397_, v_x_398_, v_body_402_, v___y_399_);
v___x_408_ = lean_apply_4(v_toBind_403_, lean_box(0), lean_box(0), v___x_407_, v___f_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object* v_binderName_409_, lean_object* v_binderInfo_410_, lean_object* v_inst_411_, lean_object* v_inst_412_, lean_object* v_pre_413_, lean_object* v_post_414_, lean_object* v_x_415_, lean_object* v_x_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v_binderType_419_, lean_object* v_body_420_, lean_object* v_toBind_421_, lean_object* v_a_422_){
_start:
{
uint8_t v_binderInfo_2248__boxed_423_; lean_object* v_res_424_; 
v_binderInfo_2248__boxed_423_ = lean_unbox(v_binderInfo_410_);
v_res_424_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(v_binderName_409_, v_binderInfo_2248__boxed_423_, v_inst_411_, v_inst_412_, v_pre_413_, v_post_414_, v_x_415_, v_x_416_, v___y_417_, v___y_418_, v_binderType_419_, v_body_420_, v_toBind_421_, v_a_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object* v_declName_425_, lean_object* v_a_426_, lean_object* v_a_427_, uint8_t v_nondep_428_, lean_object* v_inst_429_, lean_object* v_inst_430_, lean_object* v_pre_431_, lean_object* v_post_432_, lean_object* v_x_433_, lean_object* v_x_434_, lean_object* v___y_435_, lean_object* v_body_436_, lean_object* v___y_437_, lean_object* v_type_438_, lean_object* v_value_439_, lean_object* v_a_440_){
_start:
{
uint8_t v___y_442_; size_t v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v___x_451_ = lean_ptr_addr(v_type_438_);
v___x_452_ = lean_ptr_addr(v_a_426_);
v___x_453_ = lean_usize_dec_eq(v___x_451_, v___x_452_);
if (v___x_453_ == 0)
{
v___y_442_ = v___x_453_;
goto v___jp_441_;
}
else
{
size_t v___x_454_; size_t v___x_455_; uint8_t v___x_456_; 
v___x_454_ = lean_ptr_addr(v_value_439_);
v___x_455_ = lean_ptr_addr(v_a_427_);
v___x_456_ = lean_usize_dec_eq(v___x_454_, v___x_455_);
v___y_442_ = v___x_456_;
goto v___jp_441_;
}
v___jp_441_:
{
if (v___y_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec_ref(v___y_437_);
v___x_443_ = l_Lean_Expr_letE___override(v_declName_425_, v_a_426_, v_a_427_, v_a_440_, v_nondep_428_);
v___x_444_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_429_, v_inst_430_, v_pre_431_, v_post_432_, v_x_433_, v_x_434_, v___x_443_, v___y_435_);
return v___x_444_;
}
else
{
size_t v___x_445_; size_t v___x_446_; uint8_t v___x_447_; 
v___x_445_ = lean_ptr_addr(v_body_436_);
v___x_446_ = lean_ptr_addr(v_a_440_);
v___x_447_ = lean_usize_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec_ref(v___y_437_);
v___x_448_ = l_Lean_Expr_letE___override(v_declName_425_, v_a_426_, v_a_427_, v_a_440_, v_nondep_428_);
v___x_449_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_429_, v_inst_430_, v_pre_431_, v_post_432_, v_x_433_, v_x_434_, v___x_448_, v___y_435_);
return v___x_449_;
}
else
{
lean_object* v___x_450_; 
lean_dec_ref(v_a_440_);
lean_dec_ref(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_declName_425_);
v___x_450_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_429_, v_inst_430_, v_pre_431_, v_post_432_, v_x_433_, v_x_434_, v___y_437_, v___y_435_);
return v___x_450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object* v_declName_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_nondep_460_, lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v_pre_463_, lean_object* v_post_464_, lean_object* v_x_465_, lean_object* v_x_466_, lean_object* v___y_467_, lean_object* v_body_468_, lean_object* v___y_469_, lean_object* v_type_470_, lean_object* v_value_471_, lean_object* v_a_472_){
_start:
{
uint8_t v_nondep_2444__boxed_473_; lean_object* v_res_474_; 
v_nondep_2444__boxed_473_ = lean_unbox(v_nondep_460_);
v_res_474_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(v_declName_457_, v_a_458_, v_a_459_, v_nondep_2444__boxed_473_, v_inst_461_, v_inst_462_, v_pre_463_, v_post_464_, v_x_465_, v_x_466_, v___y_467_, v_body_468_, v___y_469_, v_type_470_, v_value_471_, v_a_472_);
lean_dec_ref(v_value_471_);
lean_dec_ref(v_type_470_);
lean_dec_ref(v_body_468_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object* v_declName_475_, lean_object* v_a_476_, uint8_t v_nondep_477_, lean_object* v_inst_478_, lean_object* v_inst_479_, lean_object* v_pre_480_, lean_object* v_post_481_, lean_object* v_x_482_, lean_object* v_x_483_, lean_object* v___y_484_, lean_object* v_body_485_, lean_object* v___y_486_, lean_object* v_type_487_, lean_object* v_value_488_, lean_object* v_toBind_489_, lean_object* v_a_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___f_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_491_ = lean_box(v_nondep_477_);
lean_inc_ref(v_body_485_);
lean_inc(v___y_484_);
lean_inc(v_x_483_);
lean_inc(v_post_481_);
lean_inc(v_pre_480_);
lean_inc_ref(v_inst_479_);
lean_inc_ref(v_inst_478_);
v___f_492_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed), 16, 15);
lean_closure_set(v___f_492_, 0, v_declName_475_);
lean_closure_set(v___f_492_, 1, v_a_476_);
lean_closure_set(v___f_492_, 2, v_a_490_);
lean_closure_set(v___f_492_, 3, v___x_491_);
lean_closure_set(v___f_492_, 4, v_inst_478_);
lean_closure_set(v___f_492_, 5, v_inst_479_);
lean_closure_set(v___f_492_, 6, v_pre_480_);
lean_closure_set(v___f_492_, 7, v_post_481_);
lean_closure_set(v___f_492_, 8, v_x_482_);
lean_closure_set(v___f_492_, 9, v_x_483_);
lean_closure_set(v___f_492_, 10, v___y_484_);
lean_closure_set(v___f_492_, 11, v_body_485_);
lean_closure_set(v___f_492_, 12, v___y_486_);
lean_closure_set(v___f_492_, 13, v_type_487_);
lean_closure_set(v___f_492_, 14, v_value_488_);
v___x_493_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_478_, v_inst_479_, v_pre_480_, v_post_481_, v_x_482_, v_x_483_, v_body_485_, v___y_484_);
v___x_494_ = lean_apply_4(v_toBind_489_, lean_box(0), lean_box(0), v___x_493_, v___f_492_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object* v_declName_495_, lean_object* v_a_496_, lean_object* v_nondep_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_pre_500_, lean_object* v_post_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v___y_504_, lean_object* v_body_505_, lean_object* v___y_506_, lean_object* v_type_507_, lean_object* v_value_508_, lean_object* v_toBind_509_, lean_object* v_a_510_){
_start:
{
uint8_t v_nondep_2261__boxed_511_; lean_object* v_res_512_; 
v_nondep_2261__boxed_511_ = lean_unbox(v_nondep_497_);
v_res_512_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(v_declName_495_, v_a_496_, v_nondep_2261__boxed_511_, v_inst_498_, v_inst_499_, v_pre_500_, v_post_501_, v_x_502_, v_x_503_, v___y_504_, v_body_505_, v___y_506_, v_type_507_, v_value_508_, v_toBind_509_, v_a_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object* v_declName_513_, uint8_t v_nondep_514_, lean_object* v_inst_515_, lean_object* v_inst_516_, lean_object* v_pre_517_, lean_object* v_post_518_, lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v___y_521_, lean_object* v_body_522_, lean_object* v___y_523_, lean_object* v_type_524_, lean_object* v_value_525_, lean_object* v_toBind_526_, lean_object* v_a_527_){
_start:
{
lean_object* v___x_528_; lean_object* v___f_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_528_ = lean_box(v_nondep_514_);
lean_inc(v_toBind_526_);
lean_inc_ref(v_value_525_);
lean_inc(v___y_521_);
lean_inc(v_x_520_);
lean_inc(v_post_518_);
lean_inc(v_pre_517_);
lean_inc_ref(v_inst_516_);
lean_inc_ref(v_inst_515_);
v___f_529_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed), 16, 15);
lean_closure_set(v___f_529_, 0, v_declName_513_);
lean_closure_set(v___f_529_, 1, v_a_527_);
lean_closure_set(v___f_529_, 2, v___x_528_);
lean_closure_set(v___f_529_, 3, v_inst_515_);
lean_closure_set(v___f_529_, 4, v_inst_516_);
lean_closure_set(v___f_529_, 5, v_pre_517_);
lean_closure_set(v___f_529_, 6, v_post_518_);
lean_closure_set(v___f_529_, 7, v_x_519_);
lean_closure_set(v___f_529_, 8, v_x_520_);
lean_closure_set(v___f_529_, 9, v___y_521_);
lean_closure_set(v___f_529_, 10, v_body_522_);
lean_closure_set(v___f_529_, 11, v___y_523_);
lean_closure_set(v___f_529_, 12, v_type_524_);
lean_closure_set(v___f_529_, 13, v_value_525_);
lean_closure_set(v___f_529_, 14, v_toBind_526_);
v___x_530_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_515_, v_inst_516_, v_pre_517_, v_post_518_, v_x_519_, v_x_520_, v_value_525_, v___y_521_);
v___x_531_ = lean_apply_4(v_toBind_526_, lean_box(0), lean_box(0), v___x_530_, v___f_529_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object* v_declName_532_, lean_object* v_nondep_533_, lean_object* v_inst_534_, lean_object* v_inst_535_, lean_object* v_pre_536_, lean_object* v_post_537_, lean_object* v_x_538_, lean_object* v_x_539_, lean_object* v___y_540_, lean_object* v_body_541_, lean_object* v___y_542_, lean_object* v_type_543_, lean_object* v_value_544_, lean_object* v_toBind_545_, lean_object* v_a_546_){
_start:
{
uint8_t v_nondep_2275__boxed_547_; lean_object* v_res_548_; 
v_nondep_2275__boxed_547_ = lean_unbox(v_nondep_533_);
v_res_548_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(v_declName_532_, v_nondep_2275__boxed_547_, v_inst_534_, v_inst_535_, v_pre_536_, v_post_537_, v_x_538_, v_x_539_, v___y_540_, v_body_541_, v___y_542_, v_type_543_, v_value_544_, v_toBind_545_, v_a_546_);
return v_res_548_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0(void){
_start:
{
lean_object* v___x_549_; lean_object* v_dummy_550_; 
v___x_549_ = lean_box(0);
v_dummy_550_ = l_Lean_Expr_sort___override(v___x_549_);
return v_dummy_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object* v_expr_551_, lean_object* v_data_552_, lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_pre_555_, lean_object* v_post_556_, lean_object* v_x_557_, lean_object* v_x_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v_a_561_){
_start:
{
size_t v___x_562_; size_t v___x_563_; uint8_t v___x_564_; 
v___x_562_ = lean_ptr_addr(v_expr_551_);
v___x_563_ = lean_ptr_addr(v_a_561_);
v___x_564_ = lean_usize_dec_eq(v___x_562_, v___x_563_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec_ref(v___y_560_);
v___x_565_ = l_Lean_Expr_mdata___override(v_data_552_, v_a_561_);
v___x_566_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_553_, v_inst_554_, v_pre_555_, v_post_556_, v_x_557_, v_x_558_, v___x_565_, v___y_559_);
return v___x_566_;
}
else
{
lean_object* v___x_567_; 
lean_dec_ref(v_a_561_);
lean_dec(v_data_552_);
v___x_567_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_553_, v_inst_554_, v_pre_555_, v_post_556_, v_x_557_, v_x_558_, v___y_560_, v___y_559_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object* v_expr_568_, lean_object* v_data_569_, lean_object* v_inst_570_, lean_object* v_inst_571_, lean_object* v_pre_572_, lean_object* v_post_573_, lean_object* v_x_574_, lean_object* v_x_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(v_expr_568_, v_data_569_, v_inst_570_, v_inst_571_, v_pre_572_, v_post_573_, v_x_574_, v_x_575_, v___y_576_, v___y_577_, v_a_578_);
lean_dec_ref(v_expr_568_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object* v_struct_580_, lean_object* v_typeName_581_, lean_object* v_idx_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_pre_585_, lean_object* v_post_586_, lean_object* v_x_587_, lean_object* v_x_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v_a_591_){
_start:
{
size_t v___x_592_; size_t v___x_593_; uint8_t v___x_594_; 
v___x_592_ = lean_ptr_addr(v_struct_580_);
v___x_593_ = lean_ptr_addr(v_a_591_);
v___x_594_ = lean_usize_dec_eq(v___x_592_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec_ref(v___y_590_);
v___x_595_ = l_Lean_Expr_proj___override(v_typeName_581_, v_idx_582_, v_a_591_);
v___x_596_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_583_, v_inst_584_, v_pre_585_, v_post_586_, v_x_587_, v_x_588_, v___x_595_, v___y_589_);
return v___x_596_;
}
else
{
lean_object* v___x_597_; 
lean_dec_ref(v_a_591_);
lean_dec(v_idx_582_);
lean_dec(v_typeName_581_);
v___x_597_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_583_, v_inst_584_, v_pre_585_, v_post_586_, v_x_587_, v_x_588_, v___y_590_, v___y_589_);
return v___x_597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object* v_struct_598_, lean_object* v_typeName_599_, lean_object* v_idx_600_, lean_object* v_inst_601_, lean_object* v_inst_602_, lean_object* v_pre_603_, lean_object* v_post_604_, lean_object* v_x_605_, lean_object* v_x_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(v_struct_598_, v_typeName_599_, v_idx_600_, v_inst_601_, v_inst_602_, v_pre_603_, v_post_604_, v_x_605_, v_x_606_, v___y_607_, v___y_608_, v_a_609_);
lean_dec_ref(v_struct_598_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object* v_toApplicative_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_pre_614_, lean_object* v_post_615_, lean_object* v_x_616_, lean_object* v_x_617_, lean_object* v_toBind_618_, lean_object* v___f_619_, lean_object* v_e_620_, lean_object* v_____do__lift_621_, lean_object* v___y_622_){
_start:
{
lean_object* v___y_624_; 
switch(lean_obj_tag(v_____do__lift_621_))
{
case 0:
{
lean_object* v_e_669_; lean_object* v_toPure_670_; lean_object* v___x_671_; 
lean_dec(v___y_622_);
lean_dec_ref(v_e_620_);
lean_dec(v___f_619_);
lean_dec(v_toBind_618_);
lean_dec(v_x_617_);
lean_dec(v_post_615_);
lean_dec(v_pre_614_);
lean_dec_ref(v_inst_613_);
lean_dec_ref(v_inst_612_);
v_e_669_ = lean_ctor_get(v_____do__lift_621_, 0);
lean_inc_ref(v_e_669_);
lean_dec_ref(v_____do__lift_621_);
v_toPure_670_ = lean_ctor_get(v_toApplicative_611_, 1);
lean_inc(v_toPure_670_);
lean_dec_ref(v_toApplicative_611_);
v___x_671_ = lean_apply_2(v_toPure_670_, lean_box(0), v_e_669_);
return v___x_671_;
}
case 1:
{
lean_object* v_e_672_; lean_object* v___f_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec_ref(v_e_620_);
lean_dec(v___f_619_);
lean_dec_ref(v_toApplicative_611_);
v_e_672_ = lean_ctor_get(v_____do__lift_621_, 0);
lean_inc_ref(v_e_672_);
lean_dec_ref(v_____do__lift_621_);
lean_inc(v___y_622_);
lean_inc(v_x_617_);
lean_inc(v_post_615_);
lean_inc(v_pre_614_);
lean_inc_ref(v_inst_613_);
lean_inc_ref(v_inst_612_);
v___f_673_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7), 8, 7);
lean_closure_set(v___f_673_, 0, v_inst_612_);
lean_closure_set(v___f_673_, 1, v_inst_613_);
lean_closure_set(v___f_673_, 2, v_pre_614_);
lean_closure_set(v___f_673_, 3, v_post_615_);
lean_closure_set(v___f_673_, 4, v_x_616_);
lean_closure_set(v___f_673_, 5, v_x_617_);
lean_closure_set(v___f_673_, 6, v___y_622_);
v___x_674_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v_e_672_, v___y_622_);
v___x_675_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_674_, v___f_673_);
return v___x_675_;
}
default: 
{
lean_object* v_e_x3f_676_; 
lean_dec_ref(v_toApplicative_611_);
v_e_x3f_676_ = lean_ctor_get(v_____do__lift_621_, 0);
lean_inc(v_e_x3f_676_);
lean_dec_ref(v_____do__lift_621_);
if (lean_obj_tag(v_e_x3f_676_) == 0)
{
v___y_624_ = v_e_620_;
goto v___jp_623_;
}
else
{
lean_object* v_val_677_; 
lean_dec_ref(v_e_620_);
v_val_677_ = lean_ctor_get(v_e_x3f_676_, 0);
lean_inc(v_val_677_);
lean_dec_ref(v_e_x3f_676_);
v___y_624_ = v_val_677_;
goto v___jp_623_;
}
}
}
v___jp_623_:
{
switch(lean_obj_tag(v___y_624_))
{
case 7:
{
lean_object* v_binderName_625_; lean_object* v_binderType_626_; lean_object* v_body_627_; uint8_t v_binderInfo_628_; lean_object* v___x_629_; lean_object* v___f_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec(v___f_619_);
v_binderName_625_ = lean_ctor_get(v___y_624_, 0);
lean_inc(v_binderName_625_);
v_binderType_626_ = lean_ctor_get(v___y_624_, 1);
lean_inc_ref(v_binderType_626_);
v_body_627_ = lean_ctor_get(v___y_624_, 2);
lean_inc_ref(v_body_627_);
v_binderInfo_628_ = lean_ctor_get_uint8(v___y_624_, sizeof(void*)*3 + 8);
v___x_629_ = lean_box(v_binderInfo_628_);
lean_inc(v_toBind_618_);
lean_inc_ref(v_binderType_626_);
lean_inc(v___y_622_);
lean_inc(v_x_617_);
lean_inc(v_post_615_);
lean_inc(v_pre_614_);
lean_inc_ref(v_inst_613_);
lean_inc_ref(v_inst_612_);
v___f_630_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed), 14, 13);
lean_closure_set(v___f_630_, 0, v_binderName_625_);
lean_closure_set(v___f_630_, 1, v___x_629_);
lean_closure_set(v___f_630_, 2, v_inst_612_);
lean_closure_set(v___f_630_, 3, v_inst_613_);
lean_closure_set(v___f_630_, 4, v_pre_614_);
lean_closure_set(v___f_630_, 5, v_post_615_);
lean_closure_set(v___f_630_, 6, v_x_616_);
lean_closure_set(v___f_630_, 7, v_x_617_);
lean_closure_set(v___f_630_, 8, v___y_622_);
lean_closure_set(v___f_630_, 9, v___y_624_);
lean_closure_set(v___f_630_, 10, v_binderType_626_);
lean_closure_set(v___f_630_, 11, v_body_627_);
lean_closure_set(v___f_630_, 12, v_toBind_618_);
v___x_631_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v_binderType_626_, v___y_622_);
v___x_632_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_631_, v___f_630_);
return v___x_632_;
}
case 6:
{
lean_object* v_binderName_633_; lean_object* v_binderType_634_; lean_object* v_body_635_; uint8_t v_binderInfo_636_; lean_object* v___x_637_; lean_object* v___f_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
lean_dec(v___f_619_);
v_binderName_633_ = lean_ctor_get(v___y_624_, 0);
lean_inc(v_binderName_633_);
v_binderType_634_ = lean_ctor_get(v___y_624_, 1);
lean_inc_ref(v_binderType_634_);
v_body_635_ = lean_ctor_get(v___y_624_, 2);
lean_inc_ref(v_body_635_);
v_binderInfo_636_ = lean_ctor_get_uint8(v___y_624_, sizeof(void*)*3 + 8);
v___x_637_ = lean_box(v_binderInfo_636_);
lean_inc(v_toBind_618_);
lean_inc_ref(v_binderType_634_);
lean_inc(v___y_622_);
lean_inc(v_x_617_);
lean_inc(v_post_615_);
lean_inc(v_pre_614_);
lean_inc_ref(v_inst_613_);
lean_inc_ref(v_inst_612_);
v___f_638_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed), 14, 13);
lean_closure_set(v___f_638_, 0, v_binderName_633_);
lean_closure_set(v___f_638_, 1, v___x_637_);
lean_closure_set(v___f_638_, 2, v_inst_612_);
lean_closure_set(v___f_638_, 3, v_inst_613_);
lean_closure_set(v___f_638_, 4, v_pre_614_);
lean_closure_set(v___f_638_, 5, v_post_615_);
lean_closure_set(v___f_638_, 6, v_x_616_);
lean_closure_set(v___f_638_, 7, v_x_617_);
lean_closure_set(v___f_638_, 8, v___y_622_);
lean_closure_set(v___f_638_, 9, v___y_624_);
lean_closure_set(v___f_638_, 10, v_binderType_634_);
lean_closure_set(v___f_638_, 11, v_body_635_);
lean_closure_set(v___f_638_, 12, v_toBind_618_);
v___x_639_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v_binderType_634_, v___y_622_);
v___x_640_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_639_, v___f_638_);
return v___x_640_;
}
case 8:
{
lean_object* v_declName_641_; lean_object* v_type_642_; lean_object* v_value_643_; lean_object* v_body_644_; uint8_t v_nondep_645_; lean_object* v___x_646_; lean_object* v___f_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
lean_dec(v___f_619_);
v_declName_641_ = lean_ctor_get(v___y_624_, 0);
lean_inc(v_declName_641_);
v_type_642_ = lean_ctor_get(v___y_624_, 1);
lean_inc_ref(v_type_642_);
v_value_643_ = lean_ctor_get(v___y_624_, 2);
lean_inc_ref(v_value_643_);
v_body_644_ = lean_ctor_get(v___y_624_, 3);
lean_inc_ref(v_body_644_);
v_nondep_645_ = lean_ctor_get_uint8(v___y_624_, sizeof(void*)*4 + 8);
v___x_646_ = lean_box(v_nondep_645_);
lean_inc(v_toBind_618_);
lean_inc_ref(v_type_642_);
lean_inc(v___y_622_);
lean_inc(v_x_617_);
lean_inc(v_post_615_);
lean_inc(v_pre_614_);
lean_inc_ref(v_inst_613_);
lean_inc_ref(v_inst_612_);
v___f_647_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed), 15, 14);
lean_closure_set(v___f_647_, 0, v_declName_641_);
lean_closure_set(v___f_647_, 1, v___x_646_);
lean_closure_set(v___f_647_, 2, v_inst_612_);
lean_closure_set(v___f_647_, 3, v_inst_613_);
lean_closure_set(v___f_647_, 4, v_pre_614_);
lean_closure_set(v___f_647_, 5, v_post_615_);
lean_closure_set(v___f_647_, 6, v_x_616_);
lean_closure_set(v___f_647_, 7, v_x_617_);
lean_closure_set(v___f_647_, 8, v___y_622_);
lean_closure_set(v___f_647_, 9, v_body_644_);
lean_closure_set(v___f_647_, 10, v___y_624_);
lean_closure_set(v___f_647_, 11, v_type_642_);
lean_closure_set(v___f_647_, 12, v_value_643_);
lean_closure_set(v___f_647_, 13, v_toBind_618_);
v___x_648_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v_type_642_, v___y_622_);
v___x_649_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_648_, v___f_647_);
return v___x_649_;
}
case 5:
{
lean_object* v_dummy_650_; lean_object* v_nargs_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_2115__overap_655_; lean_object* v___x_656_; 
lean_dec(v_toBind_618_);
lean_dec(v_x_617_);
lean_dec(v_post_615_);
lean_dec(v_pre_614_);
lean_dec_ref(v_inst_613_);
lean_dec_ref(v_inst_612_);
v_dummy_650_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_651_ = l_Lean_Expr_getAppNumArgs(v___y_624_);
lean_inc(v_nargs_651_);
v___x_652_ = lean_mk_array(v_nargs_651_, v_dummy_650_);
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_nat_sub(v_nargs_651_, v___x_653_);
lean_dec(v_nargs_651_);
v___x_2115__overap_655_ = l_Lean_Expr_withAppAux___redArg(v___f_619_, v___y_624_, v___x_652_, v___x_654_);
v___x_656_ = lean_apply_1(v___x_2115__overap_655_, v___y_622_);
return v___x_656_;
}
case 10:
{
lean_object* v_data_657_; lean_object* v_expr_658_; lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec(v___f_619_);
v_data_657_ = lean_ctor_get(v___y_624_, 0);
lean_inc(v_data_657_);
v_expr_658_ = lean_ctor_get(v___y_624_, 1);
lean_inc_ref(v_expr_658_);
lean_inc(v___y_622_);
lean_inc(v_x_617_);
lean_inc(v_post_615_);
lean_inc(v_pre_614_);
lean_inc_ref(v_inst_613_);
lean_inc_ref(v_inst_612_);
lean_inc_ref(v_expr_658_);
v___f_659_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed), 11, 10);
lean_closure_set(v___f_659_, 0, v_expr_658_);
lean_closure_set(v___f_659_, 1, v_data_657_);
lean_closure_set(v___f_659_, 2, v_inst_612_);
lean_closure_set(v___f_659_, 3, v_inst_613_);
lean_closure_set(v___f_659_, 4, v_pre_614_);
lean_closure_set(v___f_659_, 5, v_post_615_);
lean_closure_set(v___f_659_, 6, v_x_616_);
lean_closure_set(v___f_659_, 7, v_x_617_);
lean_closure_set(v___f_659_, 8, v___y_622_);
lean_closure_set(v___f_659_, 9, v___y_624_);
v___x_660_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v_expr_658_, v___y_622_);
v___x_661_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_660_, v___f_659_);
return v___x_661_;
}
case 11:
{
lean_object* v_typeName_662_; lean_object* v_idx_663_; lean_object* v_struct_664_; lean_object* v___f_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
lean_dec(v___f_619_);
v_typeName_662_ = lean_ctor_get(v___y_624_, 0);
lean_inc(v_typeName_662_);
v_idx_663_ = lean_ctor_get(v___y_624_, 1);
lean_inc(v_idx_663_);
v_struct_664_ = lean_ctor_get(v___y_624_, 2);
lean_inc_ref(v_struct_664_);
lean_inc(v___y_622_);
lean_inc(v_x_617_);
lean_inc(v_post_615_);
lean_inc(v_pre_614_);
lean_inc_ref(v_inst_613_);
lean_inc_ref(v_inst_612_);
lean_inc_ref(v_struct_664_);
v___f_665_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed), 12, 11);
lean_closure_set(v___f_665_, 0, v_struct_664_);
lean_closure_set(v___f_665_, 1, v_typeName_662_);
lean_closure_set(v___f_665_, 2, v_idx_663_);
lean_closure_set(v___f_665_, 3, v_inst_612_);
lean_closure_set(v___f_665_, 4, v_inst_613_);
lean_closure_set(v___f_665_, 5, v_pre_614_);
lean_closure_set(v___f_665_, 6, v_post_615_);
lean_closure_set(v___f_665_, 7, v_x_616_);
lean_closure_set(v___f_665_, 8, v_x_617_);
lean_closure_set(v___f_665_, 9, v___y_622_);
lean_closure_set(v___f_665_, 10, v___y_624_);
v___x_666_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v_struct_664_, v___y_622_);
v___x_667_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_666_, v___f_665_);
return v___x_667_;
}
default: 
{
lean_object* v___x_668_; 
lean_dec(v___f_619_);
lean_dec(v_toBind_618_);
v___x_668_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_612_, v_inst_613_, v_pre_614_, v_post_615_, v_x_616_, v_x_617_, v___y_624_, v___y_622_);
return v___x_668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object* v_inst_678_, lean_object* v_inst_679_, lean_object* v_pre_680_, lean_object* v_post_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v_e_684_, lean_object* v_a_685_){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___f_690_; lean_object* v___f_691_; lean_object* v___x_692_; lean_object* v_toApplicative_693_; lean_object* v_toBind_694_; lean_object* v___f_695_; lean_object* v___f_696_; lean_object* v___f_697_; lean_object* v___f_698_; lean_object* v___f_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_686_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_687_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_678_);
v___x_688_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_682_, v___x_686_, v___x_687_, v_inst_678_);
v___x_689_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_682_, v___x_686_, v___x_687_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v___x_689_);
v___f_690_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_690_, 0, v___x_689_);
lean_closure_set(v___f_690_, 1, v_inst_679_);
lean_inc_ref(v_inst_679_);
v___f_691_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_691_, 0, v___x_689_);
lean_closure_set(v___f_691_, 1, v_inst_679_);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___f_690_);
lean_ctor_set(v___x_692_, 1, v___f_691_);
v_toApplicative_693_ = lean_ctor_get(v_inst_678_, 0);
lean_inc_ref(v_toApplicative_693_);
v_toBind_694_ = lean_ctor_get(v_inst_678_, 1);
lean_inc(v_toBind_694_);
lean_inc(v_toBind_694_);
lean_inc(v_x_683_);
lean_inc(v_a_685_);
lean_inc_ref(v_e_684_);
lean_inc_ref(v_toApplicative_693_);
v___f_695_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2), 8, 7);
lean_closure_set(v___f_695_, 0, v_toApplicative_693_);
lean_closure_set(v___f_695_, 1, v___x_686_);
lean_closure_set(v___f_695_, 2, v___x_687_);
lean_closure_set(v___f_695_, 3, v_e_684_);
lean_closure_set(v___f_695_, 4, v_a_685_);
lean_closure_set(v___f_695_, 5, v_x_683_);
lean_closure_set(v___f_695_, 6, v_toBind_694_);
lean_inc_ref(v_e_684_);
lean_inc_ref(v_toApplicative_693_);
v___f_696_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_696_, 0, v_toApplicative_693_);
lean_closure_set(v___f_696_, 1, v___x_686_);
lean_closure_set(v___f_696_, 2, v___x_687_);
lean_closure_set(v___f_696_, 3, v_e_684_);
lean_inc(v_toBind_694_);
lean_inc_ref(v___x_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_697_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6), 11, 8);
lean_closure_set(v___f_697_, 0, v_inst_678_);
lean_closure_set(v___f_697_, 1, v_inst_679_);
lean_closure_set(v___f_697_, 2, v_pre_680_);
lean_closure_set(v___f_697_, 3, v_post_681_);
lean_closure_set(v___f_697_, 4, v_x_682_);
lean_closure_set(v___f_697_, 5, v_x_683_);
lean_closure_set(v___f_697_, 6, v___x_688_);
lean_closure_set(v___f_697_, 7, v_toBind_694_);
lean_inc_ref(v_e_684_);
lean_inc(v_toBind_694_);
lean_inc(v_x_683_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_678_);
lean_inc_ref(v_toApplicative_693_);
v___f_698_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17), 12, 10);
lean_closure_set(v___f_698_, 0, v_toApplicative_693_);
lean_closure_set(v___f_698_, 1, v_inst_678_);
lean_closure_set(v___f_698_, 2, v_inst_679_);
lean_closure_set(v___f_698_, 3, v_pre_680_);
lean_closure_set(v___f_698_, 4, v_post_681_);
lean_closure_set(v___f_698_, 5, v_x_682_);
lean_closure_set(v___f_698_, 6, v_x_683_);
lean_closure_set(v___f_698_, 7, v_toBind_694_);
lean_closure_set(v___f_698_, 8, v___f_697_);
lean_closure_set(v___f_698_, 9, v_e_684_);
lean_inc(v_toBind_694_);
lean_inc(v_a_685_);
v___f_699_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18), 14, 13);
lean_closure_set(v___f_699_, 0, v_pre_680_);
lean_closure_set(v___f_699_, 1, v_e_684_);
lean_closure_set(v___f_699_, 2, v_x_682_);
lean_closure_set(v___f_699_, 3, v___x_686_);
lean_closure_set(v___f_699_, 4, v___x_687_);
lean_closure_set(v___f_699_, 5, v_inst_678_);
lean_closure_set(v___f_699_, 6, v___f_698_);
lean_closure_set(v___f_699_, 7, v___x_688_);
lean_closure_set(v___f_699_, 8, v___x_692_);
lean_closure_set(v___f_699_, 9, v_a_685_);
lean_closure_set(v___f_699_, 10, v_toBind_694_);
lean_closure_set(v___f_699_, 11, v___f_695_);
lean_closure_set(v___f_699_, 12, v_toApplicative_693_);
v___x_700_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_700_, 0, lean_box(0));
lean_closure_set(v___x_700_, 1, lean_box(0));
lean_closure_set(v___x_700_, 2, v_a_685_);
v___x_701_ = lean_apply_2(v_x_683_, lean_box(0), v___x_700_);
lean_inc(v_toBind_694_);
v___x_702_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v___x_701_, v___f_696_);
v___x_703_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v___x_702_, v___f_699_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_704_, lean_object* v_inst_705_, lean_object* v_inst_706_, lean_object* v_pre_707_, lean_object* v_post_708_, lean_object* v_x_709_, lean_object* v_x_710_, lean_object* v_a_711_, lean_object* v_e_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___y_715_; 
switch(lean_obj_tag(v_a_713_))
{
case 0:
{
lean_object* v_e_718_; lean_object* v_toPure_719_; lean_object* v___x_720_; 
lean_dec_ref(v_e_712_);
lean_dec(v_a_711_);
lean_dec(v_x_710_);
lean_dec(v_post_708_);
lean_dec(v_pre_707_);
lean_dec_ref(v_inst_706_);
lean_dec_ref(v_inst_705_);
v_e_718_ = lean_ctor_get(v_a_713_, 0);
lean_inc_ref(v_e_718_);
lean_dec_ref(v_a_713_);
v_toPure_719_ = lean_ctor_get(v_toApplicative_704_, 1);
lean_inc(v_toPure_719_);
lean_dec_ref(v_toApplicative_704_);
v___x_720_ = lean_apply_2(v_toPure_719_, lean_box(0), v_e_718_);
return v___x_720_;
}
case 1:
{
lean_object* v_e_721_; lean_object* v___x_722_; 
lean_dec_ref(v_e_712_);
lean_dec_ref(v_toApplicative_704_);
v_e_721_ = lean_ctor_get(v_a_713_, 0);
lean_inc_ref(v_e_721_);
lean_dec_ref(v_a_713_);
v___x_722_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_705_, v_inst_706_, v_pre_707_, v_post_708_, v_x_709_, v_x_710_, v_e_721_, v_a_711_);
return v___x_722_;
}
default: 
{
lean_object* v_e_x3f_723_; 
lean_dec(v_a_711_);
lean_dec(v_x_710_);
lean_dec(v_post_708_);
lean_dec(v_pre_707_);
lean_dec_ref(v_inst_706_);
lean_dec_ref(v_inst_705_);
v_e_x3f_723_ = lean_ctor_get(v_a_713_, 0);
lean_inc(v_e_x3f_723_);
lean_dec_ref(v_a_713_);
if (lean_obj_tag(v_e_x3f_723_) == 0)
{
v___y_715_ = v_e_712_;
goto v___jp_714_;
}
else
{
lean_object* v_val_724_; 
lean_dec_ref(v_e_712_);
v_val_724_ = lean_ctor_get(v_e_x3f_723_, 0);
lean_inc(v_val_724_);
lean_dec_ref(v_e_x3f_723_);
v___y_715_ = v_val_724_;
goto v___jp_714_;
}
}
}
v___jp_714_:
{
lean_object* v_toPure_716_; lean_object* v___x_717_; 
v_toPure_716_ = lean_ctor_get(v_toApplicative_704_, 1);
lean_inc(v_toPure_716_);
lean_dec_ref(v_toApplicative_704_);
v___x_717_ = lean_apply_2(v_toPure_716_, lean_box(0), v___y_715_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_pre_727_, lean_object* v_post_728_, lean_object* v_x_729_, lean_object* v_x_730_, lean_object* v_e_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_toApplicative_733_; lean_object* v_toBind_734_; lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_toApplicative_733_ = lean_ctor_get(v_inst_725_, 0);
lean_inc_ref(v_toApplicative_733_);
v_toBind_734_ = lean_ctor_get(v_inst_725_, 1);
lean_inc(v_toBind_734_);
lean_inc_ref(v_e_731_);
lean_inc(v_post_728_);
v___f_735_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0), 10, 9);
lean_closure_set(v___f_735_, 0, v_toApplicative_733_);
lean_closure_set(v___f_735_, 1, v_inst_725_);
lean_closure_set(v___f_735_, 2, v_inst_726_);
lean_closure_set(v___f_735_, 3, v_pre_727_);
lean_closure_set(v___f_735_, 4, v_post_728_);
lean_closure_set(v___f_735_, 5, v_x_729_);
lean_closure_set(v___f_735_, 6, v_x_730_);
lean_closure_set(v___f_735_, 7, v_a_732_);
lean_closure_set(v___f_735_, 8, v_e_731_);
v___x_736_ = lean_apply_1(v_post_728_, v_e_731_);
v___x_737_ = lean_apply_4(v_toBind_734_, lean_box(0), lean_box(0), v___x_736_, v___f_735_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_pre_740_, lean_object* v_post_741_, lean_object* v_x_742_, lean_object* v_x_743_, lean_object* v___y_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_738_, v_inst_739_, v_pre_740_, v_post_741_, v_x_742_, v_x_743_, v_a_745_, v___y_744_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object* v_m_747_, lean_object* v_inst_748_, lean_object* v_inst_749_, lean_object* v_pre_750_, lean_object* v_post_751_, lean_object* v_x_752_, lean_object* v_x_753_, lean_object* v_e_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_748_, v_inst_749_, v_pre_750_, v_post_751_, v_x_752_, v_x_753_, v_e_754_, v_a_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object* v_m_757_, lean_object* v_inst_758_, lean_object* v_inst_759_, lean_object* v_pre_760_, lean_object* v_post_761_, lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_e_764_, lean_object* v_a_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_758_, v_inst_759_, v_pre_760_, v_post_761_, v_x_762_, v_x_763_, v_e_764_, v_a_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object* v_x_767_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_apply_1(v_x_767_, lean_box(0));
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object* v_x_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lean_Core_transform___redArg___lam__0(v_x_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object* v_inst_774_, lean_object* v_00_u03b1_775_, lean_object* v_x_776_){
_start:
{
lean_object* v___f_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___f_777_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_777_, 0, v_x_776_);
v___x_778_ = lean_alloc_closure((void*)(l_Lean_Core_liftIOCore___boxed), 5, 2);
lean_closure_set(v___x_778_, 0, lean_box(0));
lean_closure_set(v___x_778_, 1, v___f_777_);
v___x_779_ = lean_apply_2(v_inst_774_, lean_box(0), v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object* v_toPure_780_, lean_object* v_____x_781_){
_start:
{
lean_object* v_fst_782_; lean_object* v___x_783_; 
v_fst_782_ = lean_ctor_get(v_____x_781_, 0);
lean_inc(v_fst_782_);
lean_dec_ref(v_____x_781_);
v___x_783_ = lean_apply_2(v_toPure_780_, lean_box(0), v_fst_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object* v_a_784_, lean_object* v_toPure_785_, lean_object* v_s_786_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v_a_784_);
lean_ctor_set(v___x_787_, 1, v_s_786_);
v___x_788_ = lean_apply_2(v_toPure_785_, lean_box(0), v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object* v_toPure_789_, lean_object* v_ref_790_, lean_object* v_x_791_, lean_object* v_toBind_792_, lean_object* v_a_793_){
_start:
{
lean_object* v___f_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___f_794_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__3), 3, 2);
lean_closure_set(v___f_794_, 0, v_a_793_);
lean_closure_set(v___f_794_, 1, v_toPure_789_);
v___x_795_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_795_, 0, lean_box(0));
lean_closure_set(v___x_795_, 1, lean_box(0));
lean_closure_set(v___x_795_, 2, v_ref_790_);
v___x_796_ = lean_apply_2(v_x_791_, lean_box(0), v___x_795_);
v___x_797_ = lean_apply_4(v_toBind_792_, lean_box(0), lean_box(0), v___x_796_, v___f_794_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object* v_toPure_798_, lean_object* v_x_799_, lean_object* v_toBind_800_, lean_object* v_inst_801_, lean_object* v_inst_802_, lean_object* v_pre_803_, lean_object* v_post_804_, lean_object* v_x_805_, lean_object* v_input_806_, lean_object* v_ref_807_){
_start:
{
lean_object* v___f_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_inc(v_toBind_800_);
lean_inc(v_x_799_);
lean_inc(v_ref_807_);
v___f_808_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_808_, 0, v_toPure_798_);
lean_closure_set(v___f_808_, 1, v_ref_807_);
lean_closure_set(v___f_808_, 2, v_x_799_);
lean_closure_set(v___f_808_, 3, v_toBind_800_);
v___x_809_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_801_, v_inst_802_, v_pre_803_, v_post_804_, v_x_805_, v_x_799_, v_input_806_, v_ref_807_);
v___x_810_ = lean_apply_4(v_toBind_800_, lean_box(0), lean_box(0), v___x_809_, v___f_808_);
return v___x_810_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_box(0);
v___x_812_ = lean_unsigned_to_nat(16u);
v___x_813_ = lean_mk_array(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__0, &l_Lean_Core_transform___redArg___closed__0_once, _init_l_Lean_Core_transform___redArg___closed__0);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__1, &l_Lean_Core_transform___redArg___closed__1_once, _init_l_Lean_Core_transform___redArg___closed__1);
v___x_818_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_818_, 0, lean_box(0));
lean_closure_set(v___x_818_, 1, lean_box(0));
lean_closure_set(v___x_818_, 2, v___x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_inst_821_, lean_object* v_input_822_, lean_object* v_pre_823_, lean_object* v_post_824_){
_start:
{
lean_object* v_x_825_; lean_object* v_toApplicative_826_; lean_object* v_toBind_827_; lean_object* v_toPure_828_; lean_object* v_x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___f_832_; lean_object* v___f_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_x_825_ = lean_box(0);
v_toApplicative_826_ = lean_ctor_get(v_inst_819_, 0);
v_toBind_827_ = lean_ctor_get(v_inst_819_, 1);
lean_inc(v_toBind_827_);
v_toPure_828_ = lean_ctor_get(v_toApplicative_826_, 1);
lean_inc(v_toPure_828_);
lean_inc(v_inst_820_);
v_x_829_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__1), 3, 1);
lean_closure_set(v_x_829_, 0, v_inst_820_);
v___x_830_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_831_ = l_Lean_Core_transform___redArg___lam__1(v_inst_820_, lean_box(0), v___x_830_);
lean_inc(v_toPure_828_);
v___f_832_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_832_, 0, v_toPure_828_);
lean_inc(v_toBind_827_);
v___f_833_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__5), 10, 9);
lean_closure_set(v___f_833_, 0, v_toPure_828_);
lean_closure_set(v___f_833_, 1, v_x_829_);
lean_closure_set(v___f_833_, 2, v_toBind_827_);
lean_closure_set(v___f_833_, 3, v_inst_819_);
lean_closure_set(v___f_833_, 4, v_inst_821_);
lean_closure_set(v___f_833_, 5, v_pre_823_);
lean_closure_set(v___f_833_, 6, v_post_824_);
lean_closure_set(v___f_833_, 7, v_x_825_);
lean_closure_set(v___f_833_, 8, v_input_822_);
lean_inc(v_toBind_827_);
v___x_834_ = lean_apply_4(v_toBind_827_, lean_box(0), lean_box(0), v___x_831_, v___f_833_);
v___x_835_ = lean_apply_4(v_toBind_827_, lean_box(0), lean_box(0), v___x_834_, v___f_832_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object* v_m_836_, lean_object* v_inst_837_, lean_object* v_inst_838_, lean_object* v_inst_839_, lean_object* v_input_840_, lean_object* v_pre_841_, lean_object* v_post_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_Lean_Core_transform___redArg(v_inst_837_, v_inst_838_, v_inst_839_, v_input_840_, v_pre_841_, v_post_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object* v_e_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
uint8_t v___x_850_; uint8_t v___x_851_; 
v___x_850_ = 0;
v___x_851_ = l_Lean_Expr_isHeadBetaTarget(v_e_846_, v___x_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec_ref(v_e_846_);
v___x_852_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
else
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = l_Lean_Expr_headBeta(v_e_846_);
v___x_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object* v_e_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_Core_betaReduce___lam__0(v_e_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object* v_e_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_866_, 0, v_e_862_);
v___x_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object* v_e_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_Core_betaReduce___lam__1(v_e_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
return v_res_872_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = l_Lean_maxRecDepthErrorMessage;
v___x_879_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_881_ = l_Lean_MessageData_ofFormat(v___x_880_);
return v___x_881_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_882_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_883_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_884_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v___x_882_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_885_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_888_, 0, v_ref_885_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object* v_x_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v___y_899_; lean_object* v_fileName_908_; lean_object* v_fileMap_909_; lean_object* v_options_910_; lean_object* v_currRecDepth_911_; lean_object* v_maxRecDepth_912_; lean_object* v_ref_913_; lean_object* v_currNamespace_914_; lean_object* v_openDecls_915_; lean_object* v_initHeartbeats_916_; lean_object* v_maxHeartbeats_917_; lean_object* v_quotContext_918_; lean_object* v_currMacroScope_919_; uint8_t v_diag_920_; lean_object* v_cancelTk_x3f_921_; uint8_t v_suppressElabErrors_922_; lean_object* v_inheritedTraceOptions_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_935_; 
v_fileName_908_ = lean_ctor_get(v___y_895_, 0);
v_fileMap_909_ = lean_ctor_get(v___y_895_, 1);
v_options_910_ = lean_ctor_get(v___y_895_, 2);
v_currRecDepth_911_ = lean_ctor_get(v___y_895_, 3);
v_maxRecDepth_912_ = lean_ctor_get(v___y_895_, 4);
v_ref_913_ = lean_ctor_get(v___y_895_, 5);
v_currNamespace_914_ = lean_ctor_get(v___y_895_, 6);
v_openDecls_915_ = lean_ctor_get(v___y_895_, 7);
v_initHeartbeats_916_ = lean_ctor_get(v___y_895_, 8);
v_maxHeartbeats_917_ = lean_ctor_get(v___y_895_, 9);
v_quotContext_918_ = lean_ctor_get(v___y_895_, 10);
v_currMacroScope_919_ = lean_ctor_get(v___y_895_, 11);
v_diag_920_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*14);
v_cancelTk_x3f_921_ = lean_ctor_get(v___y_895_, 12);
v_suppressElabErrors_922_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_923_ = lean_ctor_get(v___y_895_, 13);
v_isSharedCheck_935_ = !lean_is_exclusive(v___y_895_);
if (v_isSharedCheck_935_ == 0)
{
v___x_925_ = v___y_895_;
v_isShared_926_ = v_isSharedCheck_935_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_inheritedTraceOptions_923_);
lean_inc(v_cancelTk_x3f_921_);
lean_inc(v_currMacroScope_919_);
lean_inc(v_quotContext_918_);
lean_inc(v_maxHeartbeats_917_);
lean_inc(v_initHeartbeats_916_);
lean_inc(v_openDecls_915_);
lean_inc(v_currNamespace_914_);
lean_inc(v_ref_913_);
lean_inc(v_maxRecDepth_912_);
lean_inc(v_currRecDepth_911_);
lean_inc(v_options_910_);
lean_inc(v_fileMap_909_);
lean_inc(v_fileName_908_);
lean_dec(v___y_895_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_935_;
goto v_resetjp_924_;
}
v___jp_898_:
{
if (lean_obj_tag(v___y_899_) == 0)
{
return v___y_899_;
}
else
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
v_a_900_ = lean_ctor_get(v___y_899_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___y_899_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___y_899_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___y_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
v_resetjp_924_:
{
uint8_t v___x_927_; 
v___x_927_ = lean_nat_dec_eq(v_currRecDepth_911_, v_maxRecDepth_912_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_928_ = lean_unsigned_to_nat(1u);
v___x_929_ = lean_nat_add(v_currRecDepth_911_, v___x_928_);
lean_dec(v_currRecDepth_911_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 3, v___x_929_);
v___x_931_ = v___x_925_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_fileName_908_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_fileMap_909_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v_options_910_);
lean_ctor_set(v_reuseFailAlloc_933_, 3, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_933_, 4, v_maxRecDepth_912_);
lean_ctor_set(v_reuseFailAlloc_933_, 5, v_ref_913_);
lean_ctor_set(v_reuseFailAlloc_933_, 6, v_currNamespace_914_);
lean_ctor_set(v_reuseFailAlloc_933_, 7, v_openDecls_915_);
lean_ctor_set(v_reuseFailAlloc_933_, 8, v_initHeartbeats_916_);
lean_ctor_set(v_reuseFailAlloc_933_, 9, v_maxHeartbeats_917_);
lean_ctor_set(v_reuseFailAlloc_933_, 10, v_quotContext_918_);
lean_ctor_set(v_reuseFailAlloc_933_, 11, v_currMacroScope_919_);
lean_ctor_set(v_reuseFailAlloc_933_, 12, v_cancelTk_x3f_921_);
lean_ctor_set(v_reuseFailAlloc_933_, 13, v_inheritedTraceOptions_923_);
lean_ctor_set_uint8(v_reuseFailAlloc_933_, sizeof(void*)*14, v_diag_920_);
lean_ctor_set_uint8(v_reuseFailAlloc_933_, sizeof(void*)*14 + 1, v_suppressElabErrors_922_);
v___x_931_ = v_reuseFailAlloc_933_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; 
v___x_932_ = lean_apply_4(v_x_893_, v___y_894_, v___x_931_, v___y_896_, lean_box(0));
v___y_899_ = v___x_932_;
goto v___jp_898_;
}
}
else
{
lean_object* v___x_934_; 
lean_del_object(v___x_925_);
lean_dec_ref(v_inheritedTraceOptions_923_);
lean_dec(v_cancelTk_x3f_921_);
lean_dec(v_currMacroScope_919_);
lean_dec(v_quotContext_918_);
lean_dec(v_maxHeartbeats_917_);
lean_dec(v_initHeartbeats_916_);
lean_dec(v_openDecls_915_);
lean_dec(v_currNamespace_914_);
lean_dec(v_maxRecDepth_912_);
lean_dec(v_currRecDepth_911_);
lean_dec_ref(v_options_910_);
lean_dec_ref(v_fileMap_909_);
lean_dec_ref(v_fileName_908_);
lean_dec(v___y_896_);
lean_dec(v___y_894_);
lean_dec_ref(v_x_893_);
v___x_934_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_913_);
v___y_899_ = v___x_934_;
goto v___jp_898_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_936_, v___y_937_, v___y_938_, v___y_939_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_942_, lean_object* v_x_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_apply_1(v_x_943_, lean_box(0));
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_949_, lean_object* v_x_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(v_00_u03b1_949_, v_x_950_, v___y_951_, v___y_952_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
return v_res_954_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(lean_object* v_a_955_, lean_object* v_x_956_){
_start:
{
if (lean_obj_tag(v_x_956_) == 0)
{
uint8_t v___x_957_; 
v___x_957_ = 0;
return v___x_957_;
}
else
{
lean_object* v_key_958_; lean_object* v_tail_959_; uint8_t v___x_960_; 
v_key_958_ = lean_ctor_get(v_x_956_, 0);
v_tail_959_ = lean_ctor_get(v_x_956_, 2);
v___x_960_ = l_Lean_ExprStructEq_beq(v_key_958_, v_a_955_);
if (v___x_960_ == 0)
{
v_x_956_ = v_tail_959_;
goto _start;
}
else
{
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object* v_a_962_, lean_object* v_x_963_){
_start:
{
uint8_t v_res_964_; lean_object* v_r_965_; 
v_res_964_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(v_a_962_, v_x_963_);
lean_dec(v_x_963_);
lean_dec_ref(v_a_962_);
v_r_965_ = lean_box(v_res_964_);
return v_r_965_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object* v_x_966_, lean_object* v_x_967_){
_start:
{
if (lean_obj_tag(v_x_967_) == 0)
{
return v_x_966_;
}
else
{
lean_object* v_key_968_; lean_object* v_value_969_; lean_object* v_tail_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_993_; 
v_key_968_ = lean_ctor_get(v_x_967_, 0);
v_value_969_ = lean_ctor_get(v_x_967_, 1);
v_tail_970_ = lean_ctor_get(v_x_967_, 2);
v_isSharedCheck_993_ = !lean_is_exclusive(v_x_967_);
if (v_isSharedCheck_993_ == 0)
{
v___x_972_ = v_x_967_;
v_isShared_973_ = v_isSharedCheck_993_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_tail_970_);
lean_inc(v_value_969_);
lean_inc(v_key_968_);
lean_dec(v_x_967_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_993_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; uint64_t v___x_975_; uint64_t v___x_976_; uint64_t v___x_977_; uint64_t v_fold_978_; uint64_t v___x_979_; uint64_t v___x_980_; uint64_t v___x_981_; size_t v___x_982_; size_t v___x_983_; size_t v___x_984_; size_t v___x_985_; size_t v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_974_ = lean_array_get_size(v_x_966_);
v___x_975_ = l_Lean_ExprStructEq_hash(v_key_968_);
v___x_976_ = 32ULL;
v___x_977_ = lean_uint64_shift_right(v___x_975_, v___x_976_);
v_fold_978_ = lean_uint64_xor(v___x_975_, v___x_977_);
v___x_979_ = 16ULL;
v___x_980_ = lean_uint64_shift_right(v_fold_978_, v___x_979_);
v___x_981_ = lean_uint64_xor(v_fold_978_, v___x_980_);
v___x_982_ = lean_uint64_to_usize(v___x_981_);
v___x_983_ = lean_usize_of_nat(v___x_974_);
v___x_984_ = ((size_t)1ULL);
v___x_985_ = lean_usize_sub(v___x_983_, v___x_984_);
v___x_986_ = lean_usize_land(v___x_982_, v___x_985_);
v___x_987_ = lean_array_uget_borrowed(v_x_966_, v___x_986_);
lean_inc(v___x_987_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 2, v___x_987_);
v___x_989_ = v___x_972_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_key_968_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_value_969_);
lean_ctor_set(v_reuseFailAlloc_992_, 2, v___x_987_);
v___x_989_ = v_reuseFailAlloc_992_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_object* v___x_990_; 
v___x_990_ = lean_array_uset(v_x_966_, v___x_986_, v___x_989_);
v_x_966_ = v___x_990_;
v_x_967_ = v_tail_970_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object* v_i_994_, lean_object* v_source_995_, lean_object* v_target_996_){
_start:
{
lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_997_ = lean_array_get_size(v_source_995_);
v___x_998_ = lean_nat_dec_lt(v_i_994_, v___x_997_);
if (v___x_998_ == 0)
{
lean_dec_ref(v_source_995_);
lean_dec(v_i_994_);
return v_target_996_;
}
else
{
lean_object* v_es_999_; lean_object* v___x_1000_; lean_object* v_source_1001_; lean_object* v_target_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v_es_999_ = lean_array_fget(v_source_995_, v_i_994_);
v___x_1000_ = lean_box(0);
v_source_1001_ = lean_array_fset(v_source_995_, v_i_994_, v___x_1000_);
v_target_1002_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_target_996_, v_es_999_);
v___x_1003_ = lean_unsigned_to_nat(1u);
v___x_1004_ = lean_nat_add(v_i_994_, v___x_1003_);
lean_dec(v_i_994_);
v_i_994_ = v___x_1004_;
v_source_995_ = v_source_1001_;
v_target_996_ = v_target_1002_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_data_1006_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v_nbuckets_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1007_ = lean_array_get_size(v_data_1006_);
v___x_1008_ = lean_unsigned_to_nat(2u);
v_nbuckets_1009_ = lean_nat_mul(v___x_1007_, v___x_1008_);
v___x_1010_ = lean_unsigned_to_nat(0u);
v___x_1011_ = lean_box(0);
v___x_1012_ = lean_mk_array(v_nbuckets_1009_, v___x_1011_);
v___x_1013_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v___x_1010_, v_data_1006_, v___x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_a_1014_, lean_object* v_b_1015_, lean_object* v_x_1016_){
_start:
{
if (lean_obj_tag(v_x_1016_) == 0)
{
lean_dec(v_b_1015_);
lean_dec_ref(v_a_1014_);
return v_x_1016_;
}
else
{
lean_object* v_key_1017_; lean_object* v_value_1018_; lean_object* v_tail_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1031_; 
v_key_1017_ = lean_ctor_get(v_x_1016_, 0);
v_value_1018_ = lean_ctor_get(v_x_1016_, 1);
v_tail_1019_ = lean_ctor_get(v_x_1016_, 2);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_x_1016_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1021_ = v_x_1016_;
v_isShared_1022_ = v_isSharedCheck_1031_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_tail_1019_);
lean_inc(v_value_1018_);
lean_inc(v_key_1017_);
lean_dec(v_x_1016_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1031_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
uint8_t v___x_1023_; 
v___x_1023_ = l_Lean_ExprStructEq_beq(v_key_1017_, v_a_1014_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1026_; 
v___x_1024_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1014_, v_b_1015_, v_tail_1019_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 2, v___x_1024_);
v___x_1026_ = v___x_1021_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_key_1017_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_value_1018_);
lean_ctor_set(v_reuseFailAlloc_1027_, 2, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
else
{
lean_object* v___x_1029_; 
lean_dec(v_value_1018_);
lean_dec(v_key_1017_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 1, v_b_1015_);
lean_ctor_set(v___x_1021_, 0, v_a_1014_);
v___x_1029_ = v___x_1021_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1014_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_b_1015_);
lean_ctor_set(v_reuseFailAlloc_1030_, 2, v_tail_1019_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object* v_m_1032_, lean_object* v_a_1033_, lean_object* v_b_1034_){
_start:
{
lean_object* v_size_1035_; lean_object* v_buckets_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1079_; 
v_size_1035_ = lean_ctor_get(v_m_1032_, 0);
v_buckets_1036_ = lean_ctor_get(v_m_1032_, 1);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_m_1032_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1038_ = v_m_1032_;
v_isShared_1039_ = v_isSharedCheck_1079_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_buckets_1036_);
lean_inc(v_size_1035_);
lean_dec(v_m_1032_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1079_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; uint64_t v___x_1041_; uint64_t v___x_1042_; uint64_t v___x_1043_; uint64_t v_fold_1044_; uint64_t v___x_1045_; uint64_t v___x_1046_; uint64_t v___x_1047_; size_t v___x_1048_; size_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; size_t v___x_1052_; lean_object* v_bkt_1053_; uint8_t v___x_1054_; 
v___x_1040_ = lean_array_get_size(v_buckets_1036_);
v___x_1041_ = l_Lean_ExprStructEq_hash(v_a_1033_);
v___x_1042_ = 32ULL;
v___x_1043_ = lean_uint64_shift_right(v___x_1041_, v___x_1042_);
v_fold_1044_ = lean_uint64_xor(v___x_1041_, v___x_1043_);
v___x_1045_ = 16ULL;
v___x_1046_ = lean_uint64_shift_right(v_fold_1044_, v___x_1045_);
v___x_1047_ = lean_uint64_xor(v_fold_1044_, v___x_1046_);
v___x_1048_ = lean_uint64_to_usize(v___x_1047_);
v___x_1049_ = lean_usize_of_nat(v___x_1040_);
v___x_1050_ = ((size_t)1ULL);
v___x_1051_ = lean_usize_sub(v___x_1049_, v___x_1050_);
v___x_1052_ = lean_usize_land(v___x_1048_, v___x_1051_);
v_bkt_1053_ = lean_array_uget_borrowed(v_buckets_1036_, v___x_1052_);
v___x_1054_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(v_a_1033_, v_bkt_1053_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; lean_object* v_size_x27_1056_; lean_object* v___x_1057_; lean_object* v_buckets_x27_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; 
v___x_1055_ = lean_unsigned_to_nat(1u);
v_size_x27_1056_ = lean_nat_add(v_size_1035_, v___x_1055_);
lean_dec(v_size_1035_);
lean_inc(v_bkt_1053_);
v___x_1057_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1057_, 0, v_a_1033_);
lean_ctor_set(v___x_1057_, 1, v_b_1034_);
lean_ctor_set(v___x_1057_, 2, v_bkt_1053_);
v_buckets_x27_1058_ = lean_array_uset(v_buckets_1036_, v___x_1052_, v___x_1057_);
v___x_1059_ = lean_unsigned_to_nat(4u);
v___x_1060_ = lean_nat_mul(v_size_x27_1056_, v___x_1059_);
v___x_1061_ = lean_unsigned_to_nat(3u);
v___x_1062_ = lean_nat_div(v___x_1060_, v___x_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_array_get_size(v_buckets_x27_1058_);
v___x_1064_ = lean_nat_dec_le(v___x_1062_, v___x_1063_);
lean_dec(v___x_1062_);
if (v___x_1064_ == 0)
{
lean_object* v_val_1065_; lean_object* v___x_1067_; 
v_val_1065_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_buckets_x27_1058_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 1, v_val_1065_);
lean_ctor_set(v___x_1038_, 0, v_size_x27_1056_);
v___x_1067_ = v___x_1038_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_size_x27_1056_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v_val_1065_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
else
{
lean_object* v___x_1070_; 
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 1, v_buckets_x27_1058_);
lean_ctor_set(v___x_1038_, 0, v_size_x27_1056_);
v___x_1070_ = v___x_1038_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_size_x27_1056_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_buckets_x27_1058_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
else
{
lean_object* v___x_1072_; lean_object* v_buckets_x27_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
lean_inc(v_bkt_1053_);
v___x_1072_ = lean_box(0);
v_buckets_x27_1073_ = lean_array_uset(v_buckets_1036_, v___x_1052_, v___x_1072_);
v___x_1074_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1033_, v_b_1034_, v_bkt_1053_);
v___x_1075_ = lean_array_uset(v_buckets_x27_1073_, v___x_1052_, v___x_1074_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 1, v___x_1075_);
v___x_1077_ = v___x_1038_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_size_1035_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object* v_a_1080_, lean_object* v_e_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1084_ = lean_st_ref_take(v_a_1080_);
v___x_1085_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v___x_1084_, v_e_1081_, v_a_1082_);
v___x_1086_ = lean_st_ref_set(v_a_1080_, v___x_1085_);
v___x_1087_ = lean_box(0);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object* v_a_1088_, lean_object* v_e_1089_, lean_object* v_a_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(v_a_1088_, v_e_1089_, v_a_1090_);
lean_dec(v_a_1088_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_1093_, lean_object* v_x_1094_){
_start:
{
if (lean_obj_tag(v_x_1094_) == 0)
{
lean_object* v___x_1095_; 
v___x_1095_ = lean_box(0);
return v___x_1095_;
}
else
{
lean_object* v_key_1096_; lean_object* v_value_1097_; lean_object* v_tail_1098_; uint8_t v___x_1099_; 
v_key_1096_ = lean_ctor_get(v_x_1094_, 0);
v_value_1097_ = lean_ctor_get(v_x_1094_, 1);
v_tail_1098_ = lean_ctor_get(v_x_1094_, 2);
v___x_1099_ = l_Lean_ExprStructEq_beq(v_key_1096_, v_a_1093_);
if (v___x_1099_ == 0)
{
v_x_1094_ = v_tail_1098_;
goto _start;
}
else
{
lean_object* v___x_1101_; 
lean_inc(v_value_1097_);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_value_1097_);
return v___x_1101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_1102_, lean_object* v_x_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1102_, v_x_1103_);
lean_dec(v_x_1103_);
lean_dec_ref(v_a_1102_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object* v_m_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_buckets_1107_; lean_object* v___x_1108_; uint64_t v___x_1109_; uint64_t v___x_1110_; uint64_t v___x_1111_; uint64_t v_fold_1112_; uint64_t v___x_1113_; uint64_t v___x_1114_; uint64_t v___x_1115_; size_t v___x_1116_; size_t v___x_1117_; size_t v___x_1118_; size_t v___x_1119_; size_t v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_buckets_1107_ = lean_ctor_get(v_m_1105_, 1);
v___x_1108_ = lean_array_get_size(v_buckets_1107_);
v___x_1109_ = l_Lean_ExprStructEq_hash(v_a_1106_);
v___x_1110_ = 32ULL;
v___x_1111_ = lean_uint64_shift_right(v___x_1109_, v___x_1110_);
v_fold_1112_ = lean_uint64_xor(v___x_1109_, v___x_1111_);
v___x_1113_ = 16ULL;
v___x_1114_ = lean_uint64_shift_right(v_fold_1112_, v___x_1113_);
v___x_1115_ = lean_uint64_xor(v_fold_1112_, v___x_1114_);
v___x_1116_ = lean_uint64_to_usize(v___x_1115_);
v___x_1117_ = lean_usize_of_nat(v___x_1108_);
v___x_1118_ = ((size_t)1ULL);
v___x_1119_ = lean_usize_sub(v___x_1117_, v___x_1118_);
v___x_1120_ = lean_usize_land(v___x_1116_, v___x_1119_);
v___x_1121_ = lean_array_uget_borrowed(v_buckets_1107_, v___x_1120_);
v___x_1122_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1106_, v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1123_, v_a_1124_);
lean_dec_ref(v_a_1124_);
lean_dec_ref(v_m_1123_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object* v_pre_1126_, lean_object* v_post_1127_, size_t v_sz_1128_, size_t v_i_1129_, lean_object* v_bs_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
uint8_t v___x_1135_; 
v___x_1135_ = lean_usize_dec_lt(v_i_1129_, v_sz_1128_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v_post_1127_);
lean_dec_ref(v_pre_1126_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_bs_1130_);
return v___x_1136_;
}
else
{
lean_object* v_v_1137_; lean_object* v___x_1138_; 
v_v_1137_ = lean_array_uget_borrowed(v_bs_1130_, v_i_1129_);
lean_inc(v___y_1133_);
lean_inc_ref(v___y_1132_);
lean_inc(v___y_1131_);
lean_inc(v_v_1137_);
lean_inc_ref(v_post_1127_);
lean_inc_ref(v_pre_1126_);
v___x_1138_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1126_, v_post_1127_, v_v_1137_, v___y_1131_, v___y_1132_, v___y_1133_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1140_; lean_object* v_bs_x27_1141_; size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; 
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_a_1139_);
lean_dec_ref(v___x_1138_);
v___x_1140_ = lean_unsigned_to_nat(0u);
v_bs_x27_1141_ = lean_array_uset(v_bs_1130_, v_i_1129_, v___x_1140_);
v___x_1142_ = ((size_t)1ULL);
v___x_1143_ = lean_usize_add(v_i_1129_, v___x_1142_);
v___x_1144_ = lean_array_uset(v_bs_x27_1141_, v_i_1129_, v_a_1139_);
v_i_1129_ = v___x_1143_;
v_bs_1130_ = v___x_1144_;
goto _start;
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v_bs_1130_);
lean_dec_ref(v_post_1127_);
lean_dec_ref(v_pre_1126_);
v_a_1146_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1138_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1138_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object* v_pre_1154_, lean_object* v_post_1155_, lean_object* v_x_1156_, lean_object* v_x_1157_, lean_object* v_x_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
if (lean_obj_tag(v_x_1156_) == 5)
{
lean_object* v_fn_1163_; lean_object* v_arg_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v_fn_1163_ = lean_ctor_get(v_x_1156_, 0);
lean_inc_ref(v_fn_1163_);
v_arg_1164_ = lean_ctor_get(v_x_1156_, 1);
lean_inc_ref(v_arg_1164_);
lean_dec_ref(v_x_1156_);
v___x_1165_ = lean_array_set(v_x_1157_, v_x_1158_, v_arg_1164_);
v___x_1166_ = lean_unsigned_to_nat(1u);
v___x_1167_ = lean_nat_sub(v_x_1158_, v___x_1166_);
lean_dec(v_x_1158_);
v_x_1156_ = v_fn_1163_;
v_x_1157_ = v___x_1165_;
v_x_1158_ = v___x_1167_;
goto _start;
}
else
{
lean_object* v___x_1169_; 
lean_dec(v_x_1158_);
lean_inc(v___y_1161_);
lean_inc_ref(v___y_1160_);
lean_inc(v___y_1159_);
lean_inc_ref(v_post_1155_);
lean_inc_ref(v_pre_1154_);
v___x_1169_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1154_, v_post_1155_, v_x_1156_, v___y_1159_, v___y_1160_, v___y_1161_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; size_t v_sz_1171_; size_t v___x_1172_; lean_object* v___x_1173_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref(v___x_1169_);
v_sz_1171_ = lean_array_size(v_x_1157_);
v___x_1172_ = ((size_t)0ULL);
lean_inc(v___y_1161_);
lean_inc_ref(v___y_1160_);
lean_inc(v___y_1159_);
lean_inc_ref(v_post_1155_);
lean_inc_ref(v_pre_1154_);
v___x_1173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1154_, v_post_1155_, v_sz_1171_, v___x_1172_, v_x_1157_, v___y_1159_, v___y_1160_, v___y_1161_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref(v___x_1173_);
v___x_1175_ = l_Lean_mkAppN(v_a_1170_, v_a_1174_);
lean_dec(v_a_1174_);
v___x_1176_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1154_, v_post_1155_, v___x_1175_, v___y_1159_, v___y_1160_, v___y_1161_);
return v___x_1176_;
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
lean_dec(v_a_1170_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v_post_1155_);
lean_dec_ref(v_pre_1154_);
v_a_1177_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1173_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1173_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
else
{
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v_x_1157_);
lean_dec_ref(v_post_1155_);
lean_dec_ref(v_pre_1154_);
return v___x_1169_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object* v_pre_1185_, lean_object* v_e_1186_, lean_object* v_post_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v___y_1193_; lean_object* v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; uint8_t v___y_1200_; uint8_t v___y_1210_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; uint8_t v___y_1215_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; uint8_t v___y_1227_; uint8_t v___y_1228_; lean_object* v___x_1235_; 
lean_inc_ref(v_pre_1185_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc_ref(v_e_1186_);
v___x_1235_ = lean_apply_4(v_pre_1185_, v_e_1186_, v___y_1189_, v___y_1190_, lean_box(0));
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1325_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1238_ = v___x_1235_;
v_isShared_1239_ = v_isSharedCheck_1325_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1235_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1325_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___y_1241_; 
switch(lean_obj_tag(v_a_1236_))
{
case 0:
{
lean_object* v_e_1315_; lean_object* v___x_1317_; 
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_e_1186_);
lean_dec_ref(v_pre_1185_);
v_e_1315_ = lean_ctor_get(v_a_1236_, 0);
lean_inc_ref(v_e_1315_);
lean_dec_ref(v_a_1236_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v_e_1315_);
v___x_1317_ = v___x_1238_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_e_1315_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
case 1:
{
lean_object* v_e_1319_; lean_object* v___x_1320_; 
lean_del_object(v___x_1238_);
lean_dec_ref(v_e_1186_);
v_e_1319_ = lean_ctor_get(v_a_1236_, 0);
lean_inc_ref(v_e_1319_);
lean_dec_ref(v_a_1236_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1320_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_e_1319_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref(v___x_1320_);
v___x_1322_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v_a_1321_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1322_;
}
else
{
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1320_;
}
}
default: 
{
lean_object* v_e_x3f_1323_; 
lean_del_object(v___x_1238_);
v_e_x3f_1323_ = lean_ctor_get(v_a_1236_, 0);
lean_inc(v_e_x3f_1323_);
lean_dec_ref(v_a_1236_);
if (lean_obj_tag(v_e_x3f_1323_) == 0)
{
v___y_1241_ = v_e_1186_;
goto v___jp_1240_;
}
else
{
lean_object* v_val_1324_; 
lean_dec_ref(v_e_1186_);
v_val_1324_ = lean_ctor_get(v_e_x3f_1323_, 0);
lean_inc(v_val_1324_);
lean_dec_ref(v_e_x3f_1323_);
v___y_1241_ = v_val_1324_;
goto v___jp_1240_;
}
}
}
v___jp_1240_:
{
switch(lean_obj_tag(v___y_1241_))
{
case 7:
{
lean_object* v_binderName_1242_; lean_object* v_binderType_1243_; lean_object* v_body_1244_; uint8_t v_binderInfo_1245_; lean_object* v___x_1246_; 
v_binderName_1242_ = lean_ctor_get(v___y_1241_, 0);
lean_inc(v_binderName_1242_);
v_binderType_1243_ = lean_ctor_get(v___y_1241_, 1);
v_body_1244_ = lean_ctor_get(v___y_1241_, 2);
v_binderInfo_1245_ = lean_ctor_get_uint8(v___y_1241_, sizeof(void*)*3 + 8);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_binderType_1243_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1246_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_binderType_1243_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1248_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref(v___x_1246_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_body_1244_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1248_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_body_1244_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; size_t v___x_1250_; size_t v___x_1251_; uint8_t v___x_1252_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = lean_ptr_addr(v_binderType_1243_);
v___x_1251_ = lean_ptr_addr(v_a_1247_);
v___x_1252_ = lean_usize_dec_eq(v___x_1250_, v___x_1251_);
if (v___x_1252_ == 0)
{
v___y_1223_ = v_a_1249_;
v___y_1224_ = v_a_1247_;
v___y_1225_ = v_binderName_1242_;
v___y_1226_ = v___y_1241_;
v___y_1227_ = v_binderInfo_1245_;
v___y_1228_ = v___x_1252_;
goto v___jp_1222_;
}
else
{
size_t v___x_1253_; size_t v___x_1254_; uint8_t v___x_1255_; 
v___x_1253_ = lean_ptr_addr(v_body_1244_);
v___x_1254_ = lean_ptr_addr(v_a_1249_);
v___x_1255_ = lean_usize_dec_eq(v___x_1253_, v___x_1254_);
v___y_1223_ = v_a_1249_;
v___y_1224_ = v_a_1247_;
v___y_1225_ = v_binderName_1242_;
v___y_1226_ = v___y_1241_;
v___y_1227_ = v_binderInfo_1245_;
v___y_1228_ = v___x_1255_;
goto v___jp_1222_;
}
}
else
{
lean_dec(v_a_1247_);
lean_dec_ref(v___y_1241_);
lean_dec(v_binderName_1242_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1248_;
}
}
else
{
lean_dec_ref(v___y_1241_);
lean_dec(v_binderName_1242_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1246_;
}
}
case 6:
{
lean_object* v_binderName_1256_; lean_object* v_binderType_1257_; lean_object* v_body_1258_; uint8_t v_binderInfo_1259_; lean_object* v___x_1260_; 
v_binderName_1256_ = lean_ctor_get(v___y_1241_, 0);
lean_inc(v_binderName_1256_);
v_binderType_1257_ = lean_ctor_get(v___y_1241_, 1);
v_body_1258_ = lean_ctor_get(v___y_1241_, 2);
v_binderInfo_1259_ = lean_ctor_get_uint8(v___y_1241_, sizeof(void*)*3 + 8);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_binderType_1257_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1260_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_binderType_1257_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref(v___x_1260_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_body_1258_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1262_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_body_1258_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; size_t v___x_1264_; size_t v___x_1265_; uint8_t v___x_1266_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_a_1263_);
lean_dec_ref(v___x_1262_);
v___x_1264_ = lean_ptr_addr(v_binderType_1257_);
v___x_1265_ = lean_ptr_addr(v_a_1261_);
v___x_1266_ = lean_usize_dec_eq(v___x_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
v___y_1210_ = v_binderInfo_1259_;
v___y_1211_ = v_a_1263_;
v___y_1212_ = v___y_1241_;
v___y_1213_ = v_a_1261_;
v___y_1214_ = v_binderName_1256_;
v___y_1215_ = v___x_1266_;
goto v___jp_1209_;
}
else
{
size_t v___x_1267_; size_t v___x_1268_; uint8_t v___x_1269_; 
v___x_1267_ = lean_ptr_addr(v_body_1258_);
v___x_1268_ = lean_ptr_addr(v_a_1263_);
v___x_1269_ = lean_usize_dec_eq(v___x_1267_, v___x_1268_);
v___y_1210_ = v_binderInfo_1259_;
v___y_1211_ = v_a_1263_;
v___y_1212_ = v___y_1241_;
v___y_1213_ = v_a_1261_;
v___y_1214_ = v_binderName_1256_;
v___y_1215_ = v___x_1269_;
goto v___jp_1209_;
}
}
else
{
lean_dec(v_a_1261_);
lean_dec_ref(v___y_1241_);
lean_dec(v_binderName_1256_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1262_;
}
}
else
{
lean_dec(v_binderName_1256_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1260_;
}
}
case 8:
{
lean_object* v_declName_1270_; lean_object* v_type_1271_; lean_object* v_value_1272_; lean_object* v_body_1273_; uint8_t v_nondep_1274_; lean_object* v___x_1275_; 
v_declName_1270_ = lean_ctor_get(v___y_1241_, 0);
lean_inc(v_declName_1270_);
v_type_1271_ = lean_ctor_get(v___y_1241_, 1);
v_value_1272_ = lean_ctor_get(v___y_1241_, 2);
v_body_1273_ = lean_ctor_get(v___y_1241_, 3);
lean_inc_ref(v_body_1273_);
v_nondep_1274_ = lean_ctor_get_uint8(v___y_1241_, sizeof(void*)*4 + 8);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_type_1271_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1275_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_type_1271_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1277_; 
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
lean_inc(v_a_1276_);
lean_dec_ref(v___x_1275_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_value_1272_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1277_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_value_1272_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref(v___x_1277_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_body_1273_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1279_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_body_1273_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; size_t v___x_1281_; size_t v___x_1282_; uint8_t v___x_1283_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref(v___x_1279_);
v___x_1281_ = lean_ptr_addr(v_type_1271_);
v___x_1282_ = lean_ptr_addr(v_a_1276_);
v___x_1283_ = lean_usize_dec_eq(v___x_1281_, v___x_1282_);
if (v___x_1283_ == 0)
{
v___y_1193_ = v_nondep_1274_;
v___y_1194_ = v_a_1278_;
v___y_1195_ = v___y_1241_;
v___y_1196_ = v_a_1276_;
v___y_1197_ = v_a_1280_;
v___y_1198_ = v_declName_1270_;
v___y_1199_ = v_body_1273_;
v___y_1200_ = v___x_1283_;
goto v___jp_1192_;
}
else
{
size_t v___x_1284_; size_t v___x_1285_; uint8_t v___x_1286_; 
v___x_1284_ = lean_ptr_addr(v_value_1272_);
v___x_1285_ = lean_ptr_addr(v_a_1278_);
v___x_1286_ = lean_usize_dec_eq(v___x_1284_, v___x_1285_);
v___y_1193_ = v_nondep_1274_;
v___y_1194_ = v_a_1278_;
v___y_1195_ = v___y_1241_;
v___y_1196_ = v_a_1276_;
v___y_1197_ = v_a_1280_;
v___y_1198_ = v_declName_1270_;
v___y_1199_ = v_body_1273_;
v___y_1200_ = v___x_1286_;
goto v___jp_1192_;
}
}
else
{
lean_dec(v_a_1278_);
lean_dec(v_a_1276_);
lean_dec_ref(v_body_1273_);
lean_dec(v_declName_1270_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1279_;
}
}
else
{
lean_dec(v_a_1276_);
lean_dec_ref(v_body_1273_);
lean_dec(v_declName_1270_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1277_;
}
}
else
{
lean_dec_ref(v_body_1273_);
lean_dec_ref(v___y_1241_);
lean_dec(v_declName_1270_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1275_;
}
}
case 5:
{
lean_object* v_dummy_1287_; lean_object* v_nargs_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v_dummy_1287_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_1288_ = l_Lean_Expr_getAppNumArgs(v___y_1241_);
lean_inc(v_nargs_1288_);
v___x_1289_ = lean_mk_array(v_nargs_1288_, v_dummy_1287_);
v___x_1290_ = lean_unsigned_to_nat(1u);
v___x_1291_ = lean_nat_sub(v_nargs_1288_, v___x_1290_);
lean_dec(v_nargs_1288_);
v___x_1292_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1185_, v_post_1187_, v___y_1241_, v___x_1289_, v___x_1291_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1292_;
}
case 10:
{
lean_object* v_data_1293_; lean_object* v_expr_1294_; lean_object* v___x_1295_; 
v_data_1293_ = lean_ctor_get(v___y_1241_, 0);
v_expr_1294_ = lean_ctor_get(v___y_1241_, 1);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_expr_1294_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1295_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_expr_1294_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; size_t v___x_1297_; size_t v___x_1298_; uint8_t v___x_1299_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
lean_inc(v_a_1296_);
lean_dec_ref(v___x_1295_);
v___x_1297_ = lean_ptr_addr(v_expr_1294_);
v___x_1298_ = lean_ptr_addr(v_a_1296_);
v___x_1299_ = lean_usize_dec_eq(v___x_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_inc(v_data_1293_);
lean_dec_ref(v___y_1241_);
v___x_1300_ = l_Lean_Expr_mdata___override(v_data_1293_, v_a_1296_);
v___x_1301_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1300_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1301_;
}
else
{
lean_object* v___x_1302_; 
lean_dec(v_a_1296_);
v___x_1302_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___y_1241_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1302_;
}
}
else
{
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1295_;
}
}
case 11:
{
lean_object* v_typeName_1303_; lean_object* v_idx_1304_; lean_object* v_struct_1305_; lean_object* v___x_1306_; 
v_typeName_1303_ = lean_ctor_get(v___y_1241_, 0);
v_idx_1304_ = lean_ctor_get(v___y_1241_, 1);
v_struct_1305_ = lean_ctor_get(v___y_1241_, 2);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v_struct_1305_);
lean_inc_ref(v_post_1187_);
lean_inc_ref(v_pre_1185_);
v___x_1306_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1185_, v_post_1187_, v_struct_1305_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; size_t v___x_1308_; size_t v___x_1309_; uint8_t v___x_1310_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref(v___x_1306_);
v___x_1308_ = lean_ptr_addr(v_struct_1305_);
v___x_1309_ = lean_ptr_addr(v_a_1307_);
v___x_1310_ = lean_usize_dec_eq(v___x_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
lean_inc(v_idx_1304_);
lean_inc(v_typeName_1303_);
lean_dec_ref(v___y_1241_);
v___x_1311_ = l_Lean_Expr_proj___override(v_typeName_1303_, v_idx_1304_, v_a_1307_);
v___x_1312_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1311_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1312_;
}
else
{
lean_object* v___x_1313_; 
lean_dec(v_a_1307_);
v___x_1313_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___y_1241_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1313_;
}
}
else
{
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1185_);
return v___x_1306_;
}
}
default: 
{
lean_object* v___x_1314_; 
v___x_1314_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___y_1241_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1314_;
}
}
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_e_1186_);
lean_dec_ref(v_pre_1185_);
v_a_1326_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1235_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1235_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
v___jp_1192_:
{
if (v___y_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
lean_dec_ref(v___y_1199_);
lean_dec_ref(v___y_1195_);
v___x_1201_ = l_Lean_Expr_letE___override(v___y_1198_, v___y_1196_, v___y_1194_, v___y_1197_, v___y_1193_);
v___x_1202_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1201_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1202_;
}
else
{
size_t v___x_1203_; size_t v___x_1204_; uint8_t v___x_1205_; 
v___x_1203_ = lean_ptr_addr(v___y_1199_);
lean_dec_ref(v___y_1199_);
v___x_1204_ = lean_ptr_addr(v___y_1197_);
v___x_1205_ = lean_usize_dec_eq(v___x_1203_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec_ref(v___y_1195_);
v___x_1206_ = l_Lean_Expr_letE___override(v___y_1198_, v___y_1196_, v___y_1194_, v___y_1197_, v___y_1193_);
v___x_1207_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1206_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; 
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec_ref(v___y_1194_);
v___x_1208_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___y_1195_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1208_;
}
}
}
v___jp_1209_:
{
if (v___y_1215_ == 0)
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_dec_ref(v___y_1212_);
v___x_1216_ = l_Lean_Expr_lam___override(v___y_1214_, v___y_1213_, v___y_1211_, v___y_1210_);
v___x_1217_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1216_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1217_;
}
else
{
uint8_t v___x_1218_; 
v___x_1218_ = l_Lean_instBEqBinderInfo_beq(v___y_1210_, v___y_1210_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
lean_dec_ref(v___y_1212_);
v___x_1219_ = l_Lean_Expr_lam___override(v___y_1214_, v___y_1213_, v___y_1211_, v___y_1210_);
v___x_1220_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1219_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1220_;
}
else
{
lean_object* v___x_1221_; 
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v___y_1211_);
v___x_1221_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___y_1212_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1221_;
}
}
}
v___jp_1222_:
{
if (v___y_1228_ == 0)
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec_ref(v___y_1226_);
v___x_1229_ = l_Lean_Expr_forallE___override(v___y_1225_, v___y_1224_, v___y_1223_, v___y_1227_);
v___x_1230_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1229_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1230_;
}
else
{
uint8_t v___x_1231_; 
v___x_1231_ = l_Lean_instBEqBinderInfo_beq(v___y_1227_, v___y_1227_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_dec_ref(v___y_1226_);
v___x_1232_ = l_Lean_Expr_forallE___override(v___y_1225_, v___y_1224_, v___y_1223_, v___y_1227_);
v___x_1233_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___x_1232_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1233_;
}
else
{
lean_object* v___x_1234_; 
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec_ref(v___y_1223_);
v___x_1234_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1185_, v_post_1187_, v___y_1226_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object* v_pre_1334_, lean_object* v_e_1335_, lean_object* v_post_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(v_pre_1334_, v_e_1335_, v_post_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object* v_pre_1342_, lean_object* v_post_1343_, lean_object* v_e_1344_, lean_object* v_a_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_inc(v_a_1345_);
v___x_1349_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1349_, 0, lean_box(0));
lean_closure_set(v___x_1349_, 1, lean_box(0));
lean_closure_set(v___x_1349_, 2, v_a_1345_);
v___x_1350_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___x_1349_, v___y_1346_, v___y_1347_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1381_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1353_ = v___x_1350_;
v_isShared_1354_ = v_isSharedCheck_1381_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1350_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1381_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_1351_, v_e_1344_);
lean_dec(v_a_1351_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v___f_1356_; lean_object* v___x_1357_; 
lean_del_object(v___x_1353_);
lean_inc_ref(v_e_1344_);
v___f_1356_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed), 7, 3);
lean_closure_set(v___f_1356_, 0, v_pre_1342_);
lean_closure_set(v___f_1356_, 1, v_e_1344_);
lean_closure_set(v___f_1356_, 2, v_post_1343_);
lean_inc(v___y_1347_);
lean_inc_ref(v___y_1346_);
lean_inc(v_a_1345_);
v___x_1357_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v___f_1356_, v_a_1345_, v___y_1346_, v___y_1347_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___f_1359_; lean_object* v___x_1360_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref(v___x_1357_);
lean_inc(v_a_1358_);
v___f_1359_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1359_, 0, v_a_1345_);
lean_closure_set(v___f_1359_, 1, v_e_1344_);
lean_closure_set(v___f_1359_, 2, v_a_1358_);
v___x_1360_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___f_1359_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1367_ == 0)
{
lean_object* v_unused_1368_; 
v_unused_1368_ = lean_ctor_get(v___x_1360_, 0);
lean_dec(v_unused_1368_);
v___x_1362_ = v___x_1360_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_dec(v___x_1360_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 0, v_a_1358_);
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1358_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
lean_dec(v_a_1358_);
v_a_1369_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1360_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1360_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
else
{
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_e_1344_);
return v___x_1357_;
}
}
else
{
lean_object* v_val_1377_; lean_object* v___x_1379_; 
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_e_1344_);
lean_dec_ref(v_post_1343_);
lean_dec_ref(v_pre_1342_);
v_val_1377_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_val_1377_);
lean_dec_ref(v___x_1355_);
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 0, v_val_1377_);
v___x_1379_ = v___x_1353_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_val_1377_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_e_1344_);
lean_dec_ref(v_post_1343_);
lean_dec_ref(v_pre_1342_);
v_a_1382_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1350_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1350_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object* v_pre_1390_, lean_object* v_post_1391_, lean_object* v_e_1392_, lean_object* v_a_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v___x_1397_; 
lean_inc_ref(v_post_1391_);
lean_inc(v___y_1395_);
lean_inc_ref(v___y_1394_);
lean_inc_ref(v_e_1392_);
v___x_1397_ = lean_apply_4(v_post_1391_, v_e_1392_, v___y_1394_, v___y_1395_, lean_box(0));
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1416_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1416_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1416_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
switch(lean_obj_tag(v_a_1398_))
{
case 0:
{
lean_object* v_e_1402_; lean_object* v___x_1404_; 
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_e_1392_);
lean_dec_ref(v_post_1391_);
lean_dec_ref(v_pre_1390_);
v_e_1402_ = lean_ctor_get(v_a_1398_, 0);
lean_inc_ref(v_e_1402_);
lean_dec_ref(v_a_1398_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_e_1402_);
v___x_1404_ = v___x_1400_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_e_1402_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
case 1:
{
lean_object* v_e_1406_; lean_object* v___x_1407_; 
lean_del_object(v___x_1400_);
lean_dec_ref(v_e_1392_);
v_e_1406_ = lean_ctor_get(v_a_1398_, 0);
lean_inc_ref(v_e_1406_);
lean_dec_ref(v_a_1398_);
v___x_1407_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1390_, v_post_1391_, v_e_1406_, v_a_1393_, v___y_1394_, v___y_1395_);
return v___x_1407_;
}
default: 
{
lean_object* v_e_x3f_1408_; 
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_post_1391_);
lean_dec_ref(v_pre_1390_);
v_e_x3f_1408_ = lean_ctor_get(v_a_1398_, 0);
lean_inc(v_e_x3f_1408_);
lean_dec_ref(v_a_1398_);
if (lean_obj_tag(v_e_x3f_1408_) == 0)
{
lean_object* v___x_1410_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_e_1392_);
v___x_1410_ = v___x_1400_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_e_1392_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
else
{
lean_object* v_val_1412_; lean_object* v___x_1414_; 
lean_dec_ref(v_e_1392_);
v_val_1412_ = lean_ctor_get(v_e_x3f_1408_, 0);
lean_inc(v_val_1412_);
lean_dec_ref(v_e_x3f_1408_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_val_1412_);
v___x_1414_ = v___x_1400_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_val_1412_);
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
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_e_1392_);
lean_dec_ref(v_post_1391_);
lean_dec_ref(v_pre_1390_);
v_a_1417_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1397_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1397_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1425_, lean_object* v_post_1426_, lean_object* v_e_1427_, lean_object* v_a_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1425_, v_post_1426_, v_e_1427_, v_a_1428_, v___y_1429_, v___y_1430_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1433_, lean_object* v_post_1434_, lean_object* v_sz_1435_, lean_object* v_i_1436_, lean_object* v_bs_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
size_t v_sz_boxed_1442_; size_t v_i_boxed_1443_; lean_object* v_res_1444_; 
v_sz_boxed_1442_ = lean_unbox_usize(v_sz_1435_);
lean_dec(v_sz_1435_);
v_i_boxed_1443_ = lean_unbox_usize(v_i_1436_);
lean_dec(v_i_1436_);
v_res_1444_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1433_, v_post_1434_, v_sz_boxed_1442_, v_i_boxed_1443_, v_bs_1437_, v___y_1438_, v___y_1439_, v___y_1440_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1445_, lean_object* v_post_1446_, lean_object* v_x_1447_, lean_object* v_x_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1445_, v_post_1446_, v_x_1447_, v_x_1448_, v_x_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object* v_pre_1455_, lean_object* v_post_1456_, lean_object* v_e_1457_, lean_object* v_a_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1455_, v_post_1456_, v_e_1457_, v_a_1458_, v___y_1459_, v___y_1460_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object* v_00_u03b1_1463_, lean_object* v_x_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_apply_1(v_x_1464_, lean_box(0));
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1470_, lean_object* v_x_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(v_00_u03b1_1470_, v_x_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object* v_input_1476_, lean_object* v_pre_1477_, lean_object* v_post_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v_a_1484_; lean_object* v___x_1485_; 
v___x_1482_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1483_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1482_, v___y_1479_, v___y_1480_);
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref(v___x_1483_);
lean_inc(v___y_1480_);
lean_inc_ref(v___y_1479_);
lean_inc(v_a_1484_);
v___x_1485_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1477_, v_post_1478_, v_input_1476_, v_a_1484_, v___y_1479_, v___y_1480_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref(v___x_1485_);
v___x_1487_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1487_, 0, lean_box(0));
lean_closure_set(v___x_1487_, 1, lean_box(0));
lean_closure_set(v___x_1487_, 2, v_a_1484_);
v___x_1488_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1487_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1495_ == 0)
{
lean_object* v_unused_1496_; 
v_unused_1496_ = lean_ctor_get(v___x_1488_, 0);
lean_dec(v_unused_1496_);
v___x_1490_ = v___x_1488_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_dec(v___x_1488_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v_a_1486_);
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1486_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
lean_dec(v_a_1484_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
return v___x_1485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object* v_input_1497_, lean_object* v_pre_1498_, lean_object* v_post_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_input_1497_, v_pre_1498_, v_post_1499_, v___y_1500_, v___y_1501_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object* v_e_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_){
_start:
{
lean_object* v___f_1510_; lean_object* v___f_1511_; lean_object* v___x_1512_; 
v___f_1510_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__0));
v___f_1511_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___x_1512_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_1506_, v___f_1510_, v___f_1511_, v_a_1507_, v_a_1508_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object* v_e_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Core_betaReduce(v_e_1513_, v_a_1514_, v_a_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1518_, lean_object* v_m_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1519_, v_a_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1522_, lean_object* v_m_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(v_00_u03b2_1522_, v_m_1523_, v_a_1524_);
lean_dec_ref(v_a_1524_);
lean_dec_ref(v_m_1523_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1526_, lean_object* v_ref_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1527_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1532_, lean_object* v_ref_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1532_, v_ref_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1538_, lean_object* v_x_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1545_, lean_object* v_x_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(v_00_u03b1_1545_, v_x_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1552_, lean_object* v_m_1553_, lean_object* v_a_1554_, lean_object* v_b_1555_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v_m_1553_, v_a_1554_, v_b_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1557_, lean_object* v_a_1558_, lean_object* v_x_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1558_, v_x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1561_, lean_object* v_a_1562_, lean_object* v_x_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1561_, v_a_1562_, v_x_1563_);
lean_dec(v_x_1563_);
lean_dec_ref(v_a_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9(lean_object* v_00_u03b2_1565_, lean_object* v_a_1566_, lean_object* v_x_1567_){
_start:
{
uint8_t v___x_1568_; 
v___x_1568_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(v_a_1566_, v_x_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___boxed(lean_object* v_00_u03b2_1569_, lean_object* v_a_1570_, lean_object* v_x_1571_){
_start:
{
uint8_t v_res_1572_; lean_object* v_r_1573_; 
v_res_1572_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9(v_00_u03b2_1569_, v_a_1570_, v_x_1571_);
lean_dec(v_x_1571_);
lean_dec_ref(v_a_1570_);
v_r_1573_ = lean_box(v_res_1572_);
return v_r_1573_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1574_, lean_object* v_data_1575_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_data_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1577_, lean_object* v_a_1578_, lean_object* v_b_1579_, lean_object* v_x_1580_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1578_, v_b_1579_, v_x_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object* v_00_u03b2_1582_, lean_object* v_i_1583_, lean_object* v_source_1584_, lean_object* v_target_1585_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v_i_1583_, v_source_1584_, v_target_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_1587_, lean_object* v_x_1588_, lean_object* v_x_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_x_1588_, v_x_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object* v_toApplicative_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v_toPure_1593_; lean_object* v___x_1594_; 
v_toPure_1593_ = lean_ctor_get(v_toApplicative_1591_, 1);
lean_inc(v_toPure_1593_);
lean_dec_ref(v_toApplicative_1591_);
v___x_1594_ = lean_apply_2(v_toPure_1593_, lean_box(0), v_a_1592_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object* v_pre_1595_, lean_object* v_e_1596_, lean_object* v_x_1597_, lean_object* v___x_1598_, lean_object* v___x_1599_, lean_object* v_inst_1600_, lean_object* v___f_1601_, lean_object* v___x_1602_, lean_object* v___x_1603_, lean_object* v_a_1604_, lean_object* v_toBind_1605_, lean_object* v___f_1606_, lean_object* v_toApplicative_1607_, lean_object* v_a_1608_){
_start:
{
if (lean_obj_tag(v_a_1608_) == 0)
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_3696__overap_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
lean_dec_ref(v_toApplicative_1607_);
v___x_1609_ = lean_apply_1(v_pre_1595_, v_e_1596_);
lean_inc_ref(v___x_1599_);
lean_inc_ref(v___x_1598_);
v___x_1610_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_1610_, 0, lean_box(0));
lean_closure_set(v___x_1610_, 1, lean_box(0));
lean_closure_set(v___x_1610_, 2, lean_box(0));
lean_closure_set(v___x_1610_, 3, lean_box(0));
lean_closure_set(v___x_1610_, 4, v_x_1597_);
lean_closure_set(v___x_1610_, 5, v___x_1598_);
lean_closure_set(v___x_1610_, 6, v___x_1599_);
lean_closure_set(v___x_1610_, 7, lean_box(0));
lean_closure_set(v___x_1610_, 8, v___x_1609_);
v___x_1611_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_1611_, 0, lean_box(0));
lean_closure_set(v___x_1611_, 1, lean_box(0));
lean_closure_set(v___x_1611_, 2, lean_box(0));
lean_closure_set(v___x_1611_, 3, lean_box(0));
lean_closure_set(v___x_1611_, 4, v_x_1597_);
lean_closure_set(v___x_1611_, 5, v___x_1598_);
lean_closure_set(v___x_1611_, 6, v___x_1599_);
lean_closure_set(v___x_1611_, 7, v_inst_1600_);
lean_closure_set(v___x_1611_, 8, lean_box(0));
lean_closure_set(v___x_1611_, 9, lean_box(0));
lean_closure_set(v___x_1611_, 10, v___x_1610_);
lean_closure_set(v___x_1611_, 11, v___f_1601_);
v___x_3696__overap_1612_ = l_Lean_Meta_withIncRecDepth___redArg(v___x_1602_, v___x_1603_, v___x_1611_);
v___x_1613_ = lean_apply_1(v___x_3696__overap_1612_, v_a_1604_);
v___x_1614_ = lean_apply_4(v_toBind_1605_, lean_box(0), lean_box(0), v___x_1613_, v___f_1606_);
return v___x_1614_;
}
else
{
lean_object* v_val_1615_; lean_object* v_toPure_1616_; lean_object* v___x_1617_; 
lean_dec(v___f_1606_);
lean_dec(v_toBind_1605_);
lean_dec(v_a_1604_);
lean_dec_ref(v___x_1603_);
lean_dec_ref(v___x_1602_);
lean_dec(v___f_1601_);
lean_dec_ref(v_inst_1600_);
lean_dec_ref(v___x_1599_);
lean_dec_ref(v___x_1598_);
lean_dec_ref(v_e_1596_);
lean_dec(v_pre_1595_);
v_val_1615_ = lean_ctor_get(v_a_1608_, 0);
lean_inc(v_val_1615_);
lean_dec_ref(v_a_1608_);
v_toPure_1616_ = lean_ctor_get(v_toApplicative_1607_, 1);
lean_inc(v_toPure_1616_);
lean_dec_ref(v_toApplicative_1607_);
v___x_1617_ = lean_apply_2(v_toPure_1616_, lean_box(0), v_val_1615_);
return v___x_1617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object* v___x_1618_, lean_object* v___x_1619_, lean_object* v_declName_1620_, lean_object* v_a_1621_, lean_object* v___f_1622_, uint8_t v_nondep_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_){
_start:
{
uint8_t v___x_1626_; lean_object* v___x_3716__overap_1627_; lean_object* v___x_1628_; 
v___x_1626_ = 0;
v___x_3716__overap_1627_ = l_Lean_Meta_withLetDecl___redArg(v___x_1618_, v___x_1619_, v_declName_1620_, v_a_1621_, v_a_1625_, v___f_1622_, v_nondep_1623_, v___x_1626_);
v___x_1628_ = lean_apply_1(v___x_3716__overap_1627_, v_a_1624_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object* v___x_1629_, lean_object* v___x_1630_, lean_object* v_declName_1631_, lean_object* v_a_1632_, lean_object* v___f_1633_, lean_object* v_nondep_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
uint8_t v_nondep_3864__boxed_1637_; lean_object* v_res_1638_; 
v_nondep_3864__boxed_1637_ = lean_unbox(v_nondep_1634_);
v_res_1638_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(v___x_1629_, v___x_1630_, v_declName_1631_, v_a_1632_, v___f_1633_, v_nondep_3864__boxed_1637_, v_a_1635_, v_a_1636_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object* v_fvars_1639_, uint8_t v_usedLetOnly_1640_, lean_object* v_inst_1641_, lean_object* v_toBind_1642_, lean_object* v___f_1643_, lean_object* v_a_1644_){
_start:
{
uint8_t v___x_1645_; uint8_t v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1645_ = 0;
v___x_1646_ = 1;
v___x_1647_ = lean_box(v_usedLetOnly_1640_);
v___x_1648_ = lean_box(v___x_1645_);
v___x_1649_ = lean_box(v___x_1646_);
v___x_1650_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___boxed), 10, 5);
lean_closure_set(v___x_1650_, 0, v_fvars_1639_);
lean_closure_set(v___x_1650_, 1, v_a_1644_);
lean_closure_set(v___x_1650_, 2, v___x_1647_);
lean_closure_set(v___x_1650_, 3, v___x_1648_);
lean_closure_set(v___x_1650_, 4, v___x_1649_);
v___x_1651_ = lean_apply_2(v_inst_1641_, lean_box(0), v___x_1650_);
v___x_1652_ = lean_apply_4(v_toBind_1642_, lean_box(0), lean_box(0), v___x_1651_, v___f_1643_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object* v_fvars_1653_, lean_object* v_usedLetOnly_1654_, lean_object* v_inst_1655_, lean_object* v_toBind_1656_, lean_object* v___f_1657_, lean_object* v_a_1658_){
_start:
{
uint8_t v_usedLetOnly_boxed_1659_; lean_object* v_res_1660_; 
v_usedLetOnly_boxed_1659_ = lean_unbox(v_usedLetOnly_1654_);
v_res_1660_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(v_fvars_1653_, v_usedLetOnly_boxed_1659_, v_inst_1655_, v_toBind_1656_, v___f_1657_, v_a_1658_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object* v_fvars_1661_, uint8_t v_usedLetOnly_1662_, lean_object* v_inst_1663_, lean_object* v_toBind_1664_, lean_object* v___f_1665_, lean_object* v_a_1666_){
_start:
{
uint8_t v___x_1667_; uint8_t v___x_1668_; uint8_t v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1667_ = 0;
v___x_1668_ = 1;
v___x_1669_ = 1;
v___x_1670_ = lean_box(v___x_1667_);
v___x_1671_ = lean_box(v_usedLetOnly_1662_);
v___x_1672_ = lean_box(v___x_1667_);
v___x_1673_ = lean_box(v___x_1668_);
v___x_1674_ = lean_box(v___x_1669_);
v___x_1675_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1675_, 0, v_fvars_1661_);
lean_closure_set(v___x_1675_, 1, v_a_1666_);
lean_closure_set(v___x_1675_, 2, v___x_1670_);
lean_closure_set(v___x_1675_, 3, v___x_1671_);
lean_closure_set(v___x_1675_, 4, v___x_1672_);
lean_closure_set(v___x_1675_, 5, v___x_1673_);
lean_closure_set(v___x_1675_, 6, v___x_1674_);
v___x_1676_ = lean_apply_2(v_inst_1663_, lean_box(0), v___x_1675_);
v___x_1677_ = lean_apply_4(v_toBind_1664_, lean_box(0), lean_box(0), v___x_1676_, v___f_1665_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object* v_fvars_1678_, lean_object* v_usedLetOnly_1679_, lean_object* v_inst_1680_, lean_object* v_toBind_1681_, lean_object* v___f_1682_, lean_object* v_a_1683_){
_start:
{
uint8_t v_usedLetOnly_boxed_1684_; lean_object* v_res_1685_; 
v_usedLetOnly_boxed_1684_ = lean_unbox(v_usedLetOnly_1679_);
v_res_1685_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(v_fvars_1678_, v_usedLetOnly_boxed_1684_, v_inst_1680_, v_toBind_1681_, v___f_1682_, v_a_1683_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object* v___x_1686_, lean_object* v___x_1687_, lean_object* v_binderName_1688_, uint8_t v_binderInfo_1689_, lean_object* v___f_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_){
_start:
{
uint8_t v___x_1693_; lean_object* v___x_3778__overap_1694_; lean_object* v___x_1695_; 
v___x_1693_ = 0;
v___x_3778__overap_1694_ = l_Lean_Meta_withLocalDecl___redArg(v___x_1686_, v___x_1687_, v_binderName_1688_, v_binderInfo_1689_, v_a_1692_, v___f_1690_, v___x_1693_);
v___x_1695_ = lean_apply_1(v___x_3778__overap_1694_, v_a_1691_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object* v___x_1696_, lean_object* v___x_1697_, lean_object* v_binderName_1698_, lean_object* v_binderInfo_1699_, lean_object* v___f_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_){
_start:
{
uint8_t v_binderInfo_3935__boxed_1703_; lean_object* v_res_1704_; 
v_binderInfo_3935__boxed_1703_ = lean_unbox(v_binderInfo_1699_);
v_res_1704_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(v___x_1696_, v___x_1697_, v_binderName_1698_, v_binderInfo_3935__boxed_1703_, v___f_1700_, v_a_1701_, v_a_1702_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object* v_fvars_1705_, uint8_t v_usedLetOnly_1706_, lean_object* v_inst_1707_, lean_object* v_toBind_1708_, lean_object* v___f_1709_, lean_object* v_a_1710_){
_start:
{
uint8_t v___x_1711_; uint8_t v___x_1712_; uint8_t v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1711_ = 0;
v___x_1712_ = 1;
v___x_1713_ = 1;
v___x_1714_ = lean_box(v___x_1711_);
v___x_1715_ = lean_box(v_usedLetOnly_1706_);
v___x_1716_ = lean_box(v___x_1712_);
v___x_1717_ = lean_box(v___x_1713_);
v___x_1718_ = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___boxed), 11, 6);
lean_closure_set(v___x_1718_, 0, v_fvars_1705_);
lean_closure_set(v___x_1718_, 1, v_a_1710_);
lean_closure_set(v___x_1718_, 2, v___x_1714_);
lean_closure_set(v___x_1718_, 3, v___x_1715_);
lean_closure_set(v___x_1718_, 4, v___x_1716_);
lean_closure_set(v___x_1718_, 5, v___x_1717_);
v___x_1719_ = lean_apply_2(v_inst_1707_, lean_box(0), v___x_1718_);
v___x_1720_ = lean_apply_4(v_toBind_1708_, lean_box(0), lean_box(0), v___x_1719_, v___f_1709_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object* v_fvars_1721_, lean_object* v_usedLetOnly_1722_, lean_object* v_inst_1723_, lean_object* v_toBind_1724_, lean_object* v___f_1725_, lean_object* v_a_1726_){
_start:
{
uint8_t v_usedLetOnly_boxed_1727_; lean_object* v_res_1728_; 
v_usedLetOnly_boxed_1727_ = lean_unbox(v_usedLetOnly_1722_);
v_res_1728_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(v_fvars_1721_, v_usedLetOnly_boxed_1727_, v_inst_1723_, v_toBind_1724_, v___f_1725_, v_a_1726_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object* v___f_1729_, lean_object* v___y_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_apply_2(v___f_1729_, v_a_1731_, v___y_1730_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object* v_toApplicative_1733_, lean_object* v_acc_1734_, lean_object* v_next_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v_toPure_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_toPure_1737_ = lean_ctor_get(v_toApplicative_1733_, 1);
lean_inc(v_toPure_1737_);
lean_dec_ref(v_toApplicative_1733_);
v___x_1738_ = lean_array_fset(v_acc_1734_, v_next_1735_, v_a_1736_);
v___x_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
v___x_1740_ = lean_apply_2(v_toPure_1737_, lean_box(0), v___x_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object* v_toApplicative_1741_, lean_object* v_acc_1742_, lean_object* v_next_1743_, lean_object* v_a_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(v_toApplicative_1741_, v_acc_1742_, v_next_1743_, v_a_1744_);
lean_dec(v_next_1743_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object* v_toApplicative_1746_, lean_object* v_next_1747_, lean_object* v_G_1748_, lean_object* v___y_1749_, lean_object* v_a_1750_){
_start:
{
if (lean_obj_tag(v_a_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v_toPure_1752_; lean_object* v___x_1753_; 
lean_dec(v___y_1749_);
lean_dec(v_G_1748_);
v_a_1751_ = lean_ctor_get(v_a_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref(v_a_1750_);
v_toPure_1752_ = lean_ctor_get(v_toApplicative_1746_, 1);
lean_inc(v_toPure_1752_);
lean_dec_ref(v_toApplicative_1746_);
v___x_1753_ = lean_apply_2(v_toPure_1752_, lean_box(0), v_a_1751_);
return v___x_1753_;
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec_ref(v_toApplicative_1746_);
v_a_1754_ = lean_ctor_get(v_a_1750_, 0);
lean_inc(v_a_1754_);
lean_dec_ref(v_a_1750_);
v___x_1755_ = lean_unsigned_to_nat(1u);
v___x_1756_ = lean_nat_add(v_next_1747_, v___x_1755_);
v___x_1757_ = lean_apply_5(v_G_1748_, v___x_1756_, v_a_1754_, lean_box(0), lean_box(0), v___y_1749_);
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_1758_, lean_object* v_next_1759_, lean_object* v_G_1760_, lean_object* v___y_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(v_toApplicative_1758_, v_next_1759_, v_G_1760_, v___y_1761_, v_a_1762_);
lean_dec(v_next_1759_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object* v_f_1764_, lean_object* v_inst_1765_, lean_object* v_inst_1766_, lean_object* v_inst_1767_, lean_object* v_pre_1768_, lean_object* v_post_1769_, uint8_t v_usedLetOnly_1770_, uint8_t v_skipConstInApp_1771_, uint8_t v_skipInstances_1772_, lean_object* v_x_1773_, lean_object* v_x_1774_, lean_object* v___y_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = l_Lean_mkAppN(v_f_1764_, v_a_1776_);
v___x_1778_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_1765_, v_inst_1766_, v_inst_1767_, v_pre_1768_, v_post_1769_, v_usedLetOnly_1770_, v_skipConstInApp_1771_, v_skipInstances_1772_, v_x_1773_, v_x_1774_, v___x_1777_, v___y_1775_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object* v_f_1779_, lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_inst_1782_, lean_object* v_pre_1783_, lean_object* v_post_1784_, lean_object* v_usedLetOnly_1785_, lean_object* v_skipConstInApp_1786_, lean_object* v_skipInstances_1787_, lean_object* v_x_1788_, lean_object* v_x_1789_, lean_object* v___y_1790_, lean_object* v_a_1791_){
_start:
{
uint8_t v_usedLetOnly_boxed_1792_; uint8_t v_skipConstInApp_boxed_1793_; uint8_t v_skipInstances_boxed_1794_; lean_object* v_res_1795_; 
v_usedLetOnly_boxed_1792_ = lean_unbox(v_usedLetOnly_1785_);
v_skipConstInApp_boxed_1793_ = lean_unbox(v_skipConstInApp_1786_);
v_skipInstances_boxed_1794_ = lean_unbox(v_skipInstances_1787_);
v_res_1795_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(v_f_1779_, v_inst_1780_, v_inst_1781_, v_inst_1782_, v_pre_1783_, v_post_1784_, v_usedLetOnly_boxed_1792_, v_skipConstInApp_boxed_1793_, v_skipInstances_boxed_1794_, v_x_1788_, v_x_1789_, v___y_1790_, v_a_1791_);
lean_dec_ref(v_a_1791_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object* v_inst_1796_, lean_object* v_inst_1797_, lean_object* v_inst_1798_, lean_object* v_pre_1799_, lean_object* v_post_1800_, lean_object* v_usedLetOnly_1801_, lean_object* v_skipConstInApp_1802_, lean_object* v_skipInstances_1803_, lean_object* v_x_1804_, lean_object* v_x_1805_, lean_object* v_e_1806_, lean_object* v_a_1807_){
_start:
{
uint8_t v_usedLetOnly_boxed_1808_; uint8_t v_skipConstInApp_boxed_1809_; uint8_t v_skipInstances_boxed_1810_; lean_object* v_res_1811_; 
v_usedLetOnly_boxed_1808_ = lean_unbox(v_usedLetOnly_1801_);
v_skipConstInApp_boxed_1809_ = lean_unbox(v_skipConstInApp_1802_);
v_skipInstances_boxed_1810_ = lean_unbox(v_skipInstances_1803_);
v_res_1811_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1796_, v_inst_1797_, v_inst_1798_, v_pre_1799_, v_post_1800_, v_usedLetOnly_boxed_1808_, v_skipConstInApp_boxed_1809_, v_skipInstances_boxed_1810_, v_x_1804_, v_x_1805_, v_e_1806_, v_a_1807_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object* v___x_1812_, lean_object* v_toApplicative_1813_, lean_object* v_toBind_1814_, lean_object* v___f_1815_, lean_object* v_paramInfo_1816_, lean_object* v_inst_1817_, lean_object* v_inst_1818_, lean_object* v_inst_1819_, lean_object* v_pre_1820_, lean_object* v_post_1821_, uint8_t v_usedLetOnly_1822_, uint8_t v_skipConstInApp_1823_, uint8_t v_skipInstances_1824_, lean_object* v_x_1825_, lean_object* v_x_1826_, lean_object* v_next_1827_, lean_object* v_acc_1828_, lean_object* v_h_1829_, lean_object* v_G_1830_, lean_object* v___y_1831_){
_start:
{
uint8_t v___x_1832_; 
v___x_1832_ = lean_nat_dec_lt(v_next_1827_, v___x_1812_);
if (v___x_1832_ == 0)
{
lean_object* v_toPure_1833_; lean_object* v___x_1834_; 
lean_dec(v___y_1831_);
lean_dec(v_G_1830_);
lean_dec(v_next_1827_);
lean_dec(v_x_1826_);
lean_dec(v_post_1821_);
lean_dec(v_pre_1820_);
lean_dec_ref(v_inst_1819_);
lean_dec(v_inst_1818_);
lean_dec_ref(v_inst_1817_);
lean_dec(v___f_1815_);
lean_dec(v_toBind_1814_);
v_toPure_1833_ = lean_ctor_get(v_toApplicative_1813_, 1);
lean_inc(v_toPure_1833_);
lean_dec_ref(v_toApplicative_1813_);
v___x_1834_ = lean_apply_2(v_toPure_1833_, lean_box(0), v_acc_1828_);
return v___x_1834_;
}
else
{
lean_object* v___f_1835_; lean_object* v___y_1837_; lean_object* v___x_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; 
lean_inc(v___y_1831_);
lean_inc(v_next_1827_);
lean_inc_ref(v_toApplicative_1813_);
v___f_1835_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1835_, 0, v_toApplicative_1813_);
lean_closure_set(v___f_1835_, 1, v_next_1827_);
lean_closure_set(v___f_1835_, 2, v_G_1830_);
lean_closure_set(v___f_1835_, 3, v___y_1831_);
v___x_1840_ = lean_array_fget_borrowed(v_acc_1828_, v_next_1827_);
v___x_1841_ = lean_array_get_size(v_paramInfo_1816_);
v___x_1842_ = lean_nat_dec_lt(v_next_1827_, v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___f_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
lean_inc(v___x_1840_);
v___f_1843_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1843_, 0, v_toApplicative_1813_);
lean_closure_set(v___f_1843_, 1, v_acc_1828_);
lean_closure_set(v___f_1843_, 2, v_next_1827_);
v___x_1844_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1817_, v_inst_1818_, v_inst_1819_, v_pre_1820_, v_post_1821_, v_usedLetOnly_1822_, v_skipConstInApp_1823_, v_skipInstances_1824_, v_x_1825_, v_x_1826_, v___x_1840_, v___y_1831_);
lean_inc(v_toBind_1814_);
v___x_1845_ = lean_apply_4(v_toBind_1814_, lean_box(0), lean_box(0), v___x_1844_, v___f_1843_);
v___y_1837_ = v___x_1845_;
goto v___jp_1836_;
}
else
{
lean_object* v___x_1846_; uint8_t v_isInstance_1847_; 
v___x_1846_ = lean_array_fget_borrowed(v_paramInfo_1816_, v_next_1827_);
v_isInstance_1847_ = lean_ctor_get_uint8(v___x_1846_, sizeof(void*)*1 + 4);
if (v_isInstance_1847_ == 0)
{
lean_object* v___f_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_inc(v___x_1840_);
v___f_1848_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1848_, 0, v_toApplicative_1813_);
lean_closure_set(v___f_1848_, 1, v_acc_1828_);
lean_closure_set(v___f_1848_, 2, v_next_1827_);
v___x_1849_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1817_, v_inst_1818_, v_inst_1819_, v_pre_1820_, v_post_1821_, v_usedLetOnly_1822_, v_skipConstInApp_1823_, v_skipInstances_1824_, v_x_1825_, v_x_1826_, v___x_1840_, v___y_1831_);
lean_inc(v_toBind_1814_);
v___x_1850_ = lean_apply_4(v_toBind_1814_, lean_box(0), lean_box(0), v___x_1849_, v___f_1848_);
v___y_1837_ = v___x_1850_;
goto v___jp_1836_;
}
else
{
lean_object* v_toPure_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
lean_dec(v___y_1831_);
lean_dec(v_next_1827_);
lean_dec(v_x_1826_);
lean_dec(v_post_1821_);
lean_dec(v_pre_1820_);
lean_dec_ref(v_inst_1819_);
lean_dec(v_inst_1818_);
lean_dec_ref(v_inst_1817_);
v_toPure_1851_ = lean_ctor_get(v_toApplicative_1813_, 1);
lean_inc(v_toPure_1851_);
lean_dec_ref(v_toApplicative_1813_);
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v_acc_1828_);
v___x_1853_ = lean_apply_2(v_toPure_1851_, lean_box(0), v___x_1852_);
v___y_1837_ = v___x_1853_;
goto v___jp_1836_;
}
}
v___jp_1836_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
lean_inc(v_toBind_1814_);
v___x_1838_ = lean_apply_4(v_toBind_1814_, lean_box(0), lean_box(0), v___y_1837_, v___f_1815_);
v___x_1839_ = lean_apply_4(v_toBind_1814_, lean_box(0), lean_box(0), v___x_1838_, v___f_1835_);
return v___x_1839_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_1854_ = _args[0];
lean_object* v_toApplicative_1855_ = _args[1];
lean_object* v_toBind_1856_ = _args[2];
lean_object* v___f_1857_ = _args[3];
lean_object* v_paramInfo_1858_ = _args[4];
lean_object* v_inst_1859_ = _args[5];
lean_object* v_inst_1860_ = _args[6];
lean_object* v_inst_1861_ = _args[7];
lean_object* v_pre_1862_ = _args[8];
lean_object* v_post_1863_ = _args[9];
lean_object* v_usedLetOnly_1864_ = _args[10];
lean_object* v_skipConstInApp_1865_ = _args[11];
lean_object* v_skipInstances_1866_ = _args[12];
lean_object* v_x_1867_ = _args[13];
lean_object* v_x_1868_ = _args[14];
lean_object* v_next_1869_ = _args[15];
lean_object* v_acc_1870_ = _args[16];
lean_object* v_h_1871_ = _args[17];
lean_object* v_G_1872_ = _args[18];
lean_object* v___y_1873_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_1874_; uint8_t v_skipConstInApp_boxed_1875_; uint8_t v_skipInstances_boxed_1876_; lean_object* v_res_1877_; 
v_usedLetOnly_boxed_1874_ = lean_unbox(v_usedLetOnly_1864_);
v_skipConstInApp_boxed_1875_ = lean_unbox(v_skipConstInApp_1865_);
v_skipInstances_boxed_1876_ = lean_unbox(v_skipInstances_1866_);
v_res_1877_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(v___x_1854_, v_toApplicative_1855_, v_toBind_1856_, v___f_1857_, v_paramInfo_1858_, v_inst_1859_, v_inst_1860_, v_inst_1861_, v_pre_1862_, v_post_1863_, v_usedLetOnly_boxed_1874_, v_skipConstInApp_boxed_1875_, v_skipInstances_boxed_1876_, v_x_1867_, v_x_1868_, v_next_1869_, v_acc_1870_, v_h_1871_, v_G_1872_, v___y_1873_);
lean_dec_ref(v_paramInfo_1858_);
lean_dec(v___x_1854_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object* v___x_1878_, lean_object* v_toApplicative_1879_, lean_object* v_toBind_1880_, lean_object* v___f_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v_inst_1884_, lean_object* v_pre_1885_, lean_object* v_post_1886_, uint8_t v_usedLetOnly_1887_, uint8_t v_skipConstInApp_1888_, uint8_t v_skipInstances_1889_, lean_object* v_x_1890_, lean_object* v_x_1891_, lean_object* v_args_1892_, lean_object* v___y_1893_, lean_object* v___f_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v_paramInfo_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___f_1901_; lean_object* v___x_3552__overap_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v_paramInfo_1896_ = lean_ctor_get(v_a_1895_, 0);
lean_inc_ref(v_paramInfo_1896_);
lean_dec_ref(v_a_1895_);
v___x_1897_ = lean_unsigned_to_nat(0u);
v___x_1898_ = lean_box(v_usedLetOnly_1887_);
v___x_1899_ = lean_box(v_skipConstInApp_1888_);
v___x_1900_ = lean_box(v_skipInstances_1889_);
lean_inc(v_toBind_1880_);
v___f_1901_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed), 20, 15);
lean_closure_set(v___f_1901_, 0, v___x_1878_);
lean_closure_set(v___f_1901_, 1, v_toApplicative_1879_);
lean_closure_set(v___f_1901_, 2, v_toBind_1880_);
lean_closure_set(v___f_1901_, 3, v___f_1881_);
lean_closure_set(v___f_1901_, 4, v_paramInfo_1896_);
lean_closure_set(v___f_1901_, 5, v_inst_1882_);
lean_closure_set(v___f_1901_, 6, v_inst_1883_);
lean_closure_set(v___f_1901_, 7, v_inst_1884_);
lean_closure_set(v___f_1901_, 8, v_pre_1885_);
lean_closure_set(v___f_1901_, 9, v_post_1886_);
lean_closure_set(v___f_1901_, 10, v___x_1898_);
lean_closure_set(v___f_1901_, 11, v___x_1899_);
lean_closure_set(v___f_1901_, 12, v___x_1900_);
lean_closure_set(v___f_1901_, 13, v_x_1890_);
lean_closure_set(v___f_1901_, 14, v_x_1891_);
v___x_3552__overap_1902_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1901_, v___x_1897_, v_args_1892_, lean_box(0));
v___x_1903_ = lean_apply_1(v___x_3552__overap_1902_, v___y_1893_);
v___x_1904_ = lean_apply_4(v_toBind_1880_, lean_box(0), lean_box(0), v___x_1903_, v___f_1894_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_1905_ = _args[0];
lean_object* v_toApplicative_1906_ = _args[1];
lean_object* v_toBind_1907_ = _args[2];
lean_object* v___f_1908_ = _args[3];
lean_object* v_inst_1909_ = _args[4];
lean_object* v_inst_1910_ = _args[5];
lean_object* v_inst_1911_ = _args[6];
lean_object* v_pre_1912_ = _args[7];
lean_object* v_post_1913_ = _args[8];
lean_object* v_usedLetOnly_1914_ = _args[9];
lean_object* v_skipConstInApp_1915_ = _args[10];
lean_object* v_skipInstances_1916_ = _args[11];
lean_object* v_x_1917_ = _args[12];
lean_object* v_x_1918_ = _args[13];
lean_object* v_args_1919_ = _args[14];
lean_object* v___y_1920_ = _args[15];
lean_object* v___f_1921_ = _args[16];
lean_object* v_a_1922_ = _args[17];
_start:
{
uint8_t v_usedLetOnly_boxed_1923_; uint8_t v_skipConstInApp_boxed_1924_; uint8_t v_skipInstances_boxed_1925_; lean_object* v_res_1926_; 
v_usedLetOnly_boxed_1923_ = lean_unbox(v_usedLetOnly_1914_);
v_skipConstInApp_boxed_1924_ = lean_unbox(v_skipConstInApp_1915_);
v_skipInstances_boxed_1925_ = lean_unbox(v_skipInstances_1916_);
v_res_1926_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(v___x_1905_, v_toApplicative_1906_, v_toBind_1907_, v___f_1908_, v_inst_1909_, v_inst_1910_, v_inst_1911_, v_pre_1912_, v_post_1913_, v_usedLetOnly_boxed_1923_, v_skipConstInApp_boxed_1924_, v_skipInstances_boxed_1925_, v_x_1917_, v_x_1918_, v_args_1919_, v___y_1920_, v___f_1921_, v_a_1922_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t v_skipInstances_1927_, lean_object* v_inst_1928_, lean_object* v_inst_1929_, lean_object* v_inst_1930_, lean_object* v_pre_1931_, lean_object* v_post_1932_, uint8_t v_usedLetOnly_1933_, uint8_t v_skipConstInApp_1934_, lean_object* v_x_1935_, lean_object* v_x_1936_, lean_object* v_args_1937_, lean_object* v___x_1938_, lean_object* v_toBind_1939_, lean_object* v_toApplicative_1940_, lean_object* v___f_1941_, lean_object* v_f_1942_, lean_object* v___y_1943_){
_start:
{
if (v_skipInstances_1927_ == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___f_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; size_t v_sz_1952_; size_t v___x_1953_; lean_object* v___x_3565__overap_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
lean_dec(v___f_1941_);
lean_dec_ref(v_toApplicative_1940_);
v___x_1944_ = lean_box(v_usedLetOnly_1933_);
v___x_1945_ = lean_box(v_skipConstInApp_1934_);
v___x_1946_ = lean_box(v_skipInstances_1927_);
lean_inc(v___y_1943_);
lean_inc(v_x_1936_);
lean_inc(v_post_1932_);
lean_inc(v_pre_1931_);
lean_inc_ref(v_inst_1930_);
lean_inc(v_inst_1929_);
lean_inc_ref(v_inst_1928_);
v___f_1947_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_1947_, 0, v_f_1942_);
lean_closure_set(v___f_1947_, 1, v_inst_1928_);
lean_closure_set(v___f_1947_, 2, v_inst_1929_);
lean_closure_set(v___f_1947_, 3, v_inst_1930_);
lean_closure_set(v___f_1947_, 4, v_pre_1931_);
lean_closure_set(v___f_1947_, 5, v_post_1932_);
lean_closure_set(v___f_1947_, 6, v___x_1944_);
lean_closure_set(v___f_1947_, 7, v___x_1945_);
lean_closure_set(v___f_1947_, 8, v___x_1946_);
lean_closure_set(v___f_1947_, 9, v_x_1935_);
lean_closure_set(v___f_1947_, 10, v_x_1936_);
lean_closure_set(v___f_1947_, 11, v___y_1943_);
v___x_1948_ = lean_box(v_usedLetOnly_1933_);
v___x_1949_ = lean_box(v_skipConstInApp_1934_);
v___x_1950_ = lean_box(v_skipInstances_1927_);
v___x_1951_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed), 12, 10);
lean_closure_set(v___x_1951_, 0, v_inst_1928_);
lean_closure_set(v___x_1951_, 1, v_inst_1929_);
lean_closure_set(v___x_1951_, 2, v_inst_1930_);
lean_closure_set(v___x_1951_, 3, v_pre_1931_);
lean_closure_set(v___x_1951_, 4, v_post_1932_);
lean_closure_set(v___x_1951_, 5, v___x_1948_);
lean_closure_set(v___x_1951_, 6, v___x_1949_);
lean_closure_set(v___x_1951_, 7, v___x_1950_);
lean_closure_set(v___x_1951_, 8, v_x_1935_);
lean_closure_set(v___x_1951_, 9, v_x_1936_);
v_sz_1952_ = lean_array_size(v_args_1937_);
v___x_1953_ = ((size_t)0ULL);
v___x_3565__overap_1954_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1938_, v___x_1951_, v_sz_1952_, v___x_1953_, v_args_1937_);
v___x_1955_ = lean_apply_1(v___x_3565__overap_1954_, v___y_1943_);
v___x_1956_ = lean_apply_4(v_toBind_1939_, lean_box(0), lean_box(0), v___x_1955_, v___f_1947_);
return v___x_1956_;
}
else
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___f_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___f_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
lean_dec_ref(v___x_1938_);
v___x_1957_ = lean_box(v_usedLetOnly_1933_);
v___x_1958_ = lean_box(v_skipConstInApp_1934_);
v___x_1959_ = lean_box(v_skipInstances_1927_);
lean_inc(v___y_1943_);
lean_inc(v_x_1936_);
lean_inc(v_post_1932_);
lean_inc(v_pre_1931_);
lean_inc_ref(v_inst_1930_);
lean_inc(v_inst_1929_);
lean_inc_ref(v_inst_1928_);
lean_inc_ref(v_f_1942_);
v___f_1960_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_1960_, 0, v_f_1942_);
lean_closure_set(v___f_1960_, 1, v_inst_1928_);
lean_closure_set(v___f_1960_, 2, v_inst_1929_);
lean_closure_set(v___f_1960_, 3, v_inst_1930_);
lean_closure_set(v___f_1960_, 4, v_pre_1931_);
lean_closure_set(v___f_1960_, 5, v_post_1932_);
lean_closure_set(v___f_1960_, 6, v___x_1957_);
lean_closure_set(v___f_1960_, 7, v___x_1958_);
lean_closure_set(v___f_1960_, 8, v___x_1959_);
lean_closure_set(v___f_1960_, 9, v_x_1935_);
lean_closure_set(v___f_1960_, 10, v_x_1936_);
lean_closure_set(v___f_1960_, 11, v___y_1943_);
v___x_1961_ = lean_array_get_size(v_args_1937_);
v___x_1962_ = lean_box(v_usedLetOnly_1933_);
v___x_1963_ = lean_box(v_skipConstInApp_1934_);
v___x_1964_ = lean_box(v_skipInstances_1927_);
lean_inc(v_inst_1929_);
lean_inc(v_toBind_1939_);
v___f_1965_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed), 18, 17);
lean_closure_set(v___f_1965_, 0, v___x_1961_);
lean_closure_set(v___f_1965_, 1, v_toApplicative_1940_);
lean_closure_set(v___f_1965_, 2, v_toBind_1939_);
lean_closure_set(v___f_1965_, 3, v___f_1941_);
lean_closure_set(v___f_1965_, 4, v_inst_1928_);
lean_closure_set(v___f_1965_, 5, v_inst_1929_);
lean_closure_set(v___f_1965_, 6, v_inst_1930_);
lean_closure_set(v___f_1965_, 7, v_pre_1931_);
lean_closure_set(v___f_1965_, 8, v_post_1932_);
lean_closure_set(v___f_1965_, 9, v___x_1962_);
lean_closure_set(v___f_1965_, 10, v___x_1963_);
lean_closure_set(v___f_1965_, 11, v___x_1964_);
lean_closure_set(v___f_1965_, 12, v_x_1935_);
lean_closure_set(v___f_1965_, 13, v_x_1936_);
lean_closure_set(v___f_1965_, 14, v_args_1937_);
lean_closure_set(v___f_1965_, 15, v___y_1943_);
lean_closure_set(v___f_1965_, 16, v___f_1960_);
v___x_1966_ = lean_alloc_closure((void*)(l_Lean_Meta_getFunInfoNArgs___boxed), 7, 2);
lean_closure_set(v___x_1966_, 0, v_f_1942_);
lean_closure_set(v___x_1966_, 1, v___x_1961_);
v___x_1967_ = lean_apply_2(v_inst_1929_, lean_box(0), v___x_1966_);
v___x_1968_ = lean_apply_4(v_toBind_1939_, lean_box(0), lean_box(0), v___x_1967_, v___f_1965_);
return v___x_1968_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_skipInstances_1969_ = _args[0];
lean_object* v_inst_1970_ = _args[1];
lean_object* v_inst_1971_ = _args[2];
lean_object* v_inst_1972_ = _args[3];
lean_object* v_pre_1973_ = _args[4];
lean_object* v_post_1974_ = _args[5];
lean_object* v_usedLetOnly_1975_ = _args[6];
lean_object* v_skipConstInApp_1976_ = _args[7];
lean_object* v_x_1977_ = _args[8];
lean_object* v_x_1978_ = _args[9];
lean_object* v_args_1979_ = _args[10];
lean_object* v___x_1980_ = _args[11];
lean_object* v_toBind_1981_ = _args[12];
lean_object* v_toApplicative_1982_ = _args[13];
lean_object* v___f_1983_ = _args[14];
lean_object* v_f_1984_ = _args[15];
lean_object* v___y_1985_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_1986_; uint8_t v_usedLetOnly_boxed_1987_; uint8_t v_skipConstInApp_boxed_1988_; lean_object* v_res_1989_; 
v_skipInstances_boxed_1986_ = lean_unbox(v_skipInstances_1969_);
v_usedLetOnly_boxed_1987_ = lean_unbox(v_usedLetOnly_1975_);
v_skipConstInApp_boxed_1988_ = lean_unbox(v_skipConstInApp_1976_);
v_res_1989_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(v_skipInstances_boxed_1986_, v_inst_1970_, v_inst_1971_, v_inst_1972_, v_pre_1973_, v_post_1974_, v_usedLetOnly_boxed_1987_, v_skipConstInApp_boxed_1988_, v_x_1977_, v_x_1978_, v_args_1979_, v___x_1980_, v_toBind_1981_, v_toApplicative_1982_, v___f_1983_, v_f_1984_, v___y_1985_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t v_skipInstances_1990_, lean_object* v_inst_1991_, lean_object* v_inst_1992_, lean_object* v_inst_1993_, lean_object* v_pre_1994_, lean_object* v_post_1995_, uint8_t v_usedLetOnly_1996_, uint8_t v_skipConstInApp_1997_, lean_object* v_x_1998_, lean_object* v_x_1999_, lean_object* v___x_2000_, lean_object* v_toBind_2001_, lean_object* v_toApplicative_2002_, lean_object* v___f_2003_, lean_object* v_f_2004_, lean_object* v_args_2005_, lean_object* v___y_2006_){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___f_2010_; lean_object* v___f_2011_; 
v___x_2007_ = lean_box(v_skipInstances_1990_);
v___x_2008_ = lean_box(v_usedLetOnly_1996_);
v___x_2009_ = lean_box(v_skipConstInApp_1997_);
lean_inc_ref(v_toApplicative_2002_);
lean_inc(v_toBind_2001_);
lean_inc(v_x_1999_);
lean_inc(v_post_1995_);
lean_inc(v_pre_1994_);
lean_inc_ref(v_inst_1993_);
lean_inc(v_inst_1992_);
lean_inc_ref(v_inst_1991_);
v___f_2010_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed), 17, 15);
lean_closure_set(v___f_2010_, 0, v___x_2007_);
lean_closure_set(v___f_2010_, 1, v_inst_1991_);
lean_closure_set(v___f_2010_, 2, v_inst_1992_);
lean_closure_set(v___f_2010_, 3, v_inst_1993_);
lean_closure_set(v___f_2010_, 4, v_pre_1994_);
lean_closure_set(v___f_2010_, 5, v_post_1995_);
lean_closure_set(v___f_2010_, 6, v___x_2008_);
lean_closure_set(v___f_2010_, 7, v___x_2009_);
lean_closure_set(v___f_2010_, 8, v_x_1998_);
lean_closure_set(v___f_2010_, 9, v_x_1999_);
lean_closure_set(v___f_2010_, 10, v_args_2005_);
lean_closure_set(v___f_2010_, 11, v___x_2000_);
lean_closure_set(v___f_2010_, 12, v_toBind_2001_);
lean_closure_set(v___f_2010_, 13, v_toApplicative_2002_);
lean_closure_set(v___f_2010_, 14, v___f_2003_);
lean_inc(v___y_2006_);
v___f_2011_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7), 3, 2);
lean_closure_set(v___f_2011_, 0, v___f_2010_);
lean_closure_set(v___f_2011_, 1, v___y_2006_);
if (v_skipConstInApp_1997_ == 0)
{
lean_dec_ref(v_toApplicative_2002_);
goto v___jp_2012_;
}
else
{
uint8_t v___x_2015_; 
v___x_2015_ = l_Lean_Expr_isConst(v_f_2004_);
if (v___x_2015_ == 0)
{
lean_dec_ref(v_toApplicative_2002_);
goto v___jp_2012_;
}
else
{
lean_object* v_toPure_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
lean_dec(v___y_2006_);
lean_dec(v_x_1999_);
lean_dec(v_post_1995_);
lean_dec(v_pre_1994_);
lean_dec_ref(v_inst_1993_);
lean_dec(v_inst_1992_);
lean_dec_ref(v_inst_1991_);
v_toPure_2016_ = lean_ctor_get(v_toApplicative_2002_, 1);
lean_inc(v_toPure_2016_);
lean_dec_ref(v_toApplicative_2002_);
v___x_2017_ = lean_apply_2(v_toPure_2016_, lean_box(0), v_f_2004_);
v___x_2018_ = lean_apply_4(v_toBind_2001_, lean_box(0), lean_box(0), v___x_2017_, v___f_2011_);
return v___x_2018_;
}
}
v___jp_2012_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1991_, v_inst_1992_, v_inst_1993_, v_pre_1994_, v_post_1995_, v_usedLetOnly_1996_, v_skipConstInApp_1997_, v_skipInstances_1990_, v_x_1998_, v_x_1999_, v_f_2004_, v___y_2006_);
v___x_2014_ = lean_apply_4(v_toBind_2001_, lean_box(0), lean_box(0), v___x_2013_, v___f_2011_);
return v___x_2014_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_skipInstances_2019_ = _args[0];
lean_object* v_inst_2020_ = _args[1];
lean_object* v_inst_2021_ = _args[2];
lean_object* v_inst_2022_ = _args[3];
lean_object* v_pre_2023_ = _args[4];
lean_object* v_post_2024_ = _args[5];
lean_object* v_usedLetOnly_2025_ = _args[6];
lean_object* v_skipConstInApp_2026_ = _args[7];
lean_object* v_x_2027_ = _args[8];
lean_object* v_x_2028_ = _args[9];
lean_object* v___x_2029_ = _args[10];
lean_object* v_toBind_2030_ = _args[11];
lean_object* v_toApplicative_2031_ = _args[12];
lean_object* v___f_2032_ = _args[13];
lean_object* v_f_2033_ = _args[14];
lean_object* v_args_2034_ = _args[15];
lean_object* v___y_2035_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2036_; uint8_t v_usedLetOnly_boxed_2037_; uint8_t v_skipConstInApp_boxed_2038_; lean_object* v_res_2039_; 
v_skipInstances_boxed_2036_ = lean_unbox(v_skipInstances_2019_);
v_usedLetOnly_boxed_2037_ = lean_unbox(v_usedLetOnly_2025_);
v_skipConstInApp_boxed_2038_ = lean_unbox(v_skipConstInApp_2026_);
v_res_2039_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(v_skipInstances_boxed_2036_, v_inst_2020_, v_inst_2021_, v_inst_2022_, v_pre_2023_, v_post_2024_, v_usedLetOnly_boxed_2037_, v_skipConstInApp_boxed_2038_, v_x_2027_, v_x_2028_, v___x_2029_, v_toBind_2030_, v_toApplicative_2031_, v___f_2032_, v_f_2033_, v_args_2034_, v___y_2035_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object* v_fvars_2042_, lean_object* v_inst_2043_, lean_object* v_inst_2044_, lean_object* v_inst_2045_, lean_object* v_pre_2046_, lean_object* v_post_2047_, uint8_t v_usedLetOnly_2048_, uint8_t v_skipConstInApp_2049_, uint8_t v_skipInstances_2050_, lean_object* v_x_2051_, lean_object* v_x_2052_, lean_object* v_body_2053_, lean_object* v_x_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_array_push(v_fvars_2042_, v_x_2054_);
v___x_2057_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2043_, v_inst_2044_, v_inst_2045_, v_pre_2046_, v_post_2047_, v_usedLetOnly_2048_, v_skipConstInApp_2049_, v_skipInstances_2050_, v_x_2051_, v_x_2052_, v___x_2056_, v_body_2053_, v___y_2055_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object* v_fvars_2058_, lean_object* v_inst_2059_, lean_object* v_inst_2060_, lean_object* v_inst_2061_, lean_object* v_pre_2062_, lean_object* v_post_2063_, lean_object* v_usedLetOnly_2064_, lean_object* v_skipConstInApp_2065_, lean_object* v_skipInstances_2066_, lean_object* v_x_2067_, lean_object* v_x_2068_, lean_object* v_body_2069_, lean_object* v_x_2070_, lean_object* v___y_2071_){
_start:
{
uint8_t v_usedLetOnly_boxed_2072_; uint8_t v_skipConstInApp_boxed_2073_; uint8_t v_skipInstances_boxed_2074_; lean_object* v_res_2075_; 
v_usedLetOnly_boxed_2072_ = lean_unbox(v_usedLetOnly_2064_);
v_skipConstInApp_boxed_2073_ = lean_unbox(v_skipConstInApp_2065_);
v_skipInstances_boxed_2074_ = lean_unbox(v_skipInstances_2066_);
v_res_2075_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(v_fvars_2058_, v_inst_2059_, v_inst_2060_, v_inst_2061_, v_pre_2062_, v_post_2063_, v_usedLetOnly_boxed_2072_, v_skipConstInApp_boxed_2073_, v_skipInstances_boxed_2074_, v_x_2067_, v_x_2068_, v_body_2069_, v_x_2070_, v___y_2071_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object* v_inst_2076_, lean_object* v_inst_2077_, lean_object* v_inst_2078_, lean_object* v_pre_2079_, lean_object* v_post_2080_, lean_object* v_usedLetOnly_2081_, lean_object* v_skipConstInApp_2082_, lean_object* v_skipInstances_2083_, lean_object* v_x_2084_, lean_object* v_x_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
uint8_t v_usedLetOnly_boxed_2088_; uint8_t v_skipConstInApp_boxed_2089_; uint8_t v_skipInstances_boxed_2090_; lean_object* v_res_2091_; 
v_usedLetOnly_boxed_2088_ = lean_unbox(v_usedLetOnly_2081_);
v_skipConstInApp_boxed_2089_ = lean_unbox(v_skipConstInApp_2082_);
v_skipInstances_boxed_2090_ = lean_unbox(v_skipInstances_2083_);
v_res_2091_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(v_inst_2076_, v_inst_2077_, v_inst_2078_, v_pre_2079_, v_post_2080_, v_usedLetOnly_boxed_2088_, v_skipConstInApp_boxed_2089_, v_skipInstances_boxed_2090_, v_x_2084_, v_x_2085_, v_a_2086_, v_a_2087_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object* v_inst_2092_, lean_object* v_inst_2093_, lean_object* v_inst_2094_, lean_object* v_pre_2095_, lean_object* v_post_2096_, uint8_t v_usedLetOnly_2097_, uint8_t v_skipConstInApp_2098_, uint8_t v_skipInstances_2099_, lean_object* v_x_2100_, lean_object* v_x_2101_, lean_object* v_fvars_2102_, lean_object* v_e_2103_, lean_object* v_a_2104_){
_start:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___f_2109_; lean_object* v___f_2110_; lean_object* v___x_2111_; 
v___x_2105_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2106_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2092_);
v___x_2107_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2100_, v___x_2105_, v___x_2106_, v_inst_2092_);
v___x_2108_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2100_, v___x_2105_, v___x_2106_);
lean_inc_ref(v_inst_2094_);
lean_inc_ref(v___x_2108_);
v___f_2109_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2109_, 0, v___x_2108_);
lean_closure_set(v___f_2109_, 1, v_inst_2094_);
lean_inc_ref(v_inst_2094_);
v___f_2110_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2110_, 0, v___x_2108_);
lean_closure_set(v___f_2110_, 1, v_inst_2094_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___f_2109_);
lean_ctor_set(v___x_2111_, 1, v___f_2110_);
if (lean_obj_tag(v_e_2103_) == 7)
{
lean_object* v_binderName_2112_; lean_object* v_binderType_2113_; lean_object* v_body_2114_; uint8_t v_binderInfo_2115_; lean_object* v_toBind_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___f_2120_; lean_object* v___x_2121_; lean_object* v___f_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v_binderName_2112_ = lean_ctor_get(v_e_2103_, 0);
lean_inc(v_binderName_2112_);
v_binderType_2113_ = lean_ctor_get(v_e_2103_, 1);
lean_inc_ref(v_binderType_2113_);
v_body_2114_ = lean_ctor_get(v_e_2103_, 2);
lean_inc_ref(v_body_2114_);
v_binderInfo_2115_ = lean_ctor_get_uint8(v_e_2103_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2103_);
v_toBind_2116_ = lean_ctor_get(v_inst_2092_, 1);
lean_inc(v_toBind_2116_);
v___x_2117_ = lean_box(v_usedLetOnly_2097_);
v___x_2118_ = lean_box(v_skipConstInApp_2098_);
v___x_2119_ = lean_box(v_skipInstances_2099_);
lean_inc(v_x_2101_);
lean_inc(v_post_2096_);
lean_inc(v_pre_2095_);
lean_inc_ref(v_inst_2094_);
lean_inc(v_inst_2093_);
lean_inc_ref(v_inst_2092_);
lean_inc_ref(v_fvars_2102_);
v___f_2120_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2120_, 0, v_fvars_2102_);
lean_closure_set(v___f_2120_, 1, v_inst_2092_);
lean_closure_set(v___f_2120_, 2, v_inst_2093_);
lean_closure_set(v___f_2120_, 3, v_inst_2094_);
lean_closure_set(v___f_2120_, 4, v_pre_2095_);
lean_closure_set(v___f_2120_, 5, v_post_2096_);
lean_closure_set(v___f_2120_, 6, v___x_2117_);
lean_closure_set(v___f_2120_, 7, v___x_2118_);
lean_closure_set(v___f_2120_, 8, v___x_2119_);
lean_closure_set(v___f_2120_, 9, v_x_2100_);
lean_closure_set(v___f_2120_, 10, v_x_2101_);
lean_closure_set(v___f_2120_, 11, v_body_2114_);
v___x_2121_ = lean_box(v_binderInfo_2115_);
lean_inc(v_a_2104_);
v___f_2122_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2122_, 0, v___x_2111_);
lean_closure_set(v___f_2122_, 1, v___x_2107_);
lean_closure_set(v___f_2122_, 2, v_binderName_2112_);
lean_closure_set(v___f_2122_, 3, v___x_2121_);
lean_closure_set(v___f_2122_, 4, v___f_2120_);
lean_closure_set(v___f_2122_, 5, v_a_2104_);
v___x_2123_ = lean_expr_instantiate_rev(v_binderType_2113_, v_fvars_2102_);
lean_dec_ref(v_fvars_2102_);
lean_dec_ref(v_binderType_2113_);
v___x_2124_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2092_, v_inst_2093_, v_inst_2094_, v_pre_2095_, v_post_2096_, v_usedLetOnly_2097_, v_skipConstInApp_2098_, v_skipInstances_2099_, v_x_2100_, v_x_2101_, v___x_2123_, v_a_2104_);
v___x_2125_ = lean_apply_4(v_toBind_2116_, lean_box(0), lean_box(0), v___x_2124_, v___f_2122_);
return v___x_2125_;
}
else
{
lean_object* v_toBind_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___f_2130_; lean_object* v___x_2131_; lean_object* v___f_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
lean_dec_ref(v___x_2111_);
lean_dec_ref(v___x_2107_);
v_toBind_2126_ = lean_ctor_get(v_inst_2092_, 1);
lean_inc(v_toBind_2126_);
v___x_2127_ = lean_box(v_usedLetOnly_2097_);
v___x_2128_ = lean_box(v_skipConstInApp_2098_);
v___x_2129_ = lean_box(v_skipInstances_2099_);
lean_inc(v_a_2104_);
lean_inc(v_x_2101_);
lean_inc(v_post_2096_);
lean_inc(v_pre_2095_);
lean_inc_ref(v_inst_2094_);
lean_inc(v_inst_2093_);
lean_inc_ref(v_inst_2092_);
v___f_2130_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2130_, 0, v_inst_2092_);
lean_closure_set(v___f_2130_, 1, v_inst_2093_);
lean_closure_set(v___f_2130_, 2, v_inst_2094_);
lean_closure_set(v___f_2130_, 3, v_pre_2095_);
lean_closure_set(v___f_2130_, 4, v_post_2096_);
lean_closure_set(v___f_2130_, 5, v___x_2127_);
lean_closure_set(v___f_2130_, 6, v___x_2128_);
lean_closure_set(v___f_2130_, 7, v___x_2129_);
lean_closure_set(v___f_2130_, 8, v_x_2100_);
lean_closure_set(v___f_2130_, 9, v_x_2101_);
lean_closure_set(v___f_2130_, 10, v_a_2104_);
v___x_2131_ = lean_box(v_usedLetOnly_2097_);
lean_inc(v_toBind_2126_);
lean_inc(v_inst_2093_);
lean_inc_ref(v_fvars_2102_);
v___f_2132_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2132_, 0, v_fvars_2102_);
lean_closure_set(v___f_2132_, 1, v___x_2131_);
lean_closure_set(v___f_2132_, 2, v_inst_2093_);
lean_closure_set(v___f_2132_, 3, v_toBind_2126_);
lean_closure_set(v___f_2132_, 4, v___f_2130_);
v___x_2133_ = lean_expr_instantiate_rev(v_e_2103_, v_fvars_2102_);
lean_dec_ref(v_fvars_2102_);
lean_dec_ref(v_e_2103_);
v___x_2134_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2092_, v_inst_2093_, v_inst_2094_, v_pre_2095_, v_post_2096_, v_usedLetOnly_2097_, v_skipConstInApp_2098_, v_skipInstances_2099_, v_x_2100_, v_x_2101_, v___x_2133_, v_a_2104_);
v___x_2135_ = lean_apply_4(v_toBind_2126_, lean_box(0), lean_box(0), v___x_2134_, v___f_2132_);
return v___x_2135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object* v_fvars_2136_, lean_object* v_inst_2137_, lean_object* v_inst_2138_, lean_object* v_inst_2139_, lean_object* v_pre_2140_, lean_object* v_post_2141_, uint8_t v_usedLetOnly_2142_, uint8_t v_skipConstInApp_2143_, uint8_t v_skipInstances_2144_, lean_object* v_x_2145_, lean_object* v_x_2146_, lean_object* v_body_2147_, lean_object* v_x_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = lean_array_push(v_fvars_2136_, v_x_2148_);
v___x_2151_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2137_, v_inst_2138_, v_inst_2139_, v_pre_2140_, v_post_2141_, v_usedLetOnly_2142_, v_skipConstInApp_2143_, v_skipInstances_2144_, v_x_2145_, v_x_2146_, v___x_2150_, v_body_2147_, v___y_2149_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object* v_fvars_2152_, lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_pre_2156_, lean_object* v_post_2157_, lean_object* v_usedLetOnly_2158_, lean_object* v_skipConstInApp_2159_, lean_object* v_skipInstances_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_, lean_object* v_body_2163_, lean_object* v_x_2164_, lean_object* v___y_2165_){
_start:
{
uint8_t v_usedLetOnly_boxed_2166_; uint8_t v_skipConstInApp_boxed_2167_; uint8_t v_skipInstances_boxed_2168_; lean_object* v_res_2169_; 
v_usedLetOnly_boxed_2166_ = lean_unbox(v_usedLetOnly_2158_);
v_skipConstInApp_boxed_2167_ = lean_unbox(v_skipConstInApp_2159_);
v_skipInstances_boxed_2168_ = lean_unbox(v_skipInstances_2160_);
v_res_2169_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(v_fvars_2152_, v_inst_2153_, v_inst_2154_, v_inst_2155_, v_pre_2156_, v_post_2157_, v_usedLetOnly_boxed_2166_, v_skipConstInApp_boxed_2167_, v_skipInstances_boxed_2168_, v_x_2161_, v_x_2162_, v_body_2163_, v_x_2164_, v___y_2165_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object* v_inst_2170_, lean_object* v_inst_2171_, lean_object* v_inst_2172_, lean_object* v_pre_2173_, lean_object* v_post_2174_, uint8_t v_usedLetOnly_2175_, uint8_t v_skipConstInApp_2176_, uint8_t v_skipInstances_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_fvars_2180_, lean_object* v_e_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___f_2187_; lean_object* v___f_2188_; lean_object* v___x_2189_; 
v___x_2183_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2184_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2170_);
v___x_2185_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2178_, v___x_2183_, v___x_2184_, v_inst_2170_);
v___x_2186_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2178_, v___x_2183_, v___x_2184_);
lean_inc_ref(v_inst_2172_);
lean_inc_ref(v___x_2186_);
v___f_2187_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2187_, 0, v___x_2186_);
lean_closure_set(v___f_2187_, 1, v_inst_2172_);
lean_inc_ref(v_inst_2172_);
v___f_2188_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2188_, 0, v___x_2186_);
lean_closure_set(v___f_2188_, 1, v_inst_2172_);
v___x_2189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___f_2187_);
lean_ctor_set(v___x_2189_, 1, v___f_2188_);
if (lean_obj_tag(v_e_2181_) == 6)
{
lean_object* v_binderName_2190_; lean_object* v_binderType_2191_; lean_object* v_body_2192_; uint8_t v_binderInfo_2193_; lean_object* v_toBind_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___f_2198_; lean_object* v___x_2199_; lean_object* v___f_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v_binderName_2190_ = lean_ctor_get(v_e_2181_, 0);
lean_inc(v_binderName_2190_);
v_binderType_2191_ = lean_ctor_get(v_e_2181_, 1);
lean_inc_ref(v_binderType_2191_);
v_body_2192_ = lean_ctor_get(v_e_2181_, 2);
lean_inc_ref(v_body_2192_);
v_binderInfo_2193_ = lean_ctor_get_uint8(v_e_2181_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2181_);
v_toBind_2194_ = lean_ctor_get(v_inst_2170_, 1);
lean_inc(v_toBind_2194_);
v___x_2195_ = lean_box(v_usedLetOnly_2175_);
v___x_2196_ = lean_box(v_skipConstInApp_2176_);
v___x_2197_ = lean_box(v_skipInstances_2177_);
lean_inc(v_x_2179_);
lean_inc(v_post_2174_);
lean_inc(v_pre_2173_);
lean_inc_ref(v_inst_2172_);
lean_inc(v_inst_2171_);
lean_inc_ref(v_inst_2170_);
lean_inc_ref(v_fvars_2180_);
v___f_2198_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2198_, 0, v_fvars_2180_);
lean_closure_set(v___f_2198_, 1, v_inst_2170_);
lean_closure_set(v___f_2198_, 2, v_inst_2171_);
lean_closure_set(v___f_2198_, 3, v_inst_2172_);
lean_closure_set(v___f_2198_, 4, v_pre_2173_);
lean_closure_set(v___f_2198_, 5, v_post_2174_);
lean_closure_set(v___f_2198_, 6, v___x_2195_);
lean_closure_set(v___f_2198_, 7, v___x_2196_);
lean_closure_set(v___f_2198_, 8, v___x_2197_);
lean_closure_set(v___f_2198_, 9, v_x_2178_);
lean_closure_set(v___f_2198_, 10, v_x_2179_);
lean_closure_set(v___f_2198_, 11, v_body_2192_);
v___x_2199_ = lean_box(v_binderInfo_2193_);
lean_inc(v_a_2182_);
v___f_2200_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2200_, 0, v___x_2189_);
lean_closure_set(v___f_2200_, 1, v___x_2185_);
lean_closure_set(v___f_2200_, 2, v_binderName_2190_);
lean_closure_set(v___f_2200_, 3, v___x_2199_);
lean_closure_set(v___f_2200_, 4, v___f_2198_);
lean_closure_set(v___f_2200_, 5, v_a_2182_);
v___x_2201_ = lean_expr_instantiate_rev(v_binderType_2191_, v_fvars_2180_);
lean_dec_ref(v_fvars_2180_);
lean_dec_ref(v_binderType_2191_);
v___x_2202_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2170_, v_inst_2171_, v_inst_2172_, v_pre_2173_, v_post_2174_, v_usedLetOnly_2175_, v_skipConstInApp_2176_, v_skipInstances_2177_, v_x_2178_, v_x_2179_, v___x_2201_, v_a_2182_);
v___x_2203_ = lean_apply_4(v_toBind_2194_, lean_box(0), lean_box(0), v___x_2202_, v___f_2200_);
return v___x_2203_;
}
else
{
lean_object* v_toBind_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___f_2208_; lean_object* v___x_2209_; lean_object* v___f_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
lean_dec_ref(v___x_2189_);
lean_dec_ref(v___x_2185_);
v_toBind_2204_ = lean_ctor_get(v_inst_2170_, 1);
lean_inc(v_toBind_2204_);
v___x_2205_ = lean_box(v_usedLetOnly_2175_);
v___x_2206_ = lean_box(v_skipConstInApp_2176_);
v___x_2207_ = lean_box(v_skipInstances_2177_);
lean_inc(v_a_2182_);
lean_inc(v_x_2179_);
lean_inc(v_post_2174_);
lean_inc(v_pre_2173_);
lean_inc_ref(v_inst_2172_);
lean_inc(v_inst_2171_);
lean_inc_ref(v_inst_2170_);
v___f_2208_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2208_, 0, v_inst_2170_);
lean_closure_set(v___f_2208_, 1, v_inst_2171_);
lean_closure_set(v___f_2208_, 2, v_inst_2172_);
lean_closure_set(v___f_2208_, 3, v_pre_2173_);
lean_closure_set(v___f_2208_, 4, v_post_2174_);
lean_closure_set(v___f_2208_, 5, v___x_2205_);
lean_closure_set(v___f_2208_, 6, v___x_2206_);
lean_closure_set(v___f_2208_, 7, v___x_2207_);
lean_closure_set(v___f_2208_, 8, v_x_2178_);
lean_closure_set(v___f_2208_, 9, v_x_2179_);
lean_closure_set(v___f_2208_, 10, v_a_2182_);
v___x_2209_ = lean_box(v_usedLetOnly_2175_);
lean_inc(v_toBind_2204_);
lean_inc(v_inst_2171_);
lean_inc_ref(v_fvars_2180_);
v___f_2210_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2210_, 0, v_fvars_2180_);
lean_closure_set(v___f_2210_, 1, v___x_2209_);
lean_closure_set(v___f_2210_, 2, v_inst_2171_);
lean_closure_set(v___f_2210_, 3, v_toBind_2204_);
lean_closure_set(v___f_2210_, 4, v___f_2208_);
v___x_2211_ = lean_expr_instantiate_rev(v_e_2181_, v_fvars_2180_);
lean_dec_ref(v_fvars_2180_);
lean_dec_ref(v_e_2181_);
v___x_2212_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2170_, v_inst_2171_, v_inst_2172_, v_pre_2173_, v_post_2174_, v_usedLetOnly_2175_, v_skipConstInApp_2176_, v_skipInstances_2177_, v_x_2178_, v_x_2179_, v___x_2211_, v_a_2182_);
v___x_2213_ = lean_apply_4(v_toBind_2204_, lean_box(0), lean_box(0), v___x_2212_, v___f_2210_);
return v___x_2213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object* v_fvars_2214_, lean_object* v_inst_2215_, lean_object* v_inst_2216_, lean_object* v_inst_2217_, lean_object* v_pre_2218_, lean_object* v_post_2219_, uint8_t v_usedLetOnly_2220_, uint8_t v_skipConstInApp_2221_, uint8_t v_skipInstances_2222_, lean_object* v_x_2223_, lean_object* v_x_2224_, lean_object* v_body_2225_, lean_object* v_x_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = lean_array_push(v_fvars_2214_, v_x_2226_);
v___x_2229_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2215_, v_inst_2216_, v_inst_2217_, v_pre_2218_, v_post_2219_, v_usedLetOnly_2220_, v_skipConstInApp_2221_, v_skipInstances_2222_, v_x_2223_, v_x_2224_, v___x_2228_, v_body_2225_, v___y_2227_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object* v_fvars_2230_, lean_object* v_inst_2231_, lean_object* v_inst_2232_, lean_object* v_inst_2233_, lean_object* v_pre_2234_, lean_object* v_post_2235_, lean_object* v_usedLetOnly_2236_, lean_object* v_skipConstInApp_2237_, lean_object* v_skipInstances_2238_, lean_object* v_x_2239_, lean_object* v_x_2240_, lean_object* v_body_2241_, lean_object* v_x_2242_, lean_object* v___y_2243_){
_start:
{
uint8_t v_usedLetOnly_boxed_2244_; uint8_t v_skipConstInApp_boxed_2245_; uint8_t v_skipInstances_boxed_2246_; lean_object* v_res_2247_; 
v_usedLetOnly_boxed_2244_ = lean_unbox(v_usedLetOnly_2236_);
v_skipConstInApp_boxed_2245_ = lean_unbox(v_skipConstInApp_2237_);
v_skipInstances_boxed_2246_ = lean_unbox(v_skipInstances_2238_);
v_res_2247_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(v_fvars_2230_, v_inst_2231_, v_inst_2232_, v_inst_2233_, v_pre_2234_, v_post_2235_, v_usedLetOnly_boxed_2244_, v_skipConstInApp_boxed_2245_, v_skipInstances_boxed_2246_, v_x_2239_, v_x_2240_, v_body_2241_, v_x_2242_, v___y_2243_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object* v___x_2248_, lean_object* v___x_2249_, lean_object* v_declName_2250_, lean_object* v___f_2251_, uint8_t v_nondep_2252_, lean_object* v_a_2253_, lean_object* v_value_2254_, lean_object* v_fvars_2255_, lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_inst_2258_, lean_object* v_pre_2259_, lean_object* v_post_2260_, uint8_t v_usedLetOnly_2261_, uint8_t v_skipConstInApp_2262_, uint8_t v_skipInstances_2263_, lean_object* v_x_2264_, lean_object* v_x_2265_, lean_object* v_toBind_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v___x_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2268_ = lean_box(v_nondep_2252_);
lean_inc(v_a_2253_);
v___f_2269_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2269_, 0, v___x_2248_);
lean_closure_set(v___f_2269_, 1, v___x_2249_);
lean_closure_set(v___f_2269_, 2, v_declName_2250_);
lean_closure_set(v___f_2269_, 3, v_a_2267_);
lean_closure_set(v___f_2269_, 4, v___f_2251_);
lean_closure_set(v___f_2269_, 5, v___x_2268_);
lean_closure_set(v___f_2269_, 6, v_a_2253_);
v___x_2270_ = lean_expr_instantiate_rev(v_value_2254_, v_fvars_2255_);
v___x_2271_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2256_, v_inst_2257_, v_inst_2258_, v_pre_2259_, v_post_2260_, v_usedLetOnly_2261_, v_skipConstInApp_2262_, v_skipInstances_2263_, v_x_2264_, v_x_2265_, v___x_2270_, v_a_2253_);
v___x_2272_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v___x_2271_, v___f_2269_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_2273_ = _args[0];
lean_object* v___x_2274_ = _args[1];
lean_object* v_declName_2275_ = _args[2];
lean_object* v___f_2276_ = _args[3];
lean_object* v_nondep_2277_ = _args[4];
lean_object* v_a_2278_ = _args[5];
lean_object* v_value_2279_ = _args[6];
lean_object* v_fvars_2280_ = _args[7];
lean_object* v_inst_2281_ = _args[8];
lean_object* v_inst_2282_ = _args[9];
lean_object* v_inst_2283_ = _args[10];
lean_object* v_pre_2284_ = _args[11];
lean_object* v_post_2285_ = _args[12];
lean_object* v_usedLetOnly_2286_ = _args[13];
lean_object* v_skipConstInApp_2287_ = _args[14];
lean_object* v_skipInstances_2288_ = _args[15];
lean_object* v_x_2289_ = _args[16];
lean_object* v_x_2290_ = _args[17];
lean_object* v_toBind_2291_ = _args[18];
lean_object* v_a_2292_ = _args[19];
_start:
{
uint8_t v_nondep_4068__boxed_2293_; uint8_t v_usedLetOnly_boxed_2294_; uint8_t v_skipConstInApp_boxed_2295_; uint8_t v_skipInstances_boxed_2296_; lean_object* v_res_2297_; 
v_nondep_4068__boxed_2293_ = lean_unbox(v_nondep_2277_);
v_usedLetOnly_boxed_2294_ = lean_unbox(v_usedLetOnly_2286_);
v_skipConstInApp_boxed_2295_ = lean_unbox(v_skipConstInApp_2287_);
v_skipInstances_boxed_2296_ = lean_unbox(v_skipInstances_2288_);
v_res_2297_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(v___x_2273_, v___x_2274_, v_declName_2275_, v___f_2276_, v_nondep_4068__boxed_2293_, v_a_2278_, v_value_2279_, v_fvars_2280_, v_inst_2281_, v_inst_2282_, v_inst_2283_, v_pre_2284_, v_post_2285_, v_usedLetOnly_boxed_2294_, v_skipConstInApp_boxed_2295_, v_skipInstances_boxed_2296_, v_x_2289_, v_x_2290_, v_toBind_2291_, v_a_2292_);
lean_dec_ref(v_fvars_2280_);
lean_dec_ref(v_value_2279_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object* v_inst_2298_, lean_object* v_inst_2299_, lean_object* v_inst_2300_, lean_object* v_pre_2301_, lean_object* v_post_2302_, uint8_t v_usedLetOnly_2303_, uint8_t v_skipConstInApp_2304_, uint8_t v_skipInstances_2305_, lean_object* v_x_2306_, lean_object* v_x_2307_, lean_object* v_fvars_2308_, lean_object* v_e_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___f_2315_; lean_object* v___f_2316_; lean_object* v___x_2317_; 
v___x_2311_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2312_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2298_);
v___x_2313_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2306_, v___x_2311_, v___x_2312_, v_inst_2298_);
v___x_2314_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2306_, v___x_2311_, v___x_2312_);
lean_inc_ref(v_inst_2300_);
lean_inc_ref(v___x_2314_);
v___f_2315_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2315_, 0, v___x_2314_);
lean_closure_set(v___f_2315_, 1, v_inst_2300_);
lean_inc_ref(v_inst_2300_);
v___f_2316_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2316_, 0, v___x_2314_);
lean_closure_set(v___f_2316_, 1, v_inst_2300_);
v___x_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___f_2315_);
lean_ctor_set(v___x_2317_, 1, v___f_2316_);
if (lean_obj_tag(v_e_2309_) == 8)
{
lean_object* v_declName_2318_; lean_object* v_type_2319_; lean_object* v_value_2320_; lean_object* v_body_2321_; uint8_t v_nondep_2322_; lean_object* v_toBind_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___f_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___f_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v_declName_2318_ = lean_ctor_get(v_e_2309_, 0);
lean_inc(v_declName_2318_);
v_type_2319_ = lean_ctor_get(v_e_2309_, 1);
lean_inc_ref(v_type_2319_);
v_value_2320_ = lean_ctor_get(v_e_2309_, 2);
lean_inc_ref(v_value_2320_);
v_body_2321_ = lean_ctor_get(v_e_2309_, 3);
lean_inc_ref(v_body_2321_);
v_nondep_2322_ = lean_ctor_get_uint8(v_e_2309_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_2309_);
v_toBind_2323_ = lean_ctor_get(v_inst_2298_, 1);
lean_inc(v_toBind_2323_);
v___x_2324_ = lean_box(v_usedLetOnly_2303_);
v___x_2325_ = lean_box(v_skipConstInApp_2304_);
v___x_2326_ = lean_box(v_skipInstances_2305_);
lean_inc(v_x_2307_);
lean_inc(v_post_2302_);
lean_inc(v_pre_2301_);
lean_inc_ref(v_inst_2300_);
lean_inc(v_inst_2299_);
lean_inc_ref(v_inst_2298_);
lean_inc_ref(v_fvars_2308_);
v___f_2327_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2327_, 0, v_fvars_2308_);
lean_closure_set(v___f_2327_, 1, v_inst_2298_);
lean_closure_set(v___f_2327_, 2, v_inst_2299_);
lean_closure_set(v___f_2327_, 3, v_inst_2300_);
lean_closure_set(v___f_2327_, 4, v_pre_2301_);
lean_closure_set(v___f_2327_, 5, v_post_2302_);
lean_closure_set(v___f_2327_, 6, v___x_2324_);
lean_closure_set(v___f_2327_, 7, v___x_2325_);
lean_closure_set(v___f_2327_, 8, v___x_2326_);
lean_closure_set(v___f_2327_, 9, v_x_2306_);
lean_closure_set(v___f_2327_, 10, v_x_2307_);
lean_closure_set(v___f_2327_, 11, v_body_2321_);
v___x_2328_ = lean_box(v_nondep_2322_);
v___x_2329_ = lean_box(v_usedLetOnly_2303_);
v___x_2330_ = lean_box(v_skipConstInApp_2304_);
v___x_2331_ = lean_box(v_skipInstances_2305_);
lean_inc(v_toBind_2323_);
lean_inc(v_x_2307_);
lean_inc(v_post_2302_);
lean_inc(v_pre_2301_);
lean_inc_ref(v_inst_2300_);
lean_inc(v_inst_2299_);
lean_inc_ref(v_inst_2298_);
lean_inc_ref(v_fvars_2308_);
lean_inc(v_a_2310_);
v___f_2332_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed), 20, 19);
lean_closure_set(v___f_2332_, 0, v___x_2317_);
lean_closure_set(v___f_2332_, 1, v___x_2313_);
lean_closure_set(v___f_2332_, 2, v_declName_2318_);
lean_closure_set(v___f_2332_, 3, v___f_2327_);
lean_closure_set(v___f_2332_, 4, v___x_2328_);
lean_closure_set(v___f_2332_, 5, v_a_2310_);
lean_closure_set(v___f_2332_, 6, v_value_2320_);
lean_closure_set(v___f_2332_, 7, v_fvars_2308_);
lean_closure_set(v___f_2332_, 8, v_inst_2298_);
lean_closure_set(v___f_2332_, 9, v_inst_2299_);
lean_closure_set(v___f_2332_, 10, v_inst_2300_);
lean_closure_set(v___f_2332_, 11, v_pre_2301_);
lean_closure_set(v___f_2332_, 12, v_post_2302_);
lean_closure_set(v___f_2332_, 13, v___x_2329_);
lean_closure_set(v___f_2332_, 14, v___x_2330_);
lean_closure_set(v___f_2332_, 15, v___x_2331_);
lean_closure_set(v___f_2332_, 16, v_x_2306_);
lean_closure_set(v___f_2332_, 17, v_x_2307_);
lean_closure_set(v___f_2332_, 18, v_toBind_2323_);
v___x_2333_ = lean_expr_instantiate_rev(v_type_2319_, v_fvars_2308_);
lean_dec_ref(v_fvars_2308_);
lean_dec_ref(v_type_2319_);
v___x_2334_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2298_, v_inst_2299_, v_inst_2300_, v_pre_2301_, v_post_2302_, v_usedLetOnly_2303_, v_skipConstInApp_2304_, v_skipInstances_2305_, v_x_2306_, v_x_2307_, v___x_2333_, v_a_2310_);
v___x_2335_ = lean_apply_4(v_toBind_2323_, lean_box(0), lean_box(0), v___x_2334_, v___f_2332_);
return v___x_2335_;
}
else
{
lean_object* v_toBind_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___f_2340_; lean_object* v___x_2341_; lean_object* v___f_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
lean_dec_ref(v___x_2317_);
lean_dec_ref(v___x_2313_);
v_toBind_2336_ = lean_ctor_get(v_inst_2298_, 1);
lean_inc(v_toBind_2336_);
v___x_2337_ = lean_box(v_usedLetOnly_2303_);
v___x_2338_ = lean_box(v_skipConstInApp_2304_);
v___x_2339_ = lean_box(v_skipInstances_2305_);
lean_inc(v_a_2310_);
lean_inc(v_x_2307_);
lean_inc(v_post_2302_);
lean_inc(v_pre_2301_);
lean_inc_ref(v_inst_2300_);
lean_inc(v_inst_2299_);
lean_inc_ref(v_inst_2298_);
v___f_2340_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2340_, 0, v_inst_2298_);
lean_closure_set(v___f_2340_, 1, v_inst_2299_);
lean_closure_set(v___f_2340_, 2, v_inst_2300_);
lean_closure_set(v___f_2340_, 3, v_pre_2301_);
lean_closure_set(v___f_2340_, 4, v_post_2302_);
lean_closure_set(v___f_2340_, 5, v___x_2337_);
lean_closure_set(v___f_2340_, 6, v___x_2338_);
lean_closure_set(v___f_2340_, 7, v___x_2339_);
lean_closure_set(v___f_2340_, 8, v_x_2306_);
lean_closure_set(v___f_2340_, 9, v_x_2307_);
lean_closure_set(v___f_2340_, 10, v_a_2310_);
v___x_2341_ = lean_box(v_usedLetOnly_2303_);
lean_inc(v_toBind_2336_);
lean_inc(v_inst_2299_);
lean_inc_ref(v_fvars_2308_);
v___f_2342_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2342_, 0, v_fvars_2308_);
lean_closure_set(v___f_2342_, 1, v___x_2341_);
lean_closure_set(v___f_2342_, 2, v_inst_2299_);
lean_closure_set(v___f_2342_, 3, v_toBind_2336_);
lean_closure_set(v___f_2342_, 4, v___f_2340_);
v___x_2343_ = lean_expr_instantiate_rev(v_e_2309_, v_fvars_2308_);
lean_dec_ref(v_fvars_2308_);
lean_dec_ref(v_e_2309_);
v___x_2344_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2298_, v_inst_2299_, v_inst_2300_, v_pre_2301_, v_post_2302_, v_usedLetOnly_2303_, v_skipConstInApp_2304_, v_skipInstances_2305_, v_x_2306_, v_x_2307_, v___x_2343_, v_a_2310_);
v___x_2345_ = lean_apply_4(v_toBind_2336_, lean_box(0), lean_box(0), v___x_2344_, v___f_2342_);
return v___x_2345_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object* v_expr_2346_, lean_object* v_data_2347_, lean_object* v_inst_2348_, lean_object* v_inst_2349_, lean_object* v_inst_2350_, lean_object* v_pre_2351_, lean_object* v_post_2352_, uint8_t v_usedLetOnly_2353_, uint8_t v_skipConstInApp_2354_, uint8_t v_skipInstances_2355_, lean_object* v_x_2356_, lean_object* v_x_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v_a_2360_){
_start:
{
size_t v___x_2361_; size_t v___x_2362_; uint8_t v___x_2363_; 
v___x_2361_ = lean_ptr_addr(v_expr_2346_);
v___x_2362_ = lean_ptr_addr(v_a_2360_);
v___x_2363_ = lean_usize_dec_eq(v___x_2361_, v___x_2362_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
lean_dec_ref(v___y_2359_);
v___x_2364_ = l_Lean_Expr_mdata___override(v_data_2347_, v_a_2360_);
v___x_2365_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2348_, v_inst_2349_, v_inst_2350_, v_pre_2351_, v_post_2352_, v_usedLetOnly_2353_, v_skipConstInApp_2354_, v_skipInstances_2355_, v_x_2356_, v_x_2357_, v___x_2364_, v___y_2358_);
return v___x_2365_;
}
else
{
lean_object* v___x_2366_; 
lean_dec_ref(v_a_2360_);
lean_dec(v_data_2347_);
v___x_2366_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2348_, v_inst_2349_, v_inst_2350_, v_pre_2351_, v_post_2352_, v_usedLetOnly_2353_, v_skipConstInApp_2354_, v_skipInstances_2355_, v_x_2356_, v_x_2357_, v___y_2359_, v___y_2358_);
return v___x_2366_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object* v_expr_2367_, lean_object* v_data_2368_, lean_object* v_inst_2369_, lean_object* v_inst_2370_, lean_object* v_inst_2371_, lean_object* v_pre_2372_, lean_object* v_post_2373_, lean_object* v_usedLetOnly_2374_, lean_object* v_skipConstInApp_2375_, lean_object* v_skipInstances_2376_, lean_object* v_x_2377_, lean_object* v_x_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v_a_2381_){
_start:
{
uint8_t v_usedLetOnly_boxed_2382_; uint8_t v_skipConstInApp_boxed_2383_; uint8_t v_skipInstances_boxed_2384_; lean_object* v_res_2385_; 
v_usedLetOnly_boxed_2382_ = lean_unbox(v_usedLetOnly_2374_);
v_skipConstInApp_boxed_2383_ = lean_unbox(v_skipConstInApp_2375_);
v_skipInstances_boxed_2384_ = lean_unbox(v_skipInstances_2376_);
v_res_2385_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(v_expr_2367_, v_data_2368_, v_inst_2369_, v_inst_2370_, v_inst_2371_, v_pre_2372_, v_post_2373_, v_usedLetOnly_boxed_2382_, v_skipConstInApp_boxed_2383_, v_skipInstances_boxed_2384_, v_x_2377_, v_x_2378_, v___y_2379_, v___y_2380_, v_a_2381_);
lean_dec_ref(v_expr_2367_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object* v_struct_2386_, lean_object* v_typeName_2387_, lean_object* v_idx_2388_, lean_object* v_inst_2389_, lean_object* v_inst_2390_, lean_object* v_inst_2391_, lean_object* v_pre_2392_, lean_object* v_post_2393_, uint8_t v_usedLetOnly_2394_, uint8_t v_skipConstInApp_2395_, uint8_t v_skipInstances_2396_, lean_object* v_x_2397_, lean_object* v_x_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v_a_2401_){
_start:
{
size_t v___x_2402_; size_t v___x_2403_; uint8_t v___x_2404_; 
v___x_2402_ = lean_ptr_addr(v_struct_2386_);
v___x_2403_ = lean_ptr_addr(v_a_2401_);
v___x_2404_ = lean_usize_dec_eq(v___x_2402_, v___x_2403_);
if (v___x_2404_ == 0)
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
lean_dec_ref(v___y_2400_);
v___x_2405_ = l_Lean_Expr_proj___override(v_typeName_2387_, v_idx_2388_, v_a_2401_);
v___x_2406_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2389_, v_inst_2390_, v_inst_2391_, v_pre_2392_, v_post_2393_, v_usedLetOnly_2394_, v_skipConstInApp_2395_, v_skipInstances_2396_, v_x_2397_, v_x_2398_, v___x_2405_, v___y_2399_);
return v___x_2406_;
}
else
{
lean_object* v___x_2407_; 
lean_dec_ref(v_a_2401_);
lean_dec(v_idx_2388_);
lean_dec(v_typeName_2387_);
v___x_2407_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2389_, v_inst_2390_, v_inst_2391_, v_pre_2392_, v_post_2393_, v_usedLetOnly_2394_, v_skipConstInApp_2395_, v_skipInstances_2396_, v_x_2397_, v_x_2398_, v___y_2400_, v___y_2399_);
return v___x_2407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object* v_struct_2408_, lean_object* v_typeName_2409_, lean_object* v_idx_2410_, lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_inst_2413_, lean_object* v_pre_2414_, lean_object* v_post_2415_, lean_object* v_usedLetOnly_2416_, lean_object* v_skipConstInApp_2417_, lean_object* v_skipInstances_2418_, lean_object* v_x_2419_, lean_object* v_x_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v_a_2423_){
_start:
{
uint8_t v_usedLetOnly_boxed_2424_; uint8_t v_skipConstInApp_boxed_2425_; uint8_t v_skipInstances_boxed_2426_; lean_object* v_res_2427_; 
v_usedLetOnly_boxed_2424_ = lean_unbox(v_usedLetOnly_2416_);
v_skipConstInApp_boxed_2425_ = lean_unbox(v_skipConstInApp_2417_);
v_skipInstances_boxed_2426_ = lean_unbox(v_skipInstances_2418_);
v_res_2427_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(v_struct_2408_, v_typeName_2409_, v_idx_2410_, v_inst_2411_, v_inst_2412_, v_inst_2413_, v_pre_2414_, v_post_2415_, v_usedLetOnly_boxed_2424_, v_skipConstInApp_boxed_2425_, v_skipInstances_boxed_2426_, v_x_2419_, v_x_2420_, v___y_2421_, v___y_2422_, v_a_2423_);
lean_dec_ref(v_struct_2408_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object* v_toApplicative_2428_, lean_object* v_inst_2429_, lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_pre_2432_, lean_object* v_post_2433_, uint8_t v_usedLetOnly_2434_, uint8_t v_skipConstInApp_2435_, uint8_t v_skipInstances_2436_, lean_object* v_x_2437_, lean_object* v_x_2438_, lean_object* v___f_2439_, lean_object* v_toBind_2440_, lean_object* v_e_2441_, lean_object* v_____do__lift_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___y_2445_; 
switch(lean_obj_tag(v_____do__lift_2442_))
{
case 0:
{
lean_object* v_e_2477_; lean_object* v_toPure_2478_; lean_object* v___x_2479_; 
lean_dec(v___y_2443_);
lean_dec_ref(v_e_2441_);
lean_dec(v_toBind_2440_);
lean_dec(v___f_2439_);
lean_dec(v_x_2438_);
lean_dec(v_post_2433_);
lean_dec(v_pre_2432_);
lean_dec_ref(v_inst_2431_);
lean_dec(v_inst_2430_);
lean_dec_ref(v_inst_2429_);
v_e_2477_ = lean_ctor_get(v_____do__lift_2442_, 0);
lean_inc_ref(v_e_2477_);
lean_dec_ref(v_____do__lift_2442_);
v_toPure_2478_ = lean_ctor_get(v_toApplicative_2428_, 1);
lean_inc(v_toPure_2478_);
lean_dec_ref(v_toApplicative_2428_);
v___x_2479_ = lean_apply_2(v_toPure_2478_, lean_box(0), v_e_2477_);
return v___x_2479_;
}
case 1:
{
lean_object* v_e_2480_; lean_object* v___x_2481_; 
lean_dec_ref(v_e_2441_);
lean_dec(v_toBind_2440_);
lean_dec(v___f_2439_);
lean_dec_ref(v_toApplicative_2428_);
v_e_2480_ = lean_ctor_get(v_____do__lift_2442_, 0);
lean_inc_ref(v_e_2480_);
lean_dec_ref(v_____do__lift_2442_);
v___x_2481_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v_e_2480_, v___y_2443_);
return v___x_2481_;
}
default: 
{
lean_object* v_e_x3f_2482_; 
lean_dec_ref(v_toApplicative_2428_);
v_e_x3f_2482_ = lean_ctor_get(v_____do__lift_2442_, 0);
lean_inc(v_e_x3f_2482_);
lean_dec_ref(v_____do__lift_2442_);
if (lean_obj_tag(v_e_x3f_2482_) == 0)
{
v___y_2445_ = v_e_2441_;
goto v___jp_2444_;
}
else
{
lean_object* v_val_2483_; 
lean_dec_ref(v_e_2441_);
v_val_2483_ = lean_ctor_get(v_e_x3f_2482_, 0);
lean_inc(v_val_2483_);
lean_dec_ref(v_e_x3f_2482_);
v___y_2445_ = v_val_2483_;
goto v___jp_2444_;
}
}
}
v___jp_2444_:
{
switch(lean_obj_tag(v___y_2445_))
{
case 7:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
lean_dec(v_toBind_2440_);
lean_dec(v___f_2439_);
v___x_2446_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2447_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v___x_2446_, v___y_2445_, v___y_2443_);
return v___x_2447_;
}
case 6:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
lean_dec(v_toBind_2440_);
lean_dec(v___f_2439_);
v___x_2448_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2449_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v___x_2448_, v___y_2445_, v___y_2443_);
return v___x_2449_;
}
case 8:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
lean_dec(v_toBind_2440_);
lean_dec(v___f_2439_);
v___x_2450_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2451_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v___x_2450_, v___y_2445_, v___y_2443_);
return v___x_2451_;
}
case 5:
{
lean_object* v_dummy_2452_; lean_object* v_nargs_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_3670__overap_2457_; lean_object* v___x_2458_; 
lean_dec(v_toBind_2440_);
lean_dec(v_x_2438_);
lean_dec(v_post_2433_);
lean_dec(v_pre_2432_);
lean_dec_ref(v_inst_2431_);
lean_dec(v_inst_2430_);
lean_dec_ref(v_inst_2429_);
v_dummy_2452_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_2453_ = l_Lean_Expr_getAppNumArgs(v___y_2445_);
lean_inc(v_nargs_2453_);
v___x_2454_ = lean_mk_array(v_nargs_2453_, v_dummy_2452_);
v___x_2455_ = lean_unsigned_to_nat(1u);
v___x_2456_ = lean_nat_sub(v_nargs_2453_, v___x_2455_);
lean_dec(v_nargs_2453_);
v___x_3670__overap_2457_ = l_Lean_Expr_withAppAux___redArg(v___f_2439_, v___y_2445_, v___x_2454_, v___x_2456_);
v___x_2458_ = lean_apply_1(v___x_3670__overap_2457_, v___y_2443_);
return v___x_2458_;
}
case 10:
{
lean_object* v_data_2459_; lean_object* v_expr_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___f_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
lean_dec(v___f_2439_);
v_data_2459_ = lean_ctor_get(v___y_2445_, 0);
lean_inc(v_data_2459_);
v_expr_2460_ = lean_ctor_get(v___y_2445_, 1);
lean_inc_ref(v_expr_2460_);
v___x_2461_ = lean_box(v_usedLetOnly_2434_);
v___x_2462_ = lean_box(v_skipConstInApp_2435_);
v___x_2463_ = lean_box(v_skipInstances_2436_);
lean_inc(v___y_2443_);
lean_inc(v_x_2438_);
lean_inc(v_post_2433_);
lean_inc(v_pre_2432_);
lean_inc_ref(v_inst_2431_);
lean_inc(v_inst_2430_);
lean_inc_ref(v_inst_2429_);
lean_inc_ref(v_expr_2460_);
v___f_2464_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_2464_, 0, v_expr_2460_);
lean_closure_set(v___f_2464_, 1, v_data_2459_);
lean_closure_set(v___f_2464_, 2, v_inst_2429_);
lean_closure_set(v___f_2464_, 3, v_inst_2430_);
lean_closure_set(v___f_2464_, 4, v_inst_2431_);
lean_closure_set(v___f_2464_, 5, v_pre_2432_);
lean_closure_set(v___f_2464_, 6, v_post_2433_);
lean_closure_set(v___f_2464_, 7, v___x_2461_);
lean_closure_set(v___f_2464_, 8, v___x_2462_);
lean_closure_set(v___f_2464_, 9, v___x_2463_);
lean_closure_set(v___f_2464_, 10, v_x_2437_);
lean_closure_set(v___f_2464_, 11, v_x_2438_);
lean_closure_set(v___f_2464_, 12, v___y_2443_);
lean_closure_set(v___f_2464_, 13, v___y_2445_);
v___x_2465_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v_expr_2460_, v___y_2443_);
v___x_2466_ = lean_apply_4(v_toBind_2440_, lean_box(0), lean_box(0), v___x_2465_, v___f_2464_);
return v___x_2466_;
}
case 11:
{
lean_object* v_typeName_2467_; lean_object* v_idx_2468_; lean_object* v_struct_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___f_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
lean_dec(v___f_2439_);
v_typeName_2467_ = lean_ctor_get(v___y_2445_, 0);
lean_inc(v_typeName_2467_);
v_idx_2468_ = lean_ctor_get(v___y_2445_, 1);
lean_inc(v_idx_2468_);
v_struct_2469_ = lean_ctor_get(v___y_2445_, 2);
lean_inc_ref(v_struct_2469_);
v___x_2470_ = lean_box(v_usedLetOnly_2434_);
v___x_2471_ = lean_box(v_skipConstInApp_2435_);
v___x_2472_ = lean_box(v_skipInstances_2436_);
lean_inc(v___y_2443_);
lean_inc(v_x_2438_);
lean_inc(v_post_2433_);
lean_inc(v_pre_2432_);
lean_inc_ref(v_inst_2431_);
lean_inc(v_inst_2430_);
lean_inc_ref(v_inst_2429_);
lean_inc_ref(v_struct_2469_);
v___f_2473_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed), 16, 15);
lean_closure_set(v___f_2473_, 0, v_struct_2469_);
lean_closure_set(v___f_2473_, 1, v_typeName_2467_);
lean_closure_set(v___f_2473_, 2, v_idx_2468_);
lean_closure_set(v___f_2473_, 3, v_inst_2429_);
lean_closure_set(v___f_2473_, 4, v_inst_2430_);
lean_closure_set(v___f_2473_, 5, v_inst_2431_);
lean_closure_set(v___f_2473_, 6, v_pre_2432_);
lean_closure_set(v___f_2473_, 7, v_post_2433_);
lean_closure_set(v___f_2473_, 8, v___x_2470_);
lean_closure_set(v___f_2473_, 9, v___x_2471_);
lean_closure_set(v___f_2473_, 10, v___x_2472_);
lean_closure_set(v___f_2473_, 11, v_x_2437_);
lean_closure_set(v___f_2473_, 12, v_x_2438_);
lean_closure_set(v___f_2473_, 13, v___y_2443_);
lean_closure_set(v___f_2473_, 14, v___y_2445_);
v___x_2474_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v_struct_2469_, v___y_2443_);
v___x_2475_ = lean_apply_4(v_toBind_2440_, lean_box(0), lean_box(0), v___x_2474_, v___f_2473_);
return v___x_2475_;
}
default: 
{
lean_object* v___x_2476_; 
lean_dec(v_toBind_2440_);
lean_dec(v___f_2439_);
v___x_2476_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2429_, v_inst_2430_, v_inst_2431_, v_pre_2432_, v_post_2433_, v_usedLetOnly_2434_, v_skipConstInApp_2435_, v_skipInstances_2436_, v_x_2437_, v_x_2438_, v___y_2445_, v___y_2443_);
return v___x_2476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object* v_toApplicative_2484_, lean_object* v_inst_2485_, lean_object* v_inst_2486_, lean_object* v_inst_2487_, lean_object* v_pre_2488_, lean_object* v_post_2489_, lean_object* v_usedLetOnly_2490_, lean_object* v_skipConstInApp_2491_, lean_object* v_skipInstances_2492_, lean_object* v_x_2493_, lean_object* v_x_2494_, lean_object* v___f_2495_, lean_object* v_toBind_2496_, lean_object* v_e_2497_, lean_object* v_____do__lift_2498_, lean_object* v___y_2499_){
_start:
{
uint8_t v_usedLetOnly_boxed_2500_; uint8_t v_skipConstInApp_boxed_2501_; uint8_t v_skipInstances_boxed_2502_; lean_object* v_res_2503_; 
v_usedLetOnly_boxed_2500_ = lean_unbox(v_usedLetOnly_2490_);
v_skipConstInApp_boxed_2501_ = lean_unbox(v_skipConstInApp_2491_);
v_skipInstances_boxed_2502_ = lean_unbox(v_skipInstances_2492_);
v_res_2503_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(v_toApplicative_2484_, v_inst_2485_, v_inst_2486_, v_inst_2487_, v_pre_2488_, v_post_2489_, v_usedLetOnly_boxed_2500_, v_skipConstInApp_boxed_2501_, v_skipInstances_boxed_2502_, v_x_2493_, v_x_2494_, v___f_2495_, v_toBind_2496_, v_e_2497_, v_____do__lift_2498_, v___y_2499_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object* v_inst_2504_, lean_object* v_inst_2505_, lean_object* v_inst_2506_, lean_object* v_pre_2507_, lean_object* v_post_2508_, uint8_t v_usedLetOnly_2509_, uint8_t v_skipConstInApp_2510_, uint8_t v_skipInstances_2511_, lean_object* v_x_2512_, lean_object* v_x_2513_, lean_object* v_e_2514_, lean_object* v_a_2515_){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___f_2520_; lean_object* v___f_2521_; lean_object* v___x_2522_; lean_object* v_toApplicative_2523_; lean_object* v_toBind_2524_; lean_object* v___f_2525_; lean_object* v___f_2526_; lean_object* v___f_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___f_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___f_2535_; lean_object* v___f_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2516_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2517_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2504_);
v___x_2518_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2512_, v___x_2516_, v___x_2517_, v_inst_2504_);
v___x_2519_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2512_, v___x_2516_, v___x_2517_);
lean_inc_ref(v_inst_2506_);
lean_inc_ref(v___x_2519_);
v___f_2520_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2520_, 0, v___x_2519_);
lean_closure_set(v___f_2520_, 1, v_inst_2506_);
lean_inc_ref(v_inst_2506_);
v___f_2521_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2521_, 0, v___x_2519_);
lean_closure_set(v___f_2521_, 1, v_inst_2506_);
v___x_2522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___f_2520_);
lean_ctor_set(v___x_2522_, 1, v___f_2521_);
v_toApplicative_2523_ = lean_ctor_get(v_inst_2504_, 0);
lean_inc_ref(v_toApplicative_2523_);
v_toBind_2524_ = lean_ctor_get(v_inst_2504_, 1);
lean_inc(v_toBind_2524_);
lean_inc_ref(v_toApplicative_2523_);
v___f_2525_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2525_, 0, v_toApplicative_2523_);
lean_inc(v_toBind_2524_);
lean_inc(v_x_2513_);
lean_inc(v_a_2515_);
lean_inc_ref(v_e_2514_);
lean_inc_ref(v_toApplicative_2523_);
v___f_2526_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2), 8, 7);
lean_closure_set(v___f_2526_, 0, v_toApplicative_2523_);
lean_closure_set(v___f_2526_, 1, v___x_2516_);
lean_closure_set(v___f_2526_, 2, v___x_2517_);
lean_closure_set(v___f_2526_, 3, v_e_2514_);
lean_closure_set(v___f_2526_, 4, v_a_2515_);
lean_closure_set(v___f_2526_, 5, v_x_2513_);
lean_closure_set(v___f_2526_, 6, v_toBind_2524_);
lean_inc_ref(v_e_2514_);
lean_inc_ref(v_toApplicative_2523_);
v___f_2527_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_2527_, 0, v_toApplicative_2523_);
lean_closure_set(v___f_2527_, 1, v___x_2516_);
lean_closure_set(v___f_2527_, 2, v___x_2517_);
lean_closure_set(v___f_2527_, 3, v_e_2514_);
v___x_2528_ = lean_box(v_skipInstances_2511_);
v___x_2529_ = lean_box(v_usedLetOnly_2509_);
v___x_2530_ = lean_box(v_skipConstInApp_2510_);
lean_inc_ref(v_toApplicative_2523_);
lean_inc(v_toBind_2524_);
lean_inc_ref(v___x_2518_);
lean_inc(v_x_2513_);
lean_inc(v_post_2508_);
lean_inc(v_pre_2507_);
lean_inc_ref(v_inst_2506_);
lean_inc(v_inst_2505_);
lean_inc_ref(v_inst_2504_);
v___f_2531_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed), 17, 14);
lean_closure_set(v___f_2531_, 0, v___x_2528_);
lean_closure_set(v___f_2531_, 1, v_inst_2504_);
lean_closure_set(v___f_2531_, 2, v_inst_2505_);
lean_closure_set(v___f_2531_, 3, v_inst_2506_);
lean_closure_set(v___f_2531_, 4, v_pre_2507_);
lean_closure_set(v___f_2531_, 5, v_post_2508_);
lean_closure_set(v___f_2531_, 6, v___x_2529_);
lean_closure_set(v___f_2531_, 7, v___x_2530_);
lean_closure_set(v___f_2531_, 8, v_x_2512_);
lean_closure_set(v___f_2531_, 9, v_x_2513_);
lean_closure_set(v___f_2531_, 10, v___x_2518_);
lean_closure_set(v___f_2531_, 11, v_toBind_2524_);
lean_closure_set(v___f_2531_, 12, v_toApplicative_2523_);
lean_closure_set(v___f_2531_, 13, v___f_2525_);
v___x_2532_ = lean_box(v_usedLetOnly_2509_);
v___x_2533_ = lean_box(v_skipConstInApp_2510_);
v___x_2534_ = lean_box(v_skipInstances_2511_);
lean_inc_ref(v_e_2514_);
lean_inc(v_toBind_2524_);
lean_inc(v_x_2513_);
lean_inc(v_pre_2507_);
lean_inc_ref(v_inst_2504_);
lean_inc_ref(v_toApplicative_2523_);
v___f_2535_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed), 16, 14);
lean_closure_set(v___f_2535_, 0, v_toApplicative_2523_);
lean_closure_set(v___f_2535_, 1, v_inst_2504_);
lean_closure_set(v___f_2535_, 2, v_inst_2505_);
lean_closure_set(v___f_2535_, 3, v_inst_2506_);
lean_closure_set(v___f_2535_, 4, v_pre_2507_);
lean_closure_set(v___f_2535_, 5, v_post_2508_);
lean_closure_set(v___f_2535_, 6, v___x_2532_);
lean_closure_set(v___f_2535_, 7, v___x_2533_);
lean_closure_set(v___f_2535_, 8, v___x_2534_);
lean_closure_set(v___f_2535_, 9, v_x_2512_);
lean_closure_set(v___f_2535_, 10, v_x_2513_);
lean_closure_set(v___f_2535_, 11, v___f_2531_);
lean_closure_set(v___f_2535_, 12, v_toBind_2524_);
lean_closure_set(v___f_2535_, 13, v_e_2514_);
lean_inc(v_toBind_2524_);
lean_inc(v_a_2515_);
v___f_2536_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12), 14, 13);
lean_closure_set(v___f_2536_, 0, v_pre_2507_);
lean_closure_set(v___f_2536_, 1, v_e_2514_);
lean_closure_set(v___f_2536_, 2, v_x_2512_);
lean_closure_set(v___f_2536_, 3, v___x_2516_);
lean_closure_set(v___f_2536_, 4, v___x_2517_);
lean_closure_set(v___f_2536_, 5, v_inst_2504_);
lean_closure_set(v___f_2536_, 6, v___f_2535_);
lean_closure_set(v___f_2536_, 7, v___x_2522_);
lean_closure_set(v___f_2536_, 8, v___x_2518_);
lean_closure_set(v___f_2536_, 9, v_a_2515_);
lean_closure_set(v___f_2536_, 10, v_toBind_2524_);
lean_closure_set(v___f_2536_, 11, v___f_2526_);
lean_closure_set(v___f_2536_, 12, v_toApplicative_2523_);
v___x_2537_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2537_, 0, lean_box(0));
lean_closure_set(v___x_2537_, 1, lean_box(0));
lean_closure_set(v___x_2537_, 2, v_a_2515_);
v___x_2538_ = lean_apply_2(v_x_2513_, lean_box(0), v___x_2537_);
lean_inc(v_toBind_2524_);
v___x_2539_ = lean_apply_4(v_toBind_2524_, lean_box(0), lean_box(0), v___x_2538_, v___f_2527_);
v___x_2540_ = lean_apply_4(v_toBind_2524_, lean_box(0), lean_box(0), v___x_2539_, v___f_2536_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_2541_, lean_object* v_inst_2542_, lean_object* v_inst_2543_, lean_object* v_inst_2544_, lean_object* v_pre_2545_, lean_object* v_post_2546_, uint8_t v_usedLetOnly_2547_, uint8_t v_skipConstInApp_2548_, uint8_t v_skipInstances_2549_, lean_object* v_x_2550_, lean_object* v_x_2551_, lean_object* v_a_2552_, lean_object* v_e_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___y_2556_; 
switch(lean_obj_tag(v_a_2554_))
{
case 0:
{
lean_object* v_e_2559_; lean_object* v_toPure_2560_; lean_object* v___x_2561_; 
lean_dec_ref(v_e_2553_);
lean_dec(v_a_2552_);
lean_dec(v_x_2551_);
lean_dec(v_post_2546_);
lean_dec(v_pre_2545_);
lean_dec_ref(v_inst_2544_);
lean_dec(v_inst_2543_);
lean_dec_ref(v_inst_2542_);
v_e_2559_ = lean_ctor_get(v_a_2554_, 0);
lean_inc_ref(v_e_2559_);
lean_dec_ref(v_a_2554_);
v_toPure_2560_ = lean_ctor_get(v_toApplicative_2541_, 1);
lean_inc(v_toPure_2560_);
lean_dec_ref(v_toApplicative_2541_);
v___x_2561_ = lean_apply_2(v_toPure_2560_, lean_box(0), v_e_2559_);
return v___x_2561_;
}
case 1:
{
lean_object* v_e_2562_; lean_object* v___x_2563_; 
lean_dec_ref(v_e_2553_);
lean_dec_ref(v_toApplicative_2541_);
v_e_2562_ = lean_ctor_get(v_a_2554_, 0);
lean_inc_ref(v_e_2562_);
lean_dec_ref(v_a_2554_);
v___x_2563_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2542_, v_inst_2543_, v_inst_2544_, v_pre_2545_, v_post_2546_, v_usedLetOnly_2547_, v_skipConstInApp_2548_, v_skipInstances_2549_, v_x_2550_, v_x_2551_, v_e_2562_, v_a_2552_);
return v___x_2563_;
}
default: 
{
lean_object* v_e_x3f_2564_; 
lean_dec(v_a_2552_);
lean_dec(v_x_2551_);
lean_dec(v_post_2546_);
lean_dec(v_pre_2545_);
lean_dec_ref(v_inst_2544_);
lean_dec(v_inst_2543_);
lean_dec_ref(v_inst_2542_);
v_e_x3f_2564_ = lean_ctor_get(v_a_2554_, 0);
lean_inc(v_e_x3f_2564_);
lean_dec_ref(v_a_2554_);
if (lean_obj_tag(v_e_x3f_2564_) == 0)
{
v___y_2556_ = v_e_2553_;
goto v___jp_2555_;
}
else
{
lean_object* v_val_2565_; 
lean_dec_ref(v_e_2553_);
v_val_2565_ = lean_ctor_get(v_e_x3f_2564_, 0);
lean_inc(v_val_2565_);
lean_dec_ref(v_e_x3f_2564_);
v___y_2556_ = v_val_2565_;
goto v___jp_2555_;
}
}
}
v___jp_2555_:
{
lean_object* v_toPure_2557_; lean_object* v___x_2558_; 
v_toPure_2557_ = lean_ctor_get(v_toApplicative_2541_, 1);
lean_inc(v_toPure_2557_);
lean_dec_ref(v_toApplicative_2541_);
v___x_2558_ = lean_apply_2(v_toPure_2557_, lean_box(0), v___y_2556_);
return v___x_2558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_2566_, lean_object* v_inst_2567_, lean_object* v_inst_2568_, lean_object* v_inst_2569_, lean_object* v_pre_2570_, lean_object* v_post_2571_, lean_object* v_usedLetOnly_2572_, lean_object* v_skipConstInApp_2573_, lean_object* v_skipInstances_2574_, lean_object* v_x_2575_, lean_object* v_x_2576_, lean_object* v_a_2577_, lean_object* v_e_2578_, lean_object* v_a_2579_){
_start:
{
uint8_t v_usedLetOnly_boxed_2580_; uint8_t v_skipConstInApp_boxed_2581_; uint8_t v_skipInstances_boxed_2582_; lean_object* v_res_2583_; 
v_usedLetOnly_boxed_2580_ = lean_unbox(v_usedLetOnly_2572_);
v_skipConstInApp_boxed_2581_ = lean_unbox(v_skipConstInApp_2573_);
v_skipInstances_boxed_2582_ = lean_unbox(v_skipInstances_2574_);
v_res_2583_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(v_toApplicative_2566_, v_inst_2567_, v_inst_2568_, v_inst_2569_, v_pre_2570_, v_post_2571_, v_usedLetOnly_boxed_2580_, v_skipConstInApp_boxed_2581_, v_skipInstances_boxed_2582_, v_x_2575_, v_x_2576_, v_a_2577_, v_e_2578_, v_a_2579_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object* v_inst_2584_, lean_object* v_inst_2585_, lean_object* v_inst_2586_, lean_object* v_pre_2587_, lean_object* v_post_2588_, uint8_t v_usedLetOnly_2589_, uint8_t v_skipConstInApp_2590_, uint8_t v_skipInstances_2591_, lean_object* v_x_2592_, lean_object* v_x_2593_, lean_object* v_e_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v_toApplicative_2596_; lean_object* v_toBind_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___f_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v_toApplicative_2596_ = lean_ctor_get(v_inst_2584_, 0);
lean_inc_ref(v_toApplicative_2596_);
v_toBind_2597_ = lean_ctor_get(v_inst_2584_, 1);
lean_inc(v_toBind_2597_);
v___x_2598_ = lean_box(v_usedLetOnly_2589_);
v___x_2599_ = lean_box(v_skipConstInApp_2590_);
v___x_2600_ = lean_box(v_skipInstances_2591_);
lean_inc_ref(v_e_2594_);
lean_inc(v_post_2588_);
v___f_2601_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_2601_, 0, v_toApplicative_2596_);
lean_closure_set(v___f_2601_, 1, v_inst_2584_);
lean_closure_set(v___f_2601_, 2, v_inst_2585_);
lean_closure_set(v___f_2601_, 3, v_inst_2586_);
lean_closure_set(v___f_2601_, 4, v_pre_2587_);
lean_closure_set(v___f_2601_, 5, v_post_2588_);
lean_closure_set(v___f_2601_, 6, v___x_2598_);
lean_closure_set(v___f_2601_, 7, v___x_2599_);
lean_closure_set(v___f_2601_, 8, v___x_2600_);
lean_closure_set(v___f_2601_, 9, v_x_2592_);
lean_closure_set(v___f_2601_, 10, v_x_2593_);
lean_closure_set(v___f_2601_, 11, v_a_2595_);
lean_closure_set(v___f_2601_, 12, v_e_2594_);
v___x_2602_ = lean_apply_1(v_post_2588_, v_e_2594_);
v___x_2603_ = lean_apply_4(v_toBind_2597_, lean_box(0), lean_box(0), v___x_2602_, v___f_2601_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object* v_inst_2604_, lean_object* v_inst_2605_, lean_object* v_inst_2606_, lean_object* v_pre_2607_, lean_object* v_post_2608_, uint8_t v_usedLetOnly_2609_, uint8_t v_skipConstInApp_2610_, uint8_t v_skipInstances_2611_, lean_object* v_x_2612_, lean_object* v_x_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_){
_start:
{
lean_object* v___x_2616_; 
v___x_2616_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2604_, v_inst_2605_, v_inst_2606_, v_pre_2607_, v_post_2608_, v_usedLetOnly_2609_, v_skipConstInApp_2610_, v_skipInstances_2611_, v_x_2612_, v_x_2613_, v_a_2615_, v_a_2614_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object* v_inst_2617_, lean_object* v_inst_2618_, lean_object* v_inst_2619_, lean_object* v_pre_2620_, lean_object* v_post_2621_, lean_object* v_usedLetOnly_2622_, lean_object* v_skipConstInApp_2623_, lean_object* v_skipInstances_2624_, lean_object* v_x_2625_, lean_object* v_x_2626_, lean_object* v_e_2627_, lean_object* v_a_2628_){
_start:
{
uint8_t v_usedLetOnly_boxed_2629_; uint8_t v_skipConstInApp_boxed_2630_; uint8_t v_skipInstances_boxed_2631_; lean_object* v_res_2632_; 
v_usedLetOnly_boxed_2629_ = lean_unbox(v_usedLetOnly_2622_);
v_skipConstInApp_boxed_2630_ = lean_unbox(v_skipConstInApp_2623_);
v_skipInstances_boxed_2631_ = lean_unbox(v_skipInstances_2624_);
v_res_2632_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2617_, v_inst_2618_, v_inst_2619_, v_pre_2620_, v_post_2621_, v_usedLetOnly_boxed_2629_, v_skipConstInApp_boxed_2630_, v_skipInstances_boxed_2631_, v_x_2625_, v_x_2626_, v_e_2627_, v_a_2628_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object* v_inst_2633_, lean_object* v_inst_2634_, lean_object* v_inst_2635_, lean_object* v_pre_2636_, lean_object* v_post_2637_, lean_object* v_usedLetOnly_2638_, lean_object* v_skipConstInApp_2639_, lean_object* v_skipInstances_2640_, lean_object* v_x_2641_, lean_object* v_x_2642_, lean_object* v_fvars_2643_, lean_object* v_e_2644_, lean_object* v_a_2645_){
_start:
{
uint8_t v_usedLetOnly_boxed_2646_; uint8_t v_skipConstInApp_boxed_2647_; uint8_t v_skipInstances_boxed_2648_; lean_object* v_res_2649_; 
v_usedLetOnly_boxed_2646_ = lean_unbox(v_usedLetOnly_2638_);
v_skipConstInApp_boxed_2647_ = lean_unbox(v_skipConstInApp_2639_);
v_skipInstances_boxed_2648_ = lean_unbox(v_skipInstances_2640_);
v_res_2649_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2633_, v_inst_2634_, v_inst_2635_, v_pre_2636_, v_post_2637_, v_usedLetOnly_boxed_2646_, v_skipConstInApp_boxed_2647_, v_skipInstances_boxed_2648_, v_x_2641_, v_x_2642_, v_fvars_2643_, v_e_2644_, v_a_2645_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object* v_inst_2650_, lean_object* v_inst_2651_, lean_object* v_inst_2652_, lean_object* v_pre_2653_, lean_object* v_post_2654_, lean_object* v_usedLetOnly_2655_, lean_object* v_skipConstInApp_2656_, lean_object* v_skipInstances_2657_, lean_object* v_x_2658_, lean_object* v_x_2659_, lean_object* v_fvars_2660_, lean_object* v_e_2661_, lean_object* v_a_2662_){
_start:
{
uint8_t v_usedLetOnly_boxed_2663_; uint8_t v_skipConstInApp_boxed_2664_; uint8_t v_skipInstances_boxed_2665_; lean_object* v_res_2666_; 
v_usedLetOnly_boxed_2663_ = lean_unbox(v_usedLetOnly_2655_);
v_skipConstInApp_boxed_2664_ = lean_unbox(v_skipConstInApp_2656_);
v_skipInstances_boxed_2665_ = lean_unbox(v_skipInstances_2657_);
v_res_2666_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2650_, v_inst_2651_, v_inst_2652_, v_pre_2653_, v_post_2654_, v_usedLetOnly_boxed_2663_, v_skipConstInApp_boxed_2664_, v_skipInstances_boxed_2665_, v_x_2658_, v_x_2659_, v_fvars_2660_, v_e_2661_, v_a_2662_);
return v_res_2666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object* v_inst_2667_, lean_object* v_inst_2668_, lean_object* v_inst_2669_, lean_object* v_pre_2670_, lean_object* v_post_2671_, lean_object* v_usedLetOnly_2672_, lean_object* v_skipConstInApp_2673_, lean_object* v_skipInstances_2674_, lean_object* v_x_2675_, lean_object* v_x_2676_, lean_object* v_fvars_2677_, lean_object* v_e_2678_, lean_object* v_a_2679_){
_start:
{
uint8_t v_usedLetOnly_boxed_2680_; uint8_t v_skipConstInApp_boxed_2681_; uint8_t v_skipInstances_boxed_2682_; lean_object* v_res_2683_; 
v_usedLetOnly_boxed_2680_ = lean_unbox(v_usedLetOnly_2672_);
v_skipConstInApp_boxed_2681_ = lean_unbox(v_skipConstInApp_2673_);
v_skipInstances_boxed_2682_ = lean_unbox(v_skipInstances_2674_);
v_res_2683_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2667_, v_inst_2668_, v_inst_2669_, v_pre_2670_, v_post_2671_, v_usedLetOnly_boxed_2680_, v_skipConstInApp_boxed_2681_, v_skipInstances_boxed_2682_, v_x_2675_, v_x_2676_, v_fvars_2677_, v_e_2678_, v_a_2679_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object* v_m_2684_, lean_object* v_inst_2685_, lean_object* v_inst_2686_, lean_object* v_inst_2687_, lean_object* v_pre_2688_, lean_object* v_post_2689_, uint8_t v_usedLetOnly_2690_, uint8_t v_skipConstInApp_2691_, uint8_t v_skipInstances_2692_, lean_object* v_x_2693_, lean_object* v_x_2694_, lean_object* v_e_2695_, lean_object* v_a_2696_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2685_, v_inst_2686_, v_inst_2687_, v_pre_2688_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v_x_2693_, v_x_2694_, v_e_2695_, v_a_2696_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object* v_m_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_pre_2702_, lean_object* v_post_2703_, lean_object* v_usedLetOnly_2704_, lean_object* v_skipConstInApp_2705_, lean_object* v_skipInstances_2706_, lean_object* v_x_2707_, lean_object* v_x_2708_, lean_object* v_e_2709_, lean_object* v_a_2710_){
_start:
{
uint8_t v_usedLetOnly_boxed_2711_; uint8_t v_skipConstInApp_boxed_2712_; uint8_t v_skipInstances_boxed_2713_; lean_object* v_res_2714_; 
v_usedLetOnly_boxed_2711_ = lean_unbox(v_usedLetOnly_2704_);
v_skipConstInApp_boxed_2712_ = lean_unbox(v_skipConstInApp_2705_);
v_skipInstances_boxed_2713_ = lean_unbox(v_skipInstances_2706_);
v_res_2714_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(v_m_2698_, v_inst_2699_, v_inst_2700_, v_inst_2701_, v_pre_2702_, v_post_2703_, v_usedLetOnly_boxed_2711_, v_skipConstInApp_boxed_2712_, v_skipInstances_boxed_2713_, v_x_2707_, v_x_2708_, v_e_2709_, v_a_2710_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object* v_m_2715_, lean_object* v_inst_2716_, lean_object* v_inst_2717_, lean_object* v_inst_2718_, lean_object* v_pre_2719_, lean_object* v_post_2720_, uint8_t v_usedLetOnly_2721_, uint8_t v_skipConstInApp_2722_, uint8_t v_skipInstances_2723_, lean_object* v_x_2724_, lean_object* v_x_2725_, lean_object* v_fvars_2726_, lean_object* v_e_2727_, lean_object* v_a_2728_){
_start:
{
lean_object* v___x_2729_; 
v___x_2729_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v_fvars_2726_, v_e_2727_, v_a_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object* v_m_2730_, lean_object* v_inst_2731_, lean_object* v_inst_2732_, lean_object* v_inst_2733_, lean_object* v_pre_2734_, lean_object* v_post_2735_, lean_object* v_usedLetOnly_2736_, lean_object* v_skipConstInApp_2737_, lean_object* v_skipInstances_2738_, lean_object* v_x_2739_, lean_object* v_x_2740_, lean_object* v_fvars_2741_, lean_object* v_e_2742_, lean_object* v_a_2743_){
_start:
{
uint8_t v_usedLetOnly_boxed_2744_; uint8_t v_skipConstInApp_boxed_2745_; uint8_t v_skipInstances_boxed_2746_; lean_object* v_res_2747_; 
v_usedLetOnly_boxed_2744_ = lean_unbox(v_usedLetOnly_2736_);
v_skipConstInApp_boxed_2745_ = lean_unbox(v_skipConstInApp_2737_);
v_skipInstances_boxed_2746_ = lean_unbox(v_skipInstances_2738_);
v_res_2747_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(v_m_2730_, v_inst_2731_, v_inst_2732_, v_inst_2733_, v_pre_2734_, v_post_2735_, v_usedLetOnly_boxed_2744_, v_skipConstInApp_boxed_2745_, v_skipInstances_boxed_2746_, v_x_2739_, v_x_2740_, v_fvars_2741_, v_e_2742_, v_a_2743_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object* v_m_2748_, lean_object* v_inst_2749_, lean_object* v_inst_2750_, lean_object* v_inst_2751_, lean_object* v_pre_2752_, lean_object* v_post_2753_, uint8_t v_usedLetOnly_2754_, uint8_t v_skipConstInApp_2755_, uint8_t v_skipInstances_2756_, lean_object* v_x_2757_, lean_object* v_x_2758_, lean_object* v_e_2759_, lean_object* v_a_2760_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2749_, v_inst_2750_, v_inst_2751_, v_pre_2752_, v_post_2753_, v_usedLetOnly_2754_, v_skipConstInApp_2755_, v_skipInstances_2756_, v_x_2757_, v_x_2758_, v_e_2759_, v_a_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object* v_m_2762_, lean_object* v_inst_2763_, lean_object* v_inst_2764_, lean_object* v_inst_2765_, lean_object* v_pre_2766_, lean_object* v_post_2767_, lean_object* v_usedLetOnly_2768_, lean_object* v_skipConstInApp_2769_, lean_object* v_skipInstances_2770_, lean_object* v_x_2771_, lean_object* v_x_2772_, lean_object* v_e_2773_, lean_object* v_a_2774_){
_start:
{
uint8_t v_usedLetOnly_boxed_2775_; uint8_t v_skipConstInApp_boxed_2776_; uint8_t v_skipInstances_boxed_2777_; lean_object* v_res_2778_; 
v_usedLetOnly_boxed_2775_ = lean_unbox(v_usedLetOnly_2768_);
v_skipConstInApp_boxed_2776_ = lean_unbox(v_skipConstInApp_2769_);
v_skipInstances_boxed_2777_ = lean_unbox(v_skipInstances_2770_);
v_res_2778_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(v_m_2762_, v_inst_2763_, v_inst_2764_, v_inst_2765_, v_pre_2766_, v_post_2767_, v_usedLetOnly_boxed_2775_, v_skipConstInApp_boxed_2776_, v_skipInstances_boxed_2777_, v_x_2771_, v_x_2772_, v_e_2773_, v_a_2774_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object* v_m_2779_, lean_object* v_inst_2780_, lean_object* v_inst_2781_, lean_object* v_inst_2782_, lean_object* v_pre_2783_, lean_object* v_post_2784_, uint8_t v_usedLetOnly_2785_, uint8_t v_skipConstInApp_2786_, uint8_t v_skipInstances_2787_, lean_object* v_x_2788_, lean_object* v_x_2789_, lean_object* v_fvars_2790_, lean_object* v_e_2791_, lean_object* v_a_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2780_, v_inst_2781_, v_inst_2782_, v_pre_2783_, v_post_2784_, v_usedLetOnly_2785_, v_skipConstInApp_2786_, v_skipInstances_2787_, v_x_2788_, v_x_2789_, v_fvars_2790_, v_e_2791_, v_a_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object* v_m_2794_, lean_object* v_inst_2795_, lean_object* v_inst_2796_, lean_object* v_inst_2797_, lean_object* v_pre_2798_, lean_object* v_post_2799_, lean_object* v_usedLetOnly_2800_, lean_object* v_skipConstInApp_2801_, lean_object* v_skipInstances_2802_, lean_object* v_x_2803_, lean_object* v_x_2804_, lean_object* v_fvars_2805_, lean_object* v_e_2806_, lean_object* v_a_2807_){
_start:
{
uint8_t v_usedLetOnly_boxed_2808_; uint8_t v_skipConstInApp_boxed_2809_; uint8_t v_skipInstances_boxed_2810_; lean_object* v_res_2811_; 
v_usedLetOnly_boxed_2808_ = lean_unbox(v_usedLetOnly_2800_);
v_skipConstInApp_boxed_2809_ = lean_unbox(v_skipConstInApp_2801_);
v_skipInstances_boxed_2810_ = lean_unbox(v_skipInstances_2802_);
v_res_2811_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(v_m_2794_, v_inst_2795_, v_inst_2796_, v_inst_2797_, v_pre_2798_, v_post_2799_, v_usedLetOnly_boxed_2808_, v_skipConstInApp_boxed_2809_, v_skipInstances_boxed_2810_, v_x_2803_, v_x_2804_, v_fvars_2805_, v_e_2806_, v_a_2807_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object* v_m_2812_, lean_object* v_inst_2813_, lean_object* v_inst_2814_, lean_object* v_inst_2815_, lean_object* v_pre_2816_, lean_object* v_post_2817_, uint8_t v_usedLetOnly_2818_, uint8_t v_skipConstInApp_2819_, uint8_t v_skipInstances_2820_, lean_object* v_x_2821_, lean_object* v_x_2822_, lean_object* v_fvars_2823_, lean_object* v_e_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v___x_2826_; 
v___x_2826_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2813_, v_inst_2814_, v_inst_2815_, v_pre_2816_, v_post_2817_, v_usedLetOnly_2818_, v_skipConstInApp_2819_, v_skipInstances_2820_, v_x_2821_, v_x_2822_, v_fvars_2823_, v_e_2824_, v_a_2825_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object* v_m_2827_, lean_object* v_inst_2828_, lean_object* v_inst_2829_, lean_object* v_inst_2830_, lean_object* v_pre_2831_, lean_object* v_post_2832_, lean_object* v_usedLetOnly_2833_, lean_object* v_skipConstInApp_2834_, lean_object* v_skipInstances_2835_, lean_object* v_x_2836_, lean_object* v_x_2837_, lean_object* v_fvars_2838_, lean_object* v_e_2839_, lean_object* v_a_2840_){
_start:
{
uint8_t v_usedLetOnly_boxed_2841_; uint8_t v_skipConstInApp_boxed_2842_; uint8_t v_skipInstances_boxed_2843_; lean_object* v_res_2844_; 
v_usedLetOnly_boxed_2841_ = lean_unbox(v_usedLetOnly_2833_);
v_skipConstInApp_boxed_2842_ = lean_unbox(v_skipConstInApp_2834_);
v_skipInstances_boxed_2843_ = lean_unbox(v_skipInstances_2835_);
v_res_2844_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(v_m_2827_, v_inst_2828_, v_inst_2829_, v_inst_2830_, v_pre_2831_, v_post_2832_, v_usedLetOnly_boxed_2841_, v_skipConstInApp_boxed_2842_, v_skipInstances_boxed_2843_, v_x_2836_, v_x_2837_, v_fvars_2838_, v_e_2839_, v_a_2840_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object* v_x_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = lean_apply_1(v_x_2845_, lean_box(0));
v___x_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object* v_x_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = l_Lean_Meta_transformWithCache___redArg___lam__0(v_x_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_);
lean_dec(v___y_2857_);
lean_dec_ref(v___y_2856_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object* v_inst_2860_, lean_object* v_00_u03b1_2861_, lean_object* v_x_2862_){
_start:
{
lean_object* v___f_2863_; lean_object* v___x_2864_; 
v___f_2863_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2863_, 0, v_x_2862_);
v___x_2864_ = lean_apply_2(v_inst_2860_, lean_box(0), v___f_2863_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object* v_toPure_2865_, lean_object* v_x_2866_, lean_object* v_toBind_2867_, lean_object* v_inst_2868_, lean_object* v_inst_2869_, lean_object* v_inst_2870_, lean_object* v_pre_2871_, lean_object* v_post_2872_, uint8_t v_usedLetOnly_2873_, uint8_t v_skipConstInApp_2874_, uint8_t v_skipInstances_2875_, lean_object* v_x_2876_, lean_object* v_input_2877_, lean_object* v_ref_2878_){
_start:
{
lean_object* v___f_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_inc(v_toBind_2867_);
lean_inc(v_x_2866_);
lean_inc(v_ref_2878_);
v___f_2879_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_2879_, 0, v_toPure_2865_);
lean_closure_set(v___f_2879_, 1, v_ref_2878_);
lean_closure_set(v___f_2879_, 2, v_x_2866_);
lean_closure_set(v___f_2879_, 3, v_toBind_2867_);
v___x_2880_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2868_, v_inst_2869_, v_inst_2870_, v_pre_2871_, v_post_2872_, v_usedLetOnly_2873_, v_skipConstInApp_2874_, v_skipInstances_2875_, v_x_2876_, v_x_2866_, v_input_2877_, v_ref_2878_);
v___x_2881_ = lean_apply_4(v_toBind_2867_, lean_box(0), lean_box(0), v___x_2880_, v___f_2879_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object* v_toPure_2882_, lean_object* v_x_2883_, lean_object* v_toBind_2884_, lean_object* v_inst_2885_, lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_pre_2888_, lean_object* v_post_2889_, lean_object* v_usedLetOnly_2890_, lean_object* v_skipConstInApp_2891_, lean_object* v_skipInstances_2892_, lean_object* v_x_2893_, lean_object* v_input_2894_, lean_object* v_ref_2895_){
_start:
{
uint8_t v_usedLetOnly_boxed_2896_; uint8_t v_skipConstInApp_boxed_2897_; uint8_t v_skipInstances_boxed_2898_; lean_object* v_res_2899_; 
v_usedLetOnly_boxed_2896_ = lean_unbox(v_usedLetOnly_2890_);
v_skipConstInApp_boxed_2897_ = lean_unbox(v_skipConstInApp_2891_);
v_skipInstances_boxed_2898_ = lean_unbox(v_skipInstances_2892_);
v_res_2899_ = l_Lean_Meta_transformWithCache___redArg___lam__4(v_toPure_2882_, v_x_2883_, v_toBind_2884_, v_inst_2885_, v_inst_2886_, v_inst_2887_, v_pre_2888_, v_post_2889_, v_usedLetOnly_boxed_2896_, v_skipConstInApp_boxed_2897_, v_skipInstances_boxed_2898_, v_x_2893_, v_input_2894_, v_ref_2895_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object* v_inst_2900_, lean_object* v_inst_2901_, lean_object* v_inst_2902_, lean_object* v_input_2903_, lean_object* v_cache_2904_, lean_object* v_pre_2905_, lean_object* v_post_2906_, uint8_t v_usedLetOnly_2907_, uint8_t v_skipConstInApp_2908_, uint8_t v_skipInstances_2909_){
_start:
{
lean_object* v_x_2910_; lean_object* v_toApplicative_2911_; lean_object* v_toBind_2912_; lean_object* v_toPure_2913_; lean_object* v_x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___f_2920_; lean_object* v___x_2921_; 
v_x_2910_ = lean_box(0);
v_toApplicative_2911_ = lean_ctor_get(v_inst_2900_, 0);
v_toBind_2912_ = lean_ctor_get(v_inst_2900_, 1);
lean_inc(v_toBind_2912_);
v_toPure_2913_ = lean_ctor_get(v_toApplicative_2911_, 1);
lean_inc(v_toPure_2913_);
lean_inc(v_inst_2901_);
v_x_2914_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_2914_, 0, v_inst_2901_);
v___x_2915_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2915_, 0, lean_box(0));
lean_closure_set(v___x_2915_, 1, lean_box(0));
lean_closure_set(v___x_2915_, 2, v_cache_2904_);
lean_inc(v_inst_2901_);
v___x_2916_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_2901_, lean_box(0), v___x_2915_);
v___x_2917_ = lean_box(v_usedLetOnly_2907_);
v___x_2918_ = lean_box(v_skipConstInApp_2908_);
v___x_2919_ = lean_box(v_skipInstances_2909_);
lean_inc(v_toBind_2912_);
v___f_2920_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_2920_, 0, v_toPure_2913_);
lean_closure_set(v___f_2920_, 1, v_x_2914_);
lean_closure_set(v___f_2920_, 2, v_toBind_2912_);
lean_closure_set(v___f_2920_, 3, v_inst_2900_);
lean_closure_set(v___f_2920_, 4, v_inst_2901_);
lean_closure_set(v___f_2920_, 5, v_inst_2902_);
lean_closure_set(v___f_2920_, 6, v_pre_2905_);
lean_closure_set(v___f_2920_, 7, v_post_2906_);
lean_closure_set(v___f_2920_, 8, v___x_2917_);
lean_closure_set(v___f_2920_, 9, v___x_2918_);
lean_closure_set(v___f_2920_, 10, v___x_2919_);
lean_closure_set(v___f_2920_, 11, v_x_2910_);
lean_closure_set(v___f_2920_, 12, v_input_2903_);
v___x_2921_ = lean_apply_4(v_toBind_2912_, lean_box(0), lean_box(0), v___x_2916_, v___f_2920_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object* v_inst_2922_, lean_object* v_inst_2923_, lean_object* v_inst_2924_, lean_object* v_input_2925_, lean_object* v_cache_2926_, lean_object* v_pre_2927_, lean_object* v_post_2928_, lean_object* v_usedLetOnly_2929_, lean_object* v_skipConstInApp_2930_, lean_object* v_skipInstances_2931_){
_start:
{
uint8_t v_usedLetOnly_boxed_2932_; uint8_t v_skipConstInApp_boxed_2933_; uint8_t v_skipInstances_boxed_2934_; lean_object* v_res_2935_; 
v_usedLetOnly_boxed_2932_ = lean_unbox(v_usedLetOnly_2929_);
v_skipConstInApp_boxed_2933_ = lean_unbox(v_skipConstInApp_2930_);
v_skipInstances_boxed_2934_ = lean_unbox(v_skipInstances_2931_);
v_res_2935_ = l_Lean_Meta_transformWithCache___redArg(v_inst_2922_, v_inst_2923_, v_inst_2924_, v_input_2925_, v_cache_2926_, v_pre_2927_, v_post_2928_, v_usedLetOnly_boxed_2932_, v_skipConstInApp_boxed_2933_, v_skipInstances_boxed_2934_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object* v_m_2936_, lean_object* v_inst_2937_, lean_object* v_inst_2938_, lean_object* v_inst_2939_, lean_object* v_input_2940_, lean_object* v_cache_2941_, lean_object* v_pre_2942_, lean_object* v_post_2943_, uint8_t v_usedLetOnly_2944_, uint8_t v_skipConstInApp_2945_, uint8_t v_skipInstances_2946_){
_start:
{
lean_object* v_x_2947_; lean_object* v_toApplicative_2948_; lean_object* v_toBind_2949_; lean_object* v_toPure_2950_; lean_object* v_x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___f_2957_; lean_object* v___x_2958_; 
v_x_2947_ = lean_box(0);
v_toApplicative_2948_ = lean_ctor_get(v_inst_2937_, 0);
v_toBind_2949_ = lean_ctor_get(v_inst_2937_, 1);
lean_inc(v_toBind_2949_);
v_toPure_2950_ = lean_ctor_get(v_toApplicative_2948_, 1);
lean_inc(v_toPure_2950_);
lean_inc(v_inst_2938_);
v_x_2951_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_2951_, 0, v_inst_2938_);
v___x_2952_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2952_, 0, lean_box(0));
lean_closure_set(v___x_2952_, 1, lean_box(0));
lean_closure_set(v___x_2952_, 2, v_cache_2941_);
lean_inc(v_inst_2938_);
v___x_2953_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_2938_, lean_box(0), v___x_2952_);
v___x_2954_ = lean_box(v_usedLetOnly_2944_);
v___x_2955_ = lean_box(v_skipConstInApp_2945_);
v___x_2956_ = lean_box(v_skipInstances_2946_);
lean_inc(v_toBind_2949_);
v___f_2957_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_2957_, 0, v_toPure_2950_);
lean_closure_set(v___f_2957_, 1, v_x_2951_);
lean_closure_set(v___f_2957_, 2, v_toBind_2949_);
lean_closure_set(v___f_2957_, 3, v_inst_2937_);
lean_closure_set(v___f_2957_, 4, v_inst_2938_);
lean_closure_set(v___f_2957_, 5, v_inst_2939_);
lean_closure_set(v___f_2957_, 6, v_pre_2942_);
lean_closure_set(v___f_2957_, 7, v_post_2943_);
lean_closure_set(v___f_2957_, 8, v___x_2954_);
lean_closure_set(v___f_2957_, 9, v___x_2955_);
lean_closure_set(v___f_2957_, 10, v___x_2956_);
lean_closure_set(v___f_2957_, 11, v_x_2947_);
lean_closure_set(v___f_2957_, 12, v_input_2940_);
v___x_2958_ = lean_apply_4(v_toBind_2949_, lean_box(0), lean_box(0), v___x_2953_, v___f_2957_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object* v_m_2959_, lean_object* v_inst_2960_, lean_object* v_inst_2961_, lean_object* v_inst_2962_, lean_object* v_input_2963_, lean_object* v_cache_2964_, lean_object* v_pre_2965_, lean_object* v_post_2966_, lean_object* v_usedLetOnly_2967_, lean_object* v_skipConstInApp_2968_, lean_object* v_skipInstances_2969_){
_start:
{
uint8_t v_usedLetOnly_boxed_2970_; uint8_t v_skipConstInApp_boxed_2971_; uint8_t v_skipInstances_boxed_2972_; lean_object* v_res_2973_; 
v_usedLetOnly_boxed_2970_ = lean_unbox(v_usedLetOnly_2967_);
v_skipConstInApp_boxed_2971_ = lean_unbox(v_skipConstInApp_2968_);
v_skipInstances_boxed_2972_ = lean_unbox(v_skipInstances_2969_);
v_res_2973_ = l_Lean_Meta_transformWithCache(v_m_2959_, v_inst_2960_, v_inst_2961_, v_inst_2962_, v_input_2963_, v_cache_2964_, v_pre_2965_, v_post_2966_, v_usedLetOnly_boxed_2970_, v_skipConstInApp_boxed_2971_, v_skipInstances_boxed_2972_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object* v_toPure_2974_, lean_object* v_x_2975_, lean_object* v_toBind_2976_, lean_object* v_inst_2977_, lean_object* v_inst_2978_, lean_object* v_inst_2979_, lean_object* v_pre_2980_, lean_object* v_post_2981_, uint8_t v_usedLetOnly_2982_, uint8_t v_skipConstInApp_2983_, uint8_t v___x_2984_, lean_object* v_x_2985_, lean_object* v_input_2986_, lean_object* v_ref_2987_){
_start:
{
lean_object* v___f_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; 
lean_inc(v_toBind_2976_);
lean_inc(v_x_2975_);
lean_inc(v_ref_2987_);
v___f_2988_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_2988_, 0, v_toPure_2974_);
lean_closure_set(v___f_2988_, 1, v_ref_2987_);
lean_closure_set(v___f_2988_, 2, v_x_2975_);
lean_closure_set(v___f_2988_, 3, v_toBind_2976_);
v___x_2989_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2977_, v_inst_2978_, v_inst_2979_, v_pre_2980_, v_post_2981_, v_usedLetOnly_2982_, v_skipConstInApp_2983_, v___x_2984_, v_x_2985_, v_x_2975_, v_input_2986_, v_ref_2987_);
v___x_2990_ = lean_apply_4(v_toBind_2976_, lean_box(0), lean_box(0), v___x_2989_, v___f_2988_);
return v___x_2990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object* v_toPure_2991_, lean_object* v_x_2992_, lean_object* v_toBind_2993_, lean_object* v_inst_2994_, lean_object* v_inst_2995_, lean_object* v_inst_2996_, lean_object* v_pre_2997_, lean_object* v_post_2998_, lean_object* v_usedLetOnly_2999_, lean_object* v_skipConstInApp_3000_, lean_object* v___x_3001_, lean_object* v_x_3002_, lean_object* v_input_3003_, lean_object* v_ref_3004_){
_start:
{
uint8_t v_usedLetOnly_boxed_3005_; uint8_t v_skipConstInApp_boxed_3006_; uint8_t v___x_114__boxed_3007_; lean_object* v_res_3008_; 
v_usedLetOnly_boxed_3005_ = lean_unbox(v_usedLetOnly_2999_);
v_skipConstInApp_boxed_3006_ = lean_unbox(v_skipConstInApp_3000_);
v___x_114__boxed_3007_ = lean_unbox(v___x_3001_);
v_res_3008_ = l_Lean_Meta_transform___redArg___lam__5(v_toPure_2991_, v_x_2992_, v_toBind_2993_, v_inst_2994_, v_inst_2995_, v_inst_2996_, v_pre_2997_, v_post_2998_, v_usedLetOnly_boxed_3005_, v_skipConstInApp_boxed_3006_, v___x_114__boxed_3007_, v_x_3002_, v_input_3003_, v_ref_3004_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object* v_inst_3009_, lean_object* v_inst_3010_, lean_object* v_inst_3011_, lean_object* v_input_3012_, lean_object* v_pre_3013_, lean_object* v_post_3014_, uint8_t v_usedLetOnly_3015_, uint8_t v_skipConstInApp_3016_){
_start:
{
lean_object* v_toApplicative_3017_; lean_object* v_toBind_3018_; lean_object* v_x_3019_; lean_object* v_toPure_3020_; lean_object* v_x_3021_; uint8_t v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___f_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___f_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v_toApplicative_3017_ = lean_ctor_get(v_inst_3009_, 0);
v_toBind_3018_ = lean_ctor_get(v_inst_3009_, 1);
lean_inc(v_toBind_3018_);
v_x_3019_ = lean_box(0);
v_toPure_3020_ = lean_ctor_get(v_toApplicative_3017_, 1);
lean_inc(v_toPure_3020_);
lean_inc(v_inst_3010_);
v_x_3021_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3021_, 0, v_inst_3010_);
v___x_3022_ = 0;
v___x_3023_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
lean_inc(v_inst_3010_);
v___x_3024_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3010_, lean_box(0), v___x_3023_);
lean_inc(v_toPure_3020_);
v___f_3025_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3025_, 0, v_toPure_3020_);
v___x_3026_ = lean_box(v_usedLetOnly_3015_);
v___x_3027_ = lean_box(v_skipConstInApp_3016_);
v___x_3028_ = lean_box(v___x_3022_);
lean_inc(v_toBind_3018_);
v___f_3029_ = lean_alloc_closure((void*)(l_Lean_Meta_transform___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_3029_, 0, v_toPure_3020_);
lean_closure_set(v___f_3029_, 1, v_x_3021_);
lean_closure_set(v___f_3029_, 2, v_toBind_3018_);
lean_closure_set(v___f_3029_, 3, v_inst_3009_);
lean_closure_set(v___f_3029_, 4, v_inst_3010_);
lean_closure_set(v___f_3029_, 5, v_inst_3011_);
lean_closure_set(v___f_3029_, 6, v_pre_3013_);
lean_closure_set(v___f_3029_, 7, v_post_3014_);
lean_closure_set(v___f_3029_, 8, v___x_3026_);
lean_closure_set(v___f_3029_, 9, v___x_3027_);
lean_closure_set(v___f_3029_, 10, v___x_3028_);
lean_closure_set(v___f_3029_, 11, v_x_3019_);
lean_closure_set(v___f_3029_, 12, v_input_3012_);
lean_inc(v_toBind_3018_);
v___x_3030_ = lean_apply_4(v_toBind_3018_, lean_box(0), lean_box(0), v___x_3024_, v___f_3029_);
v___x_3031_ = lean_apply_4(v_toBind_3018_, lean_box(0), lean_box(0), v___x_3030_, v___f_3025_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object* v_inst_3032_, lean_object* v_inst_3033_, lean_object* v_inst_3034_, lean_object* v_input_3035_, lean_object* v_pre_3036_, lean_object* v_post_3037_, lean_object* v_usedLetOnly_3038_, lean_object* v_skipConstInApp_3039_){
_start:
{
uint8_t v_usedLetOnly_boxed_3040_; uint8_t v_skipConstInApp_boxed_3041_; lean_object* v_res_3042_; 
v_usedLetOnly_boxed_3040_ = lean_unbox(v_usedLetOnly_3038_);
v_skipConstInApp_boxed_3041_ = lean_unbox(v_skipConstInApp_3039_);
v_res_3042_ = l_Lean_Meta_transform___redArg(v_inst_3032_, v_inst_3033_, v_inst_3034_, v_input_3035_, v_pre_3036_, v_post_3037_, v_usedLetOnly_boxed_3040_, v_skipConstInApp_boxed_3041_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object* v_m_3043_, lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_input_3047_, lean_object* v_pre_3048_, lean_object* v_post_3049_, uint8_t v_usedLetOnly_3050_, uint8_t v_skipConstInApp_3051_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_Lean_Meta_transform___redArg(v_inst_3044_, v_inst_3045_, v_inst_3046_, v_input_3047_, v_pre_3048_, v_post_3049_, v_usedLetOnly_3050_, v_skipConstInApp_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object* v_m_3053_, lean_object* v_inst_3054_, lean_object* v_inst_3055_, lean_object* v_inst_3056_, lean_object* v_input_3057_, lean_object* v_pre_3058_, lean_object* v_post_3059_, lean_object* v_usedLetOnly_3060_, lean_object* v_skipConstInApp_3061_){
_start:
{
uint8_t v_usedLetOnly_boxed_3062_; uint8_t v_skipConstInApp_boxed_3063_; lean_object* v_res_3064_; 
v_usedLetOnly_boxed_3062_ = lean_unbox(v_usedLetOnly_3060_);
v_skipConstInApp_boxed_3063_ = lean_unbox(v_skipConstInApp_3061_);
v_res_3064_ = l_Lean_Meta_transform(v_m_3053_, v_inst_3054_, v_inst_3055_, v_inst_3056_, v_input_3057_, v_pre_3058_, v_post_3059_, v_usedLetOnly_boxed_3062_, v_skipConstInApp_boxed_3063_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object* v_e_3065_, lean_object* v___y_3066_){
_start:
{
uint8_t v___x_3068_; 
v___x_3068_ = l_Lean_Expr_hasMVar(v_e_3065_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; 
v___x_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3069_, 0, v_e_3065_);
return v___x_3069_;
}
else
{
lean_object* v___x_3070_; lean_object* v_mctx_3071_; lean_object* v___x_3072_; lean_object* v_fst_3073_; lean_object* v_snd_3074_; lean_object* v___x_3075_; lean_object* v_cache_3076_; lean_object* v_zetaDeltaFVarIds_3077_; lean_object* v_postponed_3078_; lean_object* v_diag_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3088_; 
v___x_3070_ = lean_st_ref_get(v___y_3066_);
v_mctx_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc_ref(v_mctx_3071_);
lean_dec(v___x_3070_);
v___x_3072_ = l_Lean_instantiateMVarsCore(v_mctx_3071_, v_e_3065_);
v_fst_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_fst_3073_);
v_snd_3074_ = lean_ctor_get(v___x_3072_, 1);
lean_inc(v_snd_3074_);
lean_dec_ref(v___x_3072_);
v___x_3075_ = lean_st_ref_take(v___y_3066_);
v_cache_3076_ = lean_ctor_get(v___x_3075_, 1);
v_zetaDeltaFVarIds_3077_ = lean_ctor_get(v___x_3075_, 2);
v_postponed_3078_ = lean_ctor_get(v___x_3075_, 3);
v_diag_3079_ = lean_ctor_get(v___x_3075_, 4);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3088_ == 0)
{
lean_object* v_unused_3089_; 
v_unused_3089_ = lean_ctor_get(v___x_3075_, 0);
lean_dec(v_unused_3089_);
v___x_3081_ = v___x_3075_;
v_isShared_3082_ = v_isSharedCheck_3088_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_diag_3079_);
lean_inc(v_postponed_3078_);
lean_inc(v_zetaDeltaFVarIds_3077_);
lean_inc(v_cache_3076_);
lean_dec(v___x_3075_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3088_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 0, v_snd_3074_);
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_snd_3074_);
lean_ctor_set(v_reuseFailAlloc_3087_, 1, v_cache_3076_);
lean_ctor_set(v_reuseFailAlloc_3087_, 2, v_zetaDeltaFVarIds_3077_);
lean_ctor_set(v_reuseFailAlloc_3087_, 3, v_postponed_3078_);
lean_ctor_set(v_reuseFailAlloc_3087_, 4, v_diag_3079_);
v___x_3084_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3085_ = lean_st_ref_set(v___y_3066_, v___x_3084_);
v___x_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3086_, 0, v_fst_3073_);
return v___x_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object* v_e_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3090_, v___y_3091_);
lean_dec(v___y_3091_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object* v_e_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
lean_object* v___x_3100_; 
v___x_3100_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3094_, v___y_3096_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object* v_e_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(v_e_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_);
lean_dec(v___y_3105_);
lean_dec_ref(v___y_3104_);
lean_dec(v___y_3103_);
lean_dec_ref(v___y_3102_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t v_zetaHave_3108_, lean_object* v___x_3109_, uint8_t v_zetaDelta_3110_, lean_object* v_fvarId_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_3111_, v___y_3112_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3146_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3120_ = v___x_3117_;
v_isShared_3121_ = v_isSharedCheck_3146_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3117_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3146_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
if (lean_obj_tag(v_a_3118_) == 1)
{
lean_object* v_val_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3141_; 
v_val_3122_ = lean_ctor_get(v_a_3118_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_a_3118_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3124_ = v_a_3118_;
v_isShared_3125_ = v_isSharedCheck_3141_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_val_3122_);
lean_dec(v_a_3118_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3141_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
uint8_t v___y_3127_; 
if (v_zetaDelta_3110_ == 0)
{
lean_object* v___x_3135_; uint8_t v___x_3136_; 
v___x_3135_ = l_Lean_LocalDecl_index(v_val_3122_);
v___x_3136_ = lean_nat_dec_lt(v___x_3135_, v___x_3109_);
lean_dec(v___x_3135_);
if (v___x_3136_ == 0)
{
lean_del_object(v___x_3124_);
goto v___jp_3132_;
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3139_; 
lean_dec(v_val_3122_);
lean_del_object(v___x_3120_);
v___x_3137_ = lean_box(0);
if (v_isShared_3125_ == 0)
{
lean_ctor_set_tag(v___x_3124_, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3137_);
v___x_3139_ = v___x_3124_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3137_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
else
{
lean_del_object(v___x_3124_);
goto v___jp_3132_;
}
v___jp_3126_:
{
lean_object* v___x_3128_; lean_object* v___x_3130_; 
v___x_3128_ = l_Lean_LocalDecl_value_x3f(v_val_3122_, v___y_3127_);
lean_dec(v_val_3122_);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 0, v___x_3128_);
v___x_3130_ = v___x_3120_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v___x_3128_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
v___jp_3132_:
{
if (v_zetaHave_3108_ == 0)
{
v___y_3127_ = v_zetaHave_3108_;
goto v___jp_3126_;
}
else
{
lean_object* v___x_3133_; uint8_t v___x_3134_; 
v___x_3133_ = l_Lean_LocalDecl_index(v_val_3122_);
v___x_3134_ = lean_nat_dec_le(v___x_3109_, v___x_3133_);
lean_dec(v___x_3133_);
v___y_3127_ = v___x_3134_;
goto v___jp_3126_;
}
}
}
}
else
{
lean_object* v___x_3142_; lean_object* v___x_3144_; 
lean_dec(v_a_3118_);
v___x_3142_ = lean_box(0);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 0, v___x_3142_);
v___x_3144_ = v___x_3120_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v___x_3142_);
v___x_3144_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
return v___x_3144_;
}
}
}
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
v_a_3147_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3117_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3117_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object* v_zetaHave_3155_, lean_object* v___x_3156_, lean_object* v_zetaDelta_3157_, lean_object* v_fvarId_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
uint8_t v_zetaHave_boxed_3164_; uint8_t v_zetaDelta_boxed_3165_; lean_object* v_res_3166_; 
v_zetaHave_boxed_3164_ = lean_unbox(v_zetaHave_3155_);
v_zetaDelta_boxed_3165_ = lean_unbox(v_zetaDelta_3157_);
v_res_3166_ = l_Lean_Meta_zetaReduce___lam__0(v_zetaHave_boxed_3164_, v___x_3156_, v_zetaDelta_boxed_3165_, v_fvarId_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v___y_3160_);
lean_dec(v___x_3156_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object* v_e_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3173_, 0, v_e_3167_);
v___x_3174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object* v_e_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lean_Meta_zetaReduce___lam__1(v_e_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v___y_3177_);
lean_dec_ref(v___y_3176_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object* v___f_3182_, lean_object* v_e_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
if (lean_obj_tag(v_e_3183_) == 1)
{
lean_object* v_fvarId_3189_; lean_object* v___x_3190_; 
v_fvarId_3189_ = lean_ctor_get(v_e_3183_, 0);
lean_inc(v___y_3185_);
lean_inc(v_fvarId_3189_);
v___x_3190_ = lean_apply_6(v___f_3182_, v_fvarId_3189_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, lean_box(0));
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3216_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3193_ = v___x_3190_;
v_isShared_3194_ = v_isSharedCheck_3216_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3190_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3216_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
if (lean_obj_tag(v_a_3191_) == 1)
{
lean_object* v_val_3195_; lean_object* v___x_3197_; uint8_t v_isShared_3198_; uint8_t v_isSharedCheck_3211_; 
lean_del_object(v___x_3193_);
lean_dec_ref(v_e_3183_);
v_val_3195_ = lean_ctor_get(v_a_3191_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_a_3191_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3197_ = v_a_3191_;
v_isShared_3198_ = v_isSharedCheck_3211_;
goto v_resetjp_3196_;
}
else
{
lean_inc(v_val_3195_);
lean_dec(v_a_3191_);
v___x_3197_ = lean_box(0);
v_isShared_3198_ = v_isSharedCheck_3211_;
goto v_resetjp_3196_;
}
v_resetjp_3196_:
{
lean_object* v___x_3199_; lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3210_; 
v___x_3199_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3195_, v___y_3185_);
lean_dec(v___y_3185_);
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3202_ = v___x_3199_;
v_isShared_3203_ = v_isSharedCheck_3210_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3199_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3210_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3198_ == 0)
{
lean_ctor_set(v___x_3197_, 0, v_a_3200_);
v___x_3205_ = v___x_3197_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
lean_object* v___x_3207_; 
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 0, v___x_3205_);
v___x_3207_ = v___x_3202_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
}
}
else
{
lean_object* v___x_3212_; lean_object* v___x_3214_; 
lean_dec(v_a_3191_);
lean_dec(v___y_3185_);
v___x_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3212_, 0, v_e_3183_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 0, v___x_3212_);
v___x_3214_ = v___x_3193_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3224_; 
lean_dec_ref(v_e_3183_);
lean_dec(v___y_3185_);
v_a_3217_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3219_ = v___x_3190_;
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3190_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3222_; 
if (v_isShared_3220_ == 0)
{
v___x_3222_ = v___x_3219_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_a_3217_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
}
else
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
lean_dec_ref(v_e_3183_);
lean_dec_ref(v___f_3182_);
v___x_3225_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object* v___f_3227_, lean_object* v_e_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Lean_Meta_zetaReduce___lam__2(v___f_3227_, v_e_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object* v___f_3235_, lean_object* v_e_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
lean_object* v___x_3242_; 
v___x_3242_ = l_Lean_Expr_getAppFn(v_e_3236_);
if (lean_obj_tag(v___x_3242_) == 1)
{
lean_object* v_fvarId_3243_; lean_object* v___x_3244_; 
v_fvarId_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_fvarId_3243_);
lean_dec_ref(v___x_3242_);
lean_inc(v___y_3238_);
v___x_3244_ = lean_apply_6(v___f_3235_, v_fvarId_3243_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, lean_box(0));
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3277_; 
v_a_3245_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3247_ = v___x_3244_;
v_isShared_3248_ = v_isSharedCheck_3277_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3244_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3277_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
if (lean_obj_tag(v_a_3245_) == 1)
{
lean_object* v_val_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3272_; 
lean_del_object(v___x_3247_);
v_val_3249_ = lean_ctor_get(v_a_3245_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v_a_3245_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3251_ = v_a_3245_;
v_isShared_3252_ = v_isSharedCheck_3272_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_val_3249_);
lean_dec(v_a_3245_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3272_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3253_; lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3271_; 
v___x_3253_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3249_, v___y_3238_);
lean_dec(v___y_3238_);
v_a_3254_ = lean_ctor_get(v___x_3253_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3253_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3256_ = v___x_3253_;
v_isShared_3257_ = v_isSharedCheck_3271_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3253_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3271_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v_dummy_3258_; lean_object* v_nargs_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3266_; 
v_dummy_3258_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_3259_ = l_Lean_Expr_getAppNumArgs(v_e_3236_);
lean_inc(v_nargs_3259_);
v___x_3260_ = lean_mk_array(v_nargs_3259_, v_dummy_3258_);
v___x_3261_ = lean_unsigned_to_nat(1u);
v___x_3262_ = lean_nat_sub(v_nargs_3259_, v___x_3261_);
lean_dec(v_nargs_3259_);
v___x_3263_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3236_, v___x_3260_, v___x_3262_);
v___x_3264_ = l_Lean_Expr_beta(v_a_3254_, v___x_3263_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set(v___x_3251_, 0, v___x_3264_);
v___x_3266_ = v___x_3251_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3268_; 
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 0, v___x_3266_);
v___x_3268_ = v___x_3256_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v___x_3266_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
else
{
lean_object* v___x_3273_; lean_object* v___x_3275_; 
lean_dec(v_a_3245_);
lean_dec(v___y_3238_);
lean_dec_ref(v_e_3236_);
v___x_3273_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 0, v___x_3273_);
v___x_3275_ = v___x_3247_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v___x_3273_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v___y_3238_);
lean_dec_ref(v_e_3236_);
v_a_3278_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3244_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3244_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
else
{
lean_object* v___x_3286_; lean_object* v___x_3287_; 
lean_dec_ref(v___x_3242_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3239_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec_ref(v_e_3236_);
lean_dec_ref(v___f_3235_);
v___x_3286_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
return v___x_3287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object* v___f_3288_, lean_object* v_e_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Lean_Meta_zetaReduce___lam__4(v___f_3288_, v_e_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object* v_00_u03b1_3296_, lean_object* v_x_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3303_ = lean_apply_1(v_x_3297_, lean_box(0));
v___x_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3305_, lean_object* v_x_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_){
_start:
{
lean_object* v_res_3312_; 
v_res_3312_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(v_00_u03b1_3305_, v_x_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v___x_3319_; 
v___x_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3313_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
lean_dec(v___y_3322_);
lean_dec_ref(v___y_3321_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object* v_k_3327_, lean_object* v___y_3328_, lean_object* v_b_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v___x_3335_; 
v___x_3335_ = lean_apply_7(v_k_3327_, v_b_3329_, v___y_3328_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, lean_box(0));
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_k_3336_, lean_object* v___y_3337_, lean_object* v_b_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(v_k_3336_, v___y_3337_, v_b_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_name_3345_, uint8_t v_bi_3346_, lean_object* v_type_3347_, lean_object* v_k_3348_, uint8_t v_kind_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_){
_start:
{
lean_object* v___f_3356_; lean_object* v___x_3357_; 
v___f_3356_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3356_, 0, v_k_3348_);
lean_closure_set(v___f_3356_, 1, v___y_3350_);
v___x_3357_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3345_, v_bi_3346_, v_type_3347_, v___f_3356_, v_kind_3349_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_);
if (lean_obj_tag(v___x_3357_) == 0)
{
return v___x_3357_;
}
else
{
lean_object* v_a_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3365_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3360_ = v___x_3357_;
v_isShared_3361_ = v_isSharedCheck_3365_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_a_3358_);
lean_dec(v___x_3357_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3365_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3363_; 
if (v_isShared_3361_ == 0)
{
v___x_3363_ = v___x_3360_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v_a_3358_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_name_3366_, lean_object* v_bi_3367_, lean_object* v_type_3368_, lean_object* v_k_3369_, lean_object* v_kind_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
uint8_t v_bi_boxed_3377_; uint8_t v_kind_boxed_3378_; lean_object* v_res_3379_; 
v_bi_boxed_3377_ = lean_unbox(v_bi_3367_);
v_kind_boxed_3378_ = lean_unbox(v_kind_3370_);
v_res_3379_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_3366_, v_bi_boxed_3377_, v_type_3368_, v_k_3369_, v_kind_boxed_3378_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object* v_name_3380_, lean_object* v_type_3381_, lean_object* v_val_3382_, lean_object* v_k_3383_, uint8_t v_nondep_3384_, uint8_t v_kind_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v___f_3392_; lean_object* v___x_3393_; 
v___f_3392_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3392_, 0, v_k_3383_);
lean_closure_set(v___f_3392_, 1, v___y_3386_);
v___x_3393_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_3380_, v_type_3381_, v_val_3382_, v___f_3392_, v_nondep_3384_, v_kind_3385_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_);
if (lean_obj_tag(v___x_3393_) == 0)
{
return v___x_3393_;
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3393_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3393_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_name_3402_, lean_object* v_type_3403_, lean_object* v_val_3404_, lean_object* v_k_3405_, lean_object* v_nondep_3406_, lean_object* v_kind_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
uint8_t v_nondep_boxed_3414_; uint8_t v_kind_boxed_3415_; lean_object* v_res_3416_; 
v_nondep_boxed_3414_ = lean_unbox(v_nondep_3406_);
v_kind_boxed_3415_ = lean_unbox(v_kind_3407_);
v_res_3416_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_3402_, v_type_3403_, v_val_3404_, v_k_3405_, v_nondep_boxed_3414_, v_kind_boxed_3415_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_3417_, lean_object* v_x_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_){
_start:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3424_ = lean_apply_1(v_x_3418_, lean_box(0));
v___x_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3426_, lean_object* v_x_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(v_00_u03b1_3426_, v_x_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3428_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object* v_ref_3434_){
_start:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3436_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_3437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3437_, 0, v_ref_3434_);
lean_ctor_set(v___x_3437_, 1, v___x_3436_);
v___x_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3437_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object* v_ref_3439_, lean_object* v___y_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3439_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object* v_x_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
lean_object* v___y_3450_; lean_object* v_fileName_3459_; lean_object* v_fileMap_3460_; lean_object* v_options_3461_; lean_object* v_currRecDepth_3462_; lean_object* v_maxRecDepth_3463_; lean_object* v_ref_3464_; lean_object* v_currNamespace_3465_; lean_object* v_openDecls_3466_; lean_object* v_initHeartbeats_3467_; lean_object* v_maxHeartbeats_3468_; lean_object* v_quotContext_3469_; lean_object* v_currMacroScope_3470_; uint8_t v_diag_3471_; lean_object* v_cancelTk_x3f_3472_; uint8_t v_suppressElabErrors_3473_; lean_object* v_inheritedTraceOptions_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3486_; 
v_fileName_3459_ = lean_ctor_get(v___y_3446_, 0);
v_fileMap_3460_ = lean_ctor_get(v___y_3446_, 1);
v_options_3461_ = lean_ctor_get(v___y_3446_, 2);
v_currRecDepth_3462_ = lean_ctor_get(v___y_3446_, 3);
v_maxRecDepth_3463_ = lean_ctor_get(v___y_3446_, 4);
v_ref_3464_ = lean_ctor_get(v___y_3446_, 5);
v_currNamespace_3465_ = lean_ctor_get(v___y_3446_, 6);
v_openDecls_3466_ = lean_ctor_get(v___y_3446_, 7);
v_initHeartbeats_3467_ = lean_ctor_get(v___y_3446_, 8);
v_maxHeartbeats_3468_ = lean_ctor_get(v___y_3446_, 9);
v_quotContext_3469_ = lean_ctor_get(v___y_3446_, 10);
v_currMacroScope_3470_ = lean_ctor_get(v___y_3446_, 11);
v_diag_3471_ = lean_ctor_get_uint8(v___y_3446_, sizeof(void*)*14);
v_cancelTk_x3f_3472_ = lean_ctor_get(v___y_3446_, 12);
v_suppressElabErrors_3473_ = lean_ctor_get_uint8(v___y_3446_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3474_ = lean_ctor_get(v___y_3446_, 13);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___y_3446_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3476_ = v___y_3446_;
v_isShared_3477_ = v_isSharedCheck_3486_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_inheritedTraceOptions_3474_);
lean_inc(v_cancelTk_x3f_3472_);
lean_inc(v_currMacroScope_3470_);
lean_inc(v_quotContext_3469_);
lean_inc(v_maxHeartbeats_3468_);
lean_inc(v_initHeartbeats_3467_);
lean_inc(v_openDecls_3466_);
lean_inc(v_currNamespace_3465_);
lean_inc(v_ref_3464_);
lean_inc(v_maxRecDepth_3463_);
lean_inc(v_currRecDepth_3462_);
lean_inc(v_options_3461_);
lean_inc(v_fileMap_3460_);
lean_inc(v_fileName_3459_);
lean_dec(v___y_3446_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3486_;
goto v_resetjp_3475_;
}
v___jp_3449_:
{
if (lean_obj_tag(v___y_3450_) == 0)
{
return v___y_3450_;
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3458_; 
v_a_3451_ = lean_ctor_get(v___y_3450_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___y_3450_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3453_ = v___y_3450_;
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___y_3450_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3456_; 
if (v_isShared_3454_ == 0)
{
v___x_3456_ = v___x_3453_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_a_3451_);
v___x_3456_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
return v___x_3456_;
}
}
}
}
v_resetjp_3475_:
{
uint8_t v___x_3478_; 
v___x_3478_ = lean_nat_dec_eq(v_currRecDepth_3462_, v_maxRecDepth_3463_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3482_; 
v___x_3479_ = lean_unsigned_to_nat(1u);
v___x_3480_ = lean_nat_add(v_currRecDepth_3462_, v___x_3479_);
lean_dec(v_currRecDepth_3462_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 3, v___x_3480_);
v___x_3482_ = v___x_3476_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_fileName_3459_);
lean_ctor_set(v_reuseFailAlloc_3484_, 1, v_fileMap_3460_);
lean_ctor_set(v_reuseFailAlloc_3484_, 2, v_options_3461_);
lean_ctor_set(v_reuseFailAlloc_3484_, 3, v___x_3480_);
lean_ctor_set(v_reuseFailAlloc_3484_, 4, v_maxRecDepth_3463_);
lean_ctor_set(v_reuseFailAlloc_3484_, 5, v_ref_3464_);
lean_ctor_set(v_reuseFailAlloc_3484_, 6, v_currNamespace_3465_);
lean_ctor_set(v_reuseFailAlloc_3484_, 7, v_openDecls_3466_);
lean_ctor_set(v_reuseFailAlloc_3484_, 8, v_initHeartbeats_3467_);
lean_ctor_set(v_reuseFailAlloc_3484_, 9, v_maxHeartbeats_3468_);
lean_ctor_set(v_reuseFailAlloc_3484_, 10, v_quotContext_3469_);
lean_ctor_set(v_reuseFailAlloc_3484_, 11, v_currMacroScope_3470_);
lean_ctor_set(v_reuseFailAlloc_3484_, 12, v_cancelTk_x3f_3472_);
lean_ctor_set(v_reuseFailAlloc_3484_, 13, v_inheritedTraceOptions_3474_);
lean_ctor_set_uint8(v_reuseFailAlloc_3484_, sizeof(void*)*14, v_diag_3471_);
lean_ctor_set_uint8(v_reuseFailAlloc_3484_, sizeof(void*)*14 + 1, v_suppressElabErrors_3473_);
v___x_3482_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_apply_6(v_x_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___x_3482_, v___y_3447_, lean_box(0));
v___y_3450_ = v___x_3483_;
goto v___jp_3449_;
}
}
else
{
lean_object* v___x_3485_; 
lean_del_object(v___x_3476_);
lean_dec_ref(v_inheritedTraceOptions_3474_);
lean_dec(v_cancelTk_x3f_3472_);
lean_dec(v_currMacroScope_3470_);
lean_dec(v_quotContext_3469_);
lean_dec(v_maxHeartbeats_3468_);
lean_dec(v_initHeartbeats_3467_);
lean_dec(v_openDecls_3466_);
lean_dec(v_currNamespace_3465_);
lean_dec(v_maxRecDepth_3463_);
lean_dec(v_currRecDepth_3462_);
lean_dec_ref(v_options_3461_);
lean_dec_ref(v_fileMap_3460_);
lean_dec_ref(v_fileName_3459_);
lean_dec(v___y_3447_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v_x_3442_);
v___x_3485_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3464_);
v___y_3450_ = v___x_3485_;
goto v___jp_3449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_x_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3495_, lean_object* v_pre_3496_, lean_object* v_post_3497_, uint8_t v_usedLetOnly_3498_, uint8_t v_skipConstInApp_3499_, uint8_t v_skipInstances_3500_, lean_object* v_body_3501_, lean_object* v_x_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_){
_start:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = lean_array_push(v_fvars_3495_, v_x_3502_);
v___x_3510_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_3496_, v_post_3497_, v_usedLetOnly_3498_, v_skipConstInApp_3499_, v_skipInstances_3500_, v___x_3509_, v_body_3501_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_3511_, lean_object* v_pre_3512_, lean_object* v_post_3513_, lean_object* v_usedLetOnly_3514_, lean_object* v_skipConstInApp_3515_, lean_object* v_skipInstances_3516_, lean_object* v_body_3517_, lean_object* v_x_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_){
_start:
{
uint8_t v_usedLetOnly_boxed_3525_; uint8_t v_skipConstInApp_boxed_3526_; uint8_t v_skipInstances_boxed_3527_; lean_object* v_res_3528_; 
v_usedLetOnly_boxed_3525_ = lean_unbox(v_usedLetOnly_3514_);
v_skipConstInApp_boxed_3526_ = lean_unbox(v_skipConstInApp_3515_);
v_skipInstances_boxed_3527_ = lean_unbox(v_skipInstances_3516_);
v_res_3528_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_3511_, v_pre_3512_, v_post_3513_, v_usedLetOnly_boxed_3525_, v_skipConstInApp_boxed_3526_, v_skipInstances_boxed_3527_, v_body_3517_, v_x_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
return v_res_3528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object* v_pre_3529_, lean_object* v_post_3530_, uint8_t v_usedLetOnly_3531_, uint8_t v_skipConstInApp_3532_, uint8_t v_skipInstances_3533_, lean_object* v_e_3534_, lean_object* v_a_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_){
_start:
{
lean_object* v___x_3541_; 
lean_inc_ref(v_post_3530_);
lean_inc(v___y_3539_);
lean_inc_ref(v___y_3538_);
lean_inc(v___y_3537_);
lean_inc_ref(v___y_3536_);
lean_inc_ref(v_e_3534_);
v___x_3541_ = lean_apply_6(v_post_3530_, v_e_3534_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_, lean_box(0));
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3560_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3544_ = v___x_3541_;
v_isShared_3545_ = v_isSharedCheck_3560_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3541_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3560_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
switch(lean_obj_tag(v_a_3542_))
{
case 0:
{
lean_object* v_e_3546_; lean_object* v___x_3548_; 
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_e_3534_);
lean_dec_ref(v_post_3530_);
lean_dec_ref(v_pre_3529_);
v_e_3546_ = lean_ctor_get(v_a_3542_, 0);
lean_inc_ref(v_e_3546_);
lean_dec_ref(v_a_3542_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v_e_3546_);
v___x_3548_ = v___x_3544_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_e_3546_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
case 1:
{
lean_object* v_e_3550_; lean_object* v___x_3551_; 
lean_del_object(v___x_3544_);
lean_dec_ref(v_e_3534_);
v_e_3550_ = lean_ctor_get(v_a_3542_, 0);
lean_inc_ref(v_e_3550_);
lean_dec_ref(v_a_3542_);
v___x_3551_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3529_, v_post_3530_, v_usedLetOnly_3531_, v_skipConstInApp_3532_, v_skipInstances_3533_, v_e_3550_, v_a_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_);
return v___x_3551_;
}
default: 
{
lean_object* v_e_x3f_3552_; 
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_post_3530_);
lean_dec_ref(v_pre_3529_);
v_e_x3f_3552_ = lean_ctor_get(v_a_3542_, 0);
lean_inc(v_e_x3f_3552_);
lean_dec_ref(v_a_3542_);
if (lean_obj_tag(v_e_x3f_3552_) == 0)
{
lean_object* v___x_3554_; 
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v_e_3534_);
v___x_3554_ = v___x_3544_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_e_3534_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
else
{
lean_object* v_val_3556_; lean_object* v___x_3558_; 
lean_dec_ref(v_e_3534_);
v_val_3556_ = lean_ctor_get(v_e_x3f_3552_, 0);
lean_inc(v_val_3556_);
lean_dec_ref(v_e_x3f_3552_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v_val_3556_);
v___x_3558_ = v___x_3544_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_val_3556_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_e_3534_);
lean_dec_ref(v_post_3530_);
lean_dec_ref(v_pre_3529_);
v_a_3561_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3563_ = v___x_3541_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3541_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3561_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3569_, lean_object* v_post_3570_, uint8_t v_usedLetOnly_3571_, uint8_t v_skipConstInApp_3572_, uint8_t v_skipInstances_3573_, lean_object* v_fvars_3574_, lean_object* v_e_3575_, lean_object* v_a_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
if (lean_obj_tag(v_e_3575_) == 6)
{
lean_object* v_binderName_3582_; lean_object* v_binderType_3583_; lean_object* v_body_3584_; uint8_t v_binderInfo_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v_binderName_3582_ = lean_ctor_get(v_e_3575_, 0);
lean_inc(v_binderName_3582_);
v_binderType_3583_ = lean_ctor_get(v_e_3575_, 1);
lean_inc_ref(v_binderType_3583_);
v_body_3584_ = lean_ctor_get(v_e_3575_, 2);
lean_inc_ref(v_body_3584_);
v_binderInfo_3585_ = lean_ctor_get_uint8(v_e_3575_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3575_);
v___x_3586_ = lean_expr_instantiate_rev(v_binderType_3583_, v_fvars_3574_);
lean_dec_ref(v_binderType_3583_);
lean_inc(v___y_3580_);
lean_inc_ref(v___y_3579_);
lean_inc(v___y_3578_);
lean_inc_ref(v___y_3577_);
lean_inc(v_a_3576_);
lean_inc_ref(v_post_3570_);
lean_inc_ref(v_pre_3569_);
v___x_3587_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3569_, v_post_3570_, v_usedLetOnly_3571_, v_skipConstInApp_3572_, v_skipInstances_3573_, v___x_3586_, v_a_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___f_3592_; uint8_t v___x_3593_; lean_object* v___x_3594_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref(v___x_3587_);
v___x_3589_ = lean_box(v_usedLetOnly_3571_);
v___x_3590_ = lean_box(v_skipConstInApp_3572_);
v___x_3591_ = lean_box(v_skipInstances_3573_);
v___f_3592_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3592_, 0, v_fvars_3574_);
lean_closure_set(v___f_3592_, 1, v_pre_3569_);
lean_closure_set(v___f_3592_, 2, v_post_3570_);
lean_closure_set(v___f_3592_, 3, v___x_3589_);
lean_closure_set(v___f_3592_, 4, v___x_3590_);
lean_closure_set(v___f_3592_, 5, v___x_3591_);
lean_closure_set(v___f_3592_, 6, v_body_3584_);
v___x_3593_ = 0;
v___x_3594_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_3582_, v_binderInfo_3585_, v_a_3588_, v___f_3592_, v___x_3593_, v_a_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
return v___x_3594_;
}
else
{
lean_dec_ref(v_body_3584_);
lean_dec(v_binderName_3582_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v_a_3576_);
lean_dec_ref(v_fvars_3574_);
lean_dec_ref(v_post_3570_);
lean_dec_ref(v_pre_3569_);
return v___x_3587_;
}
}
else
{
lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3595_ = lean_expr_instantiate_rev(v_e_3575_, v_fvars_3574_);
lean_dec_ref(v_e_3575_);
lean_inc(v___y_3580_);
lean_inc_ref(v___y_3579_);
lean_inc(v___y_3578_);
lean_inc_ref(v___y_3577_);
lean_inc(v_a_3576_);
lean_inc_ref(v_post_3570_);
lean_inc_ref(v_pre_3569_);
v___x_3596_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3569_, v_post_3570_, v_usedLetOnly_3571_, v_skipConstInApp_3572_, v_skipInstances_3573_, v___x_3595_, v_a_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; uint8_t v___x_3598_; uint8_t v___x_3599_; uint8_t v___x_3600_; lean_object* v___x_3601_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref(v___x_3596_);
v___x_3598_ = 0;
v___x_3599_ = 1;
v___x_3600_ = 1;
v___x_3601_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3574_, v_a_3597_, v___x_3598_, v_usedLetOnly_3571_, v___x_3598_, v___x_3599_, v___x_3600_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec_ref(v_fvars_3574_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v_a_3602_; lean_object* v___x_3603_; 
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3602_);
lean_dec_ref(v___x_3601_);
v___x_3603_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3569_, v_post_3570_, v_usedLetOnly_3571_, v_skipConstInApp_3572_, v_skipInstances_3573_, v_a_3602_, v_a_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
return v___x_3603_;
}
else
{
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v_a_3576_);
lean_dec_ref(v_post_3570_);
lean_dec_ref(v_pre_3569_);
return v___x_3601_;
}
}
else
{
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v_a_3576_);
lean_dec_ref(v_fvars_3574_);
lean_dec_ref(v_post_3570_);
lean_dec_ref(v_pre_3569_);
return v___x_3596_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_3604_, lean_object* v_pre_3605_, lean_object* v_post_3606_, uint8_t v_usedLetOnly_3607_, uint8_t v_skipConstInApp_3608_, uint8_t v_skipInstances_3609_, lean_object* v_body_3610_, lean_object* v_x_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_array_push(v_fvars_3604_, v_x_3611_);
v___x_3619_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_3605_, v_post_3606_, v_usedLetOnly_3607_, v_skipConstInApp_3608_, v_skipInstances_3609_, v___x_3618_, v_body_3610_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_3620_, lean_object* v_pre_3621_, lean_object* v_post_3622_, lean_object* v_usedLetOnly_3623_, lean_object* v_skipConstInApp_3624_, lean_object* v_skipInstances_3625_, lean_object* v_body_3626_, lean_object* v_x_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
uint8_t v_usedLetOnly_boxed_3634_; uint8_t v_skipConstInApp_boxed_3635_; uint8_t v_skipInstances_boxed_3636_; lean_object* v_res_3637_; 
v_usedLetOnly_boxed_3634_ = lean_unbox(v_usedLetOnly_3623_);
v_skipConstInApp_boxed_3635_ = lean_unbox(v_skipConstInApp_3624_);
v_skipInstances_boxed_3636_ = lean_unbox(v_skipInstances_3625_);
v_res_3637_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_3620_, v_pre_3621_, v_post_3622_, v_usedLetOnly_boxed_3634_, v_skipConstInApp_boxed_3635_, v_skipInstances_boxed_3636_, v_body_3626_, v_x_3627_, v___y_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object* v_pre_3638_, lean_object* v_post_3639_, uint8_t v_usedLetOnly_3640_, uint8_t v_skipConstInApp_3641_, uint8_t v_skipInstances_3642_, lean_object* v_fvars_3643_, lean_object* v_e_3644_, lean_object* v_a_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
if (lean_obj_tag(v_e_3644_) == 8)
{
lean_object* v_declName_3651_; lean_object* v_type_3652_; lean_object* v_value_3653_; lean_object* v_body_3654_; uint8_t v_nondep_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v_declName_3651_ = lean_ctor_get(v_e_3644_, 0);
lean_inc(v_declName_3651_);
v_type_3652_ = lean_ctor_get(v_e_3644_, 1);
lean_inc_ref(v_type_3652_);
v_value_3653_ = lean_ctor_get(v_e_3644_, 2);
lean_inc_ref(v_value_3653_);
v_body_3654_ = lean_ctor_get(v_e_3644_, 3);
lean_inc_ref(v_body_3654_);
v_nondep_3655_ = lean_ctor_get_uint8(v_e_3644_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3644_);
v___x_3656_ = lean_expr_instantiate_rev(v_type_3652_, v_fvars_3643_);
lean_dec_ref(v_type_3652_);
lean_inc(v___y_3649_);
lean_inc_ref(v___y_3648_);
lean_inc(v___y_3647_);
lean_inc_ref(v___y_3646_);
lean_inc(v_a_3645_);
lean_inc_ref(v_post_3639_);
lean_inc_ref(v_pre_3638_);
v___x_3657_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3638_, v_post_3639_, v_usedLetOnly_3640_, v_skipConstInApp_3641_, v_skipInstances_3642_, v___x_3656_, v_a_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3658_);
lean_dec_ref(v___x_3657_);
v___x_3659_ = lean_expr_instantiate_rev(v_value_3653_, v_fvars_3643_);
lean_dec_ref(v_value_3653_);
lean_inc(v___y_3649_);
lean_inc_ref(v___y_3648_);
lean_inc(v___y_3647_);
lean_inc_ref(v___y_3646_);
lean_inc(v_a_3645_);
lean_inc_ref(v_post_3639_);
lean_inc_ref(v_pre_3638_);
v___x_3660_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3638_, v_post_3639_, v_usedLetOnly_3640_, v_skipConstInApp_3641_, v_skipInstances_3642_, v___x_3659_, v_a_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___f_3665_; uint8_t v___x_3666_; lean_object* v___x_3667_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref(v___x_3660_);
v___x_3662_ = lean_box(v_usedLetOnly_3640_);
v___x_3663_ = lean_box(v_skipConstInApp_3641_);
v___x_3664_ = lean_box(v_skipInstances_3642_);
v___f_3665_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3665_, 0, v_fvars_3643_);
lean_closure_set(v___f_3665_, 1, v_pre_3638_);
lean_closure_set(v___f_3665_, 2, v_post_3639_);
lean_closure_set(v___f_3665_, 3, v___x_3662_);
lean_closure_set(v___f_3665_, 4, v___x_3663_);
lean_closure_set(v___f_3665_, 5, v___x_3664_);
lean_closure_set(v___f_3665_, 6, v_body_3654_);
v___x_3666_ = 0;
v___x_3667_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_declName_3651_, v_a_3658_, v_a_3661_, v___f_3665_, v_nondep_3655_, v___x_3666_, v_a_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
return v___x_3667_;
}
else
{
lean_dec(v_a_3658_);
lean_dec_ref(v_body_3654_);
lean_dec(v_declName_3651_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v_a_3645_);
lean_dec_ref(v_fvars_3643_);
lean_dec_ref(v_post_3639_);
lean_dec_ref(v_pre_3638_);
return v___x_3660_;
}
}
else
{
lean_dec_ref(v_body_3654_);
lean_dec_ref(v_value_3653_);
lean_dec(v_declName_3651_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v_a_3645_);
lean_dec_ref(v_fvars_3643_);
lean_dec_ref(v_post_3639_);
lean_dec_ref(v_pre_3638_);
return v___x_3657_;
}
}
else
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3668_ = lean_expr_instantiate_rev(v_e_3644_, v_fvars_3643_);
lean_dec_ref(v_e_3644_);
lean_inc(v___y_3649_);
lean_inc_ref(v___y_3648_);
lean_inc(v___y_3647_);
lean_inc_ref(v___y_3646_);
lean_inc(v_a_3645_);
lean_inc_ref(v_post_3639_);
lean_inc_ref(v_pre_3638_);
v___x_3669_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3638_, v_post_3639_, v_usedLetOnly_3640_, v_skipConstInApp_3641_, v_skipInstances_3642_, v___x_3668_, v_a_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_a_3670_; uint8_t v___x_3671_; uint8_t v___x_3672_; lean_object* v___x_3673_; 
v_a_3670_ = lean_ctor_get(v___x_3669_, 0);
lean_inc(v_a_3670_);
lean_dec_ref(v___x_3669_);
v___x_3671_ = 0;
v___x_3672_ = 1;
v___x_3673_ = l_Lean_Meta_mkLetFVars(v_fvars_3643_, v_a_3670_, v_usedLetOnly_3640_, v___x_3671_, v___x_3672_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
lean_dec_ref(v_fvars_3643_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref(v___x_3673_);
v___x_3675_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3638_, v_post_3639_, v_usedLetOnly_3640_, v_skipConstInApp_3641_, v_skipInstances_3642_, v_a_3674_, v_a_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
return v___x_3675_;
}
else
{
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v_a_3645_);
lean_dec_ref(v_post_3639_);
lean_dec_ref(v_pre_3638_);
return v___x_3673_;
}
}
else
{
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v_a_3645_);
lean_dec_ref(v_fvars_3643_);
lean_dec_ref(v_post_3639_);
lean_dec_ref(v_pre_3638_);
return v___x_3669_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object* v_pre_3676_, lean_object* v_post_3677_, uint8_t v_usedLetOnly_3678_, uint8_t v_skipConstInApp_3679_, uint8_t v_skipInstances_3680_, size_t v_sz_3681_, size_t v_i_3682_, lean_object* v_bs_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_){
_start:
{
uint8_t v___x_3690_; 
v___x_3690_ = lean_usize_dec_lt(v_i_3682_, v_sz_3681_);
if (v___x_3690_ == 0)
{
lean_object* v___x_3691_; 
lean_dec(v___y_3688_);
lean_dec_ref(v___y_3687_);
lean_dec(v___y_3686_);
lean_dec_ref(v___y_3685_);
lean_dec(v___y_3684_);
lean_dec_ref(v_post_3677_);
lean_dec_ref(v_pre_3676_);
v___x_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3691_, 0, v_bs_3683_);
return v___x_3691_;
}
else
{
lean_object* v_v_3692_; lean_object* v___x_3693_; 
v_v_3692_ = lean_array_uget_borrowed(v_bs_3683_, v_i_3682_);
lean_inc(v___y_3688_);
lean_inc_ref(v___y_3687_);
lean_inc(v___y_3686_);
lean_inc_ref(v___y_3685_);
lean_inc(v___y_3684_);
lean_inc(v_v_3692_);
lean_inc_ref(v_post_3677_);
lean_inc_ref(v_pre_3676_);
v___x_3693_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3676_, v_post_3677_, v_usedLetOnly_3678_, v_skipConstInApp_3679_, v_skipInstances_3680_, v_v_3692_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_);
if (lean_obj_tag(v___x_3693_) == 0)
{
lean_object* v_a_3694_; lean_object* v___x_3695_; lean_object* v_bs_x27_3696_; size_t v___x_3697_; size_t v___x_3698_; lean_object* v___x_3699_; 
v_a_3694_ = lean_ctor_get(v___x_3693_, 0);
lean_inc(v_a_3694_);
lean_dec_ref(v___x_3693_);
v___x_3695_ = lean_unsigned_to_nat(0u);
v_bs_x27_3696_ = lean_array_uset(v_bs_3683_, v_i_3682_, v___x_3695_);
v___x_3697_ = ((size_t)1ULL);
v___x_3698_ = lean_usize_add(v_i_3682_, v___x_3697_);
v___x_3699_ = lean_array_uset(v_bs_x27_3696_, v_i_3682_, v_a_3694_);
v_i_3682_ = v___x_3698_;
v_bs_3683_ = v___x_3699_;
goto _start;
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec(v___y_3688_);
lean_dec_ref(v___y_3687_);
lean_dec(v___y_3686_);
lean_dec_ref(v___y_3685_);
lean_dec(v___y_3684_);
lean_dec_ref(v_bs_3683_);
lean_dec_ref(v_post_3677_);
lean_dec_ref(v_pre_3676_);
v_a_3701_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3693_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___x_3693_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_3709_, lean_object* v_post_3710_, uint8_t v_usedLetOnly_3711_, uint8_t v_skipConstInApp_3712_, uint8_t v_skipInstances_3713_, lean_object* v___x_3714_, lean_object* v___y_3715_, lean_object* v_b_3716_, lean_object* v_a_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3709_, v_post_3710_, v_usedLetOnly_3711_, v_skipConstInApp_3712_, v_skipInstances_3713_, v___x_3714_, v___y_3715_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_);
if (lean_obj_tag(v___x_3723_) == 0)
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3733_; 
v_a_3724_ = lean_ctor_get(v___x_3723_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3726_ = v___x_3723_;
v_isShared_3727_ = v_isSharedCheck_3733_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v___x_3723_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3733_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3731_; 
v___x_3728_ = lean_array_fset(v_b_3716_, v_a_3717_, v_a_3724_);
v___x_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3728_);
if (v_isShared_3727_ == 0)
{
lean_ctor_set(v___x_3726_, 0, v___x_3729_);
v___x_3731_ = v___x_3726_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v___x_3729_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec_ref(v_b_3716_);
v_a_3734_ = lean_ctor_get(v___x_3723_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3723_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3723_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_3742_, lean_object* v_post_3743_, lean_object* v_usedLetOnly_3744_, lean_object* v_skipConstInApp_3745_, lean_object* v_skipInstances_3746_, lean_object* v___x_3747_, lean_object* v___y_3748_, lean_object* v_b_3749_, lean_object* v_a_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
uint8_t v_usedLetOnly_boxed_3756_; uint8_t v_skipConstInApp_boxed_3757_; uint8_t v_skipInstances_boxed_3758_; lean_object* v_res_3759_; 
v_usedLetOnly_boxed_3756_ = lean_unbox(v_usedLetOnly_3744_);
v_skipConstInApp_boxed_3757_ = lean_unbox(v_skipConstInApp_3745_);
v_skipInstances_boxed_3758_ = lean_unbox(v_skipInstances_3746_);
v_res_3759_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_3742_, v_post_3743_, v_usedLetOnly_boxed_3756_, v_skipConstInApp_boxed_3757_, v_skipInstances_boxed_3758_, v___x_3747_, v___y_3748_, v_b_3749_, v_a_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_);
lean_dec(v_a_3750_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3760_, lean_object* v___x_3761_, lean_object* v_pre_3762_, lean_object* v_post_3763_, uint8_t v_usedLetOnly_3764_, uint8_t v_skipConstInApp_3765_, uint8_t v_skipInstances_3766_, lean_object* v_a_3767_, lean_object* v_b_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v___y_3776_; uint8_t v___x_3799_; 
v___x_3799_ = lean_nat_dec_lt(v_a_3767_, v_upperBound_3760_);
if (v___x_3799_ == 0)
{
lean_object* v___x_3800_; 
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
lean_dec(v_a_3767_);
lean_dec_ref(v_post_3763_);
lean_dec_ref(v_pre_3762_);
v___x_3800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3800_, 0, v_b_3768_);
return v___x_3800_;
}
else
{
lean_object* v___x_3801_; lean_object* v___x_3802_; uint8_t v___x_3803_; 
v___x_3801_ = lean_array_fget_borrowed(v_b_3768_, v_a_3767_);
v___x_3802_ = lean_array_get_size(v___x_3761_);
v___x_3803_ = lean_nat_dec_lt(v_a_3767_, v___x_3802_);
if (v___x_3803_ == 0)
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___f_3807_; 
lean_inc(v___x_3801_);
v___x_3804_ = lean_box(v_usedLetOnly_3764_);
v___x_3805_ = lean_box(v_skipConstInApp_3765_);
v___x_3806_ = lean_box(v_skipInstances_3766_);
lean_inc(v_a_3767_);
lean_inc(v___y_3769_);
lean_inc_ref(v_post_3763_);
lean_inc_ref(v_pre_3762_);
v___f_3807_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3807_, 0, v_pre_3762_);
lean_closure_set(v___f_3807_, 1, v_post_3763_);
lean_closure_set(v___f_3807_, 2, v___x_3804_);
lean_closure_set(v___f_3807_, 3, v___x_3805_);
lean_closure_set(v___f_3807_, 4, v___x_3806_);
lean_closure_set(v___f_3807_, 5, v___x_3801_);
lean_closure_set(v___f_3807_, 6, v___y_3769_);
lean_closure_set(v___f_3807_, 7, v_b_3768_);
lean_closure_set(v___f_3807_, 8, v_a_3767_);
v___y_3776_ = v___f_3807_;
goto v___jp_3775_;
}
else
{
lean_object* v___x_3808_; uint8_t v_isInstance_3809_; 
v___x_3808_ = lean_array_fget_borrowed(v___x_3761_, v_a_3767_);
v_isInstance_3809_ = lean_ctor_get_uint8(v___x_3808_, sizeof(void*)*1 + 4);
if (v_isInstance_3809_ == 0)
{
lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___f_3813_; 
lean_inc(v___x_3801_);
v___x_3810_ = lean_box(v_usedLetOnly_3764_);
v___x_3811_ = lean_box(v_skipConstInApp_3765_);
v___x_3812_ = lean_box(v_skipInstances_3766_);
lean_inc(v_a_3767_);
lean_inc(v___y_3769_);
lean_inc_ref(v_post_3763_);
lean_inc_ref(v_pre_3762_);
v___f_3813_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3813_, 0, v_pre_3762_);
lean_closure_set(v___f_3813_, 1, v_post_3763_);
lean_closure_set(v___f_3813_, 2, v___x_3810_);
lean_closure_set(v___f_3813_, 3, v___x_3811_);
lean_closure_set(v___f_3813_, 4, v___x_3812_);
lean_closure_set(v___f_3813_, 5, v___x_3801_);
lean_closure_set(v___f_3813_, 6, v___y_3769_);
lean_closure_set(v___f_3813_, 7, v_b_3768_);
lean_closure_set(v___f_3813_, 8, v_a_3767_);
v___y_3776_ = v___f_3813_;
goto v___jp_3775_;
}
else
{
lean_object* v___x_3814_; lean_object* v___f_3815_; 
v___x_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3814_, 0, v_b_3768_);
v___f_3815_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3815_, 0, v___x_3814_);
v___y_3776_ = v___f_3815_;
goto v___jp_3775_;
}
}
}
v___jp_3775_:
{
lean_object* v___x_3777_; 
lean_inc(v___y_3773_);
lean_inc_ref(v___y_3772_);
lean_inc(v___y_3771_);
lean_inc_ref(v___y_3770_);
v___x_3777_ = lean_apply_5(v___y_3776_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_, lean_box(0));
if (lean_obj_tag(v___x_3777_) == 0)
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3790_; 
v_a_3778_ = lean_ctor_get(v___x_3777_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v___x_3777_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3780_ = v___x_3777_;
v_isShared_3781_ = v_isSharedCheck_3790_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3777_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3790_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
if (lean_obj_tag(v_a_3778_) == 0)
{
lean_object* v_a_3782_; lean_object* v___x_3784_; 
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
lean_dec(v_a_3767_);
lean_dec_ref(v_post_3763_);
lean_dec_ref(v_pre_3762_);
v_a_3782_ = lean_ctor_get(v_a_3778_, 0);
lean_inc(v_a_3782_);
lean_dec_ref(v_a_3778_);
if (v_isShared_3781_ == 0)
{
lean_ctor_set(v___x_3780_, 0, v_a_3782_);
v___x_3784_ = v___x_3780_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3782_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; 
lean_del_object(v___x_3780_);
v_a_3786_ = lean_ctor_get(v_a_3778_, 0);
lean_inc(v_a_3786_);
lean_dec_ref(v_a_3778_);
v___x_3787_ = lean_unsigned_to_nat(1u);
v___x_3788_ = lean_nat_add(v_a_3767_, v___x_3787_);
lean_dec(v_a_3767_);
v_a_3767_ = v___x_3788_;
v_b_3768_ = v_a_3786_;
goto _start;
}
}
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3798_; 
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
lean_dec(v_a_3767_);
lean_dec_ref(v_post_3763_);
lean_dec_ref(v_pre_3762_);
v_a_3791_ = lean_ctor_get(v___x_3777_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3777_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3793_ = v___x_3777_;
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3777_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
if (v_isShared_3794_ == 0)
{
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3791_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t v_skipInstances_3816_, lean_object* v_pre_3817_, lean_object* v_post_3818_, uint8_t v_usedLetOnly_3819_, uint8_t v_skipConstInApp_3820_, lean_object* v_x_3821_, lean_object* v_x_3822_, lean_object* v_x_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_f_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; 
if (lean_obj_tag(v_x_3821_) == 5)
{
lean_object* v_fn_3879_; lean_object* v_arg_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_fn_3879_ = lean_ctor_get(v_x_3821_, 0);
lean_inc_ref(v_fn_3879_);
v_arg_3880_ = lean_ctor_get(v_x_3821_, 1);
lean_inc_ref(v_arg_3880_);
lean_dec_ref(v_x_3821_);
v___x_3881_ = lean_array_set(v_x_3822_, v_x_3823_, v_arg_3880_);
v___x_3882_ = lean_unsigned_to_nat(1u);
v___x_3883_ = lean_nat_sub(v_x_3823_, v___x_3882_);
lean_dec(v_x_3823_);
v_x_3821_ = v_fn_3879_;
v_x_3822_ = v___x_3881_;
v_x_3823_ = v___x_3883_;
goto _start;
}
else
{
lean_dec(v_x_3823_);
if (v_skipConstInApp_3820_ == 0)
{
goto v___jp_3876_;
}
else
{
uint8_t v___x_3885_; 
v___x_3885_ = l_Lean_Expr_isConst(v_x_3821_);
if (v___x_3885_ == 0)
{
goto v___jp_3876_;
}
else
{
v_f_3831_ = v_x_3821_;
v___y_3832_ = v___y_3824_;
v___y_3833_ = v___y_3825_;
v___y_3834_ = v___y_3826_;
v___y_3835_ = v___y_3827_;
v___y_3836_ = v___y_3828_;
goto v___jp_3830_;
}
}
}
v___jp_3830_:
{
if (v_skipInstances_3816_ == 0)
{
size_t v_sz_3837_; size_t v___x_3838_; lean_object* v___x_3839_; 
v_sz_3837_ = lean_array_size(v_x_3822_);
v___x_3838_ = ((size_t)0ULL);
lean_inc(v___y_3836_);
lean_inc_ref(v___y_3835_);
lean_inc(v___y_3834_);
lean_inc_ref(v___y_3833_);
lean_inc(v___y_3832_);
lean_inc_ref(v_post_3818_);
lean_inc_ref(v_pre_3817_);
v___x_3839_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_3817_, v_post_3818_, v_usedLetOnly_3819_, v_skipConstInApp_3820_, v_skipInstances_3816_, v_sz_3837_, v___x_3838_, v_x_3822_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3840_);
lean_dec_ref(v___x_3839_);
v___x_3841_ = l_Lean_mkAppN(v_f_3831_, v_a_3840_);
lean_dec(v_a_3840_);
v___x_3842_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3817_, v_post_3818_, v_usedLetOnly_3819_, v_skipConstInApp_3820_, v_skipInstances_3816_, v___x_3841_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
return v___x_3842_;
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v___y_3832_);
lean_dec_ref(v_f_3831_);
lean_dec_ref(v_post_3818_);
lean_dec_ref(v_pre_3817_);
v_a_3843_ = lean_ctor_get(v___x_3839_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3839_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3839_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
else
{
lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3851_ = lean_array_get_size(v_x_3822_);
lean_inc(v___y_3836_);
lean_inc_ref(v___y_3835_);
lean_inc(v___y_3834_);
lean_inc_ref(v___y_3833_);
lean_inc_ref(v_f_3831_);
v___x_3852_ = l_Lean_Meta_getFunInfoNArgs(v_f_3831_, v___x_3851_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3852_) == 0)
{
lean_object* v_a_3853_; lean_object* v_paramInfo_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc(v_a_3853_);
lean_dec_ref(v___x_3852_);
v_paramInfo_3854_ = lean_ctor_get(v_a_3853_, 0);
lean_inc_ref(v_paramInfo_3854_);
lean_dec(v_a_3853_);
v___x_3855_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_3836_);
lean_inc_ref(v___y_3835_);
lean_inc(v___y_3834_);
lean_inc_ref(v___y_3833_);
lean_inc(v___y_3832_);
lean_inc_ref(v_post_3818_);
lean_inc_ref(v_pre_3817_);
v___x_3856_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v___x_3851_, v_paramInfo_3854_, v_pre_3817_, v_post_3818_, v_usedLetOnly_3819_, v_skipConstInApp_3820_, v_skipInstances_3816_, v___x_3855_, v_x_3822_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
lean_dec_ref(v_paramInfo_3854_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v_a_3857_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_a_3857_);
lean_dec_ref(v___x_3856_);
v___x_3858_ = l_Lean_mkAppN(v_f_3831_, v_a_3857_);
lean_dec(v_a_3857_);
v___x_3859_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3817_, v_post_3818_, v_usedLetOnly_3819_, v_skipConstInApp_3820_, v_skipInstances_3816_, v___x_3858_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
return v___x_3859_;
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v___y_3832_);
lean_dec_ref(v_f_3831_);
lean_dec_ref(v_post_3818_);
lean_dec_ref(v_pre_3817_);
v_a_3860_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3856_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3856_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
else
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3875_; 
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v___y_3832_);
lean_dec_ref(v_f_3831_);
lean_dec_ref(v_x_3822_);
lean_dec_ref(v_post_3818_);
lean_dec_ref(v_pre_3817_);
v_a_3868_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3870_ = v___x_3852_;
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v___x_3852_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3873_; 
if (v_isShared_3871_ == 0)
{
v___x_3873_ = v___x_3870_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v_a_3868_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
}
}
v___jp_3876_:
{
lean_object* v___x_3877_; 
lean_inc(v___y_3828_);
lean_inc_ref(v___y_3827_);
lean_inc(v___y_3826_);
lean_inc_ref(v___y_3825_);
lean_inc(v___y_3824_);
lean_inc_ref(v_post_3818_);
lean_inc_ref(v_pre_3817_);
v___x_3877_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3817_, v_post_3818_, v_usedLetOnly_3819_, v_skipConstInApp_3820_, v_skipInstances_3816_, v_x_3821_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
lean_inc(v_a_3878_);
lean_dec_ref(v___x_3877_);
v_f_3831_ = v_a_3878_;
v___y_3832_ = v___y_3824_;
v___y_3833_ = v___y_3825_;
v___y_3834_ = v___y_3826_;
v___y_3835_ = v___y_3827_;
v___y_3836_ = v___y_3828_;
goto v___jp_3830_;
}
else
{
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v___y_3824_);
lean_dec_ref(v_x_3822_);
lean_dec_ref(v_post_3818_);
lean_dec_ref(v_pre_3817_);
return v___x_3877_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object* v_pre_3886_, lean_object* v_e_3887_, lean_object* v_post_3888_, uint8_t v_usedLetOnly_3889_, uint8_t v_skipConstInApp_3890_, uint8_t v_skipInstances_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v___x_3898_; 
lean_inc_ref(v_pre_3886_);
lean_inc(v___y_3896_);
lean_inc_ref(v___y_3895_);
lean_inc(v___y_3894_);
lean_inc_ref(v___y_3893_);
lean_inc_ref(v_e_3887_);
v___x_3898_ = lean_apply_6(v_pre_3886_, v_e_3887_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_, lean_box(0));
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3947_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3901_ = v___x_3898_;
v_isShared_3902_ = v_isSharedCheck_3947_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3898_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3947_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___y_3904_; 
switch(lean_obj_tag(v_a_3899_))
{
case 0:
{
lean_object* v_e_3939_; lean_object* v___x_3941_; 
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
lean_dec_ref(v_post_3888_);
lean_dec_ref(v_e_3887_);
lean_dec_ref(v_pre_3886_);
v_e_3939_ = lean_ctor_get(v_a_3899_, 0);
lean_inc_ref(v_e_3939_);
lean_dec_ref(v_a_3899_);
if (v_isShared_3902_ == 0)
{
lean_ctor_set(v___x_3901_, 0, v_e_3939_);
v___x_3941_ = v___x_3901_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_e_3939_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
case 1:
{
lean_object* v_e_3943_; lean_object* v___x_3944_; 
lean_del_object(v___x_3901_);
lean_dec_ref(v_e_3887_);
v_e_3943_ = lean_ctor_get(v_a_3899_, 0);
lean_inc_ref(v_e_3943_);
lean_dec_ref(v_a_3899_);
v___x_3944_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v_e_3943_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3944_;
}
default: 
{
lean_object* v_e_x3f_3945_; 
lean_del_object(v___x_3901_);
v_e_x3f_3945_ = lean_ctor_get(v_a_3899_, 0);
lean_inc(v_e_x3f_3945_);
lean_dec_ref(v_a_3899_);
if (lean_obj_tag(v_e_x3f_3945_) == 0)
{
v___y_3904_ = v_e_3887_;
goto v___jp_3903_;
}
else
{
lean_object* v_val_3946_; 
lean_dec_ref(v_e_3887_);
v_val_3946_ = lean_ctor_get(v_e_x3f_3945_, 0);
lean_inc(v_val_3946_);
lean_dec_ref(v_e_x3f_3945_);
v___y_3904_ = v_val_3946_;
goto v___jp_3903_;
}
}
}
v___jp_3903_:
{
switch(lean_obj_tag(v___y_3904_))
{
case 7:
{
lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3905_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_3906_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___x_3905_, v___y_3904_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3906_;
}
case 6:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_3908_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___x_3907_, v___y_3904_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3908_;
}
case 8:
{
lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3909_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_3910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___x_3909_, v___y_3904_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3910_;
}
case 5:
{
lean_object* v_dummy_3911_; lean_object* v_nargs_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
v_dummy_3911_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_3912_ = l_Lean_Expr_getAppNumArgs(v___y_3904_);
lean_inc(v_nargs_3912_);
v___x_3913_ = lean_mk_array(v_nargs_3912_, v_dummy_3911_);
v___x_3914_ = lean_unsigned_to_nat(1u);
v___x_3915_ = lean_nat_sub(v_nargs_3912_, v___x_3914_);
lean_dec(v_nargs_3912_);
v___x_3916_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_3891_, v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v___y_3904_, v___x_3913_, v___x_3915_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3916_;
}
case 10:
{
lean_object* v_data_3917_; lean_object* v_expr_3918_; lean_object* v___x_3919_; 
v_data_3917_ = lean_ctor_get(v___y_3904_, 0);
v_expr_3918_ = lean_ctor_get(v___y_3904_, 1);
lean_inc(v___y_3896_);
lean_inc_ref(v___y_3895_);
lean_inc(v___y_3894_);
lean_inc_ref(v___y_3893_);
lean_inc(v___y_3892_);
lean_inc_ref(v_expr_3918_);
lean_inc_ref(v_post_3888_);
lean_inc_ref(v_pre_3886_);
v___x_3919_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v_expr_3918_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; size_t v___x_3921_; size_t v___x_3922_; uint8_t v___x_3923_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
lean_inc(v_a_3920_);
lean_dec_ref(v___x_3919_);
v___x_3921_ = lean_ptr_addr(v_expr_3918_);
v___x_3922_ = lean_ptr_addr(v_a_3920_);
v___x_3923_ = lean_usize_dec_eq(v___x_3921_, v___x_3922_);
if (v___x_3923_ == 0)
{
lean_object* v___x_3924_; lean_object* v___x_3925_; 
lean_inc(v_data_3917_);
lean_dec_ref(v___y_3904_);
v___x_3924_ = l_Lean_Expr_mdata___override(v_data_3917_, v_a_3920_);
v___x_3925_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___x_3924_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3925_;
}
else
{
lean_object* v___x_3926_; 
lean_dec(v_a_3920_);
v___x_3926_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___y_3904_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3926_;
}
}
else
{
lean_dec_ref(v___y_3904_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
lean_dec_ref(v_post_3888_);
lean_dec_ref(v_pre_3886_);
return v___x_3919_;
}
}
case 11:
{
lean_object* v_typeName_3927_; lean_object* v_idx_3928_; lean_object* v_struct_3929_; lean_object* v___x_3930_; 
v_typeName_3927_ = lean_ctor_get(v___y_3904_, 0);
v_idx_3928_ = lean_ctor_get(v___y_3904_, 1);
v_struct_3929_ = lean_ctor_get(v___y_3904_, 2);
lean_inc(v___y_3896_);
lean_inc_ref(v___y_3895_);
lean_inc(v___y_3894_);
lean_inc_ref(v___y_3893_);
lean_inc(v___y_3892_);
lean_inc_ref(v_struct_3929_);
lean_inc_ref(v_post_3888_);
lean_inc_ref(v_pre_3886_);
v___x_3930_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v_struct_3929_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
if (lean_obj_tag(v___x_3930_) == 0)
{
lean_object* v_a_3931_; size_t v___x_3932_; size_t v___x_3933_; uint8_t v___x_3934_; 
v_a_3931_ = lean_ctor_get(v___x_3930_, 0);
lean_inc(v_a_3931_);
lean_dec_ref(v___x_3930_);
v___x_3932_ = lean_ptr_addr(v_struct_3929_);
v___x_3933_ = lean_ptr_addr(v_a_3931_);
v___x_3934_ = lean_usize_dec_eq(v___x_3932_, v___x_3933_);
if (v___x_3934_ == 0)
{
lean_object* v___x_3935_; lean_object* v___x_3936_; 
lean_inc(v_idx_3928_);
lean_inc(v_typeName_3927_);
lean_dec_ref(v___y_3904_);
v___x_3935_ = l_Lean_Expr_proj___override(v_typeName_3927_, v_idx_3928_, v_a_3931_);
v___x_3936_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___x_3935_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3936_;
}
else
{
lean_object* v___x_3937_; 
lean_dec(v_a_3931_);
v___x_3937_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___y_3904_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3937_;
}
}
else
{
lean_dec_ref(v___y_3904_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
lean_dec_ref(v_post_3888_);
lean_dec_ref(v_pre_3886_);
return v___x_3930_;
}
}
default: 
{
lean_object* v___x_3938_; 
v___x_3938_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3886_, v_post_3888_, v_usedLetOnly_3889_, v_skipConstInApp_3890_, v_skipInstances_3891_, v___y_3904_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
return v___x_3938_;
}
}
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
lean_dec_ref(v_post_3888_);
lean_dec_ref(v_e_3887_);
lean_dec_ref(v_pre_3886_);
v_a_3948_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3898_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3898_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object* v_pre_3956_, lean_object* v_e_3957_, lean_object* v_post_3958_, lean_object* v_usedLetOnly_3959_, lean_object* v_skipConstInApp_3960_, lean_object* v_skipInstances_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
uint8_t v_usedLetOnly_boxed_3968_; uint8_t v_skipConstInApp_boxed_3969_; uint8_t v_skipInstances_boxed_3970_; lean_object* v_res_3971_; 
v_usedLetOnly_boxed_3968_ = lean_unbox(v_usedLetOnly_3959_);
v_skipConstInApp_boxed_3969_ = lean_unbox(v_skipConstInApp_3960_);
v_skipInstances_boxed_3970_ = lean_unbox(v_skipInstances_3961_);
v_res_3971_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(v_pre_3956_, v_e_3957_, v_post_3958_, v_usedLetOnly_boxed_3968_, v_skipConstInApp_boxed_3969_, v_skipInstances_boxed_3970_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object* v_pre_3972_, lean_object* v_post_3973_, uint8_t v_usedLetOnly_3974_, uint8_t v_skipConstInApp_3975_, uint8_t v_skipInstances_3976_, lean_object* v_e_3977_, lean_object* v_a_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_){
_start:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; 
lean_inc(v_a_3978_);
v___x_3984_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3984_, 0, lean_box(0));
lean_closure_set(v___x_3984_, 1, lean_box(0));
lean_closure_set(v___x_3984_, 2, v_a_3978_);
v___x_3985_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_3984_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_4019_; 
v_a_3986_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_3988_ = v___x_3985_;
v_isShared_3989_ = v_isSharedCheck_4019_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3985_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_4019_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3990_; 
v___x_3990_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_3986_, v_e_3977_);
lean_dec(v_a_3986_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___f_3994_; lean_object* v___x_3995_; 
lean_del_object(v___x_3988_);
v___x_3991_ = lean_box(v_usedLetOnly_3974_);
v___x_3992_ = lean_box(v_skipConstInApp_3975_);
v___x_3993_ = lean_box(v_skipInstances_3976_);
lean_inc_ref(v_e_3977_);
v___f_3994_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed), 12, 6);
lean_closure_set(v___f_3994_, 0, v_pre_3972_);
lean_closure_set(v___f_3994_, 1, v_e_3977_);
lean_closure_set(v___f_3994_, 2, v_post_3973_);
lean_closure_set(v___f_3994_, 3, v___x_3991_);
lean_closure_set(v___f_3994_, 4, v___x_3992_);
lean_closure_set(v___f_3994_, 5, v___x_3993_);
lean_inc(v___y_3982_);
lean_inc_ref(v___y_3981_);
lean_inc(v___y_3980_);
lean_inc_ref(v___y_3979_);
lean_inc(v_a_3978_);
v___x_3995_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v___f_3994_, v_a_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_);
if (lean_obj_tag(v___x_3995_) == 0)
{
lean_object* v_a_3996_; lean_object* v___f_3997_; lean_object* v___x_3998_; 
v_a_3996_ = lean_ctor_get(v___x_3995_, 0);
lean_inc(v_a_3996_);
lean_dec_ref(v___x_3995_);
lean_inc(v_a_3996_);
v___f_3997_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3997_, 0, v_a_3978_);
lean_closure_set(v___f_3997_, 1, v_e_3977_);
lean_closure_set(v___f_3997_, 2, v_a_3996_);
v___x_3998_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_3997_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_);
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec(v___y_3980_);
lean_dec_ref(v___y_3979_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4005_; 
v_isSharedCheck_4005_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; 
v_unused_4006_ = lean_ctor_get(v___x_3998_, 0);
lean_dec(v_unused_4006_);
v___x_4000_ = v___x_3998_;
v_isShared_4001_ = v_isSharedCheck_4005_;
goto v_resetjp_3999_;
}
else
{
lean_dec(v___x_3998_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4005_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4003_; 
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 0, v_a_3996_);
v___x_4003_ = v___x_4000_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_a_3996_);
v___x_4003_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
return v___x_4003_;
}
}
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4014_; 
lean_dec(v_a_3996_);
v_a_4007_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4009_ = v___x_3998_;
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_3998_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
}
else
{
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec(v___y_3980_);
lean_dec_ref(v___y_3979_);
lean_dec(v_a_3978_);
lean_dec_ref(v_e_3977_);
return v___x_3995_;
}
}
else
{
lean_object* v_val_4015_; lean_object* v___x_4017_; 
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec(v___y_3980_);
lean_dec_ref(v___y_3979_);
lean_dec(v_a_3978_);
lean_dec_ref(v_e_3977_);
lean_dec_ref(v_post_3973_);
lean_dec_ref(v_pre_3972_);
v_val_4015_ = lean_ctor_get(v___x_3990_, 0);
lean_inc(v_val_4015_);
lean_dec_ref(v___x_3990_);
if (v_isShared_3989_ == 0)
{
lean_ctor_set(v___x_3988_, 0, v_val_4015_);
v___x_4017_ = v___x_3988_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_val_4015_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4027_; 
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec(v___y_3980_);
lean_dec_ref(v___y_3979_);
lean_dec(v_a_3978_);
lean_dec_ref(v_e_3977_);
lean_dec_ref(v_post_3973_);
lean_dec_ref(v_pre_3972_);
v_a_4020_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4022_ = v___x_3985_;
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_3985_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4025_; 
if (v_isShared_4023_ == 0)
{
v___x_4025_ = v___x_4022_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4020_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
return v___x_4025_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object* v_fvars_4028_, lean_object* v_pre_4029_, lean_object* v_post_4030_, lean_object* v_usedLetOnly_4031_, lean_object* v_skipConstInApp_4032_, lean_object* v_skipInstances_4033_, lean_object* v_body_4034_, lean_object* v_x_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_){
_start:
{
uint8_t v_usedLetOnly_boxed_4042_; uint8_t v_skipConstInApp_boxed_4043_; uint8_t v_skipInstances_boxed_4044_; lean_object* v_res_4045_; 
v_usedLetOnly_boxed_4042_ = lean_unbox(v_usedLetOnly_4031_);
v_skipConstInApp_boxed_4043_ = lean_unbox(v_skipConstInApp_4032_);
v_skipInstances_boxed_4044_ = lean_unbox(v_skipInstances_4033_);
v_res_4045_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(v_fvars_4028_, v_pre_4029_, v_post_4030_, v_usedLetOnly_boxed_4042_, v_skipConstInApp_boxed_4043_, v_skipInstances_boxed_4044_, v_body_4034_, v_x_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_);
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object* v_pre_4046_, lean_object* v_post_4047_, uint8_t v_usedLetOnly_4048_, uint8_t v_skipConstInApp_4049_, uint8_t v_skipInstances_4050_, lean_object* v_fvars_4051_, lean_object* v_e_4052_, lean_object* v_a_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
if (lean_obj_tag(v_e_4052_) == 7)
{
lean_object* v_binderName_4059_; lean_object* v_binderType_4060_; lean_object* v_body_4061_; uint8_t v_binderInfo_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v_binderName_4059_ = lean_ctor_get(v_e_4052_, 0);
lean_inc(v_binderName_4059_);
v_binderType_4060_ = lean_ctor_get(v_e_4052_, 1);
lean_inc_ref(v_binderType_4060_);
v_body_4061_ = lean_ctor_get(v_e_4052_, 2);
lean_inc_ref(v_body_4061_);
v_binderInfo_4062_ = lean_ctor_get_uint8(v_e_4052_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_4052_);
v___x_4063_ = lean_expr_instantiate_rev(v_binderType_4060_, v_fvars_4051_);
lean_dec_ref(v_binderType_4060_);
lean_inc(v___y_4057_);
lean_inc_ref(v___y_4056_);
lean_inc(v___y_4055_);
lean_inc_ref(v___y_4054_);
lean_inc(v_a_4053_);
lean_inc_ref(v_post_4047_);
lean_inc_ref(v_pre_4046_);
v___x_4064_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4046_, v_post_4047_, v_usedLetOnly_4048_, v_skipConstInApp_4049_, v_skipInstances_4050_, v___x_4063_, v_a_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___f_4069_; uint8_t v___x_4070_; lean_object* v___x_4071_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
lean_inc(v_a_4065_);
lean_dec_ref(v___x_4064_);
v___x_4066_ = lean_box(v_usedLetOnly_4048_);
v___x_4067_ = lean_box(v_skipConstInApp_4049_);
v___x_4068_ = lean_box(v_skipInstances_4050_);
v___f_4069_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4069_, 0, v_fvars_4051_);
lean_closure_set(v___f_4069_, 1, v_pre_4046_);
lean_closure_set(v___f_4069_, 2, v_post_4047_);
lean_closure_set(v___f_4069_, 3, v___x_4066_);
lean_closure_set(v___f_4069_, 4, v___x_4067_);
lean_closure_set(v___f_4069_, 5, v___x_4068_);
lean_closure_set(v___f_4069_, 6, v_body_4061_);
v___x_4070_ = 0;
v___x_4071_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_4059_, v_binderInfo_4062_, v_a_4065_, v___f_4069_, v___x_4070_, v_a_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
return v___x_4071_;
}
else
{
lean_dec_ref(v_body_4061_);
lean_dec(v_binderName_4059_);
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4054_);
lean_dec(v_a_4053_);
lean_dec_ref(v_fvars_4051_);
lean_dec_ref(v_post_4047_);
lean_dec_ref(v_pre_4046_);
return v___x_4064_;
}
}
else
{
lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4072_ = lean_expr_instantiate_rev(v_e_4052_, v_fvars_4051_);
lean_dec_ref(v_e_4052_);
lean_inc(v___y_4057_);
lean_inc_ref(v___y_4056_);
lean_inc(v___y_4055_);
lean_inc_ref(v___y_4054_);
lean_inc(v_a_4053_);
lean_inc_ref(v_post_4047_);
lean_inc_ref(v_pre_4046_);
v___x_4073_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4046_, v_post_4047_, v_usedLetOnly_4048_, v_skipConstInApp_4049_, v_skipInstances_4050_, v___x_4072_, v_a_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_object* v_a_4074_; uint8_t v___x_4075_; uint8_t v___x_4076_; uint8_t v___x_4077_; lean_object* v___x_4078_; 
v_a_4074_ = lean_ctor_get(v___x_4073_, 0);
lean_inc(v_a_4074_);
lean_dec_ref(v___x_4073_);
v___x_4075_ = 0;
v___x_4076_ = 1;
v___x_4077_ = 1;
v___x_4078_ = l_Lean_Meta_mkForallFVars(v_fvars_4051_, v_a_4074_, v___x_4075_, v_usedLetOnly_4048_, v___x_4076_, v___x_4077_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
lean_dec_ref(v_fvars_4051_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_a_4079_; lean_object* v___x_4080_; 
v_a_4079_ = lean_ctor_get(v___x_4078_, 0);
lean_inc(v_a_4079_);
lean_dec_ref(v___x_4078_);
v___x_4080_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4046_, v_post_4047_, v_usedLetOnly_4048_, v_skipConstInApp_4049_, v_skipInstances_4050_, v_a_4079_, v_a_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
return v___x_4080_;
}
else
{
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4054_);
lean_dec(v_a_4053_);
lean_dec_ref(v_post_4047_);
lean_dec_ref(v_pre_4046_);
return v___x_4078_;
}
}
else
{
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4054_);
lean_dec(v_a_4053_);
lean_dec_ref(v_fvars_4051_);
lean_dec_ref(v_post_4047_);
lean_dec_ref(v_pre_4046_);
return v___x_4073_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object* v_fvars_4081_, lean_object* v_pre_4082_, lean_object* v_post_4083_, uint8_t v_usedLetOnly_4084_, uint8_t v_skipConstInApp_4085_, uint8_t v_skipInstances_4086_, lean_object* v_body_4087_, lean_object* v_x_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = lean_array_push(v_fvars_4081_, v_x_4088_);
v___x_4096_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4082_, v_post_4083_, v_usedLetOnly_4084_, v_skipConstInApp_4085_, v_skipInstances_4086_, v___x_4095_, v_body_4087_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
return v___x_4096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_4097_, lean_object* v_post_4098_, lean_object* v_usedLetOnly_4099_, lean_object* v_skipConstInApp_4100_, lean_object* v_skipInstances_4101_, lean_object* v_e_4102_, lean_object* v_a_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
uint8_t v_usedLetOnly_boxed_4109_; uint8_t v_skipConstInApp_boxed_4110_; uint8_t v_skipInstances_boxed_4111_; lean_object* v_res_4112_; 
v_usedLetOnly_boxed_4109_ = lean_unbox(v_usedLetOnly_4099_);
v_skipConstInApp_boxed_4110_ = lean_unbox(v_skipConstInApp_4100_);
v_skipInstances_boxed_4111_ = lean_unbox(v_skipInstances_4101_);
v_res_4112_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4097_, v_post_4098_, v_usedLetOnly_boxed_4109_, v_skipConstInApp_boxed_4110_, v_skipInstances_boxed_4111_, v_e_4102_, v_a_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_4113_, lean_object* v_post_4114_, lean_object* v_usedLetOnly_4115_, lean_object* v_skipConstInApp_4116_, lean_object* v_skipInstances_4117_, lean_object* v_sz_4118_, lean_object* v_i_4119_, lean_object* v_bs_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
uint8_t v_usedLetOnly_boxed_4127_; uint8_t v_skipConstInApp_boxed_4128_; uint8_t v_skipInstances_boxed_4129_; size_t v_sz_boxed_4130_; size_t v_i_boxed_4131_; lean_object* v_res_4132_; 
v_usedLetOnly_boxed_4127_ = lean_unbox(v_usedLetOnly_4115_);
v_skipConstInApp_boxed_4128_ = lean_unbox(v_skipConstInApp_4116_);
v_skipInstances_boxed_4129_ = lean_unbox(v_skipInstances_4117_);
v_sz_boxed_4130_ = lean_unbox_usize(v_sz_4118_);
lean_dec(v_sz_4118_);
v_i_boxed_4131_ = lean_unbox_usize(v_i_4119_);
lean_dec(v_i_4119_);
v_res_4132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4113_, v_post_4114_, v_usedLetOnly_boxed_4127_, v_skipConstInApp_boxed_4128_, v_skipInstances_boxed_4129_, v_sz_boxed_4130_, v_i_boxed_4131_, v_bs_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
return v_res_4132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object* v_pre_4133_, lean_object* v_post_4134_, lean_object* v_usedLetOnly_4135_, lean_object* v_skipConstInApp_4136_, lean_object* v_skipInstances_4137_, lean_object* v_e_4138_, lean_object* v_a_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_){
_start:
{
uint8_t v_usedLetOnly_boxed_4145_; uint8_t v_skipConstInApp_boxed_4146_; uint8_t v_skipInstances_boxed_4147_; lean_object* v_res_4148_; 
v_usedLetOnly_boxed_4145_ = lean_unbox(v_usedLetOnly_4135_);
v_skipConstInApp_boxed_4146_ = lean_unbox(v_skipConstInApp_4136_);
v_skipInstances_boxed_4147_ = lean_unbox(v_skipInstances_4137_);
v_res_4148_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4133_, v_post_4134_, v_usedLetOnly_boxed_4145_, v_skipConstInApp_boxed_4146_, v_skipInstances_boxed_4147_, v_e_4138_, v_a_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_pre_4149_, lean_object* v_post_4150_, lean_object* v_usedLetOnly_4151_, lean_object* v_skipConstInApp_4152_, lean_object* v_skipInstances_4153_, lean_object* v_fvars_4154_, lean_object* v_e_4155_, lean_object* v_a_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_){
_start:
{
uint8_t v_usedLetOnly_boxed_4162_; uint8_t v_skipConstInApp_boxed_4163_; uint8_t v_skipInstances_boxed_4164_; lean_object* v_res_4165_; 
v_usedLetOnly_boxed_4162_ = lean_unbox(v_usedLetOnly_4151_);
v_skipConstInApp_boxed_4163_ = lean_unbox(v_skipConstInApp_4152_);
v_skipInstances_boxed_4164_ = lean_unbox(v_skipInstances_4153_);
v_res_4165_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4149_, v_post_4150_, v_usedLetOnly_boxed_4162_, v_skipConstInApp_boxed_4163_, v_skipInstances_boxed_4164_, v_fvars_4154_, v_e_4155_, v_a_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_4166_, lean_object* v_post_4167_, lean_object* v_usedLetOnly_4168_, lean_object* v_skipConstInApp_4169_, lean_object* v_skipInstances_4170_, lean_object* v_fvars_4171_, lean_object* v_e_4172_, lean_object* v_a_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
uint8_t v_usedLetOnly_boxed_4179_; uint8_t v_skipConstInApp_boxed_4180_; uint8_t v_skipInstances_boxed_4181_; lean_object* v_res_4182_; 
v_usedLetOnly_boxed_4179_ = lean_unbox(v_usedLetOnly_4168_);
v_skipConstInApp_boxed_4180_ = lean_unbox(v_skipConstInApp_4169_);
v_skipInstances_boxed_4181_ = lean_unbox(v_skipInstances_4170_);
v_res_4182_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4166_, v_post_4167_, v_usedLetOnly_boxed_4179_, v_skipConstInApp_boxed_4180_, v_skipInstances_boxed_4181_, v_fvars_4171_, v_e_4172_, v_a_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_4183_, lean_object* v_post_4184_, lean_object* v_usedLetOnly_4185_, lean_object* v_skipConstInApp_4186_, lean_object* v_skipInstances_4187_, lean_object* v_fvars_4188_, lean_object* v_e_4189_, lean_object* v_a_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
uint8_t v_usedLetOnly_boxed_4196_; uint8_t v_skipConstInApp_boxed_4197_; uint8_t v_skipInstances_boxed_4198_; lean_object* v_res_4199_; 
v_usedLetOnly_boxed_4196_ = lean_unbox(v_usedLetOnly_4185_);
v_skipConstInApp_boxed_4197_ = lean_unbox(v_skipConstInApp_4186_);
v_skipInstances_boxed_4198_ = lean_unbox(v_skipInstances_4187_);
v_res_4199_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4183_, v_post_4184_, v_usedLetOnly_boxed_4196_, v_skipConstInApp_boxed_4197_, v_skipInstances_boxed_4198_, v_fvars_4188_, v_e_4189_, v_a_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4200_, lean_object* v___x_4201_, lean_object* v_pre_4202_, lean_object* v_post_4203_, lean_object* v_usedLetOnly_4204_, lean_object* v_skipConstInApp_4205_, lean_object* v_skipInstances_4206_, lean_object* v_a_4207_, lean_object* v_b_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
uint8_t v_usedLetOnly_boxed_4215_; uint8_t v_skipConstInApp_boxed_4216_; uint8_t v_skipInstances_boxed_4217_; lean_object* v_res_4218_; 
v_usedLetOnly_boxed_4215_ = lean_unbox(v_usedLetOnly_4204_);
v_skipConstInApp_boxed_4216_ = lean_unbox(v_skipConstInApp_4205_);
v_skipInstances_boxed_4217_ = lean_unbox(v_skipInstances_4206_);
v_res_4218_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4200_, v___x_4201_, v_pre_4202_, v_post_4203_, v_usedLetOnly_boxed_4215_, v_skipConstInApp_boxed_4216_, v_skipInstances_boxed_4217_, v_a_4207_, v_b_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
lean_dec_ref(v___x_4201_);
lean_dec(v_upperBound_4200_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_skipInstances_4219_, lean_object* v_pre_4220_, lean_object* v_post_4221_, lean_object* v_usedLetOnly_4222_, lean_object* v_skipConstInApp_4223_, lean_object* v_x_4224_, lean_object* v_x_4225_, lean_object* v_x_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_){
_start:
{
uint8_t v_skipInstances_boxed_4233_; uint8_t v_usedLetOnly_boxed_4234_; uint8_t v_skipConstInApp_boxed_4235_; lean_object* v_res_4236_; 
v_skipInstances_boxed_4233_ = lean_unbox(v_skipInstances_4219_);
v_usedLetOnly_boxed_4234_ = lean_unbox(v_usedLetOnly_4222_);
v_skipConstInApp_boxed_4235_ = lean_unbox(v_skipConstInApp_4223_);
v_res_4236_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_boxed_4233_, v_pre_4220_, v_post_4221_, v_usedLetOnly_boxed_4234_, v_skipConstInApp_boxed_4235_, v_x_4224_, v_x_4225_, v_x_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object* v_input_4237_, lean_object* v_pre_4238_, lean_object* v_post_4239_, uint8_t v_usedLetOnly_4240_, uint8_t v_skipConstInApp_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v_a_4249_; uint8_t v___x_4250_; lean_object* v___x_4251_; 
v___x_4247_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_4248_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4247_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_);
v_a_4249_ = lean_ctor_get(v___x_4248_, 0);
lean_inc(v_a_4249_);
lean_dec_ref(v___x_4248_);
v___x_4250_ = 0;
lean_inc(v___y_4245_);
lean_inc_ref(v___y_4244_);
lean_inc(v___y_4243_);
lean_inc_ref(v___y_4242_);
lean_inc(v_a_4249_);
v___x_4251_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4238_, v_post_4239_, v_usedLetOnly_4240_, v_skipConstInApp_4241_, v___x_4250_, v_input_4237_, v_a_4249_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v_a_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4261_; 
v_a_4252_ = lean_ctor_get(v___x_4251_, 0);
lean_inc(v_a_4252_);
lean_dec_ref(v___x_4251_);
v___x_4253_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4253_, 0, lean_box(0));
lean_closure_set(v___x_4253_, 1, lean_box(0));
lean_closure_set(v___x_4253_, 2, v_a_4249_);
v___x_4254_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4253_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_);
lean_dec(v___y_4245_);
lean_dec_ref(v___y_4244_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4261_ == 0)
{
lean_object* v_unused_4262_; 
v_unused_4262_ = lean_ctor_get(v___x_4254_, 0);
lean_dec(v_unused_4262_);
v___x_4256_ = v___x_4254_;
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
else
{
lean_dec(v___x_4254_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
if (v_isShared_4257_ == 0)
{
lean_ctor_set(v___x_4256_, 0, v_a_4252_);
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4252_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
else
{
lean_dec(v_a_4249_);
lean_dec(v___y_4245_);
lean_dec_ref(v___y_4244_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
return v___x_4251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object* v_input_4263_, lean_object* v_pre_4264_, lean_object* v_post_4265_, lean_object* v_usedLetOnly_4266_, lean_object* v_skipConstInApp_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
uint8_t v_usedLetOnly_boxed_4273_; uint8_t v_skipConstInApp_boxed_4274_; lean_object* v_res_4275_; 
v_usedLetOnly_boxed_4273_ = lean_unbox(v_usedLetOnly_4266_);
v_skipConstInApp_boxed_4274_ = lean_unbox(v_skipConstInApp_4267_);
v_res_4275_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_input_4263_, v_pre_4264_, v_post_4265_, v_usedLetOnly_boxed_4273_, v_skipConstInApp_boxed_4274_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
return v_res_4275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object* v_e_4277_, uint8_t v_zetaDelta_4278_, uint8_t v_zetaHave_4279_, uint8_t v_beta_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_){
_start:
{
lean_object* v_lctx_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___f_4290_; uint8_t v___x_4291_; 
v_lctx_4286_ = lean_ctor_get(v_a_4281_, 2);
lean_inc_ref(v_lctx_4286_);
v___x_4287_ = lean_local_ctx_num_indices(v_lctx_4286_);
v___x_4288_ = lean_box(v_zetaHave_4279_);
v___x_4289_ = lean_box(v_zetaDelta_4278_);
v___f_4290_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__0___boxed), 9, 3);
lean_closure_set(v___f_4290_, 0, v___x_4288_);
lean_closure_set(v___f_4290_, 1, v___x_4287_);
lean_closure_set(v___f_4290_, 2, v___x_4289_);
v___x_4291_ = 1;
if (v_beta_4280_ == 0)
{
lean_object* v___f_4292_; lean_object* v___f_4293_; lean_object* v___x_4294_; 
v___f_4292_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4293_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__2___boxed), 7, 1);
lean_closure_set(v___f_4293_, 0, v___f_4290_);
v___x_4294_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4277_, v___f_4293_, v___f_4292_, v___x_4291_, v_beta_4280_, v_a_4281_, v_a_4282_, v_a_4283_, v_a_4284_);
return v___x_4294_;
}
else
{
lean_object* v___f_4295_; lean_object* v___f_4296_; uint8_t v___x_4297_; lean_object* v___x_4298_; 
v___f_4295_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4296_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__4___boxed), 7, 1);
lean_closure_set(v___f_4296_, 0, v___f_4290_);
v___x_4297_ = 0;
v___x_4298_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4277_, v___f_4296_, v___f_4295_, v___x_4291_, v___x_4297_, v_a_4281_, v_a_4282_, v_a_4283_, v_a_4284_);
return v___x_4298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object* v_e_4299_, lean_object* v_zetaDelta_4300_, lean_object* v_zetaHave_4301_, lean_object* v_beta_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_){
_start:
{
uint8_t v_zetaDelta_boxed_4308_; uint8_t v_zetaHave_boxed_4309_; uint8_t v_beta_boxed_4310_; lean_object* v_res_4311_; 
v_zetaDelta_boxed_4308_ = lean_unbox(v_zetaDelta_4300_);
v_zetaHave_boxed_4309_ = lean_unbox(v_zetaHave_4301_);
v_beta_boxed_4310_ = lean_unbox(v_beta_4302_);
v_res_4311_ = l_Lean_Meta_zetaReduce(v_e_4299_, v_zetaDelta_boxed_4308_, v_zetaHave_boxed_4309_, v_beta_boxed_4310_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_);
return v_res_4311_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_4312_, lean_object* v___x_4313_, lean_object* v_pre_4314_, lean_object* v_post_4315_, uint8_t v_usedLetOnly_4316_, uint8_t v_skipConstInApp_4317_, uint8_t v_skipInstances_4318_, lean_object* v___x_4319_, lean_object* v_inst_4320_, lean_object* v_R_4321_, lean_object* v_a_4322_, lean_object* v_b_4323_, lean_object* v_c_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4312_, v___x_4313_, v_pre_4314_, v_post_4315_, v_usedLetOnly_4316_, v_skipConstInApp_4317_, v_skipInstances_4318_, v_a_4322_, v_b_4323_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_4332_ = _args[0];
lean_object* v___x_4333_ = _args[1];
lean_object* v_pre_4334_ = _args[2];
lean_object* v_post_4335_ = _args[3];
lean_object* v_usedLetOnly_4336_ = _args[4];
lean_object* v_skipConstInApp_4337_ = _args[5];
lean_object* v_skipInstances_4338_ = _args[6];
lean_object* v___x_4339_ = _args[7];
lean_object* v_inst_4340_ = _args[8];
lean_object* v_R_4341_ = _args[9];
lean_object* v_a_4342_ = _args[10];
lean_object* v_b_4343_ = _args[11];
lean_object* v_c_4344_ = _args[12];
lean_object* v___y_4345_ = _args[13];
lean_object* v___y_4346_ = _args[14];
lean_object* v___y_4347_ = _args[15];
lean_object* v___y_4348_ = _args[16];
lean_object* v___y_4349_ = _args[17];
lean_object* v___y_4350_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_4351_; uint8_t v_skipConstInApp_boxed_4352_; uint8_t v_skipInstances_boxed_4353_; lean_object* v_res_4354_; 
v_usedLetOnly_boxed_4351_ = lean_unbox(v_usedLetOnly_4336_);
v_skipConstInApp_boxed_4352_ = lean_unbox(v_skipConstInApp_4337_);
v_skipInstances_boxed_4353_ = lean_unbox(v_skipInstances_4338_);
v_res_4354_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(v_upperBound_4332_, v___x_4333_, v_pre_4334_, v_post_4335_, v_usedLetOnly_boxed_4351_, v_skipConstInApp_boxed_4352_, v_skipInstances_boxed_4353_, v___x_4339_, v_inst_4340_, v_R_4341_, v_a_4342_, v_b_4343_, v_c_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_);
lean_dec(v___x_4339_);
lean_dec_ref(v___x_4333_);
lean_dec(v_upperBound_4332_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b1_4355_, lean_object* v_name_4356_, uint8_t v_bi_4357_, lean_object* v_type_4358_, lean_object* v_k_4359_, uint8_t v_kind_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_){
_start:
{
lean_object* v___x_4367_; 
v___x_4367_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_4356_, v_bi_4357_, v_type_4358_, v_k_4359_, v_kind_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4368_, lean_object* v_name_4369_, lean_object* v_bi_4370_, lean_object* v_type_4371_, lean_object* v_k_4372_, lean_object* v_kind_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_){
_start:
{
uint8_t v_bi_boxed_4380_; uint8_t v_kind_boxed_4381_; lean_object* v_res_4382_; 
v_bi_boxed_4380_ = lean_unbox(v_bi_4370_);
v_kind_boxed_4381_ = lean_unbox(v_kind_4373_);
v_res_4382_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b1_4368_, v_name_4369_, v_bi_boxed_4380_, v_type_4371_, v_k_4372_, v_kind_boxed_4381_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_4383_, lean_object* v_name_4384_, lean_object* v_type_4385_, lean_object* v_val_4386_, lean_object* v_k_4387_, uint8_t v_nondep_4388_, uint8_t v_kind_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
lean_object* v___x_4396_; 
v___x_4396_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_4384_, v_type_4385_, v_val_4386_, v_k_4387_, v_nondep_4388_, v_kind_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_);
return v___x_4396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4397_, lean_object* v_name_4398_, lean_object* v_type_4399_, lean_object* v_val_4400_, lean_object* v_k_4401_, lean_object* v_nondep_4402_, lean_object* v_kind_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_){
_start:
{
uint8_t v_nondep_boxed_4410_; uint8_t v_kind_boxed_4411_; lean_object* v_res_4412_; 
v_nondep_boxed_4410_ = lean_unbox(v_nondep_4402_);
v_kind_boxed_4411_ = lean_unbox(v_kind_4403_);
v_res_4412_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(v_00_u03b1_4397_, v_name_4398_, v_type_4399_, v_val_4400_, v_k_4401_, v_nondep_boxed_4410_, v_kind_boxed_4411_, v___y_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
return v_res_4412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object* v_00_u03b1_4413_, lean_object* v_ref_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_){
_start:
{
lean_object* v___x_4420_; 
v___x_4420_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_4414_);
return v___x_4420_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4421_, lean_object* v_ref_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
lean_object* v_res_4428_; 
v_res_4428_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(v_00_u03b1_4421_, v_ref_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_);
lean_dec(v___y_4426_);
lean_dec_ref(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object* v_00_u03b1_4429_, lean_object* v_x_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; 
v___x_4437_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_4430_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b1_4438_, lean_object* v_x_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(v_00_u03b1_4438_, v_x_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
return v_res_4446_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object* v_a_4447_, lean_object* v_as_4448_, size_t v_i_4449_, size_t v_stop_4450_){
_start:
{
uint8_t v___x_4451_; 
v___x_4451_ = lean_usize_dec_eq(v_i_4449_, v_stop_4450_);
if (v___x_4451_ == 0)
{
lean_object* v___x_4452_; uint8_t v___x_4453_; 
v___x_4452_ = lean_array_uget_borrowed(v_as_4448_, v_i_4449_);
v___x_4453_ = l_Lean_instBEqFVarId_beq(v_a_4447_, v___x_4452_);
if (v___x_4453_ == 0)
{
size_t v___x_4454_; size_t v___x_4455_; 
v___x_4454_ = ((size_t)1ULL);
v___x_4455_ = lean_usize_add(v_i_4449_, v___x_4454_);
v_i_4449_ = v___x_4455_;
goto _start;
}
else
{
return v___x_4453_;
}
}
else
{
uint8_t v___x_4457_; 
v___x_4457_ = 0;
return v___x_4457_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object* v_a_4458_, lean_object* v_as_4459_, lean_object* v_i_4460_, lean_object* v_stop_4461_){
_start:
{
size_t v_i_boxed_4462_; size_t v_stop_boxed_4463_; uint8_t v_res_4464_; lean_object* v_r_4465_; 
v_i_boxed_4462_ = lean_unbox_usize(v_i_4460_);
lean_dec(v_i_4460_);
v_stop_boxed_4463_ = lean_unbox_usize(v_stop_4461_);
lean_dec(v_stop_4461_);
v_res_4464_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4458_, v_as_4459_, v_i_boxed_4462_, v_stop_boxed_4463_);
lean_dec_ref(v_as_4459_);
lean_dec(v_a_4458_);
v_r_4465_ = lean_box(v_res_4464_);
return v_r_4465_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object* v_as_4466_, lean_object* v_a_4467_){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; uint8_t v___x_4470_; 
v___x_4468_ = lean_unsigned_to_nat(0u);
v___x_4469_ = lean_array_get_size(v_as_4466_);
v___x_4470_ = lean_nat_dec_lt(v___x_4468_, v___x_4469_);
if (v___x_4470_ == 0)
{
return v___x_4470_;
}
else
{
if (v___x_4470_ == 0)
{
return v___x_4470_;
}
else
{
size_t v___x_4471_; size_t v___x_4472_; uint8_t v___x_4473_; 
v___x_4471_ = ((size_t)0ULL);
v___x_4472_ = lean_usize_of_nat(v___x_4469_);
v___x_4473_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4467_, v_as_4466_, v___x_4471_, v___x_4472_);
return v___x_4473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object* v_as_4474_, lean_object* v_a_4475_){
_start:
{
uint8_t v_res_4476_; lean_object* v_r_4477_; 
v_res_4476_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_as_4474_, v_a_4475_);
lean_dec(v_a_4475_);
lean_dec_ref(v_as_4474_);
v_r_4477_ = lean_box(v_res_4476_);
return v_r_4477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object* v_fvars_4478_, lean_object* v_e_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_){
_start:
{
lean_object* v___x_4488_; 
v___x_4488_ = l_Lean_Expr_getAppFn(v_e_4479_);
if (lean_obj_tag(v___x_4488_) == 1)
{
lean_object* v_fvarId_4489_; uint8_t v___x_4490_; 
v_fvarId_4489_ = lean_ctor_get(v___x_4488_, 0);
lean_inc(v_fvarId_4489_);
lean_dec_ref(v___x_4488_);
v___x_4490_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_fvars_4478_, v_fvarId_4489_);
if (v___x_4490_ == 0)
{
lean_dec(v_fvarId_4489_);
lean_dec_ref(v___y_4480_);
lean_dec_ref(v_e_4479_);
goto v___jp_4485_;
}
else
{
uint8_t v___x_4491_; lean_object* v___x_4492_; 
v___x_4491_ = 0;
v___x_4492_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_4489_, v___x_4491_, v___y_4480_, v___y_4482_, v___y_4483_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_a_4493_; 
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc(v_a_4493_);
lean_dec_ref(v___x_4492_);
if (lean_obj_tag(v_a_4493_) == 1)
{
lean_object* v_val_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4517_; 
v_val_4494_ = lean_ctor_get(v_a_4493_, 0);
v_isSharedCheck_4517_ = !lean_is_exclusive(v_a_4493_);
if (v_isSharedCheck_4517_ == 0)
{
v___x_4496_ = v_a_4493_;
v_isShared_4497_ = v_isSharedCheck_4517_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_val_4494_);
lean_dec(v_a_4493_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4517_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4498_; lean_object* v_a_4499_; lean_object* v___x_4501_; uint8_t v_isShared_4502_; uint8_t v_isSharedCheck_4516_; 
v___x_4498_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_4494_, v___y_4481_);
v_a_4499_ = lean_ctor_get(v___x_4498_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4498_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4501_ = v___x_4498_;
v_isShared_4502_ = v_isSharedCheck_4516_;
goto v_resetjp_4500_;
}
else
{
lean_inc(v_a_4499_);
lean_dec(v___x_4498_);
v___x_4501_ = lean_box(0);
v_isShared_4502_ = v_isSharedCheck_4516_;
goto v_resetjp_4500_;
}
v_resetjp_4500_:
{
lean_object* v_dummy_4503_; lean_object* v_nargs_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4511_; 
v_dummy_4503_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4504_ = l_Lean_Expr_getAppNumArgs(v_e_4479_);
lean_inc(v_nargs_4504_);
v___x_4505_ = lean_mk_array(v_nargs_4504_, v_dummy_4503_);
v___x_4506_ = lean_unsigned_to_nat(1u);
v___x_4507_ = lean_nat_sub(v_nargs_4504_, v___x_4506_);
lean_dec(v_nargs_4504_);
v___x_4508_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_4479_, v___x_4505_, v___x_4507_);
v___x_4509_ = l_Lean_Expr_beta(v_a_4499_, v___x_4508_);
if (v_isShared_4497_ == 0)
{
lean_ctor_set(v___x_4496_, 0, v___x_4509_);
v___x_4511_ = v___x_4496_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v___x_4509_);
v___x_4511_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
lean_object* v___x_4513_; 
if (v_isShared_4502_ == 0)
{
lean_ctor_set(v___x_4501_, 0, v___x_4511_);
v___x_4513_ = v___x_4501_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v___x_4511_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
}
}
else
{
lean_dec(v_a_4493_);
lean_dec_ref(v_e_4479_);
goto v___jp_4485_;
}
}
else
{
lean_object* v_a_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4525_; 
lean_dec_ref(v_e_4479_);
v_a_4518_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4525_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4525_ == 0)
{
v___x_4520_ = v___x_4492_;
v_isShared_4521_ = v_isSharedCheck_4525_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_a_4518_);
lean_dec(v___x_4492_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4525_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4523_; 
if (v_isShared_4521_ == 0)
{
v___x_4523_ = v___x_4520_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4524_; 
v_reuseFailAlloc_4524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4524_, 0, v_a_4518_);
v___x_4523_ = v_reuseFailAlloc_4524_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
return v___x_4523_;
}
}
}
}
}
else
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
lean_dec_ref(v___x_4488_);
lean_dec_ref(v___y_4480_);
lean_dec_ref(v_e_4479_);
v___x_4526_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4526_);
return v___x_4527_;
}
v___jp_4485_:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; 
v___x_4486_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4486_);
return v___x_4487_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object* v_fvars_4528_, lean_object* v_e_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
lean_object* v_res_4535_; 
v_res_4535_ = l_Lean_Meta_zetaDeltaFVars___lam__1(v_fvars_4528_, v_e_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec(v___y_4531_);
lean_dec_ref(v_fvars_4528_);
return v_res_4535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object* v_e_4536_, lean_object* v_fvars_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_, lean_object* v_a_4540_, lean_object* v_a_4541_){
_start:
{
lean_object* v___f_4543_; lean_object* v_pre_4544_; uint8_t v___x_4545_; lean_object* v___x_4546_; 
v___f_4543_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v_pre_4544_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaDeltaFVars___lam__1___boxed), 7, 1);
lean_closure_set(v_pre_4544_, 0, v_fvars_4537_);
v___x_4545_ = 0;
v___x_4546_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4536_, v_pre_4544_, v___f_4543_, v___x_4545_, v___x_4545_, v_a_4538_, v_a_4539_, v_a_4540_, v_a_4541_);
return v___x_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object* v_e_4547_, lean_object* v_fvars_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_, lean_object* v_a_4552_, lean_object* v_a_4553_){
_start:
{
lean_object* v_res_4554_; 
v_res_4554_ = l_Lean_Meta_zetaDeltaFVars(v_e_4547_, v_fvars_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_);
return v_res_4554_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4555_; 
v___x_4555_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4555_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4556_; lean_object* v___x_4557_; 
v___x_4556_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0);
v___x_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4556_);
return v___x_4557_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4558_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1);
v___x_4559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4558_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
return v___x_4559_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object* v_env_4560_, lean_object* v___y_4561_){
_start:
{
lean_object* v___x_4563_; lean_object* v_nextMacroScope_4564_; lean_object* v_ngen_4565_; lean_object* v_auxDeclNGen_4566_; lean_object* v_traceState_4567_; lean_object* v_messages_4568_; lean_object* v_infoState_4569_; lean_object* v_snapshotTasks_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4581_; 
v___x_4563_ = lean_st_ref_take(v___y_4561_);
v_nextMacroScope_4564_ = lean_ctor_get(v___x_4563_, 1);
v_ngen_4565_ = lean_ctor_get(v___x_4563_, 2);
v_auxDeclNGen_4566_ = lean_ctor_get(v___x_4563_, 3);
v_traceState_4567_ = lean_ctor_get(v___x_4563_, 4);
v_messages_4568_ = lean_ctor_get(v___x_4563_, 6);
v_infoState_4569_ = lean_ctor_get(v___x_4563_, 7);
v_snapshotTasks_4570_ = lean_ctor_get(v___x_4563_, 8);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4581_ == 0)
{
lean_object* v_unused_4582_; lean_object* v_unused_4583_; 
v_unused_4582_ = lean_ctor_get(v___x_4563_, 5);
lean_dec(v_unused_4582_);
v_unused_4583_ = lean_ctor_get(v___x_4563_, 0);
lean_dec(v_unused_4583_);
v___x_4572_ = v___x_4563_;
v_isShared_4573_ = v_isSharedCheck_4581_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_snapshotTasks_4570_);
lean_inc(v_infoState_4569_);
lean_inc(v_messages_4568_);
lean_inc(v_traceState_4567_);
lean_inc(v_auxDeclNGen_4566_);
lean_inc(v_ngen_4565_);
lean_inc(v_nextMacroScope_4564_);
lean_dec(v___x_4563_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4581_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4574_; lean_object* v___x_4576_; 
v___x_4574_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 5, v___x_4574_);
lean_ctor_set(v___x_4572_, 0, v_env_4560_);
v___x_4576_ = v___x_4572_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v_env_4560_);
lean_ctor_set(v_reuseFailAlloc_4580_, 1, v_nextMacroScope_4564_);
lean_ctor_set(v_reuseFailAlloc_4580_, 2, v_ngen_4565_);
lean_ctor_set(v_reuseFailAlloc_4580_, 3, v_auxDeclNGen_4566_);
lean_ctor_set(v_reuseFailAlloc_4580_, 4, v_traceState_4567_);
lean_ctor_set(v_reuseFailAlloc_4580_, 5, v___x_4574_);
lean_ctor_set(v_reuseFailAlloc_4580_, 6, v_messages_4568_);
lean_ctor_set(v_reuseFailAlloc_4580_, 7, v_infoState_4569_);
lean_ctor_set(v_reuseFailAlloc_4580_, 8, v_snapshotTasks_4570_);
v___x_4576_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v___x_4577_ = lean_st_ref_set(v___y_4561_, v___x_4576_);
v___x_4578_ = lean_box(0);
v___x_4579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4579_, 0, v___x_4578_);
return v___x_4579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object* v_env_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
lean_object* v_res_4587_; 
v_res_4587_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4584_, v___y_4585_);
lean_dec(v___y_4585_);
return v_res_4587_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object* v_env_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_){
_start:
{
lean_object* v___x_4592_; 
v___x_4592_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4588_, v___y_4590_);
return v___x_4592_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object* v_env_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v_res_4597_; 
v_res_4597_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(v_env_4593_, v___y_4594_, v___y_4595_);
lean_dec(v___y_4595_);
lean_dec_ref(v___y_4594_);
return v_res_4597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object* v_env_4598_, lean_object* v___x_4599_, uint8_t v___x_4600_, lean_object* v_e_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_){
_start:
{
if (lean_obj_tag(v_e_4601_) == 4)
{
lean_object* v_declName_4605_; lean_object* v_us_4606_; uint8_t v___x_4607_; uint8_t v___x_4608_; 
v_declName_4605_ = lean_ctor_get(v_e_4601_, 0);
v_us_4606_ = lean_ctor_get(v_e_4601_, 1);
v___x_4607_ = 1;
lean_inc(v_declName_4605_);
v___x_4608_ = l_Lean_Environment_contains(v_env_4598_, v_declName_4605_, v___x_4607_);
if (v___x_4608_ == 0)
{
lean_object* v___x_4609_; 
lean_inc(v_declName_4605_);
v___x_4609_ = l_Lean_Environment_find_x3f(v___x_4599_, v_declName_4605_, v___x_4600_);
if (lean_obj_tag(v___x_4609_) == 1)
{
lean_object* v_val_4610_; lean_object* v___x_4612_; uint8_t v_isShared_4613_; uint8_t v_isSharedCheck_4639_; 
v_val_4610_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4639_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4639_ == 0)
{
v___x_4612_ = v___x_4609_;
v_isShared_4613_ = v_isSharedCheck_4639_;
goto v_resetjp_4611_;
}
else
{
lean_inc(v_val_4610_);
lean_dec(v___x_4609_);
v___x_4612_ = lean_box(0);
v_isShared_4613_ = v_isSharedCheck_4639_;
goto v_resetjp_4611_;
}
v_resetjp_4611_:
{
uint8_t v___x_4614_; 
v___x_4614_ = l_Lean_ConstantInfo_hasValue(v_val_4610_, v___x_4600_);
if (v___x_4614_ == 0)
{
lean_object* v___x_4616_; 
lean_dec(v_val_4610_);
if (v_isShared_4613_ == 0)
{
lean_ctor_set_tag(v___x_4612_, 0);
lean_ctor_set(v___x_4612_, 0, v_e_4601_);
v___x_4616_ = v___x_4612_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_e_4601_);
v___x_4616_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
lean_object* v___x_4617_; 
v___x_4617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4617_, 0, v___x_4616_);
return v___x_4617_;
}
}
else
{
lean_object* v___x_4619_; 
lean_inc(v_us_4606_);
lean_dec_ref(v_e_4601_);
v___x_4619_ = l_Lean_Core_instantiateValueLevelParams(v_val_4610_, v_us_4606_, v___y_4602_, v___y_4603_);
lean_dec(v_val_4610_);
if (lean_obj_tag(v___x_4619_) == 0)
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4630_; 
v_a_4620_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4630_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4630_ == 0)
{
v___x_4622_ = v___x_4619_;
v_isShared_4623_ = v_isSharedCheck_4630_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v___x_4619_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4630_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
if (v_isShared_4613_ == 0)
{
lean_ctor_set(v___x_4612_, 0, v_a_4620_);
v___x_4625_ = v___x_4612_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4629_; 
v_reuseFailAlloc_4629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4629_, 0, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4629_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
lean_object* v___x_4627_; 
if (v_isShared_4623_ == 0)
{
lean_ctor_set(v___x_4622_, 0, v___x_4625_);
v___x_4627_ = v___x_4622_;
goto v_reusejp_4626_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v___x_4625_);
v___x_4627_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4626_;
}
v_reusejp_4626_:
{
return v___x_4627_;
}
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
lean_del_object(v___x_4612_);
v_a_4631_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4619_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4619_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4636_; 
if (v_isShared_4634_ == 0)
{
v___x_4636_ = v___x_4633_;
goto v_reusejp_4635_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v_a_4631_);
v___x_4636_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4635_;
}
v_reusejp_4635_:
{
return v___x_4636_;
}
}
}
}
}
}
else
{
lean_object* v___x_4640_; lean_object* v___x_4641_; 
lean_dec(v___x_4609_);
v___x_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4640_, 0, v_e_4601_);
v___x_4641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4640_);
return v___x_4641_;
}
}
else
{
lean_object* v___x_4642_; lean_object* v___x_4643_; 
lean_dec_ref(v___x_4599_);
v___x_4642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4642_, 0, v_e_4601_);
v___x_4643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4642_);
return v___x_4643_;
}
}
else
{
lean_object* v___x_4644_; lean_object* v___x_4645_; 
lean_dec_ref(v_e_4601_);
lean_dec_ref(v___x_4599_);
lean_dec_ref(v_env_4598_);
v___x_4644_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
return v___x_4645_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object* v_env_4646_, lean_object* v___x_4647_, lean_object* v___x_4648_, lean_object* v_e_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_){
_start:
{
uint8_t v___x_2154__boxed_4653_; lean_object* v_res_4654_; 
v___x_2154__boxed_4653_ = lean_unbox(v___x_4648_);
v_res_4654_ = l_Lean_Meta_unfoldDeclsFrom___lam__1(v_env_4646_, v___x_4647_, v___x_2154__boxed_4653_, v_e_4649_, v___y_4650_, v___y_4651_);
lean_dec(v___y_4651_);
lean_dec_ref(v___y_4650_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object* v_biggerEnv_4655_, lean_object* v_e_4656_, lean_object* v___f_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_){
_start:
{
lean_object* v___x_4661_; uint8_t v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v_env_4665_; lean_object* v___x_4666_; lean_object* v___f_4667_; lean_object* v___x_4668_; 
v___x_4661_ = lean_st_ref_get(v___y_4659_);
v___x_4662_ = 0;
v___x_4663_ = l_Lean_Environment_setExporting(v_biggerEnv_4655_, v___x_4662_);
lean_inc_ref(v___x_4663_);
v___x_4664_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v___x_4663_, v___y_4659_);
lean_dec_ref(v___x_4664_);
v_env_4665_ = lean_ctor_get(v___x_4661_, 0);
lean_inc_ref(v_env_4665_);
lean_dec(v___x_4661_);
v___x_4666_ = lean_box(v___x_4662_);
v___f_4667_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4667_, 0, v_env_4665_);
lean_closure_set(v___f_4667_, 1, v___x_4663_);
lean_closure_set(v___f_4667_, 2, v___x_4666_);
v___x_4668_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_4656_, v___f_4667_, v___f_4657_, v___y_4658_, v___y_4659_);
return v___x_4668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object* v_biggerEnv_4669_, lean_object* v_e_4670_, lean_object* v___f_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l_Lean_Meta_unfoldDeclsFrom___lam__0(v_biggerEnv_4669_, v_e_4670_, v___f_4671_, v___y_4672_, v___y_4673_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object* v_env_4676_, lean_object* v_x_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
lean_object* v___x_4681_; lean_object* v_env_4682_; lean_object* v_a_4684_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4681_ = lean_st_ref_get(v___y_4679_);
v_env_4682_ = lean_ctor_get(v___x_4681_, 0);
lean_inc_ref(v_env_4682_);
lean_dec(v___x_4681_);
v___x_4694_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4676_, v___y_4679_);
lean_dec_ref(v___x_4694_);
lean_inc(v___y_4679_);
v___x_4695_ = lean_apply_3(v_x_4677_, v___y_4678_, v___y_4679_, lean_box(0));
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; lean_object* v___x_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4704_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4696_);
lean_dec_ref(v___x_4695_);
v___x_4697_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4682_, v___y_4679_);
lean_dec(v___y_4679_);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4697_);
if (v_isSharedCheck_4704_ == 0)
{
lean_object* v_unused_4705_; 
v_unused_4705_ = lean_ctor_get(v___x_4697_, 0);
lean_dec(v_unused_4705_);
v___x_4699_ = v___x_4697_;
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
else
{
lean_dec(v___x_4697_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
lean_ctor_set(v___x_4699_, 0, v_a_4696_);
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4696_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
else
{
lean_object* v_a_4706_; 
v_a_4706_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4706_);
lean_dec_ref(v___x_4695_);
v_a_4684_ = v_a_4706_;
goto v___jp_4683_;
}
v___jp_4683_:
{
lean_object* v___x_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4692_; 
v___x_4685_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4682_, v___y_4679_);
lean_dec(v___y_4679_);
v_isSharedCheck_4692_ = !lean_is_exclusive(v___x_4685_);
if (v_isSharedCheck_4692_ == 0)
{
lean_object* v_unused_4693_; 
v_unused_4693_ = lean_ctor_get(v___x_4685_, 0);
lean_dec(v_unused_4693_);
v___x_4687_ = v___x_4685_;
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
else
{
lean_dec(v___x_4685_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
lean_object* v___x_4690_; 
if (v_isShared_4688_ == 0)
{
lean_ctor_set_tag(v___x_4687_, 1);
lean_ctor_set(v___x_4687_, 0, v_a_4684_);
v___x_4690_ = v___x_4687_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v_a_4684_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object* v_env_4707_, lean_object* v_x_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_){
_start:
{
lean_object* v_res_4712_; 
v_res_4712_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_4707_, v_x_4708_, v___y_4709_, v___y_4710_);
return v_res_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object* v_biggerEnv_4713_, lean_object* v_e_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_){
_start:
{
lean_object* v___x_4718_; lean_object* v_env_4719_; lean_object* v___f_4720_; lean_object* v___f_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4718_ = lean_st_ref_get(v_a_4716_);
v_env_4719_ = lean_ctor_get(v___x_4718_, 0);
lean_inc_ref(v_env_4719_);
lean_dec(v___x_4718_);
v___f_4720_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_4721_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed), 6, 3);
lean_closure_set(v___f_4721_, 0, v_biggerEnv_4713_);
lean_closure_set(v___f_4721_, 1, v_e_4714_);
lean_closure_set(v___f_4721_, 2, v___f_4720_);
v___x_4722_ = l_Lean_Environment_unlockAsync(v_env_4719_);
v___x_4723_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v___x_4722_, v___f_4721_, v_a_4715_, v_a_4716_);
return v___x_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object* v_biggerEnv_4724_, lean_object* v_e_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_, lean_object* v_a_4728_){
_start:
{
lean_object* v_res_4729_; 
v_res_4729_ = l_Lean_Meta_unfoldDeclsFrom(v_biggerEnv_4724_, v_e_4725_, v_a_4726_, v_a_4727_);
return v_res_4729_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object* v_00_u03b1_4730_, lean_object* v_env_4731_, lean_object* v_x_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_){
_start:
{
lean_object* v___x_4736_; 
v___x_4736_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_4731_, v_x_4732_, v___y_4733_, v___y_4734_);
return v___x_4736_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object* v_00_u03b1_4737_, lean_object* v_env_4738_, lean_object* v_x_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_){
_start:
{
lean_object* v_res_4743_; 
v_res_4743_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(v_00_u03b1_4737_, v_env_4738_, v_x_4739_, v___y_4740_, v___y_4741_);
return v_res_4743_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object* v_af_4744_, lean_object* v_axs_4745_, lean_object* v_numSectionVars_4746_, lean_object* v_as_4747_, size_t v_i_4748_, size_t v_stop_4749_){
_start:
{
uint8_t v___x_4750_; 
v___x_4750_ = lean_usize_dec_eq(v_i_4748_, v_stop_4749_);
if (v___x_4750_ == 0)
{
uint8_t v___x_4751_; uint8_t v___y_4753_; lean_object* v___x_4757_; lean_object* v___x_4758_; uint8_t v___x_4759_; 
v___x_4751_ = 1;
v___x_4757_ = lean_array_uget_borrowed(v_as_4747_, v_i_4748_);
v___x_4758_ = l_Lean_Expr_constName_x21(v_af_4744_);
v___x_4759_ = lean_name_eq(v___x_4758_, v___x_4757_);
lean_dec(v___x_4758_);
if (v___x_4759_ == 0)
{
v___y_4753_ = v___x_4759_;
goto v___jp_4752_;
}
else
{
lean_object* v___x_4760_; uint8_t v___x_4761_; 
v___x_4760_ = lean_array_get_size(v_axs_4745_);
v___x_4761_ = lean_nat_dec_le(v___x_4760_, v_numSectionVars_4746_);
v___y_4753_ = v___x_4761_;
goto v___jp_4752_;
}
v___jp_4752_:
{
if (v___y_4753_ == 0)
{
size_t v___x_4754_; size_t v___x_4755_; 
v___x_4754_ = ((size_t)1ULL);
v___x_4755_ = lean_usize_add(v_i_4748_, v___x_4754_);
v_i_4748_ = v___x_4755_;
goto _start;
}
else
{
return v___x_4751_;
}
}
}
else
{
uint8_t v___x_4762_; 
v___x_4762_ = 0;
return v___x_4762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object* v_af_4763_, lean_object* v_axs_4764_, lean_object* v_numSectionVars_4765_, lean_object* v_as_4766_, lean_object* v_i_4767_, lean_object* v_stop_4768_){
_start:
{
size_t v_i_boxed_4769_; size_t v_stop_boxed_4770_; uint8_t v_res_4771_; lean_object* v_r_4772_; 
v_i_boxed_4769_ = lean_unbox_usize(v_i_4767_);
lean_dec(v_i_4767_);
v_stop_boxed_4770_ = lean_unbox_usize(v_stop_4768_);
lean_dec(v_stop_4768_);
v_res_4771_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_af_4763_, v_axs_4764_, v_numSectionVars_4765_, v_as_4766_, v_i_boxed_4769_, v_stop_boxed_4770_);
lean_dec_ref(v_as_4766_);
lean_dec(v_numSectionVars_4765_);
lean_dec_ref(v_axs_4764_);
lean_dec_ref(v_af_4763_);
v_r_4772_ = lean_box(v_res_4771_);
return v_r_4772_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object* v_fnNames_4773_, lean_object* v_numSectionVars_4774_, lean_object* v_x_4775_, lean_object* v_x_4776_, lean_object* v_x_4777_){
_start:
{
if (lean_obj_tag(v_x_4775_) == 5)
{
lean_object* v_fn_4778_; lean_object* v_arg_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
v_fn_4778_ = lean_ctor_get(v_x_4775_, 0);
lean_inc_ref(v_fn_4778_);
v_arg_4779_ = lean_ctor_get(v_x_4775_, 1);
lean_inc_ref(v_arg_4779_);
lean_dec_ref(v_x_4775_);
v___x_4780_ = lean_array_set(v_x_4776_, v_x_4777_, v_arg_4779_);
v___x_4781_ = lean_unsigned_to_nat(1u);
v___x_4782_ = lean_nat_sub(v_x_4777_, v___x_4781_);
lean_dec(v_x_4777_);
v_x_4775_ = v_fn_4778_;
v_x_4776_ = v___x_4780_;
v_x_4777_ = v___x_4782_;
goto _start;
}
else
{
uint8_t v___x_4784_; 
lean_dec(v_x_4777_);
v___x_4784_ = l_Lean_Expr_isConst(v_x_4775_);
if (v___x_4784_ == 0)
{
lean_dec_ref(v_x_4776_);
lean_dec_ref(v_x_4775_);
return v___x_4784_;
}
else
{
lean_object* v___x_4785_; lean_object* v___x_4786_; uint8_t v___x_4787_; 
v___x_4785_ = lean_unsigned_to_nat(0u);
v___x_4786_ = lean_array_get_size(v_fnNames_4773_);
v___x_4787_ = lean_nat_dec_lt(v___x_4785_, v___x_4786_);
if (v___x_4787_ == 0)
{
lean_dec_ref(v_x_4776_);
lean_dec_ref(v_x_4775_);
return v___x_4787_;
}
else
{
if (v___x_4787_ == 0)
{
lean_dec_ref(v_x_4776_);
lean_dec_ref(v_x_4775_);
return v___x_4787_;
}
else
{
size_t v___x_4788_; size_t v___x_4789_; uint8_t v___x_4790_; 
v___x_4788_ = ((size_t)0ULL);
v___x_4789_ = lean_usize_of_nat(v___x_4786_);
v___x_4790_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_4775_, v_x_4776_, v_numSectionVars_4774_, v_fnNames_4773_, v___x_4788_, v___x_4789_);
lean_dec_ref(v_x_4776_);
lean_dec_ref(v_x_4775_);
return v___x_4790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object* v_fnNames_4791_, lean_object* v_numSectionVars_4792_, lean_object* v_x_4793_, lean_object* v_x_4794_, lean_object* v_x_4795_){
_start:
{
uint8_t v_res_4796_; lean_object* v_r_4797_; 
v_res_4796_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_4791_, v_numSectionVars_4792_, v_x_4793_, v_x_4794_, v_x_4795_);
lean_dec(v_numSectionVars_4792_);
lean_dec_ref(v_fnNames_4791_);
v_r_4797_ = lean_box(v_res_4796_);
return v_r_4797_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object* v_numSectionVars_4798_, lean_object* v_fnNames_4799_, lean_object* v_x_4800_, lean_object* v_x_4801_, lean_object* v_x_4802_){
_start:
{
if (lean_obj_tag(v_x_4800_) == 5)
{
lean_object* v_fn_4803_; lean_object* v_arg_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; uint8_t v___x_4808_; 
v_fn_4803_ = lean_ctor_get(v_x_4800_, 0);
lean_inc_ref(v_fn_4803_);
v_arg_4804_ = lean_ctor_get(v_x_4800_, 1);
lean_inc_ref(v_arg_4804_);
lean_dec_ref(v_x_4800_);
v___x_4805_ = lean_array_set(v_x_4801_, v_x_4802_, v_arg_4804_);
v___x_4806_ = lean_unsigned_to_nat(1u);
v___x_4807_ = lean_nat_sub(v_x_4802_, v___x_4806_);
v___x_4808_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_4799_, v_numSectionVars_4798_, v_fn_4803_, v___x_4805_, v___x_4807_);
return v___x_4808_;
}
else
{
uint8_t v___x_4809_; 
v___x_4809_ = l_Lean_Expr_isConst(v_x_4800_);
if (v___x_4809_ == 0)
{
lean_dec_ref(v_x_4801_);
lean_dec_ref(v_x_4800_);
return v___x_4809_;
}
else
{
lean_object* v___x_4810_; lean_object* v___x_4811_; uint8_t v___x_4812_; 
v___x_4810_ = lean_unsigned_to_nat(0u);
v___x_4811_ = lean_array_get_size(v_fnNames_4799_);
v___x_4812_ = lean_nat_dec_lt(v___x_4810_, v___x_4811_);
if (v___x_4812_ == 0)
{
lean_dec_ref(v_x_4801_);
lean_dec_ref(v_x_4800_);
return v___x_4812_;
}
else
{
if (v___x_4812_ == 0)
{
lean_dec_ref(v_x_4801_);
lean_dec_ref(v_x_4800_);
return v___x_4812_;
}
else
{
size_t v___x_4813_; size_t v___x_4814_; uint8_t v___x_4815_; 
v___x_4813_ = ((size_t)0ULL);
v___x_4814_ = lean_usize_of_nat(v___x_4811_);
v___x_4815_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_4800_, v_x_4801_, v_numSectionVars_4798_, v_fnNames_4799_, v___x_4813_, v___x_4814_);
lean_dec_ref(v_x_4801_);
lean_dec_ref(v_x_4800_);
return v___x_4815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object* v_numSectionVars_4816_, lean_object* v_fnNames_4817_, lean_object* v_x_4818_, lean_object* v_x_4819_, lean_object* v_x_4820_){
_start:
{
uint8_t v_res_4821_; lean_object* v_r_4822_; 
v_res_4821_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_4816_, v_fnNames_4817_, v_x_4818_, v_x_4819_, v_x_4820_);
lean_dec(v_x_4820_);
lean_dec_ref(v_fnNames_4817_);
lean_dec(v_numSectionVars_4816_);
v_r_4822_ = lean_box(v_res_4821_);
return v_r_4822_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object* v_fnNames_4823_, lean_object* v_numSectionVars_4824_, lean_object* v_a_4825_){
_start:
{
lean_object* v_dummy_4826_; lean_object* v_nargs_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; uint8_t v___x_4831_; 
v_dummy_4826_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4827_ = l_Lean_Expr_getAppNumArgs(v_a_4825_);
lean_inc(v_nargs_4827_);
v___x_4828_ = lean_mk_array(v_nargs_4827_, v_dummy_4826_);
v___x_4829_ = lean_unsigned_to_nat(1u);
v___x_4830_ = lean_nat_sub(v_nargs_4827_, v___x_4829_);
lean_dec(v_nargs_4827_);
v___x_4831_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_4824_, v_fnNames_4823_, v_a_4825_, v___x_4828_, v___x_4830_);
lean_dec(v___x_4830_);
return v___x_4831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object* v_fnNames_4832_, lean_object* v_numSectionVars_4833_, lean_object* v_a_4834_){
_start:
{
uint8_t v_res_4835_; lean_object* v_r_4836_; 
v_res_4835_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_4832_, v_numSectionVars_4833_, v_a_4834_);
lean_dec(v_numSectionVars_4833_);
lean_dec_ref(v_fnNames_4832_);
v_r_4836_ = lean_box(v_res_4835_);
return v_r_4836_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object* v_fnNames_4837_, lean_object* v_numSectionVars_4838_, lean_object* v_as_4839_, size_t v_i_4840_, size_t v_stop_4841_){
_start:
{
uint8_t v___x_4842_; 
v___x_4842_ = lean_usize_dec_eq(v_i_4840_, v_stop_4841_);
if (v___x_4842_ == 0)
{
lean_object* v___x_4843_; uint8_t v___x_4844_; 
v___x_4843_ = lean_array_uget_borrowed(v_as_4839_, v_i_4840_);
lean_inc(v___x_4843_);
v___x_4844_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_4837_, v_numSectionVars_4838_, v___x_4843_);
if (v___x_4844_ == 0)
{
size_t v___x_4845_; size_t v___x_4846_; 
v___x_4845_ = ((size_t)1ULL);
v___x_4846_ = lean_usize_add(v_i_4840_, v___x_4845_);
v_i_4840_ = v___x_4846_;
goto _start;
}
else
{
return v___x_4844_;
}
}
else
{
uint8_t v___x_4848_; 
v___x_4848_ = 0;
return v___x_4848_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object* v_fnNames_4849_, lean_object* v_numSectionVars_4850_, lean_object* v_as_4851_, lean_object* v_i_4852_, lean_object* v_stop_4853_){
_start:
{
size_t v_i_boxed_4854_; size_t v_stop_boxed_4855_; uint8_t v_res_4856_; lean_object* v_r_4857_; 
v_i_boxed_4854_ = lean_unbox_usize(v_i_4852_);
lean_dec(v_i_4852_);
v_stop_boxed_4855_ = lean_unbox_usize(v_stop_4853_);
lean_dec(v_stop_4853_);
v_res_4856_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_4849_, v_numSectionVars_4850_, v_as_4851_, v_i_boxed_4854_, v_stop_boxed_4855_);
lean_dec_ref(v_as_4851_);
lean_dec(v_numSectionVars_4850_);
lean_dec_ref(v_fnNames_4849_);
v_r_4857_ = lean_box(v_res_4856_);
return v_r_4857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object* v_fnNames_4858_, lean_object* v_numSectionVars_4859_, lean_object* v___x_4860_, lean_object* v_x_4861_, lean_object* v_x_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_){
_start:
{
if (lean_obj_tag(v_x_4861_) == 5)
{
lean_object* v_fn_4869_; lean_object* v_arg_4870_; lean_object* v___x_4871_; 
v_fn_4869_ = lean_ctor_get(v_x_4861_, 0);
lean_inc_ref(v_fn_4869_);
v_arg_4870_ = lean_ctor_get(v_x_4861_, 1);
lean_inc_ref(v_arg_4870_);
lean_dec_ref(v_x_4861_);
v___x_4871_ = lean_array_push(v_x_4862_, v_arg_4870_);
v_x_4861_ = v_fn_4869_;
v_x_4862_ = v___x_4871_;
goto _start;
}
else
{
uint8_t v___x_4873_; 
v___x_4873_ = l_Lean_Expr_isConst(v_x_4861_);
if (v___x_4873_ == 0)
{
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec_ref(v___x_4860_);
goto v___jp_4866_;
}
else
{
lean_object* v___x_4874_; lean_object* v___x_4875_; uint8_t v___x_4876_; 
v___x_4874_ = lean_unsigned_to_nat(0u);
v___x_4875_ = lean_array_get_size(v_x_4862_);
v___x_4876_ = lean_nat_dec_lt(v___x_4874_, v___x_4875_);
if (v___x_4876_ == 0)
{
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec_ref(v___x_4860_);
goto v___jp_4866_;
}
else
{
if (v___x_4876_ == 0)
{
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec_ref(v___x_4860_);
goto v___jp_4866_;
}
else
{
size_t v___x_4877_; size_t v___x_4878_; uint8_t v___x_4879_; 
v___x_4877_ = ((size_t)0ULL);
v___x_4878_ = lean_usize_of_nat(v___x_4875_);
v___x_4879_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_4858_, v_numSectionVars_4859_, v_x_4862_, v___x_4877_, v___x_4878_);
if (v___x_4879_ == 0)
{
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec_ref(v___x_4860_);
goto v___jp_4866_;
}
else
{
lean_object* v___x_4880_; uint8_t v___x_4881_; lean_object* v___x_4882_; 
v___x_4880_ = l_Lean_Expr_constName_x21(v_x_4861_);
v___x_4881_ = 0;
v___x_4882_ = l_Lean_Environment_find_x3f(v___x_4860_, v___x_4880_, v___x_4881_);
if (lean_obj_tag(v___x_4882_) == 1)
{
lean_object* v_val_4883_; 
v_val_4883_ = lean_ctor_get(v___x_4882_, 0);
lean_inc(v_val_4883_);
lean_dec_ref(v___x_4882_);
if (lean_obj_tag(v_val_4883_) == 2)
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4887_; uint8_t v_isShared_4888_; uint8_t v_isSharedCheck_4909_; 
v___x_4884_ = l_Lean_Expr_constLevels_x21(v_x_4861_);
lean_dec_ref(v_x_4861_);
v___x_4885_ = l_Lean_Core_instantiateValueLevelParams(v_val_4883_, v___x_4884_, v___y_4863_, v___y_4864_);
v_isSharedCheck_4909_ = !lean_is_exclusive(v_val_4883_);
if (v_isSharedCheck_4909_ == 0)
{
lean_object* v_unused_4910_; 
v_unused_4910_ = lean_ctor_get(v_val_4883_, 0);
lean_dec(v_unused_4910_);
v___x_4887_ = v_val_4883_;
v_isShared_4888_ = v_isSharedCheck_4909_;
goto v_resetjp_4886_;
}
else
{
lean_dec(v_val_4883_);
v___x_4887_ = lean_box(0);
v_isShared_4888_ = v_isSharedCheck_4909_;
goto v_resetjp_4886_;
}
v_resetjp_4886_:
{
if (lean_obj_tag(v___x_4885_) == 0)
{
lean_object* v_a_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4900_; 
v_a_4889_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_4900_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_4900_ == 0)
{
v___x_4891_ = v___x_4885_;
v_isShared_4892_ = v_isSharedCheck_4900_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_a_4889_);
lean_dec(v___x_4885_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4900_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v___x_4893_; lean_object* v___x_4895_; 
v___x_4893_ = l_Lean_Expr_betaRev(v_a_4889_, v_x_4862_, v___x_4881_, v___x_4881_);
lean_dec_ref(v_x_4862_);
if (v_isShared_4888_ == 0)
{
lean_ctor_set_tag(v___x_4887_, 1);
lean_ctor_set(v___x_4887_, 0, v___x_4893_);
v___x_4895_ = v___x_4887_;
goto v_reusejp_4894_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v___x_4893_);
v___x_4895_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4894_;
}
v_reusejp_4894_:
{
lean_object* v___x_4897_; 
if (v_isShared_4892_ == 0)
{
lean_ctor_set(v___x_4891_, 0, v___x_4895_);
v___x_4897_ = v___x_4891_;
goto v_reusejp_4896_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v___x_4895_);
v___x_4897_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4896_;
}
v_reusejp_4896_:
{
return v___x_4897_;
}
}
}
}
else
{
lean_object* v_a_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4908_; 
lean_del_object(v___x_4887_);
lean_dec_ref(v_x_4862_);
v_a_4901_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4903_ = v___x_4885_;
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
else
{
lean_inc(v_a_4901_);
lean_dec(v___x_4885_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v___x_4906_; 
if (v_isShared_4904_ == 0)
{
v___x_4906_ = v___x_4903_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v_a_4901_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
}
else
{
lean_dec(v_val_4883_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
goto v___jp_4866_;
}
}
else
{
lean_dec(v___x_4882_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
goto v___jp_4866_;
}
}
}
}
}
}
v___jp_4866_:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; 
v___x_4867_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4868_, 0, v___x_4867_);
return v___x_4868_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object* v_fnNames_4911_, lean_object* v_numSectionVars_4912_, lean_object* v___x_4913_, lean_object* v_x_4914_, lean_object* v_x_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_){
_start:
{
lean_object* v_res_4919_; 
v_res_4919_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_4911_, v_numSectionVars_4912_, v___x_4913_, v_x_4914_, v_x_4915_, v___y_4916_, v___y_4917_);
lean_dec(v___y_4917_);
lean_dec_ref(v___y_4916_);
lean_dec(v_numSectionVars_4912_);
lean_dec_ref(v_fnNames_4911_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object* v_fnNames_4920_, lean_object* v_numSectionVars_4921_, lean_object* v_env_4922_, lean_object* v_e_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_){
_start:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; 
v___x_4927_ = l_Lean_Expr_getAppNumArgs(v_e_4923_);
v___x_4928_ = lean_mk_empty_array_with_capacity(v___x_4927_);
lean_dec(v___x_4927_);
v___x_4929_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_4920_, v_numSectionVars_4921_, v_env_4922_, v_e_4923_, v___x_4928_, v___y_4924_, v___y_4925_);
return v___x_4929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object* v_fnNames_4930_, lean_object* v_numSectionVars_4931_, lean_object* v_env_4932_, lean_object* v_e_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
lean_object* v_res_4937_; 
v_res_4937_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(v_fnNames_4930_, v_numSectionVars_4931_, v_env_4932_, v_e_4933_, v___y_4934_, v___y_4935_);
lean_dec(v___y_4935_);
lean_dec_ref(v___y_4934_);
lean_dec(v_numSectionVars_4931_);
lean_dec_ref(v_fnNames_4930_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object* v_fnNames_4938_, lean_object* v_numSectionVars_4939_, lean_object* v_e_4940_, lean_object* v___f_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_){
_start:
{
lean_object* v___x_4945_; lean_object* v_env_4946_; lean_object* v___f_4947_; lean_object* v___x_4948_; 
v___x_4945_ = lean_st_ref_get(v___y_4943_);
v_env_4946_ = lean_ctor_get(v___x_4945_, 0);
lean_inc_ref(v_env_4946_);
lean_dec(v___x_4945_);
v___f_4947_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4947_, 0, v_fnNames_4938_);
lean_closure_set(v___f_4947_, 1, v_numSectionVars_4939_);
lean_closure_set(v___f_4947_, 2, v_env_4946_);
v___x_4948_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_4940_, v___f_4947_, v___f_4941_, v___y_4942_, v___y_4943_);
return v___x_4948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object* v_fnNames_4949_, lean_object* v_numSectionVars_4950_, lean_object* v_e_4951_, lean_object* v___f_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_){
_start:
{
lean_object* v_res_4956_; 
v_res_4956_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(v_fnNames_4949_, v_numSectionVars_4950_, v_e_4951_, v___f_4952_, v___y_4953_, v___y_4954_);
return v_res_4956_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object* v___y_4957_, uint8_t v_isExporting_4958_, lean_object* v___x_4959_, lean_object* v_a_x3f_4960_){
_start:
{
lean_object* v___x_4962_; lean_object* v_env_4963_; lean_object* v_nextMacroScope_4964_; lean_object* v_ngen_4965_; lean_object* v_auxDeclNGen_4966_; lean_object* v_traceState_4967_; lean_object* v_messages_4968_; lean_object* v_infoState_4969_; lean_object* v_snapshotTasks_4970_; lean_object* v___x_4972_; uint8_t v_isShared_4973_; uint8_t v_isSharedCheck_4981_; 
v___x_4962_ = lean_st_ref_take(v___y_4957_);
v_env_4963_ = lean_ctor_get(v___x_4962_, 0);
v_nextMacroScope_4964_ = lean_ctor_get(v___x_4962_, 1);
v_ngen_4965_ = lean_ctor_get(v___x_4962_, 2);
v_auxDeclNGen_4966_ = lean_ctor_get(v___x_4962_, 3);
v_traceState_4967_ = lean_ctor_get(v___x_4962_, 4);
v_messages_4968_ = lean_ctor_get(v___x_4962_, 6);
v_infoState_4969_ = lean_ctor_get(v___x_4962_, 7);
v_snapshotTasks_4970_ = lean_ctor_get(v___x_4962_, 8);
v_isSharedCheck_4981_ = !lean_is_exclusive(v___x_4962_);
if (v_isSharedCheck_4981_ == 0)
{
lean_object* v_unused_4982_; 
v_unused_4982_ = lean_ctor_get(v___x_4962_, 5);
lean_dec(v_unused_4982_);
v___x_4972_ = v___x_4962_;
v_isShared_4973_ = v_isSharedCheck_4981_;
goto v_resetjp_4971_;
}
else
{
lean_inc(v_snapshotTasks_4970_);
lean_inc(v_infoState_4969_);
lean_inc(v_messages_4968_);
lean_inc(v_traceState_4967_);
lean_inc(v_auxDeclNGen_4966_);
lean_inc(v_ngen_4965_);
lean_inc(v_nextMacroScope_4964_);
lean_inc(v_env_4963_);
lean_dec(v___x_4962_);
v___x_4972_ = lean_box(0);
v_isShared_4973_ = v_isSharedCheck_4981_;
goto v_resetjp_4971_;
}
v_resetjp_4971_:
{
lean_object* v___x_4974_; lean_object* v___x_4976_; 
v___x_4974_ = l_Lean_Environment_setExporting(v_env_4963_, v_isExporting_4958_);
if (v_isShared_4973_ == 0)
{
lean_ctor_set(v___x_4972_, 5, v___x_4959_);
lean_ctor_set(v___x_4972_, 0, v___x_4974_);
v___x_4976_ = v___x_4972_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4980_; 
v_reuseFailAlloc_4980_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4980_, 0, v___x_4974_);
lean_ctor_set(v_reuseFailAlloc_4980_, 1, v_nextMacroScope_4964_);
lean_ctor_set(v_reuseFailAlloc_4980_, 2, v_ngen_4965_);
lean_ctor_set(v_reuseFailAlloc_4980_, 3, v_auxDeclNGen_4966_);
lean_ctor_set(v_reuseFailAlloc_4980_, 4, v_traceState_4967_);
lean_ctor_set(v_reuseFailAlloc_4980_, 5, v___x_4959_);
lean_ctor_set(v_reuseFailAlloc_4980_, 6, v_messages_4968_);
lean_ctor_set(v_reuseFailAlloc_4980_, 7, v_infoState_4969_);
lean_ctor_set(v_reuseFailAlloc_4980_, 8, v_snapshotTasks_4970_);
v___x_4976_ = v_reuseFailAlloc_4980_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4977_ = lean_st_ref_set(v___y_4957_, v___x_4976_);
v___x_4978_ = lean_box(0);
v___x_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4978_);
return v___x_4979_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_4983_, lean_object* v_isExporting_4984_, lean_object* v___x_4985_, lean_object* v_a_x3f_4986_, lean_object* v___y_4987_){
_start:
{
uint8_t v_isExporting_boxed_4988_; lean_object* v_res_4989_; 
v_isExporting_boxed_4988_ = lean_unbox(v_isExporting_4984_);
v_res_4989_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_4983_, v_isExporting_boxed_4988_, v___x_4985_, v_a_x3f_4986_);
lean_dec(v_a_x3f_4986_);
lean_dec(v___y_4983_);
return v_res_4989_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object* v_x_4990_, uint8_t v_isExporting_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_){
_start:
{
lean_object* v___x_4995_; lean_object* v_env_4996_; uint8_t v_isExporting_4997_; lean_object* v___x_4998_; lean_object* v_env_4999_; lean_object* v_nextMacroScope_5000_; lean_object* v_ngen_5001_; lean_object* v_auxDeclNGen_5002_; lean_object* v_traceState_5003_; lean_object* v_messages_5004_; lean_object* v_infoState_5005_; lean_object* v_snapshotTasks_5006_; lean_object* v___x_5008_; uint8_t v_isShared_5009_; uint8_t v_isSharedCheck_5045_; 
v___x_4995_ = lean_st_ref_get(v___y_4993_);
v_env_4996_ = lean_ctor_get(v___x_4995_, 0);
lean_inc_ref(v_env_4996_);
lean_dec(v___x_4995_);
v_isExporting_4997_ = lean_ctor_get_uint8(v_env_4996_, sizeof(void*)*8);
lean_dec_ref(v_env_4996_);
v___x_4998_ = lean_st_ref_take(v___y_4993_);
v_env_4999_ = lean_ctor_get(v___x_4998_, 0);
v_nextMacroScope_5000_ = lean_ctor_get(v___x_4998_, 1);
v_ngen_5001_ = lean_ctor_get(v___x_4998_, 2);
v_auxDeclNGen_5002_ = lean_ctor_get(v___x_4998_, 3);
v_traceState_5003_ = lean_ctor_get(v___x_4998_, 4);
v_messages_5004_ = lean_ctor_get(v___x_4998_, 6);
v_infoState_5005_ = lean_ctor_get(v___x_4998_, 7);
v_snapshotTasks_5006_ = lean_ctor_get(v___x_4998_, 8);
v_isSharedCheck_5045_ = !lean_is_exclusive(v___x_4998_);
if (v_isSharedCheck_5045_ == 0)
{
lean_object* v_unused_5046_; 
v_unused_5046_ = lean_ctor_get(v___x_4998_, 5);
lean_dec(v_unused_5046_);
v___x_5008_ = v___x_4998_;
v_isShared_5009_ = v_isSharedCheck_5045_;
goto v_resetjp_5007_;
}
else
{
lean_inc(v_snapshotTasks_5006_);
lean_inc(v_infoState_5005_);
lean_inc(v_messages_5004_);
lean_inc(v_traceState_5003_);
lean_inc(v_auxDeclNGen_5002_);
lean_inc(v_ngen_5001_);
lean_inc(v_nextMacroScope_5000_);
lean_inc(v_env_4999_);
lean_dec(v___x_4998_);
v___x_5008_ = lean_box(0);
v_isShared_5009_ = v_isSharedCheck_5045_;
goto v_resetjp_5007_;
}
v_resetjp_5007_:
{
lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5013_; 
v___x_5010_ = l_Lean_Environment_setExporting(v_env_4999_, v_isExporting_4991_);
v___x_5011_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_5009_ == 0)
{
lean_ctor_set(v___x_5008_, 5, v___x_5011_);
lean_ctor_set(v___x_5008_, 0, v___x_5010_);
v___x_5013_ = v___x_5008_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v___x_5010_);
lean_ctor_set(v_reuseFailAlloc_5044_, 1, v_nextMacroScope_5000_);
lean_ctor_set(v_reuseFailAlloc_5044_, 2, v_ngen_5001_);
lean_ctor_set(v_reuseFailAlloc_5044_, 3, v_auxDeclNGen_5002_);
lean_ctor_set(v_reuseFailAlloc_5044_, 4, v_traceState_5003_);
lean_ctor_set(v_reuseFailAlloc_5044_, 5, v___x_5011_);
lean_ctor_set(v_reuseFailAlloc_5044_, 6, v_messages_5004_);
lean_ctor_set(v_reuseFailAlloc_5044_, 7, v_infoState_5005_);
lean_ctor_set(v_reuseFailAlloc_5044_, 8, v_snapshotTasks_5006_);
v___x_5013_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
lean_object* v___x_5014_; lean_object* v_r_5015_; 
v___x_5014_ = lean_st_ref_set(v___y_4993_, v___x_5013_);
lean_inc(v___y_4993_);
v_r_5015_ = lean_apply_3(v_x_4990_, v___y_4992_, v___y_4993_, lean_box(0));
if (lean_obj_tag(v_r_5015_) == 0)
{
lean_object* v_a_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5032_; 
v_a_5016_ = lean_ctor_get(v_r_5015_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v_r_5015_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5018_ = v_r_5015_;
v_isShared_5019_ = v_isSharedCheck_5032_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_a_5016_);
lean_dec(v_r_5015_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5032_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5021_; 
lean_inc(v_a_5016_);
if (v_isShared_5019_ == 0)
{
lean_ctor_set_tag(v___x_5018_, 1);
v___x_5021_ = v___x_5018_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5016_);
v___x_5021_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
lean_object* v___x_5022_; lean_object* v___x_5024_; uint8_t v_isShared_5025_; uint8_t v_isSharedCheck_5029_; 
v___x_5022_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_4993_, v_isExporting_4997_, v___x_5011_, v___x_5021_);
lean_dec_ref(v___x_5021_);
lean_dec(v___y_4993_);
v_isSharedCheck_5029_ = !lean_is_exclusive(v___x_5022_);
if (v_isSharedCheck_5029_ == 0)
{
lean_object* v_unused_5030_; 
v_unused_5030_ = lean_ctor_get(v___x_5022_, 0);
lean_dec(v_unused_5030_);
v___x_5024_ = v___x_5022_;
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
else
{
lean_dec(v___x_5022_);
v___x_5024_ = lean_box(0);
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
v_resetjp_5023_:
{
lean_object* v___x_5027_; 
if (v_isShared_5025_ == 0)
{
lean_ctor_set(v___x_5024_, 0, v_a_5016_);
v___x_5027_ = v___x_5024_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_a_5016_);
v___x_5027_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
return v___x_5027_;
}
}
}
}
}
else
{
lean_object* v_a_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5037_; uint8_t v_isShared_5038_; uint8_t v_isSharedCheck_5042_; 
v_a_5033_ = lean_ctor_get(v_r_5015_, 0);
lean_inc(v_a_5033_);
lean_dec_ref(v_r_5015_);
v___x_5034_ = lean_box(0);
v___x_5035_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_4993_, v_isExporting_4997_, v___x_5011_, v___x_5034_);
lean_dec(v___y_4993_);
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_5035_);
if (v_isSharedCheck_5042_ == 0)
{
lean_object* v_unused_5043_; 
v_unused_5043_ = lean_ctor_get(v___x_5035_, 0);
lean_dec(v_unused_5043_);
v___x_5037_ = v___x_5035_;
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
else
{
lean_dec(v___x_5035_);
v___x_5037_ = lean_box(0);
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
v_resetjp_5036_:
{
lean_object* v___x_5040_; 
if (v_isShared_5038_ == 0)
{
lean_ctor_set_tag(v___x_5037_, 1);
lean_ctor_set(v___x_5037_, 0, v_a_5033_);
v___x_5040_ = v___x_5037_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v_a_5033_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
return v___x_5040_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object* v_x_5047_, lean_object* v_isExporting_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_){
_start:
{
uint8_t v_isExporting_boxed_5052_; lean_object* v_res_5053_; 
v_isExporting_boxed_5052_ = lean_unbox(v_isExporting_5048_);
v_res_5053_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5047_, v_isExporting_boxed_5052_, v___y_5049_, v___y_5050_);
return v_res_5053_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object* v_x_5054_, uint8_t v_when_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_){
_start:
{
if (v_when_5055_ == 0)
{
lean_object* v___x_5059_; 
v___x_5059_ = lean_apply_3(v_x_5054_, v___y_5056_, v___y_5057_, lean_box(0));
return v___x_5059_;
}
else
{
uint8_t v___x_5060_; lean_object* v___x_5061_; 
v___x_5060_ = 0;
v___x_5061_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5054_, v___x_5060_, v___y_5056_, v___y_5057_);
return v___x_5061_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object* v_x_5062_, lean_object* v_when_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_){
_start:
{
uint8_t v_when_boxed_5067_; lean_object* v_res_5068_; 
v_when_boxed_5067_ = lean_unbox(v_when_5063_);
v_res_5068_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5062_, v_when_boxed_5067_, v___y_5064_, v___y_5065_);
return v_res_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object* v_fnNames_5069_, lean_object* v_numSectionVars_5070_, lean_object* v_e_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_){
_start:
{
lean_object* v___f_5075_; lean_object* v___f_5076_; uint8_t v___x_5077_; lean_object* v___x_5078_; 
v___f_5075_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_5076_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5076_, 0, v_fnNames_5069_);
lean_closure_set(v___f_5076_, 1, v_numSectionVars_5070_);
lean_closure_set(v___f_5076_, 2, v_e_5071_);
lean_closure_set(v___f_5076_, 3, v___f_5075_);
v___x_5077_ = 1;
v___x_5078_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v___f_5076_, v___x_5077_, v_a_5072_, v_a_5073_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object* v_fnNames_5079_, lean_object* v_numSectionVars_5080_, lean_object* v_e_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_){
_start:
{
lean_object* v_res_5085_; 
v_res_5085_ = l_Lean_Meta_unfoldIfArgIsAppOf(v_fnNames_5079_, v_numSectionVars_5080_, v_e_5081_, v_a_5082_, v_a_5083_);
return v_res_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object* v_00_u03b1_5086_, lean_object* v_x_5087_, uint8_t v_isExporting_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_){
_start:
{
lean_object* v___x_5092_; 
v___x_5092_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5087_, v_isExporting_5088_, v___y_5089_, v___y_5090_);
return v___x_5092_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object* v_00_u03b1_5093_, lean_object* v_x_5094_, lean_object* v_isExporting_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_, lean_object* v___y_5098_){
_start:
{
uint8_t v_isExporting_boxed_5099_; lean_object* v_res_5100_; 
v_isExporting_boxed_5099_ = lean_unbox(v_isExporting_5095_);
v_res_5100_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(v_00_u03b1_5093_, v_x_5094_, v_isExporting_boxed_5099_, v___y_5096_, v___y_5097_);
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object* v_00_u03b1_5101_, lean_object* v_x_5102_, uint8_t v_when_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_){
_start:
{
lean_object* v___x_5107_; 
v___x_5107_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5102_, v_when_5103_, v___y_5104_, v___y_5105_);
return v___x_5107_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object* v_00_u03b1_5108_, lean_object* v_x_5109_, lean_object* v_when_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_){
_start:
{
uint8_t v_when_boxed_5114_; lean_object* v_res_5115_; 
v_when_boxed_5114_ = lean_unbox(v_when_5110_);
v_res_5115_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(v_00_u03b1_5108_, v_x_5109_, v_when_boxed_5114_, v___y_5111_, v___y_5112_);
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object* v_x_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5120_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5121_, 0, v___x_5120_);
return v___x_5121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object* v_x_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_){
_start:
{
lean_object* v_res_5126_; 
v_res_5126_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(v_x_5122_, v___y_5123_, v___y_5124_);
lean_dec(v___y_5124_);
lean_dec_ref(v___y_5123_);
lean_dec_ref(v_x_5122_);
return v_res_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object* v_e_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
lean_object* v___y_5132_; lean_object* v___x_5135_; 
v___x_5135_ = l_Lean_inaccessible_x3f(v_e_5127_);
if (lean_obj_tag(v___x_5135_) == 1)
{
lean_object* v_val_5136_; 
lean_dec_ref(v_e_5127_);
v_val_5136_ = lean_ctor_get(v___x_5135_, 0);
lean_inc(v_val_5136_);
lean_dec_ref(v___x_5135_);
v___y_5132_ = v_val_5136_;
goto v___jp_5131_;
}
else
{
lean_dec(v___x_5135_);
v___y_5132_ = v_e_5127_;
goto v___jp_5131_;
}
v___jp_5131_:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; 
v___x_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5133_, 0, v___y_5132_);
v___x_5134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5134_, 0, v___x_5133_);
return v___x_5134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object* v_e_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_){
_start:
{
lean_object* v_res_5141_; 
v_res_5141_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(v_e_5137_, v___y_5138_, v___y_5139_);
lean_dec(v___y_5139_);
lean_dec_ref(v___y_5138_);
return v_res_5141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object* v_e_5144_, lean_object* v_a_5145_, lean_object* v_a_5146_){
_start:
{
lean_object* v___f_5148_; lean_object* v___f_5149_; lean_object* v___x_5150_; 
v___f_5148_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5149_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__1));
v___x_5150_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5144_, v___f_5148_, v___f_5149_, v_a_5145_, v_a_5146_);
return v___x_5150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object* v_e_5151_, lean_object* v_a_5152_, lean_object* v_a_5153_, lean_object* v_a_5154_){
_start:
{
lean_object* v_res_5155_; 
v_res_5155_ = l_Lean_Meta_eraseInaccessibleAnnotations(v_e_5151_, v_a_5152_, v_a_5153_);
return v_res_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object* v_e_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_){
_start:
{
lean_object* v___y_5161_; lean_object* v___x_5164_; 
v___x_5164_ = l_Lean_patternWithRef_x3f(v_e_5156_);
if (lean_obj_tag(v___x_5164_) == 1)
{
lean_object* v_val_5165_; lean_object* v_snd_5166_; 
lean_dec_ref(v_e_5156_);
v_val_5165_ = lean_ctor_get(v___x_5164_, 0);
lean_inc(v_val_5165_);
lean_dec_ref(v___x_5164_);
v_snd_5166_ = lean_ctor_get(v_val_5165_, 1);
lean_inc(v_snd_5166_);
lean_dec(v_val_5165_);
v___y_5161_ = v_snd_5166_;
goto v___jp_5160_;
}
else
{
lean_dec(v___x_5164_);
v___y_5161_ = v_e_5156_;
goto v___jp_5160_;
}
v___jp_5160_:
{
lean_object* v___x_5162_; lean_object* v___x_5163_; 
v___x_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5162_, 0, v___y_5161_);
v___x_5163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5163_, 0, v___x_5162_);
return v___x_5163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object* v_e_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_){
_start:
{
lean_object* v_res_5171_; 
v_res_5171_ = l_Lean_Meta_erasePatternRefAnnotations___lam__1(v_e_5167_, v___y_5168_, v___y_5169_);
lean_dec(v___y_5169_);
lean_dec_ref(v___y_5168_);
return v_res_5171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object* v_e_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_){
_start:
{
lean_object* v___f_5177_; lean_object* v___f_5178_; lean_object* v___x_5179_; 
v___f_5177_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5178_ = ((lean_object*)(l_Lean_Meta_erasePatternRefAnnotations___closed__0));
v___x_5179_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5173_, v___f_5177_, v___f_5178_, v_a_5174_, v_a_5175_);
return v___x_5179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object* v_e_5180_, lean_object* v_a_5181_, lean_object* v_a_5182_, lean_object* v_a_5183_){
_start:
{
lean_object* v_res_5184_; 
v_res_5184_ = l_Lean_Meta_erasePatternRefAnnotations(v_e_5180_, v_a_5181_, v_a_5182_);
return v_res_5184_;
}
}
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTransformStep_default = _init_l_Lean_instInhabitedTransformStep_default();
lean_mark_persistent(l_Lean_instInhabitedTransformStep_default);
l_Lean_instInhabitedTransformStep = _init_l_Lean_instInhabitedTransformStep();
lean_mark_persistent(l_Lean_instInhabitedTransformStep);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
