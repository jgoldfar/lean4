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
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
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
lean_inc(v___y_103_);
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
lean_inc(v___y_118_);
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
lean_inc(v___y_133_);
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
lean_inc(v_a_168_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v_e_180_, lean_object* v_a_181_, lean_object* v_x_182_, lean_object* v_toBind_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(v_toApplicative_177_, v___x_178_, v___x_179_, v_e_180_, v_a_181_, v_x_182_, v_toBind_183_, v_a_184_);
lean_dec(v_a_181_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object* v_toApplicative_186_, lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_e_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_toPure_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_toPure_191_ = lean_ctor_get(v_toApplicative_186_, 1);
lean_inc(v_toPure_191_);
lean_dec_ref(v_toApplicative_186_);
v___x_192_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_187_, v___x_188_, v_a_190_, v_e_189_);
v___x_193_ = lean_apply_2(v_toPure_191_, lean_box(0), v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_194_, lean_object* v___x_195_, lean_object* v___x_196_, lean_object* v_e_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(v_toApplicative_194_, v___x_195_, v___x_196_, v_e_197_, v_a_198_);
lean_dec_ref(v_a_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object* v_pre_200_, lean_object* v_e_201_, lean_object* v_x_202_, lean_object* v___x_203_, lean_object* v___x_204_, lean_object* v_inst_205_, lean_object* v___f_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v_a_209_, lean_object* v_toBind_210_, lean_object* v___f_211_, lean_object* v_toApplicative_212_, lean_object* v_a_213_){
_start:
{
if (lean_obj_tag(v_a_213_) == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_2135__overap_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref(v_toApplicative_212_);
v___x_214_ = lean_apply_1(v_pre_200_, v_e_201_);
lean_inc_ref(v___x_204_);
lean_inc_ref(v___x_203_);
v___x_215_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_215_, 0, lean_box(0));
lean_closure_set(v___x_215_, 1, lean_box(0));
lean_closure_set(v___x_215_, 2, lean_box(0));
lean_closure_set(v___x_215_, 3, lean_box(0));
lean_closure_set(v___x_215_, 4, v_x_202_);
lean_closure_set(v___x_215_, 5, v___x_203_);
lean_closure_set(v___x_215_, 6, v___x_204_);
lean_closure_set(v___x_215_, 7, lean_box(0));
lean_closure_set(v___x_215_, 8, v___x_214_);
v___x_216_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_216_, 0, lean_box(0));
lean_closure_set(v___x_216_, 1, lean_box(0));
lean_closure_set(v___x_216_, 2, lean_box(0));
lean_closure_set(v___x_216_, 3, lean_box(0));
lean_closure_set(v___x_216_, 4, v_x_202_);
lean_closure_set(v___x_216_, 5, v___x_203_);
lean_closure_set(v___x_216_, 6, v___x_204_);
lean_closure_set(v___x_216_, 7, v_inst_205_);
lean_closure_set(v___x_216_, 8, lean_box(0));
lean_closure_set(v___x_216_, 9, lean_box(0));
lean_closure_set(v___x_216_, 10, v___x_215_);
lean_closure_set(v___x_216_, 11, v___f_206_);
v___x_2135__overap_217_ = l_Lean_Core_withIncRecDepth___redArg(v___x_207_, v___x_208_, v___x_216_);
lean_inc(v_a_209_);
v___x_218_ = lean_apply_1(v___x_2135__overap_217_, v_a_209_);
v___x_219_ = lean_apply_4(v_toBind_210_, lean_box(0), lean_box(0), v___x_218_, v___f_211_);
return v___x_219_;
}
else
{
lean_object* v_val_220_; lean_object* v_toPure_221_; lean_object* v___x_222_; 
lean_dec(v___f_211_);
lean_dec(v_toBind_210_);
lean_dec_ref(v___x_208_);
lean_dec_ref(v___x_207_);
lean_dec(v___f_206_);
lean_dec_ref(v_inst_205_);
lean_dec_ref(v___x_204_);
lean_dec_ref(v___x_203_);
lean_dec_ref(v_e_201_);
lean_dec(v_pre_200_);
v_val_220_ = lean_ctor_get(v_a_213_, 0);
lean_inc(v_val_220_);
lean_dec_ref(v_a_213_);
v_toPure_221_ = lean_ctor_get(v_toApplicative_212_, 1);
lean_inc(v_toPure_221_);
lean_dec_ref(v_toApplicative_212_);
v___x_222_ = lean_apply_2(v_toPure_221_, lean_box(0), v_val_220_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed(lean_object* v_pre_223_, lean_object* v_e_224_, lean_object* v_x_225_, lean_object* v___x_226_, lean_object* v___x_227_, lean_object* v_inst_228_, lean_object* v___f_229_, lean_object* v___x_230_, lean_object* v___x_231_, lean_object* v_a_232_, lean_object* v_toBind_233_, lean_object* v___f_234_, lean_object* v_toApplicative_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(v_pre_223_, v_e_224_, v_x_225_, v___x_226_, v___x_227_, v_inst_228_, v___f_229_, v___x_230_, v___x_231_, v_a_232_, v_toBind_233_, v___f_234_, v_toApplicative_235_, v_a_236_);
lean_dec(v_a_232_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object* v_a_240_, lean_object* v_inst_241_, lean_object* v_inst_242_, lean_object* v_pre_243_, lean_object* v_post_244_, lean_object* v_x_245_, lean_object* v_x_246_, lean_object* v___y_247_, lean_object* v_a_248_){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = l_Lean_mkAppN(v_a_240_, v_a_248_);
v___x_250_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_241_, v_inst_242_, v_pre_243_, v_post_244_, v_x_245_, v_x_246_, v___x_249_, v___y_247_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object* v_a_251_, lean_object* v_inst_252_, lean_object* v_inst_253_, lean_object* v_pre_254_, lean_object* v_post_255_, lean_object* v_x_256_, lean_object* v_x_257_, lean_object* v___y_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(v_a_251_, v_inst_252_, v_inst_253_, v_pre_254_, v_post_255_, v_x_256_, v_x_257_, v___y_258_, v_a_259_);
lean_dec_ref(v_a_259_);
lean_dec(v___y_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v_pre_263_, lean_object* v_post_264_, lean_object* v_x_265_, lean_object* v_x_266_, lean_object* v_e_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_261_, v_inst_262_, v_pre_263_, v_post_264_, v_x_265_, v_x_266_, v_e_267_, v_a_268_);
lean_dec(v_a_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object* v_inst_270_, lean_object* v_inst_271_, lean_object* v_pre_272_, lean_object* v_post_273_, lean_object* v_x_274_, lean_object* v_x_275_, lean_object* v___y_276_, lean_object* v_args_277_, lean_object* v___x_278_, lean_object* v_toBind_279_, lean_object* v_a_280_){
_start:
{
lean_object* v___f_281_; lean_object* v___x_282_; size_t v_sz_283_; size_t v___x_284_; lean_object* v___x_1891__overap_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
lean_inc_n(v___y_276_, 2);
lean_inc(v_x_275_);
lean_inc(v_post_273_);
lean_inc(v_pre_272_);
lean_inc_ref(v_inst_271_);
lean_inc_ref(v_inst_270_);
v___f_281_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_281_, 0, v_a_280_);
lean_closure_set(v___f_281_, 1, v_inst_270_);
lean_closure_set(v___f_281_, 2, v_inst_271_);
lean_closure_set(v___f_281_, 3, v_pre_272_);
lean_closure_set(v___f_281_, 4, v_post_273_);
lean_closure_set(v___f_281_, 5, v_x_274_);
lean_closure_set(v___f_281_, 6, v_x_275_);
lean_closure_set(v___f_281_, 7, v___y_276_);
v___x_282_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed), 8, 6);
lean_closure_set(v___x_282_, 0, v_inst_270_);
lean_closure_set(v___x_282_, 1, v_inst_271_);
lean_closure_set(v___x_282_, 2, v_pre_272_);
lean_closure_set(v___x_282_, 3, v_post_273_);
lean_closure_set(v___x_282_, 4, v_x_274_);
lean_closure_set(v___x_282_, 5, v_x_275_);
v_sz_283_ = lean_array_size(v_args_277_);
v___x_284_ = ((size_t)0ULL);
v___x_1891__overap_285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_278_, v___x_282_, v_sz_283_, v___x_284_, v_args_277_);
v___x_286_ = lean_apply_1(v___x_1891__overap_285_, v___y_276_);
v___x_287_ = lean_apply_4(v_toBind_279_, lean_box(0), lean_box(0), v___x_286_, v___f_281_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object* v_inst_288_, lean_object* v_inst_289_, lean_object* v_pre_290_, lean_object* v_post_291_, lean_object* v_x_292_, lean_object* v_x_293_, lean_object* v___y_294_, lean_object* v_args_295_, lean_object* v___x_296_, lean_object* v_toBind_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(v_inst_288_, v_inst_289_, v_pre_290_, v_post_291_, v_x_292_, v_x_293_, v___y_294_, v_args_295_, v___x_296_, v_toBind_297_, v_a_298_);
lean_dec(v___y_294_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_pre_302_, lean_object* v_post_303_, lean_object* v_x_304_, lean_object* v_x_305_, lean_object* v___x_306_, lean_object* v_toBind_307_, lean_object* v_f_308_, lean_object* v_args_309_, lean_object* v___y_310_){
_start:
{
lean_object* v___f_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
lean_inc(v_toBind_307_);
lean_inc(v___y_310_);
lean_inc(v_x_305_);
lean_inc(v_post_303_);
lean_inc(v_pre_302_);
lean_inc_ref(v_inst_301_);
lean_inc_ref(v_inst_300_);
v___f_311_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed), 11, 10);
lean_closure_set(v___f_311_, 0, v_inst_300_);
lean_closure_set(v___f_311_, 1, v_inst_301_);
lean_closure_set(v___f_311_, 2, v_pre_302_);
lean_closure_set(v___f_311_, 3, v_post_303_);
lean_closure_set(v___f_311_, 4, v_x_304_);
lean_closure_set(v___f_311_, 5, v_x_305_);
lean_closure_set(v___f_311_, 6, v___y_310_);
lean_closure_set(v___f_311_, 7, v_args_309_);
lean_closure_set(v___f_311_, 8, v___x_306_);
lean_closure_set(v___f_311_, 9, v_toBind_307_);
v___x_312_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_300_, v_inst_301_, v_pre_302_, v_post_303_, v_x_304_, v_x_305_, v_f_308_, v___y_310_);
v___x_313_ = lean_apply_4(v_toBind_307_, lean_box(0), lean_box(0), v___x_312_, v___f_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object* v_inst_314_, lean_object* v_inst_315_, lean_object* v_pre_316_, lean_object* v_post_317_, lean_object* v_x_318_, lean_object* v_x_319_, lean_object* v___x_320_, lean_object* v_toBind_321_, lean_object* v_f_322_, lean_object* v_args_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(v_inst_314_, v_inst_315_, v_pre_316_, v_post_317_, v_x_318_, v_x_319_, v___x_320_, v_toBind_321_, v_f_322_, v_args_323_, v___y_324_);
lean_dec(v___y_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object* v_binderName_326_, lean_object* v_a_327_, uint8_t v_binderInfo_328_, lean_object* v_inst_329_, lean_object* v_inst_330_, lean_object* v_pre_331_, lean_object* v_post_332_, lean_object* v_x_333_, lean_object* v_x_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v_binderType_337_, lean_object* v_body_338_, lean_object* v_a_339_){
_start:
{
uint8_t v___y_341_; size_t v___x_348_; size_t v___x_349_; uint8_t v___x_350_; 
v___x_348_ = lean_ptr_addr(v_binderType_337_);
v___x_349_ = lean_ptr_addr(v_a_327_);
v___x_350_ = lean_usize_dec_eq(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
v___y_341_ = v___x_350_;
goto v___jp_340_;
}
else
{
size_t v___x_351_; size_t v___x_352_; uint8_t v___x_353_; 
v___x_351_ = lean_ptr_addr(v_body_338_);
v___x_352_ = lean_ptr_addr(v_a_339_);
v___x_353_ = lean_usize_dec_eq(v___x_351_, v___x_352_);
v___y_341_ = v___x_353_;
goto v___jp_340_;
}
v___jp_340_:
{
if (v___y_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec_ref(v___y_336_);
v___x_342_ = l_Lean_Expr_forallE___override(v_binderName_326_, v_a_327_, v_a_339_, v_binderInfo_328_);
v___x_343_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_329_, v_inst_330_, v_pre_331_, v_post_332_, v_x_333_, v_x_334_, v___x_342_, v___y_335_);
return v___x_343_;
}
else
{
uint8_t v___x_344_; 
v___x_344_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_328_, v_binderInfo_328_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v___x_346_; 
lean_dec_ref(v___y_336_);
v___x_345_ = l_Lean_Expr_forallE___override(v_binderName_326_, v_a_327_, v_a_339_, v_binderInfo_328_);
v___x_346_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_329_, v_inst_330_, v_pre_331_, v_post_332_, v_x_333_, v_x_334_, v___x_345_, v___y_335_);
return v___x_346_;
}
else
{
lean_object* v___x_347_; 
lean_dec_ref(v_a_339_);
lean_dec_ref(v_a_327_);
lean_dec(v_binderName_326_);
v___x_347_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_329_, v_inst_330_, v_pre_331_, v_post_332_, v_x_333_, v_x_334_, v___y_336_, v___y_335_);
return v___x_347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object* v_binderName_354_, lean_object* v_a_355_, lean_object* v_binderInfo_356_, lean_object* v_inst_357_, lean_object* v_inst_358_, lean_object* v_pre_359_, lean_object* v_post_360_, lean_object* v_x_361_, lean_object* v_x_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v_binderType_365_, lean_object* v_body_366_, lean_object* v_a_367_){
_start:
{
uint8_t v_binderInfo_2417__boxed_368_; lean_object* v_res_369_; 
v_binderInfo_2417__boxed_368_ = lean_unbox(v_binderInfo_356_);
v_res_369_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(v_binderName_354_, v_a_355_, v_binderInfo_2417__boxed_368_, v_inst_357_, v_inst_358_, v_pre_359_, v_post_360_, v_x_361_, v_x_362_, v___y_363_, v___y_364_, v_binderType_365_, v_body_366_, v_a_367_);
lean_dec_ref(v_body_366_);
lean_dec_ref(v_binderType_365_);
lean_dec(v___y_363_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object* v_binderName_370_, uint8_t v_binderInfo_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_pre_374_, lean_object* v_post_375_, lean_object* v_x_376_, lean_object* v_x_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v_binderType_380_, lean_object* v_body_381_, lean_object* v_toBind_382_, lean_object* v_a_383_){
_start:
{
lean_object* v___x_384_; lean_object* v___f_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_384_ = lean_box(v_binderInfo_371_);
lean_inc_ref(v_body_381_);
lean_inc(v___y_378_);
lean_inc(v_x_377_);
lean_inc(v_post_375_);
lean_inc(v_pre_374_);
lean_inc_ref(v_inst_373_);
lean_inc_ref(v_inst_372_);
v___f_385_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed), 14, 13);
lean_closure_set(v___f_385_, 0, v_binderName_370_);
lean_closure_set(v___f_385_, 1, v_a_383_);
lean_closure_set(v___f_385_, 2, v___x_384_);
lean_closure_set(v___f_385_, 3, v_inst_372_);
lean_closure_set(v___f_385_, 4, v_inst_373_);
lean_closure_set(v___f_385_, 5, v_pre_374_);
lean_closure_set(v___f_385_, 6, v_post_375_);
lean_closure_set(v___f_385_, 7, v_x_376_);
lean_closure_set(v___f_385_, 8, v_x_377_);
lean_closure_set(v___f_385_, 9, v___y_378_);
lean_closure_set(v___f_385_, 10, v___y_379_);
lean_closure_set(v___f_385_, 11, v_binderType_380_);
lean_closure_set(v___f_385_, 12, v_body_381_);
v___x_386_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_372_, v_inst_373_, v_pre_374_, v_post_375_, v_x_376_, v_x_377_, v_body_381_, v___y_378_);
v___x_387_ = lean_apply_4(v_toBind_382_, lean_box(0), lean_box(0), v___x_386_, v___f_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object* v_binderName_388_, lean_object* v_binderInfo_389_, lean_object* v_inst_390_, lean_object* v_inst_391_, lean_object* v_pre_392_, lean_object* v_post_393_, lean_object* v_x_394_, lean_object* v_x_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v_binderType_398_, lean_object* v_body_399_, lean_object* v_toBind_400_, lean_object* v_a_401_){
_start:
{
uint8_t v_binderInfo_2298__boxed_402_; lean_object* v_res_403_; 
v_binderInfo_2298__boxed_402_ = lean_unbox(v_binderInfo_389_);
v_res_403_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(v_binderName_388_, v_binderInfo_2298__boxed_402_, v_inst_390_, v_inst_391_, v_pre_392_, v_post_393_, v_x_394_, v_x_395_, v___y_396_, v___y_397_, v_binderType_398_, v_body_399_, v_toBind_400_, v_a_401_);
lean_dec(v___y_396_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object* v_binderName_404_, lean_object* v_a_405_, uint8_t v_binderInfo_406_, lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_pre_409_, lean_object* v_post_410_, lean_object* v_x_411_, lean_object* v_x_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v_binderType_415_, lean_object* v_body_416_, lean_object* v_a_417_){
_start:
{
uint8_t v___y_419_; size_t v___x_426_; size_t v___x_427_; uint8_t v___x_428_; 
v___x_426_ = lean_ptr_addr(v_binderType_415_);
v___x_427_ = lean_ptr_addr(v_a_405_);
v___x_428_ = lean_usize_dec_eq(v___x_426_, v___x_427_);
if (v___x_428_ == 0)
{
v___y_419_ = v___x_428_;
goto v___jp_418_;
}
else
{
size_t v___x_429_; size_t v___x_430_; uint8_t v___x_431_; 
v___x_429_ = lean_ptr_addr(v_body_416_);
v___x_430_ = lean_ptr_addr(v_a_417_);
v___x_431_ = lean_usize_dec_eq(v___x_429_, v___x_430_);
v___y_419_ = v___x_431_;
goto v___jp_418_;
}
v___jp_418_:
{
if (v___y_419_ == 0)
{
lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec_ref(v___y_414_);
v___x_420_ = l_Lean_Expr_lam___override(v_binderName_404_, v_a_405_, v_a_417_, v_binderInfo_406_);
v___x_421_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_407_, v_inst_408_, v_pre_409_, v_post_410_, v_x_411_, v_x_412_, v___x_420_, v___y_413_);
return v___x_421_;
}
else
{
uint8_t v___x_422_; 
v___x_422_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_406_, v_binderInfo_406_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref(v___y_414_);
v___x_423_ = l_Lean_Expr_lam___override(v_binderName_404_, v_a_405_, v_a_417_, v_binderInfo_406_);
v___x_424_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_407_, v_inst_408_, v_pre_409_, v_post_410_, v_x_411_, v_x_412_, v___x_423_, v___y_413_);
return v___x_424_;
}
else
{
lean_object* v___x_425_; 
lean_dec_ref(v_a_417_);
lean_dec_ref(v_a_405_);
lean_dec(v_binderName_404_);
v___x_425_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_407_, v_inst_408_, v_pre_409_, v_post_410_, v_x_411_, v_x_412_, v___y_414_, v___y_413_);
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object* v_binderName_432_, lean_object* v_a_433_, lean_object* v_binderInfo_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_pre_437_, lean_object* v_post_438_, lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v_binderType_443_, lean_object* v_body_444_, lean_object* v_a_445_){
_start:
{
uint8_t v_binderInfo_2393__boxed_446_; lean_object* v_res_447_; 
v_binderInfo_2393__boxed_446_ = lean_unbox(v_binderInfo_434_);
v_res_447_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(v_binderName_432_, v_a_433_, v_binderInfo_2393__boxed_446_, v_inst_435_, v_inst_436_, v_pre_437_, v_post_438_, v_x_439_, v_x_440_, v___y_441_, v___y_442_, v_binderType_443_, v_body_444_, v_a_445_);
lean_dec_ref(v_body_444_);
lean_dec_ref(v_binderType_443_);
lean_dec(v___y_441_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object* v_binderName_448_, uint8_t v_binderInfo_449_, lean_object* v_inst_450_, lean_object* v_inst_451_, lean_object* v_pre_452_, lean_object* v_post_453_, lean_object* v_x_454_, lean_object* v_x_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v_binderType_458_, lean_object* v_body_459_, lean_object* v_toBind_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_462_; lean_object* v___f_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_462_ = lean_box(v_binderInfo_449_);
lean_inc_ref(v_body_459_);
lean_inc(v___y_456_);
lean_inc(v_x_455_);
lean_inc(v_post_453_);
lean_inc(v_pre_452_);
lean_inc_ref(v_inst_451_);
lean_inc_ref(v_inst_450_);
v___f_463_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed), 14, 13);
lean_closure_set(v___f_463_, 0, v_binderName_448_);
lean_closure_set(v___f_463_, 1, v_a_461_);
lean_closure_set(v___f_463_, 2, v___x_462_);
lean_closure_set(v___f_463_, 3, v_inst_450_);
lean_closure_set(v___f_463_, 4, v_inst_451_);
lean_closure_set(v___f_463_, 5, v_pre_452_);
lean_closure_set(v___f_463_, 6, v_post_453_);
lean_closure_set(v___f_463_, 7, v_x_454_);
lean_closure_set(v___f_463_, 8, v_x_455_);
lean_closure_set(v___f_463_, 9, v___y_456_);
lean_closure_set(v___f_463_, 10, v___y_457_);
lean_closure_set(v___f_463_, 11, v_binderType_458_);
lean_closure_set(v___f_463_, 12, v_body_459_);
v___x_464_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_450_, v_inst_451_, v_pre_452_, v_post_453_, v_x_454_, v_x_455_, v_body_459_, v___y_456_);
v___x_465_ = lean_apply_4(v_toBind_460_, lean_box(0), lean_box(0), v___x_464_, v___f_463_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object* v_binderName_466_, lean_object* v_binderInfo_467_, lean_object* v_inst_468_, lean_object* v_inst_469_, lean_object* v_pre_470_, lean_object* v_post_471_, lean_object* v_x_472_, lean_object* v_x_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v_binderType_476_, lean_object* v_body_477_, lean_object* v_toBind_478_, lean_object* v_a_479_){
_start:
{
uint8_t v_binderInfo_2248__boxed_480_; lean_object* v_res_481_; 
v_binderInfo_2248__boxed_480_ = lean_unbox(v_binderInfo_467_);
v_res_481_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(v_binderName_466_, v_binderInfo_2248__boxed_480_, v_inst_468_, v_inst_469_, v_pre_470_, v_post_471_, v_x_472_, v_x_473_, v___y_474_, v___y_475_, v_binderType_476_, v_body_477_, v_toBind_478_, v_a_479_);
lean_dec(v___y_474_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object* v_declName_482_, lean_object* v_a_483_, lean_object* v_a_484_, uint8_t v_nondep_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_pre_488_, lean_object* v_post_489_, lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v___y_492_, lean_object* v_body_493_, lean_object* v___y_494_, lean_object* v_type_495_, lean_object* v_value_496_, lean_object* v_a_497_){
_start:
{
uint8_t v___y_499_; size_t v___x_508_; size_t v___x_509_; uint8_t v___x_510_; 
v___x_508_ = lean_ptr_addr(v_type_495_);
v___x_509_ = lean_ptr_addr(v_a_483_);
v___x_510_ = lean_usize_dec_eq(v___x_508_, v___x_509_);
if (v___x_510_ == 0)
{
v___y_499_ = v___x_510_;
goto v___jp_498_;
}
else
{
size_t v___x_511_; size_t v___x_512_; uint8_t v___x_513_; 
v___x_511_ = lean_ptr_addr(v_value_496_);
v___x_512_ = lean_ptr_addr(v_a_484_);
v___x_513_ = lean_usize_dec_eq(v___x_511_, v___x_512_);
v___y_499_ = v___x_513_;
goto v___jp_498_;
}
v___jp_498_:
{
if (v___y_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
lean_dec_ref(v___y_494_);
v___x_500_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_483_, v_a_484_, v_a_497_, v_nondep_485_);
v___x_501_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___x_500_, v___y_492_);
return v___x_501_;
}
else
{
size_t v___x_502_; size_t v___x_503_; uint8_t v___x_504_; 
v___x_502_ = lean_ptr_addr(v_body_493_);
v___x_503_ = lean_ptr_addr(v_a_497_);
v___x_504_ = lean_usize_dec_eq(v___x_502_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
lean_dec_ref(v___y_494_);
v___x_505_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_483_, v_a_484_, v_a_497_, v_nondep_485_);
v___x_506_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___x_505_, v___y_492_);
return v___x_506_;
}
else
{
lean_object* v___x_507_; 
lean_dec_ref(v_a_497_);
lean_dec_ref(v_a_484_);
lean_dec_ref(v_a_483_);
lean_dec(v_declName_482_);
v___x_507_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_486_, v_inst_487_, v_pre_488_, v_post_489_, v_x_490_, v_x_491_, v___y_494_, v___y_492_);
return v___x_507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object* v_declName_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_nondep_517_, lean_object* v_inst_518_, lean_object* v_inst_519_, lean_object* v_pre_520_, lean_object* v_post_521_, lean_object* v_x_522_, lean_object* v_x_523_, lean_object* v___y_524_, lean_object* v_body_525_, lean_object* v___y_526_, lean_object* v_type_527_, lean_object* v_value_528_, lean_object* v_a_529_){
_start:
{
uint8_t v_nondep_2441__boxed_530_; lean_object* v_res_531_; 
v_nondep_2441__boxed_530_ = lean_unbox(v_nondep_517_);
v_res_531_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(v_declName_514_, v_a_515_, v_a_516_, v_nondep_2441__boxed_530_, v_inst_518_, v_inst_519_, v_pre_520_, v_post_521_, v_x_522_, v_x_523_, v___y_524_, v_body_525_, v___y_526_, v_type_527_, v_value_528_, v_a_529_);
lean_dec_ref(v_value_528_);
lean_dec_ref(v_type_527_);
lean_dec_ref(v_body_525_);
lean_dec(v___y_524_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object* v_declName_532_, lean_object* v_a_533_, uint8_t v_nondep_534_, lean_object* v_inst_535_, lean_object* v_inst_536_, lean_object* v_pre_537_, lean_object* v_post_538_, lean_object* v_x_539_, lean_object* v_x_540_, lean_object* v___y_541_, lean_object* v_body_542_, lean_object* v___y_543_, lean_object* v_type_544_, lean_object* v_value_545_, lean_object* v_toBind_546_, lean_object* v_a_547_){
_start:
{
lean_object* v___x_548_; lean_object* v___f_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_box(v_nondep_534_);
lean_inc_ref(v_body_542_);
lean_inc(v___y_541_);
lean_inc(v_x_540_);
lean_inc(v_post_538_);
lean_inc(v_pre_537_);
lean_inc_ref(v_inst_536_);
lean_inc_ref(v_inst_535_);
v___f_549_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed), 16, 15);
lean_closure_set(v___f_549_, 0, v_declName_532_);
lean_closure_set(v___f_549_, 1, v_a_533_);
lean_closure_set(v___f_549_, 2, v_a_547_);
lean_closure_set(v___f_549_, 3, v___x_548_);
lean_closure_set(v___f_549_, 4, v_inst_535_);
lean_closure_set(v___f_549_, 5, v_inst_536_);
lean_closure_set(v___f_549_, 6, v_pre_537_);
lean_closure_set(v___f_549_, 7, v_post_538_);
lean_closure_set(v___f_549_, 8, v_x_539_);
lean_closure_set(v___f_549_, 9, v_x_540_);
lean_closure_set(v___f_549_, 10, v___y_541_);
lean_closure_set(v___f_549_, 11, v_body_542_);
lean_closure_set(v___f_549_, 12, v___y_543_);
lean_closure_set(v___f_549_, 13, v_type_544_);
lean_closure_set(v___f_549_, 14, v_value_545_);
v___x_550_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_535_, v_inst_536_, v_pre_537_, v_post_538_, v_x_539_, v_x_540_, v_body_542_, v___y_541_);
v___x_551_ = lean_apply_4(v_toBind_546_, lean_box(0), lean_box(0), v___x_550_, v___f_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object* v_declName_552_, lean_object* v_a_553_, lean_object* v_nondep_554_, lean_object* v_inst_555_, lean_object* v_inst_556_, lean_object* v_pre_557_, lean_object* v_post_558_, lean_object* v_x_559_, lean_object* v_x_560_, lean_object* v___y_561_, lean_object* v_body_562_, lean_object* v___y_563_, lean_object* v_type_564_, lean_object* v_value_565_, lean_object* v_toBind_566_, lean_object* v_a_567_){
_start:
{
uint8_t v_nondep_2261__boxed_568_; lean_object* v_res_569_; 
v_nondep_2261__boxed_568_ = lean_unbox(v_nondep_554_);
v_res_569_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(v_declName_552_, v_a_553_, v_nondep_2261__boxed_568_, v_inst_555_, v_inst_556_, v_pre_557_, v_post_558_, v_x_559_, v_x_560_, v___y_561_, v_body_562_, v___y_563_, v_type_564_, v_value_565_, v_toBind_566_, v_a_567_);
lean_dec(v___y_561_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object* v_declName_570_, uint8_t v_nondep_571_, lean_object* v_inst_572_, lean_object* v_inst_573_, lean_object* v_pre_574_, lean_object* v_post_575_, lean_object* v_x_576_, lean_object* v_x_577_, lean_object* v___y_578_, lean_object* v_body_579_, lean_object* v___y_580_, lean_object* v_type_581_, lean_object* v_value_582_, lean_object* v_toBind_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___f_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = lean_box(v_nondep_571_);
lean_inc(v_toBind_583_);
lean_inc_ref(v_value_582_);
lean_inc(v___y_578_);
lean_inc(v_x_577_);
lean_inc(v_post_575_);
lean_inc(v_pre_574_);
lean_inc_ref(v_inst_573_);
lean_inc_ref(v_inst_572_);
v___f_586_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed), 16, 15);
lean_closure_set(v___f_586_, 0, v_declName_570_);
lean_closure_set(v___f_586_, 1, v_a_584_);
lean_closure_set(v___f_586_, 2, v___x_585_);
lean_closure_set(v___f_586_, 3, v_inst_572_);
lean_closure_set(v___f_586_, 4, v_inst_573_);
lean_closure_set(v___f_586_, 5, v_pre_574_);
lean_closure_set(v___f_586_, 6, v_post_575_);
lean_closure_set(v___f_586_, 7, v_x_576_);
lean_closure_set(v___f_586_, 8, v_x_577_);
lean_closure_set(v___f_586_, 9, v___y_578_);
lean_closure_set(v___f_586_, 10, v_body_579_);
lean_closure_set(v___f_586_, 11, v___y_580_);
lean_closure_set(v___f_586_, 12, v_type_581_);
lean_closure_set(v___f_586_, 13, v_value_582_);
lean_closure_set(v___f_586_, 14, v_toBind_583_);
v___x_587_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_572_, v_inst_573_, v_pre_574_, v_post_575_, v_x_576_, v_x_577_, v_value_582_, v___y_578_);
v___x_588_ = lean_apply_4(v_toBind_583_, lean_box(0), lean_box(0), v___x_587_, v___f_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object* v_declName_589_, lean_object* v_nondep_590_, lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_pre_593_, lean_object* v_post_594_, lean_object* v_x_595_, lean_object* v_x_596_, lean_object* v___y_597_, lean_object* v_body_598_, lean_object* v___y_599_, lean_object* v_type_600_, lean_object* v_value_601_, lean_object* v_toBind_602_, lean_object* v_a_603_){
_start:
{
uint8_t v_nondep_2275__boxed_604_; lean_object* v_res_605_; 
v_nondep_2275__boxed_604_ = lean_unbox(v_nondep_590_);
v_res_605_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(v_declName_589_, v_nondep_2275__boxed_604_, v_inst_591_, v_inst_592_, v_pre_593_, v_post_594_, v_x_595_, v_x_596_, v___y_597_, v_body_598_, v___y_599_, v_type_600_, v_value_601_, v_toBind_602_, v_a_603_);
lean_dec(v___y_597_);
return v_res_605_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0(void){
_start:
{
lean_object* v___x_606_; lean_object* v_dummy_607_; 
v___x_606_ = lean_box(0);
v_dummy_607_ = l_Lean_Expr_sort___override(v___x_606_);
return v_dummy_607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object* v_expr_608_, lean_object* v_data_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_pre_612_, lean_object* v_post_613_, lean_object* v_x_614_, lean_object* v_x_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v_a_618_){
_start:
{
size_t v___x_619_; size_t v___x_620_; uint8_t v___x_621_; 
v___x_619_ = lean_ptr_addr(v_expr_608_);
v___x_620_ = lean_ptr_addr(v_a_618_);
v___x_621_ = lean_usize_dec_eq(v___x_619_, v___x_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; 
lean_dec_ref(v___y_617_);
v___x_622_ = l_Lean_Expr_mdata___override(v_data_609_, v_a_618_);
v___x_623_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_610_, v_inst_611_, v_pre_612_, v_post_613_, v_x_614_, v_x_615_, v___x_622_, v___y_616_);
return v___x_623_;
}
else
{
lean_object* v___x_624_; 
lean_dec_ref(v_a_618_);
lean_dec(v_data_609_);
v___x_624_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_610_, v_inst_611_, v_pre_612_, v_post_613_, v_x_614_, v_x_615_, v___y_617_, v___y_616_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object* v_expr_625_, lean_object* v_data_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_pre_629_, lean_object* v_post_630_, lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(v_expr_625_, v_data_626_, v_inst_627_, v_inst_628_, v_pre_629_, v_post_630_, v_x_631_, v_x_632_, v___y_633_, v___y_634_, v_a_635_);
lean_dec(v___y_633_);
lean_dec_ref(v_expr_625_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object* v_struct_637_, lean_object* v_typeName_638_, lean_object* v_idx_639_, lean_object* v_inst_640_, lean_object* v_inst_641_, lean_object* v_pre_642_, lean_object* v_post_643_, lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v_a_648_){
_start:
{
size_t v___x_649_; size_t v___x_650_; uint8_t v___x_651_; 
v___x_649_ = lean_ptr_addr(v_struct_637_);
v___x_650_ = lean_ptr_addr(v_a_648_);
v___x_651_ = lean_usize_dec_eq(v___x_649_, v___x_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec_ref(v___y_647_);
v___x_652_ = l_Lean_Expr_proj___override(v_typeName_638_, v_idx_639_, v_a_648_);
v___x_653_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_640_, v_inst_641_, v_pre_642_, v_post_643_, v_x_644_, v_x_645_, v___x_652_, v___y_646_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; 
lean_dec_ref(v_a_648_);
lean_dec(v_idx_639_);
lean_dec(v_typeName_638_);
v___x_654_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_640_, v_inst_641_, v_pre_642_, v_post_643_, v_x_644_, v_x_645_, v___y_647_, v___y_646_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object* v_struct_655_, lean_object* v_typeName_656_, lean_object* v_idx_657_, lean_object* v_inst_658_, lean_object* v_inst_659_, lean_object* v_pre_660_, lean_object* v_post_661_, lean_object* v_x_662_, lean_object* v_x_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(v_struct_655_, v_typeName_656_, v_idx_657_, v_inst_658_, v_inst_659_, v_pre_660_, v_post_661_, v_x_662_, v_x_663_, v___y_664_, v___y_665_, v_a_666_);
lean_dec(v___y_664_);
lean_dec_ref(v_struct_655_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object* v_inst_668_, lean_object* v_inst_669_, lean_object* v_pre_670_, lean_object* v_post_671_, lean_object* v_x_672_, lean_object* v_x_673_, lean_object* v___y_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(v_inst_668_, v_inst_669_, v_pre_670_, v_post_671_, v_x_672_, v_x_673_, v___y_674_, v_a_675_);
lean_dec(v___y_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object* v_toApplicative_677_, lean_object* v_inst_678_, lean_object* v_inst_679_, lean_object* v_pre_680_, lean_object* v_post_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v_toBind_684_, lean_object* v___f_685_, lean_object* v_e_686_, lean_object* v_____do__lift_687_, lean_object* v___y_688_){
_start:
{
lean_object* v___y_690_; 
switch(lean_obj_tag(v_____do__lift_687_))
{
case 0:
{
lean_object* v_e_735_; lean_object* v_toPure_736_; lean_object* v___x_737_; 
lean_dec_ref(v_e_686_);
lean_dec(v___f_685_);
lean_dec(v_toBind_684_);
lean_dec(v_x_683_);
lean_dec(v_post_681_);
lean_dec(v_pre_680_);
lean_dec_ref(v_inst_679_);
lean_dec_ref(v_inst_678_);
v_e_735_ = lean_ctor_get(v_____do__lift_687_, 0);
lean_inc_ref(v_e_735_);
lean_dec_ref(v_____do__lift_687_);
v_toPure_736_ = lean_ctor_get(v_toApplicative_677_, 1);
lean_inc(v_toPure_736_);
lean_dec_ref(v_toApplicative_677_);
v___x_737_ = lean_apply_2(v_toPure_736_, lean_box(0), v_e_735_);
return v___x_737_;
}
case 1:
{
lean_object* v_e_738_; lean_object* v___f_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec_ref(v_e_686_);
lean_dec(v___f_685_);
lean_dec_ref(v_toApplicative_677_);
v_e_738_ = lean_ctor_get(v_____do__lift_687_, 0);
lean_inc_ref(v_e_738_);
lean_dec_ref(v_____do__lift_687_);
lean_inc(v___y_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_739_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed), 8, 7);
lean_closure_set(v___f_739_, 0, v_inst_678_);
lean_closure_set(v___f_739_, 1, v_inst_679_);
lean_closure_set(v___f_739_, 2, v_pre_680_);
lean_closure_set(v___f_739_, 3, v_post_681_);
lean_closure_set(v___f_739_, 4, v_x_682_);
lean_closure_set(v___f_739_, 5, v_x_683_);
lean_closure_set(v___f_739_, 6, v___y_688_);
v___x_740_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_e_738_, v___y_688_);
v___x_741_ = lean_apply_4(v_toBind_684_, lean_box(0), lean_box(0), v___x_740_, v___f_739_);
return v___x_741_;
}
default: 
{
lean_object* v_e_x3f_742_; 
lean_dec_ref(v_toApplicative_677_);
v_e_x3f_742_ = lean_ctor_get(v_____do__lift_687_, 0);
lean_inc(v_e_x3f_742_);
lean_dec_ref(v_____do__lift_687_);
if (lean_obj_tag(v_e_x3f_742_) == 0)
{
v___y_690_ = v_e_686_;
goto v___jp_689_;
}
else
{
lean_object* v_val_743_; 
lean_dec_ref(v_e_686_);
v_val_743_ = lean_ctor_get(v_e_x3f_742_, 0);
lean_inc(v_val_743_);
lean_dec_ref(v_e_x3f_742_);
v___y_690_ = v_val_743_;
goto v___jp_689_;
}
}
}
v___jp_689_:
{
switch(lean_obj_tag(v___y_690_))
{
case 7:
{
lean_object* v_binderName_691_; lean_object* v_binderType_692_; lean_object* v_body_693_; uint8_t v_binderInfo_694_; lean_object* v___x_695_; lean_object* v___f_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec(v___f_685_);
v_binderName_691_ = lean_ctor_get(v___y_690_, 0);
lean_inc(v_binderName_691_);
v_binderType_692_ = lean_ctor_get(v___y_690_, 1);
lean_inc_ref_n(v_binderType_692_, 2);
v_body_693_ = lean_ctor_get(v___y_690_, 2);
lean_inc_ref(v_body_693_);
v_binderInfo_694_ = lean_ctor_get_uint8(v___y_690_, sizeof(void*)*3 + 8);
v___x_695_ = lean_box(v_binderInfo_694_);
lean_inc(v_toBind_684_);
lean_inc(v___y_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_696_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed), 14, 13);
lean_closure_set(v___f_696_, 0, v_binderName_691_);
lean_closure_set(v___f_696_, 1, v___x_695_);
lean_closure_set(v___f_696_, 2, v_inst_678_);
lean_closure_set(v___f_696_, 3, v_inst_679_);
lean_closure_set(v___f_696_, 4, v_pre_680_);
lean_closure_set(v___f_696_, 5, v_post_681_);
lean_closure_set(v___f_696_, 6, v_x_682_);
lean_closure_set(v___f_696_, 7, v_x_683_);
lean_closure_set(v___f_696_, 8, v___y_688_);
lean_closure_set(v___f_696_, 9, v___y_690_);
lean_closure_set(v___f_696_, 10, v_binderType_692_);
lean_closure_set(v___f_696_, 11, v_body_693_);
lean_closure_set(v___f_696_, 12, v_toBind_684_);
v___x_697_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_binderType_692_, v___y_688_);
v___x_698_ = lean_apply_4(v_toBind_684_, lean_box(0), lean_box(0), v___x_697_, v___f_696_);
return v___x_698_;
}
case 6:
{
lean_object* v_binderName_699_; lean_object* v_binderType_700_; lean_object* v_body_701_; uint8_t v_binderInfo_702_; lean_object* v___x_703_; lean_object* v___f_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec(v___f_685_);
v_binderName_699_ = lean_ctor_get(v___y_690_, 0);
lean_inc(v_binderName_699_);
v_binderType_700_ = lean_ctor_get(v___y_690_, 1);
lean_inc_ref_n(v_binderType_700_, 2);
v_body_701_ = lean_ctor_get(v___y_690_, 2);
lean_inc_ref(v_body_701_);
v_binderInfo_702_ = lean_ctor_get_uint8(v___y_690_, sizeof(void*)*3 + 8);
v___x_703_ = lean_box(v_binderInfo_702_);
lean_inc(v_toBind_684_);
lean_inc(v___y_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_704_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed), 14, 13);
lean_closure_set(v___f_704_, 0, v_binderName_699_);
lean_closure_set(v___f_704_, 1, v___x_703_);
lean_closure_set(v___f_704_, 2, v_inst_678_);
lean_closure_set(v___f_704_, 3, v_inst_679_);
lean_closure_set(v___f_704_, 4, v_pre_680_);
lean_closure_set(v___f_704_, 5, v_post_681_);
lean_closure_set(v___f_704_, 6, v_x_682_);
lean_closure_set(v___f_704_, 7, v_x_683_);
lean_closure_set(v___f_704_, 8, v___y_688_);
lean_closure_set(v___f_704_, 9, v___y_690_);
lean_closure_set(v___f_704_, 10, v_binderType_700_);
lean_closure_set(v___f_704_, 11, v_body_701_);
lean_closure_set(v___f_704_, 12, v_toBind_684_);
v___x_705_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_binderType_700_, v___y_688_);
v___x_706_ = lean_apply_4(v_toBind_684_, lean_box(0), lean_box(0), v___x_705_, v___f_704_);
return v___x_706_;
}
case 8:
{
lean_object* v_declName_707_; lean_object* v_type_708_; lean_object* v_value_709_; lean_object* v_body_710_; uint8_t v_nondep_711_; lean_object* v___x_712_; lean_object* v___f_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec(v___f_685_);
v_declName_707_ = lean_ctor_get(v___y_690_, 0);
lean_inc(v_declName_707_);
v_type_708_ = lean_ctor_get(v___y_690_, 1);
lean_inc_ref_n(v_type_708_, 2);
v_value_709_ = lean_ctor_get(v___y_690_, 2);
lean_inc_ref(v_value_709_);
v_body_710_ = lean_ctor_get(v___y_690_, 3);
lean_inc_ref(v_body_710_);
v_nondep_711_ = lean_ctor_get_uint8(v___y_690_, sizeof(void*)*4 + 8);
v___x_712_ = lean_box(v_nondep_711_);
lean_inc(v_toBind_684_);
lean_inc(v___y_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_713_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed), 15, 14);
lean_closure_set(v___f_713_, 0, v_declName_707_);
lean_closure_set(v___f_713_, 1, v___x_712_);
lean_closure_set(v___f_713_, 2, v_inst_678_);
lean_closure_set(v___f_713_, 3, v_inst_679_);
lean_closure_set(v___f_713_, 4, v_pre_680_);
lean_closure_set(v___f_713_, 5, v_post_681_);
lean_closure_set(v___f_713_, 6, v_x_682_);
lean_closure_set(v___f_713_, 7, v_x_683_);
lean_closure_set(v___f_713_, 8, v___y_688_);
lean_closure_set(v___f_713_, 9, v_body_710_);
lean_closure_set(v___f_713_, 10, v___y_690_);
lean_closure_set(v___f_713_, 11, v_type_708_);
lean_closure_set(v___f_713_, 12, v_value_709_);
lean_closure_set(v___f_713_, 13, v_toBind_684_);
v___x_714_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_type_708_, v___y_688_);
v___x_715_ = lean_apply_4(v_toBind_684_, lean_box(0), lean_box(0), v___x_714_, v___f_713_);
return v___x_715_;
}
case 5:
{
lean_object* v_dummy_716_; lean_object* v_nargs_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_2110__overap_721_; lean_object* v___x_722_; 
lean_dec(v_toBind_684_);
lean_dec(v_x_683_);
lean_dec(v_post_681_);
lean_dec(v_pre_680_);
lean_dec_ref(v_inst_679_);
lean_dec_ref(v_inst_678_);
v_dummy_716_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_717_ = l_Lean_Expr_getAppNumArgs(v___y_690_);
lean_inc(v_nargs_717_);
v___x_718_ = lean_mk_array(v_nargs_717_, v_dummy_716_);
v___x_719_ = lean_unsigned_to_nat(1u);
v___x_720_ = lean_nat_sub(v_nargs_717_, v___x_719_);
lean_dec(v_nargs_717_);
v___x_2110__overap_721_ = l_Lean_Expr_withAppAux___redArg(v___f_685_, v___y_690_, v___x_718_, v___x_720_);
lean_inc(v___y_688_);
v___x_722_ = lean_apply_1(v___x_2110__overap_721_, v___y_688_);
return v___x_722_;
}
case 10:
{
lean_object* v_data_723_; lean_object* v_expr_724_; lean_object* v___f_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec(v___f_685_);
v_data_723_ = lean_ctor_get(v___y_690_, 0);
lean_inc(v_data_723_);
v_expr_724_ = lean_ctor_get(v___y_690_, 1);
lean_inc_ref_n(v_expr_724_, 2);
lean_inc(v___y_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_725_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed), 11, 10);
lean_closure_set(v___f_725_, 0, v_expr_724_);
lean_closure_set(v___f_725_, 1, v_data_723_);
lean_closure_set(v___f_725_, 2, v_inst_678_);
lean_closure_set(v___f_725_, 3, v_inst_679_);
lean_closure_set(v___f_725_, 4, v_pre_680_);
lean_closure_set(v___f_725_, 5, v_post_681_);
lean_closure_set(v___f_725_, 6, v_x_682_);
lean_closure_set(v___f_725_, 7, v_x_683_);
lean_closure_set(v___f_725_, 8, v___y_688_);
lean_closure_set(v___f_725_, 9, v___y_690_);
v___x_726_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_expr_724_, v___y_688_);
v___x_727_ = lean_apply_4(v_toBind_684_, lean_box(0), lean_box(0), v___x_726_, v___f_725_);
return v___x_727_;
}
case 11:
{
lean_object* v_typeName_728_; lean_object* v_idx_729_; lean_object* v_struct_730_; lean_object* v___f_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v___f_685_);
v_typeName_728_ = lean_ctor_get(v___y_690_, 0);
lean_inc(v_typeName_728_);
v_idx_729_ = lean_ctor_get(v___y_690_, 1);
lean_inc(v_idx_729_);
v_struct_730_ = lean_ctor_get(v___y_690_, 2);
lean_inc_ref_n(v_struct_730_, 2);
lean_inc(v___y_688_);
lean_inc(v_x_683_);
lean_inc(v_post_681_);
lean_inc(v_pre_680_);
lean_inc_ref(v_inst_679_);
lean_inc_ref(v_inst_678_);
v___f_731_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed), 12, 11);
lean_closure_set(v___f_731_, 0, v_struct_730_);
lean_closure_set(v___f_731_, 1, v_typeName_728_);
lean_closure_set(v___f_731_, 2, v_idx_729_);
lean_closure_set(v___f_731_, 3, v_inst_678_);
lean_closure_set(v___f_731_, 4, v_inst_679_);
lean_closure_set(v___f_731_, 5, v_pre_680_);
lean_closure_set(v___f_731_, 6, v_post_681_);
lean_closure_set(v___f_731_, 7, v_x_682_);
lean_closure_set(v___f_731_, 8, v_x_683_);
lean_closure_set(v___f_731_, 9, v___y_688_);
lean_closure_set(v___f_731_, 10, v___y_690_);
v___x_732_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v_struct_730_, v___y_688_);
v___x_733_ = lean_apply_4(v_toBind_684_, lean_box(0), lean_box(0), v___x_732_, v___f_731_);
return v___x_733_;
}
default: 
{
lean_object* v___x_734_; 
lean_dec(v___f_685_);
lean_dec(v_toBind_684_);
v___x_734_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_678_, v_inst_679_, v_pre_680_, v_post_681_, v_x_682_, v_x_683_, v___y_690_, v___y_688_);
return v___x_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed(lean_object* v_toApplicative_744_, lean_object* v_inst_745_, lean_object* v_inst_746_, lean_object* v_pre_747_, lean_object* v_post_748_, lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v_toBind_751_, lean_object* v___f_752_, lean_object* v_e_753_, lean_object* v_____do__lift_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(v_toApplicative_744_, v_inst_745_, v_inst_746_, v_pre_747_, v_post_748_, v_x_749_, v_x_750_, v_toBind_751_, v___f_752_, v_e_753_, v_____do__lift_754_, v___y_755_);
lean_dec(v___y_755_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object* v_inst_757_, lean_object* v_inst_758_, lean_object* v_pre_759_, lean_object* v_post_760_, lean_object* v_x_761_, lean_object* v_x_762_, lean_object* v_e_763_, lean_object* v_a_764_){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___f_769_; lean_object* v___f_770_; lean_object* v___x_771_; lean_object* v_toApplicative_772_; lean_object* v_toBind_773_; lean_object* v___f_774_; lean_object* v___f_775_; lean_object* v___f_776_; lean_object* v___f_777_; lean_object* v___f_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_765_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_766_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref_n(v_inst_757_, 3);
v___x_767_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_761_, v___x_765_, v___x_766_, v_inst_757_);
v___x_768_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_761_, v___x_765_, v___x_766_);
lean_inc_ref_n(v_inst_758_, 3);
lean_inc_ref(v___x_768_);
v___f_769_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_769_, 0, v___x_768_);
lean_closure_set(v___f_769_, 1, v_inst_758_);
v___f_770_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_770_, 0, v___x_768_);
lean_closure_set(v___f_770_, 1, v_inst_758_);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v___f_769_);
lean_ctor_set(v___x_771_, 1, v___f_770_);
v_toApplicative_772_ = lean_ctor_get(v_inst_757_, 0);
lean_inc_ref_n(v_toApplicative_772_, 4);
v_toBind_773_ = lean_ctor_get(v_inst_757_, 1);
lean_inc_n(v_toBind_773_, 6);
lean_inc_n(v_x_762_, 3);
lean_inc_n(v_a_764_, 3);
lean_inc_ref_n(v_e_763_, 3);
v___f_774_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_774_, 0, v_toApplicative_772_);
lean_closure_set(v___f_774_, 1, v___x_765_);
lean_closure_set(v___f_774_, 2, v___x_766_);
lean_closure_set(v___f_774_, 3, v_e_763_);
lean_closure_set(v___f_774_, 4, v_a_764_);
lean_closure_set(v___f_774_, 5, v_x_762_);
lean_closure_set(v___f_774_, 6, v_toBind_773_);
v___f_775_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_775_, 0, v_toApplicative_772_);
lean_closure_set(v___f_775_, 1, v___x_765_);
lean_closure_set(v___f_775_, 2, v___x_766_);
lean_closure_set(v___f_775_, 3, v_e_763_);
lean_inc_ref(v___x_767_);
lean_inc(v_post_760_);
lean_inc_n(v_pre_759_, 2);
v___f_776_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed), 11, 8);
lean_closure_set(v___f_776_, 0, v_inst_757_);
lean_closure_set(v___f_776_, 1, v_inst_758_);
lean_closure_set(v___f_776_, 2, v_pre_759_);
lean_closure_set(v___f_776_, 3, v_post_760_);
lean_closure_set(v___f_776_, 4, v_x_761_);
lean_closure_set(v___f_776_, 5, v_x_762_);
lean_closure_set(v___f_776_, 6, v___x_767_);
lean_closure_set(v___f_776_, 7, v_toBind_773_);
v___f_777_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed), 12, 10);
lean_closure_set(v___f_777_, 0, v_toApplicative_772_);
lean_closure_set(v___f_777_, 1, v_inst_757_);
lean_closure_set(v___f_777_, 2, v_inst_758_);
lean_closure_set(v___f_777_, 3, v_pre_759_);
lean_closure_set(v___f_777_, 4, v_post_760_);
lean_closure_set(v___f_777_, 5, v_x_761_);
lean_closure_set(v___f_777_, 6, v_x_762_);
lean_closure_set(v___f_777_, 7, v_toBind_773_);
lean_closure_set(v___f_777_, 8, v___f_776_);
lean_closure_set(v___f_777_, 9, v_e_763_);
v___f_778_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed), 14, 13);
lean_closure_set(v___f_778_, 0, v_pre_759_);
lean_closure_set(v___f_778_, 1, v_e_763_);
lean_closure_set(v___f_778_, 2, v_x_761_);
lean_closure_set(v___f_778_, 3, v___x_765_);
lean_closure_set(v___f_778_, 4, v___x_766_);
lean_closure_set(v___f_778_, 5, v_inst_757_);
lean_closure_set(v___f_778_, 6, v___f_777_);
lean_closure_set(v___f_778_, 7, v___x_767_);
lean_closure_set(v___f_778_, 8, v___x_771_);
lean_closure_set(v___f_778_, 9, v_a_764_);
lean_closure_set(v___f_778_, 10, v_toBind_773_);
lean_closure_set(v___f_778_, 11, v___f_774_);
lean_closure_set(v___f_778_, 12, v_toApplicative_772_);
v___x_779_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_779_, 0, lean_box(0));
lean_closure_set(v___x_779_, 1, lean_box(0));
lean_closure_set(v___x_779_, 2, v_a_764_);
v___x_780_ = lean_apply_2(v_x_762_, lean_box(0), v___x_779_);
v___x_781_ = lean_apply_4(v_toBind_773_, lean_box(0), lean_box(0), v___x_780_, v___f_775_);
v___x_782_ = lean_apply_4(v_toBind_773_, lean_box(0), lean_box(0), v___x_781_, v___f_778_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_783_, lean_object* v_inst_784_, lean_object* v_inst_785_, lean_object* v_pre_786_, lean_object* v_post_787_, lean_object* v_x_788_, lean_object* v_x_789_, lean_object* v_a_790_, lean_object* v_e_791_, lean_object* v_a_792_){
_start:
{
lean_object* v___y_794_; 
switch(lean_obj_tag(v_a_792_))
{
case 0:
{
lean_object* v_e_797_; lean_object* v_toPure_798_; lean_object* v___x_799_; 
lean_dec_ref(v_e_791_);
lean_dec(v_x_789_);
lean_dec(v_post_787_);
lean_dec(v_pre_786_);
lean_dec_ref(v_inst_785_);
lean_dec_ref(v_inst_784_);
v_e_797_ = lean_ctor_get(v_a_792_, 0);
lean_inc_ref(v_e_797_);
lean_dec_ref(v_a_792_);
v_toPure_798_ = lean_ctor_get(v_toApplicative_783_, 1);
lean_inc(v_toPure_798_);
lean_dec_ref(v_toApplicative_783_);
v___x_799_ = lean_apply_2(v_toPure_798_, lean_box(0), v_e_797_);
return v___x_799_;
}
case 1:
{
lean_object* v_e_800_; lean_object* v___x_801_; 
lean_dec_ref(v_e_791_);
lean_dec_ref(v_toApplicative_783_);
v_e_800_ = lean_ctor_get(v_a_792_, 0);
lean_inc_ref(v_e_800_);
lean_dec_ref(v_a_792_);
v___x_801_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_784_, v_inst_785_, v_pre_786_, v_post_787_, v_x_788_, v_x_789_, v_e_800_, v_a_790_);
return v___x_801_;
}
default: 
{
lean_object* v_e_x3f_802_; 
lean_dec(v_x_789_);
lean_dec(v_post_787_);
lean_dec(v_pre_786_);
lean_dec_ref(v_inst_785_);
lean_dec_ref(v_inst_784_);
v_e_x3f_802_ = lean_ctor_get(v_a_792_, 0);
lean_inc(v_e_x3f_802_);
lean_dec_ref(v_a_792_);
if (lean_obj_tag(v_e_x3f_802_) == 0)
{
v___y_794_ = v_e_791_;
goto v___jp_793_;
}
else
{
lean_object* v_val_803_; 
lean_dec_ref(v_e_791_);
v_val_803_ = lean_ctor_get(v_e_x3f_802_, 0);
lean_inc(v_val_803_);
lean_dec_ref(v_e_x3f_802_);
v___y_794_ = v_val_803_;
goto v___jp_793_;
}
}
}
v___jp_793_:
{
lean_object* v_toPure_795_; lean_object* v___x_796_; 
v_toPure_795_ = lean_ctor_get(v_toApplicative_783_, 1);
lean_inc(v_toPure_795_);
lean_dec_ref(v_toApplicative_783_);
v___x_796_ = lean_apply_2(v_toPure_795_, lean_box(0), v___y_794_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_804_, lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_pre_807_, lean_object* v_post_808_, lean_object* v_x_809_, lean_object* v_x_810_, lean_object* v_a_811_, lean_object* v_e_812_, lean_object* v_a_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(v_toApplicative_804_, v_inst_805_, v_inst_806_, v_pre_807_, v_post_808_, v_x_809_, v_x_810_, v_a_811_, v_e_812_, v_a_813_);
lean_dec(v_a_811_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object* v_inst_815_, lean_object* v_inst_816_, lean_object* v_pre_817_, lean_object* v_post_818_, lean_object* v_x_819_, lean_object* v_x_820_, lean_object* v_e_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_toApplicative_823_; lean_object* v_toBind_824_; lean_object* v___f_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_toApplicative_823_ = lean_ctor_get(v_inst_815_, 0);
lean_inc_ref(v_toApplicative_823_);
v_toBind_824_ = lean_ctor_get(v_inst_815_, 1);
lean_inc(v_toBind_824_);
lean_inc_ref(v_e_821_);
lean_inc(v_a_822_);
lean_inc(v_post_818_);
v___f_825_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed), 10, 9);
lean_closure_set(v___f_825_, 0, v_toApplicative_823_);
lean_closure_set(v___f_825_, 1, v_inst_815_);
lean_closure_set(v___f_825_, 2, v_inst_816_);
lean_closure_set(v___f_825_, 3, v_pre_817_);
lean_closure_set(v___f_825_, 4, v_post_818_);
lean_closure_set(v___f_825_, 5, v_x_819_);
lean_closure_set(v___f_825_, 6, v_x_820_);
lean_closure_set(v___f_825_, 7, v_a_822_);
lean_closure_set(v___f_825_, 8, v_e_821_);
v___x_826_ = lean_apply_1(v_post_818_, v_e_821_);
v___x_827_ = lean_apply_4(v_toBind_824_, lean_box(0), lean_box(0), v___x_826_, v___f_825_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object* v_inst_828_, lean_object* v_inst_829_, lean_object* v_pre_830_, lean_object* v_post_831_, lean_object* v_x_832_, lean_object* v_x_833_, lean_object* v___y_834_, lean_object* v_a_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_828_, v_inst_829_, v_pre_830_, v_post_831_, v_x_832_, v_x_833_, v_a_835_, v___y_834_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object* v_inst_837_, lean_object* v_inst_838_, lean_object* v_pre_839_, lean_object* v_post_840_, lean_object* v_x_841_, lean_object* v_x_842_, lean_object* v_e_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_837_, v_inst_838_, v_pre_839_, v_post_840_, v_x_841_, v_x_842_, v_e_843_, v_a_844_);
lean_dec(v_a_844_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object* v_m_846_, lean_object* v_inst_847_, lean_object* v_inst_848_, lean_object* v_pre_849_, lean_object* v_post_850_, lean_object* v_x_851_, lean_object* v_x_852_, lean_object* v_e_853_, lean_object* v_a_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_847_, v_inst_848_, v_pre_849_, v_post_850_, v_x_851_, v_x_852_, v_e_853_, v_a_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object* v_m_856_, lean_object* v_inst_857_, lean_object* v_inst_858_, lean_object* v_pre_859_, lean_object* v_post_860_, lean_object* v_x_861_, lean_object* v_x_862_, lean_object* v_e_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(v_m_856_, v_inst_857_, v_inst_858_, v_pre_859_, v_post_860_, v_x_861_, v_x_862_, v_e_863_, v_a_864_);
lean_dec(v_a_864_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object* v_m_866_, lean_object* v_inst_867_, lean_object* v_inst_868_, lean_object* v_pre_869_, lean_object* v_post_870_, lean_object* v_x_871_, lean_object* v_x_872_, lean_object* v_e_873_, lean_object* v_a_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_867_, v_inst_868_, v_pre_869_, v_post_870_, v_x_871_, v_x_872_, v_e_873_, v_a_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object* v_m_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_pre_879_, lean_object* v_post_880_, lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_e_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(v_m_876_, v_inst_877_, v_inst_878_, v_pre_879_, v_post_880_, v_x_881_, v_x_882_, v_e_883_, v_a_884_);
lean_dec(v_a_884_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object* v_x_886_){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = lean_apply_1(v_x_886_, lean_box(0));
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object* v_x_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_Core_transform___redArg___lam__0(v_x_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object* v_inst_893_, lean_object* v_00_u03b1_894_, lean_object* v_x_895_){
_start:
{
lean_object* v___f_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___f_896_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_896_, 0, v_x_895_);
v___x_897_ = lean_alloc_closure((void*)(l_Lean_Core_liftIOCore___boxed), 5, 2);
lean_closure_set(v___x_897_, 0, lean_box(0));
lean_closure_set(v___x_897_, 1, v___f_896_);
v___x_898_ = lean_apply_2(v_inst_893_, lean_box(0), v___x_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object* v_toPure_899_, lean_object* v_____x_900_){
_start:
{
lean_object* v_fst_901_; lean_object* v___x_902_; 
v_fst_901_ = lean_ctor_get(v_____x_900_, 0);
lean_inc(v_fst_901_);
lean_dec_ref(v_____x_900_);
v___x_902_ = lean_apply_2(v_toPure_899_, lean_box(0), v_fst_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object* v_a_903_, lean_object* v_toPure_904_, lean_object* v_s_905_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_906_, 0, v_a_903_);
lean_ctor_set(v___x_906_, 1, v_s_905_);
v___x_907_ = lean_apply_2(v_toPure_904_, lean_box(0), v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object* v_toPure_908_, lean_object* v_ref_909_, lean_object* v_x_910_, lean_object* v_toBind_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___f_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___f_913_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__3), 3, 2);
lean_closure_set(v___f_913_, 0, v_a_912_);
lean_closure_set(v___f_913_, 1, v_toPure_908_);
v___x_914_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_914_, 0, lean_box(0));
lean_closure_set(v___x_914_, 1, lean_box(0));
lean_closure_set(v___x_914_, 2, v_ref_909_);
v___x_915_ = lean_apply_2(v_x_910_, lean_box(0), v___x_914_);
v___x_916_ = lean_apply_4(v_toBind_911_, lean_box(0), lean_box(0), v___x_915_, v___f_913_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object* v_toPure_917_, lean_object* v_x_918_, lean_object* v_toBind_919_, lean_object* v_inst_920_, lean_object* v_inst_921_, lean_object* v_pre_922_, lean_object* v_post_923_, lean_object* v_x_924_, lean_object* v_input_925_, lean_object* v_ref_926_){
_start:
{
lean_object* v___f_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_inc(v_toBind_919_);
lean_inc(v_x_918_);
lean_inc(v_ref_926_);
v___f_927_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_927_, 0, v_toPure_917_);
lean_closure_set(v___f_927_, 1, v_ref_926_);
lean_closure_set(v___f_927_, 2, v_x_918_);
lean_closure_set(v___f_927_, 3, v_toBind_919_);
v___x_928_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_920_, v_inst_921_, v_pre_922_, v_post_923_, v_x_924_, v_x_918_, v_input_925_, v_ref_926_);
lean_dec(v_ref_926_);
v___x_929_ = lean_apply_4(v_toBind_919_, lean_box(0), lean_box(0), v___x_928_, v___f_927_);
return v___x_929_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_930_ = lean_box(0);
v___x_931_ = lean_unsigned_to_nat(16u);
v___x_932_ = lean_mk_array(v___x_931_, v___x_930_);
return v___x_932_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_933_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__0, &l_Lean_Core_transform___redArg___closed__0_once, _init_l_Lean_Core_transform___redArg___closed__0);
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
return v___x_935_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__1, &l_Lean_Core_transform___redArg___closed__1_once, _init_l_Lean_Core_transform___redArg___closed__1);
v___x_937_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_937_, 0, lean_box(0));
lean_closure_set(v___x_937_, 1, lean_box(0));
lean_closure_set(v___x_937_, 2, v___x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object* v_inst_938_, lean_object* v_inst_939_, lean_object* v_inst_940_, lean_object* v_input_941_, lean_object* v_pre_942_, lean_object* v_post_943_){
_start:
{
lean_object* v_x_944_; lean_object* v_toApplicative_945_; lean_object* v_toBind_946_; lean_object* v_toPure_947_; lean_object* v_x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___f_951_; lean_object* v___f_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v_x_944_ = lean_box(0);
v_toApplicative_945_ = lean_ctor_get(v_inst_938_, 0);
v_toBind_946_ = lean_ctor_get(v_inst_938_, 1);
lean_inc_n(v_toBind_946_, 3);
v_toPure_947_ = lean_ctor_get(v_toApplicative_945_, 1);
lean_inc_n(v_toPure_947_, 2);
lean_inc(v_inst_939_);
v_x_948_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__1), 3, 1);
lean_closure_set(v_x_948_, 0, v_inst_939_);
v___x_949_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_950_ = l_Lean_Core_transform___redArg___lam__1(v_inst_939_, lean_box(0), v___x_949_);
v___f_951_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_951_, 0, v_toPure_947_);
v___f_952_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__5), 10, 9);
lean_closure_set(v___f_952_, 0, v_toPure_947_);
lean_closure_set(v___f_952_, 1, v_x_948_);
lean_closure_set(v___f_952_, 2, v_toBind_946_);
lean_closure_set(v___f_952_, 3, v_inst_938_);
lean_closure_set(v___f_952_, 4, v_inst_940_);
lean_closure_set(v___f_952_, 5, v_pre_942_);
lean_closure_set(v___f_952_, 6, v_post_943_);
lean_closure_set(v___f_952_, 7, v_x_944_);
lean_closure_set(v___f_952_, 8, v_input_941_);
v___x_953_ = lean_apply_4(v_toBind_946_, lean_box(0), lean_box(0), v___x_950_, v___f_952_);
v___x_954_ = lean_apply_4(v_toBind_946_, lean_box(0), lean_box(0), v___x_953_, v___f_951_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object* v_m_955_, lean_object* v_inst_956_, lean_object* v_inst_957_, lean_object* v_inst_958_, lean_object* v_input_959_, lean_object* v_pre_960_, lean_object* v_post_961_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lean_Core_transform___redArg(v_inst_956_, v_inst_957_, v_inst_958_, v_input_959_, v_pre_960_, v_post_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object* v_e_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
uint8_t v___x_969_; uint8_t v___x_970_; 
v___x_969_ = 0;
v___x_970_ = l_Lean_Expr_isHeadBetaTarget(v_e_965_, v___x_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_dec_ref(v_e_965_);
v___x_971_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
return v___x_972_;
}
else
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_973_ = l_Lean_Expr_headBeta(v_e_965_);
v___x_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
v___x_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object* v_e_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_Core_betaReduce___lam__0(v_e_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object* v_e_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v_e_981_);
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object* v_e_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lean_Core_betaReduce___lam__1(v_e_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
return v_res_991_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = l_Lean_maxRecDepthErrorMessage;
v___x_998_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_1000_ = l_Lean_MessageData_ofFormat(v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1001_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_1002_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_1003_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
lean_ctor_set(v___x_1003_, 1, v___x_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v_ref_1004_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1009_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object* v_x_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___y_1018_; lean_object* v_fileName_1027_; lean_object* v_fileMap_1028_; lean_object* v_options_1029_; lean_object* v_currRecDepth_1030_; lean_object* v_maxRecDepth_1031_; lean_object* v_ref_1032_; lean_object* v_currNamespace_1033_; lean_object* v_openDecls_1034_; lean_object* v_initHeartbeats_1035_; lean_object* v_maxHeartbeats_1036_; lean_object* v_quotContext_1037_; lean_object* v_currMacroScope_1038_; uint8_t v_diag_1039_; lean_object* v_cancelTk_x3f_1040_; uint8_t v_suppressElabErrors_1041_; lean_object* v_inheritedTraceOptions_1042_; lean_object* v___x_1048_; uint8_t v___x_1049_; 
v_fileName_1027_ = lean_ctor_get(v___y_1014_, 0);
v_fileMap_1028_ = lean_ctor_get(v___y_1014_, 1);
v_options_1029_ = lean_ctor_get(v___y_1014_, 2);
v_currRecDepth_1030_ = lean_ctor_get(v___y_1014_, 3);
v_maxRecDepth_1031_ = lean_ctor_get(v___y_1014_, 4);
v_ref_1032_ = lean_ctor_get(v___y_1014_, 5);
v_currNamespace_1033_ = lean_ctor_get(v___y_1014_, 6);
v_openDecls_1034_ = lean_ctor_get(v___y_1014_, 7);
v_initHeartbeats_1035_ = lean_ctor_get(v___y_1014_, 8);
v_maxHeartbeats_1036_ = lean_ctor_get(v___y_1014_, 9);
v_quotContext_1037_ = lean_ctor_get(v___y_1014_, 10);
v_currMacroScope_1038_ = lean_ctor_get(v___y_1014_, 11);
v_diag_1039_ = lean_ctor_get_uint8(v___y_1014_, sizeof(void*)*14);
v_cancelTk_x3f_1040_ = lean_ctor_get(v___y_1014_, 12);
v_suppressElabErrors_1041_ = lean_ctor_get_uint8(v___y_1014_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1042_ = lean_ctor_get(v___y_1014_, 13);
v___x_1048_ = lean_unsigned_to_nat(0u);
v___x_1049_ = lean_nat_dec_eq(v_maxRecDepth_1031_, v___x_1048_);
if (v___x_1049_ == 0)
{
uint8_t v___x_1050_; 
v___x_1050_ = lean_nat_dec_eq(v_currRecDepth_1030_, v_maxRecDepth_1031_);
if (v___x_1050_ == 0)
{
goto v___jp_1043_;
}
else
{
lean_object* v___x_1051_; 
lean_dec_ref(v_x_1012_);
lean_inc(v_ref_1032_);
v___x_1051_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1032_);
v___y_1018_ = v___x_1051_;
goto v___jp_1017_;
}
}
else
{
goto v___jp_1043_;
}
v___jp_1017_:
{
if (lean_obj_tag(v___y_1018_) == 0)
{
return v___y_1018_;
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
v_a_1019_ = lean_ctor_get(v___y_1018_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___y_1018_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___y_1018_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___y_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
v___jp_1043_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = lean_nat_add(v_currRecDepth_1030_, v___x_1044_);
lean_inc_ref(v_inheritedTraceOptions_1042_);
lean_inc(v_cancelTk_x3f_1040_);
lean_inc(v_currMacroScope_1038_);
lean_inc(v_quotContext_1037_);
lean_inc(v_maxHeartbeats_1036_);
lean_inc(v_initHeartbeats_1035_);
lean_inc(v_openDecls_1034_);
lean_inc(v_currNamespace_1033_);
lean_inc(v_ref_1032_);
lean_inc(v_maxRecDepth_1031_);
lean_inc_ref(v_options_1029_);
lean_inc_ref(v_fileMap_1028_);
lean_inc_ref(v_fileName_1027_);
v___x_1046_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1046_, 0, v_fileName_1027_);
lean_ctor_set(v___x_1046_, 1, v_fileMap_1028_);
lean_ctor_set(v___x_1046_, 2, v_options_1029_);
lean_ctor_set(v___x_1046_, 3, v___x_1045_);
lean_ctor_set(v___x_1046_, 4, v_maxRecDepth_1031_);
lean_ctor_set(v___x_1046_, 5, v_ref_1032_);
lean_ctor_set(v___x_1046_, 6, v_currNamespace_1033_);
lean_ctor_set(v___x_1046_, 7, v_openDecls_1034_);
lean_ctor_set(v___x_1046_, 8, v_initHeartbeats_1035_);
lean_ctor_set(v___x_1046_, 9, v_maxHeartbeats_1036_);
lean_ctor_set(v___x_1046_, 10, v_quotContext_1037_);
lean_ctor_set(v___x_1046_, 11, v_currMacroScope_1038_);
lean_ctor_set(v___x_1046_, 12, v_cancelTk_x3f_1040_);
lean_ctor_set(v___x_1046_, 13, v_inheritedTraceOptions_1042_);
lean_ctor_set_uint8(v___x_1046_, sizeof(void*)*14, v_diag_1039_);
lean_ctor_set_uint8(v___x_1046_, sizeof(void*)*14 + 1, v_suppressElabErrors_1041_);
lean_inc(v___y_1015_);
lean_inc(v___y_1013_);
v___x_1047_ = lean_apply_4(v_x_1012_, v___y_1013_, v___x_1046_, v___y_1015_, lean_box(0));
v___y_1018_ = v___x_1047_;
goto v___jp_1017_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_1058_, lean_object* v_x_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_apply_1(v_x_1059_, lean_box(0));
v___x_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1065_, lean_object* v_x_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(v_00_u03b1_1065_, v_x_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1070_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(lean_object* v_a_1071_, lean_object* v_x_1072_){
_start:
{
if (lean_obj_tag(v_x_1072_) == 0)
{
uint8_t v___x_1073_; 
v___x_1073_ = 0;
return v___x_1073_;
}
else
{
lean_object* v_key_1074_; lean_object* v_tail_1075_; uint8_t v___x_1076_; 
v_key_1074_ = lean_ctor_get(v_x_1072_, 0);
v_tail_1075_ = lean_ctor_get(v_x_1072_, 2);
v___x_1076_ = l_Lean_ExprStructEq_beq(v_key_1074_, v_a_1071_);
if (v___x_1076_ == 0)
{
v_x_1072_ = v_tail_1075_;
goto _start;
}
else
{
return v___x_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object* v_a_1078_, lean_object* v_x_1079_){
_start:
{
uint8_t v_res_1080_; lean_object* v_r_1081_; 
v_res_1080_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(v_a_1078_, v_x_1079_);
lean_dec(v_x_1079_);
lean_dec_ref(v_a_1078_);
v_r_1081_ = lean_box(v_res_1080_);
return v_r_1081_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object* v_x_1082_, lean_object* v_x_1083_){
_start:
{
if (lean_obj_tag(v_x_1083_) == 0)
{
return v_x_1082_;
}
else
{
lean_object* v_key_1084_; lean_object* v_value_1085_; lean_object* v_tail_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1109_; 
v_key_1084_ = lean_ctor_get(v_x_1083_, 0);
v_value_1085_ = lean_ctor_get(v_x_1083_, 1);
v_tail_1086_ = lean_ctor_get(v_x_1083_, 2);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_x_1083_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1088_ = v_x_1083_;
v_isShared_1089_ = v_isSharedCheck_1109_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_tail_1086_);
lean_inc(v_value_1085_);
lean_inc(v_key_1084_);
lean_dec(v_x_1083_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1109_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1090_; uint64_t v___x_1091_; uint64_t v___x_1092_; uint64_t v___x_1093_; uint64_t v_fold_1094_; uint64_t v___x_1095_; uint64_t v___x_1096_; uint64_t v___x_1097_; size_t v___x_1098_; size_t v___x_1099_; size_t v___x_1100_; size_t v___x_1101_; size_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1090_ = lean_array_get_size(v_x_1082_);
v___x_1091_ = l_Lean_ExprStructEq_hash(v_key_1084_);
v___x_1092_ = 32ULL;
v___x_1093_ = lean_uint64_shift_right(v___x_1091_, v___x_1092_);
v_fold_1094_ = lean_uint64_xor(v___x_1091_, v___x_1093_);
v___x_1095_ = 16ULL;
v___x_1096_ = lean_uint64_shift_right(v_fold_1094_, v___x_1095_);
v___x_1097_ = lean_uint64_xor(v_fold_1094_, v___x_1096_);
v___x_1098_ = lean_uint64_to_usize(v___x_1097_);
v___x_1099_ = lean_usize_of_nat(v___x_1090_);
v___x_1100_ = ((size_t)1ULL);
v___x_1101_ = lean_usize_sub(v___x_1099_, v___x_1100_);
v___x_1102_ = lean_usize_land(v___x_1098_, v___x_1101_);
v___x_1103_ = lean_array_uget_borrowed(v_x_1082_, v___x_1102_);
lean_inc(v___x_1103_);
if (v_isShared_1089_ == 0)
{
lean_ctor_set(v___x_1088_, 2, v___x_1103_);
v___x_1105_ = v___x_1088_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_key_1084_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_value_1085_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_array_uset(v_x_1082_, v___x_1102_, v___x_1105_);
v_x_1082_ = v___x_1106_;
v_x_1083_ = v_tail_1086_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object* v_i_1110_, lean_object* v_source_1111_, lean_object* v_target_1112_){
_start:
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = lean_array_get_size(v_source_1111_);
v___x_1114_ = lean_nat_dec_lt(v_i_1110_, v___x_1113_);
if (v___x_1114_ == 0)
{
lean_dec_ref(v_source_1111_);
lean_dec(v_i_1110_);
return v_target_1112_;
}
else
{
lean_object* v_es_1115_; lean_object* v___x_1116_; lean_object* v_source_1117_; lean_object* v_target_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_es_1115_ = lean_array_fget(v_source_1111_, v_i_1110_);
v___x_1116_ = lean_box(0);
v_source_1117_ = lean_array_fset(v_source_1111_, v_i_1110_, v___x_1116_);
v_target_1118_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_target_1112_, v_es_1115_);
v___x_1119_ = lean_unsigned_to_nat(1u);
v___x_1120_ = lean_nat_add(v_i_1110_, v___x_1119_);
lean_dec(v_i_1110_);
v_i_1110_ = v___x_1120_;
v_source_1111_ = v_source_1117_;
v_target_1112_ = v_target_1118_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_data_1122_){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v_nbuckets_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1123_ = lean_array_get_size(v_data_1122_);
v___x_1124_ = lean_unsigned_to_nat(2u);
v_nbuckets_1125_ = lean_nat_mul(v___x_1123_, v___x_1124_);
v___x_1126_ = lean_unsigned_to_nat(0u);
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_mk_array(v_nbuckets_1125_, v___x_1127_);
v___x_1129_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v___x_1126_, v_data_1122_, v___x_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_a_1130_, lean_object* v_b_1131_, lean_object* v_x_1132_){
_start:
{
if (lean_obj_tag(v_x_1132_) == 0)
{
lean_dec(v_b_1131_);
lean_dec_ref(v_a_1130_);
return v_x_1132_;
}
else
{
lean_object* v_key_1133_; lean_object* v_value_1134_; lean_object* v_tail_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1147_; 
v_key_1133_ = lean_ctor_get(v_x_1132_, 0);
v_value_1134_ = lean_ctor_get(v_x_1132_, 1);
v_tail_1135_ = lean_ctor_get(v_x_1132_, 2);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_x_1132_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1137_ = v_x_1132_;
v_isShared_1138_ = v_isSharedCheck_1147_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_tail_1135_);
lean_inc(v_value_1134_);
lean_inc(v_key_1133_);
lean_dec(v_x_1132_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1147_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
uint8_t v___x_1139_; 
v___x_1139_ = l_Lean_ExprStructEq_beq(v_key_1133_, v_a_1130_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1140_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1130_, v_b_1131_, v_tail_1135_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 2, v___x_1140_);
v___x_1142_ = v___x_1137_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_key_1133_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_value_1134_);
lean_ctor_set(v_reuseFailAlloc_1143_, 2, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
else
{
lean_object* v___x_1145_; 
lean_dec(v_value_1134_);
lean_dec(v_key_1133_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 1, v_b_1131_);
lean_ctor_set(v___x_1137_, 0, v_a_1130_);
v___x_1145_ = v___x_1137_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1130_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v_b_1131_);
lean_ctor_set(v_reuseFailAlloc_1146_, 2, v_tail_1135_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object* v_m_1148_, lean_object* v_a_1149_, lean_object* v_b_1150_){
_start:
{
lean_object* v_size_1151_; lean_object* v_buckets_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1195_; 
v_size_1151_ = lean_ctor_get(v_m_1148_, 0);
v_buckets_1152_ = lean_ctor_get(v_m_1148_, 1);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_m_1148_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1154_ = v_m_1148_;
v_isShared_1155_ = v_isSharedCheck_1195_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_buckets_1152_);
lean_inc(v_size_1151_);
lean_dec(v_m_1148_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1195_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; uint64_t v___x_1157_; uint64_t v___x_1158_; uint64_t v___x_1159_; uint64_t v_fold_1160_; uint64_t v___x_1161_; uint64_t v___x_1162_; uint64_t v___x_1163_; size_t v___x_1164_; size_t v___x_1165_; size_t v___x_1166_; size_t v___x_1167_; size_t v___x_1168_; lean_object* v_bkt_1169_; uint8_t v___x_1170_; 
v___x_1156_ = lean_array_get_size(v_buckets_1152_);
v___x_1157_ = l_Lean_ExprStructEq_hash(v_a_1149_);
v___x_1158_ = 32ULL;
v___x_1159_ = lean_uint64_shift_right(v___x_1157_, v___x_1158_);
v_fold_1160_ = lean_uint64_xor(v___x_1157_, v___x_1159_);
v___x_1161_ = 16ULL;
v___x_1162_ = lean_uint64_shift_right(v_fold_1160_, v___x_1161_);
v___x_1163_ = lean_uint64_xor(v_fold_1160_, v___x_1162_);
v___x_1164_ = lean_uint64_to_usize(v___x_1163_);
v___x_1165_ = lean_usize_of_nat(v___x_1156_);
v___x_1166_ = ((size_t)1ULL);
v___x_1167_ = lean_usize_sub(v___x_1165_, v___x_1166_);
v___x_1168_ = lean_usize_land(v___x_1164_, v___x_1167_);
v_bkt_1169_ = lean_array_uget_borrowed(v_buckets_1152_, v___x_1168_);
v___x_1170_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(v_a_1149_, v_bkt_1169_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; lean_object* v_size_x27_1172_; lean_object* v___x_1173_; lean_object* v_buckets_x27_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1171_ = lean_unsigned_to_nat(1u);
v_size_x27_1172_ = lean_nat_add(v_size_1151_, v___x_1171_);
lean_dec(v_size_1151_);
lean_inc(v_bkt_1169_);
v___x_1173_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1173_, 0, v_a_1149_);
lean_ctor_set(v___x_1173_, 1, v_b_1150_);
lean_ctor_set(v___x_1173_, 2, v_bkt_1169_);
v_buckets_x27_1174_ = lean_array_uset(v_buckets_1152_, v___x_1168_, v___x_1173_);
v___x_1175_ = lean_unsigned_to_nat(4u);
v___x_1176_ = lean_nat_mul(v_size_x27_1172_, v___x_1175_);
v___x_1177_ = lean_unsigned_to_nat(3u);
v___x_1178_ = lean_nat_div(v___x_1176_, v___x_1177_);
lean_dec(v___x_1176_);
v___x_1179_ = lean_array_get_size(v_buckets_x27_1174_);
v___x_1180_ = lean_nat_dec_le(v___x_1178_, v___x_1179_);
lean_dec(v___x_1178_);
if (v___x_1180_ == 0)
{
lean_object* v_val_1181_; lean_object* v___x_1183_; 
v_val_1181_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_buckets_x27_1174_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 1, v_val_1181_);
lean_ctor_set(v___x_1154_, 0, v_size_x27_1172_);
v___x_1183_ = v___x_1154_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_size_x27_1172_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_val_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
else
{
lean_object* v___x_1186_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 1, v_buckets_x27_1174_);
lean_ctor_set(v___x_1154_, 0, v_size_x27_1172_);
v___x_1186_ = v___x_1154_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_size_x27_1172_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v_buckets_x27_1174_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
else
{
lean_object* v___x_1188_; lean_object* v_buckets_x27_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
lean_inc(v_bkt_1169_);
v___x_1188_ = lean_box(0);
v_buckets_x27_1189_ = lean_array_uset(v_buckets_1152_, v___x_1168_, v___x_1188_);
v___x_1190_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1149_, v_b_1150_, v_bkt_1169_);
v___x_1191_ = lean_array_uset(v_buckets_x27_1189_, v___x_1168_, v___x_1190_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 1, v___x_1191_);
v___x_1193_ = v___x_1154_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_size_1151_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object* v_a_1196_, lean_object* v_e_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1200_ = lean_st_ref_take(v_a_1196_);
v___x_1201_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v___x_1200_, v_e_1197_, v_a_1198_);
v___x_1202_ = lean_st_ref_set(v_a_1196_, v___x_1201_);
v___x_1203_ = lean_box(0);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object* v_a_1204_, lean_object* v_e_1205_, lean_object* v_a_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(v_a_1204_, v_e_1205_, v_a_1206_);
lean_dec(v_a_1204_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_1209_, lean_object* v_x_1210_){
_start:
{
if (lean_obj_tag(v_x_1210_) == 0)
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_box(0);
return v___x_1211_;
}
else
{
lean_object* v_key_1212_; lean_object* v_value_1213_; lean_object* v_tail_1214_; uint8_t v___x_1215_; 
v_key_1212_ = lean_ctor_get(v_x_1210_, 0);
v_value_1213_ = lean_ctor_get(v_x_1210_, 1);
v_tail_1214_ = lean_ctor_get(v_x_1210_, 2);
v___x_1215_ = l_Lean_ExprStructEq_beq(v_key_1212_, v_a_1209_);
if (v___x_1215_ == 0)
{
v_x_1210_ = v_tail_1214_;
goto _start;
}
else
{
lean_object* v___x_1217_; 
lean_inc(v_value_1213_);
v___x_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1217_, 0, v_value_1213_);
return v___x_1217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_1218_, lean_object* v_x_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1218_, v_x_1219_);
lean_dec(v_x_1219_);
lean_dec_ref(v_a_1218_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object* v_m_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v_buckets_1223_; lean_object* v___x_1224_; uint64_t v___x_1225_; uint64_t v___x_1226_; uint64_t v___x_1227_; uint64_t v_fold_1228_; uint64_t v___x_1229_; uint64_t v___x_1230_; uint64_t v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; size_t v___x_1234_; size_t v___x_1235_; size_t v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_buckets_1223_ = lean_ctor_get(v_m_1221_, 1);
v___x_1224_ = lean_array_get_size(v_buckets_1223_);
v___x_1225_ = l_Lean_ExprStructEq_hash(v_a_1222_);
v___x_1226_ = 32ULL;
v___x_1227_ = lean_uint64_shift_right(v___x_1225_, v___x_1226_);
v_fold_1228_ = lean_uint64_xor(v___x_1225_, v___x_1227_);
v___x_1229_ = 16ULL;
v___x_1230_ = lean_uint64_shift_right(v_fold_1228_, v___x_1229_);
v___x_1231_ = lean_uint64_xor(v_fold_1228_, v___x_1230_);
v___x_1232_ = lean_uint64_to_usize(v___x_1231_);
v___x_1233_ = lean_usize_of_nat(v___x_1224_);
v___x_1234_ = ((size_t)1ULL);
v___x_1235_ = lean_usize_sub(v___x_1233_, v___x_1234_);
v___x_1236_ = lean_usize_land(v___x_1232_, v___x_1235_);
v___x_1237_ = lean_array_uget_borrowed(v_buckets_1223_, v___x_1236_);
v___x_1238_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1222_, v___x_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_1239_, lean_object* v_a_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1239_, v_a_1240_);
lean_dec_ref(v_a_1240_);
lean_dec_ref(v_m_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object* v_pre_1242_, lean_object* v_post_1243_, size_t v_sz_1244_, size_t v_i_1245_, lean_object* v_bs_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
uint8_t v___x_1251_; 
v___x_1251_ = lean_usize_dec_lt(v_i_1245_, v_sz_1244_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; 
lean_dec_ref(v_post_1243_);
lean_dec_ref(v_pre_1242_);
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_bs_1246_);
return v___x_1252_;
}
else
{
lean_object* v_v_1253_; lean_object* v___x_1254_; 
v_v_1253_ = lean_array_uget_borrowed(v_bs_1246_, v_i_1245_);
lean_inc(v_v_1253_);
lean_inc_ref(v_post_1243_);
lean_inc_ref(v_pre_1242_);
v___x_1254_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1242_, v_post_1243_, v_v_1253_, v___y_1247_, v___y_1248_, v___y_1249_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1256_; lean_object* v_bs_x27_1257_; size_t v___x_1258_; size_t v___x_1259_; lean_object* v___x_1260_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref(v___x_1254_);
v___x_1256_ = lean_unsigned_to_nat(0u);
v_bs_x27_1257_ = lean_array_uset(v_bs_1246_, v_i_1245_, v___x_1256_);
v___x_1258_ = ((size_t)1ULL);
v___x_1259_ = lean_usize_add(v_i_1245_, v___x_1258_);
v___x_1260_ = lean_array_uset(v_bs_x27_1257_, v_i_1245_, v_a_1255_);
v_i_1245_ = v___x_1259_;
v_bs_1246_ = v___x_1260_;
goto _start;
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
lean_dec_ref(v_bs_1246_);
lean_dec_ref(v_post_1243_);
lean_dec_ref(v_pre_1242_);
v_a_1262_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1254_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1254_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object* v_pre_1270_, lean_object* v_post_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_, lean_object* v_x_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
if (lean_obj_tag(v_x_1272_) == 5)
{
lean_object* v_fn_1279_; lean_object* v_arg_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v_fn_1279_ = lean_ctor_get(v_x_1272_, 0);
lean_inc_ref(v_fn_1279_);
v_arg_1280_ = lean_ctor_get(v_x_1272_, 1);
lean_inc_ref(v_arg_1280_);
lean_dec_ref(v_x_1272_);
v___x_1281_ = lean_array_set(v_x_1273_, v_x_1274_, v_arg_1280_);
v___x_1282_ = lean_unsigned_to_nat(1u);
v___x_1283_ = lean_nat_sub(v_x_1274_, v___x_1282_);
lean_dec(v_x_1274_);
v_x_1272_ = v_fn_1279_;
v_x_1273_ = v___x_1281_;
v_x_1274_ = v___x_1283_;
goto _start;
}
else
{
lean_object* v___x_1285_; 
lean_dec(v_x_1274_);
lean_inc_ref(v_post_1271_);
lean_inc_ref(v_pre_1270_);
v___x_1285_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1270_, v_post_1271_, v_x_1272_, v___y_1275_, v___y_1276_, v___y_1277_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; size_t v_sz_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_a_1286_);
lean_dec_ref(v___x_1285_);
v_sz_1287_ = lean_array_size(v_x_1273_);
v___x_1288_ = ((size_t)0ULL);
lean_inc_ref(v_post_1271_);
lean_inc_ref(v_pre_1270_);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1270_, v_post_1271_, v_sz_1287_, v___x_1288_, v_x_1273_, v___y_1275_, v___y_1276_, v___y_1277_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref(v___x_1289_);
v___x_1291_ = l_Lean_mkAppN(v_a_1286_, v_a_1290_);
lean_dec(v_a_1290_);
v___x_1292_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1270_, v_post_1271_, v___x_1291_, v___y_1275_, v___y_1276_, v___y_1277_);
return v___x_1292_;
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_a_1286_);
lean_dec_ref(v_post_1271_);
lean_dec_ref(v_pre_1270_);
v_a_1293_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1289_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1289_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
else
{
lean_dec_ref(v_x_1273_);
lean_dec_ref(v_post_1271_);
lean_dec_ref(v_pre_1270_);
return v___x_1285_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object* v_pre_1301_, lean_object* v_e_1302_, lean_object* v_post_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
uint8_t v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; uint8_t v___y_1316_; uint8_t v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; uint8_t v___y_1331_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; uint8_t v___y_1343_; uint8_t v___y_1344_; lean_object* v___x_1351_; 
lean_inc_ref(v_pre_1301_);
lean_inc(v___y_1306_);
lean_inc_ref(v___y_1305_);
lean_inc_ref(v_e_1302_);
v___x_1351_ = lean_apply_4(v_pre_1301_, v_e_1302_, v___y_1305_, v___y_1306_, lean_box(0));
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1441_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1354_ = v___x_1351_;
v_isShared_1355_ = v_isSharedCheck_1441_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1351_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1441_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___y_1357_; 
switch(lean_obj_tag(v_a_1352_))
{
case 0:
{
lean_object* v_e_1431_; lean_object* v___x_1433_; 
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_e_1302_);
lean_dec_ref(v_pre_1301_);
v_e_1431_ = lean_ctor_get(v_a_1352_, 0);
lean_inc_ref(v_e_1431_);
lean_dec_ref(v_a_1352_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v_e_1431_);
v___x_1433_ = v___x_1354_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_e_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
case 1:
{
lean_object* v_e_1435_; lean_object* v___x_1436_; 
lean_del_object(v___x_1354_);
lean_dec_ref(v_e_1302_);
v_e_1435_ = lean_ctor_get(v_a_1352_, 0);
lean_inc_ref(v_e_1435_);
lean_dec_ref(v_a_1352_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1436_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_e_1435_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v___x_1438_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_a_1437_);
lean_dec_ref(v___x_1436_);
v___x_1438_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v_a_1437_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1438_;
}
else
{
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1436_;
}
}
default: 
{
lean_object* v_e_x3f_1439_; 
lean_del_object(v___x_1354_);
v_e_x3f_1439_ = lean_ctor_get(v_a_1352_, 0);
lean_inc(v_e_x3f_1439_);
lean_dec_ref(v_a_1352_);
if (lean_obj_tag(v_e_x3f_1439_) == 0)
{
v___y_1357_ = v_e_1302_;
goto v___jp_1356_;
}
else
{
lean_object* v_val_1440_; 
lean_dec_ref(v_e_1302_);
v_val_1440_ = lean_ctor_get(v_e_x3f_1439_, 0);
lean_inc(v_val_1440_);
lean_dec_ref(v_e_x3f_1439_);
v___y_1357_ = v_val_1440_;
goto v___jp_1356_;
}
}
}
v___jp_1356_:
{
switch(lean_obj_tag(v___y_1357_))
{
case 7:
{
lean_object* v_binderName_1358_; lean_object* v_binderType_1359_; lean_object* v_body_1360_; uint8_t v_binderInfo_1361_; lean_object* v___x_1362_; 
v_binderName_1358_ = lean_ctor_get(v___y_1357_, 0);
lean_inc(v_binderName_1358_);
v_binderType_1359_ = lean_ctor_get(v___y_1357_, 1);
v_body_1360_ = lean_ctor_get(v___y_1357_, 2);
v_binderInfo_1361_ = lean_ctor_get_uint8(v___y_1357_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1359_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1362_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_binderType_1359_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1364_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref(v___x_1362_);
lean_inc_ref(v_body_1360_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1364_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_body_1360_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; size_t v___x_1366_; size_t v___x_1367_; uint8_t v___x_1368_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref(v___x_1364_);
v___x_1366_ = lean_ptr_addr(v_binderType_1359_);
v___x_1367_ = lean_ptr_addr(v_a_1363_);
v___x_1368_ = lean_usize_dec_eq(v___x_1366_, v___x_1367_);
if (v___x_1368_ == 0)
{
v___y_1339_ = v_a_1365_;
v___y_1340_ = v_a_1363_;
v___y_1341_ = v_binderName_1358_;
v___y_1342_ = v___y_1357_;
v___y_1343_ = v_binderInfo_1361_;
v___y_1344_ = v___x_1368_;
goto v___jp_1338_;
}
else
{
size_t v___x_1369_; size_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1369_ = lean_ptr_addr(v_body_1360_);
v___x_1370_ = lean_ptr_addr(v_a_1365_);
v___x_1371_ = lean_usize_dec_eq(v___x_1369_, v___x_1370_);
v___y_1339_ = v_a_1365_;
v___y_1340_ = v_a_1363_;
v___y_1341_ = v_binderName_1358_;
v___y_1342_ = v___y_1357_;
v___y_1343_ = v_binderInfo_1361_;
v___y_1344_ = v___x_1371_;
goto v___jp_1338_;
}
}
else
{
lean_dec(v_a_1363_);
lean_dec_ref(v___y_1357_);
lean_dec(v_binderName_1358_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1364_;
}
}
else
{
lean_dec_ref(v___y_1357_);
lean_dec(v_binderName_1358_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1362_;
}
}
case 6:
{
lean_object* v_binderName_1372_; lean_object* v_binderType_1373_; lean_object* v_body_1374_; uint8_t v_binderInfo_1375_; lean_object* v___x_1376_; 
v_binderName_1372_ = lean_ctor_get(v___y_1357_, 0);
lean_inc(v_binderName_1372_);
v_binderType_1373_ = lean_ctor_get(v___y_1357_, 1);
v_body_1374_ = lean_ctor_get(v___y_1357_, 2);
v_binderInfo_1375_ = lean_ctor_get_uint8(v___y_1357_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1373_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1376_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_binderType_1373_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1378_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
lean_dec_ref(v___x_1376_);
lean_inc_ref(v_body_1374_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1378_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_body_1374_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; size_t v___x_1380_; size_t v___x_1381_; uint8_t v___x_1382_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref(v___x_1378_);
v___x_1380_ = lean_ptr_addr(v_binderType_1373_);
v___x_1381_ = lean_ptr_addr(v_a_1377_);
v___x_1382_ = lean_usize_dec_eq(v___x_1380_, v___x_1381_);
if (v___x_1382_ == 0)
{
v___y_1326_ = v_binderInfo_1375_;
v___y_1327_ = v_a_1379_;
v___y_1328_ = v___y_1357_;
v___y_1329_ = v_a_1377_;
v___y_1330_ = v_binderName_1372_;
v___y_1331_ = v___x_1382_;
goto v___jp_1325_;
}
else
{
size_t v___x_1383_; size_t v___x_1384_; uint8_t v___x_1385_; 
v___x_1383_ = lean_ptr_addr(v_body_1374_);
v___x_1384_ = lean_ptr_addr(v_a_1379_);
v___x_1385_ = lean_usize_dec_eq(v___x_1383_, v___x_1384_);
v___y_1326_ = v_binderInfo_1375_;
v___y_1327_ = v_a_1379_;
v___y_1328_ = v___y_1357_;
v___y_1329_ = v_a_1377_;
v___y_1330_ = v_binderName_1372_;
v___y_1331_ = v___x_1385_;
goto v___jp_1325_;
}
}
else
{
lean_dec(v_a_1377_);
lean_dec(v_binderName_1372_);
lean_dec_ref(v___y_1357_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1378_;
}
}
else
{
lean_dec(v_binderName_1372_);
lean_dec_ref(v___y_1357_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1376_;
}
}
case 8:
{
lean_object* v_declName_1386_; lean_object* v_type_1387_; lean_object* v_value_1388_; lean_object* v_body_1389_; uint8_t v_nondep_1390_; lean_object* v___x_1391_; 
v_declName_1386_ = lean_ctor_get(v___y_1357_, 0);
lean_inc(v_declName_1386_);
v_type_1387_ = lean_ctor_get(v___y_1357_, 1);
v_value_1388_ = lean_ctor_get(v___y_1357_, 2);
v_body_1389_ = lean_ctor_get(v___y_1357_, 3);
lean_inc_ref(v_body_1389_);
v_nondep_1390_ = lean_ctor_get_uint8(v___y_1357_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1387_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1391_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_type_1387_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1393_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref(v___x_1391_);
lean_inc_ref(v_value_1388_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1393_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_value_1388_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1395_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref(v___x_1393_);
lean_inc_ref(v_body_1389_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1395_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_body_1389_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; size_t v___x_1397_; size_t v___x_1398_; uint8_t v___x_1399_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_a_1396_);
lean_dec_ref(v___x_1395_);
v___x_1397_ = lean_ptr_addr(v_type_1387_);
v___x_1398_ = lean_ptr_addr(v_a_1392_);
v___x_1399_ = lean_usize_dec_eq(v___x_1397_, v___x_1398_);
if (v___x_1399_ == 0)
{
v___y_1309_ = v_nondep_1390_;
v___y_1310_ = v_a_1394_;
v___y_1311_ = v___y_1357_;
v___y_1312_ = v_a_1392_;
v___y_1313_ = v_a_1396_;
v___y_1314_ = v_declName_1386_;
v___y_1315_ = v_body_1389_;
v___y_1316_ = v___x_1399_;
goto v___jp_1308_;
}
else
{
size_t v___x_1400_; size_t v___x_1401_; uint8_t v___x_1402_; 
v___x_1400_ = lean_ptr_addr(v_value_1388_);
v___x_1401_ = lean_ptr_addr(v_a_1394_);
v___x_1402_ = lean_usize_dec_eq(v___x_1400_, v___x_1401_);
v___y_1309_ = v_nondep_1390_;
v___y_1310_ = v_a_1394_;
v___y_1311_ = v___y_1357_;
v___y_1312_ = v_a_1392_;
v___y_1313_ = v_a_1396_;
v___y_1314_ = v_declName_1386_;
v___y_1315_ = v_body_1389_;
v___y_1316_ = v___x_1402_;
goto v___jp_1308_;
}
}
else
{
lean_dec(v_a_1394_);
lean_dec(v_a_1392_);
lean_dec_ref(v_body_1389_);
lean_dec(v_declName_1386_);
lean_dec_ref(v___y_1357_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1395_;
}
}
else
{
lean_dec(v_a_1392_);
lean_dec_ref(v_body_1389_);
lean_dec_ref(v___y_1357_);
lean_dec(v_declName_1386_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1393_;
}
}
else
{
lean_dec_ref(v_body_1389_);
lean_dec_ref(v___y_1357_);
lean_dec(v_declName_1386_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1391_;
}
}
case 5:
{
lean_object* v_dummy_1403_; lean_object* v_nargs_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v_dummy_1403_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_1404_ = l_Lean_Expr_getAppNumArgs(v___y_1357_);
lean_inc(v_nargs_1404_);
v___x_1405_ = lean_mk_array(v_nargs_1404_, v_dummy_1403_);
v___x_1406_ = lean_unsigned_to_nat(1u);
v___x_1407_ = lean_nat_sub(v_nargs_1404_, v___x_1406_);
lean_dec(v_nargs_1404_);
v___x_1408_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1301_, v_post_1303_, v___y_1357_, v___x_1405_, v___x_1407_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1408_;
}
case 10:
{
lean_object* v_data_1409_; lean_object* v_expr_1410_; lean_object* v___x_1411_; 
v_data_1409_ = lean_ctor_get(v___y_1357_, 0);
v_expr_1410_ = lean_ctor_get(v___y_1357_, 1);
lean_inc_ref(v_expr_1410_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1411_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_expr_1410_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; size_t v___x_1413_; size_t v___x_1414_; uint8_t v___x_1415_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref(v___x_1411_);
v___x_1413_ = lean_ptr_addr(v_expr_1410_);
v___x_1414_ = lean_ptr_addr(v_a_1412_);
v___x_1415_ = lean_usize_dec_eq(v___x_1413_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_inc(v_data_1409_);
lean_dec_ref(v___y_1357_);
v___x_1416_ = l_Lean_Expr_mdata___override(v_data_1409_, v_a_1412_);
v___x_1417_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1416_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1417_;
}
else
{
lean_object* v___x_1418_; 
lean_dec(v_a_1412_);
v___x_1418_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___y_1357_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1418_;
}
}
else
{
lean_dec_ref(v___y_1357_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1411_;
}
}
case 11:
{
lean_object* v_typeName_1419_; lean_object* v_idx_1420_; lean_object* v_struct_1421_; lean_object* v___x_1422_; 
v_typeName_1419_ = lean_ctor_get(v___y_1357_, 0);
v_idx_1420_ = lean_ctor_get(v___y_1357_, 1);
v_struct_1421_ = lean_ctor_get(v___y_1357_, 2);
lean_inc_ref(v_struct_1421_);
lean_inc_ref(v_post_1303_);
lean_inc_ref(v_pre_1301_);
v___x_1422_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1301_, v_post_1303_, v_struct_1421_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; size_t v___x_1424_; size_t v___x_1425_; uint8_t v___x_1426_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref(v___x_1422_);
v___x_1424_ = lean_ptr_addr(v_struct_1421_);
v___x_1425_ = lean_ptr_addr(v_a_1423_);
v___x_1426_ = lean_usize_dec_eq(v___x_1424_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_inc(v_idx_1420_);
lean_inc(v_typeName_1419_);
lean_dec_ref(v___y_1357_);
v___x_1427_ = l_Lean_Expr_proj___override(v_typeName_1419_, v_idx_1420_, v_a_1423_);
v___x_1428_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1427_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1428_;
}
else
{
lean_object* v___x_1429_; 
lean_dec(v_a_1423_);
v___x_1429_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___y_1357_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1429_;
}
}
else
{
lean_dec_ref(v___y_1357_);
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_pre_1301_);
return v___x_1422_;
}
}
default: 
{
lean_object* v___x_1430_; 
v___x_1430_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___y_1357_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1430_;
}
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec_ref(v_post_1303_);
lean_dec_ref(v_e_1302_);
lean_dec_ref(v_pre_1301_);
v_a_1442_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1351_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1351_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
v___jp_1308_:
{
if (v___y_1316_ == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec_ref(v___y_1315_);
lean_dec_ref(v___y_1311_);
v___x_1317_ = l_Lean_Expr_letE___override(v___y_1314_, v___y_1312_, v___y_1310_, v___y_1313_, v___y_1309_);
v___x_1318_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1317_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1318_;
}
else
{
size_t v___x_1319_; size_t v___x_1320_; uint8_t v___x_1321_; 
v___x_1319_ = lean_ptr_addr(v___y_1315_);
lean_dec_ref(v___y_1315_);
v___x_1320_ = lean_ptr_addr(v___y_1313_);
v___x_1321_ = lean_usize_dec_eq(v___x_1319_, v___x_1320_);
if (v___x_1321_ == 0)
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
lean_dec_ref(v___y_1311_);
v___x_1322_ = l_Lean_Expr_letE___override(v___y_1314_, v___y_1312_, v___y_1310_, v___y_1313_, v___y_1309_);
v___x_1323_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1322_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1323_;
}
else
{
lean_object* v___x_1324_; 
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec_ref(v___y_1310_);
v___x_1324_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___y_1311_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1324_;
}
}
}
v___jp_1325_:
{
if (v___y_1331_ == 0)
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_dec_ref(v___y_1328_);
v___x_1332_ = l_Lean_Expr_lam___override(v___y_1330_, v___y_1329_, v___y_1327_, v___y_1326_);
v___x_1333_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1332_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1333_;
}
else
{
uint8_t v___x_1334_; 
v___x_1334_ = l_Lean_instBEqBinderInfo_beq(v___y_1326_, v___y_1326_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
lean_dec_ref(v___y_1328_);
v___x_1335_ = l_Lean_Expr_lam___override(v___y_1330_, v___y_1329_, v___y_1327_, v___y_1326_);
v___x_1336_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1335_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1336_;
}
else
{
lean_object* v___x_1337_; 
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec_ref(v___y_1327_);
v___x_1337_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___y_1328_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1337_;
}
}
}
v___jp_1338_:
{
if (v___y_1344_ == 0)
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_dec_ref(v___y_1342_);
v___x_1345_ = l_Lean_Expr_forallE___override(v___y_1341_, v___y_1340_, v___y_1339_, v___y_1343_);
v___x_1346_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1345_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1346_;
}
else
{
uint8_t v___x_1347_; 
v___x_1347_ = l_Lean_instBEqBinderInfo_beq(v___y_1343_, v___y_1343_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec_ref(v___y_1342_);
v___x_1348_ = l_Lean_Expr_forallE___override(v___y_1341_, v___y_1340_, v___y_1339_, v___y_1343_);
v___x_1349_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___x_1348_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1349_;
}
else
{
lean_object* v___x_1350_; 
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec_ref(v___y_1339_);
v___x_1350_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1301_, v_post_1303_, v___y_1342_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object* v_pre_1450_, lean_object* v_e_1451_, lean_object* v_post_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(v_pre_1450_, v_e_1451_, v_post_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object* v_pre_1458_, lean_object* v_post_1459_, lean_object* v_e_1460_, lean_object* v_a_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_inc(v_a_1461_);
v___x_1465_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1465_, 0, lean_box(0));
lean_closure_set(v___x_1465_, 1, lean_box(0));
lean_closure_set(v___x_1465_, 2, v_a_1461_);
v___x_1466_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___x_1465_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1497_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1469_ = v___x_1466_;
v_isShared_1470_ = v_isSharedCheck_1497_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1466_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1497_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_1467_, v_e_1460_);
lean_dec(v_a_1467_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v___f_1472_; lean_object* v___x_1473_; 
lean_del_object(v___x_1469_);
lean_inc_ref(v_e_1460_);
v___f_1472_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed), 7, 3);
lean_closure_set(v___f_1472_, 0, v_pre_1458_);
lean_closure_set(v___f_1472_, 1, v_e_1460_);
lean_closure_set(v___f_1472_, 2, v_post_1459_);
v___x_1473_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v___f_1472_, v_a_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v___f_1475_; lean_object* v___x_1476_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc_n(v_a_1474_, 2);
lean_dec_ref(v___x_1473_);
lean_inc(v_a_1461_);
v___f_1475_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1475_, 0, v_a_1461_);
lean_closure_set(v___f_1475_, 1, v_e_1460_);
lean_closure_set(v___f_1475_, 2, v_a_1474_);
v___x_1476_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___f_1475_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; 
v_unused_1484_ = lean_ctor_get(v___x_1476_, 0);
lean_dec(v_unused_1484_);
v___x_1478_ = v___x_1476_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_dec(v___x_1476_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 0, v_a_1474_);
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1474_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec(v_a_1474_);
v_a_1485_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1476_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1476_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
else
{
lean_dec_ref(v_e_1460_);
return v___x_1473_;
}
}
else
{
lean_object* v_val_1493_; lean_object* v___x_1495_; 
lean_dec_ref(v_e_1460_);
lean_dec_ref(v_post_1459_);
lean_dec_ref(v_pre_1458_);
v_val_1493_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_val_1493_);
lean_dec_ref(v___x_1471_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 0, v_val_1493_);
v___x_1495_ = v___x_1469_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_val_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec_ref(v_e_1460_);
lean_dec_ref(v_post_1459_);
lean_dec_ref(v_pre_1458_);
v_a_1498_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1466_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1466_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object* v_pre_1506_, lean_object* v_post_1507_, lean_object* v_e_1508_, lean_object* v_a_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___x_1513_; 
lean_inc_ref(v_post_1507_);
lean_inc(v___y_1511_);
lean_inc_ref(v___y_1510_);
lean_inc_ref(v_e_1508_);
v___x_1513_ = lean_apply_4(v_post_1507_, v_e_1508_, v___y_1510_, v___y_1511_, lean_box(0));
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1532_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1532_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1532_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
switch(lean_obj_tag(v_a_1514_))
{
case 0:
{
lean_object* v_e_1518_; lean_object* v___x_1520_; 
lean_dec_ref(v_e_1508_);
lean_dec_ref(v_post_1507_);
lean_dec_ref(v_pre_1506_);
v_e_1518_ = lean_ctor_get(v_a_1514_, 0);
lean_inc_ref(v_e_1518_);
lean_dec_ref(v_a_1514_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v_e_1518_);
v___x_1520_ = v___x_1516_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_e_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
case 1:
{
lean_object* v_e_1522_; lean_object* v___x_1523_; 
lean_del_object(v___x_1516_);
lean_dec_ref(v_e_1508_);
v_e_1522_ = lean_ctor_get(v_a_1514_, 0);
lean_inc_ref(v_e_1522_);
lean_dec_ref(v_a_1514_);
v___x_1523_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1506_, v_post_1507_, v_e_1522_, v_a_1509_, v___y_1510_, v___y_1511_);
return v___x_1523_;
}
default: 
{
lean_object* v_e_x3f_1524_; 
lean_dec_ref(v_post_1507_);
lean_dec_ref(v_pre_1506_);
v_e_x3f_1524_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_e_x3f_1524_);
lean_dec_ref(v_a_1514_);
if (lean_obj_tag(v_e_x3f_1524_) == 0)
{
lean_object* v___x_1526_; 
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v_e_1508_);
v___x_1526_ = v___x_1516_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_e_1508_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
else
{
lean_object* v_val_1528_; lean_object* v___x_1530_; 
lean_dec_ref(v_e_1508_);
v_val_1528_ = lean_ctor_get(v_e_x3f_1524_, 0);
lean_inc(v_val_1528_);
lean_dec_ref(v_e_x3f_1524_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v_val_1528_);
v___x_1530_ = v___x_1516_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_val_1528_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec_ref(v_e_1508_);
lean_dec_ref(v_post_1507_);
lean_dec_ref(v_pre_1506_);
v_a_1533_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1513_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1513_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1541_, lean_object* v_post_1542_, lean_object* v_e_1543_, lean_object* v_a_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1541_, v_post_1542_, v_e_1543_, v_a_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v_a_1544_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1549_, lean_object* v_post_1550_, lean_object* v_sz_1551_, lean_object* v_i_1552_, lean_object* v_bs_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
size_t v_sz_boxed_1558_; size_t v_i_boxed_1559_; lean_object* v_res_1560_; 
v_sz_boxed_1558_ = lean_unbox_usize(v_sz_1551_);
lean_dec(v_sz_1551_);
v_i_boxed_1559_ = lean_unbox_usize(v_i_1552_);
lean_dec(v_i_1552_);
v_res_1560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1549_, v_post_1550_, v_sz_boxed_1558_, v_i_boxed_1559_, v_bs_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1561_, lean_object* v_post_1562_, lean_object* v_x_1563_, lean_object* v_x_1564_, lean_object* v_x_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1561_, v_post_1562_, v_x_1563_, v_x_1564_, v_x_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object* v_pre_1571_, lean_object* v_post_1572_, lean_object* v_e_1573_, lean_object* v_a_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1571_, v_post_1572_, v_e_1573_, v_a_1574_, v___y_1575_, v___y_1576_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v_a_1574_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object* v_00_u03b1_1579_, lean_object* v_x_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_apply_1(v_x_1580_, lean_box(0));
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1586_, lean_object* v_x_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(v_00_u03b1_1586_, v_x_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object* v_input_1592_, lean_object* v_pre_1593_, lean_object* v_post_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v_a_1600_; lean_object* v___x_1601_; 
v___x_1598_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1599_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1598_, v___y_1595_, v___y_1596_);
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref(v___x_1599_);
v___x_1601_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1593_, v_post_1594_, v_input_1592_, v_a_1600_, v___y_1595_, v___y_1596_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
lean_dec_ref(v___x_1601_);
v___x_1603_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1603_, 0, lean_box(0));
lean_closure_set(v___x_1603_, 1, lean_box(0));
lean_closure_set(v___x_1603_, 2, v_a_1600_);
v___x_1604_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1603_, v___y_1595_, v___y_1596_);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1604_, 0);
lean_dec(v_unused_1612_);
v___x_1606_ = v___x_1604_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_dec(v___x_1604_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v_a_1602_);
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1602_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
else
{
lean_dec(v_a_1600_);
return v___x_1601_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object* v_input_1613_, lean_object* v_pre_1614_, lean_object* v_post_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_input_1613_, v_pre_1614_, v_post_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object* v_e_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v___f_1626_; lean_object* v___f_1627_; lean_object* v___x_1628_; 
v___f_1626_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__0));
v___f_1627_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___x_1628_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_1622_, v___f_1626_, v___f_1627_, v_a_1623_, v_a_1624_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object* v_e_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lean_Core_betaReduce(v_e_1629_, v_a_1630_, v_a_1631_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1634_, lean_object* v_m_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1635_, v_a_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1638_, lean_object* v_m_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(v_00_u03b2_1638_, v_m_1639_, v_a_1640_);
lean_dec_ref(v_a_1640_);
lean_dec_ref(v_m_1639_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1642_, lean_object* v_ref_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1643_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1648_, lean_object* v_ref_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1648_, v_ref_1649_, v___y_1650_, v___y_1651_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1654_, lean_object* v_x_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1661_, lean_object* v_x_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(v_00_u03b1_1661_, v_x_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1668_, lean_object* v_m_1669_, lean_object* v_a_1670_, lean_object* v_b_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v_m_1669_, v_a_1670_, v_b_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1673_, lean_object* v_a_1674_, lean_object* v_x_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1674_, v_x_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1677_, lean_object* v_a_1678_, lean_object* v_x_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1677_, v_a_1678_, v_x_1679_);
lean_dec(v_x_1679_);
lean_dec_ref(v_a_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9(lean_object* v_00_u03b2_1681_, lean_object* v_a_1682_, lean_object* v_x_1683_){
_start:
{
uint8_t v___x_1684_; 
v___x_1684_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___redArg(v_a_1682_, v_x_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9___boxed(lean_object* v_00_u03b2_1685_, lean_object* v_a_1686_, lean_object* v_x_1687_){
_start:
{
uint8_t v_res_1688_; lean_object* v_r_1689_; 
v_res_1688_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__9(v_00_u03b2_1685_, v_a_1686_, v_x_1687_);
lean_dec(v_x_1687_);
lean_dec_ref(v_a_1686_);
v_r_1689_ = lean_box(v_res_1688_);
return v_r_1689_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1690_, lean_object* v_data_1691_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_data_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1693_, lean_object* v_a_1694_, lean_object* v_b_1695_, lean_object* v_x_1696_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1694_, v_b_1695_, v_x_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object* v_00_u03b2_1698_, lean_object* v_i_1699_, lean_object* v_source_1700_, lean_object* v_target_1701_){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v_i_1699_, v_source_1700_, v_target_1701_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_1703_, lean_object* v_x_1704_, lean_object* v_x_1705_){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_x_1704_, v_x_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object* v_toApplicative_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v_toPure_1709_; lean_object* v___x_1710_; 
v_toPure_1709_ = lean_ctor_get(v_toApplicative_1707_, 1);
lean_inc(v_toPure_1709_);
lean_dec_ref(v_toApplicative_1707_);
v___x_1710_ = lean_apply_2(v_toPure_1709_, lean_box(0), v_a_1708_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object* v_pre_1711_, lean_object* v_e_1712_, lean_object* v_x_1713_, lean_object* v___x_1714_, lean_object* v___x_1715_, lean_object* v_inst_1716_, lean_object* v___f_1717_, lean_object* v___x_1718_, lean_object* v___x_1719_, lean_object* v_a_1720_, lean_object* v_toBind_1721_, lean_object* v___f_1722_, lean_object* v_toApplicative_1723_, lean_object* v_a_1724_){
_start:
{
if (lean_obj_tag(v_a_1724_) == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_3684__overap_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec_ref(v_toApplicative_1723_);
v___x_1725_ = lean_apply_1(v_pre_1711_, v_e_1712_);
lean_inc_ref(v___x_1715_);
lean_inc_ref(v___x_1714_);
v___x_1726_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_1726_, 0, lean_box(0));
lean_closure_set(v___x_1726_, 1, lean_box(0));
lean_closure_set(v___x_1726_, 2, lean_box(0));
lean_closure_set(v___x_1726_, 3, lean_box(0));
lean_closure_set(v___x_1726_, 4, v_x_1713_);
lean_closure_set(v___x_1726_, 5, v___x_1714_);
lean_closure_set(v___x_1726_, 6, v___x_1715_);
lean_closure_set(v___x_1726_, 7, lean_box(0));
lean_closure_set(v___x_1726_, 8, v___x_1725_);
v___x_1727_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_1727_, 0, lean_box(0));
lean_closure_set(v___x_1727_, 1, lean_box(0));
lean_closure_set(v___x_1727_, 2, lean_box(0));
lean_closure_set(v___x_1727_, 3, lean_box(0));
lean_closure_set(v___x_1727_, 4, v_x_1713_);
lean_closure_set(v___x_1727_, 5, v___x_1714_);
lean_closure_set(v___x_1727_, 6, v___x_1715_);
lean_closure_set(v___x_1727_, 7, v_inst_1716_);
lean_closure_set(v___x_1727_, 8, lean_box(0));
lean_closure_set(v___x_1727_, 9, lean_box(0));
lean_closure_set(v___x_1727_, 10, v___x_1726_);
lean_closure_set(v___x_1727_, 11, v___f_1717_);
v___x_3684__overap_1728_ = l_Lean_Meta_withIncRecDepth___redArg(v___x_1718_, v___x_1719_, v___x_1727_);
lean_inc(v_a_1720_);
v___x_1729_ = lean_apply_1(v___x_3684__overap_1728_, v_a_1720_);
v___x_1730_ = lean_apply_4(v_toBind_1721_, lean_box(0), lean_box(0), v___x_1729_, v___f_1722_);
return v___x_1730_;
}
else
{
lean_object* v_val_1731_; lean_object* v_toPure_1732_; lean_object* v___x_1733_; 
lean_dec(v___f_1722_);
lean_dec(v_toBind_1721_);
lean_dec_ref(v___x_1719_);
lean_dec_ref(v___x_1718_);
lean_dec(v___f_1717_);
lean_dec_ref(v_inst_1716_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1714_);
lean_dec_ref(v_e_1712_);
lean_dec(v_pre_1711_);
v_val_1731_ = lean_ctor_get(v_a_1724_, 0);
lean_inc(v_val_1731_);
lean_dec_ref(v_a_1724_);
v_toPure_1732_ = lean_ctor_get(v_toApplicative_1723_, 1);
lean_inc(v_toPure_1732_);
lean_dec_ref(v_toApplicative_1723_);
v___x_1733_ = lean_apply_2(v_toPure_1732_, lean_box(0), v_val_1731_);
return v___x_1733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object* v_pre_1734_, lean_object* v_e_1735_, lean_object* v_x_1736_, lean_object* v___x_1737_, lean_object* v___x_1738_, lean_object* v_inst_1739_, lean_object* v___f_1740_, lean_object* v___x_1741_, lean_object* v___x_1742_, lean_object* v_a_1743_, lean_object* v_toBind_1744_, lean_object* v___f_1745_, lean_object* v_toApplicative_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(v_pre_1734_, v_e_1735_, v_x_1736_, v___x_1737_, v___x_1738_, v_inst_1739_, v___f_1740_, v___x_1741_, v___x_1742_, v_a_1743_, v_toBind_1744_, v___f_1745_, v_toApplicative_1746_, v_a_1747_);
lean_dec(v_a_1743_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object* v___x_1749_, lean_object* v___x_1750_, lean_object* v_declName_1751_, lean_object* v_a_1752_, lean_object* v___f_1753_, uint8_t v_nondep_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
uint8_t v___x_1757_; lean_object* v___x_3703__overap_1758_; lean_object* v___x_1759_; 
v___x_1757_ = 0;
v___x_3703__overap_1758_ = l_Lean_Meta_withLetDecl___redArg(v___x_1749_, v___x_1750_, v_declName_1751_, v_a_1752_, v_a_1756_, v___f_1753_, v_nondep_1754_, v___x_1757_);
lean_inc(v_a_1755_);
v___x_1759_ = lean_apply_1(v___x_3703__overap_1758_, v_a_1755_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object* v___x_1760_, lean_object* v___x_1761_, lean_object* v_declName_1762_, lean_object* v_a_1763_, lean_object* v___f_1764_, lean_object* v_nondep_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_){
_start:
{
uint8_t v_nondep_3850__boxed_1768_; lean_object* v_res_1769_; 
v_nondep_3850__boxed_1768_ = lean_unbox(v_nondep_1765_);
v_res_1769_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(v___x_1760_, v___x_1761_, v_declName_1762_, v_a_1763_, v___f_1764_, v_nondep_3850__boxed_1768_, v_a_1766_, v_a_1767_);
lean_dec(v_a_1766_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object* v_fvars_1770_, uint8_t v_usedLetOnly_1771_, lean_object* v_inst_1772_, lean_object* v_toBind_1773_, lean_object* v___f_1774_, lean_object* v_a_1775_){
_start:
{
uint8_t v___x_1776_; uint8_t v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1776_ = 0;
v___x_1777_ = 1;
v___x_1778_ = lean_box(v_usedLetOnly_1771_);
v___x_1779_ = lean_box(v___x_1776_);
v___x_1780_ = lean_box(v___x_1777_);
v___x_1781_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___boxed), 10, 5);
lean_closure_set(v___x_1781_, 0, v_fvars_1770_);
lean_closure_set(v___x_1781_, 1, v_a_1775_);
lean_closure_set(v___x_1781_, 2, v___x_1778_);
lean_closure_set(v___x_1781_, 3, v___x_1779_);
lean_closure_set(v___x_1781_, 4, v___x_1780_);
v___x_1782_ = lean_apply_2(v_inst_1772_, lean_box(0), v___x_1781_);
v___x_1783_ = lean_apply_4(v_toBind_1773_, lean_box(0), lean_box(0), v___x_1782_, v___f_1774_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object* v_fvars_1784_, lean_object* v_usedLetOnly_1785_, lean_object* v_inst_1786_, lean_object* v_toBind_1787_, lean_object* v___f_1788_, lean_object* v_a_1789_){
_start:
{
uint8_t v_usedLetOnly_boxed_1790_; lean_object* v_res_1791_; 
v_usedLetOnly_boxed_1790_ = lean_unbox(v_usedLetOnly_1785_);
v_res_1791_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(v_fvars_1784_, v_usedLetOnly_boxed_1790_, v_inst_1786_, v_toBind_1787_, v___f_1788_, v_a_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object* v_fvars_1792_, uint8_t v_usedLetOnly_1793_, lean_object* v_inst_1794_, lean_object* v_toBind_1795_, lean_object* v___f_1796_, lean_object* v_a_1797_){
_start:
{
uint8_t v___x_1798_; uint8_t v___x_1799_; uint8_t v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1798_ = 0;
v___x_1799_ = 1;
v___x_1800_ = 1;
v___x_1801_ = lean_box(v___x_1798_);
v___x_1802_ = lean_box(v_usedLetOnly_1793_);
v___x_1803_ = lean_box(v___x_1798_);
v___x_1804_ = lean_box(v___x_1799_);
v___x_1805_ = lean_box(v___x_1800_);
v___x_1806_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1806_, 0, v_fvars_1792_);
lean_closure_set(v___x_1806_, 1, v_a_1797_);
lean_closure_set(v___x_1806_, 2, v___x_1801_);
lean_closure_set(v___x_1806_, 3, v___x_1802_);
lean_closure_set(v___x_1806_, 4, v___x_1803_);
lean_closure_set(v___x_1806_, 5, v___x_1804_);
lean_closure_set(v___x_1806_, 6, v___x_1805_);
v___x_1807_ = lean_apply_2(v_inst_1794_, lean_box(0), v___x_1806_);
v___x_1808_ = lean_apply_4(v_toBind_1795_, lean_box(0), lean_box(0), v___x_1807_, v___f_1796_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object* v_fvars_1809_, lean_object* v_usedLetOnly_1810_, lean_object* v_inst_1811_, lean_object* v_toBind_1812_, lean_object* v___f_1813_, lean_object* v_a_1814_){
_start:
{
uint8_t v_usedLetOnly_boxed_1815_; lean_object* v_res_1816_; 
v_usedLetOnly_boxed_1815_ = lean_unbox(v_usedLetOnly_1810_);
v_res_1816_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(v_fvars_1809_, v_usedLetOnly_boxed_1815_, v_inst_1811_, v_toBind_1812_, v___f_1813_, v_a_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object* v___x_1817_, lean_object* v___x_1818_, lean_object* v_binderName_1819_, uint8_t v_binderInfo_1820_, lean_object* v___f_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
uint8_t v___x_1824_; lean_object* v___x_3761__overap_1825_; lean_object* v___x_1826_; 
v___x_1824_ = 0;
v___x_3761__overap_1825_ = l_Lean_Meta_withLocalDecl___redArg(v___x_1817_, v___x_1818_, v_binderName_1819_, v_binderInfo_1820_, v_a_1823_, v___f_1821_, v___x_1824_);
lean_inc(v_a_1822_);
v___x_1826_ = lean_apply_1(v___x_3761__overap_1825_, v_a_1822_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object* v___x_1827_, lean_object* v___x_1828_, lean_object* v_binderName_1829_, lean_object* v_binderInfo_1830_, lean_object* v___f_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_){
_start:
{
uint8_t v_binderInfo_3918__boxed_1834_; lean_object* v_res_1835_; 
v_binderInfo_3918__boxed_1834_ = lean_unbox(v_binderInfo_1830_);
v_res_1835_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(v___x_1827_, v___x_1828_, v_binderName_1829_, v_binderInfo_3918__boxed_1834_, v___f_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1832_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object* v_fvars_1836_, uint8_t v_usedLetOnly_1837_, lean_object* v_inst_1838_, lean_object* v_toBind_1839_, lean_object* v___f_1840_, lean_object* v_a_1841_){
_start:
{
uint8_t v___x_1842_; uint8_t v___x_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1842_ = 0;
v___x_1843_ = 1;
v___x_1844_ = 1;
v___x_1845_ = lean_box(v___x_1842_);
v___x_1846_ = lean_box(v_usedLetOnly_1837_);
v___x_1847_ = lean_box(v___x_1843_);
v___x_1848_ = lean_box(v___x_1844_);
v___x_1849_ = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___boxed), 11, 6);
lean_closure_set(v___x_1849_, 0, v_fvars_1836_);
lean_closure_set(v___x_1849_, 1, v_a_1841_);
lean_closure_set(v___x_1849_, 2, v___x_1845_);
lean_closure_set(v___x_1849_, 3, v___x_1846_);
lean_closure_set(v___x_1849_, 4, v___x_1847_);
lean_closure_set(v___x_1849_, 5, v___x_1848_);
v___x_1850_ = lean_apply_2(v_inst_1838_, lean_box(0), v___x_1849_);
v___x_1851_ = lean_apply_4(v_toBind_1839_, lean_box(0), lean_box(0), v___x_1850_, v___f_1840_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object* v_fvars_1852_, lean_object* v_usedLetOnly_1853_, lean_object* v_inst_1854_, lean_object* v_toBind_1855_, lean_object* v___f_1856_, lean_object* v_a_1857_){
_start:
{
uint8_t v_usedLetOnly_boxed_1858_; lean_object* v_res_1859_; 
v_usedLetOnly_boxed_1858_ = lean_unbox(v_usedLetOnly_1853_);
v_res_1859_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(v_fvars_1852_, v_usedLetOnly_boxed_1858_, v_inst_1854_, v_toBind_1855_, v___f_1856_, v_a_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object* v___f_1860_, lean_object* v___y_1861_, lean_object* v_a_1862_){
_start:
{
lean_object* v___x_1863_; 
lean_inc(v___y_1861_);
v___x_1863_ = lean_apply_2(v___f_1860_, v_a_1862_, v___y_1861_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object* v___f_1864_, lean_object* v___y_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(v___f_1864_, v___y_1865_, v_a_1866_);
lean_dec(v___y_1865_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object* v_toApplicative_1868_, lean_object* v_acc_1869_, lean_object* v_next_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v_toPure_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v_toPure_1872_ = lean_ctor_get(v_toApplicative_1868_, 1);
lean_inc(v_toPure_1872_);
lean_dec_ref(v_toApplicative_1868_);
v___x_1873_ = lean_array_fset(v_acc_1869_, v_next_1870_, v_a_1871_);
v___x_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
v___x_1875_ = lean_apply_2(v_toPure_1872_, lean_box(0), v___x_1874_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object* v_toApplicative_1876_, lean_object* v_acc_1877_, lean_object* v_next_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(v_toApplicative_1876_, v_acc_1877_, v_next_1878_, v_a_1879_);
lean_dec(v_next_1878_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object* v_toApplicative_1881_, lean_object* v_next_1882_, lean_object* v_G_1883_, lean_object* v___y_1884_, lean_object* v_a_1885_){
_start:
{
if (lean_obj_tag(v_a_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v_toPure_1887_; lean_object* v___x_1888_; 
lean_dec(v_G_1883_);
v_a_1886_ = lean_ctor_get(v_a_1885_, 0);
lean_inc(v_a_1886_);
lean_dec_ref(v_a_1885_);
v_toPure_1887_ = lean_ctor_get(v_toApplicative_1881_, 1);
lean_inc(v_toPure_1887_);
lean_dec_ref(v_toApplicative_1881_);
v___x_1888_ = lean_apply_2(v_toPure_1887_, lean_box(0), v_a_1886_);
return v___x_1888_;
}
else
{
lean_object* v_a_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
lean_dec_ref(v_toApplicative_1881_);
v_a_1889_ = lean_ctor_get(v_a_1885_, 0);
lean_inc(v_a_1889_);
lean_dec_ref(v_a_1885_);
v___x_1890_ = lean_unsigned_to_nat(1u);
v___x_1891_ = lean_nat_add(v_next_1882_, v___x_1890_);
lean_inc(v___y_1884_);
v___x_1892_ = lean_apply_5(v_G_1883_, v___x_1891_, v_a_1889_, lean_box(0), lean_box(0), v___y_1884_);
return v___x_1892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_1893_, lean_object* v_next_1894_, lean_object* v_G_1895_, lean_object* v___y_1896_, lean_object* v_a_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(v_toApplicative_1893_, v_next_1894_, v_G_1895_, v___y_1896_, v_a_1897_);
lean_dec(v___y_1896_);
lean_dec(v_next_1894_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object* v_f_1899_, lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_inst_1902_, lean_object* v_pre_1903_, lean_object* v_post_1904_, uint8_t v_usedLetOnly_1905_, uint8_t v_skipConstInApp_1906_, uint8_t v_skipInstances_1907_, lean_object* v_x_1908_, lean_object* v_x_1909_, lean_object* v___y_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1912_ = l_Lean_mkAppN(v_f_1899_, v_a_1911_);
v___x_1913_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_1900_, v_inst_1901_, v_inst_1902_, v_pre_1903_, v_post_1904_, v_usedLetOnly_1905_, v_skipConstInApp_1906_, v_skipInstances_1907_, v_x_1908_, v_x_1909_, v___x_1912_, v___y_1910_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object* v_f_1914_, lean_object* v_inst_1915_, lean_object* v_inst_1916_, lean_object* v_inst_1917_, lean_object* v_pre_1918_, lean_object* v_post_1919_, lean_object* v_usedLetOnly_1920_, lean_object* v_skipConstInApp_1921_, lean_object* v_skipInstances_1922_, lean_object* v_x_1923_, lean_object* v_x_1924_, lean_object* v___y_1925_, lean_object* v_a_1926_){
_start:
{
uint8_t v_usedLetOnly_boxed_1927_; uint8_t v_skipConstInApp_boxed_1928_; uint8_t v_skipInstances_boxed_1929_; lean_object* v_res_1930_; 
v_usedLetOnly_boxed_1927_ = lean_unbox(v_usedLetOnly_1920_);
v_skipConstInApp_boxed_1928_ = lean_unbox(v_skipConstInApp_1921_);
v_skipInstances_boxed_1929_ = lean_unbox(v_skipInstances_1922_);
v_res_1930_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(v_f_1914_, v_inst_1915_, v_inst_1916_, v_inst_1917_, v_pre_1918_, v_post_1919_, v_usedLetOnly_boxed_1927_, v_skipConstInApp_boxed_1928_, v_skipInstances_boxed_1929_, v_x_1923_, v_x_1924_, v___y_1925_, v_a_1926_);
lean_dec_ref(v_a_1926_);
lean_dec(v___y_1925_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_pre_1934_, lean_object* v_post_1935_, lean_object* v_usedLetOnly_1936_, lean_object* v_skipConstInApp_1937_, lean_object* v_skipInstances_1938_, lean_object* v_x_1939_, lean_object* v_x_1940_, lean_object* v_e_1941_, lean_object* v_a_1942_){
_start:
{
uint8_t v_usedLetOnly_boxed_1943_; uint8_t v_skipConstInApp_boxed_1944_; uint8_t v_skipInstances_boxed_1945_; lean_object* v_res_1946_; 
v_usedLetOnly_boxed_1943_ = lean_unbox(v_usedLetOnly_1936_);
v_skipConstInApp_boxed_1944_ = lean_unbox(v_skipConstInApp_1937_);
v_skipInstances_boxed_1945_ = lean_unbox(v_skipInstances_1938_);
v_res_1946_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1931_, v_inst_1932_, v_inst_1933_, v_pre_1934_, v_post_1935_, v_usedLetOnly_boxed_1943_, v_skipConstInApp_boxed_1944_, v_skipInstances_boxed_1945_, v_x_1939_, v_x_1940_, v_e_1941_, v_a_1942_);
lean_dec(v_a_1942_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object* v___x_1947_, lean_object* v_toApplicative_1948_, lean_object* v_toBind_1949_, lean_object* v___f_1950_, lean_object* v_paramInfo_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v_inst_1954_, lean_object* v_pre_1955_, lean_object* v_post_1956_, uint8_t v_usedLetOnly_1957_, uint8_t v_skipConstInApp_1958_, uint8_t v_skipInstances_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_, lean_object* v_next_1962_, lean_object* v_acc_1963_, lean_object* v_h_1964_, lean_object* v_G_1965_, lean_object* v___y_1966_){
_start:
{
uint8_t v___x_1967_; 
v___x_1967_ = lean_nat_dec_lt(v_next_1962_, v___x_1947_);
if (v___x_1967_ == 0)
{
lean_object* v_toPure_1968_; lean_object* v___x_1969_; 
lean_dec(v_G_1965_);
lean_dec(v_next_1962_);
lean_dec(v_x_1961_);
lean_dec(v_post_1956_);
lean_dec(v_pre_1955_);
lean_dec_ref(v_inst_1954_);
lean_dec(v_inst_1953_);
lean_dec_ref(v_inst_1952_);
lean_dec(v___f_1950_);
lean_dec(v_toBind_1949_);
v_toPure_1968_ = lean_ctor_get(v_toApplicative_1948_, 1);
lean_inc(v_toPure_1968_);
lean_dec_ref(v_toApplicative_1948_);
v___x_1969_ = lean_apply_2(v_toPure_1968_, lean_box(0), v_acc_1963_);
return v___x_1969_;
}
else
{
lean_object* v___f_1970_; lean_object* v___y_1972_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
lean_inc(v___y_1966_);
lean_inc(v_next_1962_);
lean_inc_ref(v_toApplicative_1948_);
v___f_1970_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1970_, 0, v_toApplicative_1948_);
lean_closure_set(v___f_1970_, 1, v_next_1962_);
lean_closure_set(v___f_1970_, 2, v_G_1965_);
lean_closure_set(v___f_1970_, 3, v___y_1966_);
v___x_1975_ = lean_array_fget_borrowed(v_acc_1963_, v_next_1962_);
v___x_1976_ = lean_array_get_size(v_paramInfo_1951_);
v___x_1977_ = lean_nat_dec_lt(v_next_1962_, v___x_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___f_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
lean_inc(v___x_1975_);
v___f_1978_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1978_, 0, v_toApplicative_1948_);
lean_closure_set(v___f_1978_, 1, v_acc_1963_);
lean_closure_set(v___f_1978_, 2, v_next_1962_);
v___x_1979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1952_, v_inst_1953_, v_inst_1954_, v_pre_1955_, v_post_1956_, v_usedLetOnly_1957_, v_skipConstInApp_1958_, v_skipInstances_1959_, v_x_1960_, v_x_1961_, v___x_1975_, v___y_1966_);
lean_inc(v_toBind_1949_);
v___x_1980_ = lean_apply_4(v_toBind_1949_, lean_box(0), lean_box(0), v___x_1979_, v___f_1978_);
v___y_1972_ = v___x_1980_;
goto v___jp_1971_;
}
else
{
lean_object* v___x_1981_; uint8_t v_isInstance_1982_; 
v___x_1981_ = lean_array_fget_borrowed(v_paramInfo_1951_, v_next_1962_);
v_isInstance_1982_ = lean_ctor_get_uint8(v___x_1981_, sizeof(void*)*1 + 4);
if (v_isInstance_1982_ == 0)
{
lean_object* v___f_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
lean_inc(v___x_1975_);
v___f_1983_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1983_, 0, v_toApplicative_1948_);
lean_closure_set(v___f_1983_, 1, v_acc_1963_);
lean_closure_set(v___f_1983_, 2, v_next_1962_);
v___x_1984_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_1952_, v_inst_1953_, v_inst_1954_, v_pre_1955_, v_post_1956_, v_usedLetOnly_1957_, v_skipConstInApp_1958_, v_skipInstances_1959_, v_x_1960_, v_x_1961_, v___x_1975_, v___y_1966_);
lean_inc(v_toBind_1949_);
v___x_1985_ = lean_apply_4(v_toBind_1949_, lean_box(0), lean_box(0), v___x_1984_, v___f_1983_);
v___y_1972_ = v___x_1985_;
goto v___jp_1971_;
}
else
{
lean_object* v_toPure_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_dec(v_next_1962_);
lean_dec(v_x_1961_);
lean_dec(v_post_1956_);
lean_dec(v_pre_1955_);
lean_dec_ref(v_inst_1954_);
lean_dec(v_inst_1953_);
lean_dec_ref(v_inst_1952_);
v_toPure_1986_ = lean_ctor_get(v_toApplicative_1948_, 1);
lean_inc(v_toPure_1986_);
lean_dec_ref(v_toApplicative_1948_);
v___x_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1987_, 0, v_acc_1963_);
v___x_1988_ = lean_apply_2(v_toPure_1986_, lean_box(0), v___x_1987_);
v___y_1972_ = v___x_1988_;
goto v___jp_1971_;
}
}
v___jp_1971_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
lean_inc(v_toBind_1949_);
v___x_1973_ = lean_apply_4(v_toBind_1949_, lean_box(0), lean_box(0), v___y_1972_, v___f_1950_);
v___x_1974_ = lean_apply_4(v_toBind_1949_, lean_box(0), lean_box(0), v___x_1973_, v___f_1970_);
return v___x_1974_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_1989_ = _args[0];
lean_object* v_toApplicative_1990_ = _args[1];
lean_object* v_toBind_1991_ = _args[2];
lean_object* v___f_1992_ = _args[3];
lean_object* v_paramInfo_1993_ = _args[4];
lean_object* v_inst_1994_ = _args[5];
lean_object* v_inst_1995_ = _args[6];
lean_object* v_inst_1996_ = _args[7];
lean_object* v_pre_1997_ = _args[8];
lean_object* v_post_1998_ = _args[9];
lean_object* v_usedLetOnly_1999_ = _args[10];
lean_object* v_skipConstInApp_2000_ = _args[11];
lean_object* v_skipInstances_2001_ = _args[12];
lean_object* v_x_2002_ = _args[13];
lean_object* v_x_2003_ = _args[14];
lean_object* v_next_2004_ = _args[15];
lean_object* v_acc_2005_ = _args[16];
lean_object* v_h_2006_ = _args[17];
lean_object* v_G_2007_ = _args[18];
lean_object* v___y_2008_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2009_; uint8_t v_skipConstInApp_boxed_2010_; uint8_t v_skipInstances_boxed_2011_; lean_object* v_res_2012_; 
v_usedLetOnly_boxed_2009_ = lean_unbox(v_usedLetOnly_1999_);
v_skipConstInApp_boxed_2010_ = lean_unbox(v_skipConstInApp_2000_);
v_skipInstances_boxed_2011_ = lean_unbox(v_skipInstances_2001_);
v_res_2012_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(v___x_1989_, v_toApplicative_1990_, v_toBind_1991_, v___f_1992_, v_paramInfo_1993_, v_inst_1994_, v_inst_1995_, v_inst_1996_, v_pre_1997_, v_post_1998_, v_usedLetOnly_boxed_2009_, v_skipConstInApp_boxed_2010_, v_skipInstances_boxed_2011_, v_x_2002_, v_x_2003_, v_next_2004_, v_acc_2005_, v_h_2006_, v_G_2007_, v___y_2008_);
lean_dec(v___y_2008_);
lean_dec_ref(v_paramInfo_1993_);
lean_dec(v___x_1989_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object* v___x_2013_, lean_object* v_toApplicative_2014_, lean_object* v_toBind_2015_, lean_object* v___f_2016_, lean_object* v_inst_2017_, lean_object* v_inst_2018_, lean_object* v_inst_2019_, lean_object* v_pre_2020_, lean_object* v_post_2021_, uint8_t v_usedLetOnly_2022_, uint8_t v_skipConstInApp_2023_, uint8_t v_skipInstances_2024_, lean_object* v_x_2025_, lean_object* v_x_2026_, lean_object* v_args_2027_, lean_object* v___y_2028_, lean_object* v___f_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v_paramInfo_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___f_2036_; lean_object* v___x_3541__overap_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_paramInfo_2031_ = lean_ctor_get(v_a_2030_, 0);
lean_inc_ref(v_paramInfo_2031_);
lean_dec_ref(v_a_2030_);
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = lean_box(v_usedLetOnly_2022_);
v___x_2034_ = lean_box(v_skipConstInApp_2023_);
v___x_2035_ = lean_box(v_skipInstances_2024_);
lean_inc(v_toBind_2015_);
v___f_2036_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed), 20, 15);
lean_closure_set(v___f_2036_, 0, v___x_2013_);
lean_closure_set(v___f_2036_, 1, v_toApplicative_2014_);
lean_closure_set(v___f_2036_, 2, v_toBind_2015_);
lean_closure_set(v___f_2036_, 3, v___f_2016_);
lean_closure_set(v___f_2036_, 4, v_paramInfo_2031_);
lean_closure_set(v___f_2036_, 5, v_inst_2017_);
lean_closure_set(v___f_2036_, 6, v_inst_2018_);
lean_closure_set(v___f_2036_, 7, v_inst_2019_);
lean_closure_set(v___f_2036_, 8, v_pre_2020_);
lean_closure_set(v___f_2036_, 9, v_post_2021_);
lean_closure_set(v___f_2036_, 10, v___x_2033_);
lean_closure_set(v___f_2036_, 11, v___x_2034_);
lean_closure_set(v___f_2036_, 12, v___x_2035_);
lean_closure_set(v___f_2036_, 13, v_x_2025_);
lean_closure_set(v___f_2036_, 14, v_x_2026_);
v___x_3541__overap_2037_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2036_, v___x_2032_, v_args_2027_, lean_box(0));
lean_inc(v___y_2028_);
v___x_2038_ = lean_apply_1(v___x_3541__overap_2037_, v___y_2028_);
v___x_2039_ = lean_apply_4(v_toBind_2015_, lean_box(0), lean_box(0), v___x_2038_, v___f_2029_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_2040_ = _args[0];
lean_object* v_toApplicative_2041_ = _args[1];
lean_object* v_toBind_2042_ = _args[2];
lean_object* v___f_2043_ = _args[3];
lean_object* v_inst_2044_ = _args[4];
lean_object* v_inst_2045_ = _args[5];
lean_object* v_inst_2046_ = _args[6];
lean_object* v_pre_2047_ = _args[7];
lean_object* v_post_2048_ = _args[8];
lean_object* v_usedLetOnly_2049_ = _args[9];
lean_object* v_skipConstInApp_2050_ = _args[10];
lean_object* v_skipInstances_2051_ = _args[11];
lean_object* v_x_2052_ = _args[12];
lean_object* v_x_2053_ = _args[13];
lean_object* v_args_2054_ = _args[14];
lean_object* v___y_2055_ = _args[15];
lean_object* v___f_2056_ = _args[16];
lean_object* v_a_2057_ = _args[17];
_start:
{
uint8_t v_usedLetOnly_boxed_2058_; uint8_t v_skipConstInApp_boxed_2059_; uint8_t v_skipInstances_boxed_2060_; lean_object* v_res_2061_; 
v_usedLetOnly_boxed_2058_ = lean_unbox(v_usedLetOnly_2049_);
v_skipConstInApp_boxed_2059_ = lean_unbox(v_skipConstInApp_2050_);
v_skipInstances_boxed_2060_ = lean_unbox(v_skipInstances_2051_);
v_res_2061_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(v___x_2040_, v_toApplicative_2041_, v_toBind_2042_, v___f_2043_, v_inst_2044_, v_inst_2045_, v_inst_2046_, v_pre_2047_, v_post_2048_, v_usedLetOnly_boxed_2058_, v_skipConstInApp_boxed_2059_, v_skipInstances_boxed_2060_, v_x_2052_, v_x_2053_, v_args_2054_, v___y_2055_, v___f_2056_, v_a_2057_);
lean_dec(v___y_2055_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t v_skipInstances_2062_, lean_object* v_inst_2063_, lean_object* v_inst_2064_, lean_object* v_inst_2065_, lean_object* v_pre_2066_, lean_object* v_post_2067_, uint8_t v_usedLetOnly_2068_, uint8_t v_skipConstInApp_2069_, lean_object* v_x_2070_, lean_object* v_x_2071_, lean_object* v_args_2072_, lean_object* v___x_2073_, lean_object* v_toBind_2074_, lean_object* v_toApplicative_2075_, lean_object* v___f_2076_, lean_object* v_f_2077_, lean_object* v___y_2078_){
_start:
{
if (v_skipInstances_2062_ == 0)
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___f_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; size_t v_sz_2087_; size_t v___x_2088_; lean_object* v___x_3554__overap_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
lean_dec(v___f_2076_);
lean_dec_ref(v_toApplicative_2075_);
v___x_2079_ = lean_box(v_usedLetOnly_2068_);
v___x_2080_ = lean_box(v_skipConstInApp_2069_);
v___x_2081_ = lean_box(v_skipInstances_2062_);
lean_inc_n(v___y_2078_, 2);
lean_inc(v_x_2071_);
lean_inc(v_post_2067_);
lean_inc(v_pre_2066_);
lean_inc_ref(v_inst_2065_);
lean_inc(v_inst_2064_);
lean_inc_ref(v_inst_2063_);
v___f_2082_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2082_, 0, v_f_2077_);
lean_closure_set(v___f_2082_, 1, v_inst_2063_);
lean_closure_set(v___f_2082_, 2, v_inst_2064_);
lean_closure_set(v___f_2082_, 3, v_inst_2065_);
lean_closure_set(v___f_2082_, 4, v_pre_2066_);
lean_closure_set(v___f_2082_, 5, v_post_2067_);
lean_closure_set(v___f_2082_, 6, v___x_2079_);
lean_closure_set(v___f_2082_, 7, v___x_2080_);
lean_closure_set(v___f_2082_, 8, v___x_2081_);
lean_closure_set(v___f_2082_, 9, v_x_2070_);
lean_closure_set(v___f_2082_, 10, v_x_2071_);
lean_closure_set(v___f_2082_, 11, v___y_2078_);
v___x_2083_ = lean_box(v_usedLetOnly_2068_);
v___x_2084_ = lean_box(v_skipConstInApp_2069_);
v___x_2085_ = lean_box(v_skipInstances_2062_);
v___x_2086_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed), 12, 10);
lean_closure_set(v___x_2086_, 0, v_inst_2063_);
lean_closure_set(v___x_2086_, 1, v_inst_2064_);
lean_closure_set(v___x_2086_, 2, v_inst_2065_);
lean_closure_set(v___x_2086_, 3, v_pre_2066_);
lean_closure_set(v___x_2086_, 4, v_post_2067_);
lean_closure_set(v___x_2086_, 5, v___x_2083_);
lean_closure_set(v___x_2086_, 6, v___x_2084_);
lean_closure_set(v___x_2086_, 7, v___x_2085_);
lean_closure_set(v___x_2086_, 8, v_x_2070_);
lean_closure_set(v___x_2086_, 9, v_x_2071_);
v_sz_2087_ = lean_array_size(v_args_2072_);
v___x_2088_ = ((size_t)0ULL);
v___x_3554__overap_2089_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2073_, v___x_2086_, v_sz_2087_, v___x_2088_, v_args_2072_);
v___x_2090_ = lean_apply_1(v___x_3554__overap_2089_, v___y_2078_);
v___x_2091_ = lean_apply_4(v_toBind_2074_, lean_box(0), lean_box(0), v___x_2090_, v___f_2082_);
return v___x_2091_;
}
else
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___f_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___f_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_dec_ref(v___x_2073_);
v___x_2092_ = lean_box(v_usedLetOnly_2068_);
v___x_2093_ = lean_box(v_skipConstInApp_2069_);
v___x_2094_ = lean_box(v_skipInstances_2062_);
lean_inc_n(v___y_2078_, 2);
lean_inc(v_x_2071_);
lean_inc(v_post_2067_);
lean_inc(v_pre_2066_);
lean_inc_ref(v_inst_2065_);
lean_inc_n(v_inst_2064_, 2);
lean_inc_ref(v_inst_2063_);
lean_inc_ref(v_f_2077_);
v___f_2095_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2095_, 0, v_f_2077_);
lean_closure_set(v___f_2095_, 1, v_inst_2063_);
lean_closure_set(v___f_2095_, 2, v_inst_2064_);
lean_closure_set(v___f_2095_, 3, v_inst_2065_);
lean_closure_set(v___f_2095_, 4, v_pre_2066_);
lean_closure_set(v___f_2095_, 5, v_post_2067_);
lean_closure_set(v___f_2095_, 6, v___x_2092_);
lean_closure_set(v___f_2095_, 7, v___x_2093_);
lean_closure_set(v___f_2095_, 8, v___x_2094_);
lean_closure_set(v___f_2095_, 9, v_x_2070_);
lean_closure_set(v___f_2095_, 10, v_x_2071_);
lean_closure_set(v___f_2095_, 11, v___y_2078_);
v___x_2096_ = lean_array_get_size(v_args_2072_);
v___x_2097_ = lean_box(v_usedLetOnly_2068_);
v___x_2098_ = lean_box(v_skipConstInApp_2069_);
v___x_2099_ = lean_box(v_skipInstances_2062_);
lean_inc(v_toBind_2074_);
v___f_2100_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed), 18, 17);
lean_closure_set(v___f_2100_, 0, v___x_2096_);
lean_closure_set(v___f_2100_, 1, v_toApplicative_2075_);
lean_closure_set(v___f_2100_, 2, v_toBind_2074_);
lean_closure_set(v___f_2100_, 3, v___f_2076_);
lean_closure_set(v___f_2100_, 4, v_inst_2063_);
lean_closure_set(v___f_2100_, 5, v_inst_2064_);
lean_closure_set(v___f_2100_, 6, v_inst_2065_);
lean_closure_set(v___f_2100_, 7, v_pre_2066_);
lean_closure_set(v___f_2100_, 8, v_post_2067_);
lean_closure_set(v___f_2100_, 9, v___x_2097_);
lean_closure_set(v___f_2100_, 10, v___x_2098_);
lean_closure_set(v___f_2100_, 11, v___x_2099_);
lean_closure_set(v___f_2100_, 12, v_x_2070_);
lean_closure_set(v___f_2100_, 13, v_x_2071_);
lean_closure_set(v___f_2100_, 14, v_args_2072_);
lean_closure_set(v___f_2100_, 15, v___y_2078_);
lean_closure_set(v___f_2100_, 16, v___f_2095_);
v___x_2101_ = lean_alloc_closure((void*)(l_Lean_Meta_getFunInfoNArgs___boxed), 7, 2);
lean_closure_set(v___x_2101_, 0, v_f_2077_);
lean_closure_set(v___x_2101_, 1, v___x_2096_);
v___x_2102_ = lean_apply_2(v_inst_2064_, lean_box(0), v___x_2101_);
v___x_2103_ = lean_apply_4(v_toBind_2074_, lean_box(0), lean_box(0), v___x_2102_, v___f_2100_);
return v___x_2103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_skipInstances_2104_ = _args[0];
lean_object* v_inst_2105_ = _args[1];
lean_object* v_inst_2106_ = _args[2];
lean_object* v_inst_2107_ = _args[3];
lean_object* v_pre_2108_ = _args[4];
lean_object* v_post_2109_ = _args[5];
lean_object* v_usedLetOnly_2110_ = _args[6];
lean_object* v_skipConstInApp_2111_ = _args[7];
lean_object* v_x_2112_ = _args[8];
lean_object* v_x_2113_ = _args[9];
lean_object* v_args_2114_ = _args[10];
lean_object* v___x_2115_ = _args[11];
lean_object* v_toBind_2116_ = _args[12];
lean_object* v_toApplicative_2117_ = _args[13];
lean_object* v___f_2118_ = _args[14];
lean_object* v_f_2119_ = _args[15];
lean_object* v___y_2120_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2121_; uint8_t v_usedLetOnly_boxed_2122_; uint8_t v_skipConstInApp_boxed_2123_; lean_object* v_res_2124_; 
v_skipInstances_boxed_2121_ = lean_unbox(v_skipInstances_2104_);
v_usedLetOnly_boxed_2122_ = lean_unbox(v_usedLetOnly_2110_);
v_skipConstInApp_boxed_2123_ = lean_unbox(v_skipConstInApp_2111_);
v_res_2124_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(v_skipInstances_boxed_2121_, v_inst_2105_, v_inst_2106_, v_inst_2107_, v_pre_2108_, v_post_2109_, v_usedLetOnly_boxed_2122_, v_skipConstInApp_boxed_2123_, v_x_2112_, v_x_2113_, v_args_2114_, v___x_2115_, v_toBind_2116_, v_toApplicative_2117_, v___f_2118_, v_f_2119_, v___y_2120_);
lean_dec(v___y_2120_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t v_skipInstances_2125_, lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_pre_2129_, lean_object* v_post_2130_, uint8_t v_usedLetOnly_2131_, uint8_t v_skipConstInApp_2132_, lean_object* v_x_2133_, lean_object* v_x_2134_, lean_object* v___x_2135_, lean_object* v_toBind_2136_, lean_object* v_toApplicative_2137_, lean_object* v___f_2138_, lean_object* v_f_2139_, lean_object* v_args_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___f_2145_; lean_object* v___f_2146_; 
v___x_2142_ = lean_box(v_skipInstances_2125_);
v___x_2143_ = lean_box(v_usedLetOnly_2131_);
v___x_2144_ = lean_box(v_skipConstInApp_2132_);
lean_inc_ref(v_toApplicative_2137_);
lean_inc(v_toBind_2136_);
lean_inc(v_x_2134_);
lean_inc(v_post_2130_);
lean_inc(v_pre_2129_);
lean_inc_ref(v_inst_2128_);
lean_inc(v_inst_2127_);
lean_inc_ref(v_inst_2126_);
v___f_2145_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed), 17, 15);
lean_closure_set(v___f_2145_, 0, v___x_2142_);
lean_closure_set(v___f_2145_, 1, v_inst_2126_);
lean_closure_set(v___f_2145_, 2, v_inst_2127_);
lean_closure_set(v___f_2145_, 3, v_inst_2128_);
lean_closure_set(v___f_2145_, 4, v_pre_2129_);
lean_closure_set(v___f_2145_, 5, v_post_2130_);
lean_closure_set(v___f_2145_, 6, v___x_2143_);
lean_closure_set(v___f_2145_, 7, v___x_2144_);
lean_closure_set(v___f_2145_, 8, v_x_2133_);
lean_closure_set(v___f_2145_, 9, v_x_2134_);
lean_closure_set(v___f_2145_, 10, v_args_2140_);
lean_closure_set(v___f_2145_, 11, v___x_2135_);
lean_closure_set(v___f_2145_, 12, v_toBind_2136_);
lean_closure_set(v___f_2145_, 13, v_toApplicative_2137_);
lean_closure_set(v___f_2145_, 14, v___f_2138_);
lean_inc(v___y_2141_);
v___f_2146_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_2146_, 0, v___f_2145_);
lean_closure_set(v___f_2146_, 1, v___y_2141_);
if (v_skipConstInApp_2132_ == 0)
{
lean_dec_ref(v_toApplicative_2137_);
goto v___jp_2147_;
}
else
{
uint8_t v___x_2150_; 
v___x_2150_ = l_Lean_Expr_isConst(v_f_2139_);
if (v___x_2150_ == 0)
{
lean_dec_ref(v_toApplicative_2137_);
goto v___jp_2147_;
}
else
{
lean_object* v_toPure_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_dec(v_x_2134_);
lean_dec(v_post_2130_);
lean_dec(v_pre_2129_);
lean_dec_ref(v_inst_2128_);
lean_dec(v_inst_2127_);
lean_dec_ref(v_inst_2126_);
v_toPure_2151_ = lean_ctor_get(v_toApplicative_2137_, 1);
lean_inc(v_toPure_2151_);
lean_dec_ref(v_toApplicative_2137_);
v___x_2152_ = lean_apply_2(v_toPure_2151_, lean_box(0), v_f_2139_);
v___x_2153_ = lean_apply_4(v_toBind_2136_, lean_box(0), lean_box(0), v___x_2152_, v___f_2146_);
return v___x_2153_;
}
}
v___jp_2147_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2126_, v_inst_2127_, v_inst_2128_, v_pre_2129_, v_post_2130_, v_usedLetOnly_2131_, v_skipConstInApp_2132_, v_skipInstances_2125_, v_x_2133_, v_x_2134_, v_f_2139_, v___y_2141_);
v___x_2149_ = lean_apply_4(v_toBind_2136_, lean_box(0), lean_box(0), v___x_2148_, v___f_2146_);
return v___x_2149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_skipInstances_2154_ = _args[0];
lean_object* v_inst_2155_ = _args[1];
lean_object* v_inst_2156_ = _args[2];
lean_object* v_inst_2157_ = _args[3];
lean_object* v_pre_2158_ = _args[4];
lean_object* v_post_2159_ = _args[5];
lean_object* v_usedLetOnly_2160_ = _args[6];
lean_object* v_skipConstInApp_2161_ = _args[7];
lean_object* v_x_2162_ = _args[8];
lean_object* v_x_2163_ = _args[9];
lean_object* v___x_2164_ = _args[10];
lean_object* v_toBind_2165_ = _args[11];
lean_object* v_toApplicative_2166_ = _args[12];
lean_object* v___f_2167_ = _args[13];
lean_object* v_f_2168_ = _args[14];
lean_object* v_args_2169_ = _args[15];
lean_object* v___y_2170_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2171_; uint8_t v_usedLetOnly_boxed_2172_; uint8_t v_skipConstInApp_boxed_2173_; lean_object* v_res_2174_; 
v_skipInstances_boxed_2171_ = lean_unbox(v_skipInstances_2154_);
v_usedLetOnly_boxed_2172_ = lean_unbox(v_usedLetOnly_2160_);
v_skipConstInApp_boxed_2173_ = lean_unbox(v_skipConstInApp_2161_);
v_res_2174_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(v_skipInstances_boxed_2171_, v_inst_2155_, v_inst_2156_, v_inst_2157_, v_pre_2158_, v_post_2159_, v_usedLetOnly_boxed_2172_, v_skipConstInApp_boxed_2173_, v_x_2162_, v_x_2163_, v___x_2164_, v_toBind_2165_, v_toApplicative_2166_, v___f_2167_, v_f_2168_, v_args_2169_, v___y_2170_);
lean_dec(v___y_2170_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object* v_fvars_2177_, lean_object* v_inst_2178_, lean_object* v_inst_2179_, lean_object* v_inst_2180_, lean_object* v_pre_2181_, lean_object* v_post_2182_, uint8_t v_usedLetOnly_2183_, uint8_t v_skipConstInApp_2184_, uint8_t v_skipInstances_2185_, lean_object* v_x_2186_, lean_object* v_x_2187_, lean_object* v_body_2188_, lean_object* v_x_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = lean_array_push(v_fvars_2177_, v_x_2189_);
v___x_2192_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2178_, v_inst_2179_, v_inst_2180_, v_pre_2181_, v_post_2182_, v_usedLetOnly_2183_, v_skipConstInApp_2184_, v_skipInstances_2185_, v_x_2186_, v_x_2187_, v___x_2191_, v_body_2188_, v___y_2190_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object* v_fvars_2193_, lean_object* v_inst_2194_, lean_object* v_inst_2195_, lean_object* v_inst_2196_, lean_object* v_pre_2197_, lean_object* v_post_2198_, lean_object* v_usedLetOnly_2199_, lean_object* v_skipConstInApp_2200_, lean_object* v_skipInstances_2201_, lean_object* v_x_2202_, lean_object* v_x_2203_, lean_object* v_body_2204_, lean_object* v_x_2205_, lean_object* v___y_2206_){
_start:
{
uint8_t v_usedLetOnly_boxed_2207_; uint8_t v_skipConstInApp_boxed_2208_; uint8_t v_skipInstances_boxed_2209_; lean_object* v_res_2210_; 
v_usedLetOnly_boxed_2207_ = lean_unbox(v_usedLetOnly_2199_);
v_skipConstInApp_boxed_2208_ = lean_unbox(v_skipConstInApp_2200_);
v_skipInstances_boxed_2209_ = lean_unbox(v_skipInstances_2201_);
v_res_2210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(v_fvars_2193_, v_inst_2194_, v_inst_2195_, v_inst_2196_, v_pre_2197_, v_post_2198_, v_usedLetOnly_boxed_2207_, v_skipConstInApp_boxed_2208_, v_skipInstances_boxed_2209_, v_x_2202_, v_x_2203_, v_body_2204_, v_x_2205_, v___y_2206_);
lean_dec(v___y_2206_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object* v_inst_2211_, lean_object* v_inst_2212_, lean_object* v_inst_2213_, lean_object* v_pre_2214_, lean_object* v_post_2215_, lean_object* v_usedLetOnly_2216_, lean_object* v_skipConstInApp_2217_, lean_object* v_skipInstances_2218_, lean_object* v_x_2219_, lean_object* v_x_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_){
_start:
{
uint8_t v_usedLetOnly_boxed_2223_; uint8_t v_skipConstInApp_boxed_2224_; uint8_t v_skipInstances_boxed_2225_; lean_object* v_res_2226_; 
v_usedLetOnly_boxed_2223_ = lean_unbox(v_usedLetOnly_2216_);
v_skipConstInApp_boxed_2224_ = lean_unbox(v_skipConstInApp_2217_);
v_skipInstances_boxed_2225_ = lean_unbox(v_skipInstances_2218_);
v_res_2226_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(v_inst_2211_, v_inst_2212_, v_inst_2213_, v_pre_2214_, v_post_2215_, v_usedLetOnly_boxed_2223_, v_skipConstInApp_boxed_2224_, v_skipInstances_boxed_2225_, v_x_2219_, v_x_2220_, v_a_2221_, v_a_2222_);
lean_dec(v_a_2221_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object* v_inst_2227_, lean_object* v_inst_2228_, lean_object* v_inst_2229_, lean_object* v_pre_2230_, lean_object* v_post_2231_, uint8_t v_usedLetOnly_2232_, uint8_t v_skipConstInApp_2233_, uint8_t v_skipInstances_2234_, lean_object* v_x_2235_, lean_object* v_x_2236_, lean_object* v_fvars_2237_, lean_object* v_e_2238_, lean_object* v_a_2239_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___f_2244_; lean_object* v___f_2245_; lean_object* v___x_2246_; 
v___x_2240_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2241_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2227_);
v___x_2242_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2235_, v___x_2240_, v___x_2241_, v_inst_2227_);
v___x_2243_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2235_, v___x_2240_, v___x_2241_);
lean_inc_ref_n(v_inst_2229_, 2);
lean_inc_ref(v___x_2243_);
v___f_2244_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2244_, 0, v___x_2243_);
lean_closure_set(v___f_2244_, 1, v_inst_2229_);
v___f_2245_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2245_, 0, v___x_2243_);
lean_closure_set(v___f_2245_, 1, v_inst_2229_);
v___x_2246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___f_2244_);
lean_ctor_set(v___x_2246_, 1, v___f_2245_);
if (lean_obj_tag(v_e_2238_) == 7)
{
lean_object* v_binderName_2247_; lean_object* v_binderType_2248_; lean_object* v_body_2249_; uint8_t v_binderInfo_2250_; lean_object* v_toBind_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___f_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v_binderName_2247_ = lean_ctor_get(v_e_2238_, 0);
lean_inc(v_binderName_2247_);
v_binderType_2248_ = lean_ctor_get(v_e_2238_, 1);
lean_inc_ref(v_binderType_2248_);
v_body_2249_ = lean_ctor_get(v_e_2238_, 2);
lean_inc_ref(v_body_2249_);
v_binderInfo_2250_ = lean_ctor_get_uint8(v_e_2238_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2238_);
v_toBind_2251_ = lean_ctor_get(v_inst_2227_, 1);
lean_inc(v_toBind_2251_);
v___x_2252_ = lean_box(v_usedLetOnly_2232_);
v___x_2253_ = lean_box(v_skipConstInApp_2233_);
v___x_2254_ = lean_box(v_skipInstances_2234_);
lean_inc(v_x_2236_);
lean_inc(v_post_2231_);
lean_inc(v_pre_2230_);
lean_inc_ref(v_inst_2229_);
lean_inc(v_inst_2228_);
lean_inc_ref(v_inst_2227_);
lean_inc_ref(v_fvars_2237_);
v___f_2255_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2255_, 0, v_fvars_2237_);
lean_closure_set(v___f_2255_, 1, v_inst_2227_);
lean_closure_set(v___f_2255_, 2, v_inst_2228_);
lean_closure_set(v___f_2255_, 3, v_inst_2229_);
lean_closure_set(v___f_2255_, 4, v_pre_2230_);
lean_closure_set(v___f_2255_, 5, v_post_2231_);
lean_closure_set(v___f_2255_, 6, v___x_2252_);
lean_closure_set(v___f_2255_, 7, v___x_2253_);
lean_closure_set(v___f_2255_, 8, v___x_2254_);
lean_closure_set(v___f_2255_, 9, v_x_2235_);
lean_closure_set(v___f_2255_, 10, v_x_2236_);
lean_closure_set(v___f_2255_, 11, v_body_2249_);
v___x_2256_ = lean_box(v_binderInfo_2250_);
lean_inc(v_a_2239_);
v___f_2257_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2257_, 0, v___x_2246_);
lean_closure_set(v___f_2257_, 1, v___x_2242_);
lean_closure_set(v___f_2257_, 2, v_binderName_2247_);
lean_closure_set(v___f_2257_, 3, v___x_2256_);
lean_closure_set(v___f_2257_, 4, v___f_2255_);
lean_closure_set(v___f_2257_, 5, v_a_2239_);
v___x_2258_ = lean_expr_instantiate_rev(v_binderType_2248_, v_fvars_2237_);
lean_dec_ref(v_fvars_2237_);
lean_dec_ref(v_binderType_2248_);
v___x_2259_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2227_, v_inst_2228_, v_inst_2229_, v_pre_2230_, v_post_2231_, v_usedLetOnly_2232_, v_skipConstInApp_2233_, v_skipInstances_2234_, v_x_2235_, v_x_2236_, v___x_2258_, v_a_2239_);
v___x_2260_ = lean_apply_4(v_toBind_2251_, lean_box(0), lean_box(0), v___x_2259_, v___f_2257_);
return v___x_2260_;
}
else
{
lean_object* v_toBind_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___f_2265_; lean_object* v___x_2266_; lean_object* v___f_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2242_);
v_toBind_2261_ = lean_ctor_get(v_inst_2227_, 1);
lean_inc_n(v_toBind_2261_, 2);
v___x_2262_ = lean_box(v_usedLetOnly_2232_);
v___x_2263_ = lean_box(v_skipConstInApp_2233_);
v___x_2264_ = lean_box(v_skipInstances_2234_);
lean_inc(v_a_2239_);
lean_inc(v_x_2236_);
lean_inc(v_post_2231_);
lean_inc(v_pre_2230_);
lean_inc_ref(v_inst_2229_);
lean_inc_n(v_inst_2228_, 2);
lean_inc_ref(v_inst_2227_);
v___f_2265_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2265_, 0, v_inst_2227_);
lean_closure_set(v___f_2265_, 1, v_inst_2228_);
lean_closure_set(v___f_2265_, 2, v_inst_2229_);
lean_closure_set(v___f_2265_, 3, v_pre_2230_);
lean_closure_set(v___f_2265_, 4, v_post_2231_);
lean_closure_set(v___f_2265_, 5, v___x_2262_);
lean_closure_set(v___f_2265_, 6, v___x_2263_);
lean_closure_set(v___f_2265_, 7, v___x_2264_);
lean_closure_set(v___f_2265_, 8, v_x_2235_);
lean_closure_set(v___f_2265_, 9, v_x_2236_);
lean_closure_set(v___f_2265_, 10, v_a_2239_);
v___x_2266_ = lean_box(v_usedLetOnly_2232_);
lean_inc_ref(v_fvars_2237_);
v___f_2267_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2267_, 0, v_fvars_2237_);
lean_closure_set(v___f_2267_, 1, v___x_2266_);
lean_closure_set(v___f_2267_, 2, v_inst_2228_);
lean_closure_set(v___f_2267_, 3, v_toBind_2261_);
lean_closure_set(v___f_2267_, 4, v___f_2265_);
v___x_2268_ = lean_expr_instantiate_rev(v_e_2238_, v_fvars_2237_);
lean_dec_ref(v_fvars_2237_);
lean_dec_ref(v_e_2238_);
v___x_2269_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2227_, v_inst_2228_, v_inst_2229_, v_pre_2230_, v_post_2231_, v_usedLetOnly_2232_, v_skipConstInApp_2233_, v_skipInstances_2234_, v_x_2235_, v_x_2236_, v___x_2268_, v_a_2239_);
v___x_2270_ = lean_apply_4(v_toBind_2261_, lean_box(0), lean_box(0), v___x_2269_, v___f_2267_);
return v___x_2270_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object* v_fvars_2271_, lean_object* v_inst_2272_, lean_object* v_inst_2273_, lean_object* v_inst_2274_, lean_object* v_pre_2275_, lean_object* v_post_2276_, uint8_t v_usedLetOnly_2277_, uint8_t v_skipConstInApp_2278_, uint8_t v_skipInstances_2279_, lean_object* v_x_2280_, lean_object* v_x_2281_, lean_object* v_body_2282_, lean_object* v_x_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = lean_array_push(v_fvars_2271_, v_x_2283_);
v___x_2286_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2272_, v_inst_2273_, v_inst_2274_, v_pre_2275_, v_post_2276_, v_usedLetOnly_2277_, v_skipConstInApp_2278_, v_skipInstances_2279_, v_x_2280_, v_x_2281_, v___x_2285_, v_body_2282_, v___y_2284_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object* v_fvars_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_inst_2290_, lean_object* v_pre_2291_, lean_object* v_post_2292_, lean_object* v_usedLetOnly_2293_, lean_object* v_skipConstInApp_2294_, lean_object* v_skipInstances_2295_, lean_object* v_x_2296_, lean_object* v_x_2297_, lean_object* v_body_2298_, lean_object* v_x_2299_, lean_object* v___y_2300_){
_start:
{
uint8_t v_usedLetOnly_boxed_2301_; uint8_t v_skipConstInApp_boxed_2302_; uint8_t v_skipInstances_boxed_2303_; lean_object* v_res_2304_; 
v_usedLetOnly_boxed_2301_ = lean_unbox(v_usedLetOnly_2293_);
v_skipConstInApp_boxed_2302_ = lean_unbox(v_skipConstInApp_2294_);
v_skipInstances_boxed_2303_ = lean_unbox(v_skipInstances_2295_);
v_res_2304_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(v_fvars_2287_, v_inst_2288_, v_inst_2289_, v_inst_2290_, v_pre_2291_, v_post_2292_, v_usedLetOnly_boxed_2301_, v_skipConstInApp_boxed_2302_, v_skipInstances_boxed_2303_, v_x_2296_, v_x_2297_, v_body_2298_, v_x_2299_, v___y_2300_);
lean_dec(v___y_2300_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object* v_inst_2305_, lean_object* v_inst_2306_, lean_object* v_inst_2307_, lean_object* v_pre_2308_, lean_object* v_post_2309_, uint8_t v_usedLetOnly_2310_, uint8_t v_skipConstInApp_2311_, uint8_t v_skipInstances_2312_, lean_object* v_x_2313_, lean_object* v_x_2314_, lean_object* v_fvars_2315_, lean_object* v_e_2316_, lean_object* v_a_2317_){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___f_2322_; lean_object* v___f_2323_; lean_object* v___x_2324_; 
v___x_2318_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2319_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2305_);
v___x_2320_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2313_, v___x_2318_, v___x_2319_, v_inst_2305_);
v___x_2321_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2313_, v___x_2318_, v___x_2319_);
lean_inc_ref_n(v_inst_2307_, 2);
lean_inc_ref(v___x_2321_);
v___f_2322_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2322_, 0, v___x_2321_);
lean_closure_set(v___f_2322_, 1, v_inst_2307_);
v___f_2323_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2323_, 0, v___x_2321_);
lean_closure_set(v___f_2323_, 1, v_inst_2307_);
v___x_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___f_2322_);
lean_ctor_set(v___x_2324_, 1, v___f_2323_);
if (lean_obj_tag(v_e_2316_) == 6)
{
lean_object* v_binderName_2325_; lean_object* v_binderType_2326_; lean_object* v_body_2327_; uint8_t v_binderInfo_2328_; lean_object* v_toBind_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___f_2333_; lean_object* v___x_2334_; lean_object* v___f_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v_binderName_2325_ = lean_ctor_get(v_e_2316_, 0);
lean_inc(v_binderName_2325_);
v_binderType_2326_ = lean_ctor_get(v_e_2316_, 1);
lean_inc_ref(v_binderType_2326_);
v_body_2327_ = lean_ctor_get(v_e_2316_, 2);
lean_inc_ref(v_body_2327_);
v_binderInfo_2328_ = lean_ctor_get_uint8(v_e_2316_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2316_);
v_toBind_2329_ = lean_ctor_get(v_inst_2305_, 1);
lean_inc(v_toBind_2329_);
v___x_2330_ = lean_box(v_usedLetOnly_2310_);
v___x_2331_ = lean_box(v_skipConstInApp_2311_);
v___x_2332_ = lean_box(v_skipInstances_2312_);
lean_inc(v_x_2314_);
lean_inc(v_post_2309_);
lean_inc(v_pre_2308_);
lean_inc_ref(v_inst_2307_);
lean_inc(v_inst_2306_);
lean_inc_ref(v_inst_2305_);
lean_inc_ref(v_fvars_2315_);
v___f_2333_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2333_, 0, v_fvars_2315_);
lean_closure_set(v___f_2333_, 1, v_inst_2305_);
lean_closure_set(v___f_2333_, 2, v_inst_2306_);
lean_closure_set(v___f_2333_, 3, v_inst_2307_);
lean_closure_set(v___f_2333_, 4, v_pre_2308_);
lean_closure_set(v___f_2333_, 5, v_post_2309_);
lean_closure_set(v___f_2333_, 6, v___x_2330_);
lean_closure_set(v___f_2333_, 7, v___x_2331_);
lean_closure_set(v___f_2333_, 8, v___x_2332_);
lean_closure_set(v___f_2333_, 9, v_x_2313_);
lean_closure_set(v___f_2333_, 10, v_x_2314_);
lean_closure_set(v___f_2333_, 11, v_body_2327_);
v___x_2334_ = lean_box(v_binderInfo_2328_);
lean_inc(v_a_2317_);
v___f_2335_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2335_, 0, v___x_2324_);
lean_closure_set(v___f_2335_, 1, v___x_2320_);
lean_closure_set(v___f_2335_, 2, v_binderName_2325_);
lean_closure_set(v___f_2335_, 3, v___x_2334_);
lean_closure_set(v___f_2335_, 4, v___f_2333_);
lean_closure_set(v___f_2335_, 5, v_a_2317_);
v___x_2336_ = lean_expr_instantiate_rev(v_binderType_2326_, v_fvars_2315_);
lean_dec_ref(v_fvars_2315_);
lean_dec_ref(v_binderType_2326_);
v___x_2337_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2305_, v_inst_2306_, v_inst_2307_, v_pre_2308_, v_post_2309_, v_usedLetOnly_2310_, v_skipConstInApp_2311_, v_skipInstances_2312_, v_x_2313_, v_x_2314_, v___x_2336_, v_a_2317_);
v___x_2338_ = lean_apply_4(v_toBind_2329_, lean_box(0), lean_box(0), v___x_2337_, v___f_2335_);
return v___x_2338_;
}
else
{
lean_object* v_toBind_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___f_2343_; lean_object* v___x_2344_; lean_object* v___f_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
lean_dec_ref(v___x_2324_);
lean_dec_ref(v___x_2320_);
v_toBind_2339_ = lean_ctor_get(v_inst_2305_, 1);
lean_inc_n(v_toBind_2339_, 2);
v___x_2340_ = lean_box(v_usedLetOnly_2310_);
v___x_2341_ = lean_box(v_skipConstInApp_2311_);
v___x_2342_ = lean_box(v_skipInstances_2312_);
lean_inc(v_a_2317_);
lean_inc(v_x_2314_);
lean_inc(v_post_2309_);
lean_inc(v_pre_2308_);
lean_inc_ref(v_inst_2307_);
lean_inc_n(v_inst_2306_, 2);
lean_inc_ref(v_inst_2305_);
v___f_2343_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2343_, 0, v_inst_2305_);
lean_closure_set(v___f_2343_, 1, v_inst_2306_);
lean_closure_set(v___f_2343_, 2, v_inst_2307_);
lean_closure_set(v___f_2343_, 3, v_pre_2308_);
lean_closure_set(v___f_2343_, 4, v_post_2309_);
lean_closure_set(v___f_2343_, 5, v___x_2340_);
lean_closure_set(v___f_2343_, 6, v___x_2341_);
lean_closure_set(v___f_2343_, 7, v___x_2342_);
lean_closure_set(v___f_2343_, 8, v_x_2313_);
lean_closure_set(v___f_2343_, 9, v_x_2314_);
lean_closure_set(v___f_2343_, 10, v_a_2317_);
v___x_2344_ = lean_box(v_usedLetOnly_2310_);
lean_inc_ref(v_fvars_2315_);
v___f_2345_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2345_, 0, v_fvars_2315_);
lean_closure_set(v___f_2345_, 1, v___x_2344_);
lean_closure_set(v___f_2345_, 2, v_inst_2306_);
lean_closure_set(v___f_2345_, 3, v_toBind_2339_);
lean_closure_set(v___f_2345_, 4, v___f_2343_);
v___x_2346_ = lean_expr_instantiate_rev(v_e_2316_, v_fvars_2315_);
lean_dec_ref(v_fvars_2315_);
lean_dec_ref(v_e_2316_);
v___x_2347_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2305_, v_inst_2306_, v_inst_2307_, v_pre_2308_, v_post_2309_, v_usedLetOnly_2310_, v_skipConstInApp_2311_, v_skipInstances_2312_, v_x_2313_, v_x_2314_, v___x_2346_, v_a_2317_);
v___x_2348_ = lean_apply_4(v_toBind_2339_, lean_box(0), lean_box(0), v___x_2347_, v___f_2345_);
return v___x_2348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object* v_fvars_2349_, lean_object* v_inst_2350_, lean_object* v_inst_2351_, lean_object* v_inst_2352_, lean_object* v_pre_2353_, lean_object* v_post_2354_, uint8_t v_usedLetOnly_2355_, uint8_t v_skipConstInApp_2356_, uint8_t v_skipInstances_2357_, lean_object* v_x_2358_, lean_object* v_x_2359_, lean_object* v_body_2360_, lean_object* v_x_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_array_push(v_fvars_2349_, v_x_2361_);
v___x_2364_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2350_, v_inst_2351_, v_inst_2352_, v_pre_2353_, v_post_2354_, v_usedLetOnly_2355_, v_skipConstInApp_2356_, v_skipInstances_2357_, v_x_2358_, v_x_2359_, v___x_2363_, v_body_2360_, v___y_2362_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object* v_fvars_2365_, lean_object* v_inst_2366_, lean_object* v_inst_2367_, lean_object* v_inst_2368_, lean_object* v_pre_2369_, lean_object* v_post_2370_, lean_object* v_usedLetOnly_2371_, lean_object* v_skipConstInApp_2372_, lean_object* v_skipInstances_2373_, lean_object* v_x_2374_, lean_object* v_x_2375_, lean_object* v_body_2376_, lean_object* v_x_2377_, lean_object* v___y_2378_){
_start:
{
uint8_t v_usedLetOnly_boxed_2379_; uint8_t v_skipConstInApp_boxed_2380_; uint8_t v_skipInstances_boxed_2381_; lean_object* v_res_2382_; 
v_usedLetOnly_boxed_2379_ = lean_unbox(v_usedLetOnly_2371_);
v_skipConstInApp_boxed_2380_ = lean_unbox(v_skipConstInApp_2372_);
v_skipInstances_boxed_2381_ = lean_unbox(v_skipInstances_2373_);
v_res_2382_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(v_fvars_2365_, v_inst_2366_, v_inst_2367_, v_inst_2368_, v_pre_2369_, v_post_2370_, v_usedLetOnly_boxed_2379_, v_skipConstInApp_boxed_2380_, v_skipInstances_boxed_2381_, v_x_2374_, v_x_2375_, v_body_2376_, v_x_2377_, v___y_2378_);
lean_dec(v___y_2378_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object* v___x_2383_, lean_object* v___x_2384_, lean_object* v_declName_2385_, lean_object* v___f_2386_, uint8_t v_nondep_2387_, lean_object* v_a_2388_, lean_object* v_value_2389_, lean_object* v_fvars_2390_, lean_object* v_inst_2391_, lean_object* v_inst_2392_, lean_object* v_inst_2393_, lean_object* v_pre_2394_, lean_object* v_post_2395_, uint8_t v_usedLetOnly_2396_, uint8_t v_skipConstInApp_2397_, uint8_t v_skipInstances_2398_, lean_object* v_x_2399_, lean_object* v_x_2400_, lean_object* v_toBind_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v___x_2403_; lean_object* v___f_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2403_ = lean_box(v_nondep_2387_);
lean_inc(v_a_2388_);
v___f_2404_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2404_, 0, v___x_2383_);
lean_closure_set(v___f_2404_, 1, v___x_2384_);
lean_closure_set(v___f_2404_, 2, v_declName_2385_);
lean_closure_set(v___f_2404_, 3, v_a_2402_);
lean_closure_set(v___f_2404_, 4, v___f_2386_);
lean_closure_set(v___f_2404_, 5, v___x_2403_);
lean_closure_set(v___f_2404_, 6, v_a_2388_);
v___x_2405_ = lean_expr_instantiate_rev(v_value_2389_, v_fvars_2390_);
v___x_2406_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2391_, v_inst_2392_, v_inst_2393_, v_pre_2394_, v_post_2395_, v_usedLetOnly_2396_, v_skipConstInApp_2397_, v_skipInstances_2398_, v_x_2399_, v_x_2400_, v___x_2405_, v_a_2388_);
v___x_2407_ = lean_apply_4(v_toBind_2401_, lean_box(0), lean_box(0), v___x_2406_, v___f_2404_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_2408_ = _args[0];
lean_object* v___x_2409_ = _args[1];
lean_object* v_declName_2410_ = _args[2];
lean_object* v___f_2411_ = _args[3];
lean_object* v_nondep_2412_ = _args[4];
lean_object* v_a_2413_ = _args[5];
lean_object* v_value_2414_ = _args[6];
lean_object* v_fvars_2415_ = _args[7];
lean_object* v_inst_2416_ = _args[8];
lean_object* v_inst_2417_ = _args[9];
lean_object* v_inst_2418_ = _args[10];
lean_object* v_pre_2419_ = _args[11];
lean_object* v_post_2420_ = _args[12];
lean_object* v_usedLetOnly_2421_ = _args[13];
lean_object* v_skipConstInApp_2422_ = _args[14];
lean_object* v_skipInstances_2423_ = _args[15];
lean_object* v_x_2424_ = _args[16];
lean_object* v_x_2425_ = _args[17];
lean_object* v_toBind_2426_ = _args[18];
lean_object* v_a_2427_ = _args[19];
_start:
{
uint8_t v_nondep_4049__boxed_2428_; uint8_t v_usedLetOnly_boxed_2429_; uint8_t v_skipConstInApp_boxed_2430_; uint8_t v_skipInstances_boxed_2431_; lean_object* v_res_2432_; 
v_nondep_4049__boxed_2428_ = lean_unbox(v_nondep_2412_);
v_usedLetOnly_boxed_2429_ = lean_unbox(v_usedLetOnly_2421_);
v_skipConstInApp_boxed_2430_ = lean_unbox(v_skipConstInApp_2422_);
v_skipInstances_boxed_2431_ = lean_unbox(v_skipInstances_2423_);
v_res_2432_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(v___x_2408_, v___x_2409_, v_declName_2410_, v___f_2411_, v_nondep_4049__boxed_2428_, v_a_2413_, v_value_2414_, v_fvars_2415_, v_inst_2416_, v_inst_2417_, v_inst_2418_, v_pre_2419_, v_post_2420_, v_usedLetOnly_boxed_2429_, v_skipConstInApp_boxed_2430_, v_skipInstances_boxed_2431_, v_x_2424_, v_x_2425_, v_toBind_2426_, v_a_2427_);
lean_dec_ref(v_fvars_2415_);
lean_dec_ref(v_value_2414_);
lean_dec(v_a_2413_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object* v_inst_2433_, lean_object* v_inst_2434_, lean_object* v_inst_2435_, lean_object* v_pre_2436_, lean_object* v_post_2437_, uint8_t v_usedLetOnly_2438_, uint8_t v_skipConstInApp_2439_, uint8_t v_skipInstances_2440_, lean_object* v_x_2441_, lean_object* v_x_2442_, lean_object* v_fvars_2443_, lean_object* v_e_2444_, lean_object* v_a_2445_){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___f_2450_; lean_object* v___f_2451_; lean_object* v___x_2452_; 
v___x_2446_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2447_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2433_);
v___x_2448_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2441_, v___x_2446_, v___x_2447_, v_inst_2433_);
v___x_2449_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2441_, v___x_2446_, v___x_2447_);
lean_inc_ref_n(v_inst_2435_, 2);
lean_inc_ref(v___x_2449_);
v___f_2450_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2450_, 0, v___x_2449_);
lean_closure_set(v___f_2450_, 1, v_inst_2435_);
v___f_2451_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2451_, 0, v___x_2449_);
lean_closure_set(v___f_2451_, 1, v_inst_2435_);
v___x_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___f_2450_);
lean_ctor_set(v___x_2452_, 1, v___f_2451_);
if (lean_obj_tag(v_e_2444_) == 8)
{
lean_object* v_declName_2453_; lean_object* v_type_2454_; lean_object* v_value_2455_; lean_object* v_body_2456_; uint8_t v_nondep_2457_; lean_object* v_toBind_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___f_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___f_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v_declName_2453_ = lean_ctor_get(v_e_2444_, 0);
lean_inc(v_declName_2453_);
v_type_2454_ = lean_ctor_get(v_e_2444_, 1);
lean_inc_ref(v_type_2454_);
v_value_2455_ = lean_ctor_get(v_e_2444_, 2);
lean_inc_ref(v_value_2455_);
v_body_2456_ = lean_ctor_get(v_e_2444_, 3);
lean_inc_ref(v_body_2456_);
v_nondep_2457_ = lean_ctor_get_uint8(v_e_2444_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_2444_);
v_toBind_2458_ = lean_ctor_get(v_inst_2433_, 1);
lean_inc_n(v_toBind_2458_, 2);
v___x_2459_ = lean_box(v_usedLetOnly_2438_);
v___x_2460_ = lean_box(v_skipConstInApp_2439_);
v___x_2461_ = lean_box(v_skipInstances_2440_);
lean_inc_n(v_x_2442_, 2);
lean_inc_n(v_post_2437_, 2);
lean_inc_n(v_pre_2436_, 2);
lean_inc_ref_n(v_inst_2435_, 2);
lean_inc_n(v_inst_2434_, 2);
lean_inc_ref_n(v_inst_2433_, 2);
lean_inc_ref_n(v_fvars_2443_, 2);
v___f_2462_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2462_, 0, v_fvars_2443_);
lean_closure_set(v___f_2462_, 1, v_inst_2433_);
lean_closure_set(v___f_2462_, 2, v_inst_2434_);
lean_closure_set(v___f_2462_, 3, v_inst_2435_);
lean_closure_set(v___f_2462_, 4, v_pre_2436_);
lean_closure_set(v___f_2462_, 5, v_post_2437_);
lean_closure_set(v___f_2462_, 6, v___x_2459_);
lean_closure_set(v___f_2462_, 7, v___x_2460_);
lean_closure_set(v___f_2462_, 8, v___x_2461_);
lean_closure_set(v___f_2462_, 9, v_x_2441_);
lean_closure_set(v___f_2462_, 10, v_x_2442_);
lean_closure_set(v___f_2462_, 11, v_body_2456_);
v___x_2463_ = lean_box(v_nondep_2457_);
v___x_2464_ = lean_box(v_usedLetOnly_2438_);
v___x_2465_ = lean_box(v_skipConstInApp_2439_);
v___x_2466_ = lean_box(v_skipInstances_2440_);
lean_inc(v_a_2445_);
v___f_2467_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed), 20, 19);
lean_closure_set(v___f_2467_, 0, v___x_2452_);
lean_closure_set(v___f_2467_, 1, v___x_2448_);
lean_closure_set(v___f_2467_, 2, v_declName_2453_);
lean_closure_set(v___f_2467_, 3, v___f_2462_);
lean_closure_set(v___f_2467_, 4, v___x_2463_);
lean_closure_set(v___f_2467_, 5, v_a_2445_);
lean_closure_set(v___f_2467_, 6, v_value_2455_);
lean_closure_set(v___f_2467_, 7, v_fvars_2443_);
lean_closure_set(v___f_2467_, 8, v_inst_2433_);
lean_closure_set(v___f_2467_, 9, v_inst_2434_);
lean_closure_set(v___f_2467_, 10, v_inst_2435_);
lean_closure_set(v___f_2467_, 11, v_pre_2436_);
lean_closure_set(v___f_2467_, 12, v_post_2437_);
lean_closure_set(v___f_2467_, 13, v___x_2464_);
lean_closure_set(v___f_2467_, 14, v___x_2465_);
lean_closure_set(v___f_2467_, 15, v___x_2466_);
lean_closure_set(v___f_2467_, 16, v_x_2441_);
lean_closure_set(v___f_2467_, 17, v_x_2442_);
lean_closure_set(v___f_2467_, 18, v_toBind_2458_);
v___x_2468_ = lean_expr_instantiate_rev(v_type_2454_, v_fvars_2443_);
lean_dec_ref(v_fvars_2443_);
lean_dec_ref(v_type_2454_);
v___x_2469_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2433_, v_inst_2434_, v_inst_2435_, v_pre_2436_, v_post_2437_, v_usedLetOnly_2438_, v_skipConstInApp_2439_, v_skipInstances_2440_, v_x_2441_, v_x_2442_, v___x_2468_, v_a_2445_);
v___x_2470_ = lean_apply_4(v_toBind_2458_, lean_box(0), lean_box(0), v___x_2469_, v___f_2467_);
return v___x_2470_;
}
else
{
lean_object* v_toBind_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___f_2475_; lean_object* v___x_2476_; lean_object* v___f_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
lean_dec_ref(v___x_2452_);
lean_dec_ref(v___x_2448_);
v_toBind_2471_ = lean_ctor_get(v_inst_2433_, 1);
lean_inc_n(v_toBind_2471_, 2);
v___x_2472_ = lean_box(v_usedLetOnly_2438_);
v___x_2473_ = lean_box(v_skipConstInApp_2439_);
v___x_2474_ = lean_box(v_skipInstances_2440_);
lean_inc(v_a_2445_);
lean_inc(v_x_2442_);
lean_inc(v_post_2437_);
lean_inc(v_pre_2436_);
lean_inc_ref(v_inst_2435_);
lean_inc_n(v_inst_2434_, 2);
lean_inc_ref(v_inst_2433_);
v___f_2475_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2475_, 0, v_inst_2433_);
lean_closure_set(v___f_2475_, 1, v_inst_2434_);
lean_closure_set(v___f_2475_, 2, v_inst_2435_);
lean_closure_set(v___f_2475_, 3, v_pre_2436_);
lean_closure_set(v___f_2475_, 4, v_post_2437_);
lean_closure_set(v___f_2475_, 5, v___x_2472_);
lean_closure_set(v___f_2475_, 6, v___x_2473_);
lean_closure_set(v___f_2475_, 7, v___x_2474_);
lean_closure_set(v___f_2475_, 8, v_x_2441_);
lean_closure_set(v___f_2475_, 9, v_x_2442_);
lean_closure_set(v___f_2475_, 10, v_a_2445_);
v___x_2476_ = lean_box(v_usedLetOnly_2438_);
lean_inc_ref(v_fvars_2443_);
v___f_2477_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2477_, 0, v_fvars_2443_);
lean_closure_set(v___f_2477_, 1, v___x_2476_);
lean_closure_set(v___f_2477_, 2, v_inst_2434_);
lean_closure_set(v___f_2477_, 3, v_toBind_2471_);
lean_closure_set(v___f_2477_, 4, v___f_2475_);
v___x_2478_ = lean_expr_instantiate_rev(v_e_2444_, v_fvars_2443_);
lean_dec_ref(v_fvars_2443_);
lean_dec_ref(v_e_2444_);
v___x_2479_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2433_, v_inst_2434_, v_inst_2435_, v_pre_2436_, v_post_2437_, v_usedLetOnly_2438_, v_skipConstInApp_2439_, v_skipInstances_2440_, v_x_2441_, v_x_2442_, v___x_2478_, v_a_2445_);
v___x_2480_ = lean_apply_4(v_toBind_2471_, lean_box(0), lean_box(0), v___x_2479_, v___f_2477_);
return v___x_2480_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object* v_expr_2481_, lean_object* v_data_2482_, lean_object* v_inst_2483_, lean_object* v_inst_2484_, lean_object* v_inst_2485_, lean_object* v_pre_2486_, lean_object* v_post_2487_, uint8_t v_usedLetOnly_2488_, uint8_t v_skipConstInApp_2489_, uint8_t v_skipInstances_2490_, lean_object* v_x_2491_, lean_object* v_x_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v_a_2495_){
_start:
{
size_t v___x_2496_; size_t v___x_2497_; uint8_t v___x_2498_; 
v___x_2496_ = lean_ptr_addr(v_expr_2481_);
v___x_2497_ = lean_ptr_addr(v_a_2495_);
v___x_2498_ = lean_usize_dec_eq(v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
lean_dec_ref(v___y_2494_);
v___x_2499_ = l_Lean_Expr_mdata___override(v_data_2482_, v_a_2495_);
v___x_2500_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2483_, v_inst_2484_, v_inst_2485_, v_pre_2486_, v_post_2487_, v_usedLetOnly_2488_, v_skipConstInApp_2489_, v_skipInstances_2490_, v_x_2491_, v_x_2492_, v___x_2499_, v___y_2493_);
return v___x_2500_;
}
else
{
lean_object* v___x_2501_; 
lean_dec_ref(v_a_2495_);
lean_dec(v_data_2482_);
v___x_2501_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2483_, v_inst_2484_, v_inst_2485_, v_pre_2486_, v_post_2487_, v_usedLetOnly_2488_, v_skipConstInApp_2489_, v_skipInstances_2490_, v_x_2491_, v_x_2492_, v___y_2494_, v___y_2493_);
return v___x_2501_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object* v_expr_2502_, lean_object* v_data_2503_, lean_object* v_inst_2504_, lean_object* v_inst_2505_, lean_object* v_inst_2506_, lean_object* v_pre_2507_, lean_object* v_post_2508_, lean_object* v_usedLetOnly_2509_, lean_object* v_skipConstInApp_2510_, lean_object* v_skipInstances_2511_, lean_object* v_x_2512_, lean_object* v_x_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v_a_2516_){
_start:
{
uint8_t v_usedLetOnly_boxed_2517_; uint8_t v_skipConstInApp_boxed_2518_; uint8_t v_skipInstances_boxed_2519_; lean_object* v_res_2520_; 
v_usedLetOnly_boxed_2517_ = lean_unbox(v_usedLetOnly_2509_);
v_skipConstInApp_boxed_2518_ = lean_unbox(v_skipConstInApp_2510_);
v_skipInstances_boxed_2519_ = lean_unbox(v_skipInstances_2511_);
v_res_2520_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(v_expr_2502_, v_data_2503_, v_inst_2504_, v_inst_2505_, v_inst_2506_, v_pre_2507_, v_post_2508_, v_usedLetOnly_boxed_2517_, v_skipConstInApp_boxed_2518_, v_skipInstances_boxed_2519_, v_x_2512_, v_x_2513_, v___y_2514_, v___y_2515_, v_a_2516_);
lean_dec(v___y_2514_);
lean_dec_ref(v_expr_2502_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object* v_struct_2521_, lean_object* v_typeName_2522_, lean_object* v_idx_2523_, lean_object* v_inst_2524_, lean_object* v_inst_2525_, lean_object* v_inst_2526_, lean_object* v_pre_2527_, lean_object* v_post_2528_, uint8_t v_usedLetOnly_2529_, uint8_t v_skipConstInApp_2530_, uint8_t v_skipInstances_2531_, lean_object* v_x_2532_, lean_object* v_x_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v_a_2536_){
_start:
{
size_t v___x_2537_; size_t v___x_2538_; uint8_t v___x_2539_; 
v___x_2537_ = lean_ptr_addr(v_struct_2521_);
v___x_2538_ = lean_ptr_addr(v_a_2536_);
v___x_2539_ = lean_usize_dec_eq(v___x_2537_, v___x_2538_);
if (v___x_2539_ == 0)
{
lean_object* v___x_2540_; lean_object* v___x_2541_; 
lean_dec_ref(v___y_2535_);
v___x_2540_ = l_Lean_Expr_proj___override(v_typeName_2522_, v_idx_2523_, v_a_2536_);
v___x_2541_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2524_, v_inst_2525_, v_inst_2526_, v_pre_2527_, v_post_2528_, v_usedLetOnly_2529_, v_skipConstInApp_2530_, v_skipInstances_2531_, v_x_2532_, v_x_2533_, v___x_2540_, v___y_2534_);
return v___x_2541_;
}
else
{
lean_object* v___x_2542_; 
lean_dec_ref(v_a_2536_);
lean_dec(v_idx_2523_);
lean_dec(v_typeName_2522_);
v___x_2542_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2524_, v_inst_2525_, v_inst_2526_, v_pre_2527_, v_post_2528_, v_usedLetOnly_2529_, v_skipConstInApp_2530_, v_skipInstances_2531_, v_x_2532_, v_x_2533_, v___y_2535_, v___y_2534_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object* v_struct_2543_, lean_object* v_typeName_2544_, lean_object* v_idx_2545_, lean_object* v_inst_2546_, lean_object* v_inst_2547_, lean_object* v_inst_2548_, lean_object* v_pre_2549_, lean_object* v_post_2550_, lean_object* v_usedLetOnly_2551_, lean_object* v_skipConstInApp_2552_, lean_object* v_skipInstances_2553_, lean_object* v_x_2554_, lean_object* v_x_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v_a_2558_){
_start:
{
uint8_t v_usedLetOnly_boxed_2559_; uint8_t v_skipConstInApp_boxed_2560_; uint8_t v_skipInstances_boxed_2561_; lean_object* v_res_2562_; 
v_usedLetOnly_boxed_2559_ = lean_unbox(v_usedLetOnly_2551_);
v_skipConstInApp_boxed_2560_ = lean_unbox(v_skipConstInApp_2552_);
v_skipInstances_boxed_2561_ = lean_unbox(v_skipInstances_2553_);
v_res_2562_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(v_struct_2543_, v_typeName_2544_, v_idx_2545_, v_inst_2546_, v_inst_2547_, v_inst_2548_, v_pre_2549_, v_post_2550_, v_usedLetOnly_boxed_2559_, v_skipConstInApp_boxed_2560_, v_skipInstances_boxed_2561_, v_x_2554_, v_x_2555_, v___y_2556_, v___y_2557_, v_a_2558_);
lean_dec(v___y_2556_);
lean_dec_ref(v_struct_2543_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object* v_toApplicative_2563_, lean_object* v_inst_2564_, lean_object* v_inst_2565_, lean_object* v_inst_2566_, lean_object* v_pre_2567_, lean_object* v_post_2568_, uint8_t v_usedLetOnly_2569_, uint8_t v_skipConstInApp_2570_, uint8_t v_skipInstances_2571_, lean_object* v_x_2572_, lean_object* v_x_2573_, lean_object* v___f_2574_, lean_object* v_toBind_2575_, lean_object* v_e_2576_, lean_object* v_____do__lift_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v___y_2580_; 
switch(lean_obj_tag(v_____do__lift_2577_))
{
case 0:
{
lean_object* v_e_2612_; lean_object* v_toPure_2613_; lean_object* v___x_2614_; 
lean_dec_ref(v_e_2576_);
lean_dec(v_toBind_2575_);
lean_dec(v___f_2574_);
lean_dec(v_x_2573_);
lean_dec(v_post_2568_);
lean_dec(v_pre_2567_);
lean_dec_ref(v_inst_2566_);
lean_dec(v_inst_2565_);
lean_dec_ref(v_inst_2564_);
v_e_2612_ = lean_ctor_get(v_____do__lift_2577_, 0);
lean_inc_ref(v_e_2612_);
lean_dec_ref(v_____do__lift_2577_);
v_toPure_2613_ = lean_ctor_get(v_toApplicative_2563_, 1);
lean_inc(v_toPure_2613_);
lean_dec_ref(v_toApplicative_2563_);
v___x_2614_ = lean_apply_2(v_toPure_2613_, lean_box(0), v_e_2612_);
return v___x_2614_;
}
case 1:
{
lean_object* v_e_2615_; lean_object* v___x_2616_; 
lean_dec_ref(v_e_2576_);
lean_dec(v_toBind_2575_);
lean_dec(v___f_2574_);
lean_dec_ref(v_toApplicative_2563_);
v_e_2615_ = lean_ctor_get(v_____do__lift_2577_, 0);
lean_inc_ref(v_e_2615_);
lean_dec_ref(v_____do__lift_2577_);
v___x_2616_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v_e_2615_, v___y_2578_);
return v___x_2616_;
}
default: 
{
lean_object* v_e_x3f_2617_; 
lean_dec_ref(v_toApplicative_2563_);
v_e_x3f_2617_ = lean_ctor_get(v_____do__lift_2577_, 0);
lean_inc(v_e_x3f_2617_);
lean_dec_ref(v_____do__lift_2577_);
if (lean_obj_tag(v_e_x3f_2617_) == 0)
{
v___y_2580_ = v_e_2576_;
goto v___jp_2579_;
}
else
{
lean_object* v_val_2618_; 
lean_dec_ref(v_e_2576_);
v_val_2618_ = lean_ctor_get(v_e_x3f_2617_, 0);
lean_inc(v_val_2618_);
lean_dec_ref(v_e_x3f_2617_);
v___y_2580_ = v_val_2618_;
goto v___jp_2579_;
}
}
}
v___jp_2579_:
{
switch(lean_obj_tag(v___y_2580_))
{
case 7:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec(v_toBind_2575_);
lean_dec(v___f_2574_);
v___x_2581_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2582_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v___x_2581_, v___y_2580_, v___y_2578_);
return v___x_2582_;
}
case 6:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; 
lean_dec(v_toBind_2575_);
lean_dec(v___f_2574_);
v___x_2583_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2584_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v___x_2583_, v___y_2580_, v___y_2578_);
return v___x_2584_;
}
case 8:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_dec(v_toBind_2575_);
lean_dec(v___f_2574_);
v___x_2585_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2586_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v___x_2585_, v___y_2580_, v___y_2578_);
return v___x_2586_;
}
case 5:
{
lean_object* v_dummy_2587_; lean_object* v_nargs_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_3659__overap_2592_; lean_object* v___x_2593_; 
lean_dec(v_toBind_2575_);
lean_dec(v_x_2573_);
lean_dec(v_post_2568_);
lean_dec(v_pre_2567_);
lean_dec_ref(v_inst_2566_);
lean_dec(v_inst_2565_);
lean_dec_ref(v_inst_2564_);
v_dummy_2587_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_2588_ = l_Lean_Expr_getAppNumArgs(v___y_2580_);
lean_inc(v_nargs_2588_);
v___x_2589_ = lean_mk_array(v_nargs_2588_, v_dummy_2587_);
v___x_2590_ = lean_unsigned_to_nat(1u);
v___x_2591_ = lean_nat_sub(v_nargs_2588_, v___x_2590_);
lean_dec(v_nargs_2588_);
v___x_3659__overap_2592_ = l_Lean_Expr_withAppAux___redArg(v___f_2574_, v___y_2580_, v___x_2589_, v___x_2591_);
lean_inc(v___y_2578_);
v___x_2593_ = lean_apply_1(v___x_3659__overap_2592_, v___y_2578_);
return v___x_2593_;
}
case 10:
{
lean_object* v_data_2594_; lean_object* v_expr_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___f_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec(v___f_2574_);
v_data_2594_ = lean_ctor_get(v___y_2580_, 0);
lean_inc(v_data_2594_);
v_expr_2595_ = lean_ctor_get(v___y_2580_, 1);
lean_inc_ref_n(v_expr_2595_, 2);
v___x_2596_ = lean_box(v_usedLetOnly_2569_);
v___x_2597_ = lean_box(v_skipConstInApp_2570_);
v___x_2598_ = lean_box(v_skipInstances_2571_);
lean_inc(v___y_2578_);
lean_inc(v_x_2573_);
lean_inc(v_post_2568_);
lean_inc(v_pre_2567_);
lean_inc_ref(v_inst_2566_);
lean_inc(v_inst_2565_);
lean_inc_ref(v_inst_2564_);
v___f_2599_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_2599_, 0, v_expr_2595_);
lean_closure_set(v___f_2599_, 1, v_data_2594_);
lean_closure_set(v___f_2599_, 2, v_inst_2564_);
lean_closure_set(v___f_2599_, 3, v_inst_2565_);
lean_closure_set(v___f_2599_, 4, v_inst_2566_);
lean_closure_set(v___f_2599_, 5, v_pre_2567_);
lean_closure_set(v___f_2599_, 6, v_post_2568_);
lean_closure_set(v___f_2599_, 7, v___x_2596_);
lean_closure_set(v___f_2599_, 8, v___x_2597_);
lean_closure_set(v___f_2599_, 9, v___x_2598_);
lean_closure_set(v___f_2599_, 10, v_x_2572_);
lean_closure_set(v___f_2599_, 11, v_x_2573_);
lean_closure_set(v___f_2599_, 12, v___y_2578_);
lean_closure_set(v___f_2599_, 13, v___y_2580_);
v___x_2600_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v_expr_2595_, v___y_2578_);
v___x_2601_ = lean_apply_4(v_toBind_2575_, lean_box(0), lean_box(0), v___x_2600_, v___f_2599_);
return v___x_2601_;
}
case 11:
{
lean_object* v_typeName_2602_; lean_object* v_idx_2603_; lean_object* v_struct_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___f_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
lean_dec(v___f_2574_);
v_typeName_2602_ = lean_ctor_get(v___y_2580_, 0);
lean_inc(v_typeName_2602_);
v_idx_2603_ = lean_ctor_get(v___y_2580_, 1);
lean_inc(v_idx_2603_);
v_struct_2604_ = lean_ctor_get(v___y_2580_, 2);
lean_inc_ref_n(v_struct_2604_, 2);
v___x_2605_ = lean_box(v_usedLetOnly_2569_);
v___x_2606_ = lean_box(v_skipConstInApp_2570_);
v___x_2607_ = lean_box(v_skipInstances_2571_);
lean_inc(v___y_2578_);
lean_inc(v_x_2573_);
lean_inc(v_post_2568_);
lean_inc(v_pre_2567_);
lean_inc_ref(v_inst_2566_);
lean_inc(v_inst_2565_);
lean_inc_ref(v_inst_2564_);
v___f_2608_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed), 16, 15);
lean_closure_set(v___f_2608_, 0, v_struct_2604_);
lean_closure_set(v___f_2608_, 1, v_typeName_2602_);
lean_closure_set(v___f_2608_, 2, v_idx_2603_);
lean_closure_set(v___f_2608_, 3, v_inst_2564_);
lean_closure_set(v___f_2608_, 4, v_inst_2565_);
lean_closure_set(v___f_2608_, 5, v_inst_2566_);
lean_closure_set(v___f_2608_, 6, v_pre_2567_);
lean_closure_set(v___f_2608_, 7, v_post_2568_);
lean_closure_set(v___f_2608_, 8, v___x_2605_);
lean_closure_set(v___f_2608_, 9, v___x_2606_);
lean_closure_set(v___f_2608_, 10, v___x_2607_);
lean_closure_set(v___f_2608_, 11, v_x_2572_);
lean_closure_set(v___f_2608_, 12, v_x_2573_);
lean_closure_set(v___f_2608_, 13, v___y_2578_);
lean_closure_set(v___f_2608_, 14, v___y_2580_);
v___x_2609_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v_struct_2604_, v___y_2578_);
v___x_2610_ = lean_apply_4(v_toBind_2575_, lean_box(0), lean_box(0), v___x_2609_, v___f_2608_);
return v___x_2610_;
}
default: 
{
lean_object* v___x_2611_; 
lean_dec(v_toBind_2575_);
lean_dec(v___f_2574_);
v___x_2611_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2564_, v_inst_2565_, v_inst_2566_, v_pre_2567_, v_post_2568_, v_usedLetOnly_2569_, v_skipConstInApp_2570_, v_skipInstances_2571_, v_x_2572_, v_x_2573_, v___y_2580_, v___y_2578_);
return v___x_2611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object* v_toApplicative_2619_, lean_object* v_inst_2620_, lean_object* v_inst_2621_, lean_object* v_inst_2622_, lean_object* v_pre_2623_, lean_object* v_post_2624_, lean_object* v_usedLetOnly_2625_, lean_object* v_skipConstInApp_2626_, lean_object* v_skipInstances_2627_, lean_object* v_x_2628_, lean_object* v_x_2629_, lean_object* v___f_2630_, lean_object* v_toBind_2631_, lean_object* v_e_2632_, lean_object* v_____do__lift_2633_, lean_object* v___y_2634_){
_start:
{
uint8_t v_usedLetOnly_boxed_2635_; uint8_t v_skipConstInApp_boxed_2636_; uint8_t v_skipInstances_boxed_2637_; lean_object* v_res_2638_; 
v_usedLetOnly_boxed_2635_ = lean_unbox(v_usedLetOnly_2625_);
v_skipConstInApp_boxed_2636_ = lean_unbox(v_skipConstInApp_2626_);
v_skipInstances_boxed_2637_ = lean_unbox(v_skipInstances_2627_);
v_res_2638_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(v_toApplicative_2619_, v_inst_2620_, v_inst_2621_, v_inst_2622_, v_pre_2623_, v_post_2624_, v_usedLetOnly_boxed_2635_, v_skipConstInApp_boxed_2636_, v_skipInstances_boxed_2637_, v_x_2628_, v_x_2629_, v___f_2630_, v_toBind_2631_, v_e_2632_, v_____do__lift_2633_, v___y_2634_);
lean_dec(v___y_2634_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object* v_inst_2639_, lean_object* v_inst_2640_, lean_object* v_inst_2641_, lean_object* v_pre_2642_, lean_object* v_post_2643_, uint8_t v_usedLetOnly_2644_, uint8_t v_skipConstInApp_2645_, uint8_t v_skipInstances_2646_, lean_object* v_x_2647_, lean_object* v_x_2648_, lean_object* v_e_2649_, lean_object* v_a_2650_){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___f_2655_; lean_object* v___f_2656_; lean_object* v___x_2657_; lean_object* v_toApplicative_2658_; lean_object* v_toBind_2659_; lean_object* v___f_2660_; lean_object* v___f_2661_; lean_object* v___f_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___f_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___f_2670_; lean_object* v___f_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2651_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2652_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref_n(v_inst_2639_, 3);
v___x_2653_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2647_, v___x_2651_, v___x_2652_, v_inst_2639_);
v___x_2654_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2647_, v___x_2651_, v___x_2652_);
lean_inc_ref_n(v_inst_2641_, 3);
lean_inc_ref(v___x_2654_);
v___f_2655_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2655_, 0, v___x_2654_);
lean_closure_set(v___f_2655_, 1, v_inst_2641_);
v___f_2656_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2656_, 0, v___x_2654_);
lean_closure_set(v___f_2656_, 1, v_inst_2641_);
v___x_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___f_2655_);
lean_ctor_set(v___x_2657_, 1, v___f_2656_);
v_toApplicative_2658_ = lean_ctor_get(v_inst_2639_, 0);
lean_inc_ref_n(v_toApplicative_2658_, 6);
v_toBind_2659_ = lean_ctor_get(v_inst_2639_, 1);
lean_inc_n(v_toBind_2659_, 6);
v___f_2660_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2660_, 0, v_toApplicative_2658_);
lean_inc_n(v_x_2648_, 3);
lean_inc_n(v_a_2650_, 3);
lean_inc_ref_n(v_e_2649_, 3);
v___f_2661_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2661_, 0, v_toApplicative_2658_);
lean_closure_set(v___f_2661_, 1, v___x_2651_);
lean_closure_set(v___f_2661_, 2, v___x_2652_);
lean_closure_set(v___f_2661_, 3, v_e_2649_);
lean_closure_set(v___f_2661_, 4, v_a_2650_);
lean_closure_set(v___f_2661_, 5, v_x_2648_);
lean_closure_set(v___f_2661_, 6, v_toBind_2659_);
v___f_2662_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_2662_, 0, v_toApplicative_2658_);
lean_closure_set(v___f_2662_, 1, v___x_2651_);
lean_closure_set(v___f_2662_, 2, v___x_2652_);
lean_closure_set(v___f_2662_, 3, v_e_2649_);
v___x_2663_ = lean_box(v_skipInstances_2646_);
v___x_2664_ = lean_box(v_usedLetOnly_2644_);
v___x_2665_ = lean_box(v_skipConstInApp_2645_);
lean_inc_ref(v___x_2653_);
lean_inc(v_post_2643_);
lean_inc_n(v_pre_2642_, 2);
lean_inc(v_inst_2640_);
v___f_2666_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed), 17, 14);
lean_closure_set(v___f_2666_, 0, v___x_2663_);
lean_closure_set(v___f_2666_, 1, v_inst_2639_);
lean_closure_set(v___f_2666_, 2, v_inst_2640_);
lean_closure_set(v___f_2666_, 3, v_inst_2641_);
lean_closure_set(v___f_2666_, 4, v_pre_2642_);
lean_closure_set(v___f_2666_, 5, v_post_2643_);
lean_closure_set(v___f_2666_, 6, v___x_2664_);
lean_closure_set(v___f_2666_, 7, v___x_2665_);
lean_closure_set(v___f_2666_, 8, v_x_2647_);
lean_closure_set(v___f_2666_, 9, v_x_2648_);
lean_closure_set(v___f_2666_, 10, v___x_2653_);
lean_closure_set(v___f_2666_, 11, v_toBind_2659_);
lean_closure_set(v___f_2666_, 12, v_toApplicative_2658_);
lean_closure_set(v___f_2666_, 13, v___f_2660_);
v___x_2667_ = lean_box(v_usedLetOnly_2644_);
v___x_2668_ = lean_box(v_skipConstInApp_2645_);
v___x_2669_ = lean_box(v_skipInstances_2646_);
v___f_2670_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed), 16, 14);
lean_closure_set(v___f_2670_, 0, v_toApplicative_2658_);
lean_closure_set(v___f_2670_, 1, v_inst_2639_);
lean_closure_set(v___f_2670_, 2, v_inst_2640_);
lean_closure_set(v___f_2670_, 3, v_inst_2641_);
lean_closure_set(v___f_2670_, 4, v_pre_2642_);
lean_closure_set(v___f_2670_, 5, v_post_2643_);
lean_closure_set(v___f_2670_, 6, v___x_2667_);
lean_closure_set(v___f_2670_, 7, v___x_2668_);
lean_closure_set(v___f_2670_, 8, v___x_2669_);
lean_closure_set(v___f_2670_, 9, v_x_2647_);
lean_closure_set(v___f_2670_, 10, v_x_2648_);
lean_closure_set(v___f_2670_, 11, v___f_2666_);
lean_closure_set(v___f_2670_, 12, v_toBind_2659_);
lean_closure_set(v___f_2670_, 13, v_e_2649_);
v___f_2671_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed), 14, 13);
lean_closure_set(v___f_2671_, 0, v_pre_2642_);
lean_closure_set(v___f_2671_, 1, v_e_2649_);
lean_closure_set(v___f_2671_, 2, v_x_2647_);
lean_closure_set(v___f_2671_, 3, v___x_2651_);
lean_closure_set(v___f_2671_, 4, v___x_2652_);
lean_closure_set(v___f_2671_, 5, v_inst_2639_);
lean_closure_set(v___f_2671_, 6, v___f_2670_);
lean_closure_set(v___f_2671_, 7, v___x_2657_);
lean_closure_set(v___f_2671_, 8, v___x_2653_);
lean_closure_set(v___f_2671_, 9, v_a_2650_);
lean_closure_set(v___f_2671_, 10, v_toBind_2659_);
lean_closure_set(v___f_2671_, 11, v___f_2661_);
lean_closure_set(v___f_2671_, 12, v_toApplicative_2658_);
v___x_2672_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2672_, 0, lean_box(0));
lean_closure_set(v___x_2672_, 1, lean_box(0));
lean_closure_set(v___x_2672_, 2, v_a_2650_);
v___x_2673_ = lean_apply_2(v_x_2648_, lean_box(0), v___x_2672_);
v___x_2674_ = lean_apply_4(v_toBind_2659_, lean_box(0), lean_box(0), v___x_2673_, v___f_2662_);
v___x_2675_ = lean_apply_4(v_toBind_2659_, lean_box(0), lean_box(0), v___x_2674_, v___f_2671_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_2676_, lean_object* v_inst_2677_, lean_object* v_inst_2678_, lean_object* v_inst_2679_, lean_object* v_pre_2680_, lean_object* v_post_2681_, uint8_t v_usedLetOnly_2682_, uint8_t v_skipConstInApp_2683_, uint8_t v_skipInstances_2684_, lean_object* v_x_2685_, lean_object* v_x_2686_, lean_object* v_a_2687_, lean_object* v_e_2688_, lean_object* v_a_2689_){
_start:
{
lean_object* v___y_2691_; 
switch(lean_obj_tag(v_a_2689_))
{
case 0:
{
lean_object* v_e_2694_; lean_object* v_toPure_2695_; lean_object* v___x_2696_; 
lean_dec_ref(v_e_2688_);
lean_dec(v_x_2686_);
lean_dec(v_post_2681_);
lean_dec(v_pre_2680_);
lean_dec_ref(v_inst_2679_);
lean_dec(v_inst_2678_);
lean_dec_ref(v_inst_2677_);
v_e_2694_ = lean_ctor_get(v_a_2689_, 0);
lean_inc_ref(v_e_2694_);
lean_dec_ref(v_a_2689_);
v_toPure_2695_ = lean_ctor_get(v_toApplicative_2676_, 1);
lean_inc(v_toPure_2695_);
lean_dec_ref(v_toApplicative_2676_);
v___x_2696_ = lean_apply_2(v_toPure_2695_, lean_box(0), v_e_2694_);
return v___x_2696_;
}
case 1:
{
lean_object* v_e_2697_; lean_object* v___x_2698_; 
lean_dec_ref(v_e_2688_);
lean_dec_ref(v_toApplicative_2676_);
v_e_2697_ = lean_ctor_get(v_a_2689_, 0);
lean_inc_ref(v_e_2697_);
lean_dec_ref(v_a_2689_);
v___x_2698_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2677_, v_inst_2678_, v_inst_2679_, v_pre_2680_, v_post_2681_, v_usedLetOnly_2682_, v_skipConstInApp_2683_, v_skipInstances_2684_, v_x_2685_, v_x_2686_, v_e_2697_, v_a_2687_);
return v___x_2698_;
}
default: 
{
lean_object* v_e_x3f_2699_; 
lean_dec(v_x_2686_);
lean_dec(v_post_2681_);
lean_dec(v_pre_2680_);
lean_dec_ref(v_inst_2679_);
lean_dec(v_inst_2678_);
lean_dec_ref(v_inst_2677_);
v_e_x3f_2699_ = lean_ctor_get(v_a_2689_, 0);
lean_inc(v_e_x3f_2699_);
lean_dec_ref(v_a_2689_);
if (lean_obj_tag(v_e_x3f_2699_) == 0)
{
v___y_2691_ = v_e_2688_;
goto v___jp_2690_;
}
else
{
lean_object* v_val_2700_; 
lean_dec_ref(v_e_2688_);
v_val_2700_ = lean_ctor_get(v_e_x3f_2699_, 0);
lean_inc(v_val_2700_);
lean_dec_ref(v_e_x3f_2699_);
v___y_2691_ = v_val_2700_;
goto v___jp_2690_;
}
}
}
v___jp_2690_:
{
lean_object* v_toPure_2692_; lean_object* v___x_2693_; 
v_toPure_2692_ = lean_ctor_get(v_toApplicative_2676_, 1);
lean_inc(v_toPure_2692_);
lean_dec_ref(v_toApplicative_2676_);
v___x_2693_ = lean_apply_2(v_toPure_2692_, lean_box(0), v___y_2691_);
return v___x_2693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_2701_, lean_object* v_inst_2702_, lean_object* v_inst_2703_, lean_object* v_inst_2704_, lean_object* v_pre_2705_, lean_object* v_post_2706_, lean_object* v_usedLetOnly_2707_, lean_object* v_skipConstInApp_2708_, lean_object* v_skipInstances_2709_, lean_object* v_x_2710_, lean_object* v_x_2711_, lean_object* v_a_2712_, lean_object* v_e_2713_, lean_object* v_a_2714_){
_start:
{
uint8_t v_usedLetOnly_boxed_2715_; uint8_t v_skipConstInApp_boxed_2716_; uint8_t v_skipInstances_boxed_2717_; lean_object* v_res_2718_; 
v_usedLetOnly_boxed_2715_ = lean_unbox(v_usedLetOnly_2707_);
v_skipConstInApp_boxed_2716_ = lean_unbox(v_skipConstInApp_2708_);
v_skipInstances_boxed_2717_ = lean_unbox(v_skipInstances_2709_);
v_res_2718_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(v_toApplicative_2701_, v_inst_2702_, v_inst_2703_, v_inst_2704_, v_pre_2705_, v_post_2706_, v_usedLetOnly_boxed_2715_, v_skipConstInApp_boxed_2716_, v_skipInstances_boxed_2717_, v_x_2710_, v_x_2711_, v_a_2712_, v_e_2713_, v_a_2714_);
lean_dec(v_a_2712_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object* v_inst_2719_, lean_object* v_inst_2720_, lean_object* v_inst_2721_, lean_object* v_pre_2722_, lean_object* v_post_2723_, uint8_t v_usedLetOnly_2724_, uint8_t v_skipConstInApp_2725_, uint8_t v_skipInstances_2726_, lean_object* v_x_2727_, lean_object* v_x_2728_, lean_object* v_e_2729_, lean_object* v_a_2730_){
_start:
{
lean_object* v_toApplicative_2731_; lean_object* v_toBind_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___f_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v_toApplicative_2731_ = lean_ctor_get(v_inst_2719_, 0);
lean_inc_ref(v_toApplicative_2731_);
v_toBind_2732_ = lean_ctor_get(v_inst_2719_, 1);
lean_inc(v_toBind_2732_);
v___x_2733_ = lean_box(v_usedLetOnly_2724_);
v___x_2734_ = lean_box(v_skipConstInApp_2725_);
v___x_2735_ = lean_box(v_skipInstances_2726_);
lean_inc_ref(v_e_2729_);
lean_inc(v_a_2730_);
lean_inc(v_post_2723_);
v___f_2736_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_2736_, 0, v_toApplicative_2731_);
lean_closure_set(v___f_2736_, 1, v_inst_2719_);
lean_closure_set(v___f_2736_, 2, v_inst_2720_);
lean_closure_set(v___f_2736_, 3, v_inst_2721_);
lean_closure_set(v___f_2736_, 4, v_pre_2722_);
lean_closure_set(v___f_2736_, 5, v_post_2723_);
lean_closure_set(v___f_2736_, 6, v___x_2733_);
lean_closure_set(v___f_2736_, 7, v___x_2734_);
lean_closure_set(v___f_2736_, 8, v___x_2735_);
lean_closure_set(v___f_2736_, 9, v_x_2727_);
lean_closure_set(v___f_2736_, 10, v_x_2728_);
lean_closure_set(v___f_2736_, 11, v_a_2730_);
lean_closure_set(v___f_2736_, 12, v_e_2729_);
v___x_2737_ = lean_apply_1(v_post_2723_, v_e_2729_);
v___x_2738_ = lean_apply_4(v_toBind_2732_, lean_box(0), lean_box(0), v___x_2737_, v___f_2736_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object* v_inst_2739_, lean_object* v_inst_2740_, lean_object* v_inst_2741_, lean_object* v_pre_2742_, lean_object* v_post_2743_, uint8_t v_usedLetOnly_2744_, uint8_t v_skipConstInApp_2745_, uint8_t v_skipInstances_2746_, lean_object* v_x_2747_, lean_object* v_x_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2739_, v_inst_2740_, v_inst_2741_, v_pre_2742_, v_post_2743_, v_usedLetOnly_2744_, v_skipConstInApp_2745_, v_skipInstances_2746_, v_x_2747_, v_x_2748_, v_a_2750_, v_a_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object* v_inst_2752_, lean_object* v_inst_2753_, lean_object* v_inst_2754_, lean_object* v_pre_2755_, lean_object* v_post_2756_, lean_object* v_usedLetOnly_2757_, lean_object* v_skipConstInApp_2758_, lean_object* v_skipInstances_2759_, lean_object* v_x_2760_, lean_object* v_x_2761_, lean_object* v_e_2762_, lean_object* v_a_2763_){
_start:
{
uint8_t v_usedLetOnly_boxed_2764_; uint8_t v_skipConstInApp_boxed_2765_; uint8_t v_skipInstances_boxed_2766_; lean_object* v_res_2767_; 
v_usedLetOnly_boxed_2764_ = lean_unbox(v_usedLetOnly_2757_);
v_skipConstInApp_boxed_2765_ = lean_unbox(v_skipConstInApp_2758_);
v_skipInstances_boxed_2766_ = lean_unbox(v_skipInstances_2759_);
v_res_2767_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2752_, v_inst_2753_, v_inst_2754_, v_pre_2755_, v_post_2756_, v_usedLetOnly_boxed_2764_, v_skipConstInApp_boxed_2765_, v_skipInstances_boxed_2766_, v_x_2760_, v_x_2761_, v_e_2762_, v_a_2763_);
lean_dec(v_a_2763_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object* v_inst_2768_, lean_object* v_inst_2769_, lean_object* v_inst_2770_, lean_object* v_pre_2771_, lean_object* v_post_2772_, lean_object* v_usedLetOnly_2773_, lean_object* v_skipConstInApp_2774_, lean_object* v_skipInstances_2775_, lean_object* v_x_2776_, lean_object* v_x_2777_, lean_object* v_fvars_2778_, lean_object* v_e_2779_, lean_object* v_a_2780_){
_start:
{
uint8_t v_usedLetOnly_boxed_2781_; uint8_t v_skipConstInApp_boxed_2782_; uint8_t v_skipInstances_boxed_2783_; lean_object* v_res_2784_; 
v_usedLetOnly_boxed_2781_ = lean_unbox(v_usedLetOnly_2773_);
v_skipConstInApp_boxed_2782_ = lean_unbox(v_skipConstInApp_2774_);
v_skipInstances_boxed_2783_ = lean_unbox(v_skipInstances_2775_);
v_res_2784_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2768_, v_inst_2769_, v_inst_2770_, v_pre_2771_, v_post_2772_, v_usedLetOnly_boxed_2781_, v_skipConstInApp_boxed_2782_, v_skipInstances_boxed_2783_, v_x_2776_, v_x_2777_, v_fvars_2778_, v_e_2779_, v_a_2780_);
lean_dec(v_a_2780_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object* v_inst_2785_, lean_object* v_inst_2786_, lean_object* v_inst_2787_, lean_object* v_pre_2788_, lean_object* v_post_2789_, lean_object* v_usedLetOnly_2790_, lean_object* v_skipConstInApp_2791_, lean_object* v_skipInstances_2792_, lean_object* v_x_2793_, lean_object* v_x_2794_, lean_object* v_fvars_2795_, lean_object* v_e_2796_, lean_object* v_a_2797_){
_start:
{
uint8_t v_usedLetOnly_boxed_2798_; uint8_t v_skipConstInApp_boxed_2799_; uint8_t v_skipInstances_boxed_2800_; lean_object* v_res_2801_; 
v_usedLetOnly_boxed_2798_ = lean_unbox(v_usedLetOnly_2790_);
v_skipConstInApp_boxed_2799_ = lean_unbox(v_skipConstInApp_2791_);
v_skipInstances_boxed_2800_ = lean_unbox(v_skipInstances_2792_);
v_res_2801_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2785_, v_inst_2786_, v_inst_2787_, v_pre_2788_, v_post_2789_, v_usedLetOnly_boxed_2798_, v_skipConstInApp_boxed_2799_, v_skipInstances_boxed_2800_, v_x_2793_, v_x_2794_, v_fvars_2795_, v_e_2796_, v_a_2797_);
lean_dec(v_a_2797_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object* v_inst_2802_, lean_object* v_inst_2803_, lean_object* v_inst_2804_, lean_object* v_pre_2805_, lean_object* v_post_2806_, lean_object* v_usedLetOnly_2807_, lean_object* v_skipConstInApp_2808_, lean_object* v_skipInstances_2809_, lean_object* v_x_2810_, lean_object* v_x_2811_, lean_object* v_fvars_2812_, lean_object* v_e_2813_, lean_object* v_a_2814_){
_start:
{
uint8_t v_usedLetOnly_boxed_2815_; uint8_t v_skipConstInApp_boxed_2816_; uint8_t v_skipInstances_boxed_2817_; lean_object* v_res_2818_; 
v_usedLetOnly_boxed_2815_ = lean_unbox(v_usedLetOnly_2807_);
v_skipConstInApp_boxed_2816_ = lean_unbox(v_skipConstInApp_2808_);
v_skipInstances_boxed_2817_ = lean_unbox(v_skipInstances_2809_);
v_res_2818_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2802_, v_inst_2803_, v_inst_2804_, v_pre_2805_, v_post_2806_, v_usedLetOnly_boxed_2815_, v_skipConstInApp_boxed_2816_, v_skipInstances_boxed_2817_, v_x_2810_, v_x_2811_, v_fvars_2812_, v_e_2813_, v_a_2814_);
lean_dec(v_a_2814_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object* v_m_2819_, lean_object* v_inst_2820_, lean_object* v_inst_2821_, lean_object* v_inst_2822_, lean_object* v_pre_2823_, lean_object* v_post_2824_, uint8_t v_usedLetOnly_2825_, uint8_t v_skipConstInApp_2826_, uint8_t v_skipInstances_2827_, lean_object* v_x_2828_, lean_object* v_x_2829_, lean_object* v_e_2830_, lean_object* v_a_2831_){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2820_, v_inst_2821_, v_inst_2822_, v_pre_2823_, v_post_2824_, v_usedLetOnly_2825_, v_skipConstInApp_2826_, v_skipInstances_2827_, v_x_2828_, v_x_2829_, v_e_2830_, v_a_2831_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object* v_m_2833_, lean_object* v_inst_2834_, lean_object* v_inst_2835_, lean_object* v_inst_2836_, lean_object* v_pre_2837_, lean_object* v_post_2838_, lean_object* v_usedLetOnly_2839_, lean_object* v_skipConstInApp_2840_, lean_object* v_skipInstances_2841_, lean_object* v_x_2842_, lean_object* v_x_2843_, lean_object* v_e_2844_, lean_object* v_a_2845_){
_start:
{
uint8_t v_usedLetOnly_boxed_2846_; uint8_t v_skipConstInApp_boxed_2847_; uint8_t v_skipInstances_boxed_2848_; lean_object* v_res_2849_; 
v_usedLetOnly_boxed_2846_ = lean_unbox(v_usedLetOnly_2839_);
v_skipConstInApp_boxed_2847_ = lean_unbox(v_skipConstInApp_2840_);
v_skipInstances_boxed_2848_ = lean_unbox(v_skipInstances_2841_);
v_res_2849_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(v_m_2833_, v_inst_2834_, v_inst_2835_, v_inst_2836_, v_pre_2837_, v_post_2838_, v_usedLetOnly_boxed_2846_, v_skipConstInApp_boxed_2847_, v_skipInstances_boxed_2848_, v_x_2842_, v_x_2843_, v_e_2844_, v_a_2845_);
lean_dec(v_a_2845_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object* v_m_2850_, lean_object* v_inst_2851_, lean_object* v_inst_2852_, lean_object* v_inst_2853_, lean_object* v_pre_2854_, lean_object* v_post_2855_, uint8_t v_usedLetOnly_2856_, uint8_t v_skipConstInApp_2857_, uint8_t v_skipInstances_2858_, lean_object* v_x_2859_, lean_object* v_x_2860_, lean_object* v_fvars_2861_, lean_object* v_e_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2851_, v_inst_2852_, v_inst_2853_, v_pre_2854_, v_post_2855_, v_usedLetOnly_2856_, v_skipConstInApp_2857_, v_skipInstances_2858_, v_x_2859_, v_x_2860_, v_fvars_2861_, v_e_2862_, v_a_2863_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object* v_m_2865_, lean_object* v_inst_2866_, lean_object* v_inst_2867_, lean_object* v_inst_2868_, lean_object* v_pre_2869_, lean_object* v_post_2870_, lean_object* v_usedLetOnly_2871_, lean_object* v_skipConstInApp_2872_, lean_object* v_skipInstances_2873_, lean_object* v_x_2874_, lean_object* v_x_2875_, lean_object* v_fvars_2876_, lean_object* v_e_2877_, lean_object* v_a_2878_){
_start:
{
uint8_t v_usedLetOnly_boxed_2879_; uint8_t v_skipConstInApp_boxed_2880_; uint8_t v_skipInstances_boxed_2881_; lean_object* v_res_2882_; 
v_usedLetOnly_boxed_2879_ = lean_unbox(v_usedLetOnly_2871_);
v_skipConstInApp_boxed_2880_ = lean_unbox(v_skipConstInApp_2872_);
v_skipInstances_boxed_2881_ = lean_unbox(v_skipInstances_2873_);
v_res_2882_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(v_m_2865_, v_inst_2866_, v_inst_2867_, v_inst_2868_, v_pre_2869_, v_post_2870_, v_usedLetOnly_boxed_2879_, v_skipConstInApp_boxed_2880_, v_skipInstances_boxed_2881_, v_x_2874_, v_x_2875_, v_fvars_2876_, v_e_2877_, v_a_2878_);
lean_dec(v_a_2878_);
return v_res_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object* v_m_2883_, lean_object* v_inst_2884_, lean_object* v_inst_2885_, lean_object* v_inst_2886_, lean_object* v_pre_2887_, lean_object* v_post_2888_, uint8_t v_usedLetOnly_2889_, uint8_t v_skipConstInApp_2890_, uint8_t v_skipInstances_2891_, lean_object* v_x_2892_, lean_object* v_x_2893_, lean_object* v_e_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v___x_2896_; 
v___x_2896_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2884_, v_inst_2885_, v_inst_2886_, v_pre_2887_, v_post_2888_, v_usedLetOnly_2889_, v_skipConstInApp_2890_, v_skipInstances_2891_, v_x_2892_, v_x_2893_, v_e_2894_, v_a_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object* v_m_2897_, lean_object* v_inst_2898_, lean_object* v_inst_2899_, lean_object* v_inst_2900_, lean_object* v_pre_2901_, lean_object* v_post_2902_, lean_object* v_usedLetOnly_2903_, lean_object* v_skipConstInApp_2904_, lean_object* v_skipInstances_2905_, lean_object* v_x_2906_, lean_object* v_x_2907_, lean_object* v_e_2908_, lean_object* v_a_2909_){
_start:
{
uint8_t v_usedLetOnly_boxed_2910_; uint8_t v_skipConstInApp_boxed_2911_; uint8_t v_skipInstances_boxed_2912_; lean_object* v_res_2913_; 
v_usedLetOnly_boxed_2910_ = lean_unbox(v_usedLetOnly_2903_);
v_skipConstInApp_boxed_2911_ = lean_unbox(v_skipConstInApp_2904_);
v_skipInstances_boxed_2912_ = lean_unbox(v_skipInstances_2905_);
v_res_2913_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(v_m_2897_, v_inst_2898_, v_inst_2899_, v_inst_2900_, v_pre_2901_, v_post_2902_, v_usedLetOnly_boxed_2910_, v_skipConstInApp_boxed_2911_, v_skipInstances_boxed_2912_, v_x_2906_, v_x_2907_, v_e_2908_, v_a_2909_);
lean_dec(v_a_2909_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object* v_m_2914_, lean_object* v_inst_2915_, lean_object* v_inst_2916_, lean_object* v_inst_2917_, lean_object* v_pre_2918_, lean_object* v_post_2919_, uint8_t v_usedLetOnly_2920_, uint8_t v_skipConstInApp_2921_, uint8_t v_skipInstances_2922_, lean_object* v_x_2923_, lean_object* v_x_2924_, lean_object* v_fvars_2925_, lean_object* v_e_2926_, lean_object* v_a_2927_){
_start:
{
lean_object* v___x_2928_; 
v___x_2928_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2915_, v_inst_2916_, v_inst_2917_, v_pre_2918_, v_post_2919_, v_usedLetOnly_2920_, v_skipConstInApp_2921_, v_skipInstances_2922_, v_x_2923_, v_x_2924_, v_fvars_2925_, v_e_2926_, v_a_2927_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object* v_m_2929_, lean_object* v_inst_2930_, lean_object* v_inst_2931_, lean_object* v_inst_2932_, lean_object* v_pre_2933_, lean_object* v_post_2934_, lean_object* v_usedLetOnly_2935_, lean_object* v_skipConstInApp_2936_, lean_object* v_skipInstances_2937_, lean_object* v_x_2938_, lean_object* v_x_2939_, lean_object* v_fvars_2940_, lean_object* v_e_2941_, lean_object* v_a_2942_){
_start:
{
uint8_t v_usedLetOnly_boxed_2943_; uint8_t v_skipConstInApp_boxed_2944_; uint8_t v_skipInstances_boxed_2945_; lean_object* v_res_2946_; 
v_usedLetOnly_boxed_2943_ = lean_unbox(v_usedLetOnly_2935_);
v_skipConstInApp_boxed_2944_ = lean_unbox(v_skipConstInApp_2936_);
v_skipInstances_boxed_2945_ = lean_unbox(v_skipInstances_2937_);
v_res_2946_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(v_m_2929_, v_inst_2930_, v_inst_2931_, v_inst_2932_, v_pre_2933_, v_post_2934_, v_usedLetOnly_boxed_2943_, v_skipConstInApp_boxed_2944_, v_skipInstances_boxed_2945_, v_x_2938_, v_x_2939_, v_fvars_2940_, v_e_2941_, v_a_2942_);
lean_dec(v_a_2942_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object* v_m_2947_, lean_object* v_inst_2948_, lean_object* v_inst_2949_, lean_object* v_inst_2950_, lean_object* v_pre_2951_, lean_object* v_post_2952_, uint8_t v_usedLetOnly_2953_, uint8_t v_skipConstInApp_2954_, uint8_t v_skipInstances_2955_, lean_object* v_x_2956_, lean_object* v_x_2957_, lean_object* v_fvars_2958_, lean_object* v_e_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2948_, v_inst_2949_, v_inst_2950_, v_pre_2951_, v_post_2952_, v_usedLetOnly_2953_, v_skipConstInApp_2954_, v_skipInstances_2955_, v_x_2956_, v_x_2957_, v_fvars_2958_, v_e_2959_, v_a_2960_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object* v_m_2962_, lean_object* v_inst_2963_, lean_object* v_inst_2964_, lean_object* v_inst_2965_, lean_object* v_pre_2966_, lean_object* v_post_2967_, lean_object* v_usedLetOnly_2968_, lean_object* v_skipConstInApp_2969_, lean_object* v_skipInstances_2970_, lean_object* v_x_2971_, lean_object* v_x_2972_, lean_object* v_fvars_2973_, lean_object* v_e_2974_, lean_object* v_a_2975_){
_start:
{
uint8_t v_usedLetOnly_boxed_2976_; uint8_t v_skipConstInApp_boxed_2977_; uint8_t v_skipInstances_boxed_2978_; lean_object* v_res_2979_; 
v_usedLetOnly_boxed_2976_ = lean_unbox(v_usedLetOnly_2968_);
v_skipConstInApp_boxed_2977_ = lean_unbox(v_skipConstInApp_2969_);
v_skipInstances_boxed_2978_ = lean_unbox(v_skipInstances_2970_);
v_res_2979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(v_m_2962_, v_inst_2963_, v_inst_2964_, v_inst_2965_, v_pre_2966_, v_post_2967_, v_usedLetOnly_boxed_2976_, v_skipConstInApp_boxed_2977_, v_skipInstances_boxed_2978_, v_x_2971_, v_x_2972_, v_fvars_2973_, v_e_2974_, v_a_2975_);
lean_dec(v_a_2975_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object* v_x_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = lean_apply_1(v_x_2980_, lean_box(0));
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
return v___x_2987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object* v_x_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l_Lean_Meta_transformWithCache___redArg___lam__0(v_x_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object* v_inst_2995_, lean_object* v_00_u03b1_2996_, lean_object* v_x_2997_){
_start:
{
lean_object* v___f_2998_; lean_object* v___x_2999_; 
v___f_2998_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2998_, 0, v_x_2997_);
v___x_2999_ = lean_apply_2(v_inst_2995_, lean_box(0), v___f_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object* v_toPure_3000_, lean_object* v_x_3001_, lean_object* v_toBind_3002_, lean_object* v_inst_3003_, lean_object* v_inst_3004_, lean_object* v_inst_3005_, lean_object* v_pre_3006_, lean_object* v_post_3007_, uint8_t v_usedLetOnly_3008_, uint8_t v_skipConstInApp_3009_, uint8_t v_skipInstances_3010_, lean_object* v_x_3011_, lean_object* v_input_3012_, lean_object* v_ref_3013_){
_start:
{
lean_object* v___f_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
lean_inc(v_toBind_3002_);
lean_inc(v_x_3001_);
lean_inc(v_ref_3013_);
v___f_3014_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3014_, 0, v_toPure_3000_);
lean_closure_set(v___f_3014_, 1, v_ref_3013_);
lean_closure_set(v___f_3014_, 2, v_x_3001_);
lean_closure_set(v___f_3014_, 3, v_toBind_3002_);
v___x_3015_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3003_, v_inst_3004_, v_inst_3005_, v_pre_3006_, v_post_3007_, v_usedLetOnly_3008_, v_skipConstInApp_3009_, v_skipInstances_3010_, v_x_3011_, v_x_3001_, v_input_3012_, v_ref_3013_);
lean_dec(v_ref_3013_);
v___x_3016_ = lean_apply_4(v_toBind_3002_, lean_box(0), lean_box(0), v___x_3015_, v___f_3014_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object* v_toPure_3017_, lean_object* v_x_3018_, lean_object* v_toBind_3019_, lean_object* v_inst_3020_, lean_object* v_inst_3021_, lean_object* v_inst_3022_, lean_object* v_pre_3023_, lean_object* v_post_3024_, lean_object* v_usedLetOnly_3025_, lean_object* v_skipConstInApp_3026_, lean_object* v_skipInstances_3027_, lean_object* v_x_3028_, lean_object* v_input_3029_, lean_object* v_ref_3030_){
_start:
{
uint8_t v_usedLetOnly_boxed_3031_; uint8_t v_skipConstInApp_boxed_3032_; uint8_t v_skipInstances_boxed_3033_; lean_object* v_res_3034_; 
v_usedLetOnly_boxed_3031_ = lean_unbox(v_usedLetOnly_3025_);
v_skipConstInApp_boxed_3032_ = lean_unbox(v_skipConstInApp_3026_);
v_skipInstances_boxed_3033_ = lean_unbox(v_skipInstances_3027_);
v_res_3034_ = l_Lean_Meta_transformWithCache___redArg___lam__4(v_toPure_3017_, v_x_3018_, v_toBind_3019_, v_inst_3020_, v_inst_3021_, v_inst_3022_, v_pre_3023_, v_post_3024_, v_usedLetOnly_boxed_3031_, v_skipConstInApp_boxed_3032_, v_skipInstances_boxed_3033_, v_x_3028_, v_input_3029_, v_ref_3030_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object* v_inst_3035_, lean_object* v_inst_3036_, lean_object* v_inst_3037_, lean_object* v_input_3038_, lean_object* v_cache_3039_, lean_object* v_pre_3040_, lean_object* v_post_3041_, uint8_t v_usedLetOnly_3042_, uint8_t v_skipConstInApp_3043_, uint8_t v_skipInstances_3044_){
_start:
{
lean_object* v_x_3045_; lean_object* v_toApplicative_3046_; lean_object* v_toBind_3047_; lean_object* v_toPure_3048_; lean_object* v_x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___f_3055_; lean_object* v___x_3056_; 
v_x_3045_ = lean_box(0);
v_toApplicative_3046_ = lean_ctor_get(v_inst_3035_, 0);
v_toBind_3047_ = lean_ctor_get(v_inst_3035_, 1);
lean_inc_n(v_toBind_3047_, 2);
v_toPure_3048_ = lean_ctor_get(v_toApplicative_3046_, 1);
lean_inc(v_toPure_3048_);
lean_inc_n(v_inst_3036_, 2);
v_x_3049_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3049_, 0, v_inst_3036_);
v___x_3050_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3050_, 0, lean_box(0));
lean_closure_set(v___x_3050_, 1, lean_box(0));
lean_closure_set(v___x_3050_, 2, v_cache_3039_);
v___x_3051_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3036_, lean_box(0), v___x_3050_);
v___x_3052_ = lean_box(v_usedLetOnly_3042_);
v___x_3053_ = lean_box(v_skipConstInApp_3043_);
v___x_3054_ = lean_box(v_skipInstances_3044_);
v___f_3055_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3055_, 0, v_toPure_3048_);
lean_closure_set(v___f_3055_, 1, v_x_3049_);
lean_closure_set(v___f_3055_, 2, v_toBind_3047_);
lean_closure_set(v___f_3055_, 3, v_inst_3035_);
lean_closure_set(v___f_3055_, 4, v_inst_3036_);
lean_closure_set(v___f_3055_, 5, v_inst_3037_);
lean_closure_set(v___f_3055_, 6, v_pre_3040_);
lean_closure_set(v___f_3055_, 7, v_post_3041_);
lean_closure_set(v___f_3055_, 8, v___x_3052_);
lean_closure_set(v___f_3055_, 9, v___x_3053_);
lean_closure_set(v___f_3055_, 10, v___x_3054_);
lean_closure_set(v___f_3055_, 11, v_x_3045_);
lean_closure_set(v___f_3055_, 12, v_input_3038_);
v___x_3056_ = lean_apply_4(v_toBind_3047_, lean_box(0), lean_box(0), v___x_3051_, v___f_3055_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object* v_inst_3057_, lean_object* v_inst_3058_, lean_object* v_inst_3059_, lean_object* v_input_3060_, lean_object* v_cache_3061_, lean_object* v_pre_3062_, lean_object* v_post_3063_, lean_object* v_usedLetOnly_3064_, lean_object* v_skipConstInApp_3065_, lean_object* v_skipInstances_3066_){
_start:
{
uint8_t v_usedLetOnly_boxed_3067_; uint8_t v_skipConstInApp_boxed_3068_; uint8_t v_skipInstances_boxed_3069_; lean_object* v_res_3070_; 
v_usedLetOnly_boxed_3067_ = lean_unbox(v_usedLetOnly_3064_);
v_skipConstInApp_boxed_3068_ = lean_unbox(v_skipConstInApp_3065_);
v_skipInstances_boxed_3069_ = lean_unbox(v_skipInstances_3066_);
v_res_3070_ = l_Lean_Meta_transformWithCache___redArg(v_inst_3057_, v_inst_3058_, v_inst_3059_, v_input_3060_, v_cache_3061_, v_pre_3062_, v_post_3063_, v_usedLetOnly_boxed_3067_, v_skipConstInApp_boxed_3068_, v_skipInstances_boxed_3069_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object* v_m_3071_, lean_object* v_inst_3072_, lean_object* v_inst_3073_, lean_object* v_inst_3074_, lean_object* v_input_3075_, lean_object* v_cache_3076_, lean_object* v_pre_3077_, lean_object* v_post_3078_, uint8_t v_usedLetOnly_3079_, uint8_t v_skipConstInApp_3080_, uint8_t v_skipInstances_3081_){
_start:
{
lean_object* v_x_3082_; lean_object* v_toApplicative_3083_; lean_object* v_toBind_3084_; lean_object* v_toPure_3085_; lean_object* v_x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___f_3092_; lean_object* v___x_3093_; 
v_x_3082_ = lean_box(0);
v_toApplicative_3083_ = lean_ctor_get(v_inst_3072_, 0);
v_toBind_3084_ = lean_ctor_get(v_inst_3072_, 1);
lean_inc_n(v_toBind_3084_, 2);
v_toPure_3085_ = lean_ctor_get(v_toApplicative_3083_, 1);
lean_inc(v_toPure_3085_);
lean_inc_n(v_inst_3073_, 2);
v_x_3086_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3086_, 0, v_inst_3073_);
v___x_3087_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3087_, 0, lean_box(0));
lean_closure_set(v___x_3087_, 1, lean_box(0));
lean_closure_set(v___x_3087_, 2, v_cache_3076_);
v___x_3088_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3073_, lean_box(0), v___x_3087_);
v___x_3089_ = lean_box(v_usedLetOnly_3079_);
v___x_3090_ = lean_box(v_skipConstInApp_3080_);
v___x_3091_ = lean_box(v_skipInstances_3081_);
v___f_3092_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3092_, 0, v_toPure_3085_);
lean_closure_set(v___f_3092_, 1, v_x_3086_);
lean_closure_set(v___f_3092_, 2, v_toBind_3084_);
lean_closure_set(v___f_3092_, 3, v_inst_3072_);
lean_closure_set(v___f_3092_, 4, v_inst_3073_);
lean_closure_set(v___f_3092_, 5, v_inst_3074_);
lean_closure_set(v___f_3092_, 6, v_pre_3077_);
lean_closure_set(v___f_3092_, 7, v_post_3078_);
lean_closure_set(v___f_3092_, 8, v___x_3089_);
lean_closure_set(v___f_3092_, 9, v___x_3090_);
lean_closure_set(v___f_3092_, 10, v___x_3091_);
lean_closure_set(v___f_3092_, 11, v_x_3082_);
lean_closure_set(v___f_3092_, 12, v_input_3075_);
v___x_3093_ = lean_apply_4(v_toBind_3084_, lean_box(0), lean_box(0), v___x_3088_, v___f_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object* v_m_3094_, lean_object* v_inst_3095_, lean_object* v_inst_3096_, lean_object* v_inst_3097_, lean_object* v_input_3098_, lean_object* v_cache_3099_, lean_object* v_pre_3100_, lean_object* v_post_3101_, lean_object* v_usedLetOnly_3102_, lean_object* v_skipConstInApp_3103_, lean_object* v_skipInstances_3104_){
_start:
{
uint8_t v_usedLetOnly_boxed_3105_; uint8_t v_skipConstInApp_boxed_3106_; uint8_t v_skipInstances_boxed_3107_; lean_object* v_res_3108_; 
v_usedLetOnly_boxed_3105_ = lean_unbox(v_usedLetOnly_3102_);
v_skipConstInApp_boxed_3106_ = lean_unbox(v_skipConstInApp_3103_);
v_skipInstances_boxed_3107_ = lean_unbox(v_skipInstances_3104_);
v_res_3108_ = l_Lean_Meta_transformWithCache(v_m_3094_, v_inst_3095_, v_inst_3096_, v_inst_3097_, v_input_3098_, v_cache_3099_, v_pre_3100_, v_post_3101_, v_usedLetOnly_boxed_3105_, v_skipConstInApp_boxed_3106_, v_skipInstances_boxed_3107_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object* v_toPure_3109_, lean_object* v_x_3110_, lean_object* v_toBind_3111_, lean_object* v_inst_3112_, lean_object* v_inst_3113_, lean_object* v_inst_3114_, lean_object* v_pre_3115_, lean_object* v_post_3116_, uint8_t v_usedLetOnly_3117_, uint8_t v_skipConstInApp_3118_, uint8_t v___x_3119_, lean_object* v_x_3120_, lean_object* v_input_3121_, lean_object* v_ref_3122_){
_start:
{
lean_object* v___f_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
lean_inc(v_toBind_3111_);
lean_inc(v_x_3110_);
lean_inc(v_ref_3122_);
v___f_3123_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3123_, 0, v_toPure_3109_);
lean_closure_set(v___f_3123_, 1, v_ref_3122_);
lean_closure_set(v___f_3123_, 2, v_x_3110_);
lean_closure_set(v___f_3123_, 3, v_toBind_3111_);
v___x_3124_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3112_, v_inst_3113_, v_inst_3114_, v_pre_3115_, v_post_3116_, v_usedLetOnly_3117_, v_skipConstInApp_3118_, v___x_3119_, v_x_3120_, v_x_3110_, v_input_3121_, v_ref_3122_);
lean_dec(v_ref_3122_);
v___x_3125_ = lean_apply_4(v_toBind_3111_, lean_box(0), lean_box(0), v___x_3124_, v___f_3123_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object* v_toPure_3126_, lean_object* v_x_3127_, lean_object* v_toBind_3128_, lean_object* v_inst_3129_, lean_object* v_inst_3130_, lean_object* v_inst_3131_, lean_object* v_pre_3132_, lean_object* v_post_3133_, lean_object* v_usedLetOnly_3134_, lean_object* v_skipConstInApp_3135_, lean_object* v___x_3136_, lean_object* v_x_3137_, lean_object* v_input_3138_, lean_object* v_ref_3139_){
_start:
{
uint8_t v_usedLetOnly_boxed_3140_; uint8_t v_skipConstInApp_boxed_3141_; uint8_t v___x_114__boxed_3142_; lean_object* v_res_3143_; 
v_usedLetOnly_boxed_3140_ = lean_unbox(v_usedLetOnly_3134_);
v_skipConstInApp_boxed_3141_ = lean_unbox(v_skipConstInApp_3135_);
v___x_114__boxed_3142_ = lean_unbox(v___x_3136_);
v_res_3143_ = l_Lean_Meta_transform___redArg___lam__5(v_toPure_3126_, v_x_3127_, v_toBind_3128_, v_inst_3129_, v_inst_3130_, v_inst_3131_, v_pre_3132_, v_post_3133_, v_usedLetOnly_boxed_3140_, v_skipConstInApp_boxed_3141_, v___x_114__boxed_3142_, v_x_3137_, v_input_3138_, v_ref_3139_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object* v_inst_3144_, lean_object* v_inst_3145_, lean_object* v_inst_3146_, lean_object* v_input_3147_, lean_object* v_pre_3148_, lean_object* v_post_3149_, uint8_t v_usedLetOnly_3150_, uint8_t v_skipConstInApp_3151_){
_start:
{
lean_object* v_toApplicative_3152_; lean_object* v_toBind_3153_; lean_object* v_x_3154_; lean_object* v_toPure_3155_; lean_object* v_x_3156_; uint8_t v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___f_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___f_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v_toApplicative_3152_ = lean_ctor_get(v_inst_3144_, 0);
v_toBind_3153_ = lean_ctor_get(v_inst_3144_, 1);
lean_inc_n(v_toBind_3153_, 3);
v_x_3154_ = lean_box(0);
v_toPure_3155_ = lean_ctor_get(v_toApplicative_3152_, 1);
lean_inc_n(v_toPure_3155_, 2);
lean_inc_n(v_inst_3145_, 2);
v_x_3156_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3156_, 0, v_inst_3145_);
v___x_3157_ = 0;
v___x_3158_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_3159_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3145_, lean_box(0), v___x_3158_);
v___f_3160_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3160_, 0, v_toPure_3155_);
v___x_3161_ = lean_box(v_usedLetOnly_3150_);
v___x_3162_ = lean_box(v_skipConstInApp_3151_);
v___x_3163_ = lean_box(v___x_3157_);
v___f_3164_ = lean_alloc_closure((void*)(l_Lean_Meta_transform___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_3164_, 0, v_toPure_3155_);
lean_closure_set(v___f_3164_, 1, v_x_3156_);
lean_closure_set(v___f_3164_, 2, v_toBind_3153_);
lean_closure_set(v___f_3164_, 3, v_inst_3144_);
lean_closure_set(v___f_3164_, 4, v_inst_3145_);
lean_closure_set(v___f_3164_, 5, v_inst_3146_);
lean_closure_set(v___f_3164_, 6, v_pre_3148_);
lean_closure_set(v___f_3164_, 7, v_post_3149_);
lean_closure_set(v___f_3164_, 8, v___x_3161_);
lean_closure_set(v___f_3164_, 9, v___x_3162_);
lean_closure_set(v___f_3164_, 10, v___x_3163_);
lean_closure_set(v___f_3164_, 11, v_x_3154_);
lean_closure_set(v___f_3164_, 12, v_input_3147_);
v___x_3165_ = lean_apply_4(v_toBind_3153_, lean_box(0), lean_box(0), v___x_3159_, v___f_3164_);
v___x_3166_ = lean_apply_4(v_toBind_3153_, lean_box(0), lean_box(0), v___x_3165_, v___f_3160_);
return v___x_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object* v_inst_3167_, lean_object* v_inst_3168_, lean_object* v_inst_3169_, lean_object* v_input_3170_, lean_object* v_pre_3171_, lean_object* v_post_3172_, lean_object* v_usedLetOnly_3173_, lean_object* v_skipConstInApp_3174_){
_start:
{
uint8_t v_usedLetOnly_boxed_3175_; uint8_t v_skipConstInApp_boxed_3176_; lean_object* v_res_3177_; 
v_usedLetOnly_boxed_3175_ = lean_unbox(v_usedLetOnly_3173_);
v_skipConstInApp_boxed_3176_ = lean_unbox(v_skipConstInApp_3174_);
v_res_3177_ = l_Lean_Meta_transform___redArg(v_inst_3167_, v_inst_3168_, v_inst_3169_, v_input_3170_, v_pre_3171_, v_post_3172_, v_usedLetOnly_boxed_3175_, v_skipConstInApp_boxed_3176_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object* v_m_3178_, lean_object* v_inst_3179_, lean_object* v_inst_3180_, lean_object* v_inst_3181_, lean_object* v_input_3182_, lean_object* v_pre_3183_, lean_object* v_post_3184_, uint8_t v_usedLetOnly_3185_, uint8_t v_skipConstInApp_3186_){
_start:
{
lean_object* v___x_3187_; 
v___x_3187_ = l_Lean_Meta_transform___redArg(v_inst_3179_, v_inst_3180_, v_inst_3181_, v_input_3182_, v_pre_3183_, v_post_3184_, v_usedLetOnly_3185_, v_skipConstInApp_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object* v_m_3188_, lean_object* v_inst_3189_, lean_object* v_inst_3190_, lean_object* v_inst_3191_, lean_object* v_input_3192_, lean_object* v_pre_3193_, lean_object* v_post_3194_, lean_object* v_usedLetOnly_3195_, lean_object* v_skipConstInApp_3196_){
_start:
{
uint8_t v_usedLetOnly_boxed_3197_; uint8_t v_skipConstInApp_boxed_3198_; lean_object* v_res_3199_; 
v_usedLetOnly_boxed_3197_ = lean_unbox(v_usedLetOnly_3195_);
v_skipConstInApp_boxed_3198_ = lean_unbox(v_skipConstInApp_3196_);
v_res_3199_ = l_Lean_Meta_transform(v_m_3188_, v_inst_3189_, v_inst_3190_, v_inst_3191_, v_input_3192_, v_pre_3193_, v_post_3194_, v_usedLetOnly_boxed_3197_, v_skipConstInApp_boxed_3198_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object* v_e_3200_, lean_object* v___y_3201_){
_start:
{
uint8_t v___x_3203_; 
v___x_3203_ = l_Lean_Expr_hasMVar(v_e_3200_);
if (v___x_3203_ == 0)
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v_e_3200_);
return v___x_3204_;
}
else
{
lean_object* v___x_3205_; lean_object* v_mctx_3206_; lean_object* v___x_3207_; lean_object* v_fst_3208_; lean_object* v_snd_3209_; lean_object* v___x_3210_; lean_object* v_cache_3211_; lean_object* v_zetaDeltaFVarIds_3212_; lean_object* v_postponed_3213_; lean_object* v_diag_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3223_; 
v___x_3205_ = lean_st_ref_get(v___y_3201_);
v_mctx_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc_ref(v_mctx_3206_);
lean_dec(v___x_3205_);
v___x_3207_ = l_Lean_instantiateMVarsCore(v_mctx_3206_, v_e_3200_);
v_fst_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_fst_3208_);
v_snd_3209_ = lean_ctor_get(v___x_3207_, 1);
lean_inc(v_snd_3209_);
lean_dec_ref(v___x_3207_);
v___x_3210_ = lean_st_ref_take(v___y_3201_);
v_cache_3211_ = lean_ctor_get(v___x_3210_, 1);
v_zetaDeltaFVarIds_3212_ = lean_ctor_get(v___x_3210_, 2);
v_postponed_3213_ = lean_ctor_get(v___x_3210_, 3);
v_diag_3214_ = lean_ctor_get(v___x_3210_, 4);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3223_ == 0)
{
lean_object* v_unused_3224_; 
v_unused_3224_ = lean_ctor_get(v___x_3210_, 0);
lean_dec(v_unused_3224_);
v___x_3216_ = v___x_3210_;
v_isShared_3217_ = v_isSharedCheck_3223_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_diag_3214_);
lean_inc(v_postponed_3213_);
lean_inc(v_zetaDeltaFVarIds_3212_);
lean_inc(v_cache_3211_);
lean_dec(v___x_3210_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3223_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 0, v_snd_3209_);
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_snd_3209_);
lean_ctor_set(v_reuseFailAlloc_3222_, 1, v_cache_3211_);
lean_ctor_set(v_reuseFailAlloc_3222_, 2, v_zetaDeltaFVarIds_3212_);
lean_ctor_set(v_reuseFailAlloc_3222_, 3, v_postponed_3213_);
lean_ctor_set(v_reuseFailAlloc_3222_, 4, v_diag_3214_);
v___x_3219_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = lean_st_ref_set(v___y_3201_, v___x_3219_);
v___x_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3221_, 0, v_fst_3208_);
return v___x_3221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object* v_e_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3225_, v___y_3226_);
lean_dec(v___y_3226_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object* v_e_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v___x_3235_; 
v___x_3235_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3229_, v___y_3231_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object* v_e_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(v_e_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3239_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t v_zetaHave_3243_, lean_object* v___x_3244_, uint8_t v_zetaDelta_3245_, lean_object* v_fvarId_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_3246_, v___y_3247_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3281_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3255_ = v___x_3252_;
v_isShared_3256_ = v_isSharedCheck_3281_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3252_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3281_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
if (lean_obj_tag(v_a_3253_) == 1)
{
lean_object* v_val_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3276_; 
v_val_3257_ = lean_ctor_get(v_a_3253_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v_a_3253_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3259_ = v_a_3253_;
v_isShared_3260_ = v_isSharedCheck_3276_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_val_3257_);
lean_dec(v_a_3253_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3276_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
uint8_t v___y_3262_; 
if (v_zetaDelta_3245_ == 0)
{
lean_object* v___x_3270_; uint8_t v___x_3271_; 
v___x_3270_ = l_Lean_LocalDecl_index(v_val_3257_);
v___x_3271_ = lean_nat_dec_lt(v___x_3270_, v___x_3244_);
lean_dec(v___x_3270_);
if (v___x_3271_ == 0)
{
lean_del_object(v___x_3259_);
goto v___jp_3267_;
}
else
{
lean_object* v___x_3272_; lean_object* v___x_3274_; 
lean_dec(v_val_3257_);
lean_del_object(v___x_3255_);
v___x_3272_ = lean_box(0);
if (v_isShared_3260_ == 0)
{
lean_ctor_set_tag(v___x_3259_, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3272_);
v___x_3274_ = v___x_3259_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
else
{
lean_del_object(v___x_3259_);
goto v___jp_3267_;
}
v___jp_3261_:
{
lean_object* v___x_3263_; lean_object* v___x_3265_; 
v___x_3263_ = l_Lean_LocalDecl_value_x3f(v_val_3257_, v___y_3262_);
lean_dec(v_val_3257_);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 0, v___x_3263_);
v___x_3265_ = v___x_3255_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v___x_3263_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
v___jp_3267_:
{
if (v_zetaHave_3243_ == 0)
{
v___y_3262_ = v_zetaHave_3243_;
goto v___jp_3261_;
}
else
{
lean_object* v___x_3268_; uint8_t v___x_3269_; 
v___x_3268_ = l_Lean_LocalDecl_index(v_val_3257_);
v___x_3269_ = lean_nat_dec_le(v___x_3244_, v___x_3268_);
lean_dec(v___x_3268_);
v___y_3262_ = v___x_3269_;
goto v___jp_3261_;
}
}
}
}
else
{
lean_object* v___x_3277_; lean_object* v___x_3279_; 
lean_dec(v_a_3253_);
v___x_3277_ = lean_box(0);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 0, v___x_3277_);
v___x_3279_ = v___x_3255_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3277_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
v_a_3282_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3284_ = v___x_3252_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3252_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3282_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object* v_zetaHave_3290_, lean_object* v___x_3291_, lean_object* v_zetaDelta_3292_, lean_object* v_fvarId_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
uint8_t v_zetaHave_boxed_3299_; uint8_t v_zetaDelta_boxed_3300_; lean_object* v_res_3301_; 
v_zetaHave_boxed_3299_ = lean_unbox(v_zetaHave_3290_);
v_zetaDelta_boxed_3300_ = lean_unbox(v_zetaDelta_3292_);
v_res_3301_ = l_Lean_Meta_zetaReduce___lam__0(v_zetaHave_boxed_3299_, v___x_3291_, v_zetaDelta_boxed_3300_, v_fvarId_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___x_3291_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object* v_e_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_e_3302_);
v___x_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object* v_e_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l_Lean_Meta_zetaReduce___lam__1(v_e_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object* v___f_3317_, lean_object* v_e_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_){
_start:
{
if (lean_obj_tag(v_e_3318_) == 1)
{
lean_object* v_fvarId_3324_; lean_object* v___x_3325_; 
v_fvarId_3324_ = lean_ctor_get(v_e_3318_, 0);
lean_inc(v___y_3322_);
lean_inc_ref(v___y_3321_);
lean_inc(v___y_3320_);
lean_inc_ref(v___y_3319_);
lean_inc(v_fvarId_3324_);
v___x_3325_ = lean_apply_6(v___f_3317_, v_fvarId_3324_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, lean_box(0));
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3351_; 
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3328_ = v___x_3325_;
v_isShared_3329_ = v_isSharedCheck_3351_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3325_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3351_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
if (lean_obj_tag(v_a_3326_) == 1)
{
lean_object* v_val_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3346_; 
lean_del_object(v___x_3328_);
lean_dec_ref(v_e_3318_);
v_val_3330_ = lean_ctor_get(v_a_3326_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v_a_3326_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3332_ = v_a_3326_;
v_isShared_3333_ = v_isSharedCheck_3346_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_val_3330_);
lean_dec(v_a_3326_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3346_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3334_; lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3345_; 
v___x_3334_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3330_, v___y_3320_);
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3337_ = v___x_3334_;
v_isShared_3338_ = v_isSharedCheck_3345_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3334_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3345_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3333_ == 0)
{
lean_ctor_set(v___x_3332_, 0, v_a_3335_);
v___x_3340_ = v___x_3332_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
lean_object* v___x_3342_; 
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v___x_3340_);
v___x_3342_ = v___x_3337_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3340_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
}
}
else
{
lean_object* v___x_3347_; lean_object* v___x_3349_; 
lean_dec(v_a_3326_);
v___x_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3347_, 0, v_e_3318_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set(v___x_3328_, 0, v___x_3347_);
v___x_3349_ = v___x_3328_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v___x_3347_);
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
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec_ref(v_e_3318_);
v_a_3352_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3325_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3325_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
else
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
lean_dec_ref(v_e_3318_);
lean_dec_ref(v___f_3317_);
v___x_3360_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
return v___x_3361_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object* v___f_3362_, lean_object* v_e_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lean_Meta_zetaReduce___lam__2(v___f_3362_, v_e_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object* v___f_3370_, lean_object* v_e_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = l_Lean_Expr_getAppFn(v_e_3371_);
if (lean_obj_tag(v___x_3377_) == 1)
{
lean_object* v_fvarId_3378_; lean_object* v___x_3379_; 
v_fvarId_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_fvarId_3378_);
lean_dec_ref(v___x_3377_);
lean_inc(v___y_3375_);
lean_inc_ref(v___y_3374_);
lean_inc(v___y_3373_);
lean_inc_ref(v___y_3372_);
v___x_3379_ = lean_apply_6(v___f_3370_, v_fvarId_3378_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, lean_box(0));
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3412_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3382_ = v___x_3379_;
v_isShared_3383_ = v_isSharedCheck_3412_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3379_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3412_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
if (lean_obj_tag(v_a_3380_) == 1)
{
lean_object* v_val_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3407_; 
lean_del_object(v___x_3382_);
v_val_3384_ = lean_ctor_get(v_a_3380_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v_a_3380_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3386_ = v_a_3380_;
v_isShared_3387_ = v_isSharedCheck_3407_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_val_3384_);
lean_dec(v_a_3380_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3407_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3388_; lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3406_; 
v___x_3388_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3384_, v___y_3373_);
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3391_ = v___x_3388_;
v_isShared_3392_ = v_isSharedCheck_3406_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3388_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3406_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v_dummy_3393_; lean_object* v_nargs_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3401_; 
v_dummy_3393_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_3394_ = l_Lean_Expr_getAppNumArgs(v_e_3371_);
lean_inc(v_nargs_3394_);
v___x_3395_ = lean_mk_array(v_nargs_3394_, v_dummy_3393_);
v___x_3396_ = lean_unsigned_to_nat(1u);
v___x_3397_ = lean_nat_sub(v_nargs_3394_, v___x_3396_);
lean_dec(v_nargs_3394_);
v___x_3398_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3371_, v___x_3395_, v___x_3397_);
v___x_3399_ = l_Lean_Expr_beta(v_a_3389_, v___x_3398_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3399_);
v___x_3401_ = v___x_3386_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___x_3399_);
v___x_3401_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
lean_object* v___x_3403_; 
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v___x_3401_);
v___x_3403_ = v___x_3391_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v___x_3401_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
return v___x_3403_;
}
}
}
}
}
else
{
lean_object* v___x_3408_; lean_object* v___x_3410_; 
lean_dec(v_a_3380_);
lean_dec_ref(v_e_3371_);
v___x_3408_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 0, v___x_3408_);
v___x_3410_ = v___x_3382_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3420_; 
lean_dec_ref(v_e_3371_);
v_a_3413_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3415_ = v___x_3379_;
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3379_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_a_3413_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
lean_dec_ref(v___x_3377_);
lean_dec_ref(v_e_3371_);
lean_dec_ref(v___f_3370_);
v___x_3421_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
return v___x_3422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object* v___f_3423_, lean_object* v_e_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_){
_start:
{
lean_object* v_res_3430_; 
v_res_3430_ = l_Lean_Meta_zetaReduce___lam__4(v___f_3423_, v_e_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_);
lean_dec(v___y_3428_);
lean_dec_ref(v___y_3427_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object* v_00_u03b1_3431_, lean_object* v_x_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = lean_apply_1(v_x_3432_, lean_box(0));
v___x_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3438_);
return v___x_3439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3440_, lean_object* v_x_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(v_00_u03b1_3440_, v_x_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3448_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_){
_start:
{
lean_object* v_res_3461_; 
v_res_3461_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec(v___y_3457_);
lean_dec_ref(v___y_3456_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object* v_k_3462_, lean_object* v___y_3463_, lean_object* v_b_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_){
_start:
{
lean_object* v___x_3470_; 
lean_inc(v___y_3468_);
lean_inc_ref(v___y_3467_);
lean_inc(v___y_3466_);
lean_inc_ref(v___y_3465_);
lean_inc(v___y_3463_);
v___x_3470_ = lean_apply_7(v_k_3462_, v_b_3464_, v___y_3463_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, lean_box(0));
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_k_3471_, lean_object* v___y_3472_, lean_object* v_b_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_){
_start:
{
lean_object* v_res_3479_; 
v_res_3479_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(v_k_3471_, v___y_3472_, v_b_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3472_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_name_3480_, uint8_t v_bi_3481_, lean_object* v_type_3482_, lean_object* v_k_3483_, uint8_t v_kind_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_){
_start:
{
lean_object* v___f_3491_; lean_object* v___x_3492_; 
lean_inc(v___y_3485_);
v___f_3491_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3491_, 0, v_k_3483_);
lean_closure_set(v___f_3491_, 1, v___y_3485_);
v___x_3492_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3480_, v_bi_3481_, v_type_3482_, v___f_3491_, v_kind_3484_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_);
if (lean_obj_tag(v___x_3492_) == 0)
{
return v___x_3492_;
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3492_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3492_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_name_3501_, lean_object* v_bi_3502_, lean_object* v_type_3503_, lean_object* v_k_3504_, lean_object* v_kind_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_){
_start:
{
uint8_t v_bi_boxed_3512_; uint8_t v_kind_boxed_3513_; lean_object* v_res_3514_; 
v_bi_boxed_3512_ = lean_unbox(v_bi_3502_);
v_kind_boxed_3513_ = lean_unbox(v_kind_3505_);
v_res_3514_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_3501_, v_bi_boxed_3512_, v_type_3503_, v_k_3504_, v_kind_boxed_3513_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_);
lean_dec(v___y_3510_);
lean_dec_ref(v___y_3509_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object* v_name_3515_, lean_object* v_type_3516_, lean_object* v_val_3517_, lean_object* v_k_3518_, uint8_t v_nondep_3519_, uint8_t v_kind_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v___f_3527_; lean_object* v___x_3528_; 
lean_inc(v___y_3521_);
v___f_3527_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3527_, 0, v_k_3518_);
lean_closure_set(v___f_3527_, 1, v___y_3521_);
v___x_3528_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_3515_, v_type_3516_, v_val_3517_, v___f_3527_, v_nondep_3519_, v_kind_3520_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
if (lean_obj_tag(v___x_3528_) == 0)
{
return v___x_3528_;
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3528_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3528_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_name_3537_, lean_object* v_type_3538_, lean_object* v_val_3539_, lean_object* v_k_3540_, lean_object* v_nondep_3541_, lean_object* v_kind_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
uint8_t v_nondep_boxed_3549_; uint8_t v_kind_boxed_3550_; lean_object* v_res_3551_; 
v_nondep_boxed_3549_ = lean_unbox(v_nondep_3541_);
v_kind_boxed_3550_ = lean_unbox(v_kind_3542_);
v_res_3551_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_3537_, v_type_3538_, v_val_3539_, v_k_3540_, v_nondep_boxed_3549_, v_kind_boxed_3550_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v___y_3543_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_3552_, lean_object* v_x_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3559_ = lean_apply_1(v_x_3553_, lean_box(0));
v___x_3560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3561_, lean_object* v_x_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(v_00_u03b1_3561_, v_x_3562_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec(v___y_3564_);
lean_dec_ref(v___y_3563_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object* v_ref_3569_){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3571_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3572_, 0, v_ref_3569_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object* v_ref_3574_, lean_object* v___y_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3574_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object* v_x_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_){
_start:
{
lean_object* v___y_3585_; lean_object* v_fileName_3594_; lean_object* v_fileMap_3595_; lean_object* v_options_3596_; lean_object* v_currRecDepth_3597_; lean_object* v_maxRecDepth_3598_; lean_object* v_ref_3599_; lean_object* v_currNamespace_3600_; lean_object* v_openDecls_3601_; lean_object* v_initHeartbeats_3602_; lean_object* v_maxHeartbeats_3603_; lean_object* v_quotContext_3604_; lean_object* v_currMacroScope_3605_; uint8_t v_diag_3606_; lean_object* v_cancelTk_x3f_3607_; uint8_t v_suppressElabErrors_3608_; lean_object* v_inheritedTraceOptions_3609_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v_fileName_3594_ = lean_ctor_get(v___y_3581_, 0);
v_fileMap_3595_ = lean_ctor_get(v___y_3581_, 1);
v_options_3596_ = lean_ctor_get(v___y_3581_, 2);
v_currRecDepth_3597_ = lean_ctor_get(v___y_3581_, 3);
v_maxRecDepth_3598_ = lean_ctor_get(v___y_3581_, 4);
v_ref_3599_ = lean_ctor_get(v___y_3581_, 5);
v_currNamespace_3600_ = lean_ctor_get(v___y_3581_, 6);
v_openDecls_3601_ = lean_ctor_get(v___y_3581_, 7);
v_initHeartbeats_3602_ = lean_ctor_get(v___y_3581_, 8);
v_maxHeartbeats_3603_ = lean_ctor_get(v___y_3581_, 9);
v_quotContext_3604_ = lean_ctor_get(v___y_3581_, 10);
v_currMacroScope_3605_ = lean_ctor_get(v___y_3581_, 11);
v_diag_3606_ = lean_ctor_get_uint8(v___y_3581_, sizeof(void*)*14);
v_cancelTk_x3f_3607_ = lean_ctor_get(v___y_3581_, 12);
v_suppressElabErrors_3608_ = lean_ctor_get_uint8(v___y_3581_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3609_ = lean_ctor_get(v___y_3581_, 13);
v___x_3615_ = lean_unsigned_to_nat(0u);
v___x_3616_ = lean_nat_dec_eq(v_maxRecDepth_3598_, v___x_3615_);
if (v___x_3616_ == 0)
{
uint8_t v___x_3617_; 
v___x_3617_ = lean_nat_dec_eq(v_currRecDepth_3597_, v_maxRecDepth_3598_);
if (v___x_3617_ == 0)
{
goto v___jp_3610_;
}
else
{
lean_object* v___x_3618_; 
lean_dec_ref(v_x_3577_);
lean_inc(v_ref_3599_);
v___x_3618_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3599_);
v___y_3585_ = v___x_3618_;
goto v___jp_3584_;
}
}
else
{
goto v___jp_3610_;
}
v___jp_3584_:
{
if (lean_obj_tag(v___y_3585_) == 0)
{
return v___y_3585_;
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3593_; 
v_a_3586_ = lean_ctor_get(v___y_3585_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___y_3585_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3588_ = v___y_3585_;
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___y_3585_);
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
v___jp_3610_:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3611_ = lean_unsigned_to_nat(1u);
v___x_3612_ = lean_nat_add(v_currRecDepth_3597_, v___x_3611_);
lean_inc_ref(v_inheritedTraceOptions_3609_);
lean_inc(v_cancelTk_x3f_3607_);
lean_inc(v_currMacroScope_3605_);
lean_inc(v_quotContext_3604_);
lean_inc(v_maxHeartbeats_3603_);
lean_inc(v_initHeartbeats_3602_);
lean_inc(v_openDecls_3601_);
lean_inc(v_currNamespace_3600_);
lean_inc(v_ref_3599_);
lean_inc(v_maxRecDepth_3598_);
lean_inc_ref(v_options_3596_);
lean_inc_ref(v_fileMap_3595_);
lean_inc_ref(v_fileName_3594_);
v___x_3613_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3613_, 0, v_fileName_3594_);
lean_ctor_set(v___x_3613_, 1, v_fileMap_3595_);
lean_ctor_set(v___x_3613_, 2, v_options_3596_);
lean_ctor_set(v___x_3613_, 3, v___x_3612_);
lean_ctor_set(v___x_3613_, 4, v_maxRecDepth_3598_);
lean_ctor_set(v___x_3613_, 5, v_ref_3599_);
lean_ctor_set(v___x_3613_, 6, v_currNamespace_3600_);
lean_ctor_set(v___x_3613_, 7, v_openDecls_3601_);
lean_ctor_set(v___x_3613_, 8, v_initHeartbeats_3602_);
lean_ctor_set(v___x_3613_, 9, v_maxHeartbeats_3603_);
lean_ctor_set(v___x_3613_, 10, v_quotContext_3604_);
lean_ctor_set(v___x_3613_, 11, v_currMacroScope_3605_);
lean_ctor_set(v___x_3613_, 12, v_cancelTk_x3f_3607_);
lean_ctor_set(v___x_3613_, 13, v_inheritedTraceOptions_3609_);
lean_ctor_set_uint8(v___x_3613_, sizeof(void*)*14, v_diag_3606_);
lean_ctor_set_uint8(v___x_3613_, sizeof(void*)*14 + 1, v_suppressElabErrors_3608_);
lean_inc(v___y_3582_);
lean_inc(v___y_3580_);
lean_inc_ref(v___y_3579_);
lean_inc(v___y_3578_);
v___x_3614_ = lean_apply_6(v_x_3577_, v___y_3578_, v___y_3579_, v___y_3580_, v___x_3613_, v___y_3582_, lean_box(0));
v___y_3585_ = v___x_3614_;
goto v___jp_3584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_x_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_){
_start:
{
lean_object* v_res_3626_; 
v_res_3626_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
lean_dec(v___y_3620_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3627_, lean_object* v_pre_3628_, lean_object* v_post_3629_, uint8_t v_usedLetOnly_3630_, uint8_t v_skipConstInApp_3631_, uint8_t v_skipInstances_3632_, lean_object* v_body_3633_, lean_object* v_x_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = lean_array_push(v_fvars_3627_, v_x_3634_);
v___x_3642_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_3628_, v_post_3629_, v_usedLetOnly_3630_, v_skipConstInApp_3631_, v_skipInstances_3632_, v___x_3641_, v_body_3633_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_, v___y_3639_);
return v___x_3642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_3643_, lean_object* v_pre_3644_, lean_object* v_post_3645_, lean_object* v_usedLetOnly_3646_, lean_object* v_skipConstInApp_3647_, lean_object* v_skipInstances_3648_, lean_object* v_body_3649_, lean_object* v_x_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_){
_start:
{
uint8_t v_usedLetOnly_boxed_3657_; uint8_t v_skipConstInApp_boxed_3658_; uint8_t v_skipInstances_boxed_3659_; lean_object* v_res_3660_; 
v_usedLetOnly_boxed_3657_ = lean_unbox(v_usedLetOnly_3646_);
v_skipConstInApp_boxed_3658_ = lean_unbox(v_skipConstInApp_3647_);
v_skipInstances_boxed_3659_ = lean_unbox(v_skipInstances_3648_);
v_res_3660_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_3643_, v_pre_3644_, v_post_3645_, v_usedLetOnly_boxed_3657_, v_skipConstInApp_boxed_3658_, v_skipInstances_boxed_3659_, v_body_3649_, v_x_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec(v___y_3653_);
lean_dec_ref(v___y_3652_);
lean_dec(v___y_3651_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object* v_pre_3661_, lean_object* v_post_3662_, uint8_t v_usedLetOnly_3663_, uint8_t v_skipConstInApp_3664_, uint8_t v_skipInstances_3665_, lean_object* v_e_3666_, lean_object* v_a_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_){
_start:
{
lean_object* v___x_3673_; 
lean_inc_ref(v_post_3662_);
lean_inc(v___y_3671_);
lean_inc_ref(v___y_3670_);
lean_inc(v___y_3669_);
lean_inc_ref(v___y_3668_);
lean_inc_ref(v_e_3666_);
v___x_3673_ = lean_apply_6(v_post_3662_, v_e_3666_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_, lean_box(0));
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3692_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3676_ = v___x_3673_;
v_isShared_3677_ = v_isSharedCheck_3692_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3673_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3692_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
switch(lean_obj_tag(v_a_3674_))
{
case 0:
{
lean_object* v_e_3678_; lean_object* v___x_3680_; 
lean_dec_ref(v_e_3666_);
lean_dec_ref(v_post_3662_);
lean_dec_ref(v_pre_3661_);
v_e_3678_ = lean_ctor_get(v_a_3674_, 0);
lean_inc_ref(v_e_3678_);
lean_dec_ref(v_a_3674_);
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v_e_3678_);
v___x_3680_ = v___x_3676_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_e_3678_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
case 1:
{
lean_object* v_e_3682_; lean_object* v___x_3683_; 
lean_del_object(v___x_3676_);
lean_dec_ref(v_e_3666_);
v_e_3682_ = lean_ctor_get(v_a_3674_, 0);
lean_inc_ref(v_e_3682_);
lean_dec_ref(v_a_3674_);
v___x_3683_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3661_, v_post_3662_, v_usedLetOnly_3663_, v_skipConstInApp_3664_, v_skipInstances_3665_, v_e_3682_, v_a_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
return v___x_3683_;
}
default: 
{
lean_object* v_e_x3f_3684_; 
lean_dec_ref(v_post_3662_);
lean_dec_ref(v_pre_3661_);
v_e_x3f_3684_ = lean_ctor_get(v_a_3674_, 0);
lean_inc(v_e_x3f_3684_);
lean_dec_ref(v_a_3674_);
if (lean_obj_tag(v_e_x3f_3684_) == 0)
{
lean_object* v___x_3686_; 
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v_e_3666_);
v___x_3686_ = v___x_3676_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_e_3666_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
else
{
lean_object* v_val_3688_; lean_object* v___x_3690_; 
lean_dec_ref(v_e_3666_);
v_val_3688_ = lean_ctor_get(v_e_x3f_3684_, 0);
lean_inc(v_val_3688_);
lean_dec_ref(v_e_x3f_3684_);
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v_val_3688_);
v___x_3690_ = v___x_3676_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_val_3688_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_dec_ref(v_e_3666_);
lean_dec_ref(v_post_3662_);
lean_dec_ref(v_pre_3661_);
v_a_3693_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3673_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3673_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3701_, lean_object* v_post_3702_, uint8_t v_usedLetOnly_3703_, uint8_t v_skipConstInApp_3704_, uint8_t v_skipInstances_3705_, lean_object* v_fvars_3706_, lean_object* v_e_3707_, lean_object* v_a_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
if (lean_obj_tag(v_e_3707_) == 6)
{
lean_object* v_binderName_3714_; lean_object* v_binderType_3715_; lean_object* v_body_3716_; uint8_t v_binderInfo_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v_binderName_3714_ = lean_ctor_get(v_e_3707_, 0);
lean_inc(v_binderName_3714_);
v_binderType_3715_ = lean_ctor_get(v_e_3707_, 1);
lean_inc_ref(v_binderType_3715_);
v_body_3716_ = lean_ctor_get(v_e_3707_, 2);
lean_inc_ref(v_body_3716_);
v_binderInfo_3717_ = lean_ctor_get_uint8(v_e_3707_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3707_);
v___x_3718_ = lean_expr_instantiate_rev(v_binderType_3715_, v_fvars_3706_);
lean_dec_ref(v_binderType_3715_);
lean_inc_ref(v_post_3702_);
lean_inc_ref(v_pre_3701_);
v___x_3719_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3701_, v_post_3702_, v_usedLetOnly_3703_, v_skipConstInApp_3704_, v_skipInstances_3705_, v___x_3718_, v_a_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___f_3724_; uint8_t v___x_3725_; lean_object* v___x_3726_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref(v___x_3719_);
v___x_3721_ = lean_box(v_usedLetOnly_3703_);
v___x_3722_ = lean_box(v_skipConstInApp_3704_);
v___x_3723_ = lean_box(v_skipInstances_3705_);
v___f_3724_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3724_, 0, v_fvars_3706_);
lean_closure_set(v___f_3724_, 1, v_pre_3701_);
lean_closure_set(v___f_3724_, 2, v_post_3702_);
lean_closure_set(v___f_3724_, 3, v___x_3721_);
lean_closure_set(v___f_3724_, 4, v___x_3722_);
lean_closure_set(v___f_3724_, 5, v___x_3723_);
lean_closure_set(v___f_3724_, 6, v_body_3716_);
v___x_3725_ = 0;
v___x_3726_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_3714_, v_binderInfo_3717_, v_a_3720_, v___f_3724_, v___x_3725_, v_a_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
return v___x_3726_;
}
else
{
lean_dec_ref(v_body_3716_);
lean_dec(v_binderName_3714_);
lean_dec_ref(v_fvars_3706_);
lean_dec_ref(v_post_3702_);
lean_dec_ref(v_pre_3701_);
return v___x_3719_;
}
}
else
{
lean_object* v___x_3727_; lean_object* v___x_3728_; 
v___x_3727_ = lean_expr_instantiate_rev(v_e_3707_, v_fvars_3706_);
lean_dec_ref(v_e_3707_);
lean_inc_ref(v_post_3702_);
lean_inc_ref(v_pre_3701_);
v___x_3728_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3701_, v_post_3702_, v_usedLetOnly_3703_, v_skipConstInApp_3704_, v_skipInstances_3705_, v___x_3727_, v_a_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; uint8_t v___x_3730_; uint8_t v___x_3731_; uint8_t v___x_3732_; lean_object* v___x_3733_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref(v___x_3728_);
v___x_3730_ = 0;
v___x_3731_ = 1;
v___x_3732_ = 1;
v___x_3733_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3706_, v_a_3729_, v___x_3730_, v_usedLetOnly_3703_, v___x_3730_, v___x_3731_, v___x_3732_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
lean_dec_ref(v_fvars_3706_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3735_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
lean_dec_ref(v___x_3733_);
v___x_3735_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3701_, v_post_3702_, v_usedLetOnly_3703_, v_skipConstInApp_3704_, v_skipInstances_3705_, v_a_3734_, v_a_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
return v___x_3735_;
}
else
{
lean_dec_ref(v_post_3702_);
lean_dec_ref(v_pre_3701_);
return v___x_3733_;
}
}
else
{
lean_dec_ref(v_fvars_3706_);
lean_dec_ref(v_post_3702_);
lean_dec_ref(v_pre_3701_);
return v___x_3728_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_3736_, lean_object* v_pre_3737_, lean_object* v_post_3738_, uint8_t v_usedLetOnly_3739_, uint8_t v_skipConstInApp_3740_, uint8_t v_skipInstances_3741_, lean_object* v_body_3742_, lean_object* v_x_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3750_ = lean_array_push(v_fvars_3736_, v_x_3743_);
v___x_3751_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_3737_, v_post_3738_, v_usedLetOnly_3739_, v_skipConstInApp_3740_, v_skipInstances_3741_, v___x_3750_, v_body_3742_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_);
return v___x_3751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_3752_, lean_object* v_pre_3753_, lean_object* v_post_3754_, lean_object* v_usedLetOnly_3755_, lean_object* v_skipConstInApp_3756_, lean_object* v_skipInstances_3757_, lean_object* v_body_3758_, lean_object* v_x_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_){
_start:
{
uint8_t v_usedLetOnly_boxed_3766_; uint8_t v_skipConstInApp_boxed_3767_; uint8_t v_skipInstances_boxed_3768_; lean_object* v_res_3769_; 
v_usedLetOnly_boxed_3766_ = lean_unbox(v_usedLetOnly_3755_);
v_skipConstInApp_boxed_3767_ = lean_unbox(v_skipConstInApp_3756_);
v_skipInstances_boxed_3768_ = lean_unbox(v_skipInstances_3757_);
v_res_3769_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_3752_, v_pre_3753_, v_post_3754_, v_usedLetOnly_boxed_3766_, v_skipConstInApp_boxed_3767_, v_skipInstances_boxed_3768_, v_body_3758_, v_x_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_);
lean_dec(v___y_3764_);
lean_dec_ref(v___y_3763_);
lean_dec(v___y_3762_);
lean_dec_ref(v___y_3761_);
lean_dec(v___y_3760_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object* v_pre_3770_, lean_object* v_post_3771_, uint8_t v_usedLetOnly_3772_, uint8_t v_skipConstInApp_3773_, uint8_t v_skipInstances_3774_, lean_object* v_fvars_3775_, lean_object* v_e_3776_, lean_object* v_a_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_){
_start:
{
if (lean_obj_tag(v_e_3776_) == 8)
{
lean_object* v_declName_3783_; lean_object* v_type_3784_; lean_object* v_value_3785_; lean_object* v_body_3786_; uint8_t v_nondep_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
v_declName_3783_ = lean_ctor_get(v_e_3776_, 0);
lean_inc(v_declName_3783_);
v_type_3784_ = lean_ctor_get(v_e_3776_, 1);
lean_inc_ref(v_type_3784_);
v_value_3785_ = lean_ctor_get(v_e_3776_, 2);
lean_inc_ref(v_value_3785_);
v_body_3786_ = lean_ctor_get(v_e_3776_, 3);
lean_inc_ref(v_body_3786_);
v_nondep_3787_ = lean_ctor_get_uint8(v_e_3776_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3776_);
v___x_3788_ = lean_expr_instantiate_rev(v_type_3784_, v_fvars_3775_);
lean_dec_ref(v_type_3784_);
lean_inc_ref(v_post_3771_);
lean_inc_ref(v_pre_3770_);
v___x_3789_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3770_, v_post_3771_, v_usedLetOnly_3772_, v_skipConstInApp_3773_, v_skipInstances_3774_, v___x_3788_, v_a_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_object* v_a_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; 
v_a_3790_ = lean_ctor_get(v___x_3789_, 0);
lean_inc(v_a_3790_);
lean_dec_ref(v___x_3789_);
v___x_3791_ = lean_expr_instantiate_rev(v_value_3785_, v_fvars_3775_);
lean_dec_ref(v_value_3785_);
lean_inc_ref(v_post_3771_);
lean_inc_ref(v_pre_3770_);
v___x_3792_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3770_, v_post_3771_, v_usedLetOnly_3772_, v_skipConstInApp_3773_, v_skipInstances_3774_, v___x_3791_, v_a_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
if (lean_obj_tag(v___x_3792_) == 0)
{
lean_object* v_a_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___f_3797_; uint8_t v___x_3798_; lean_object* v___x_3799_; 
v_a_3793_ = lean_ctor_get(v___x_3792_, 0);
lean_inc(v_a_3793_);
lean_dec_ref(v___x_3792_);
v___x_3794_ = lean_box(v_usedLetOnly_3772_);
v___x_3795_ = lean_box(v_skipConstInApp_3773_);
v___x_3796_ = lean_box(v_skipInstances_3774_);
v___f_3797_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3797_, 0, v_fvars_3775_);
lean_closure_set(v___f_3797_, 1, v_pre_3770_);
lean_closure_set(v___f_3797_, 2, v_post_3771_);
lean_closure_set(v___f_3797_, 3, v___x_3794_);
lean_closure_set(v___f_3797_, 4, v___x_3795_);
lean_closure_set(v___f_3797_, 5, v___x_3796_);
lean_closure_set(v___f_3797_, 6, v_body_3786_);
v___x_3798_ = 0;
v___x_3799_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_declName_3783_, v_a_3790_, v_a_3793_, v___f_3797_, v_nondep_3787_, v___x_3798_, v_a_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
return v___x_3799_;
}
else
{
lean_dec(v_a_3790_);
lean_dec_ref(v_body_3786_);
lean_dec(v_declName_3783_);
lean_dec_ref(v_fvars_3775_);
lean_dec_ref(v_post_3771_);
lean_dec_ref(v_pre_3770_);
return v___x_3792_;
}
}
else
{
lean_dec_ref(v_body_3786_);
lean_dec_ref(v_value_3785_);
lean_dec(v_declName_3783_);
lean_dec_ref(v_fvars_3775_);
lean_dec_ref(v_post_3771_);
lean_dec_ref(v_pre_3770_);
return v___x_3789_;
}
}
else
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = lean_expr_instantiate_rev(v_e_3776_, v_fvars_3775_);
lean_dec_ref(v_e_3776_);
lean_inc_ref(v_post_3771_);
lean_inc_ref(v_pre_3770_);
v___x_3801_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3770_, v_post_3771_, v_usedLetOnly_3772_, v_skipConstInApp_3773_, v_skipInstances_3774_, v___x_3800_, v_a_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; uint8_t v___x_3803_; uint8_t v___x_3804_; lean_object* v___x_3805_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3802_);
lean_dec_ref(v___x_3801_);
v___x_3803_ = 0;
v___x_3804_ = 1;
v___x_3805_ = l_Lean_Meta_mkLetFVars(v_fvars_3775_, v_a_3802_, v_usedLetOnly_3772_, v___x_3803_, v___x_3804_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
lean_dec_ref(v_fvars_3775_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3807_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref(v___x_3805_);
v___x_3807_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3770_, v_post_3771_, v_usedLetOnly_3772_, v_skipConstInApp_3773_, v_skipInstances_3774_, v_a_3806_, v_a_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
return v___x_3807_;
}
else
{
lean_dec_ref(v_post_3771_);
lean_dec_ref(v_pre_3770_);
return v___x_3805_;
}
}
else
{
lean_dec_ref(v_fvars_3775_);
lean_dec_ref(v_post_3771_);
lean_dec_ref(v_pre_3770_);
return v___x_3801_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object* v_pre_3808_, lean_object* v_post_3809_, uint8_t v_usedLetOnly_3810_, uint8_t v_skipConstInApp_3811_, uint8_t v_skipInstances_3812_, size_t v_sz_3813_, size_t v_i_3814_, lean_object* v_bs_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_){
_start:
{
uint8_t v___x_3822_; 
v___x_3822_ = lean_usize_dec_lt(v_i_3814_, v_sz_3813_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; 
lean_dec_ref(v_post_3809_);
lean_dec_ref(v_pre_3808_);
v___x_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3823_, 0, v_bs_3815_);
return v___x_3823_;
}
else
{
lean_object* v_v_3824_; lean_object* v___x_3825_; 
v_v_3824_ = lean_array_uget_borrowed(v_bs_3815_, v_i_3814_);
lean_inc(v_v_3824_);
lean_inc_ref(v_post_3809_);
lean_inc_ref(v_pre_3808_);
v___x_3825_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3808_, v_post_3809_, v_usedLetOnly_3810_, v_skipConstInApp_3811_, v_skipInstances_3812_, v_v_3824_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_);
if (lean_obj_tag(v___x_3825_) == 0)
{
lean_object* v_a_3826_; lean_object* v___x_3827_; lean_object* v_bs_x27_3828_; size_t v___x_3829_; size_t v___x_3830_; lean_object* v___x_3831_; 
v_a_3826_ = lean_ctor_get(v___x_3825_, 0);
lean_inc(v_a_3826_);
lean_dec_ref(v___x_3825_);
v___x_3827_ = lean_unsigned_to_nat(0u);
v_bs_x27_3828_ = lean_array_uset(v_bs_3815_, v_i_3814_, v___x_3827_);
v___x_3829_ = ((size_t)1ULL);
v___x_3830_ = lean_usize_add(v_i_3814_, v___x_3829_);
v___x_3831_ = lean_array_uset(v_bs_x27_3828_, v_i_3814_, v_a_3826_);
v_i_3814_ = v___x_3830_;
v_bs_3815_ = v___x_3831_;
goto _start;
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
lean_dec_ref(v_bs_3815_);
lean_dec_ref(v_post_3809_);
lean_dec_ref(v_pre_3808_);
v_a_3833_ = lean_ctor_get(v___x_3825_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3825_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3835_ = v___x_3825_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3825_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3833_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_3841_, lean_object* v_post_3842_, uint8_t v_usedLetOnly_3843_, uint8_t v_skipConstInApp_3844_, uint8_t v_skipInstances_3845_, lean_object* v___x_3846_, lean_object* v___y_3847_, lean_object* v_b_3848_, lean_object* v_a_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v___x_3855_; 
v___x_3855_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3841_, v_post_3842_, v_usedLetOnly_3843_, v_skipConstInApp_3844_, v_skipInstances_3845_, v___x_3846_, v___y_3847_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
if (lean_obj_tag(v___x_3855_) == 0)
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3865_; 
v_a_3856_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3858_ = v___x_3855_;
v_isShared_3859_ = v_isSharedCheck_3865_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3855_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3865_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3863_; 
v___x_3860_ = lean_array_fset(v_b_3848_, v_a_3849_, v_a_3856_);
v___x_3861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
if (v_isShared_3859_ == 0)
{
lean_ctor_set(v___x_3858_, 0, v___x_3861_);
v___x_3863_ = v___x_3858_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v___x_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
lean_dec_ref(v_b_3848_);
v_a_3866_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3855_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3855_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_3874_, lean_object* v_post_3875_, lean_object* v_usedLetOnly_3876_, lean_object* v_skipConstInApp_3877_, lean_object* v_skipInstances_3878_, lean_object* v___x_3879_, lean_object* v___y_3880_, lean_object* v_b_3881_, lean_object* v_a_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_){
_start:
{
uint8_t v_usedLetOnly_boxed_3888_; uint8_t v_skipConstInApp_boxed_3889_; uint8_t v_skipInstances_boxed_3890_; lean_object* v_res_3891_; 
v_usedLetOnly_boxed_3888_ = lean_unbox(v_usedLetOnly_3876_);
v_skipConstInApp_boxed_3889_ = lean_unbox(v_skipConstInApp_3877_);
v_skipInstances_boxed_3890_ = lean_unbox(v_skipInstances_3878_);
v_res_3891_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_3874_, v_post_3875_, v_usedLetOnly_boxed_3888_, v_skipConstInApp_boxed_3889_, v_skipInstances_boxed_3890_, v___x_3879_, v___y_3880_, v_b_3881_, v_a_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_);
lean_dec(v___y_3886_);
lean_dec_ref(v___y_3885_);
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3883_);
lean_dec(v_a_3882_);
lean_dec(v___y_3880_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3892_, lean_object* v___x_3893_, lean_object* v_pre_3894_, lean_object* v_post_3895_, uint8_t v_usedLetOnly_3896_, uint8_t v_skipConstInApp_3897_, uint8_t v_skipInstances_3898_, lean_object* v_a_3899_, lean_object* v_b_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
lean_object* v___y_3908_; uint8_t v___x_3931_; 
v___x_3931_ = lean_nat_dec_lt(v_a_3899_, v_upperBound_3892_);
if (v___x_3931_ == 0)
{
lean_object* v___x_3932_; 
lean_dec(v_a_3899_);
lean_dec_ref(v_post_3895_);
lean_dec_ref(v_pre_3894_);
v___x_3932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3932_, 0, v_b_3900_);
return v___x_3932_;
}
else
{
lean_object* v___x_3933_; lean_object* v___x_3934_; uint8_t v___x_3935_; 
v___x_3933_ = lean_array_fget_borrowed(v_b_3900_, v_a_3899_);
v___x_3934_ = lean_array_get_size(v___x_3893_);
v___x_3935_ = lean_nat_dec_lt(v_a_3899_, v___x_3934_);
if (v___x_3935_ == 0)
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___f_3939_; 
lean_inc(v___x_3933_);
v___x_3936_ = lean_box(v_usedLetOnly_3896_);
v___x_3937_ = lean_box(v_skipConstInApp_3897_);
v___x_3938_ = lean_box(v_skipInstances_3898_);
lean_inc(v_a_3899_);
lean_inc(v___y_3901_);
lean_inc_ref(v_post_3895_);
lean_inc_ref(v_pre_3894_);
v___f_3939_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3939_, 0, v_pre_3894_);
lean_closure_set(v___f_3939_, 1, v_post_3895_);
lean_closure_set(v___f_3939_, 2, v___x_3936_);
lean_closure_set(v___f_3939_, 3, v___x_3937_);
lean_closure_set(v___f_3939_, 4, v___x_3938_);
lean_closure_set(v___f_3939_, 5, v___x_3933_);
lean_closure_set(v___f_3939_, 6, v___y_3901_);
lean_closure_set(v___f_3939_, 7, v_b_3900_);
lean_closure_set(v___f_3939_, 8, v_a_3899_);
v___y_3908_ = v___f_3939_;
goto v___jp_3907_;
}
else
{
lean_object* v___x_3940_; uint8_t v_isInstance_3941_; 
v___x_3940_ = lean_array_fget_borrowed(v___x_3893_, v_a_3899_);
v_isInstance_3941_ = lean_ctor_get_uint8(v___x_3940_, sizeof(void*)*1 + 4);
if (v_isInstance_3941_ == 0)
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___f_3945_; 
lean_inc(v___x_3933_);
v___x_3942_ = lean_box(v_usedLetOnly_3896_);
v___x_3943_ = lean_box(v_skipConstInApp_3897_);
v___x_3944_ = lean_box(v_skipInstances_3898_);
lean_inc(v_a_3899_);
lean_inc(v___y_3901_);
lean_inc_ref(v_post_3895_);
lean_inc_ref(v_pre_3894_);
v___f_3945_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3945_, 0, v_pre_3894_);
lean_closure_set(v___f_3945_, 1, v_post_3895_);
lean_closure_set(v___f_3945_, 2, v___x_3942_);
lean_closure_set(v___f_3945_, 3, v___x_3943_);
lean_closure_set(v___f_3945_, 4, v___x_3944_);
lean_closure_set(v___f_3945_, 5, v___x_3933_);
lean_closure_set(v___f_3945_, 6, v___y_3901_);
lean_closure_set(v___f_3945_, 7, v_b_3900_);
lean_closure_set(v___f_3945_, 8, v_a_3899_);
v___y_3908_ = v___f_3945_;
goto v___jp_3907_;
}
else
{
lean_object* v___x_3946_; lean_object* v___f_3947_; 
v___x_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3946_, 0, v_b_3900_);
v___f_3947_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3947_, 0, v___x_3946_);
v___y_3908_ = v___f_3947_;
goto v___jp_3907_;
}
}
}
v___jp_3907_:
{
lean_object* v___x_3909_; 
lean_inc(v___y_3905_);
lean_inc_ref(v___y_3904_);
lean_inc(v___y_3903_);
lean_inc_ref(v___y_3902_);
v___x_3909_ = lean_apply_5(v___y_3908_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_, lean_box(0));
if (lean_obj_tag(v___x_3909_) == 0)
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3922_; 
v_a_3910_ = lean_ctor_get(v___x_3909_, 0);
v_isSharedCheck_3922_ = !lean_is_exclusive(v___x_3909_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3912_ = v___x_3909_;
v_isShared_3913_ = v_isSharedCheck_3922_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3909_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3922_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
if (lean_obj_tag(v_a_3910_) == 0)
{
lean_object* v_a_3914_; lean_object* v___x_3916_; 
lean_dec(v_a_3899_);
lean_dec_ref(v_post_3895_);
lean_dec_ref(v_pre_3894_);
v_a_3914_ = lean_ctor_get(v_a_3910_, 0);
lean_inc(v_a_3914_);
lean_dec_ref(v_a_3910_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 0, v_a_3914_);
v___x_3916_ = v___x_3912_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_a_3914_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
else
{
lean_object* v_a_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
lean_del_object(v___x_3912_);
v_a_3918_ = lean_ctor_get(v_a_3910_, 0);
lean_inc(v_a_3918_);
lean_dec_ref(v_a_3910_);
v___x_3919_ = lean_unsigned_to_nat(1u);
v___x_3920_ = lean_nat_add(v_a_3899_, v___x_3919_);
lean_dec(v_a_3899_);
v_a_3899_ = v___x_3920_;
v_b_3900_ = v_a_3918_;
goto _start;
}
}
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
lean_dec(v_a_3899_);
lean_dec_ref(v_post_3895_);
lean_dec_ref(v_pre_3894_);
v_a_3923_ = lean_ctor_get(v___x_3909_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3909_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3909_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3909_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t v_skipInstances_3948_, lean_object* v_pre_3949_, lean_object* v_post_3950_, uint8_t v_usedLetOnly_3951_, uint8_t v_skipConstInApp_3952_, lean_object* v_x_3953_, lean_object* v_x_3954_, lean_object* v_x_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
lean_object* v_f_3963_; lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; lean_object* v___y_3967_; lean_object* v___y_3968_; 
if (lean_obj_tag(v_x_3953_) == 5)
{
lean_object* v_fn_4011_; lean_object* v_arg_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v_fn_4011_ = lean_ctor_get(v_x_3953_, 0);
lean_inc_ref(v_fn_4011_);
v_arg_4012_ = lean_ctor_get(v_x_3953_, 1);
lean_inc_ref(v_arg_4012_);
lean_dec_ref(v_x_3953_);
v___x_4013_ = lean_array_set(v_x_3954_, v_x_3955_, v_arg_4012_);
v___x_4014_ = lean_unsigned_to_nat(1u);
v___x_4015_ = lean_nat_sub(v_x_3955_, v___x_4014_);
lean_dec(v_x_3955_);
v_x_3953_ = v_fn_4011_;
v_x_3954_ = v___x_4013_;
v_x_3955_ = v___x_4015_;
goto _start;
}
else
{
lean_dec(v_x_3955_);
if (v_skipConstInApp_3952_ == 0)
{
goto v___jp_4008_;
}
else
{
uint8_t v___x_4017_; 
v___x_4017_ = l_Lean_Expr_isConst(v_x_3953_);
if (v___x_4017_ == 0)
{
goto v___jp_4008_;
}
else
{
v_f_3963_ = v_x_3953_;
v___y_3964_ = v___y_3956_;
v___y_3965_ = v___y_3957_;
v___y_3966_ = v___y_3958_;
v___y_3967_ = v___y_3959_;
v___y_3968_ = v___y_3960_;
goto v___jp_3962_;
}
}
}
v___jp_3962_:
{
if (v_skipInstances_3948_ == 0)
{
size_t v_sz_3969_; size_t v___x_3970_; lean_object* v___x_3971_; 
v_sz_3969_ = lean_array_size(v_x_3954_);
v___x_3970_ = ((size_t)0ULL);
lean_inc_ref(v_post_3950_);
lean_inc_ref(v_pre_3949_);
v___x_3971_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_3949_, v_post_3950_, v_usedLetOnly_3951_, v_skipConstInApp_3952_, v_skipInstances_3948_, v_sz_3969_, v___x_3970_, v_x_3954_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
if (lean_obj_tag(v___x_3971_) == 0)
{
lean_object* v_a_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v_a_3972_ = lean_ctor_get(v___x_3971_, 0);
lean_inc(v_a_3972_);
lean_dec_ref(v___x_3971_);
v___x_3973_ = l_Lean_mkAppN(v_f_3963_, v_a_3972_);
lean_dec(v_a_3972_);
v___x_3974_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3949_, v_post_3950_, v_usedLetOnly_3951_, v_skipConstInApp_3952_, v_skipInstances_3948_, v___x_3973_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
return v___x_3974_;
}
else
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3982_; 
lean_dec_ref(v_f_3963_);
lean_dec_ref(v_post_3950_);
lean_dec_ref(v_pre_3949_);
v_a_3975_ = lean_ctor_get(v___x_3971_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3971_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3977_ = v___x_3971_;
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v___x_3971_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_a_3975_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = lean_array_get_size(v_x_3954_);
lean_inc_ref(v_f_3963_);
v___x_3984_ = l_Lean_Meta_getFunInfoNArgs(v_f_3963_, v___x_3983_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; lean_object* v_paramInfo_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc(v_a_3985_);
lean_dec_ref(v___x_3984_);
v_paramInfo_3986_ = lean_ctor_get(v_a_3985_, 0);
lean_inc_ref(v_paramInfo_3986_);
lean_dec(v_a_3985_);
v___x_3987_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3950_);
lean_inc_ref(v_pre_3949_);
v___x_3988_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v___x_3983_, v_paramInfo_3986_, v_pre_3949_, v_post_3950_, v_usedLetOnly_3951_, v_skipConstInApp_3952_, v_skipInstances_3948_, v___x_3987_, v_x_3954_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
lean_dec_ref(v_paramInfo_3986_);
if (lean_obj_tag(v___x_3988_) == 0)
{
lean_object* v_a_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; 
v_a_3989_ = lean_ctor_get(v___x_3988_, 0);
lean_inc(v_a_3989_);
lean_dec_ref(v___x_3988_);
v___x_3990_ = l_Lean_mkAppN(v_f_3963_, v_a_3989_);
lean_dec(v_a_3989_);
v___x_3991_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3949_, v_post_3950_, v_usedLetOnly_3951_, v_skipConstInApp_3952_, v_skipInstances_3948_, v___x_3990_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
return v___x_3991_;
}
else
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_3999_; 
lean_dec_ref(v_f_3963_);
lean_dec_ref(v_post_3950_);
lean_dec_ref(v_pre_3949_);
v_a_3992_ = lean_ctor_get(v___x_3988_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v___x_3988_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3994_ = v___x_3988_;
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3988_);
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
else
{
lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4007_; 
lean_dec_ref(v_f_3963_);
lean_dec_ref(v_x_3954_);
lean_dec_ref(v_post_3950_);
lean_dec_ref(v_pre_3949_);
v_a_4000_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_4007_ == 0)
{
v___x_4002_ = v___x_3984_;
v_isShared_4003_ = v_isSharedCheck_4007_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v___x_3984_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4007_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4005_; 
if (v_isShared_4003_ == 0)
{
v___x_4005_ = v___x_4002_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v_a_4000_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
return v___x_4005_;
}
}
}
}
}
v___jp_4008_:
{
lean_object* v___x_4009_; 
lean_inc_ref(v_post_3950_);
lean_inc_ref(v_pre_3949_);
v___x_4009_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3949_, v_post_3950_, v_usedLetOnly_3951_, v_skipConstInApp_3952_, v_skipInstances_3948_, v_x_3953_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 0);
lean_inc(v_a_4010_);
lean_dec_ref(v___x_4009_);
v_f_3963_ = v_a_4010_;
v___y_3964_ = v___y_3956_;
v___y_3965_ = v___y_3957_;
v___y_3966_ = v___y_3958_;
v___y_3967_ = v___y_3959_;
v___y_3968_ = v___y_3960_;
goto v___jp_3962_;
}
else
{
lean_dec_ref(v_x_3954_);
lean_dec_ref(v_post_3950_);
lean_dec_ref(v_pre_3949_);
return v___x_4009_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object* v_pre_4018_, lean_object* v_e_4019_, lean_object* v_post_4020_, uint8_t v_usedLetOnly_4021_, uint8_t v_skipConstInApp_4022_, uint8_t v_skipInstances_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_){
_start:
{
lean_object* v___x_4030_; 
lean_inc_ref(v_pre_4018_);
lean_inc(v___y_4028_);
lean_inc_ref(v___y_4027_);
lean_inc(v___y_4026_);
lean_inc_ref(v___y_4025_);
lean_inc_ref(v_e_4019_);
v___x_4030_ = lean_apply_6(v_pre_4018_, v_e_4019_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, lean_box(0));
if (lean_obj_tag(v___x_4030_) == 0)
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4079_; 
v_a_4031_ = lean_ctor_get(v___x_4030_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4030_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4033_ = v___x_4030_;
v_isShared_4034_ = v_isSharedCheck_4079_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4030_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4079_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___y_4036_; 
switch(lean_obj_tag(v_a_4031_))
{
case 0:
{
lean_object* v_e_4071_; lean_object* v___x_4073_; 
lean_dec_ref(v_post_4020_);
lean_dec_ref(v_e_4019_);
lean_dec_ref(v_pre_4018_);
v_e_4071_ = lean_ctor_get(v_a_4031_, 0);
lean_inc_ref(v_e_4071_);
lean_dec_ref(v_a_4031_);
if (v_isShared_4034_ == 0)
{
lean_ctor_set(v___x_4033_, 0, v_e_4071_);
v___x_4073_ = v___x_4033_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_e_4071_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
case 1:
{
lean_object* v_e_4075_; lean_object* v___x_4076_; 
lean_del_object(v___x_4033_);
lean_dec_ref(v_e_4019_);
v_e_4075_ = lean_ctor_get(v_a_4031_, 0);
lean_inc_ref(v_e_4075_);
lean_dec_ref(v_a_4031_);
v___x_4076_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v_e_4075_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4076_;
}
default: 
{
lean_object* v_e_x3f_4077_; 
lean_del_object(v___x_4033_);
v_e_x3f_4077_ = lean_ctor_get(v_a_4031_, 0);
lean_inc(v_e_x3f_4077_);
lean_dec_ref(v_a_4031_);
if (lean_obj_tag(v_e_x3f_4077_) == 0)
{
v___y_4036_ = v_e_4019_;
goto v___jp_4035_;
}
else
{
lean_object* v_val_4078_; 
lean_dec_ref(v_e_4019_);
v_val_4078_ = lean_ctor_get(v_e_x3f_4077_, 0);
lean_inc(v_val_4078_);
lean_dec_ref(v_e_x3f_4077_);
v___y_4036_ = v_val_4078_;
goto v___jp_4035_;
}
}
}
v___jp_4035_:
{
switch(lean_obj_tag(v___y_4036_))
{
case 7:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_4038_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___x_4037_, v___y_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4038_;
}
case 6:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4039_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_4040_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___x_4039_, v___y_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4040_;
}
case 8:
{
lean_object* v___x_4041_; lean_object* v___x_4042_; 
v___x_4041_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_4042_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___x_4041_, v___y_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4042_;
}
case 5:
{
lean_object* v_dummy_4043_; lean_object* v_nargs_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v_dummy_4043_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4044_ = l_Lean_Expr_getAppNumArgs(v___y_4036_);
lean_inc(v_nargs_4044_);
v___x_4045_ = lean_mk_array(v_nargs_4044_, v_dummy_4043_);
v___x_4046_ = lean_unsigned_to_nat(1u);
v___x_4047_ = lean_nat_sub(v_nargs_4044_, v___x_4046_);
lean_dec(v_nargs_4044_);
v___x_4048_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_4023_, v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v___y_4036_, v___x_4045_, v___x_4047_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4048_;
}
case 10:
{
lean_object* v_data_4049_; lean_object* v_expr_4050_; lean_object* v___x_4051_; 
v_data_4049_ = lean_ctor_get(v___y_4036_, 0);
v_expr_4050_ = lean_ctor_get(v___y_4036_, 1);
lean_inc_ref(v_expr_4050_);
lean_inc_ref(v_post_4020_);
lean_inc_ref(v_pre_4018_);
v___x_4051_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v_expr_4050_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v_a_4052_; size_t v___x_4053_; size_t v___x_4054_; uint8_t v___x_4055_; 
v_a_4052_ = lean_ctor_get(v___x_4051_, 0);
lean_inc(v_a_4052_);
lean_dec_ref(v___x_4051_);
v___x_4053_ = lean_ptr_addr(v_expr_4050_);
v___x_4054_ = lean_ptr_addr(v_a_4052_);
v___x_4055_ = lean_usize_dec_eq(v___x_4053_, v___x_4054_);
if (v___x_4055_ == 0)
{
lean_object* v___x_4056_; lean_object* v___x_4057_; 
lean_inc(v_data_4049_);
lean_dec_ref(v___y_4036_);
v___x_4056_ = l_Lean_Expr_mdata___override(v_data_4049_, v_a_4052_);
v___x_4057_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___x_4056_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4057_;
}
else
{
lean_object* v___x_4058_; 
lean_dec(v_a_4052_);
v___x_4058_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___y_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4058_;
}
}
else
{
lean_dec_ref(v___y_4036_);
lean_dec_ref(v_post_4020_);
lean_dec_ref(v_pre_4018_);
return v___x_4051_;
}
}
case 11:
{
lean_object* v_typeName_4059_; lean_object* v_idx_4060_; lean_object* v_struct_4061_; lean_object* v___x_4062_; 
v_typeName_4059_ = lean_ctor_get(v___y_4036_, 0);
v_idx_4060_ = lean_ctor_get(v___y_4036_, 1);
v_struct_4061_ = lean_ctor_get(v___y_4036_, 2);
lean_inc_ref(v_struct_4061_);
lean_inc_ref(v_post_4020_);
lean_inc_ref(v_pre_4018_);
v___x_4062_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v_struct_4061_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; size_t v___x_4064_; size_t v___x_4065_; uint8_t v___x_4066_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref(v___x_4062_);
v___x_4064_ = lean_ptr_addr(v_struct_4061_);
v___x_4065_ = lean_ptr_addr(v_a_4063_);
v___x_4066_ = lean_usize_dec_eq(v___x_4064_, v___x_4065_);
if (v___x_4066_ == 0)
{
lean_object* v___x_4067_; lean_object* v___x_4068_; 
lean_inc(v_idx_4060_);
lean_inc(v_typeName_4059_);
lean_dec_ref(v___y_4036_);
v___x_4067_ = l_Lean_Expr_proj___override(v_typeName_4059_, v_idx_4060_, v_a_4063_);
v___x_4068_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___x_4067_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4068_;
}
else
{
lean_object* v___x_4069_; 
lean_dec(v_a_4063_);
v___x_4069_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___y_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4069_;
}
}
else
{
lean_dec_ref(v___y_4036_);
lean_dec_ref(v_post_4020_);
lean_dec_ref(v_pre_4018_);
return v___x_4062_;
}
}
default: 
{
lean_object* v___x_4070_; 
v___x_4070_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4018_, v_post_4020_, v_usedLetOnly_4021_, v_skipConstInApp_4022_, v_skipInstances_4023_, v___y_4036_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4070_;
}
}
}
}
}
else
{
lean_object* v_a_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4087_; 
lean_dec_ref(v_post_4020_);
lean_dec_ref(v_e_4019_);
lean_dec_ref(v_pre_4018_);
v_a_4080_ = lean_ctor_get(v___x_4030_, 0);
v_isSharedCheck_4087_ = !lean_is_exclusive(v___x_4030_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4082_ = v___x_4030_;
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_a_4080_);
lean_dec(v___x_4030_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4085_; 
if (v_isShared_4083_ == 0)
{
v___x_4085_ = v___x_4082_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_a_4080_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object* v_pre_4088_, lean_object* v_e_4089_, lean_object* v_post_4090_, lean_object* v_usedLetOnly_4091_, lean_object* v_skipConstInApp_4092_, lean_object* v_skipInstances_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
uint8_t v_usedLetOnly_boxed_4100_; uint8_t v_skipConstInApp_boxed_4101_; uint8_t v_skipInstances_boxed_4102_; lean_object* v_res_4103_; 
v_usedLetOnly_boxed_4100_ = lean_unbox(v_usedLetOnly_4091_);
v_skipConstInApp_boxed_4101_ = lean_unbox(v_skipConstInApp_4092_);
v_skipInstances_boxed_4102_ = lean_unbox(v_skipInstances_4093_);
v_res_4103_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(v_pre_4088_, v_e_4089_, v_post_4090_, v_usedLetOnly_boxed_4100_, v_skipConstInApp_boxed_4101_, v_skipInstances_boxed_4102_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec(v___y_4094_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object* v_pre_4104_, lean_object* v_post_4105_, uint8_t v_usedLetOnly_4106_, uint8_t v_skipConstInApp_4107_, uint8_t v_skipInstances_4108_, lean_object* v_e_4109_, lean_object* v_a_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_){
_start:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; 
lean_inc(v_a_4110_);
v___x_4116_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4116_, 0, lean_box(0));
lean_closure_set(v___x_4116_, 1, lean_box(0));
lean_closure_set(v___x_4116_, 2, v_a_4110_);
v___x_4117_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_4116_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4151_; 
v_a_4118_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4120_ = v___x_4117_;
v_isShared_4121_ = v_isSharedCheck_4151_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4117_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4151_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4122_; 
v___x_4122_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_4118_, v_e_4109_);
lean_dec(v_a_4118_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___f_4126_; lean_object* v___x_4127_; 
lean_del_object(v___x_4120_);
v___x_4123_ = lean_box(v_usedLetOnly_4106_);
v___x_4124_ = lean_box(v_skipConstInApp_4107_);
v___x_4125_ = lean_box(v_skipInstances_4108_);
lean_inc_ref(v_e_4109_);
v___f_4126_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed), 12, 6);
lean_closure_set(v___f_4126_, 0, v_pre_4104_);
lean_closure_set(v___f_4126_, 1, v_e_4109_);
lean_closure_set(v___f_4126_, 2, v_post_4105_);
lean_closure_set(v___f_4126_, 3, v___x_4123_);
lean_closure_set(v___f_4126_, 4, v___x_4124_);
lean_closure_set(v___f_4126_, 5, v___x_4125_);
v___x_4127_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v___f_4126_, v_a_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v_a_4128_; lean_object* v___f_4129_; lean_object* v___x_4130_; 
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
lean_inc_n(v_a_4128_, 2);
lean_dec_ref(v___x_4127_);
lean_inc(v_a_4110_);
v___f_4129_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4129_, 0, v_a_4110_);
lean_closure_set(v___f_4129_, 1, v_e_4109_);
lean_closure_set(v___f_4129_, 2, v_a_4128_);
v___x_4130_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_4129_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
if (lean_obj_tag(v___x_4130_) == 0)
{
lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4137_ == 0)
{
lean_object* v_unused_4138_; 
v_unused_4138_ = lean_ctor_get(v___x_4130_, 0);
lean_dec(v_unused_4138_);
v___x_4132_ = v___x_4130_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_dec(v___x_4130_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
lean_ctor_set(v___x_4132_, 0, v_a_4128_);
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4128_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
else
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4146_; 
lean_dec(v_a_4128_);
v_a_4139_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4141_ = v___x_4130_;
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4130_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_a_4139_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
lean_dec_ref(v_e_4109_);
return v___x_4127_;
}
}
else
{
lean_object* v_val_4147_; lean_object* v___x_4149_; 
lean_dec_ref(v_e_4109_);
lean_dec_ref(v_post_4105_);
lean_dec_ref(v_pre_4104_);
v_val_4147_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_val_4147_);
lean_dec_ref(v___x_4122_);
if (v_isShared_4121_ == 0)
{
lean_ctor_set(v___x_4120_, 0, v_val_4147_);
v___x_4149_ = v___x_4120_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_val_4147_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
else
{
lean_object* v_a_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4159_; 
lean_dec_ref(v_e_4109_);
lean_dec_ref(v_post_4105_);
lean_dec_ref(v_pre_4104_);
v_a_4152_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4159_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4159_ == 0)
{
v___x_4154_ = v___x_4117_;
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_a_4152_);
lean_dec(v___x_4117_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v___x_4157_; 
if (v_isShared_4155_ == 0)
{
v___x_4157_ = v___x_4154_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_a_4152_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object* v_fvars_4160_, lean_object* v_pre_4161_, lean_object* v_post_4162_, lean_object* v_usedLetOnly_4163_, lean_object* v_skipConstInApp_4164_, lean_object* v_skipInstances_4165_, lean_object* v_body_4166_, lean_object* v_x_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
uint8_t v_usedLetOnly_boxed_4174_; uint8_t v_skipConstInApp_boxed_4175_; uint8_t v_skipInstances_boxed_4176_; lean_object* v_res_4177_; 
v_usedLetOnly_boxed_4174_ = lean_unbox(v_usedLetOnly_4163_);
v_skipConstInApp_boxed_4175_ = lean_unbox(v_skipConstInApp_4164_);
v_skipInstances_boxed_4176_ = lean_unbox(v_skipInstances_4165_);
v_res_4177_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(v_fvars_4160_, v_pre_4161_, v_post_4162_, v_usedLetOnly_boxed_4174_, v_skipConstInApp_boxed_4175_, v_skipInstances_boxed_4176_, v_body_4166_, v_x_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
lean_dec(v___y_4168_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object* v_pre_4178_, lean_object* v_post_4179_, uint8_t v_usedLetOnly_4180_, uint8_t v_skipConstInApp_4181_, uint8_t v_skipInstances_4182_, lean_object* v_fvars_4183_, lean_object* v_e_4184_, lean_object* v_a_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_){
_start:
{
if (lean_obj_tag(v_e_4184_) == 7)
{
lean_object* v_binderName_4191_; lean_object* v_binderType_4192_; lean_object* v_body_4193_; uint8_t v_binderInfo_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v_binderName_4191_ = lean_ctor_get(v_e_4184_, 0);
lean_inc(v_binderName_4191_);
v_binderType_4192_ = lean_ctor_get(v_e_4184_, 1);
lean_inc_ref(v_binderType_4192_);
v_body_4193_ = lean_ctor_get(v_e_4184_, 2);
lean_inc_ref(v_body_4193_);
v_binderInfo_4194_ = lean_ctor_get_uint8(v_e_4184_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_4184_);
v___x_4195_ = lean_expr_instantiate_rev(v_binderType_4192_, v_fvars_4183_);
lean_dec_ref(v_binderType_4192_);
lean_inc_ref(v_post_4179_);
lean_inc_ref(v_pre_4178_);
v___x_4196_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4178_, v_post_4179_, v_usedLetOnly_4180_, v_skipConstInApp_4181_, v_skipInstances_4182_, v___x_4195_, v_a_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___f_4201_; uint8_t v___x_4202_; lean_object* v___x_4203_; 
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4197_);
lean_dec_ref(v___x_4196_);
v___x_4198_ = lean_box(v_usedLetOnly_4180_);
v___x_4199_ = lean_box(v_skipConstInApp_4181_);
v___x_4200_ = lean_box(v_skipInstances_4182_);
v___f_4201_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4201_, 0, v_fvars_4183_);
lean_closure_set(v___f_4201_, 1, v_pre_4178_);
lean_closure_set(v___f_4201_, 2, v_post_4179_);
lean_closure_set(v___f_4201_, 3, v___x_4198_);
lean_closure_set(v___f_4201_, 4, v___x_4199_);
lean_closure_set(v___f_4201_, 5, v___x_4200_);
lean_closure_set(v___f_4201_, 6, v_body_4193_);
v___x_4202_ = 0;
v___x_4203_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_4191_, v_binderInfo_4194_, v_a_4197_, v___f_4201_, v___x_4202_, v_a_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
return v___x_4203_;
}
else
{
lean_dec_ref(v_body_4193_);
lean_dec(v_binderName_4191_);
lean_dec_ref(v_fvars_4183_);
lean_dec_ref(v_post_4179_);
lean_dec_ref(v_pre_4178_);
return v___x_4196_;
}
}
else
{
lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4204_ = lean_expr_instantiate_rev(v_e_4184_, v_fvars_4183_);
lean_dec_ref(v_e_4184_);
lean_inc_ref(v_post_4179_);
lean_inc_ref(v_pre_4178_);
v___x_4205_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4178_, v_post_4179_, v_usedLetOnly_4180_, v_skipConstInApp_4181_, v_skipInstances_4182_, v___x_4204_, v_a_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_object* v_a_4206_; uint8_t v___x_4207_; uint8_t v___x_4208_; uint8_t v___x_4209_; lean_object* v___x_4210_; 
v_a_4206_ = lean_ctor_get(v___x_4205_, 0);
lean_inc(v_a_4206_);
lean_dec_ref(v___x_4205_);
v___x_4207_ = 0;
v___x_4208_ = 1;
v___x_4209_ = 1;
v___x_4210_ = l_Lean_Meta_mkForallFVars(v_fvars_4183_, v_a_4206_, v___x_4207_, v_usedLetOnly_4180_, v___x_4208_, v___x_4209_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
lean_dec_ref(v_fvars_4183_);
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v_a_4211_; lean_object* v___x_4212_; 
v_a_4211_ = lean_ctor_get(v___x_4210_, 0);
lean_inc(v_a_4211_);
lean_dec_ref(v___x_4210_);
v___x_4212_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4178_, v_post_4179_, v_usedLetOnly_4180_, v_skipConstInApp_4181_, v_skipInstances_4182_, v_a_4211_, v_a_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
return v___x_4212_;
}
else
{
lean_dec_ref(v_post_4179_);
lean_dec_ref(v_pre_4178_);
return v___x_4210_;
}
}
else
{
lean_dec_ref(v_fvars_4183_);
lean_dec_ref(v_post_4179_);
lean_dec_ref(v_pre_4178_);
return v___x_4205_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object* v_fvars_4213_, lean_object* v_pre_4214_, lean_object* v_post_4215_, uint8_t v_usedLetOnly_4216_, uint8_t v_skipConstInApp_4217_, uint8_t v_skipInstances_4218_, lean_object* v_body_4219_, lean_object* v_x_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4227_ = lean_array_push(v_fvars_4213_, v_x_4220_);
v___x_4228_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4214_, v_post_4215_, v_usedLetOnly_4216_, v_skipConstInApp_4217_, v_skipInstances_4218_, v___x_4227_, v_body_4219_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
return v___x_4228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_4229_, lean_object* v_post_4230_, lean_object* v_usedLetOnly_4231_, lean_object* v_skipConstInApp_4232_, lean_object* v_skipInstances_4233_, lean_object* v_e_4234_, lean_object* v_a_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_){
_start:
{
uint8_t v_usedLetOnly_boxed_4241_; uint8_t v_skipConstInApp_boxed_4242_; uint8_t v_skipInstances_boxed_4243_; lean_object* v_res_4244_; 
v_usedLetOnly_boxed_4241_ = lean_unbox(v_usedLetOnly_4231_);
v_skipConstInApp_boxed_4242_ = lean_unbox(v_skipConstInApp_4232_);
v_skipInstances_boxed_4243_ = lean_unbox(v_skipInstances_4233_);
v_res_4244_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4229_, v_post_4230_, v_usedLetOnly_boxed_4241_, v_skipConstInApp_boxed_4242_, v_skipInstances_boxed_4243_, v_e_4234_, v_a_4235_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_);
lean_dec(v___y_4239_);
lean_dec_ref(v___y_4238_);
lean_dec(v___y_4237_);
lean_dec_ref(v___y_4236_);
lean_dec(v_a_4235_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_4245_, lean_object* v_post_4246_, lean_object* v_usedLetOnly_4247_, lean_object* v_skipConstInApp_4248_, lean_object* v_skipInstances_4249_, lean_object* v_sz_4250_, lean_object* v_i_4251_, lean_object* v_bs_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
uint8_t v_usedLetOnly_boxed_4259_; uint8_t v_skipConstInApp_boxed_4260_; uint8_t v_skipInstances_boxed_4261_; size_t v_sz_boxed_4262_; size_t v_i_boxed_4263_; lean_object* v_res_4264_; 
v_usedLetOnly_boxed_4259_ = lean_unbox(v_usedLetOnly_4247_);
v_skipConstInApp_boxed_4260_ = lean_unbox(v_skipConstInApp_4248_);
v_skipInstances_boxed_4261_ = lean_unbox(v_skipInstances_4249_);
v_sz_boxed_4262_ = lean_unbox_usize(v_sz_4250_);
lean_dec(v_sz_4250_);
v_i_boxed_4263_ = lean_unbox_usize(v_i_4251_);
lean_dec(v_i_4251_);
v_res_4264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4245_, v_post_4246_, v_usedLetOnly_boxed_4259_, v_skipConstInApp_boxed_4260_, v_skipInstances_boxed_4261_, v_sz_boxed_4262_, v_i_boxed_4263_, v_bs_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v___y_4253_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object* v_pre_4265_, lean_object* v_post_4266_, lean_object* v_usedLetOnly_4267_, lean_object* v_skipConstInApp_4268_, lean_object* v_skipInstances_4269_, lean_object* v_e_4270_, lean_object* v_a_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
uint8_t v_usedLetOnly_boxed_4277_; uint8_t v_skipConstInApp_boxed_4278_; uint8_t v_skipInstances_boxed_4279_; lean_object* v_res_4280_; 
v_usedLetOnly_boxed_4277_ = lean_unbox(v_usedLetOnly_4267_);
v_skipConstInApp_boxed_4278_ = lean_unbox(v_skipConstInApp_4268_);
v_skipInstances_boxed_4279_ = lean_unbox(v_skipInstances_4269_);
v_res_4280_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4265_, v_post_4266_, v_usedLetOnly_boxed_4277_, v_skipConstInApp_boxed_4278_, v_skipInstances_boxed_4279_, v_e_4270_, v_a_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v_a_4271_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_pre_4281_, lean_object* v_post_4282_, lean_object* v_usedLetOnly_4283_, lean_object* v_skipConstInApp_4284_, lean_object* v_skipInstances_4285_, lean_object* v_fvars_4286_, lean_object* v_e_4287_, lean_object* v_a_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
uint8_t v_usedLetOnly_boxed_4294_; uint8_t v_skipConstInApp_boxed_4295_; uint8_t v_skipInstances_boxed_4296_; lean_object* v_res_4297_; 
v_usedLetOnly_boxed_4294_ = lean_unbox(v_usedLetOnly_4283_);
v_skipConstInApp_boxed_4295_ = lean_unbox(v_skipConstInApp_4284_);
v_skipInstances_boxed_4296_ = lean_unbox(v_skipInstances_4285_);
v_res_4297_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4281_, v_post_4282_, v_usedLetOnly_boxed_4294_, v_skipConstInApp_boxed_4295_, v_skipInstances_boxed_4296_, v_fvars_4286_, v_e_4287_, v_a_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec(v_a_4288_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_4298_, lean_object* v_post_4299_, lean_object* v_usedLetOnly_4300_, lean_object* v_skipConstInApp_4301_, lean_object* v_skipInstances_4302_, lean_object* v_fvars_4303_, lean_object* v_e_4304_, lean_object* v_a_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_){
_start:
{
uint8_t v_usedLetOnly_boxed_4311_; uint8_t v_skipConstInApp_boxed_4312_; uint8_t v_skipInstances_boxed_4313_; lean_object* v_res_4314_; 
v_usedLetOnly_boxed_4311_ = lean_unbox(v_usedLetOnly_4300_);
v_skipConstInApp_boxed_4312_ = lean_unbox(v_skipConstInApp_4301_);
v_skipInstances_boxed_4313_ = lean_unbox(v_skipInstances_4302_);
v_res_4314_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4298_, v_post_4299_, v_usedLetOnly_boxed_4311_, v_skipConstInApp_boxed_4312_, v_skipInstances_boxed_4313_, v_fvars_4303_, v_e_4304_, v_a_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_);
lean_dec(v___y_4309_);
lean_dec_ref(v___y_4308_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v_a_4305_);
return v_res_4314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_4315_, lean_object* v_post_4316_, lean_object* v_usedLetOnly_4317_, lean_object* v_skipConstInApp_4318_, lean_object* v_skipInstances_4319_, lean_object* v_fvars_4320_, lean_object* v_e_4321_, lean_object* v_a_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_){
_start:
{
uint8_t v_usedLetOnly_boxed_4328_; uint8_t v_skipConstInApp_boxed_4329_; uint8_t v_skipInstances_boxed_4330_; lean_object* v_res_4331_; 
v_usedLetOnly_boxed_4328_ = lean_unbox(v_usedLetOnly_4317_);
v_skipConstInApp_boxed_4329_ = lean_unbox(v_skipConstInApp_4318_);
v_skipInstances_boxed_4330_ = lean_unbox(v_skipInstances_4319_);
v_res_4331_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4315_, v_post_4316_, v_usedLetOnly_boxed_4328_, v_skipConstInApp_boxed_4329_, v_skipInstances_boxed_4330_, v_fvars_4320_, v_e_4321_, v_a_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
lean_dec(v___y_4326_);
lean_dec_ref(v___y_4325_);
lean_dec(v___y_4324_);
lean_dec_ref(v___y_4323_);
lean_dec(v_a_4322_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4332_, lean_object* v___x_4333_, lean_object* v_pre_4334_, lean_object* v_post_4335_, lean_object* v_usedLetOnly_4336_, lean_object* v_skipConstInApp_4337_, lean_object* v_skipInstances_4338_, lean_object* v_a_4339_, lean_object* v_b_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_){
_start:
{
uint8_t v_usedLetOnly_boxed_4347_; uint8_t v_skipConstInApp_boxed_4348_; uint8_t v_skipInstances_boxed_4349_; lean_object* v_res_4350_; 
v_usedLetOnly_boxed_4347_ = lean_unbox(v_usedLetOnly_4336_);
v_skipConstInApp_boxed_4348_ = lean_unbox(v_skipConstInApp_4337_);
v_skipInstances_boxed_4349_ = lean_unbox(v_skipInstances_4338_);
v_res_4350_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4332_, v___x_4333_, v_pre_4334_, v_post_4335_, v_usedLetOnly_boxed_4347_, v_skipConstInApp_boxed_4348_, v_skipInstances_boxed_4349_, v_a_4339_, v_b_4340_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_);
lean_dec(v___y_4345_);
lean_dec_ref(v___y_4344_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
lean_dec(v___y_4341_);
lean_dec_ref(v___x_4333_);
lean_dec(v_upperBound_4332_);
return v_res_4350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_skipInstances_4351_, lean_object* v_pre_4352_, lean_object* v_post_4353_, lean_object* v_usedLetOnly_4354_, lean_object* v_skipConstInApp_4355_, lean_object* v_x_4356_, lean_object* v_x_4357_, lean_object* v_x_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_){
_start:
{
uint8_t v_skipInstances_boxed_4365_; uint8_t v_usedLetOnly_boxed_4366_; uint8_t v_skipConstInApp_boxed_4367_; lean_object* v_res_4368_; 
v_skipInstances_boxed_4365_ = lean_unbox(v_skipInstances_4351_);
v_usedLetOnly_boxed_4366_ = lean_unbox(v_usedLetOnly_4354_);
v_skipConstInApp_boxed_4367_ = lean_unbox(v_skipConstInApp_4355_);
v_res_4368_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_boxed_4365_, v_pre_4352_, v_post_4353_, v_usedLetOnly_boxed_4366_, v_skipConstInApp_boxed_4367_, v_x_4356_, v_x_4357_, v_x_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
lean_dec(v___y_4363_);
lean_dec_ref(v___y_4362_);
lean_dec(v___y_4361_);
lean_dec_ref(v___y_4360_);
lean_dec(v___y_4359_);
return v_res_4368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object* v_input_4369_, lean_object* v_pre_4370_, lean_object* v_post_4371_, uint8_t v_usedLetOnly_4372_, uint8_t v_skipConstInApp_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_){
_start:
{
lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v_a_4381_; uint8_t v___x_4382_; lean_object* v___x_4383_; 
v___x_4379_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_4380_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4379_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
v_a_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc(v_a_4381_);
lean_dec_ref(v___x_4380_);
v___x_4382_ = 0;
v___x_4383_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4370_, v_post_4371_, v_usedLetOnly_4372_, v_skipConstInApp_4373_, v___x_4382_, v_input_4369_, v_a_4381_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4393_; 
v_a_4384_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4384_);
lean_dec_ref(v___x_4383_);
v___x_4385_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4385_, 0, lean_box(0));
lean_closure_set(v___x_4385_, 1, lean_box(0));
lean_closure_set(v___x_4385_, 2, v_a_4381_);
v___x_4386_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4385_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4393_ == 0)
{
lean_object* v_unused_4394_; 
v_unused_4394_ = lean_ctor_get(v___x_4386_, 0);
lean_dec(v_unused_4394_);
v___x_4388_ = v___x_4386_;
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
else
{
lean_dec(v___x_4386_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4391_; 
if (v_isShared_4389_ == 0)
{
lean_ctor_set(v___x_4388_, 0, v_a_4384_);
v___x_4391_ = v___x_4388_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_a_4384_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
else
{
lean_dec(v_a_4381_);
return v___x_4383_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object* v_input_4395_, lean_object* v_pre_4396_, lean_object* v_post_4397_, lean_object* v_usedLetOnly_4398_, lean_object* v_skipConstInApp_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_){
_start:
{
uint8_t v_usedLetOnly_boxed_4405_; uint8_t v_skipConstInApp_boxed_4406_; lean_object* v_res_4407_; 
v_usedLetOnly_boxed_4405_ = lean_unbox(v_usedLetOnly_4398_);
v_skipConstInApp_boxed_4406_ = lean_unbox(v_skipConstInApp_4399_);
v_res_4407_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_input_4395_, v_pre_4396_, v_post_4397_, v_usedLetOnly_boxed_4405_, v_skipConstInApp_boxed_4406_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_);
lean_dec(v___y_4403_);
lean_dec_ref(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec_ref(v___y_4400_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object* v_e_4409_, uint8_t v_zetaDelta_4410_, uint8_t v_zetaHave_4411_, uint8_t v_beta_4412_, lean_object* v_a_4413_, lean_object* v_a_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_){
_start:
{
lean_object* v_lctx_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___f_4422_; uint8_t v___x_4423_; 
v_lctx_4418_ = lean_ctor_get(v_a_4413_, 2);
lean_inc_ref(v_lctx_4418_);
v___x_4419_ = lean_local_ctx_num_indices(v_lctx_4418_);
v___x_4420_ = lean_box(v_zetaHave_4411_);
v___x_4421_ = lean_box(v_zetaDelta_4410_);
v___f_4422_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__0___boxed), 9, 3);
lean_closure_set(v___f_4422_, 0, v___x_4420_);
lean_closure_set(v___f_4422_, 1, v___x_4419_);
lean_closure_set(v___f_4422_, 2, v___x_4421_);
v___x_4423_ = 1;
if (v_beta_4412_ == 0)
{
lean_object* v___f_4424_; lean_object* v___f_4425_; lean_object* v___x_4426_; 
v___f_4424_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4425_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__2___boxed), 7, 1);
lean_closure_set(v___f_4425_, 0, v___f_4422_);
v___x_4426_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4409_, v___f_4425_, v___f_4424_, v___x_4423_, v_beta_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
return v___x_4426_;
}
else
{
lean_object* v___f_4427_; lean_object* v___f_4428_; uint8_t v___x_4429_; lean_object* v___x_4430_; 
v___f_4427_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4428_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__4___boxed), 7, 1);
lean_closure_set(v___f_4428_, 0, v___f_4422_);
v___x_4429_ = 0;
v___x_4430_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4409_, v___f_4428_, v___f_4427_, v___x_4423_, v___x_4429_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
return v___x_4430_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object* v_e_4431_, lean_object* v_zetaDelta_4432_, lean_object* v_zetaHave_4433_, lean_object* v_beta_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_, lean_object* v_a_4439_){
_start:
{
uint8_t v_zetaDelta_boxed_4440_; uint8_t v_zetaHave_boxed_4441_; uint8_t v_beta_boxed_4442_; lean_object* v_res_4443_; 
v_zetaDelta_boxed_4440_ = lean_unbox(v_zetaDelta_4432_);
v_zetaHave_boxed_4441_ = lean_unbox(v_zetaHave_4433_);
v_beta_boxed_4442_ = lean_unbox(v_beta_4434_);
v_res_4443_ = l_Lean_Meta_zetaReduce(v_e_4431_, v_zetaDelta_boxed_4440_, v_zetaHave_boxed_4441_, v_beta_boxed_4442_, v_a_4435_, v_a_4436_, v_a_4437_, v_a_4438_);
lean_dec(v_a_4438_);
lean_dec_ref(v_a_4437_);
lean_dec(v_a_4436_);
lean_dec_ref(v_a_4435_);
return v_res_4443_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_4444_, lean_object* v___x_4445_, lean_object* v_pre_4446_, lean_object* v_post_4447_, uint8_t v_usedLetOnly_4448_, uint8_t v_skipConstInApp_4449_, uint8_t v_skipInstances_4450_, lean_object* v___x_4451_, lean_object* v_inst_4452_, lean_object* v_R_4453_, lean_object* v_a_4454_, lean_object* v_b_4455_, lean_object* v_c_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v___x_4463_; 
v___x_4463_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4444_, v___x_4445_, v_pre_4446_, v_post_4447_, v_usedLetOnly_4448_, v_skipConstInApp_4449_, v_skipInstances_4450_, v_a_4454_, v_b_4455_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
return v___x_4463_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_4464_ = _args[0];
lean_object* v___x_4465_ = _args[1];
lean_object* v_pre_4466_ = _args[2];
lean_object* v_post_4467_ = _args[3];
lean_object* v_usedLetOnly_4468_ = _args[4];
lean_object* v_skipConstInApp_4469_ = _args[5];
lean_object* v_skipInstances_4470_ = _args[6];
lean_object* v___x_4471_ = _args[7];
lean_object* v_inst_4472_ = _args[8];
lean_object* v_R_4473_ = _args[9];
lean_object* v_a_4474_ = _args[10];
lean_object* v_b_4475_ = _args[11];
lean_object* v_c_4476_ = _args[12];
lean_object* v___y_4477_ = _args[13];
lean_object* v___y_4478_ = _args[14];
lean_object* v___y_4479_ = _args[15];
lean_object* v___y_4480_ = _args[16];
lean_object* v___y_4481_ = _args[17];
lean_object* v___y_4482_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_4483_; uint8_t v_skipConstInApp_boxed_4484_; uint8_t v_skipInstances_boxed_4485_; lean_object* v_res_4486_; 
v_usedLetOnly_boxed_4483_ = lean_unbox(v_usedLetOnly_4468_);
v_skipConstInApp_boxed_4484_ = lean_unbox(v_skipConstInApp_4469_);
v_skipInstances_boxed_4485_ = lean_unbox(v_skipInstances_4470_);
v_res_4486_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(v_upperBound_4464_, v___x_4465_, v_pre_4466_, v_post_4467_, v_usedLetOnly_boxed_4483_, v_skipConstInApp_boxed_4484_, v_skipInstances_boxed_4485_, v___x_4471_, v_inst_4472_, v_R_4473_, v_a_4474_, v_b_4475_, v_c_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
lean_dec(v___y_4481_);
lean_dec_ref(v___y_4480_);
lean_dec(v___y_4479_);
lean_dec_ref(v___y_4478_);
lean_dec(v___y_4477_);
lean_dec(v___x_4471_);
lean_dec_ref(v___x_4465_);
lean_dec(v_upperBound_4464_);
return v_res_4486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b1_4487_, lean_object* v_name_4488_, uint8_t v_bi_4489_, lean_object* v_type_4490_, lean_object* v_k_4491_, uint8_t v_kind_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
lean_object* v___x_4499_; 
v___x_4499_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_4488_, v_bi_4489_, v_type_4490_, v_k_4491_, v_kind_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
return v___x_4499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4500_, lean_object* v_name_4501_, lean_object* v_bi_4502_, lean_object* v_type_4503_, lean_object* v_k_4504_, lean_object* v_kind_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_){
_start:
{
uint8_t v_bi_boxed_4512_; uint8_t v_kind_boxed_4513_; lean_object* v_res_4514_; 
v_bi_boxed_4512_ = lean_unbox(v_bi_4502_);
v_kind_boxed_4513_ = lean_unbox(v_kind_4505_);
v_res_4514_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b1_4500_, v_name_4501_, v_bi_boxed_4512_, v_type_4503_, v_k_4504_, v_kind_boxed_4513_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_);
lean_dec(v___y_4510_);
lean_dec_ref(v___y_4509_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec(v___y_4506_);
return v_res_4514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_4515_, lean_object* v_name_4516_, lean_object* v_type_4517_, lean_object* v_val_4518_, lean_object* v_k_4519_, uint8_t v_nondep_4520_, uint8_t v_kind_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_){
_start:
{
lean_object* v___x_4528_; 
v___x_4528_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_4516_, v_type_4517_, v_val_4518_, v_k_4519_, v_nondep_4520_, v_kind_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
return v___x_4528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4529_, lean_object* v_name_4530_, lean_object* v_type_4531_, lean_object* v_val_4532_, lean_object* v_k_4533_, lean_object* v_nondep_4534_, lean_object* v_kind_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_){
_start:
{
uint8_t v_nondep_boxed_4542_; uint8_t v_kind_boxed_4543_; lean_object* v_res_4544_; 
v_nondep_boxed_4542_ = lean_unbox(v_nondep_4534_);
v_kind_boxed_4543_ = lean_unbox(v_kind_4535_);
v_res_4544_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(v_00_u03b1_4529_, v_name_4530_, v_type_4531_, v_val_4532_, v_k_4533_, v_nondep_boxed_4542_, v_kind_boxed_4543_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
lean_dec(v___y_4538_);
lean_dec_ref(v___y_4537_);
lean_dec(v___y_4536_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object* v_00_u03b1_4545_, lean_object* v_ref_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
lean_object* v___x_4552_; 
v___x_4552_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_4546_);
return v___x_4552_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4553_, lean_object* v_ref_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(v_00_u03b1_4553_, v_ref_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_);
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object* v_00_u03b1_4561_, lean_object* v_x_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_){
_start:
{
lean_object* v___x_4569_; 
v___x_4569_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_);
return v___x_4569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b1_4570_, lean_object* v_x_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(v_00_u03b1_4570_, v_x_4571_, v___y_4572_, v___y_4573_, v___y_4574_, v___y_4575_, v___y_4576_);
lean_dec(v___y_4576_);
lean_dec_ref(v___y_4575_);
lean_dec(v___y_4574_);
lean_dec_ref(v___y_4573_);
lean_dec(v___y_4572_);
return v_res_4578_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object* v_a_4579_, lean_object* v_as_4580_, size_t v_i_4581_, size_t v_stop_4582_){
_start:
{
uint8_t v___x_4583_; 
v___x_4583_ = lean_usize_dec_eq(v_i_4581_, v_stop_4582_);
if (v___x_4583_ == 0)
{
lean_object* v___x_4584_; uint8_t v___x_4585_; 
v___x_4584_ = lean_array_uget_borrowed(v_as_4580_, v_i_4581_);
v___x_4585_ = l_Lean_instBEqFVarId_beq(v_a_4579_, v___x_4584_);
if (v___x_4585_ == 0)
{
size_t v___x_4586_; size_t v___x_4587_; 
v___x_4586_ = ((size_t)1ULL);
v___x_4587_ = lean_usize_add(v_i_4581_, v___x_4586_);
v_i_4581_ = v___x_4587_;
goto _start;
}
else
{
return v___x_4585_;
}
}
else
{
uint8_t v___x_4589_; 
v___x_4589_ = 0;
return v___x_4589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object* v_a_4590_, lean_object* v_as_4591_, lean_object* v_i_4592_, lean_object* v_stop_4593_){
_start:
{
size_t v_i_boxed_4594_; size_t v_stop_boxed_4595_; uint8_t v_res_4596_; lean_object* v_r_4597_; 
v_i_boxed_4594_ = lean_unbox_usize(v_i_4592_);
lean_dec(v_i_4592_);
v_stop_boxed_4595_ = lean_unbox_usize(v_stop_4593_);
lean_dec(v_stop_4593_);
v_res_4596_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4590_, v_as_4591_, v_i_boxed_4594_, v_stop_boxed_4595_);
lean_dec_ref(v_as_4591_);
lean_dec(v_a_4590_);
v_r_4597_ = lean_box(v_res_4596_);
return v_r_4597_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object* v_as_4598_, lean_object* v_a_4599_){
_start:
{
lean_object* v___x_4600_; lean_object* v___x_4601_; uint8_t v___x_4602_; 
v___x_4600_ = lean_unsigned_to_nat(0u);
v___x_4601_ = lean_array_get_size(v_as_4598_);
v___x_4602_ = lean_nat_dec_lt(v___x_4600_, v___x_4601_);
if (v___x_4602_ == 0)
{
return v___x_4602_;
}
else
{
if (v___x_4602_ == 0)
{
return v___x_4602_;
}
else
{
size_t v___x_4603_; size_t v___x_4604_; uint8_t v___x_4605_; 
v___x_4603_ = ((size_t)0ULL);
v___x_4604_ = lean_usize_of_nat(v___x_4601_);
v___x_4605_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4599_, v_as_4598_, v___x_4603_, v___x_4604_);
return v___x_4605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object* v_as_4606_, lean_object* v_a_4607_){
_start:
{
uint8_t v_res_4608_; lean_object* v_r_4609_; 
v_res_4608_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_as_4606_, v_a_4607_);
lean_dec(v_a_4607_);
lean_dec_ref(v_as_4606_);
v_r_4609_ = lean_box(v_res_4608_);
return v_r_4609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object* v_fvars_4610_, lean_object* v_e_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_){
_start:
{
lean_object* v___x_4620_; 
v___x_4620_ = l_Lean_Expr_getAppFn(v_e_4611_);
if (lean_obj_tag(v___x_4620_) == 1)
{
lean_object* v_fvarId_4621_; uint8_t v___x_4622_; 
v_fvarId_4621_ = lean_ctor_get(v___x_4620_, 0);
lean_inc(v_fvarId_4621_);
lean_dec_ref(v___x_4620_);
v___x_4622_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_fvars_4610_, v_fvarId_4621_);
if (v___x_4622_ == 0)
{
lean_dec(v_fvarId_4621_);
lean_dec_ref(v_e_4611_);
goto v___jp_4617_;
}
else
{
uint8_t v___x_4623_; lean_object* v___x_4624_; 
v___x_4623_ = 0;
v___x_4624_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_4621_, v___x_4623_, v___y_4612_, v___y_4614_, v___y_4615_);
if (lean_obj_tag(v___x_4624_) == 0)
{
lean_object* v_a_4625_; 
v_a_4625_ = lean_ctor_get(v___x_4624_, 0);
lean_inc(v_a_4625_);
lean_dec_ref(v___x_4624_);
if (lean_obj_tag(v_a_4625_) == 1)
{
lean_object* v_val_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4649_; 
v_val_4626_ = lean_ctor_get(v_a_4625_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v_a_4625_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4628_ = v_a_4625_;
v_isShared_4629_ = v_isSharedCheck_4649_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_val_4626_);
lean_dec(v_a_4625_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4649_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4630_; lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4648_; 
v___x_4630_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_4626_, v___y_4613_);
v_a_4631_ = lean_ctor_get(v___x_4630_, 0);
v_isSharedCheck_4648_ = !lean_is_exclusive(v___x_4630_);
if (v_isSharedCheck_4648_ == 0)
{
v___x_4633_ = v___x_4630_;
v_isShared_4634_ = v_isSharedCheck_4648_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4630_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4648_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v_dummy_4635_; lean_object* v_nargs_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4643_; 
v_dummy_4635_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4636_ = l_Lean_Expr_getAppNumArgs(v_e_4611_);
lean_inc(v_nargs_4636_);
v___x_4637_ = lean_mk_array(v_nargs_4636_, v_dummy_4635_);
v___x_4638_ = lean_unsigned_to_nat(1u);
v___x_4639_ = lean_nat_sub(v_nargs_4636_, v___x_4638_);
lean_dec(v_nargs_4636_);
v___x_4640_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_4611_, v___x_4637_, v___x_4639_);
v___x_4641_ = l_Lean_Expr_beta(v_a_4631_, v___x_4640_);
if (v_isShared_4629_ == 0)
{
lean_ctor_set(v___x_4628_, 0, v___x_4641_);
v___x_4643_ = v___x_4628_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v___x_4641_);
v___x_4643_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
lean_object* v___x_4645_; 
if (v_isShared_4634_ == 0)
{
lean_ctor_set(v___x_4633_, 0, v___x_4643_);
v___x_4645_ = v___x_4633_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v___x_4643_);
v___x_4645_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
return v___x_4645_;
}
}
}
}
}
else
{
lean_dec(v_a_4625_);
lean_dec_ref(v_e_4611_);
goto v___jp_4617_;
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
lean_dec_ref(v_e_4611_);
v_a_4650_ = lean_ctor_get(v___x_4624_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4624_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4624_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4624_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v___x_4655_; 
if (v_isShared_4653_ == 0)
{
v___x_4655_ = v___x_4652_;
goto v_reusejp_4654_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4650_);
v___x_4655_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4654_;
}
v_reusejp_4654_:
{
return v___x_4655_;
}
}
}
}
}
else
{
lean_object* v___x_4658_; lean_object* v___x_4659_; 
lean_dec_ref(v___x_4620_);
lean_dec_ref(v_e_4611_);
v___x_4658_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
return v___x_4659_;
}
v___jp_4617_:
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4618_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4618_);
return v___x_4619_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object* v_fvars_4660_, lean_object* v_e_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_){
_start:
{
lean_object* v_res_4667_; 
v_res_4667_ = l_Lean_Meta_zetaDeltaFVars___lam__1(v_fvars_4660_, v_e_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_);
lean_dec(v___y_4665_);
lean_dec_ref(v___y_4664_);
lean_dec(v___y_4663_);
lean_dec_ref(v___y_4662_);
lean_dec_ref(v_fvars_4660_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object* v_e_4668_, lean_object* v_fvars_4669_, lean_object* v_a_4670_, lean_object* v_a_4671_, lean_object* v_a_4672_, lean_object* v_a_4673_){
_start:
{
lean_object* v___f_4675_; lean_object* v_pre_4676_; uint8_t v___x_4677_; lean_object* v___x_4678_; 
v___f_4675_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v_pre_4676_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaDeltaFVars___lam__1___boxed), 7, 1);
lean_closure_set(v_pre_4676_, 0, v_fvars_4669_);
v___x_4677_ = 0;
v___x_4678_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4668_, v_pre_4676_, v___f_4675_, v___x_4677_, v___x_4677_, v_a_4670_, v_a_4671_, v_a_4672_, v_a_4673_);
return v___x_4678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object* v_e_4679_, lean_object* v_fvars_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l_Lean_Meta_zetaDeltaFVars(v_e_4679_, v_fvars_4680_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_);
lean_dec(v_a_4684_);
lean_dec_ref(v_a_4683_);
lean_dec(v_a_4682_);
lean_dec_ref(v_a_4681_);
return v_res_4686_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4687_; 
v___x_4687_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4687_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4688_; lean_object* v___x_4689_; 
v___x_4688_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0);
v___x_4689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4688_);
return v___x_4689_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4690_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1);
v___x_4691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4691_, 0, v___x_4690_);
lean_ctor_set(v___x_4691_, 1, v___x_4690_);
return v___x_4691_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object* v_env_4692_, lean_object* v___y_4693_){
_start:
{
lean_object* v___x_4695_; lean_object* v_nextMacroScope_4696_; lean_object* v_ngen_4697_; lean_object* v_auxDeclNGen_4698_; lean_object* v_traceState_4699_; lean_object* v_messages_4700_; lean_object* v_infoState_4701_; lean_object* v_snapshotTasks_4702_; lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4713_; 
v___x_4695_ = lean_st_ref_take(v___y_4693_);
v_nextMacroScope_4696_ = lean_ctor_get(v___x_4695_, 1);
v_ngen_4697_ = lean_ctor_get(v___x_4695_, 2);
v_auxDeclNGen_4698_ = lean_ctor_get(v___x_4695_, 3);
v_traceState_4699_ = lean_ctor_get(v___x_4695_, 4);
v_messages_4700_ = lean_ctor_get(v___x_4695_, 6);
v_infoState_4701_ = lean_ctor_get(v___x_4695_, 7);
v_snapshotTasks_4702_ = lean_ctor_get(v___x_4695_, 8);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4713_ == 0)
{
lean_object* v_unused_4714_; lean_object* v_unused_4715_; 
v_unused_4714_ = lean_ctor_get(v___x_4695_, 5);
lean_dec(v_unused_4714_);
v_unused_4715_ = lean_ctor_get(v___x_4695_, 0);
lean_dec(v_unused_4715_);
v___x_4704_ = v___x_4695_;
v_isShared_4705_ = v_isSharedCheck_4713_;
goto v_resetjp_4703_;
}
else
{
lean_inc(v_snapshotTasks_4702_);
lean_inc(v_infoState_4701_);
lean_inc(v_messages_4700_);
lean_inc(v_traceState_4699_);
lean_inc(v_auxDeclNGen_4698_);
lean_inc(v_ngen_4697_);
lean_inc(v_nextMacroScope_4696_);
lean_dec(v___x_4695_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4713_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v___x_4706_; lean_object* v___x_4708_; 
v___x_4706_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_4705_ == 0)
{
lean_ctor_set(v___x_4704_, 5, v___x_4706_);
lean_ctor_set(v___x_4704_, 0, v_env_4692_);
v___x_4708_ = v___x_4704_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_env_4692_);
lean_ctor_set(v_reuseFailAlloc_4712_, 1, v_nextMacroScope_4696_);
lean_ctor_set(v_reuseFailAlloc_4712_, 2, v_ngen_4697_);
lean_ctor_set(v_reuseFailAlloc_4712_, 3, v_auxDeclNGen_4698_);
lean_ctor_set(v_reuseFailAlloc_4712_, 4, v_traceState_4699_);
lean_ctor_set(v_reuseFailAlloc_4712_, 5, v___x_4706_);
lean_ctor_set(v_reuseFailAlloc_4712_, 6, v_messages_4700_);
lean_ctor_set(v_reuseFailAlloc_4712_, 7, v_infoState_4701_);
lean_ctor_set(v_reuseFailAlloc_4712_, 8, v_snapshotTasks_4702_);
v___x_4708_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; 
v___x_4709_ = lean_st_ref_set(v___y_4693_, v___x_4708_);
v___x_4710_ = lean_box(0);
v___x_4711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4711_, 0, v___x_4710_);
return v___x_4711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object* v_env_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
lean_object* v_res_4719_; 
v_res_4719_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4716_, v___y_4717_);
lean_dec(v___y_4717_);
return v_res_4719_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object* v_env_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v___x_4724_; 
v___x_4724_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4720_, v___y_4722_);
return v___x_4724_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object* v_env_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_){
_start:
{
lean_object* v_res_4729_; 
v_res_4729_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(v_env_4725_, v___y_4726_, v___y_4727_);
lean_dec(v___y_4727_);
lean_dec_ref(v___y_4726_);
return v_res_4729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object* v_env_4730_, lean_object* v___x_4731_, uint8_t v___x_4732_, lean_object* v_e_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_){
_start:
{
if (lean_obj_tag(v_e_4733_) == 4)
{
lean_object* v_declName_4737_; lean_object* v_us_4738_; uint8_t v___x_4739_; uint8_t v___x_4740_; 
v_declName_4737_ = lean_ctor_get(v_e_4733_, 0);
v_us_4738_ = lean_ctor_get(v_e_4733_, 1);
v___x_4739_ = 1;
lean_inc(v_declName_4737_);
v___x_4740_ = l_Lean_Environment_contains(v_env_4730_, v_declName_4737_, v___x_4739_);
if (v___x_4740_ == 0)
{
lean_object* v___x_4741_; 
lean_inc(v_declName_4737_);
v___x_4741_ = l_Lean_Environment_find_x3f(v___x_4731_, v_declName_4737_, v___x_4732_);
if (lean_obj_tag(v___x_4741_) == 1)
{
lean_object* v_val_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4771_; 
v_val_4742_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4744_ = v___x_4741_;
v_isShared_4745_ = v_isSharedCheck_4771_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_val_4742_);
lean_dec(v___x_4741_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4771_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
uint8_t v___x_4746_; 
v___x_4746_ = l_Lean_ConstantInfo_hasValue(v_val_4742_, v___x_4739_);
if (v___x_4746_ == 0)
{
lean_object* v___x_4748_; 
lean_dec(v_val_4742_);
if (v_isShared_4745_ == 0)
{
lean_ctor_set_tag(v___x_4744_, 0);
lean_ctor_set(v___x_4744_, 0, v_e_4733_);
v___x_4748_ = v___x_4744_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_e_4733_);
v___x_4748_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
lean_object* v___x_4749_; 
v___x_4749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4748_);
return v___x_4749_;
}
}
else
{
lean_object* v___x_4751_; 
lean_inc(v_us_4738_);
lean_dec_ref(v_e_4733_);
v___x_4751_ = l_Lean_Core_instantiateValueLevelParams(v_val_4742_, v_us_4738_, v___x_4739_, v___y_4734_, v___y_4735_);
lean_dec(v_val_4742_);
if (lean_obj_tag(v___x_4751_) == 0)
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4762_; 
v_a_4752_ = lean_ctor_get(v___x_4751_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4751_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4754_ = v___x_4751_;
v_isShared_4755_ = v_isSharedCheck_4762_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4751_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4762_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4745_ == 0)
{
lean_ctor_set(v___x_4744_, 0, v_a_4752_);
v___x_4757_ = v___x_4744_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
lean_object* v___x_4759_; 
if (v_isShared_4755_ == 0)
{
lean_ctor_set(v___x_4754_, 0, v___x_4757_);
v___x_4759_ = v___x_4754_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v___x_4757_);
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
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4770_; 
lean_del_object(v___x_4744_);
v_a_4763_ = lean_ctor_get(v___x_4751_, 0);
v_isSharedCheck_4770_ = !lean_is_exclusive(v___x_4751_);
if (v_isSharedCheck_4770_ == 0)
{
v___x_4765_ = v___x_4751_;
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v___x_4751_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v_a_4763_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
return v___x_4768_;
}
}
}
}
}
}
else
{
lean_object* v___x_4772_; lean_object* v___x_4773_; 
lean_dec(v___x_4741_);
v___x_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4772_, 0, v_e_4733_);
v___x_4773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4772_);
return v___x_4773_;
}
}
else
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
lean_dec_ref(v___x_4731_);
v___x_4774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4774_, 0, v_e_4733_);
v___x_4775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4774_);
return v___x_4775_;
}
}
else
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
lean_dec_ref(v_e_4733_);
lean_dec_ref(v___x_4731_);
lean_dec_ref(v_env_4730_);
v___x_4776_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4777_, 0, v___x_4776_);
return v___x_4777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object* v_env_4778_, lean_object* v___x_4779_, lean_object* v___x_4780_, lean_object* v_e_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_){
_start:
{
uint8_t v___x_2152__boxed_4785_; lean_object* v_res_4786_; 
v___x_2152__boxed_4785_ = lean_unbox(v___x_4780_);
v_res_4786_ = l_Lean_Meta_unfoldDeclsFrom___lam__1(v_env_4778_, v___x_4779_, v___x_2152__boxed_4785_, v_e_4781_, v___y_4782_, v___y_4783_);
lean_dec(v___y_4783_);
lean_dec_ref(v___y_4782_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object* v_biggerEnv_4787_, lean_object* v_e_4788_, lean_object* v___f_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_){
_start:
{
lean_object* v___x_4793_; uint8_t v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v_env_4797_; lean_object* v___x_4798_; lean_object* v___f_4799_; lean_object* v___x_4800_; 
v___x_4793_ = lean_st_ref_get(v___y_4791_);
v___x_4794_ = 0;
v___x_4795_ = l_Lean_Environment_setExporting(v_biggerEnv_4787_, v___x_4794_);
lean_inc_ref(v___x_4795_);
v___x_4796_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v___x_4795_, v___y_4791_);
lean_dec_ref(v___x_4796_);
v_env_4797_ = lean_ctor_get(v___x_4793_, 0);
lean_inc_ref(v_env_4797_);
lean_dec(v___x_4793_);
v___x_4798_ = lean_box(v___x_4794_);
v___f_4799_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4799_, 0, v_env_4797_);
lean_closure_set(v___f_4799_, 1, v___x_4795_);
lean_closure_set(v___f_4799_, 2, v___x_4798_);
v___x_4800_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_4788_, v___f_4799_, v___f_4789_, v___y_4790_, v___y_4791_);
return v___x_4800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object* v_biggerEnv_4801_, lean_object* v_e_4802_, lean_object* v___f_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_){
_start:
{
lean_object* v_res_4807_; 
v_res_4807_ = l_Lean_Meta_unfoldDeclsFrom___lam__0(v_biggerEnv_4801_, v_e_4802_, v___f_4803_, v___y_4804_, v___y_4805_);
lean_dec(v___y_4805_);
lean_dec_ref(v___y_4804_);
return v_res_4807_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object* v_env_4808_, lean_object* v_x_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_){
_start:
{
lean_object* v___x_4813_; lean_object* v_env_4814_; lean_object* v_a_4816_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4813_ = lean_st_ref_get(v___y_4811_);
v_env_4814_ = lean_ctor_get(v___x_4813_, 0);
lean_inc_ref(v_env_4814_);
lean_dec(v___x_4813_);
v___x_4826_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4808_, v___y_4811_);
lean_dec_ref(v___x_4826_);
lean_inc(v___y_4811_);
lean_inc_ref(v___y_4810_);
v___x_4827_ = lean_apply_3(v_x_4809_, v___y_4810_, v___y_4811_, lean_box(0));
if (lean_obj_tag(v___x_4827_) == 0)
{
lean_object* v_a_4828_; lean_object* v___x_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
v_a_4828_ = lean_ctor_get(v___x_4827_, 0);
lean_inc(v_a_4828_);
lean_dec_ref(v___x_4827_);
v___x_4829_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4814_, v___y_4811_);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4836_ == 0)
{
lean_object* v_unused_4837_; 
v_unused_4837_ = lean_ctor_get(v___x_4829_, 0);
lean_dec(v_unused_4837_);
v___x_4831_ = v___x_4829_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_dec(v___x_4829_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
lean_ctor_set(v___x_4831_, 0, v_a_4828_);
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4828_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
else
{
lean_object* v_a_4838_; 
v_a_4838_ = lean_ctor_get(v___x_4827_, 0);
lean_inc(v_a_4838_);
lean_dec_ref(v___x_4827_);
v_a_4816_ = v_a_4838_;
goto v___jp_4815_;
}
v___jp_4815_:
{
lean_object* v___x_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4824_; 
v___x_4817_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4814_, v___y_4811_);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4817_);
if (v_isSharedCheck_4824_ == 0)
{
lean_object* v_unused_4825_; 
v_unused_4825_ = lean_ctor_get(v___x_4817_, 0);
lean_dec(v_unused_4825_);
v___x_4819_ = v___x_4817_;
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
else
{
lean_dec(v___x_4817_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4822_; 
if (v_isShared_4820_ == 0)
{
lean_ctor_set_tag(v___x_4819_, 1);
lean_ctor_set(v___x_4819_, 0, v_a_4816_);
v___x_4822_ = v___x_4819_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_a_4816_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object* v_env_4839_, lean_object* v_x_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_4839_, v_x_4840_, v___y_4841_, v___y_4842_);
lean_dec(v___y_4842_);
lean_dec_ref(v___y_4841_);
return v_res_4844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object* v_biggerEnv_4845_, lean_object* v_e_4846_, lean_object* v_a_4847_, lean_object* v_a_4848_){
_start:
{
lean_object* v___x_4850_; lean_object* v_env_4851_; lean_object* v___f_4852_; lean_object* v___f_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4850_ = lean_st_ref_get(v_a_4848_);
v_env_4851_ = lean_ctor_get(v___x_4850_, 0);
lean_inc_ref(v_env_4851_);
lean_dec(v___x_4850_);
v___f_4852_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_4853_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed), 6, 3);
lean_closure_set(v___f_4853_, 0, v_biggerEnv_4845_);
lean_closure_set(v___f_4853_, 1, v_e_4846_);
lean_closure_set(v___f_4853_, 2, v___f_4852_);
v___x_4854_ = l_Lean_Environment_unlockAsync(v_env_4851_);
v___x_4855_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v___x_4854_, v___f_4853_, v_a_4847_, v_a_4848_);
return v___x_4855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object* v_biggerEnv_4856_, lean_object* v_e_4857_, lean_object* v_a_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_){
_start:
{
lean_object* v_res_4861_; 
v_res_4861_ = l_Lean_Meta_unfoldDeclsFrom(v_biggerEnv_4856_, v_e_4857_, v_a_4858_, v_a_4859_);
lean_dec(v_a_4859_);
lean_dec_ref(v_a_4858_);
return v_res_4861_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object* v_00_u03b1_4862_, lean_object* v_env_4863_, lean_object* v_x_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_){
_start:
{
lean_object* v___x_4868_; 
v___x_4868_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_4863_, v_x_4864_, v___y_4865_, v___y_4866_);
return v___x_4868_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object* v_00_u03b1_4869_, lean_object* v_env_4870_, lean_object* v_x_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_){
_start:
{
lean_object* v_res_4875_; 
v_res_4875_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(v_00_u03b1_4869_, v_env_4870_, v_x_4871_, v___y_4872_, v___y_4873_);
lean_dec(v___y_4873_);
lean_dec_ref(v___y_4872_);
return v_res_4875_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object* v_af_4876_, lean_object* v_axs_4877_, lean_object* v_numSectionVars_4878_, lean_object* v_as_4879_, size_t v_i_4880_, size_t v_stop_4881_){
_start:
{
uint8_t v___x_4882_; 
v___x_4882_ = lean_usize_dec_eq(v_i_4880_, v_stop_4881_);
if (v___x_4882_ == 0)
{
uint8_t v___x_4883_; uint8_t v___y_4885_; lean_object* v___x_4889_; lean_object* v___x_4890_; uint8_t v___x_4891_; 
v___x_4883_ = 1;
v___x_4889_ = lean_array_uget_borrowed(v_as_4879_, v_i_4880_);
v___x_4890_ = l_Lean_Expr_constName_x21(v_af_4876_);
v___x_4891_ = lean_name_eq(v___x_4890_, v___x_4889_);
lean_dec(v___x_4890_);
if (v___x_4891_ == 0)
{
v___y_4885_ = v___x_4891_;
goto v___jp_4884_;
}
else
{
lean_object* v___x_4892_; uint8_t v___x_4893_; 
v___x_4892_ = lean_array_get_size(v_axs_4877_);
v___x_4893_ = lean_nat_dec_le(v___x_4892_, v_numSectionVars_4878_);
v___y_4885_ = v___x_4893_;
goto v___jp_4884_;
}
v___jp_4884_:
{
if (v___y_4885_ == 0)
{
size_t v___x_4886_; size_t v___x_4887_; 
v___x_4886_ = ((size_t)1ULL);
v___x_4887_ = lean_usize_add(v_i_4880_, v___x_4886_);
v_i_4880_ = v___x_4887_;
goto _start;
}
else
{
return v___x_4883_;
}
}
}
else
{
uint8_t v___x_4894_; 
v___x_4894_ = 0;
return v___x_4894_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object* v_af_4895_, lean_object* v_axs_4896_, lean_object* v_numSectionVars_4897_, lean_object* v_as_4898_, lean_object* v_i_4899_, lean_object* v_stop_4900_){
_start:
{
size_t v_i_boxed_4901_; size_t v_stop_boxed_4902_; uint8_t v_res_4903_; lean_object* v_r_4904_; 
v_i_boxed_4901_ = lean_unbox_usize(v_i_4899_);
lean_dec(v_i_4899_);
v_stop_boxed_4902_ = lean_unbox_usize(v_stop_4900_);
lean_dec(v_stop_4900_);
v_res_4903_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_af_4895_, v_axs_4896_, v_numSectionVars_4897_, v_as_4898_, v_i_boxed_4901_, v_stop_boxed_4902_);
lean_dec_ref(v_as_4898_);
lean_dec(v_numSectionVars_4897_);
lean_dec_ref(v_axs_4896_);
lean_dec_ref(v_af_4895_);
v_r_4904_ = lean_box(v_res_4903_);
return v_r_4904_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object* v_fnNames_4905_, lean_object* v_numSectionVars_4906_, lean_object* v_x_4907_, lean_object* v_x_4908_, lean_object* v_x_4909_){
_start:
{
if (lean_obj_tag(v_x_4907_) == 5)
{
lean_object* v_fn_4910_; lean_object* v_arg_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; 
v_fn_4910_ = lean_ctor_get(v_x_4907_, 0);
lean_inc_ref(v_fn_4910_);
v_arg_4911_ = lean_ctor_get(v_x_4907_, 1);
lean_inc_ref(v_arg_4911_);
lean_dec_ref(v_x_4907_);
v___x_4912_ = lean_array_set(v_x_4908_, v_x_4909_, v_arg_4911_);
v___x_4913_ = lean_unsigned_to_nat(1u);
v___x_4914_ = lean_nat_sub(v_x_4909_, v___x_4913_);
lean_dec(v_x_4909_);
v_x_4907_ = v_fn_4910_;
v_x_4908_ = v___x_4912_;
v_x_4909_ = v___x_4914_;
goto _start;
}
else
{
uint8_t v___x_4916_; 
lean_dec(v_x_4909_);
v___x_4916_ = l_Lean_Expr_isConst(v_x_4907_);
if (v___x_4916_ == 0)
{
lean_dec_ref(v_x_4908_);
lean_dec_ref(v_x_4907_);
return v___x_4916_;
}
else
{
lean_object* v___x_4917_; lean_object* v___x_4918_; uint8_t v___x_4919_; 
v___x_4917_ = lean_unsigned_to_nat(0u);
v___x_4918_ = lean_array_get_size(v_fnNames_4905_);
v___x_4919_ = lean_nat_dec_lt(v___x_4917_, v___x_4918_);
if (v___x_4919_ == 0)
{
lean_dec_ref(v_x_4908_);
lean_dec_ref(v_x_4907_);
return v___x_4919_;
}
else
{
if (v___x_4919_ == 0)
{
lean_dec_ref(v_x_4908_);
lean_dec_ref(v_x_4907_);
return v___x_4919_;
}
else
{
size_t v___x_4920_; size_t v___x_4921_; uint8_t v___x_4922_; 
v___x_4920_ = ((size_t)0ULL);
v___x_4921_ = lean_usize_of_nat(v___x_4918_);
v___x_4922_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_4907_, v_x_4908_, v_numSectionVars_4906_, v_fnNames_4905_, v___x_4920_, v___x_4921_);
lean_dec_ref(v_x_4908_);
lean_dec_ref(v_x_4907_);
return v___x_4922_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object* v_fnNames_4923_, lean_object* v_numSectionVars_4924_, lean_object* v_x_4925_, lean_object* v_x_4926_, lean_object* v_x_4927_){
_start:
{
uint8_t v_res_4928_; lean_object* v_r_4929_; 
v_res_4928_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_4923_, v_numSectionVars_4924_, v_x_4925_, v_x_4926_, v_x_4927_);
lean_dec(v_numSectionVars_4924_);
lean_dec_ref(v_fnNames_4923_);
v_r_4929_ = lean_box(v_res_4928_);
return v_r_4929_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object* v_numSectionVars_4930_, lean_object* v_fnNames_4931_, lean_object* v_x_4932_, lean_object* v_x_4933_, lean_object* v_x_4934_){
_start:
{
if (lean_obj_tag(v_x_4932_) == 5)
{
lean_object* v_fn_4935_; lean_object* v_arg_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; uint8_t v___x_4940_; 
v_fn_4935_ = lean_ctor_get(v_x_4932_, 0);
lean_inc_ref(v_fn_4935_);
v_arg_4936_ = lean_ctor_get(v_x_4932_, 1);
lean_inc_ref(v_arg_4936_);
lean_dec_ref(v_x_4932_);
v___x_4937_ = lean_array_set(v_x_4933_, v_x_4934_, v_arg_4936_);
v___x_4938_ = lean_unsigned_to_nat(1u);
v___x_4939_ = lean_nat_sub(v_x_4934_, v___x_4938_);
v___x_4940_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_4931_, v_numSectionVars_4930_, v_fn_4935_, v___x_4937_, v___x_4939_);
return v___x_4940_;
}
else
{
uint8_t v___x_4941_; 
v___x_4941_ = l_Lean_Expr_isConst(v_x_4932_);
if (v___x_4941_ == 0)
{
lean_dec_ref(v_x_4933_);
lean_dec_ref(v_x_4932_);
return v___x_4941_;
}
else
{
lean_object* v___x_4942_; lean_object* v___x_4943_; uint8_t v___x_4944_; 
v___x_4942_ = lean_unsigned_to_nat(0u);
v___x_4943_ = lean_array_get_size(v_fnNames_4931_);
v___x_4944_ = lean_nat_dec_lt(v___x_4942_, v___x_4943_);
if (v___x_4944_ == 0)
{
lean_dec_ref(v_x_4933_);
lean_dec_ref(v_x_4932_);
return v___x_4944_;
}
else
{
if (v___x_4944_ == 0)
{
lean_dec_ref(v_x_4933_);
lean_dec_ref(v_x_4932_);
return v___x_4944_;
}
else
{
size_t v___x_4945_; size_t v___x_4946_; uint8_t v___x_4947_; 
v___x_4945_ = ((size_t)0ULL);
v___x_4946_ = lean_usize_of_nat(v___x_4943_);
v___x_4947_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_4932_, v_x_4933_, v_numSectionVars_4930_, v_fnNames_4931_, v___x_4945_, v___x_4946_);
lean_dec_ref(v_x_4933_);
lean_dec_ref(v_x_4932_);
return v___x_4947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object* v_numSectionVars_4948_, lean_object* v_fnNames_4949_, lean_object* v_x_4950_, lean_object* v_x_4951_, lean_object* v_x_4952_){
_start:
{
uint8_t v_res_4953_; lean_object* v_r_4954_; 
v_res_4953_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_4948_, v_fnNames_4949_, v_x_4950_, v_x_4951_, v_x_4952_);
lean_dec(v_x_4952_);
lean_dec_ref(v_fnNames_4949_);
lean_dec(v_numSectionVars_4948_);
v_r_4954_ = lean_box(v_res_4953_);
return v_r_4954_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object* v_fnNames_4955_, lean_object* v_numSectionVars_4956_, lean_object* v_a_4957_){
_start:
{
lean_object* v_dummy_4958_; lean_object* v_nargs_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; uint8_t v___x_4963_; 
v_dummy_4958_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4959_ = l_Lean_Expr_getAppNumArgs(v_a_4957_);
lean_inc(v_nargs_4959_);
v___x_4960_ = lean_mk_array(v_nargs_4959_, v_dummy_4958_);
v___x_4961_ = lean_unsigned_to_nat(1u);
v___x_4962_ = lean_nat_sub(v_nargs_4959_, v___x_4961_);
lean_dec(v_nargs_4959_);
v___x_4963_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_4956_, v_fnNames_4955_, v_a_4957_, v___x_4960_, v___x_4962_);
lean_dec(v___x_4962_);
return v___x_4963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object* v_fnNames_4964_, lean_object* v_numSectionVars_4965_, lean_object* v_a_4966_){
_start:
{
uint8_t v_res_4967_; lean_object* v_r_4968_; 
v_res_4967_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_4964_, v_numSectionVars_4965_, v_a_4966_);
lean_dec(v_numSectionVars_4965_);
lean_dec_ref(v_fnNames_4964_);
v_r_4968_ = lean_box(v_res_4967_);
return v_r_4968_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object* v_fnNames_4969_, lean_object* v_numSectionVars_4970_, lean_object* v_as_4971_, size_t v_i_4972_, size_t v_stop_4973_){
_start:
{
uint8_t v___x_4974_; 
v___x_4974_ = lean_usize_dec_eq(v_i_4972_, v_stop_4973_);
if (v___x_4974_ == 0)
{
lean_object* v___x_4975_; uint8_t v___x_4976_; 
v___x_4975_ = lean_array_uget_borrowed(v_as_4971_, v_i_4972_);
lean_inc(v___x_4975_);
v___x_4976_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_4969_, v_numSectionVars_4970_, v___x_4975_);
if (v___x_4976_ == 0)
{
size_t v___x_4977_; size_t v___x_4978_; 
v___x_4977_ = ((size_t)1ULL);
v___x_4978_ = lean_usize_add(v_i_4972_, v___x_4977_);
v_i_4972_ = v___x_4978_;
goto _start;
}
else
{
return v___x_4976_;
}
}
else
{
uint8_t v___x_4980_; 
v___x_4980_ = 0;
return v___x_4980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object* v_fnNames_4981_, lean_object* v_numSectionVars_4982_, lean_object* v_as_4983_, lean_object* v_i_4984_, lean_object* v_stop_4985_){
_start:
{
size_t v_i_boxed_4986_; size_t v_stop_boxed_4987_; uint8_t v_res_4988_; lean_object* v_r_4989_; 
v_i_boxed_4986_ = lean_unbox_usize(v_i_4984_);
lean_dec(v_i_4984_);
v_stop_boxed_4987_ = lean_unbox_usize(v_stop_4985_);
lean_dec(v_stop_4985_);
v_res_4988_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_4981_, v_numSectionVars_4982_, v_as_4983_, v_i_boxed_4986_, v_stop_boxed_4987_);
lean_dec_ref(v_as_4983_);
lean_dec(v_numSectionVars_4982_);
lean_dec_ref(v_fnNames_4981_);
v_r_4989_ = lean_box(v_res_4988_);
return v_r_4989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object* v_fnNames_4990_, lean_object* v_numSectionVars_4991_, lean_object* v___x_4992_, lean_object* v_x_4993_, lean_object* v_x_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_){
_start:
{
if (lean_obj_tag(v_x_4993_) == 5)
{
lean_object* v_fn_5001_; lean_object* v_arg_5002_; lean_object* v___x_5003_; 
v_fn_5001_ = lean_ctor_get(v_x_4993_, 0);
lean_inc_ref(v_fn_5001_);
v_arg_5002_ = lean_ctor_get(v_x_4993_, 1);
lean_inc_ref(v_arg_5002_);
lean_dec_ref(v_x_4993_);
v___x_5003_ = lean_array_push(v_x_4994_, v_arg_5002_);
v_x_4993_ = v_fn_5001_;
v_x_4994_ = v___x_5003_;
goto _start;
}
else
{
uint8_t v___x_5005_; 
v___x_5005_ = l_Lean_Expr_isConst(v_x_4993_);
if (v___x_5005_ == 0)
{
lean_dec_ref(v_x_4994_);
lean_dec_ref(v_x_4993_);
lean_dec_ref(v___x_4992_);
goto v___jp_4998_;
}
else
{
lean_object* v___x_5006_; lean_object* v___x_5007_; uint8_t v___x_5008_; 
v___x_5006_ = lean_unsigned_to_nat(0u);
v___x_5007_ = lean_array_get_size(v_x_4994_);
v___x_5008_ = lean_nat_dec_lt(v___x_5006_, v___x_5007_);
if (v___x_5008_ == 0)
{
lean_dec_ref(v_x_4994_);
lean_dec_ref(v_x_4993_);
lean_dec_ref(v___x_4992_);
goto v___jp_4998_;
}
else
{
if (v___x_5008_ == 0)
{
lean_dec_ref(v_x_4994_);
lean_dec_ref(v_x_4993_);
lean_dec_ref(v___x_4992_);
goto v___jp_4998_;
}
else
{
size_t v___x_5009_; size_t v___x_5010_; uint8_t v___x_5011_; 
v___x_5009_ = ((size_t)0ULL);
v___x_5010_ = lean_usize_of_nat(v___x_5007_);
v___x_5011_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_4990_, v_numSectionVars_4991_, v_x_4994_, v___x_5009_, v___x_5010_);
if (v___x_5011_ == 0)
{
lean_dec_ref(v_x_4994_);
lean_dec_ref(v_x_4993_);
lean_dec_ref(v___x_4992_);
goto v___jp_4998_;
}
else
{
lean_object* v___x_5012_; uint8_t v___x_5013_; lean_object* v___x_5014_; 
v___x_5012_ = l_Lean_Expr_constName_x21(v_x_4993_);
v___x_5013_ = 0;
v___x_5014_ = l_Lean_Environment_find_x3f(v___x_4992_, v___x_5012_, v___x_5013_);
if (lean_obj_tag(v___x_5014_) == 1)
{
lean_object* v_val_5015_; 
v_val_5015_ = lean_ctor_get(v___x_5014_, 0);
lean_inc(v_val_5015_);
lean_dec_ref(v___x_5014_);
if (lean_obj_tag(v_val_5015_) == 2)
{
lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5041_; 
v___x_5016_ = l_Lean_Expr_constLevels_x21(v_x_4993_);
lean_dec_ref(v_x_4993_);
v___x_5017_ = l_Lean_Core_instantiateValueLevelParams(v_val_5015_, v___x_5016_, v___x_5005_, v___y_4995_, v___y_4996_);
v_isSharedCheck_5041_ = !lean_is_exclusive(v_val_5015_);
if (v_isSharedCheck_5041_ == 0)
{
lean_object* v_unused_5042_; 
v_unused_5042_ = lean_ctor_get(v_val_5015_, 0);
lean_dec(v_unused_5042_);
v___x_5019_ = v_val_5015_;
v_isShared_5020_ = v_isSharedCheck_5041_;
goto v_resetjp_5018_;
}
else
{
lean_dec(v_val_5015_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5041_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
if (lean_obj_tag(v___x_5017_) == 0)
{
lean_object* v_a_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5032_; 
v_a_5021_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5023_ = v___x_5017_;
v_isShared_5024_ = v_isSharedCheck_5032_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_a_5021_);
lean_dec(v___x_5017_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5032_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5025_; lean_object* v___x_5027_; 
v___x_5025_ = l_Lean_Expr_betaRev(v_a_5021_, v_x_4994_, v___x_5013_, v___x_5013_);
lean_dec_ref(v_x_4994_);
if (v_isShared_5020_ == 0)
{
lean_ctor_set_tag(v___x_5019_, 1);
lean_ctor_set(v___x_5019_, 0, v___x_5025_);
v___x_5027_ = v___x_5019_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v___x_5025_);
v___x_5027_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
lean_object* v___x_5029_; 
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 0, v___x_5027_);
v___x_5029_ = v___x_5023_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5030_; 
v_reuseFailAlloc_5030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5030_, 0, v___x_5027_);
v___x_5029_ = v_reuseFailAlloc_5030_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
return v___x_5029_;
}
}
}
}
else
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5040_; 
lean_del_object(v___x_5019_);
lean_dec_ref(v_x_4994_);
v_a_5033_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5035_ = v___x_5017_;
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___x_5017_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5038_; 
if (v_isShared_5036_ == 0)
{
v___x_5038_ = v___x_5035_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_a_5033_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
return v___x_5038_;
}
}
}
}
}
else
{
lean_dec(v_val_5015_);
lean_dec_ref(v_x_4994_);
lean_dec_ref(v_x_4993_);
goto v___jp_4998_;
}
}
else
{
lean_dec(v___x_5014_);
lean_dec_ref(v_x_4994_);
lean_dec_ref(v_x_4993_);
goto v___jp_4998_;
}
}
}
}
}
}
v___jp_4998_:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
v___x_4999_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5000_, 0, v___x_4999_);
return v___x_5000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object* v_fnNames_5043_, lean_object* v_numSectionVars_5044_, lean_object* v___x_5045_, lean_object* v_x_5046_, lean_object* v_x_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5043_, v_numSectionVars_5044_, v___x_5045_, v_x_5046_, v_x_5047_, v___y_5048_, v___y_5049_);
lean_dec(v___y_5049_);
lean_dec_ref(v___y_5048_);
lean_dec(v_numSectionVars_5044_);
lean_dec_ref(v_fnNames_5043_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object* v_fnNames_5052_, lean_object* v_numSectionVars_5053_, lean_object* v_env_5054_, lean_object* v_e_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_){
_start:
{
lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
v___x_5059_ = l_Lean_Expr_getAppNumArgs(v_e_5055_);
v___x_5060_ = lean_mk_empty_array_with_capacity(v___x_5059_);
lean_dec(v___x_5059_);
v___x_5061_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5052_, v_numSectionVars_5053_, v_env_5054_, v_e_5055_, v___x_5060_, v___y_5056_, v___y_5057_);
return v___x_5061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object* v_fnNames_5062_, lean_object* v_numSectionVars_5063_, lean_object* v_env_5064_, lean_object* v_e_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_){
_start:
{
lean_object* v_res_5069_; 
v_res_5069_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(v_fnNames_5062_, v_numSectionVars_5063_, v_env_5064_, v_e_5065_, v___y_5066_, v___y_5067_);
lean_dec(v___y_5067_);
lean_dec_ref(v___y_5066_);
lean_dec(v_numSectionVars_5063_);
lean_dec_ref(v_fnNames_5062_);
return v_res_5069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object* v_fnNames_5070_, lean_object* v_numSectionVars_5071_, lean_object* v_e_5072_, lean_object* v___f_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_){
_start:
{
lean_object* v___x_5077_; lean_object* v_env_5078_; lean_object* v___f_5079_; lean_object* v___x_5080_; 
v___x_5077_ = lean_st_ref_get(v___y_5075_);
v_env_5078_ = lean_ctor_get(v___x_5077_, 0);
lean_inc_ref(v_env_5078_);
lean_dec(v___x_5077_);
v___f_5079_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed), 7, 3);
lean_closure_set(v___f_5079_, 0, v_fnNames_5070_);
lean_closure_set(v___f_5079_, 1, v_numSectionVars_5071_);
lean_closure_set(v___f_5079_, 2, v_env_5078_);
v___x_5080_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5072_, v___f_5079_, v___f_5073_, v___y_5074_, v___y_5075_);
return v___x_5080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object* v_fnNames_5081_, lean_object* v_numSectionVars_5082_, lean_object* v_e_5083_, lean_object* v___f_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_){
_start:
{
lean_object* v_res_5088_; 
v_res_5088_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(v_fnNames_5081_, v_numSectionVars_5082_, v_e_5083_, v___f_5084_, v___y_5085_, v___y_5086_);
lean_dec(v___y_5086_);
lean_dec_ref(v___y_5085_);
return v_res_5088_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object* v___y_5089_, uint8_t v_isExporting_5090_, lean_object* v___x_5091_, lean_object* v_a_x3f_5092_){
_start:
{
lean_object* v___x_5094_; lean_object* v_env_5095_; lean_object* v_nextMacroScope_5096_; lean_object* v_ngen_5097_; lean_object* v_auxDeclNGen_5098_; lean_object* v_traceState_5099_; lean_object* v_messages_5100_; lean_object* v_infoState_5101_; lean_object* v_snapshotTasks_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5113_; 
v___x_5094_ = lean_st_ref_take(v___y_5089_);
v_env_5095_ = lean_ctor_get(v___x_5094_, 0);
v_nextMacroScope_5096_ = lean_ctor_get(v___x_5094_, 1);
v_ngen_5097_ = lean_ctor_get(v___x_5094_, 2);
v_auxDeclNGen_5098_ = lean_ctor_get(v___x_5094_, 3);
v_traceState_5099_ = lean_ctor_get(v___x_5094_, 4);
v_messages_5100_ = lean_ctor_get(v___x_5094_, 6);
v_infoState_5101_ = lean_ctor_get(v___x_5094_, 7);
v_snapshotTasks_5102_ = lean_ctor_get(v___x_5094_, 8);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_5094_);
if (v_isSharedCheck_5113_ == 0)
{
lean_object* v_unused_5114_; 
v_unused_5114_ = lean_ctor_get(v___x_5094_, 5);
lean_dec(v_unused_5114_);
v___x_5104_ = v___x_5094_;
v_isShared_5105_ = v_isSharedCheck_5113_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_snapshotTasks_5102_);
lean_inc(v_infoState_5101_);
lean_inc(v_messages_5100_);
lean_inc(v_traceState_5099_);
lean_inc(v_auxDeclNGen_5098_);
lean_inc(v_ngen_5097_);
lean_inc(v_nextMacroScope_5096_);
lean_inc(v_env_5095_);
lean_dec(v___x_5094_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5113_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___x_5106_; lean_object* v___x_5108_; 
v___x_5106_ = l_Lean_Environment_setExporting(v_env_5095_, v_isExporting_5090_);
if (v_isShared_5105_ == 0)
{
lean_ctor_set(v___x_5104_, 5, v___x_5091_);
lean_ctor_set(v___x_5104_, 0, v___x_5106_);
v___x_5108_ = v___x_5104_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v___x_5106_);
lean_ctor_set(v_reuseFailAlloc_5112_, 1, v_nextMacroScope_5096_);
lean_ctor_set(v_reuseFailAlloc_5112_, 2, v_ngen_5097_);
lean_ctor_set(v_reuseFailAlloc_5112_, 3, v_auxDeclNGen_5098_);
lean_ctor_set(v_reuseFailAlloc_5112_, 4, v_traceState_5099_);
lean_ctor_set(v_reuseFailAlloc_5112_, 5, v___x_5091_);
lean_ctor_set(v_reuseFailAlloc_5112_, 6, v_messages_5100_);
lean_ctor_set(v_reuseFailAlloc_5112_, 7, v_infoState_5101_);
lean_ctor_set(v_reuseFailAlloc_5112_, 8, v_snapshotTasks_5102_);
v___x_5108_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; 
v___x_5109_ = lean_st_ref_set(v___y_5089_, v___x_5108_);
v___x_5110_ = lean_box(0);
v___x_5111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5110_);
return v___x_5111_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_5115_, lean_object* v_isExporting_5116_, lean_object* v___x_5117_, lean_object* v_a_x3f_5118_, lean_object* v___y_5119_){
_start:
{
uint8_t v_isExporting_boxed_5120_; lean_object* v_res_5121_; 
v_isExporting_boxed_5120_ = lean_unbox(v_isExporting_5116_);
v_res_5121_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5115_, v_isExporting_boxed_5120_, v___x_5117_, v_a_x3f_5118_);
lean_dec(v_a_x3f_5118_);
lean_dec(v___y_5115_);
return v_res_5121_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object* v_x_5122_, uint8_t v_isExporting_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_){
_start:
{
lean_object* v___x_5127_; lean_object* v_env_5128_; uint8_t v_isExporting_5129_; lean_object* v___x_5130_; lean_object* v_env_5131_; lean_object* v_nextMacroScope_5132_; lean_object* v_ngen_5133_; lean_object* v_auxDeclNGen_5134_; lean_object* v_traceState_5135_; lean_object* v_messages_5136_; lean_object* v_infoState_5137_; lean_object* v_snapshotTasks_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5177_; 
v___x_5127_ = lean_st_ref_get(v___y_5125_);
v_env_5128_ = lean_ctor_get(v___x_5127_, 0);
lean_inc_ref(v_env_5128_);
lean_dec(v___x_5127_);
v_isExporting_5129_ = lean_ctor_get_uint8(v_env_5128_, sizeof(void*)*8);
lean_dec_ref(v_env_5128_);
v___x_5130_ = lean_st_ref_take(v___y_5125_);
v_env_5131_ = lean_ctor_get(v___x_5130_, 0);
v_nextMacroScope_5132_ = lean_ctor_get(v___x_5130_, 1);
v_ngen_5133_ = lean_ctor_get(v___x_5130_, 2);
v_auxDeclNGen_5134_ = lean_ctor_get(v___x_5130_, 3);
v_traceState_5135_ = lean_ctor_get(v___x_5130_, 4);
v_messages_5136_ = lean_ctor_get(v___x_5130_, 6);
v_infoState_5137_ = lean_ctor_get(v___x_5130_, 7);
v_snapshotTasks_5138_ = lean_ctor_get(v___x_5130_, 8);
v_isSharedCheck_5177_ = !lean_is_exclusive(v___x_5130_);
if (v_isSharedCheck_5177_ == 0)
{
lean_object* v_unused_5178_; 
v_unused_5178_ = lean_ctor_get(v___x_5130_, 5);
lean_dec(v_unused_5178_);
v___x_5140_ = v___x_5130_;
v_isShared_5141_ = v_isSharedCheck_5177_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_snapshotTasks_5138_);
lean_inc(v_infoState_5137_);
lean_inc(v_messages_5136_);
lean_inc(v_traceState_5135_);
lean_inc(v_auxDeclNGen_5134_);
lean_inc(v_ngen_5133_);
lean_inc(v_nextMacroScope_5132_);
lean_inc(v_env_5131_);
lean_dec(v___x_5130_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5177_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5145_; 
v___x_5142_ = l_Lean_Environment_setExporting(v_env_5131_, v_isExporting_5123_);
v___x_5143_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_5141_ == 0)
{
lean_ctor_set(v___x_5140_, 5, v___x_5143_);
lean_ctor_set(v___x_5140_, 0, v___x_5142_);
v___x_5145_ = v___x_5140_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v___x_5142_);
lean_ctor_set(v_reuseFailAlloc_5176_, 1, v_nextMacroScope_5132_);
lean_ctor_set(v_reuseFailAlloc_5176_, 2, v_ngen_5133_);
lean_ctor_set(v_reuseFailAlloc_5176_, 3, v_auxDeclNGen_5134_);
lean_ctor_set(v_reuseFailAlloc_5176_, 4, v_traceState_5135_);
lean_ctor_set(v_reuseFailAlloc_5176_, 5, v___x_5143_);
lean_ctor_set(v_reuseFailAlloc_5176_, 6, v_messages_5136_);
lean_ctor_set(v_reuseFailAlloc_5176_, 7, v_infoState_5137_);
lean_ctor_set(v_reuseFailAlloc_5176_, 8, v_snapshotTasks_5138_);
v___x_5145_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
lean_object* v___x_5146_; lean_object* v_r_5147_; 
v___x_5146_ = lean_st_ref_set(v___y_5125_, v___x_5145_);
lean_inc(v___y_5125_);
lean_inc_ref(v___y_5124_);
v_r_5147_ = lean_apply_3(v_x_5122_, v___y_5124_, v___y_5125_, lean_box(0));
if (lean_obj_tag(v_r_5147_) == 0)
{
lean_object* v_a_5148_; lean_object* v___x_5150_; uint8_t v_isShared_5151_; uint8_t v_isSharedCheck_5164_; 
v_a_5148_ = lean_ctor_get(v_r_5147_, 0);
v_isSharedCheck_5164_ = !lean_is_exclusive(v_r_5147_);
if (v_isSharedCheck_5164_ == 0)
{
v___x_5150_ = v_r_5147_;
v_isShared_5151_ = v_isSharedCheck_5164_;
goto v_resetjp_5149_;
}
else
{
lean_inc(v_a_5148_);
lean_dec(v_r_5147_);
v___x_5150_ = lean_box(0);
v_isShared_5151_ = v_isSharedCheck_5164_;
goto v_resetjp_5149_;
}
v_resetjp_5149_:
{
lean_object* v___x_5153_; 
lean_inc(v_a_5148_);
if (v_isShared_5151_ == 0)
{
lean_ctor_set_tag(v___x_5150_, 1);
v___x_5153_ = v___x_5150_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_a_5148_);
v___x_5153_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
lean_object* v___x_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5161_; 
v___x_5154_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5125_, v_isExporting_5129_, v___x_5143_, v___x_5153_);
lean_dec_ref(v___x_5153_);
v_isSharedCheck_5161_ = !lean_is_exclusive(v___x_5154_);
if (v_isSharedCheck_5161_ == 0)
{
lean_object* v_unused_5162_; 
v_unused_5162_ = lean_ctor_get(v___x_5154_, 0);
lean_dec(v_unused_5162_);
v___x_5156_ = v___x_5154_;
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
else
{
lean_dec(v___x_5154_);
v___x_5156_ = lean_box(0);
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
v_resetjp_5155_:
{
lean_object* v___x_5159_; 
if (v_isShared_5157_ == 0)
{
lean_ctor_set(v___x_5156_, 0, v_a_5148_);
v___x_5159_ = v___x_5156_;
goto v_reusejp_5158_;
}
else
{
lean_object* v_reuseFailAlloc_5160_; 
v_reuseFailAlloc_5160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5160_, 0, v_a_5148_);
v___x_5159_ = v_reuseFailAlloc_5160_;
goto v_reusejp_5158_;
}
v_reusejp_5158_:
{
return v___x_5159_;
}
}
}
}
}
else
{
lean_object* v_a_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5169_; uint8_t v_isShared_5170_; uint8_t v_isSharedCheck_5174_; 
v_a_5165_ = lean_ctor_get(v_r_5147_, 0);
lean_inc(v_a_5165_);
lean_dec_ref(v_r_5147_);
v___x_5166_ = lean_box(0);
v___x_5167_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5125_, v_isExporting_5129_, v___x_5143_, v___x_5166_);
v_isSharedCheck_5174_ = !lean_is_exclusive(v___x_5167_);
if (v_isSharedCheck_5174_ == 0)
{
lean_object* v_unused_5175_; 
v_unused_5175_ = lean_ctor_get(v___x_5167_, 0);
lean_dec(v_unused_5175_);
v___x_5169_ = v___x_5167_;
v_isShared_5170_ = v_isSharedCheck_5174_;
goto v_resetjp_5168_;
}
else
{
lean_dec(v___x_5167_);
v___x_5169_ = lean_box(0);
v_isShared_5170_ = v_isSharedCheck_5174_;
goto v_resetjp_5168_;
}
v_resetjp_5168_:
{
lean_object* v___x_5172_; 
if (v_isShared_5170_ == 0)
{
lean_ctor_set_tag(v___x_5169_, 1);
lean_ctor_set(v___x_5169_, 0, v_a_5165_);
v___x_5172_ = v___x_5169_;
goto v_reusejp_5171_;
}
else
{
lean_object* v_reuseFailAlloc_5173_; 
v_reuseFailAlloc_5173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5173_, 0, v_a_5165_);
v___x_5172_ = v_reuseFailAlloc_5173_;
goto v_reusejp_5171_;
}
v_reusejp_5171_:
{
return v___x_5172_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object* v_x_5179_, lean_object* v_isExporting_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_){
_start:
{
uint8_t v_isExporting_boxed_5184_; lean_object* v_res_5185_; 
v_isExporting_boxed_5184_ = lean_unbox(v_isExporting_5180_);
v_res_5185_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5179_, v_isExporting_boxed_5184_, v___y_5181_, v___y_5182_);
lean_dec(v___y_5182_);
lean_dec_ref(v___y_5181_);
return v_res_5185_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object* v_x_5186_, uint8_t v_when_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_){
_start:
{
if (v_when_5187_ == 0)
{
lean_object* v___x_5191_; 
lean_inc(v___y_5189_);
lean_inc_ref(v___y_5188_);
v___x_5191_ = lean_apply_3(v_x_5186_, v___y_5188_, v___y_5189_, lean_box(0));
return v___x_5191_;
}
else
{
uint8_t v___x_5192_; lean_object* v___x_5193_; 
v___x_5192_ = 0;
v___x_5193_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5186_, v___x_5192_, v___y_5188_, v___y_5189_);
return v___x_5193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object* v_x_5194_, lean_object* v_when_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_){
_start:
{
uint8_t v_when_boxed_5199_; lean_object* v_res_5200_; 
v_when_boxed_5199_ = lean_unbox(v_when_5195_);
v_res_5200_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5194_, v_when_boxed_5199_, v___y_5196_, v___y_5197_);
lean_dec(v___y_5197_);
lean_dec_ref(v___y_5196_);
return v_res_5200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object* v_fnNames_5201_, lean_object* v_numSectionVars_5202_, lean_object* v_e_5203_, lean_object* v_a_5204_, lean_object* v_a_5205_){
_start:
{
lean_object* v___f_5207_; lean_object* v___f_5208_; uint8_t v___x_5209_; lean_object* v___x_5210_; 
v___f_5207_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_5208_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5208_, 0, v_fnNames_5201_);
lean_closure_set(v___f_5208_, 1, v_numSectionVars_5202_);
lean_closure_set(v___f_5208_, 2, v_e_5203_);
lean_closure_set(v___f_5208_, 3, v___f_5207_);
v___x_5209_ = 1;
v___x_5210_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v___f_5208_, v___x_5209_, v_a_5204_, v_a_5205_);
return v___x_5210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object* v_fnNames_5211_, lean_object* v_numSectionVars_5212_, lean_object* v_e_5213_, lean_object* v_a_5214_, lean_object* v_a_5215_, lean_object* v_a_5216_){
_start:
{
lean_object* v_res_5217_; 
v_res_5217_ = l_Lean_Meta_unfoldIfArgIsAppOf(v_fnNames_5211_, v_numSectionVars_5212_, v_e_5213_, v_a_5214_, v_a_5215_);
lean_dec(v_a_5215_);
lean_dec_ref(v_a_5214_);
return v_res_5217_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object* v_00_u03b1_5218_, lean_object* v_x_5219_, uint8_t v_isExporting_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5219_, v_isExporting_5220_, v___y_5221_, v___y_5222_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object* v_00_u03b1_5225_, lean_object* v_x_5226_, lean_object* v_isExporting_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_){
_start:
{
uint8_t v_isExporting_boxed_5231_; lean_object* v_res_5232_; 
v_isExporting_boxed_5231_ = lean_unbox(v_isExporting_5227_);
v_res_5232_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(v_00_u03b1_5225_, v_x_5226_, v_isExporting_boxed_5231_, v___y_5228_, v___y_5229_);
lean_dec(v___y_5229_);
lean_dec_ref(v___y_5228_);
return v_res_5232_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object* v_00_u03b1_5233_, lean_object* v_x_5234_, uint8_t v_when_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_){
_start:
{
lean_object* v___x_5239_; 
v___x_5239_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5234_, v_when_5235_, v___y_5236_, v___y_5237_);
return v___x_5239_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object* v_00_u03b1_5240_, lean_object* v_x_5241_, lean_object* v_when_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_){
_start:
{
uint8_t v_when_boxed_5246_; lean_object* v_res_5247_; 
v_when_boxed_5246_ = lean_unbox(v_when_5242_);
v_res_5247_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(v_00_u03b1_5240_, v_x_5241_, v_when_boxed_5246_, v___y_5243_, v___y_5244_);
lean_dec(v___y_5244_);
lean_dec_ref(v___y_5243_);
return v_res_5247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object* v_x_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_){
_start:
{
lean_object* v___x_5252_; lean_object* v___x_5253_; 
v___x_5252_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5253_, 0, v___x_5252_);
return v___x_5253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object* v_x_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_){
_start:
{
lean_object* v_res_5258_; 
v_res_5258_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(v_x_5254_, v___y_5255_, v___y_5256_);
lean_dec(v___y_5256_);
lean_dec_ref(v___y_5255_);
lean_dec_ref(v_x_5254_);
return v_res_5258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object* v_e_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_){
_start:
{
lean_object* v___y_5264_; lean_object* v___x_5267_; 
v___x_5267_ = l_Lean_inaccessible_x3f(v_e_5259_);
if (lean_obj_tag(v___x_5267_) == 1)
{
lean_object* v_val_5268_; 
lean_dec_ref(v_e_5259_);
v_val_5268_ = lean_ctor_get(v___x_5267_, 0);
lean_inc(v_val_5268_);
lean_dec_ref(v___x_5267_);
v___y_5264_ = v_val_5268_;
goto v___jp_5263_;
}
else
{
lean_dec(v___x_5267_);
v___y_5264_ = v_e_5259_;
goto v___jp_5263_;
}
v___jp_5263_:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5265_, 0, v___y_5264_);
v___x_5266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5266_, 0, v___x_5265_);
return v___x_5266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object* v_e_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_){
_start:
{
lean_object* v_res_5273_; 
v_res_5273_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(v_e_5269_, v___y_5270_, v___y_5271_);
lean_dec(v___y_5271_);
lean_dec_ref(v___y_5270_);
return v_res_5273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object* v_e_5276_, lean_object* v_a_5277_, lean_object* v_a_5278_){
_start:
{
lean_object* v___f_5280_; lean_object* v___f_5281_; lean_object* v___x_5282_; 
v___f_5280_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5281_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__1));
v___x_5282_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5276_, v___f_5280_, v___f_5281_, v_a_5277_, v_a_5278_);
return v___x_5282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object* v_e_5283_, lean_object* v_a_5284_, lean_object* v_a_5285_, lean_object* v_a_5286_){
_start:
{
lean_object* v_res_5287_; 
v_res_5287_ = l_Lean_Meta_eraseInaccessibleAnnotations(v_e_5283_, v_a_5284_, v_a_5285_);
lean_dec(v_a_5285_);
lean_dec_ref(v_a_5284_);
return v_res_5287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object* v_e_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_){
_start:
{
lean_object* v___y_5293_; lean_object* v___x_5296_; 
v___x_5296_ = l_Lean_patternWithRef_x3f(v_e_5288_);
if (lean_obj_tag(v___x_5296_) == 1)
{
lean_object* v_val_5297_; lean_object* v_snd_5298_; 
lean_dec_ref(v_e_5288_);
v_val_5297_ = lean_ctor_get(v___x_5296_, 0);
lean_inc(v_val_5297_);
lean_dec_ref(v___x_5296_);
v_snd_5298_ = lean_ctor_get(v_val_5297_, 1);
lean_inc(v_snd_5298_);
lean_dec(v_val_5297_);
v___y_5293_ = v_snd_5298_;
goto v___jp_5292_;
}
else
{
lean_dec(v___x_5296_);
v___y_5293_ = v_e_5288_;
goto v___jp_5292_;
}
v___jp_5292_:
{
lean_object* v___x_5294_; lean_object* v___x_5295_; 
v___x_5294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5294_, 0, v___y_5293_);
v___x_5295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5295_, 0, v___x_5294_);
return v___x_5295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object* v_e_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_){
_start:
{
lean_object* v_res_5303_; 
v_res_5303_ = l_Lean_Meta_erasePatternRefAnnotations___lam__1(v_e_5299_, v___y_5300_, v___y_5301_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
return v_res_5303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object* v_e_5305_, lean_object* v_a_5306_, lean_object* v_a_5307_){
_start:
{
lean_object* v___f_5309_; lean_object* v___f_5310_; lean_object* v___x_5311_; 
v___f_5309_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5310_ = ((lean_object*)(l_Lean_Meta_erasePatternRefAnnotations___closed__0));
v___x_5311_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5305_, v___f_5309_, v___f_5310_, v_a_5306_, v_a_5307_);
return v___x_5311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object* v_e_5312_, lean_object* v_a_5313_, lean_object* v_a_5314_, lean_object* v_a_5315_){
_start:
{
lean_object* v_res_5316_; 
v_res_5316_ = l_Lean_Meta_erasePatternRefAnnotations(v_e_5312_, v_a_5313_, v_a_5314_);
lean_dec(v_a_5314_);
lean_dec_ref(v_a_5313_);
return v_res_5316_;
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
