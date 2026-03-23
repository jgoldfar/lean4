// Lean compiler output
// Module: Lean.Meta.ForEachExpr
// Imports: public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_MetavarContext_setMVarUserNameTemporarily(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_visitLambda___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_visitLambda___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_visitLambda___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_setMVarUserNamesAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_setMVarUserNamesAt___closed__0 = (const lean_object*)&l_Lean_Meta_setMVarUserNamesAt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1(lean_object* v_inst_1_, lean_object* v_inst_2_, lean_object* v_binderName_3_, uint8_t v_binderInfo_4_, lean_object* v_d_5_, lean_object* v___f_6_, lean_object* v_____r_7_){
_start:
{
uint8_t v___x_8_; lean_object* v___x_9_; 
v___x_8_ = 0;
v___x_9_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1_, v_inst_2_, v_binderName_3_, v_binderInfo_4_, v_d_5_, v___f_6_, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_binderName_12_, lean_object* v_binderInfo_13_, lean_object* v_d_14_, lean_object* v___f_15_, lean_object* v_____r_16_){
_start:
{
uint8_t v_binderInfo_66__boxed_17_; lean_object* v_res_18_; 
v_binderInfo_66__boxed_17_ = lean_unbox(v_binderInfo_13_);
v_res_18_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1(v_inst_10_, v_inst_11_, v_binderName_12_, v_binderInfo_66__boxed_17_, v_d_14_, v___f_15_, v_____r_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_f_21_, lean_object* v_fvars_22_, lean_object* v_a_23_){
_start:
{
if (lean_obj_tag(v_a_23_) == 6)
{
lean_object* v_toBind_24_; lean_object* v_binderName_25_; lean_object* v_binderType_26_; lean_object* v_body_27_; uint8_t v_binderInfo_28_; lean_object* v___f_29_; lean_object* v_d_30_; lean_object* v___x_31_; lean_object* v___f_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v_toBind_24_ = lean_ctor_get(v_inst_19_, 1);
lean_inc(v_toBind_24_);
v_binderName_25_ = lean_ctor_get(v_a_23_, 0);
lean_inc(v_binderName_25_);
v_binderType_26_ = lean_ctor_get(v_a_23_, 1);
lean_inc_ref(v_binderType_26_);
v_body_27_ = lean_ctor_get(v_a_23_, 2);
lean_inc_ref(v_body_27_);
v_binderInfo_28_ = lean_ctor_get_uint8(v_a_23_, sizeof(void*)*3 + 8);
lean_dec_ref(v_a_23_);
lean_inc(v_f_21_);
lean_inc_ref(v_inst_20_);
lean_inc_ref(v_inst_19_);
lean_inc_ref(v_fvars_22_);
v___f_29_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__0), 6, 5);
lean_closure_set(v___f_29_, 0, v_fvars_22_);
lean_closure_set(v___f_29_, 1, v_inst_19_);
lean_closure_set(v___f_29_, 2, v_inst_20_);
lean_closure_set(v___f_29_, 3, v_f_21_);
lean_closure_set(v___f_29_, 4, v_body_27_);
v_d_30_ = lean_expr_instantiate_rev(v_binderType_26_, v_fvars_22_);
lean_dec_ref(v_fvars_22_);
lean_dec_ref(v_binderType_26_);
v___x_31_ = lean_box(v_binderInfo_28_);
lean_inc_ref(v_d_30_);
v___f_32_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_32_, 0, v_inst_20_);
lean_closure_set(v___f_32_, 1, v_inst_19_);
lean_closure_set(v___f_32_, 2, v_binderName_25_);
lean_closure_set(v___f_32_, 3, v___x_31_);
lean_closure_set(v___f_32_, 4, v_d_30_);
lean_closure_set(v___f_32_, 5, v___f_29_);
v___x_33_ = lean_apply_1(v_f_21_, v_d_30_);
v___x_34_ = lean_apply_4(v_toBind_24_, lean_box(0), lean_box(0), v___x_33_, v___f_32_);
return v___x_34_;
}
else
{
lean_object* v___x_35_; lean_object* v___x_36_; 
lean_dec_ref(v_inst_20_);
lean_dec_ref(v_inst_19_);
v___x_35_ = lean_expr_instantiate_rev(v_a_23_, v_fvars_22_);
lean_dec_ref(v_fvars_22_);
lean_dec_ref(v_a_23_);
v___x_36_ = lean_apply_1(v_f_21_, v___x_35_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__0(lean_object* v_fvars_37_, lean_object* v_inst_38_, lean_object* v_inst_39_, lean_object* v_f_40_, lean_object* v_body_41_, lean_object* v_x_42_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_array_push(v_fvars_37_, v_x_42_);
v___x_44_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(v_inst_38_, v_inst_39_, v_f_40_, v___x_43_, v_body_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit(lean_object* v_m_45_, lean_object* v_inst_46_, lean_object* v_inst_47_, lean_object* v_f_48_, lean_object* v_fvars_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(v_inst_46_, v_inst_47_, v_f_48_, v_fvars_49_, v_a_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___redArg(lean_object* v_inst_54_, lean_object* v_inst_55_, lean_object* v_f_56_, lean_object* v_e_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_59_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg(v_inst_54_, v_inst_55_, v_f_56_, v___x_58_, v_e_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda(lean_object* v_m_60_, lean_object* v_inst_61_, lean_object* v_inst_62_, lean_object* v_f_63_, lean_object* v_e_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_visitLambda___redArg(v_inst_61_, v_inst_62_, v_f_63_, v_e_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(lean_object* v_inst_66_, lean_object* v_inst_67_, lean_object* v_f_68_, lean_object* v_fvars_69_, lean_object* v_a_70_){
_start:
{
if (lean_obj_tag(v_a_70_) == 7)
{
lean_object* v_toBind_71_; lean_object* v_binderName_72_; lean_object* v_binderType_73_; lean_object* v_body_74_; uint8_t v_binderInfo_75_; lean_object* v___f_76_; lean_object* v_d_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_toBind_71_ = lean_ctor_get(v_inst_66_, 1);
lean_inc(v_toBind_71_);
v_binderName_72_ = lean_ctor_get(v_a_70_, 0);
lean_inc(v_binderName_72_);
v_binderType_73_ = lean_ctor_get(v_a_70_, 1);
lean_inc_ref(v_binderType_73_);
v_body_74_ = lean_ctor_get(v_a_70_, 2);
lean_inc_ref(v_body_74_);
v_binderInfo_75_ = lean_ctor_get_uint8(v_a_70_, sizeof(void*)*3 + 8);
lean_dec_ref(v_a_70_);
lean_inc(v_f_68_);
lean_inc_ref(v_inst_67_);
lean_inc_ref(v_inst_66_);
lean_inc_ref(v_fvars_69_);
v___f_76_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg___lam__0), 6, 5);
lean_closure_set(v___f_76_, 0, v_fvars_69_);
lean_closure_set(v___f_76_, 1, v_inst_66_);
lean_closure_set(v___f_76_, 2, v_inst_67_);
lean_closure_set(v___f_76_, 3, v_f_68_);
lean_closure_set(v___f_76_, 4, v_body_74_);
v_d_77_ = lean_expr_instantiate_rev(v_binderType_73_, v_fvars_69_);
lean_dec_ref(v_fvars_69_);
lean_dec_ref(v_binderType_73_);
v___x_78_ = lean_box(v_binderInfo_75_);
lean_inc_ref(v_d_77_);
v___f_79_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_79_, 0, v_inst_67_);
lean_closure_set(v___f_79_, 1, v_inst_66_);
lean_closure_set(v___f_79_, 2, v_binderName_72_);
lean_closure_set(v___f_79_, 3, v___x_78_);
lean_closure_set(v___f_79_, 4, v_d_77_);
lean_closure_set(v___f_79_, 5, v___f_76_);
v___x_80_ = lean_apply_1(v_f_68_, v_d_77_);
v___x_81_ = lean_apply_4(v_toBind_71_, lean_box(0), lean_box(0), v___x_80_, v___f_79_);
return v___x_81_;
}
else
{
lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec_ref(v_inst_67_);
lean_dec_ref(v_inst_66_);
v___x_82_ = lean_expr_instantiate_rev(v_a_70_, v_fvars_69_);
lean_dec_ref(v_fvars_69_);
lean_dec_ref(v_a_70_);
v___x_83_ = lean_apply_1(v_f_68_, v___x_82_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg___lam__0(lean_object* v_fvars_84_, lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_f_87_, lean_object* v_body_88_, lean_object* v_x_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_array_push(v_fvars_84_, v_x_89_);
v___x_91_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(v_inst_85_, v_inst_86_, v_f_87_, v___x_90_, v_body_88_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit(lean_object* v_m_92_, lean_object* v_inst_93_, lean_object* v_inst_94_, lean_object* v_f_95_, lean_object* v_fvars_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(v_inst_93_, v_inst_94_, v_f_95_, v_fvars_96_, v_a_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___redArg(lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_f_101_, lean_object* v_e_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_104_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___redArg(v_inst_99_, v_inst_100_, v_f_101_, v___x_103_, v_e_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall(lean_object* v_m_105_, lean_object* v_inst_106_, lean_object* v_inst_107_, lean_object* v_f_108_, lean_object* v_e_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Meta_visitForall___redArg(v_inst_106_, v_inst_107_, v_f_108_, v_e_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__1(lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_declName_113_, lean_object* v_d_114_, lean_object* v_v_115_, lean_object* v___f_116_, lean_object* v_____r_117_){
_start:
{
uint8_t v___x_118_; uint8_t v___x_119_; lean_object* v___x_120_; 
v___x_118_ = 0;
v___x_119_ = 0;
v___x_120_ = l_Lean_Meta_withLetDecl___redArg(v_inst_111_, v_inst_112_, v_declName_113_, v_d_114_, v_v_115_, v___f_116_, v___x_118_, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__2(lean_object* v_f_121_, lean_object* v_v_122_, lean_object* v_toBind_123_, lean_object* v___f_124_, lean_object* v_____r_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_apply_1(v_f_121_, v_v_122_);
v___x_127_ = lean_apply_4(v_toBind_123_, lean_box(0), lean_box(0), v___x_126_, v___f_124_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_f_130_, lean_object* v_fvars_131_, lean_object* v_a_132_){
_start:
{
if (lean_obj_tag(v_a_132_) == 8)
{
lean_object* v_toBind_133_; lean_object* v_declName_134_; lean_object* v_type_135_; lean_object* v_value_136_; lean_object* v_body_137_; lean_object* v___f_138_; lean_object* v_d_139_; lean_object* v_v_140_; lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_toBind_133_ = lean_ctor_get(v_inst_128_, 1);
lean_inc(v_toBind_133_);
v_declName_134_ = lean_ctor_get(v_a_132_, 0);
lean_inc(v_declName_134_);
v_type_135_ = lean_ctor_get(v_a_132_, 1);
lean_inc_ref(v_type_135_);
v_value_136_ = lean_ctor_get(v_a_132_, 2);
lean_inc_ref(v_value_136_);
v_body_137_ = lean_ctor_get(v_a_132_, 3);
lean_inc_ref(v_body_137_);
lean_dec_ref(v_a_132_);
lean_inc(v_f_130_);
lean_inc_ref(v_inst_129_);
lean_inc_ref(v_inst_128_);
lean_inc_ref(v_fvars_131_);
v___f_138_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__0), 6, 5);
lean_closure_set(v___f_138_, 0, v_fvars_131_);
lean_closure_set(v___f_138_, 1, v_inst_128_);
lean_closure_set(v___f_138_, 2, v_inst_129_);
lean_closure_set(v___f_138_, 3, v_f_130_);
lean_closure_set(v___f_138_, 4, v_body_137_);
v_d_139_ = lean_expr_instantiate_rev(v_type_135_, v_fvars_131_);
lean_dec_ref(v_type_135_);
v_v_140_ = lean_expr_instantiate_rev(v_value_136_, v_fvars_131_);
lean_dec_ref(v_fvars_131_);
lean_dec_ref(v_value_136_);
lean_inc_ref(v_v_140_);
lean_inc_ref(v_d_139_);
v___f_141_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__1), 7, 6);
lean_closure_set(v___f_141_, 0, v_inst_129_);
lean_closure_set(v___f_141_, 1, v_inst_128_);
lean_closure_set(v___f_141_, 2, v_declName_134_);
lean_closure_set(v___f_141_, 3, v_d_139_);
lean_closure_set(v___f_141_, 4, v_v_140_);
lean_closure_set(v___f_141_, 5, v___f_138_);
lean_inc(v_toBind_133_);
lean_inc(v_f_130_);
v___f_142_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__2), 5, 4);
lean_closure_set(v___f_142_, 0, v_f_130_);
lean_closure_set(v___f_142_, 1, v_v_140_);
lean_closure_set(v___f_142_, 2, v_toBind_133_);
lean_closure_set(v___f_142_, 3, v___f_141_);
v___x_143_ = lean_apply_1(v_f_130_, v_d_139_);
v___x_144_ = lean_apply_4(v_toBind_133_, lean_box(0), lean_box(0), v___x_143_, v___f_142_);
return v___x_144_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec_ref(v_inst_129_);
lean_dec_ref(v_inst_128_);
v___x_145_ = lean_expr_instantiate_rev(v_a_132_, v_fvars_131_);
lean_dec_ref(v_fvars_131_);
lean_dec_ref(v_a_132_);
v___x_146_ = lean_apply_1(v_f_130_, v___x_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg___lam__0(lean_object* v_fvars_147_, lean_object* v_inst_148_, lean_object* v_inst_149_, lean_object* v_f_150_, lean_object* v_body_151_, lean_object* v_x_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_array_push(v_fvars_147_, v_x_152_);
v___x_154_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(v_inst_148_, v_inst_149_, v_f_150_, v___x_153_, v_body_151_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit(lean_object* v_m_155_, lean_object* v_inst_156_, lean_object* v_inst_157_, lean_object* v_f_158_, lean_object* v_fvars_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(v_inst_156_, v_inst_157_, v_f_158_, v_fvars_159_, v_a_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___redArg(lean_object* v_inst_162_, lean_object* v_inst_163_, lean_object* v_f_164_, lean_object* v_e_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_167_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___redArg(v_inst_162_, v_inst_163_, v_f_164_, v___x_166_, v_e_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet(lean_object* v_m_168_, lean_object* v_inst_169_, lean_object* v_inst_170_, lean_object* v_f_171_, lean_object* v_e_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_Meta_visitLet___redArg(v_inst_169_, v_inst_170_, v_f_171_, v_e_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__0(lean_object* v_toApplicative_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_toPure_177_; lean_object* v___x_178_; 
v_toPure_177_ = lean_ctor_get(v_toApplicative_174_, 1);
lean_inc(v_toPure_177_);
lean_dec_ref(v_toApplicative_174_);
v___x_178_ = lean_apply_2(v_toPure_177_, lean_box(0), v_a_175_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__1(lean_object* v___x_179_, lean_object* v___x_180_, lean_object* v_e_181_, lean_object* v_a_182_, lean_object* v_s_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_box(0);
v___x_185_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_179_, v___x_180_, v_s_183_, v_e_181_, v_a_182_);
v___x_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2(lean_object* v_toApplicative_187_, lean_object* v___x_188_, lean_object* v___x_189_, lean_object* v_e_190_, lean_object* v_a_191_, lean_object* v_x_192_, lean_object* v_toBind_193_, lean_object* v_a_194_){
_start:
{
lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___f_195_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__0), 3, 2);
lean_closure_set(v___f_195_, 0, v_toApplicative_187_);
lean_closure_set(v___f_195_, 1, v_a_194_);
v___f_196_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__1), 5, 4);
lean_closure_set(v___f_196_, 0, v___x_188_);
lean_closure_set(v___f_196_, 1, v___x_189_);
lean_closure_set(v___f_196_, 2, v_e_190_);
lean_closure_set(v___f_196_, 3, v_a_194_);
v___x_197_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_197_, 0, lean_box(0));
lean_closure_set(v___x_197_, 1, lean_box(0));
lean_closure_set(v___x_197_, 2, lean_box(0));
lean_closure_set(v___x_197_, 3, v_a_191_);
lean_closure_set(v___x_197_, 4, v___f_196_);
v___x_198_ = lean_apply_2(v_x_192_, lean_box(0), v___x_197_);
v___x_199_ = lean_apply_4(v_toBind_193_, lean_box(0), lean_box(0), v___x_198_, v___f_195_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3(lean_object* v_toApplicative_200_, lean_object* v___x_201_, lean_object* v___x_202_, lean_object* v_e_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_toPure_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v_toPure_205_ = lean_ctor_get(v_toApplicative_200_, 1);
lean_inc(v_toPure_205_);
lean_dec_ref(v_toApplicative_200_);
v___x_206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_201_, v___x_202_, v_a_204_, v_e_203_);
v___x_207_ = lean_apply_2(v_toPure_205_, lean_box(0), v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v_e_211_, lean_object* v_a_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3(v_toApplicative_208_, v___x_209_, v___x_210_, v_e_211_, v_a_212_);
lean_dec_ref(v_a_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__6(lean_object* v_fn_214_, lean_object* v_e_215_, lean_object* v_toBind_216_, lean_object* v___f_217_, lean_object* v___f_218_, lean_object* v_toApplicative_219_, lean_object* v_a_220_){
_start:
{
if (lean_obj_tag(v_a_220_) == 0)
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec_ref(v_toApplicative_219_);
v___x_221_ = lean_apply_1(v_fn_214_, v_e_215_);
lean_inc(v_toBind_216_);
v___x_222_ = lean_apply_4(v_toBind_216_, lean_box(0), lean_box(0), v___x_221_, v___f_217_);
v___x_223_ = lean_apply_4(v_toBind_216_, lean_box(0), lean_box(0), v___x_222_, v___f_218_);
return v___x_223_;
}
else
{
lean_object* v_val_224_; lean_object* v_toPure_225_; lean_object* v___x_226_; 
lean_dec(v___f_218_);
lean_dec(v___f_217_);
lean_dec(v_toBind_216_);
lean_dec_ref(v_e_215_);
lean_dec(v_fn_214_);
v_val_224_ = lean_ctor_get(v_a_220_, 0);
lean_inc(v_val_224_);
lean_dec_ref(v_a_220_);
v_toPure_225_ = lean_ctor_get(v_toApplicative_219_, 1);
lean_inc(v_toPure_225_);
lean_dec_ref(v_toApplicative_219_);
v___x_226_ = lean_apply_2(v_toPure_225_, lean_box(0), v_val_224_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5(lean_object* v_toApplicative_229_, lean_object* v_e_230_, lean_object* v_x_231_, lean_object* v___x_232_, lean_object* v___x_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_fn_236_, lean_object* v_x_237_, lean_object* v___x_238_, lean_object* v_a_239_, lean_object* v_toBind_240_, uint8_t v_a_241_){
_start:
{
if (v_a_241_ == 0)
{
lean_object* v_toPure_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec(v_toBind_240_);
lean_dec(v_a_239_);
lean_dec_ref(v___x_238_);
lean_dec(v_x_237_);
lean_dec(v_fn_236_);
lean_dec_ref(v_inst_235_);
lean_dec_ref(v_inst_234_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v_e_230_);
v_toPure_242_ = lean_ctor_get(v_toApplicative_229_, 1);
lean_inc(v_toPure_242_);
lean_dec_ref(v_toApplicative_229_);
v___x_243_ = lean_box(0);
v___x_244_ = lean_apply_2(v_toPure_242_, lean_box(0), v___x_243_);
return v___x_244_;
}
else
{
switch(lean_obj_tag(v_e_230_))
{
case 7:
{
lean_object* v___x_245_; lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_891__overap_250_; lean_object* v___x_251_; 
lean_dec(v_toBind_240_);
lean_dec_ref(v_toApplicative_229_);
v___x_245_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_231_, v___x_232_, v___x_233_);
lean_inc_ref(v_inst_234_);
lean_inc_ref(v___x_245_);
v___f_246_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_246_, 0, v___x_245_);
lean_closure_set(v___f_246_, 1, v_inst_234_);
lean_inc_ref(v_inst_234_);
v___f_247_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_247_, 0, v___x_245_);
lean_closure_set(v___f_247_, 1, v_inst_234_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___f_246_);
lean_ctor_set(v___x_248_, 1, v___f_247_);
v___x_249_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg), 7, 5);
lean_closure_set(v___x_249_, 0, v_inst_235_);
lean_closure_set(v___x_249_, 1, v_inst_234_);
lean_closure_set(v___x_249_, 2, v_fn_236_);
lean_closure_set(v___x_249_, 3, v_x_231_);
lean_closure_set(v___x_249_, 4, v_x_237_);
v___x_891__overap_250_ = l_Lean_Meta_visitForall___redArg(v___x_238_, v___x_248_, v___x_249_, v_e_230_);
v___x_251_ = lean_apply_1(v___x_891__overap_250_, v_a_239_);
return v___x_251_;
}
case 6:
{
lean_object* v___x_252_; lean_object* v___f_253_; lean_object* v___f_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_901__overap_257_; lean_object* v___x_258_; 
lean_dec(v_toBind_240_);
lean_dec_ref(v_toApplicative_229_);
v___x_252_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_231_, v___x_232_, v___x_233_);
lean_inc_ref(v_inst_234_);
lean_inc_ref(v___x_252_);
v___f_253_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_253_, 0, v___x_252_);
lean_closure_set(v___f_253_, 1, v_inst_234_);
lean_inc_ref(v_inst_234_);
v___f_254_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_254_, 0, v___x_252_);
lean_closure_set(v___f_254_, 1, v_inst_234_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___f_253_);
lean_ctor_set(v___x_255_, 1, v___f_254_);
v___x_256_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg), 7, 5);
lean_closure_set(v___x_256_, 0, v_inst_235_);
lean_closure_set(v___x_256_, 1, v_inst_234_);
lean_closure_set(v___x_256_, 2, v_fn_236_);
lean_closure_set(v___x_256_, 3, v_x_231_);
lean_closure_set(v___x_256_, 4, v_x_237_);
v___x_901__overap_257_ = l_Lean_Meta_visitLambda___redArg(v___x_238_, v___x_255_, v___x_256_, v_e_230_);
v___x_258_ = lean_apply_1(v___x_901__overap_257_, v_a_239_);
return v___x_258_;
}
case 8:
{
lean_object* v___x_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_912__overap_264_; lean_object* v___x_265_; 
lean_dec(v_toBind_240_);
lean_dec_ref(v_toApplicative_229_);
v___x_259_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_231_, v___x_232_, v___x_233_);
lean_inc_ref(v_inst_234_);
lean_inc_ref(v___x_259_);
v___f_260_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_260_, 0, v___x_259_);
lean_closure_set(v___f_260_, 1, v_inst_234_);
lean_inc_ref(v_inst_234_);
v___f_261_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_261_, 0, v___x_259_);
lean_closure_set(v___f_261_, 1, v_inst_234_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___f_260_);
lean_ctor_set(v___x_262_, 1, v___f_261_);
v___x_263_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg), 7, 5);
lean_closure_set(v___x_263_, 0, v_inst_235_);
lean_closure_set(v___x_263_, 1, v_inst_234_);
lean_closure_set(v___x_263_, 2, v_fn_236_);
lean_closure_set(v___x_263_, 3, v_x_231_);
lean_closure_set(v___x_263_, 4, v_x_237_);
v___x_912__overap_264_ = l_Lean_Meta_visitLet___redArg(v___x_238_, v___x_262_, v___x_263_, v_e_230_);
v___x_265_ = lean_apply_1(v___x_912__overap_264_, v_a_239_);
return v___x_265_;
}
case 5:
{
lean_object* v_fn_266_; lean_object* v_arg_267_; lean_object* v___f_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec_ref(v___x_238_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v_toApplicative_229_);
v_fn_266_ = lean_ctor_get(v_e_230_, 0);
lean_inc_ref(v_fn_266_);
v_arg_267_ = lean_ctor_get(v_e_230_, 1);
lean_inc_ref(v_arg_267_);
lean_dec_ref(v_e_230_);
lean_inc(v_a_239_);
lean_inc(v_x_237_);
lean_inc(v_fn_236_);
lean_inc_ref(v_inst_234_);
lean_inc_ref(v_inst_235_);
v___f_268_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4), 8, 7);
lean_closure_set(v___f_268_, 0, v_inst_235_);
lean_closure_set(v___f_268_, 1, v_inst_234_);
lean_closure_set(v___f_268_, 2, v_fn_236_);
lean_closure_set(v___f_268_, 3, v_x_231_);
lean_closure_set(v___f_268_, 4, v_x_237_);
lean_closure_set(v___f_268_, 5, v_arg_267_);
lean_closure_set(v___f_268_, 6, v_a_239_);
v___x_269_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_235_, v_inst_234_, v_fn_236_, v_x_231_, v_x_237_, v_fn_266_, v_a_239_);
v___x_270_ = lean_apply_4(v_toBind_240_, lean_box(0), lean_box(0), v___x_269_, v___f_268_);
return v___x_270_;
}
case 10:
{
lean_object* v_expr_271_; lean_object* v___x_272_; 
lean_dec(v_toBind_240_);
lean_dec_ref(v___x_238_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v_toApplicative_229_);
v_expr_271_ = lean_ctor_get(v_e_230_, 1);
lean_inc_ref(v_expr_271_);
lean_dec_ref(v_e_230_);
v___x_272_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_235_, v_inst_234_, v_fn_236_, v_x_231_, v_x_237_, v_expr_271_, v_a_239_);
return v___x_272_;
}
case 11:
{
lean_object* v_struct_273_; lean_object* v___x_274_; 
lean_dec(v_toBind_240_);
lean_dec_ref(v___x_238_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v_toApplicative_229_);
v_struct_273_ = lean_ctor_get(v_e_230_, 2);
lean_inc_ref(v_struct_273_);
lean_dec_ref(v_e_230_);
v___x_274_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_235_, v_inst_234_, v_fn_236_, v_x_231_, v_x_237_, v_struct_273_, v_a_239_);
return v___x_274_;
}
default: 
{
lean_object* v_toPure_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v_toBind_240_);
lean_dec(v_a_239_);
lean_dec_ref(v___x_238_);
lean_dec(v_x_237_);
lean_dec(v_fn_236_);
lean_dec_ref(v_inst_235_);
lean_dec_ref(v_inst_234_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v_e_230_);
v_toPure_275_ = lean_ctor_get(v_toApplicative_229_, 1);
lean_inc(v_toPure_275_);
lean_dec_ref(v_toApplicative_229_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_apply_2(v_toPure_275_, lean_box(0), v___x_276_);
return v___x_277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5___boxed(lean_object* v_toApplicative_278_, lean_object* v_e_279_, lean_object* v_x_280_, lean_object* v___x_281_, lean_object* v___x_282_, lean_object* v_inst_283_, lean_object* v_inst_284_, lean_object* v_fn_285_, lean_object* v_x_286_, lean_object* v___x_287_, lean_object* v_a_288_, lean_object* v_toBind_289_, lean_object* v_a_290_){
_start:
{
uint8_t v_a_boxed_291_; lean_object* v_res_292_; 
v_a_boxed_291_ = lean_unbox(v_a_290_);
v_res_292_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5(v_toApplicative_278_, v_e_279_, v_x_280_, v___x_281_, v___x_282_, v_inst_283_, v_inst_284_, v_fn_285_, v_x_286_, v___x_287_, v_a_288_, v_toBind_289_, v_a_boxed_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(lean_object* v_inst_293_, lean_object* v_inst_294_, lean_object* v_fn_295_, lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_e_298_, lean_object* v_a_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v_toApplicative_303_; lean_object* v_toBind_304_; lean_object* v___f_305_; lean_object* v___f_306_; lean_object* v___f_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_300_ = ((lean_object*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__0));
v___x_301_ = ((lean_object*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___closed__1));
lean_inc_ref(v_inst_293_);
v___x_302_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_296_, v___x_300_, v___x_301_, v_inst_293_);
v_toApplicative_303_ = lean_ctor_get(v_inst_293_, 0);
lean_inc_ref(v_toApplicative_303_);
v_toBind_304_ = lean_ctor_get(v_inst_293_, 1);
lean_inc(v_toBind_304_);
lean_inc(v_toBind_304_);
lean_inc(v_x_297_);
lean_inc(v_a_299_);
lean_inc_ref(v_e_298_);
lean_inc_ref(v_toApplicative_303_);
v___f_305_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__2), 8, 7);
lean_closure_set(v___f_305_, 0, v_toApplicative_303_);
lean_closure_set(v___f_305_, 1, v___x_300_);
lean_closure_set(v___f_305_, 2, v___x_301_);
lean_closure_set(v___f_305_, 3, v_e_298_);
lean_closure_set(v___f_305_, 4, v_a_299_);
lean_closure_set(v___f_305_, 5, v_x_297_);
lean_closure_set(v___f_305_, 6, v_toBind_304_);
lean_inc_ref(v_e_298_);
lean_inc_ref(v_toApplicative_303_);
v___f_306_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_306_, 0, v_toApplicative_303_);
lean_closure_set(v___f_306_, 1, v___x_300_);
lean_closure_set(v___f_306_, 2, v___x_301_);
lean_closure_set(v___f_306_, 3, v_e_298_);
lean_inc(v_toBind_304_);
lean_inc(v_a_299_);
lean_inc(v_x_297_);
lean_inc(v_fn_295_);
lean_inc_ref(v_e_298_);
lean_inc_ref(v_toApplicative_303_);
v___f_307_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_307_, 0, v_toApplicative_303_);
lean_closure_set(v___f_307_, 1, v_e_298_);
lean_closure_set(v___f_307_, 2, v_x_296_);
lean_closure_set(v___f_307_, 3, v___x_300_);
lean_closure_set(v___f_307_, 4, v___x_301_);
lean_closure_set(v___f_307_, 5, v_inst_294_);
lean_closure_set(v___f_307_, 6, v_inst_293_);
lean_closure_set(v___f_307_, 7, v_fn_295_);
lean_closure_set(v___f_307_, 8, v_x_297_);
lean_closure_set(v___f_307_, 9, v___x_302_);
lean_closure_set(v___f_307_, 10, v_a_299_);
lean_closure_set(v___f_307_, 11, v_toBind_304_);
lean_inc(v_toBind_304_);
v___f_308_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__6), 7, 6);
lean_closure_set(v___f_308_, 0, v_fn_295_);
lean_closure_set(v___f_308_, 1, v_e_298_);
lean_closure_set(v___f_308_, 2, v_toBind_304_);
lean_closure_set(v___f_308_, 3, v___f_307_);
lean_closure_set(v___f_308_, 4, v___f_305_);
lean_closure_set(v___f_308_, 5, v_toApplicative_303_);
v___x_309_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_309_, 0, lean_box(0));
lean_closure_set(v___x_309_, 1, lean_box(0));
lean_closure_set(v___x_309_, 2, v_a_299_);
v___x_310_ = lean_apply_2(v_x_297_, lean_box(0), v___x_309_);
lean_inc(v_toBind_304_);
v___x_311_ = lean_apply_4(v_toBind_304_, lean_box(0), lean_box(0), v___x_310_, v___f_306_);
v___x_312_ = lean_apply_4(v_toBind_304_, lean_box(0), lean_box(0), v___x_311_, v___f_308_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg___lam__4(lean_object* v_inst_313_, lean_object* v_inst_314_, lean_object* v_fn_315_, lean_object* v_x_316_, lean_object* v_x_317_, lean_object* v_arg_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_313_, v_inst_314_, v_fn_315_, v_x_316_, v_x_317_, v_arg_318_, v_a_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit(lean_object* v_m_322_, lean_object* v_inst_323_, lean_object* v_inst_324_, lean_object* v_fn_325_, lean_object* v_x_326_, lean_object* v_x_327_, lean_object* v_e_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_323_, v_inst_324_, v_fn_325_, v_x_326_, v_x_327_, v_e_328_, v_a_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0(lean_object* v_x_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_apply_1(v_x_331_, lean_box(0));
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__0___boxed(lean_object* v_x_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lean_Meta_forEachExpr_x27___redArg___lam__0(v_x_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__1(lean_object* v_inst_346_, lean_object* v_00_u03b1_347_, lean_object* v_x_348_){
_start:
{
lean_object* v___f_349_; lean_object* v___x_350_; 
v___f_349_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_349_, 0, v_x_348_);
v___x_350_ = lean_apply_2(v_inst_346_, lean_box(0), v___f_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__2(lean_object* v_toPure_351_, lean_object* v_____x_352_){
_start:
{
lean_object* v_fst_353_; lean_object* v___x_354_; 
v_fst_353_ = lean_ctor_get(v_____x_352_, 0);
lean_inc(v_fst_353_);
lean_dec_ref(v_____x_352_);
v___x_354_ = lean_apply_2(v_toPure_351_, lean_box(0), v_fst_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__3(lean_object* v_a_355_, lean_object* v_toPure_356_, lean_object* v_s_357_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v_a_355_);
lean_ctor_set(v___x_358_, 1, v_s_357_);
v___x_359_ = lean_apply_2(v_toPure_356_, lean_box(0), v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__4(lean_object* v_toPure_360_, lean_object* v_ref_361_, lean_object* v_x_362_, lean_object* v_toBind_363_, lean_object* v_a_364_){
_start:
{
lean_object* v___f_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___f_365_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__3), 3, 2);
lean_closure_set(v___f_365_, 0, v_a_364_);
lean_closure_set(v___f_365_, 1, v_toPure_360_);
v___x_366_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_366_, 0, lean_box(0));
lean_closure_set(v___x_366_, 1, lean_box(0));
lean_closure_set(v___x_366_, 2, v_ref_361_);
v___x_367_ = lean_apply_2(v_x_362_, lean_box(0), v___x_366_);
v___x_368_ = lean_apply_4(v_toBind_363_, lean_box(0), lean_box(0), v___x_367_, v___f_365_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg___lam__5(lean_object* v_toPure_369_, lean_object* v_x_370_, lean_object* v_toBind_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_fn_374_, lean_object* v_x_375_, lean_object* v_input_376_, lean_object* v_ref_377_){
_start:
{
lean_object* v___f_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
lean_inc(v_toBind_371_);
lean_inc(v_x_370_);
lean_inc(v_ref_377_);
v___f_378_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__4), 5, 4);
lean_closure_set(v___f_378_, 0, v_toPure_369_);
lean_closure_set(v___f_378_, 1, v_ref_377_);
lean_closure_set(v___f_378_, 2, v_x_370_);
lean_closure_set(v___f_378_, 3, v_toBind_371_);
v___x_379_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___redArg(v_inst_372_, v_inst_373_, v_fn_374_, v_x_375_, v_x_370_, v_input_376_, v_ref_377_);
v___x_380_ = lean_apply_4(v_toBind_371_, lean_box(0), lean_box(0), v___x_379_, v___f_378_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = lean_box(0);
v___x_382_ = lean_unsigned_to_nat(16u);
v___x_383_ = lean_mk_array(v___x_382_, v___x_381_);
return v___x_383_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__1(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__0, &l_Lean_Meta_forEachExpr_x27___redArg___closed__0_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__0);
v___x_385_ = lean_unsigned_to_nat(0u);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_384_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__2(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__1, &l_Lean_Meta_forEachExpr_x27___redArg___closed__1_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__1);
v___x_388_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_388_, 0, lean_box(0));
lean_closure_set(v___x_388_, 1, lean_box(0));
lean_closure_set(v___x_388_, 2, v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___redArg(lean_object* v_inst_389_, lean_object* v_inst_390_, lean_object* v_inst_391_, lean_object* v_input_392_, lean_object* v_fn_393_){
_start:
{
lean_object* v_x_394_; lean_object* v_toApplicative_395_; lean_object* v_toBind_396_; lean_object* v_toPure_397_; lean_object* v_x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___f_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v_x_394_ = lean_box(0);
v_toApplicative_395_ = lean_ctor_get(v_inst_389_, 0);
v_toBind_396_ = lean_ctor_get(v_inst_389_, 1);
lean_inc(v_toBind_396_);
v_toPure_397_ = lean_ctor_get(v_toApplicative_395_, 1);
lean_inc(v_toPure_397_);
lean_inc(v_inst_390_);
v_x_398_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__1), 3, 1);
lean_closure_set(v_x_398_, 0, v_inst_390_);
v___x_399_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__2, &l_Lean_Meta_forEachExpr_x27___redArg___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__2);
v___x_400_ = l_Lean_Meta_forEachExpr_x27___redArg___lam__1(v_inst_390_, lean_box(0), v___x_399_);
lean_inc(v_toPure_397_);
v___f_401_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_401_, 0, v_toPure_397_);
lean_inc(v_toBind_396_);
v___f_402_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr_x27___redArg___lam__5), 9, 8);
lean_closure_set(v___f_402_, 0, v_toPure_397_);
lean_closure_set(v___f_402_, 1, v_x_398_);
lean_closure_set(v___f_402_, 2, v_toBind_396_);
lean_closure_set(v___f_402_, 3, v_inst_389_);
lean_closure_set(v___f_402_, 4, v_inst_391_);
lean_closure_set(v___f_402_, 5, v_fn_393_);
lean_closure_set(v___f_402_, 6, v_x_394_);
lean_closure_set(v___f_402_, 7, v_input_392_);
lean_inc(v_toBind_396_);
v___x_403_ = lean_apply_4(v_toBind_396_, lean_box(0), lean_box(0), v___x_400_, v___f_402_);
v___x_404_ = lean_apply_4(v_toBind_396_, lean_box(0), lean_box(0), v___x_403_, v___f_401_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27(lean_object* v_m_405_, lean_object* v_inst_406_, lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_input_409_, lean_object* v_fn_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Meta_forEachExpr_x27___redArg(v_inst_406_, v_inst_407_, v_inst_408_, v_input_409_, v_fn_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__0(lean_object* v_toPure_412_, lean_object* v_____r_413_){
_start:
{
uint8_t v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = 1;
v___x_415_ = lean_box(v___x_414_);
v___x_416_ = lean_apply_2(v_toPure_412_, lean_box(0), v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg___lam__1(lean_object* v_f_417_, lean_object* v_toBind_418_, lean_object* v___f_419_, lean_object* v_e_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_apply_1(v_f_417_, v_e_420_);
v___x_422_ = lean_apply_4(v_toBind_418_, lean_box(0), lean_box(0), v___x_421_, v___f_419_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___redArg(lean_object* v_inst_423_, lean_object* v_inst_424_, lean_object* v_inst_425_, lean_object* v_e_426_, lean_object* v_f_427_){
_start:
{
lean_object* v_toApplicative_428_; lean_object* v_toBind_429_; lean_object* v_toPure_430_; lean_object* v___f_431_; lean_object* v___f_432_; lean_object* v___x_433_; 
v_toApplicative_428_ = lean_ctor_get(v_inst_423_, 0);
v_toBind_429_ = lean_ctor_get(v_inst_423_, 1);
v_toPure_430_ = lean_ctor_get(v_toApplicative_428_, 1);
lean_inc(v_toPure_430_);
v___f_431_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr___redArg___lam__0), 2, 1);
lean_closure_set(v___f_431_, 0, v_toPure_430_);
lean_inc(v_toBind_429_);
v___f_432_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr___redArg___lam__1), 4, 3);
lean_closure_set(v___f_432_, 0, v_f_427_);
lean_closure_set(v___f_432_, 1, v_toBind_429_);
lean_closure_set(v___f_432_, 2, v___f_431_);
v___x_433_ = l_Lean_Meta_forEachExpr_x27___redArg(v_inst_423_, v_inst_424_, v_inst_425_, v_e_426_, v___f_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr(lean_object* v_m_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_inst_437_, lean_object* v_e_438_, lean_object* v_f_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_Meta_forEachExpr___redArg(v_inst_435_, v_inst_436_, v_inst_437_, v_e_438_, v_f_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0(lean_object* v_toPure_441_, lean_object* v_____do__lift_442_){
_start:
{
lean_object* v_userName_443_; uint8_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_userName_443_ = lean_ctor_get(v_____do__lift_442_, 0);
v___x_444_ = l_Lean_Name_isAnonymous(v_userName_443_);
v___x_445_ = lean_box(v___x_444_);
v___x_446_ = lean_apply_2(v_toPure_441_, lean_box(0), v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0___boxed(lean_object* v_toPure_447_, lean_object* v_____do__lift_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0(v_toPure_447_, v_____do__lift_448_);
lean_dec_ref(v_____do__lift_448_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg(lean_object* v_inst_450_, lean_object* v_inst_451_, lean_object* v_x_452_){
_start:
{
lean_object* v_toApplicative_453_; 
v_toApplicative_453_ = lean_ctor_get(v_inst_450_, 0);
lean_inc_ref(v_toApplicative_453_);
if (lean_obj_tag(v_x_452_) == 2)
{
lean_object* v_toBind_454_; lean_object* v_toPure_455_; lean_object* v_mvarId_456_; lean_object* v___f_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_toBind_454_ = lean_ctor_get(v_inst_450_, 1);
lean_inc(v_toBind_454_);
lean_dec_ref(v_inst_450_);
v_toPure_455_ = lean_ctor_get(v_toApplicative_453_, 1);
lean_inc(v_toPure_455_);
lean_dec_ref(v_toApplicative_453_);
v_mvarId_456_ = lean_ctor_get(v_x_452_, 0);
lean_inc(v_mvarId_456_);
lean_dec_ref(v_x_452_);
v___f_457_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_457_, 0, v_toPure_455_);
v___x_458_ = lean_alloc_closure((void*)(l_Lean_MVarId_getDecl___boxed), 6, 1);
lean_closure_set(v___x_458_, 0, v_mvarId_456_);
v___x_459_ = lean_apply_2(v_inst_451_, lean_box(0), v___x_458_);
v___x_460_ = lean_apply_4(v_toBind_454_, lean_box(0), lean_box(0), v___x_459_, v___f_457_);
return v___x_460_;
}
else
{
lean_object* v_toPure_461_; uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec_ref(v_x_452_);
lean_dec(v_inst_451_);
lean_dec_ref(v_inst_450_);
v_toPure_461_ = lean_ctor_get(v_toApplicative_453_, 1);
lean_inc(v_toPure_461_);
lean_dec_ref(v_toApplicative_453_);
v___x_462_ = 0;
v___x_463_ = lean_box(v___x_462_);
v___x_464_ = lean_apply_2(v_toPure_461_, lean_box(0), v___x_463_);
return v___x_464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName(lean_object* v_m_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_x_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___redArg(v_inst_466_, v_inst_467_, v_x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0(lean_object* v_k_470_, lean_object* v_b_471_, lean_object* v_c_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lean_apply_7(v_k_470_, v_b_471_, v_c_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, lean_box(0));
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0___boxed(lean_object* v_k_479_, lean_object* v_b_480_, lean_object* v_c_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0(v_k_479_, v_b_480_, v_c_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(lean_object* v_type_488_, lean_object* v_maxFVars_x3f_489_, lean_object* v_k_490_, uint8_t v_cleanupAnnotations_491_, uint8_t v_whnfType_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v___f_498_; lean_object* v___x_499_; 
v___f_498_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_498_, 0, v_k_490_);
v___x_499_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_488_, v_maxFVars_x3f_489_, v___f_498_, v_cleanupAnnotations_491_, v_whnfType_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
v_a_508_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_499_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_499_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg___boxed(lean_object* v_type_516_, lean_object* v_maxFVars_x3f_517_, lean_object* v_k_518_, lean_object* v_cleanupAnnotations_519_, lean_object* v_whnfType_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_526_; uint8_t v_whnfType_boxed_527_; lean_object* v_res_528_; 
v_cleanupAnnotations_boxed_526_ = lean_unbox(v_cleanupAnnotations_519_);
v_whnfType_boxed_527_ = lean_unbox(v_whnfType_520_);
v_res_528_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(v_type_516_, v_maxFVars_x3f_517_, v_k_518_, v_cleanupAnnotations_boxed_526_, v_whnfType_boxed_527_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0(lean_object* v_00_u03b1_529_, lean_object* v_type_530_, lean_object* v_maxFVars_x3f_531_, lean_object* v_k_532_, uint8_t v_cleanupAnnotations_533_, uint8_t v_whnfType_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(v_type_530_, v_maxFVars_x3f_531_, v_k_532_, v_cleanupAnnotations_533_, v_whnfType_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___boxed(lean_object* v_00_u03b1_541_, lean_object* v_type_542_, lean_object* v_maxFVars_x3f_543_, lean_object* v_k_544_, lean_object* v_cleanupAnnotations_545_, lean_object* v_whnfType_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_552_; uint8_t v_whnfType_boxed_553_; lean_object* v_res_554_; 
v_cleanupAnnotations_boxed_552_ = lean_unbox(v_cleanupAnnotations_545_);
v_whnfType_boxed_553_ = lean_unbox(v_whnfType_546_);
v_res_554_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0(v_00_u03b1_541_, v_type_542_, v_maxFVars_x3f_543_, v_k_544_, v_cleanupAnnotations_boxed_552_, v_whnfType_boxed_553_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(lean_object* v_e_555_, lean_object* v___y_556_){
_start:
{
uint8_t v___x_558_; 
v___x_558_ = l_Lean_Expr_hasMVar(v_e_555_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v_e_555_);
return v___x_559_;
}
else
{
lean_object* v___x_560_; lean_object* v_mctx_561_; lean_object* v___x_562_; lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_565_; lean_object* v_cache_566_; lean_object* v_zetaDeltaFVarIds_567_; lean_object* v_postponed_568_; lean_object* v_diag_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_578_; 
v___x_560_ = lean_st_ref_get(v___y_556_);
v_mctx_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc_ref(v_mctx_561_);
lean_dec(v___x_560_);
v___x_562_ = l_Lean_instantiateMVarsCore(v_mctx_561_, v_e_555_);
v_fst_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_fst_563_);
v_snd_564_ = lean_ctor_get(v___x_562_, 1);
lean_inc(v_snd_564_);
lean_dec_ref(v___x_562_);
v___x_565_ = lean_st_ref_take(v___y_556_);
v_cache_566_ = lean_ctor_get(v___x_565_, 1);
v_zetaDeltaFVarIds_567_ = lean_ctor_get(v___x_565_, 2);
v_postponed_568_ = lean_ctor_get(v___x_565_, 3);
v_diag_569_ = lean_ctor_get(v___x_565_, 4);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v___x_565_, 0);
lean_dec(v_unused_579_);
v___x_571_ = v___x_565_;
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_diag_569_);
lean_inc(v_postponed_568_);
lean_inc(v_zetaDeltaFVarIds_567_);
lean_inc(v_cache_566_);
lean_dec(v___x_565_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v_snd_564_);
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_snd_564_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_cache_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_zetaDeltaFVarIds_567_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_postponed_568_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_diag_569_);
v___x_574_ = v_reuseFailAlloc_577_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_st_ref_set(v___y_556_, v___x_574_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v_fst_563_);
return v___x_576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg___boxed(lean_object* v_e_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(v_e_580_, v___y_581_);
lean_dec(v___y_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3(lean_object* v_e_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(v_e_584_, v___y_586_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___boxed(lean_object* v_e_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3(v_e_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0(lean_object* v_a_598_, lean_object* v___x_599_, lean_object* v_val_600_, lean_object* v___x_601_, lean_object* v_xs_602_, lean_object* v_x_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = lean_array_get_size(v_xs_602_);
v___x_610_ = lean_nat_dec_lt(v_a_598_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec_ref(v___y_604_);
lean_dec(v___x_601_);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_599_);
return v___x_611_;
}
else
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_612_ = l_Lean_instInhabitedExpr;
v___x_613_ = lean_array_get_borrowed(v___x_612_, v_xs_602_, v_a_598_);
v___x_614_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_613_, v___y_604_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref(v___x_614_);
v___x_616_ = l_Lean_LocalDecl_userName(v_a_615_);
lean_dec(v_a_615_);
v___x_617_ = l_Lean_Core_mkFreshUserName(v___x_616_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_643_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_643_ == 0)
{
v___x_620_ = v___x_617_;
v_isShared_621_ = v_isSharedCheck_643_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_643_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v_mctx_626_; lean_object* v_cache_627_; lean_object* v_zetaDeltaFVarIds_628_; lean_object* v_postponed_629_; lean_object* v_diag_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_642_; 
v___x_622_ = lean_st_ref_take(v_val_600_);
lean_inc(v___x_601_);
v___x_623_ = lean_array_push(v___x_622_, v___x_601_);
v___x_624_ = lean_st_ref_set(v_val_600_, v___x_623_);
v___x_625_ = lean_st_ref_take(v___y_605_);
v_mctx_626_ = lean_ctor_get(v___x_625_, 0);
v_cache_627_ = lean_ctor_get(v___x_625_, 1);
v_zetaDeltaFVarIds_628_ = lean_ctor_get(v___x_625_, 2);
v_postponed_629_ = lean_ctor_get(v___x_625_, 3);
v_diag_630_ = lean_ctor_get(v___x_625_, 4);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_642_ == 0)
{
v___x_632_ = v___x_625_;
v_isShared_633_ = v_isSharedCheck_642_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_diag_630_);
lean_inc(v_postponed_629_);
lean_inc(v_zetaDeltaFVarIds_628_);
lean_inc(v_cache_627_);
lean_inc(v_mctx_626_);
lean_dec(v___x_625_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_642_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = l_Lean_MetavarContext_setMVarUserNameTemporarily(v_mctx_626_, v___x_601_, v_a_618_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_634_);
v___x_636_ = v___x_632_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_cache_627_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_zetaDeltaFVarIds_628_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v_postponed_629_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_diag_630_);
v___x_636_ = v_reuseFailAlloc_641_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lean_st_ref_set(v___y_605_, v___x_636_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_599_);
v___x_639_ = v___x_620_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_599_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec(v___x_601_);
v_a_644_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_617_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_617_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___x_601_);
v_a_652_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_614_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_614_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0___boxed(lean_object* v_a_660_, lean_object* v___x_661_, lean_object* v_val_662_, lean_object* v___x_663_, lean_object* v_xs_664_, lean_object* v_x_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0(v_a_660_, v___x_661_, v_val_662_, v___x_663_, v_xs_664_, v_x_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec(v___y_667_);
lean_dec_ref(v_x_665_);
lean_dec_ref(v_xs_664_);
lean_dec(v_val_662_);
lean_dec(v_a_660_);
return v_res_671_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(lean_object* v_a_672_, lean_object* v_as_673_, size_t v_i_674_, size_t v_stop_675_){
_start:
{
uint8_t v___x_676_; 
v___x_676_ = lean_usize_dec_eq(v_i_674_, v_stop_675_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_677_ = lean_array_uget_borrowed(v_as_673_, v_i_674_);
v___x_678_ = lean_expr_eqv(v_a_672_, v___x_677_);
if (v___x_678_ == 0)
{
size_t v___x_679_; size_t v___x_680_; 
v___x_679_ = ((size_t)1ULL);
v___x_680_ = lean_usize_add(v_i_674_, v___x_679_);
v_i_674_ = v___x_680_;
goto _start;
}
else
{
return v___x_678_;
}
}
else
{
uint8_t v___x_682_; 
v___x_682_ = 0;
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1___boxed(lean_object* v_a_683_, lean_object* v_as_684_, lean_object* v_i_685_, lean_object* v_stop_686_){
_start:
{
size_t v_i_boxed_687_; size_t v_stop_boxed_688_; uint8_t v_res_689_; lean_object* v_r_690_; 
v_i_boxed_687_ = lean_unbox_usize(v_i_685_);
lean_dec(v_i_685_);
v_stop_boxed_688_ = lean_unbox_usize(v_stop_686_);
lean_dec(v_stop_686_);
v_res_689_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(v_a_683_, v_as_684_, v_i_boxed_687_, v_stop_boxed_688_);
lean_dec_ref(v_as_684_);
lean_dec_ref(v_a_683_);
v_r_690_ = lean_box(v_res_689_);
return v_r_690_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(lean_object* v_as_691_, lean_object* v_a_692_){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_693_ = lean_unsigned_to_nat(0u);
v___x_694_ = lean_array_get_size(v_as_691_);
v___x_695_ = lean_nat_dec_lt(v___x_693_, v___x_694_);
if (v___x_695_ == 0)
{
return v___x_695_;
}
else
{
if (v___x_695_ == 0)
{
return v___x_695_;
}
else
{
size_t v___x_696_; size_t v___x_697_; uint8_t v___x_698_; 
v___x_696_ = ((size_t)0ULL);
v___x_697_ = lean_usize_of_nat(v___x_694_);
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1_spec__1(v_a_692_, v_as_691_, v___x_696_, v___x_697_);
return v___x_698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1___boxed(lean_object* v_as_699_, lean_object* v_a_700_){
_start:
{
uint8_t v_res_701_; lean_object* v_r_702_; 
v_res_701_ = l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(v_as_699_, v_a_700_);
lean_dec_ref(v_a_700_);
lean_dec_ref(v_as_699_);
v_r_702_ = lean_box(v_res_701_);
return v_r_702_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(lean_object* v_upperBound_703_, lean_object* v___x_704_, lean_object* v_val_705_, lean_object* v_e_706_, lean_object* v_isTarget_707_, lean_object* v_a_708_, lean_object* v_b_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v_a_716_; uint8_t v___x_720_; 
v___x_720_ = lean_nat_dec_lt(v_a_708_, v_upperBound_703_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v_a_708_);
lean_dec(v_val_705_);
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_b_709_);
return v___x_721_;
}
else
{
lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___y_725_; uint8_t v___x_756_; 
v___x_722_ = lean_box(0);
v___x_723_ = lean_array_fget_borrowed(v___x_704_, v_a_708_);
v___x_756_ = l_Lean_Expr_isMVar(v___x_723_);
if (v___x_756_ == 0)
{
v___y_725_ = v___x_756_;
goto v___jp_724_;
}
else
{
uint8_t v___x_757_; 
v___x_757_ = l_Array_contains___at___00Lean_Meta_setMVarUserNamesAt_spec__1(v_isTarget_707_, v___x_723_);
v___y_725_ = v___x_757_;
goto v___jp_724_;
}
v___jp_724_:
{
if (v___y_725_ == 0)
{
v_a_716_ = v___x_722_;
goto v___jp_715_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = l_Lean_Expr_mvarId_x21(v___x_723_);
lean_inc(v___x_726_);
v___x_727_ = l_Lean_MVarId_getDecl(v___x_726_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v_userName_729_; uint8_t v___x_730_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref(v___x_727_);
v_userName_729_ = lean_ctor_get(v_a_728_, 0);
lean_inc(v_userName_729_);
lean_dec(v_a_728_);
v___x_730_ = l_Lean_Name_isAnonymous(v_userName_729_);
lean_dec(v_userName_729_);
if (v___x_730_ == 0)
{
lean_dec(v___x_726_);
v_a_716_ = v___x_722_;
goto v___jp_715_;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = l_Lean_Expr_getAppFn(v_e_706_);
lean_inc(v___y_713_);
lean_inc_ref(v___y_712_);
lean_inc(v___y_711_);
lean_inc_ref(v___y_710_);
v___x_732_ = lean_infer_type(v___x_731_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___f_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; lean_object* v___x_739_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref(v___x_732_);
lean_inc(v_val_705_);
lean_inc(v_a_708_);
v___f_734_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_734_, 0, v_a_708_);
lean_closure_set(v___f_734_, 1, v___x_722_);
lean_closure_set(v___f_734_, 2, v_val_705_);
lean_closure_set(v___f_734_, 3, v___x_726_);
v___x_735_ = lean_unsigned_to_nat(1u);
v___x_736_ = lean_nat_add(v_a_708_, v___x_735_);
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
v___x_738_ = 0;
lean_inc(v___y_713_);
lean_inc_ref(v___y_712_);
lean_inc(v___y_711_);
lean_inc_ref(v___y_710_);
v___x_739_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_setMVarUserNamesAt_spec__0___redArg(v_a_733_, v___x_737_, v___f_734_, v___x_738_, v___x_738_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_dec_ref(v___x_739_);
v_a_716_ = v___x_722_;
goto v___jp_715_;
}
else
{
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v_a_708_);
lean_dec(v_val_705_);
return v___x_739_;
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
lean_dec(v___x_726_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v_a_708_);
lean_dec(v_val_705_);
v_a_740_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_732_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_732_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v___x_726_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v_a_708_);
lean_dec(v_val_705_);
v_a_748_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_727_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_727_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
}
}
v___jp_715_:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = lean_unsigned_to_nat(1u);
v___x_718_ = lean_nat_add(v_a_708_, v___x_717_);
lean_dec(v_a_708_);
v_a_708_ = v___x_718_;
v_b_709_ = v_a_716_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg___boxed(lean_object* v_upperBound_758_, lean_object* v___x_759_, lean_object* v_val_760_, lean_object* v_e_761_, lean_object* v_isTarget_762_, lean_object* v_a_763_, lean_object* v_b_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(v_upperBound_758_, v___x_759_, v_val_760_, v_e_761_, v_isTarget_762_, v_a_763_, v_b_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec_ref(v_isTarget_762_);
lean_dec_ref(v_e_761_);
lean_dec_ref(v___x_759_);
lean_dec(v_upperBound_758_);
return v_res_770_;
}
}
static lean_object* _init_l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0(void){
_start:
{
lean_object* v___x_771_; lean_object* v_dummy_772_; 
v___x_771_ = lean_box(0);
v_dummy_772_ = l_Lean_Expr_sort___override(v___x_771_);
return v_dummy_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0(lean_object* v_val_773_, lean_object* v_isTarget_774_, lean_object* v___x_775_, lean_object* v_e_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
uint8_t v___x_782_; 
v___x_782_ = l_Lean_Expr_isApp(v_e_776_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec_ref(v_e_776_);
lean_dec(v___x_775_);
lean_dec(v_val_773_);
v___x_783_ = lean_box(0);
v___x_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
return v___x_784_;
}
else
{
lean_object* v_dummy_785_; lean_object* v_nargs_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v_dummy_785_ = lean_obj_once(&l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0, &l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0_once, _init_l_Lean_Meta_setMVarUserNamesAt___lam__0___closed__0);
v_nargs_786_ = l_Lean_Expr_getAppNumArgs(v_e_776_);
lean_inc(v_nargs_786_);
v___x_787_ = lean_mk_array(v_nargs_786_, v_dummy_785_);
v___x_788_ = lean_unsigned_to_nat(1u);
v___x_789_ = lean_nat_sub(v_nargs_786_, v___x_788_);
lean_dec(v_nargs_786_);
lean_inc_ref(v_e_776_);
v___x_790_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_776_, v___x_787_, v___x_789_);
v___x_791_ = lean_array_get_size(v___x_790_);
v___x_792_ = lean_box(0);
v___x_793_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(v___x_791_, v___x_790_, v_val_773_, v_e_776_, v_isTarget_774_, v___x_775_, v___x_792_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
lean_dec_ref(v_e_776_);
lean_dec_ref(v___x_790_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; 
v_unused_801_ = lean_ctor_get(v___x_793_, 0);
lean_dec(v_unused_801_);
v___x_795_ = v___x_793_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_793_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_792_);
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_792_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
else
{
return v___x_793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___lam__0___boxed(lean_object* v_val_802_, lean_object* v_isTarget_803_, lean_object* v___x_804_, lean_object* v_e_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_Meta_setMVarUserNamesAt___lam__0(v_val_802_, v_isTarget_803_, v___x_804_, v_e_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
lean_dec_ref(v_isTarget_803_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0(lean_object* v_k_812_, lean_object* v___y_813_, lean_object* v_b_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = lean_apply_7(v_k_812_, v_b_814_, v___y_813_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, lean_box(0));
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed(lean_object* v_k_821_, lean_object* v___y_822_, lean_object* v_b_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0(v_k_821_, v___y_822_, v_b_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(lean_object* v_name_830_, uint8_t v_bi_831_, lean_object* v_type_832_, lean_object* v_k_833_, uint8_t v_kind_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v___f_841_; lean_object* v___x_842_; 
v___f_841_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_841_, 0, v_k_833_);
lean_closure_set(v___f_841_, 1, v___y_835_);
v___x_842_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_830_, v_bi_831_, v_type_832_, v___f_841_, v_kind_834_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_842_) == 0)
{
return v___x_842_;
}
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___boxed(lean_object* v_name_851_, lean_object* v_bi_852_, lean_object* v_type_853_, lean_object* v_k_854_, lean_object* v_kind_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
uint8_t v_bi_boxed_862_; uint8_t v_kind_boxed_863_; lean_object* v_res_864_; 
v_bi_boxed_862_ = lean_unbox(v_bi_852_);
v_kind_boxed_863_ = lean_unbox(v_kind_855_);
v_res_864_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_name_851_, v_bi_boxed_862_, v_type_853_, v_k_854_, v_kind_boxed_863_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0___boxed(lean_object* v_fvars_865_, lean_object* v_f_866_, lean_object* v_body_867_, lean_object* v_x_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0(v_fvars_865_, v_f_866_, v_body_867_, v_x_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(lean_object* v_f_876_, lean_object* v_fvars_877_, lean_object* v_a_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
if (lean_obj_tag(v_a_878_) == 6)
{
lean_object* v_binderName_885_; lean_object* v_binderType_886_; lean_object* v_body_887_; uint8_t v_binderInfo_888_; lean_object* v_d_889_; lean_object* v___x_890_; 
v_binderName_885_ = lean_ctor_get(v_a_878_, 0);
lean_inc(v_binderName_885_);
v_binderType_886_ = lean_ctor_get(v_a_878_, 1);
lean_inc_ref(v_binderType_886_);
v_body_887_ = lean_ctor_get(v_a_878_, 2);
lean_inc_ref(v_body_887_);
v_binderInfo_888_ = lean_ctor_get_uint8(v_a_878_, sizeof(void*)*3 + 8);
lean_dec_ref(v_a_878_);
v_d_889_ = lean_expr_instantiate_rev(v_binderType_886_, v_fvars_877_);
lean_dec_ref(v_binderType_886_);
lean_inc_ref(v_f_876_);
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
lean_inc(v___y_881_);
lean_inc_ref(v___y_880_);
lean_inc(v___y_879_);
lean_inc_ref(v_d_889_);
v___x_890_ = lean_apply_7(v_f_876_, v_d_889_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___f_891_; uint8_t v___x_892_; lean_object* v___x_893_; 
lean_dec_ref(v___x_890_);
v___f_891_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0___boxed), 10, 3);
lean_closure_set(v___f_891_, 0, v_fvars_877_);
lean_closure_set(v___f_891_, 1, v_f_876_);
lean_closure_set(v___f_891_, 2, v_body_887_);
v___x_892_ = 0;
v___x_893_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_binderName_885_, v_binderInfo_888_, v_d_889_, v___f_891_, v___x_892_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_893_;
}
else
{
lean_dec_ref(v_d_889_);
lean_dec_ref(v_body_887_);
lean_dec(v_binderName_885_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v_fvars_877_);
lean_dec_ref(v_f_876_);
return v___x_890_;
}
}
else
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_expr_instantiate_rev(v_a_878_, v_fvars_877_);
lean_dec_ref(v_fvars_877_);
lean_dec_ref(v_a_878_);
v___x_895_ = lean_apply_7(v_f_876_, v___x_894_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___lam__0(lean_object* v_fvars_896_, lean_object* v_f_897_, lean_object* v_body_898_, lean_object* v_x_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = lean_array_push(v_fvars_896_, v_x_899_);
v___x_907_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(v_f_897_, v___x_906_, v_body_898_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16___boxed(lean_object* v_f_908_, lean_object* v_fvars_909_, lean_object* v_a_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(v_f_908_, v_fvars_909_, v_a_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(lean_object* v_f_918_, lean_object* v_e_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_927_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10_spec__16(v_f_918_, v___x_926_, v_e_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10___boxed(lean_object* v_f_928_, lean_object* v_e_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(v_f_928_, v_e_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_object* v_00_u03b1_937_, lean_object* v_x_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_apply_1(v_x_938_, lean_box(0));
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0___boxed(lean_object* v_00_u03b1_946_, lean_object* v_x_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(v_00_u03b1_946_, v_x_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_954_, lean_object* v_f_955_, lean_object* v_body_956_, lean_object* v_x_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0(v_fvars_954_, v_f_955_, v_body_956_, v_x_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(lean_object* v_f_965_, lean_object* v_fvars_966_, lean_object* v_a_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
if (lean_obj_tag(v_a_967_) == 7)
{
lean_object* v_binderName_974_; lean_object* v_binderType_975_; lean_object* v_body_976_; uint8_t v_binderInfo_977_; lean_object* v_d_978_; lean_object* v___x_979_; 
v_binderName_974_ = lean_ctor_get(v_a_967_, 0);
lean_inc(v_binderName_974_);
v_binderType_975_ = lean_ctor_get(v_a_967_, 1);
lean_inc_ref(v_binderType_975_);
v_body_976_ = lean_ctor_get(v_a_967_, 2);
lean_inc_ref(v_body_976_);
v_binderInfo_977_ = lean_ctor_get_uint8(v_a_967_, sizeof(void*)*3 + 8);
lean_dec_ref(v_a_967_);
v_d_978_ = lean_expr_instantiate_rev(v_binderType_975_, v_fvars_966_);
lean_dec_ref(v_binderType_975_);
lean_inc_ref(v_f_965_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
lean_inc_ref(v_d_978_);
v___x_979_ = lean_apply_7(v_f_965_, v_d_978_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, lean_box(0));
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v___f_980_; uint8_t v___x_981_; lean_object* v___x_982_; 
lean_dec_ref(v___x_979_);
v___f_980_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0___boxed), 10, 3);
lean_closure_set(v___f_980_, 0, v_fvars_966_);
lean_closure_set(v___f_980_, 1, v_f_965_);
lean_closure_set(v___f_980_, 2, v_body_976_);
v___x_981_ = 0;
v___x_982_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_binderName_974_, v_binderInfo_977_, v_d_978_, v___f_980_, v___x_981_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
return v___x_982_;
}
else
{
lean_dec_ref(v_d_978_);
lean_dec_ref(v_body_976_);
lean_dec(v_binderName_974_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v_fvars_966_);
lean_dec_ref(v_f_965_);
return v___x_979_;
}
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = lean_expr_instantiate_rev(v_a_967_, v_fvars_966_);
lean_dec_ref(v_fvars_966_);
lean_dec_ref(v_a_967_);
v___x_984_ = lean_apply_7(v_f_965_, v___x_983_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, lean_box(0));
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___lam__0(lean_object* v_fvars_985_, lean_object* v_f_986_, lean_object* v_body_987_, lean_object* v_x_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_array_push(v_fvars_985_, v_x_988_);
v___x_996_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(v_f_986_, v___x_995_, v_body_987_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14___boxed(lean_object* v_f_997_, lean_object* v_fvars_998_, lean_object* v_a_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(v_f_997_, v_fvars_998_, v_a_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(lean_object* v_f_1007_, lean_object* v_e_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_1016_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14(v_f_1007_, v___x_1015_, v_e_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9___boxed(lean_object* v_f_1017_, lean_object* v_e_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(v_f_1017_, v_e_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(lean_object* v_a_1026_, lean_object* v_x_1027_){
_start:
{
if (lean_obj_tag(v_x_1027_) == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_box(0);
return v___x_1028_;
}
else
{
lean_object* v_key_1029_; lean_object* v_value_1030_; lean_object* v_tail_1031_; uint8_t v___x_1032_; 
v_key_1029_ = lean_ctor_get(v_x_1027_, 0);
v_value_1030_ = lean_ctor_get(v_x_1027_, 1);
v_tail_1031_ = lean_ctor_get(v_x_1027_, 2);
v___x_1032_ = lean_expr_eqv(v_key_1029_, v_a_1026_);
if (v___x_1032_ == 0)
{
v_x_1027_ = v_tail_1031_;
goto _start;
}
else
{
lean_object* v___x_1034_; 
lean_inc(v_value_1030_);
v___x_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1034_, 0, v_value_1030_);
return v___x_1034_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_a_1035_, lean_object* v_x_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(v_a_1035_, v_x_1036_);
lean_dec(v_x_1036_);
lean_dec_ref(v_a_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_m_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_buckets_1040_; lean_object* v___x_1041_; uint64_t v___x_1042_; uint64_t v___x_1043_; uint64_t v___x_1044_; uint64_t v_fold_1045_; uint64_t v___x_1046_; uint64_t v___x_1047_; uint64_t v___x_1048_; size_t v___x_1049_; size_t v___x_1050_; size_t v___x_1051_; size_t v___x_1052_; size_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v_buckets_1040_ = lean_ctor_get(v_m_1038_, 1);
v___x_1041_ = lean_array_get_size(v_buckets_1040_);
v___x_1042_ = l_Lean_Expr_hash(v_a_1039_);
v___x_1043_ = 32ULL;
v___x_1044_ = lean_uint64_shift_right(v___x_1042_, v___x_1043_);
v_fold_1045_ = lean_uint64_xor(v___x_1042_, v___x_1044_);
v___x_1046_ = 16ULL;
v___x_1047_ = lean_uint64_shift_right(v_fold_1045_, v___x_1046_);
v___x_1048_ = lean_uint64_xor(v_fold_1045_, v___x_1047_);
v___x_1049_ = lean_uint64_to_usize(v___x_1048_);
v___x_1050_ = lean_usize_of_nat(v___x_1041_);
v___x_1051_ = ((size_t)1ULL);
v___x_1052_ = lean_usize_sub(v___x_1050_, v___x_1051_);
v___x_1053_ = lean_usize_land(v___x_1049_, v___x_1052_);
v___x_1054_ = lean_array_uget_borrowed(v_buckets_1040_, v___x_1053_);
v___x_1055_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(v_a_1039_, v___x_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_m_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(v_m_1056_, v_a_1057_);
lean_dec_ref(v_a_1057_);
lean_dec_ref(v_m_1056_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(lean_object* v_a_1059_, lean_object* v_b_1060_, lean_object* v_x_1061_){
_start:
{
if (lean_obj_tag(v_x_1061_) == 0)
{
lean_dec(v_b_1060_);
lean_dec_ref(v_a_1059_);
return v_x_1061_;
}
else
{
lean_object* v_key_1062_; lean_object* v_value_1063_; lean_object* v_tail_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1076_; 
v_key_1062_ = lean_ctor_get(v_x_1061_, 0);
v_value_1063_ = lean_ctor_get(v_x_1061_, 1);
v_tail_1064_ = lean_ctor_get(v_x_1061_, 2);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_x_1061_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1066_ = v_x_1061_;
v_isShared_1067_ = v_isSharedCheck_1076_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_tail_1064_);
lean_inc(v_value_1063_);
lean_inc(v_key_1062_);
lean_dec(v_x_1061_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1076_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_expr_eqv(v_key_1062_, v_a_1059_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1069_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(v_a_1059_, v_b_1060_, v_tail_1064_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 2, v___x_1069_);
v___x_1071_ = v___x_1066_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_key_1062_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v_value_1063_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
else
{
lean_object* v___x_1074_; 
lean_dec(v_value_1063_);
lean_dec(v_key_1062_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 1, v_b_1060_);
lean_ctor_set(v___x_1066_, 0, v_a_1059_);
v___x_1074_ = v___x_1066_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1059_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v_b_1060_);
lean_ctor_set(v_reuseFailAlloc_1075_, 2, v_tail_1064_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(lean_object* v_x_1077_, lean_object* v_x_1078_){
_start:
{
if (lean_obj_tag(v_x_1078_) == 0)
{
return v_x_1077_;
}
else
{
lean_object* v_key_1079_; lean_object* v_value_1080_; lean_object* v_tail_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1104_; 
v_key_1079_ = lean_ctor_get(v_x_1078_, 0);
v_value_1080_ = lean_ctor_get(v_x_1078_, 1);
v_tail_1081_ = lean_ctor_get(v_x_1078_, 2);
v_isSharedCheck_1104_ = !lean_is_exclusive(v_x_1078_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1083_ = v_x_1078_;
v_isShared_1084_ = v_isSharedCheck_1104_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_tail_1081_);
lean_inc(v_value_1080_);
lean_inc(v_key_1079_);
lean_dec(v_x_1078_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1104_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1085_; uint64_t v___x_1086_; uint64_t v___x_1087_; uint64_t v___x_1088_; uint64_t v_fold_1089_; uint64_t v___x_1090_; uint64_t v___x_1091_; uint64_t v___x_1092_; size_t v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; size_t v___x_1096_; size_t v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1085_ = lean_array_get_size(v_x_1077_);
v___x_1086_ = l_Lean_Expr_hash(v_key_1079_);
v___x_1087_ = 32ULL;
v___x_1088_ = lean_uint64_shift_right(v___x_1086_, v___x_1087_);
v_fold_1089_ = lean_uint64_xor(v___x_1086_, v___x_1088_);
v___x_1090_ = 16ULL;
v___x_1091_ = lean_uint64_shift_right(v_fold_1089_, v___x_1090_);
v___x_1092_ = lean_uint64_xor(v_fold_1089_, v___x_1091_);
v___x_1093_ = lean_uint64_to_usize(v___x_1092_);
v___x_1094_ = lean_usize_of_nat(v___x_1085_);
v___x_1095_ = ((size_t)1ULL);
v___x_1096_ = lean_usize_sub(v___x_1094_, v___x_1095_);
v___x_1097_ = lean_usize_land(v___x_1093_, v___x_1096_);
v___x_1098_ = lean_array_uget_borrowed(v_x_1077_, v___x_1097_);
lean_inc(v___x_1098_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 2, v___x_1098_);
v___x_1100_ = v___x_1083_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_key_1079_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_value_1080_);
lean_ctor_set(v_reuseFailAlloc_1103_, 2, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_array_uset(v_x_1077_, v___x_1097_, v___x_1100_);
v_x_1077_ = v___x_1101_;
v_x_1078_ = v_tail_1081_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(lean_object* v_i_1105_, lean_object* v_source_1106_, lean_object* v_target_1107_){
_start:
{
lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1108_ = lean_array_get_size(v_source_1106_);
v___x_1109_ = lean_nat_dec_lt(v_i_1105_, v___x_1108_);
if (v___x_1109_ == 0)
{
lean_dec_ref(v_source_1106_);
lean_dec(v_i_1105_);
return v_target_1107_;
}
else
{
lean_object* v_es_1110_; lean_object* v___x_1111_; lean_object* v_source_1112_; lean_object* v_target_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_es_1110_ = lean_array_fget(v_source_1106_, v_i_1105_);
v___x_1111_ = lean_box(0);
v_source_1112_ = lean_array_fset(v_source_1106_, v_i_1105_, v___x_1111_);
v_target_1113_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(v_target_1107_, v_es_1110_);
v___x_1114_ = lean_unsigned_to_nat(1u);
v___x_1115_ = lean_nat_add(v_i_1105_, v___x_1114_);
lean_dec(v_i_1105_);
v_i_1105_ = v___x_1115_;
v_source_1106_ = v_source_1112_;
v_target_1107_ = v_target_1113_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(lean_object* v_data_1117_){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v_nbuckets_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1118_ = lean_array_get_size(v_data_1117_);
v___x_1119_ = lean_unsigned_to_nat(2u);
v_nbuckets_1120_ = lean_nat_mul(v___x_1118_, v___x_1119_);
v___x_1121_ = lean_unsigned_to_nat(0u);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_mk_array(v_nbuckets_1120_, v___x_1122_);
v___x_1124_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(v___x_1121_, v_data_1117_, v___x_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(lean_object* v_a_1125_, lean_object* v_x_1126_){
_start:
{
if (lean_obj_tag(v_x_1126_) == 0)
{
uint8_t v___x_1127_; 
v___x_1127_ = 0;
return v___x_1127_;
}
else
{
lean_object* v_key_1128_; lean_object* v_tail_1129_; uint8_t v___x_1130_; 
v_key_1128_ = lean_ctor_get(v_x_1126_, 0);
v_tail_1129_ = lean_ctor_get(v_x_1126_, 2);
v___x_1130_ = lean_expr_eqv(v_key_1128_, v_a_1125_);
if (v___x_1130_ == 0)
{
v_x_1126_ = v_tail_1129_;
goto _start;
}
else
{
return v___x_1130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_a_1132_, lean_object* v_x_1133_){
_start:
{
uint8_t v_res_1134_; lean_object* v_r_1135_; 
v_res_1134_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(v_a_1132_, v_x_1133_);
lean_dec(v_x_1133_);
lean_dec_ref(v_a_1132_);
v_r_1135_ = lean_box(v_res_1134_);
return v_r_1135_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(lean_object* v_m_1136_, lean_object* v_a_1137_, lean_object* v_b_1138_){
_start:
{
lean_object* v_size_1139_; lean_object* v_buckets_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1183_; 
v_size_1139_ = lean_ctor_get(v_m_1136_, 0);
v_buckets_1140_ = lean_ctor_get(v_m_1136_, 1);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_m_1136_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1142_ = v_m_1136_;
v_isShared_1143_ = v_isSharedCheck_1183_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_buckets_1140_);
lean_inc(v_size_1139_);
lean_dec(v_m_1136_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1183_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; uint64_t v___x_1145_; uint64_t v___x_1146_; uint64_t v___x_1147_; uint64_t v_fold_1148_; uint64_t v___x_1149_; uint64_t v___x_1150_; uint64_t v___x_1151_; size_t v___x_1152_; size_t v___x_1153_; size_t v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; lean_object* v_bkt_1157_; uint8_t v___x_1158_; 
v___x_1144_ = lean_array_get_size(v_buckets_1140_);
v___x_1145_ = l_Lean_Expr_hash(v_a_1137_);
v___x_1146_ = 32ULL;
v___x_1147_ = lean_uint64_shift_right(v___x_1145_, v___x_1146_);
v_fold_1148_ = lean_uint64_xor(v___x_1145_, v___x_1147_);
v___x_1149_ = 16ULL;
v___x_1150_ = lean_uint64_shift_right(v_fold_1148_, v___x_1149_);
v___x_1151_ = lean_uint64_xor(v_fold_1148_, v___x_1150_);
v___x_1152_ = lean_uint64_to_usize(v___x_1151_);
v___x_1153_ = lean_usize_of_nat(v___x_1144_);
v___x_1154_ = ((size_t)1ULL);
v___x_1155_ = lean_usize_sub(v___x_1153_, v___x_1154_);
v___x_1156_ = lean_usize_land(v___x_1152_, v___x_1155_);
v_bkt_1157_ = lean_array_uget_borrowed(v_buckets_1140_, v___x_1156_);
v___x_1158_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(v_a_1137_, v_bkt_1157_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v_size_x27_1160_; lean_object* v___x_1161_; lean_object* v_buckets_x27_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1159_ = lean_unsigned_to_nat(1u);
v_size_x27_1160_ = lean_nat_add(v_size_1139_, v___x_1159_);
lean_dec(v_size_1139_);
lean_inc(v_bkt_1157_);
v___x_1161_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1137_);
lean_ctor_set(v___x_1161_, 1, v_b_1138_);
lean_ctor_set(v___x_1161_, 2, v_bkt_1157_);
v_buckets_x27_1162_ = lean_array_uset(v_buckets_1140_, v___x_1156_, v___x_1161_);
v___x_1163_ = lean_unsigned_to_nat(4u);
v___x_1164_ = lean_nat_mul(v_size_x27_1160_, v___x_1163_);
v___x_1165_ = lean_unsigned_to_nat(3u);
v___x_1166_ = lean_nat_div(v___x_1164_, v___x_1165_);
lean_dec(v___x_1164_);
v___x_1167_ = lean_array_get_size(v_buckets_x27_1162_);
v___x_1168_ = lean_nat_dec_le(v___x_1166_, v___x_1167_);
lean_dec(v___x_1166_);
if (v___x_1168_ == 0)
{
lean_object* v_val_1169_; lean_object* v___x_1171_; 
v_val_1169_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(v_buckets_x27_1162_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 1, v_val_1169_);
lean_ctor_set(v___x_1142_, 0, v_size_x27_1160_);
v___x_1171_ = v___x_1142_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_size_x27_1160_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_val_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
else
{
lean_object* v___x_1174_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 1, v_buckets_x27_1162_);
lean_ctor_set(v___x_1142_, 0, v_size_x27_1160_);
v___x_1174_ = v___x_1142_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_size_x27_1160_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_buckets_x27_1162_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
else
{
lean_object* v___x_1176_; lean_object* v_buckets_x27_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
lean_inc(v_bkt_1157_);
v___x_1176_ = lean_box(0);
v_buckets_x27_1177_ = lean_array_uset(v_buckets_1140_, v___x_1156_, v___x_1176_);
v___x_1178_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(v_a_1137_, v_b_1138_, v_bkt_1157_);
v___x_1179_ = lean_array_uset(v_buckets_x27_1177_, v___x_1156_, v___x_1178_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 1, v___x_1179_);
v___x_1181_ = v___x_1142_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_size_1139_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1(lean_object* v_a_1184_, lean_object* v_e_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1188_ = lean_st_ref_take(v_a_1184_);
v___x_1189_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(v___x_1188_, v_e_1185_, v_a_1186_);
v___x_1190_ = lean_st_ref_set(v_a_1184_, v___x_1189_);
v___x_1191_ = lean_box(0);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1___boxed(lean_object* v_a_1192_, lean_object* v_e_1193_, lean_object* v_a_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1(v_a_1192_, v_e_1193_, v_a_1194_);
lean_dec(v_a_1192_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(lean_object* v_name_1197_, lean_object* v_type_1198_, lean_object* v_val_1199_, lean_object* v_k_1200_, uint8_t v_nondep_1201_, uint8_t v_kind_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___f_1209_; lean_object* v___x_1210_; 
v___f_1209_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1209_, 0, v_k_1200_);
lean_closure_set(v___f_1209_, 1, v___y_1203_);
v___x_1210_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1197_, v_type_1198_, v_val_1199_, v___f_1209_, v_nondep_1201_, v_kind_1202_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
if (lean_obj_tag(v___x_1210_) == 0)
{
return v___x_1210_;
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1210_);
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
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg___boxed(lean_object* v_name_1219_, lean_object* v_type_1220_, lean_object* v_val_1221_, lean_object* v_k_1222_, lean_object* v_nondep_1223_, lean_object* v_kind_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
uint8_t v_nondep_boxed_1231_; uint8_t v_kind_boxed_1232_; lean_object* v_res_1233_; 
v_nondep_boxed_1231_ = lean_unbox(v_nondep_1223_);
v_kind_boxed_1232_ = lean_unbox(v_kind_1224_);
v_res_1233_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(v_name_1219_, v_type_1220_, v_val_1221_, v_k_1222_, v_nondep_boxed_1231_, v_kind_boxed_1232_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0___boxed(lean_object* v_fvars_1234_, lean_object* v_f_1235_, lean_object* v_body_1236_, lean_object* v_x_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0(v_fvars_1234_, v_f_1235_, v_body_1236_, v_x_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(lean_object* v_f_1245_, lean_object* v_fvars_1246_, lean_object* v_a_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
if (lean_obj_tag(v_a_1247_) == 8)
{
lean_object* v_declName_1254_; lean_object* v_type_1255_; lean_object* v_value_1256_; lean_object* v_body_1257_; lean_object* v_d_1258_; lean_object* v___x_1259_; 
v_declName_1254_ = lean_ctor_get(v_a_1247_, 0);
lean_inc(v_declName_1254_);
v_type_1255_ = lean_ctor_get(v_a_1247_, 1);
lean_inc_ref(v_type_1255_);
v_value_1256_ = lean_ctor_get(v_a_1247_, 2);
lean_inc_ref(v_value_1256_);
v_body_1257_ = lean_ctor_get(v_a_1247_, 3);
lean_inc_ref(v_body_1257_);
lean_dec_ref(v_a_1247_);
v_d_1258_ = lean_expr_instantiate_rev(v_type_1255_, v_fvars_1246_);
lean_dec_ref(v_type_1255_);
lean_inc_ref(v_f_1245_);
lean_inc(v___y_1252_);
lean_inc_ref(v___y_1251_);
lean_inc(v___y_1250_);
lean_inc_ref(v___y_1249_);
lean_inc(v___y_1248_);
lean_inc_ref(v_d_1258_);
v___x_1259_ = lean_apply_7(v_f_1245_, v_d_1258_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, lean_box(0));
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_v_1260_; lean_object* v___x_1261_; 
lean_dec_ref(v___x_1259_);
v_v_1260_ = lean_expr_instantiate_rev(v_value_1256_, v_fvars_1246_);
lean_dec_ref(v_value_1256_);
lean_inc_ref(v_f_1245_);
lean_inc(v___y_1252_);
lean_inc_ref(v___y_1251_);
lean_inc(v___y_1250_);
lean_inc_ref(v___y_1249_);
lean_inc(v___y_1248_);
lean_inc_ref(v_v_1260_);
v___x_1261_ = lean_apply_7(v_f_1245_, v_v_1260_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, lean_box(0));
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v___f_1262_; uint8_t v___x_1263_; uint8_t v___x_1264_; lean_object* v___x_1265_; 
lean_dec_ref(v___x_1261_);
v___f_1262_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1262_, 0, v_fvars_1246_);
lean_closure_set(v___f_1262_, 1, v_f_1245_);
lean_closure_set(v___f_1262_, 2, v_body_1257_);
v___x_1263_ = 0;
v___x_1264_ = 0;
v___x_1265_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(v_declName_1254_, v_d_1258_, v_v_1260_, v___f_1262_, v___x_1263_, v___x_1264_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
return v___x_1265_;
}
else
{
lean_dec_ref(v_v_1260_);
lean_dec_ref(v_d_1258_);
lean_dec_ref(v_body_1257_);
lean_dec(v_declName_1254_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v_fvars_1246_);
lean_dec_ref(v_f_1245_);
return v___x_1261_;
}
}
else
{
lean_dec_ref(v_d_1258_);
lean_dec_ref(v_body_1257_);
lean_dec_ref(v_value_1256_);
lean_dec(v_declName_1254_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v_fvars_1246_);
lean_dec_ref(v_f_1245_);
return v___x_1259_;
}
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_expr_instantiate_rev(v_a_1247_, v_fvars_1246_);
lean_dec_ref(v_fvars_1246_);
lean_dec_ref(v_a_1247_);
v___x_1267_ = lean_apply_7(v_f_1245_, v___x_1266_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, lean_box(0));
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___lam__0(lean_object* v_fvars_1268_, lean_object* v_f_1269_, lean_object* v_body_1270_, lean_object* v_x_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = lean_array_push(v_fvars_1268_, v_x_1271_);
v___x_1279_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(v_f_1269_, v___x_1278_, v_body_1270_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18___boxed(lean_object* v_f_1280_, lean_object* v_fvars_1281_, lean_object* v_a_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(v_f_1280_, v_fvars_1281_, v_a_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(lean_object* v_f_1290_, lean_object* v_e_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = ((lean_object*)(l_Lean_Meta_visitLambda___redArg___closed__0));
v___x_1299_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18(v_f_1290_, v___x_1298_, v_e_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11___boxed(lean_object* v_f_1300_, lean_object* v_e_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(v_f_1300_, v_e_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed(lean_object* v_fn_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2(v_fn_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(lean_object* v_fn_1318_, lean_object* v_e_1319_, lean_object* v_a_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_a_1327_; lean_object* v___y_1339_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_inc(v_a_1320_);
v___x_1341_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1341_, 0, lean_box(0));
lean_closure_set(v___x_1341_, 1, lean_box(0));
lean_closure_set(v___x_1341_, 2, v_a_1320_);
v___x_1342_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_box(0), v___x_1341_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1379_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1379_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1379_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(v_a_1343_, v_e_1319_);
lean_dec(v_a_1343_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v___x_1348_; 
lean_del_object(v___x_1345_);
lean_inc_ref(v_fn_1318_);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc_ref(v_e_1319_);
v___x_1348_ = lean_apply_6(v_fn_1318_, v_e_1319_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, lean_box(0));
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; uint8_t v___x_1350_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref(v___x_1348_);
v___x_1350_ = lean_unbox(v_a_1349_);
lean_dec(v_a_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; 
lean_dec_ref(v_fn_1318_);
v___x_1351_ = lean_box(0);
v_a_1327_ = v___x_1351_;
goto v___jp_1326_;
}
else
{
switch(lean_obj_tag(v_e_1319_))
{
case 7:
{
lean_object* v___f_1352_; lean_object* v___x_1353_; 
v___f_1352_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed), 8, 1);
lean_closure_set(v___f_1352_, 0, v_fn_1318_);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_e_1319_);
v___x_1353_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9(v___f_1352_, v_e_1319_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
v___y_1339_ = v___x_1353_;
goto v___jp_1338_;
}
case 6:
{
lean_object* v___f_1354_; lean_object* v___x_1355_; 
v___f_1354_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed), 8, 1);
lean_closure_set(v___f_1354_, 0, v_fn_1318_);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_e_1319_);
v___x_1355_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__10(v___f_1354_, v_e_1319_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
v___y_1339_ = v___x_1355_;
goto v___jp_1338_;
}
case 8:
{
lean_object* v___f_1356_; lean_object* v___x_1357_; 
v___f_1356_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2___boxed), 8, 1);
lean_closure_set(v___f_1356_, 0, v_fn_1318_);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_e_1319_);
v___x_1357_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11(v___f_1356_, v_e_1319_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
v___y_1339_ = v___x_1357_;
goto v___jp_1338_;
}
case 5:
{
lean_object* v_fn_1358_; lean_object* v_arg_1359_; lean_object* v___x_1360_; 
v_fn_1358_ = lean_ctor_get(v_e_1319_, 0);
v_arg_1359_ = lean_ctor_get(v_e_1319_, 1);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_fn_1358_);
lean_inc_ref(v_fn_1318_);
v___x_1360_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1318_, v_fn_1358_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v___x_1361_; 
lean_dec_ref(v___x_1360_);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_arg_1359_);
v___x_1361_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1318_, v_arg_1359_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
v___y_1339_ = v___x_1361_;
goto v___jp_1338_;
}
else
{
lean_dec_ref(v_fn_1318_);
v___y_1339_ = v___x_1360_;
goto v___jp_1338_;
}
}
case 10:
{
lean_object* v_expr_1362_; lean_object* v___x_1363_; 
v_expr_1362_ = lean_ctor_get(v_e_1319_, 1);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_expr_1362_);
v___x_1363_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1318_, v_expr_1362_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
v___y_1339_ = v___x_1363_;
goto v___jp_1338_;
}
case 11:
{
lean_object* v_struct_1364_; lean_object* v___x_1365_; 
v_struct_1364_ = lean_ctor_get(v_e_1319_, 2);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc(v_a_1320_);
lean_inc_ref(v_struct_1364_);
v___x_1365_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1318_, v_struct_1364_, v_a_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
v___y_1339_ = v___x_1365_;
goto v___jp_1338_;
}
default: 
{
lean_object* v___x_1366_; 
lean_dec_ref(v_fn_1318_);
v___x_1366_ = lean_box(0);
v_a_1327_ = v___x_1366_;
goto v___jp_1326_;
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v_a_1320_);
lean_dec_ref(v_e_1319_);
lean_dec_ref(v_fn_1318_);
v_a_1367_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1348_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1348_);
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
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
else
{
lean_object* v_val_1375_; lean_object* v___x_1377_; 
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v_a_1320_);
lean_dec_ref(v_e_1319_);
lean_dec_ref(v_fn_1318_);
v_val_1375_ = lean_ctor_get(v___x_1347_, 0);
lean_inc(v_val_1375_);
lean_dec_ref(v___x_1347_);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v_val_1375_);
v___x_1377_ = v___x_1345_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_val_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v_a_1320_);
lean_dec_ref(v_e_1319_);
lean_dec_ref(v_fn_1318_);
v_a_1380_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1342_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1342_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
v___jp_1326_:
{
lean_object* v___f_1328_; lean_object* v___x_1329_; 
v___f_1328_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1328_, 0, v_a_1320_);
lean_closure_set(v___f_1328_, 1, v_e_1319_);
lean_closure_set(v___f_1328_, 2, v_a_1327_);
v___x_1329_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__0(lean_box(0), v___f_1328_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1336_ == 0)
{
lean_object* v_unused_1337_; 
v_unused_1337_ = lean_ctor_get(v___x_1329_, 0);
lean_dec(v_unused_1337_);
v___x_1331_ = v___x_1329_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_dec(v___x_1329_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 0, v_a_1327_);
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1327_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
return v___x_1329_;
}
}
v___jp_1338_:
{
if (lean_obj_tag(v___y_1339_) == 0)
{
lean_object* v_a_1340_; 
v_a_1340_ = lean_ctor_get(v___y_1339_, 0);
lean_inc(v_a_1340_);
lean_dec_ref(v___y_1339_);
v_a_1327_ = v_a_1340_;
goto v___jp_1326_;
}
else
{
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v_a_1320_);
lean_dec_ref(v_e_1319_);
return v___y_1339_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___lam__2(lean_object* v_fn_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6___boxed(lean_object* v_fn_1397_, lean_object* v_e_1398_, lean_object* v_a_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1397_, v_e_1398_, v_a_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_object* v_00_u03b1_1406_, lean_object* v_x_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_apply_1(v_x_1407_, lean_box(0));
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0___boxed(lean_object* v_00_u03b1_1415_, lean_object* v_x_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(v_00_u03b1_1415_, v_x_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(lean_object* v_input_1423_, lean_object* v_fn_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v_a_1432_; lean_object* v___x_1433_; 
v___x_1430_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___redArg___closed__2, &l_Lean_Meta_forEachExpr_x27___redArg___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___redArg___closed__2);
v___x_1431_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_box(0), v___x_1430_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref(v___x_1431_);
lean_inc(v___y_1428_);
lean_inc_ref(v___y_1427_);
lean_inc(v___y_1426_);
lean_inc_ref(v___y_1425_);
lean_inc(v_a_1432_);
v___x_1433_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6(v_fn_1424_, v_input_1423_, v_a_1432_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref(v___x_1433_);
v___x_1435_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1435_, 0, lean_box(0));
lean_closure_set(v___x_1435_, 1, lean_box(0));
lean_closure_set(v___x_1435_, 2, v_a_1432_);
v___x_1436_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___lam__0(lean_box(0), v___x_1435_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1436_);
if (v_isSharedCheck_1443_ == 0)
{
lean_object* v_unused_1444_; 
v_unused_1444_ = lean_ctor_get(v___x_1436_, 0);
lean_dec(v_unused_1444_);
v___x_1438_ = v___x_1436_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_dec(v___x_1436_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v_a_1434_);
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1434_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
else
{
lean_dec(v_a_1432_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
return v___x_1433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5___boxed(lean_object* v_input_1445_, lean_object* v_fn_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(v_input_1445_, v_fn_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0(lean_object* v_f_1453_, lean_object* v_e_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_apply_6(v_f_1453_, v_e_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, lean_box(0));
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1469_; 
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1469_ == 0)
{
lean_object* v_unused_1470_; 
v_unused_1470_ = lean_ctor_get(v___x_1460_, 0);
lean_dec(v_unused_1470_);
v___x_1462_ = v___x_1460_;
v_isShared_1463_ = v_isSharedCheck_1469_;
goto v_resetjp_1461_;
}
else
{
lean_dec(v___x_1460_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1469_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
v___x_1464_ = 1;
v___x_1465_ = lean_box(v___x_1464_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 0, v___x_1465_);
v___x_1467_ = v___x_1462_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
v_a_1471_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1460_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1460_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0___boxed(lean_object* v_f_1479_, lean_object* v_e_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0(v_f_1479_, v_e_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(lean_object* v_e_1487_, lean_object* v_f_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v___f_1494_; lean_object* v___x_1495_; 
v___f_1494_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1494_, 0, v_f_1488_);
v___x_1495_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5(v_e_1487_, v___f_1494_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4___boxed(lean_object* v_e_1496_, lean_object* v_f_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(v_e_1496_, v_f_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt(lean_object* v_e_1506_, lean_object* v_isTarget_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v_a_1517_; lean_object* v___f_1518_; lean_object* v___x_1519_; 
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = ((lean_object*)(l_Lean_Meta_setMVarUserNamesAt___closed__0));
v___x_1515_ = lean_st_mk_ref(v___x_1514_);
v___x_1516_ = l_Lean_instantiateMVars___at___00Lean_Meta_setMVarUserNamesAt_spec__3___redArg(v_e_1506_, v_a_1509_);
v_a_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_a_1517_);
lean_dec_ref(v___x_1516_);
lean_inc(v___x_1515_);
v___f_1518_ = lean_alloc_closure((void*)(l_Lean_Meta_setMVarUserNamesAt___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1518_, 0, v___x_1515_);
lean_closure_set(v___f_1518_, 1, v_isTarget_1507_);
lean_closure_set(v___f_1518_, 2, v___x_1513_);
v___x_1519_ = l_Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4(v_a_1517_, v___f_1518_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1527_; 
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1527_ == 0)
{
lean_object* v_unused_1528_; 
v_unused_1528_ = lean_ctor_get(v___x_1519_, 0);
lean_dec(v_unused_1528_);
v___x_1521_ = v___x_1519_;
v_isShared_1522_ = v_isSharedCheck_1527_;
goto v_resetjp_1520_;
}
else
{
lean_dec(v___x_1519_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1527_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
v___x_1523_ = lean_st_ref_get(v___x_1515_);
lean_dec(v___x_1515_);
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v___x_1523_);
v___x_1525_ = v___x_1521_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
lean_dec(v___x_1515_);
v_a_1529_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1519_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1519_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_setMVarUserNamesAt___boxed(lean_object* v_e_1537_, lean_object* v_isTarget_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_Meta_setMVarUserNamesAt(v_e_1537_, v_isTarget_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2(lean_object* v_upperBound_1545_, lean_object* v___x_1546_, lean_object* v_val_1547_, lean_object* v_e_1548_, lean_object* v_isTarget_1549_, lean_object* v_inst_1550_, lean_object* v_R_1551_, lean_object* v_a_1552_, lean_object* v_b_1553_, lean_object* v_c_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___redArg(v_upperBound_1545_, v___x_1546_, v_val_1547_, v_e_1548_, v_isTarget_1549_, v_a_1552_, v_b_1553_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2___boxed(lean_object* v_upperBound_1561_, lean_object* v___x_1562_, lean_object* v_val_1563_, lean_object* v_e_1564_, lean_object* v_isTarget_1565_, lean_object* v_inst_1566_, lean_object* v_R_1567_, lean_object* v_a_1568_, lean_object* v_b_1569_, lean_object* v_c_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_setMVarUserNamesAt_spec__2(v_upperBound_1561_, v___x_1562_, v_val_1563_, v_e_1564_, v_isTarget_1565_, v_inst_1566_, v_R_1567_, v_a_1568_, v_b_1569_, v_c_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec_ref(v_isTarget_1565_);
lean_dec_ref(v_e_1564_);
lean_dec_ref(v___x_1562_);
lean_dec(v_upperBound_1561_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_1577_, lean_object* v_m_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___redArg(v_m_1578_, v_a_1579_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b2_1581_, lean_object* v_m_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7(v_00_u03b2_1581_, v_m_1582_, v_a_1583_);
lean_dec_ref(v_a_1583_);
lean_dec_ref(v_m_1582_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8(lean_object* v_00_u03b2_1585_, lean_object* v_m_1586_, lean_object* v_a_1587_, lean_object* v_b_1588_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8___redArg(v_m_1586_, v_a_1587_, v_b_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_1590_, lean_object* v_a_1591_, lean_object* v_x_1592_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___redArg(v_a_1591_, v_x_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_00_u03b2_1594_, lean_object* v_a_1595_, lean_object* v_x_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__7_spec__8(v_00_u03b2_1594_, v_a_1595_, v_x_1596_);
lean_dec(v_x_1596_);
lean_dec_ref(v_a_1595_);
return v_res_1597_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_1598_, lean_object* v_a_1599_, lean_object* v_x_1600_){
_start:
{
uint8_t v___x_1601_; 
v___x_1601_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___redArg(v_a_1599_, v_x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b2_1602_, lean_object* v_a_1603_, lean_object* v_x_1604_){
_start:
{
uint8_t v_res_1605_; lean_object* v_r_1606_; 
v_res_1605_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__10(v_00_u03b2_1602_, v_a_1603_, v_x_1604_);
lean_dec(v_x_1604_);
lean_dec_ref(v_a_1603_);
v_r_1606_ = lean_box(v_res_1605_);
return v_r_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11(lean_object* v_00_u03b2_1607_, lean_object* v_data_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11___redArg(v_data_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12(lean_object* v_00_u03b2_1610_, lean_object* v_a_1611_, lean_object* v_b_1612_, lean_object* v_x_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__12___redArg(v_a_1611_, v_b_1612_, v_x_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16(lean_object* v_00_u03b1_1615_, lean_object* v_name_1616_, uint8_t v_bi_1617_, lean_object* v_type_1618_, lean_object* v_k_1619_, uint8_t v_kind_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___redArg(v_name_1616_, v_bi_1617_, v_type_1618_, v_k_1619_, v_kind_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16___boxed(lean_object* v_00_u03b1_1628_, lean_object* v_name_1629_, lean_object* v_bi_1630_, lean_object* v_type_1631_, lean_object* v_k_1632_, lean_object* v_kind_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
uint8_t v_bi_boxed_1640_; uint8_t v_kind_boxed_1641_; lean_object* v_res_1642_; 
v_bi_boxed_1640_ = lean_unbox(v_bi_1630_);
v_kind_boxed_1641_ = lean_unbox(v_kind_1633_);
v_res_1642_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__9_spec__14_spec__16(v_00_u03b1_1628_, v_name_1629_, v_bi_boxed_1640_, v_type_1631_, v_k_1632_, v_kind_boxed_1641_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21(lean_object* v_00_u03b1_1643_, lean_object* v_name_1644_, lean_object* v_type_1645_, lean_object* v_val_1646_, lean_object* v_k_1647_, uint8_t v_nondep_1648_, uint8_t v_kind_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___redArg(v_name_1644_, v_type_1645_, v_val_1646_, v_k_1647_, v_nondep_1648_, v_kind_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21___boxed(lean_object* v_00_u03b1_1657_, lean_object* v_name_1658_, lean_object* v_type_1659_, lean_object* v_val_1660_, lean_object* v_k_1661_, lean_object* v_nondep_1662_, lean_object* v_kind_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
uint8_t v_nondep_boxed_1670_; uint8_t v_kind_boxed_1671_; lean_object* v_res_1672_; 
v_nondep_boxed_1670_ = lean_unbox(v_nondep_1662_);
v_kind_boxed_1671_ = lean_unbox(v_kind_1663_);
v_res_1672_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__11_spec__18_spec__21(v_00_u03b1_1657_, v_name_1658_, v_type_1659_, v_val_1660_, v_k_1661_, v_nondep_boxed_1670_, v_kind_boxed_1671_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12(lean_object* v_00_u03b2_1673_, lean_object* v_i_1674_, lean_object* v_source_1675_, lean_object* v_target_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12___redArg(v_i_1674_, v_source_1675_, v_target_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16(lean_object* v_00_u03b2_1678_, lean_object* v_x_1679_, lean_object* v_x_1680_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachExpr___at___00Lean_Meta_setMVarUserNamesAt_spec__4_spec__5_spec__6_spec__8_spec__11_spec__12_spec__16___redArg(v_x_1679_, v_x_1680_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(lean_object* v_as_1682_, size_t v_sz_1683_, size_t v_i_1684_, lean_object* v_b_1685_, lean_object* v___y_1686_){
_start:
{
uint8_t v___x_1688_; 
v___x_1688_ = lean_usize_dec_lt(v_i_1684_, v_sz_1683_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1689_, 0, v_b_1685_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v_mctx_1691_; lean_object* v_cache_1692_; lean_object* v_zetaDeltaFVarIds_1693_; lean_object* v_postponed_1694_; lean_object* v_diag_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1710_; 
v___x_1690_ = lean_st_ref_take(v___y_1686_);
v_mctx_1691_ = lean_ctor_get(v___x_1690_, 0);
v_cache_1692_ = lean_ctor_get(v___x_1690_, 1);
v_zetaDeltaFVarIds_1693_ = lean_ctor_get(v___x_1690_, 2);
v_postponed_1694_ = lean_ctor_get(v___x_1690_, 3);
v_diag_1695_ = lean_ctor_get(v___x_1690_, 4);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1697_ = v___x_1690_;
v_isShared_1698_ = v_isSharedCheck_1710_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_diag_1695_);
lean_inc(v_postponed_1694_);
lean_inc(v_zetaDeltaFVarIds_1693_);
lean_inc(v_cache_1692_);
lean_inc(v_mctx_1691_);
lean_dec(v___x_1690_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1710_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v_a_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1703_; 
v_a_1699_ = lean_array_uget_borrowed(v_as_1682_, v_i_1684_);
v___x_1700_ = lean_box(0);
lean_inc(v_a_1699_);
v___x_1701_ = l_Lean_MetavarContext_setMVarUserNameTemporarily(v_mctx_1691_, v_a_1699_, v___x_1700_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1701_);
v___x_1703_ = v___x_1697_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1701_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v_cache_1692_);
lean_ctor_set(v_reuseFailAlloc_1709_, 2, v_zetaDeltaFVarIds_1693_);
lean_ctor_set(v_reuseFailAlloc_1709_, 3, v_postponed_1694_);
lean_ctor_set(v_reuseFailAlloc_1709_, 4, v_diag_1695_);
v___x_1703_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; size_t v___x_1706_; size_t v___x_1707_; 
v___x_1704_ = lean_st_ref_set(v___y_1686_, v___x_1703_);
v___x_1705_ = lean_box(0);
v___x_1706_ = ((size_t)1ULL);
v___x_1707_ = lean_usize_add(v_i_1684_, v___x_1706_);
v_i_1684_ = v___x_1707_;
v_b_1685_ = v___x_1705_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg___boxed(lean_object* v_as_1711_, lean_object* v_sz_1712_, lean_object* v_i_1713_, lean_object* v_b_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
size_t v_sz_boxed_1717_; size_t v_i_boxed_1718_; lean_object* v_res_1719_; 
v_sz_boxed_1717_ = lean_unbox_usize(v_sz_1712_);
lean_dec(v_sz_1712_);
v_i_boxed_1718_ = lean_unbox_usize(v_i_1713_);
lean_dec(v_i_1713_);
v_res_1719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(v_as_1711_, v_sz_boxed_1717_, v_i_boxed_1718_, v_b_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v_as_1711_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames(lean_object* v_toReset_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v___x_1726_; size_t v_sz_1727_; size_t v___x_1728_; lean_object* v___x_1729_; 
v___x_1726_ = lean_box(0);
v_sz_1727_ = lean_array_size(v_toReset_1720_);
v___x_1728_ = ((size_t)0ULL);
v___x_1729_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(v_toReset_1720_, v_sz_1727_, v___x_1728_, v___x_1726_, v_a_1722_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1736_ == 0)
{
lean_object* v_unused_1737_; 
v_unused_1737_ = lean_ctor_get(v___x_1729_, 0);
lean_dec(v_unused_1737_);
v___x_1731_ = v___x_1729_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_dec(v___x_1729_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 0, v___x_1726_);
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1726_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
else
{
return v___x_1729_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_resetMVarUserNames___boxed(lean_object* v_toReset_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_Meta_resetMVarUserNames(v_toReset_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_);
lean_dec(v_a_1742_);
lean_dec_ref(v_a_1741_);
lean_dec(v_a_1740_);
lean_dec_ref(v_a_1739_);
lean_dec_ref(v_toReset_1738_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0(lean_object* v_as_1745_, size_t v_sz_1746_, size_t v_i_1747_, lean_object* v_b_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___redArg(v_as_1745_, v_sz_1746_, v_i_1747_, v_b_1748_, v___y_1750_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0___boxed(lean_object* v_as_1755_, lean_object* v_sz_1756_, lean_object* v_i_1757_, lean_object* v_b_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
size_t v_sz_boxed_1764_; size_t v_i_boxed_1765_; lean_object* v_res_1766_; 
v_sz_boxed_1764_ = lean_unbox_usize(v_sz_1756_);
lean_dec(v_sz_1756_);
v_i_boxed_1765_ = lean_unbox_usize(v_i_1757_);
lean_dec(v_i_1757_);
v_res_1766_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_resetMVarUserNames_spec__0(v_as_1755_, v_sz_boxed_1764_, v_i_boxed_1765_, v_b_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec_ref(v_as_1755_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(lean_object* v_x_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
if (lean_obj_tag(v_x_1767_) == 2)
{
lean_object* v_mvarId_1773_; lean_object* v___x_1774_; 
v_mvarId_1773_ = lean_ctor_get(v_x_1767_, 0);
lean_inc(v_mvarId_1773_);
lean_dec_ref(v_x_1767_);
v___x_1774_ = l_Lean_MVarId_getDecl(v_mvarId_1773_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1785_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1777_ = v___x_1774_;
v_isShared_1778_ = v_isSharedCheck_1785_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1774_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1785_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v_userName_1779_; uint8_t v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1783_; 
v_userName_1779_ = lean_ctor_get(v_a_1775_, 0);
lean_inc(v_userName_1779_);
lean_dec(v_a_1775_);
v___x_1780_ = l_Lean_Name_isAnonymous(v_userName_1779_);
lean_dec(v_userName_1779_);
v___x_1781_ = lean_box(v___x_1780_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v___x_1781_);
v___x_1783_ = v___x_1777_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
v_a_1786_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1788_ = v___x_1774_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1774_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1786_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
uint8_t v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
lean_dec_ref(v_x_1767_);
v___x_1794_ = 0;
v___x_1795_ = lean_box(v___x_1794_);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
return v___x_1796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0___boxed(lean_object* v_x_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(v_x_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0(lean_object* v_val_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_x3f_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1811_ = lean_st_ref_get(v_val_1804_);
v___x_1812_ = l_Lean_Meta_resetMVarUserNames(v___x_1811_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
lean_dec(v___x_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___lam__0___boxed(lean_object* v_val_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_x3f_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Lean_Meta_mkForallFVars_x27___lam__0(v_val_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_x3f_1818_);
lean_dec(v_a_x3f_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec(v_a_1815_);
lean_dec_ref(v_a_1814_);
lean_dec(v_val_1813_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(lean_object* v_xs_1821_, lean_object* v_as_1822_, size_t v_sz_1823_, size_t v_i_1824_, lean_object* v_b_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
uint8_t v___x_1832_; 
v___x_1832_ = lean_usize_dec_lt(v_i_1824_, v_sz_1823_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; 
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_xs_1821_);
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v_b_1825_);
return v___x_1833_;
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1835_; 
v_a_1834_ = lean_array_uget_borrowed(v_as_1822_, v_i_1824_);
lean_inc(v___y_1830_);
lean_inc_ref(v___y_1829_);
lean_inc(v___y_1828_);
lean_inc_ref(v___y_1827_);
lean_inc(v_a_1834_);
v___x_1835_ = lean_infer_type(v_a_1834_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref(v___x_1835_);
lean_inc(v___y_1830_);
lean_inc_ref(v___y_1829_);
lean_inc(v___y_1828_);
lean_inc_ref(v___y_1827_);
lean_inc_ref(v_xs_1821_);
v___x_1837_ = l_Lean_Meta_setMVarUserNamesAt(v_a_1836_, v_xs_1821_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; size_t v___x_1843_; size_t v___x_1844_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref(v___x_1837_);
v___x_1839_ = lean_st_ref_take(v___y_1826_);
v___x_1840_ = l_Array_append___redArg(v___x_1839_, v_a_1838_);
lean_dec(v_a_1838_);
v___x_1841_ = lean_st_ref_set(v___y_1826_, v___x_1840_);
v___x_1842_ = lean_box(0);
v___x_1843_ = ((size_t)1ULL);
v___x_1844_ = lean_usize_add(v_i_1824_, v___x_1843_);
v_i_1824_ = v___x_1844_;
v_b_1825_ = v___x_1842_;
goto _start;
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_xs_1821_);
v_a_1846_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1837_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1837_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_xs_1821_);
v_a_1854_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1835_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1835_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2___boxed(lean_object* v_xs_1862_, lean_object* v_as_1863_, lean_object* v_sz_1864_, lean_object* v_i_1865_, lean_object* v_b_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
size_t v_sz_boxed_1873_; size_t v_i_boxed_1874_; lean_object* v_res_1875_; 
v_sz_boxed_1873_ = lean_unbox_usize(v_sz_1864_);
lean_dec(v_sz_1864_);
v_i_boxed_1874_ = lean_unbox_usize(v_i_1865_);
lean_dec(v_i_1865_);
v_res_1875_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(v_xs_1862_, v_as_1863_, v_sz_boxed_1873_, v_i_boxed_1874_, v_b_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1867_);
lean_dec_ref(v_as_1863_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(lean_object* v_xs_1876_, lean_object* v_as_1877_, size_t v_sz_1878_, size_t v_i_1879_, lean_object* v_b_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
uint8_t v___x_1887_; 
v___x_1887_ = lean_usize_dec_lt(v_i_1879_, v_sz_1878_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; 
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec_ref(v_xs_1876_);
v___x_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1888_, 0, v_b_1880_);
return v___x_1888_;
}
else
{
lean_object* v_a_1889_; lean_object* v___x_1890_; 
v_a_1889_ = lean_array_uget_borrowed(v_as_1877_, v_i_1879_);
lean_inc(v___y_1885_);
lean_inc_ref(v___y_1884_);
lean_inc(v___y_1883_);
lean_inc_ref(v___y_1882_);
lean_inc(v_a_1889_);
v___x_1890_ = lean_infer_type(v_a_1889_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1892_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_a_1891_);
lean_dec_ref(v___x_1890_);
lean_inc(v___y_1885_);
lean_inc_ref(v___y_1884_);
lean_inc(v___y_1883_);
lean_inc_ref(v___y_1882_);
lean_inc_ref(v_xs_1876_);
v___x_1892_ = l_Lean_Meta_setMVarUserNamesAt(v_a_1891_, v_xs_1876_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; size_t v___x_1898_; size_t v___x_1899_; lean_object* v___x_1900_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc(v_a_1893_);
lean_dec_ref(v___x_1892_);
v___x_1894_ = lean_st_ref_take(v___y_1881_);
v___x_1895_ = l_Array_append___redArg(v___x_1894_, v_a_1893_);
lean_dec(v_a_1893_);
v___x_1896_ = lean_st_ref_set(v___y_1881_, v___x_1895_);
v___x_1897_ = lean_box(0);
v___x_1898_ = ((size_t)1ULL);
v___x_1899_ = lean_usize_add(v_i_1879_, v___x_1898_);
v___x_1900_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2_spec__2(v_xs_1876_, v_as_1877_, v_sz_1878_, v___x_1899_, v___x_1897_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
return v___x_1900_;
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec_ref(v_xs_1876_);
v_a_1901_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1892_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1892_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec_ref(v_xs_1876_);
v_a_1909_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1890_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1890_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2___boxed(lean_object* v_xs_1917_, lean_object* v_as_1918_, lean_object* v_sz_1919_, lean_object* v_i_1920_, lean_object* v_b_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
size_t v_sz_boxed_1928_; size_t v_i_boxed_1929_; lean_object* v_res_1930_; 
v_sz_boxed_1928_ = lean_unbox_usize(v_sz_1919_);
lean_dec(v_sz_1919_);
v_i_boxed_1929_ = lean_unbox_usize(v_i_1920_);
lean_dec(v_i_1920_);
v_res_1930_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(v_xs_1917_, v_as_1918_, v_sz_boxed_1928_, v_i_boxed_1929_, v_b_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
lean_dec(v___y_1922_);
lean_dec_ref(v_as_1918_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(lean_object* v_as_1931_, size_t v_i_1932_, size_t v_stop_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
uint8_t v___x_1939_; 
v___x_1939_ = lean_usize_dec_eq(v_i_1932_, v_stop_1933_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_array_uget_borrowed(v_as_1931_, v_i_1932_);
lean_inc(v___x_1940_);
v___x_1941_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_shouldInferBinderName___at___00Lean_Meta_mkForallFVars_x27_spec__0(v___x_1940_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1953_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1944_ = v___x_1941_;
v_isShared_1945_ = v_isSharedCheck_1953_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1941_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1953_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
uint8_t v___x_1946_; 
v___x_1946_ = lean_unbox(v_a_1942_);
if (v___x_1946_ == 0)
{
size_t v___x_1947_; size_t v___x_1948_; 
lean_del_object(v___x_1944_);
lean_dec(v_a_1942_);
v___x_1947_ = ((size_t)1ULL);
v___x_1948_ = lean_usize_add(v_i_1932_, v___x_1947_);
v_i_1932_ = v___x_1948_;
goto _start;
}
else
{
lean_object* v___x_1951_; 
if (v_isShared_1945_ == 0)
{
v___x_1951_ = v___x_1944_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1942_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
return v___x_1941_;
}
}
else
{
uint8_t v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1954_ = 0;
v___x_1955_ = lean_box(v___x_1954_);
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
return v___x_1956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1___boxed(lean_object* v_as_1957_, lean_object* v_i_1958_, lean_object* v_stop_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
size_t v_i_boxed_1965_; size_t v_stop_boxed_1966_; lean_object* v_res_1967_; 
v_i_boxed_1965_ = lean_unbox_usize(v_i_1958_);
lean_dec(v_i_1958_);
v_stop_boxed_1966_ = lean_unbox_usize(v_stop_1959_);
lean_dec(v_stop_1959_);
v_res_1967_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(v_as_1957_, v_i_boxed_1965_, v_stop_boxed_1966_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec_ref(v_as_1957_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27(lean_object* v_xs_1968_, lean_object* v_type_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_){
_start:
{
uint8_t v_a_1976_; lean_object* v___x_1980_; lean_object* v___x_1981_; uint8_t v___x_1982_; 
v___x_1980_ = lean_unsigned_to_nat(0u);
v___x_1981_ = lean_array_get_size(v_xs_1968_);
v___x_1982_ = lean_nat_dec_lt(v___x_1980_, v___x_1981_);
if (v___x_1982_ == 0)
{
v_a_1976_ = v___x_1982_;
goto v___jp_1975_;
}
else
{
if (v___x_1982_ == 0)
{
v_a_1976_ = v___x_1982_;
goto v___jp_1975_;
}
else
{
size_t v___x_1983_; size_t v___x_1984_; lean_object* v___x_1985_; 
v___x_1983_ = ((size_t)0ULL);
v___x_1984_ = lean_usize_of_nat(v___x_1981_);
v___x_1985_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkForallFVars_x27_spec__1(v_xs_1968_, v___x_1983_, v___x_1984_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; uint8_t v___x_1987_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = lean_unbox(v_a_1986_);
if (v___x_1987_ == 0)
{
uint8_t v___x_1988_; 
v___x_1988_ = lean_unbox(v_a_1986_);
lean_dec(v_a_1986_);
v_a_1976_ = v___x_1988_;
goto v___jp_1975_;
}
else
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v_a_1992_; lean_object* v___x_2011_; size_t v_sz_2012_; lean_object* v___x_2013_; 
lean_dec(v_a_1986_);
v___x_1989_ = ((lean_object*)(l_Lean_Meta_setMVarUserNamesAt___closed__0));
v___x_1990_ = lean_st_mk_ref(v___x_1989_);
v___x_2011_ = lean_box(0);
v_sz_2012_ = lean_array_size(v_xs_1968_);
lean_inc(v_a_1973_);
lean_inc_ref(v_a_1972_);
lean_inc(v_a_1971_);
lean_inc_ref(v_a_1970_);
lean_inc_ref(v_xs_1968_);
v___x_2013_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkForallFVars_x27_spec__2(v_xs_1968_, v_xs_1968_, v_sz_2012_, v___x_1983_, v___x_2011_, v___x_1990_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v___x_2014_; 
lean_dec_ref(v___x_2013_);
lean_inc(v_a_1973_);
lean_inc_ref(v_a_1972_);
lean_inc(v_a_1971_);
lean_inc_ref(v_a_1970_);
lean_inc_ref(v_xs_1968_);
lean_inc_ref(v_type_1969_);
v___x_2014_ = l_Lean_Meta_setMVarUserNamesAt(v_type_1969_, v_xs_1968_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; uint8_t v___x_2020_; lean_object* v___x_2021_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
lean_dec_ref(v___x_2014_);
v___x_2016_ = lean_st_ref_take(v___x_1990_);
v___x_2017_ = l_Array_append___redArg(v___x_2016_, v_a_2015_);
lean_dec(v_a_2015_);
v___x_2018_ = lean_st_ref_set(v___x_1990_, v___x_2017_);
v___x_2019_ = 0;
v___x_2020_ = 1;
v___x_2021_ = l_Lean_Meta_mkForallFVars(v_xs_1968_, v_type_1969_, v___x_2019_, v___x_1982_, v___x_1982_, v___x_2020_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
lean_dec_ref(v_xs_1968_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2047_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2024_ = v___x_2021_;
v_isShared_2025_ = v_isSharedCheck_2047_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_2021_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2047_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
lean_inc(v_a_2022_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set_tag(v___x_2024_, 1);
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lean_Meta_mkForallFVars_x27___lam__0(v___x_1990_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v___x_2027_);
lean_dec_ref(v___x_2027_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec_ref(v_a_1970_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2036_; 
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2036_ == 0)
{
lean_object* v_unused_2037_; 
v_unused_2037_ = lean_ctor_get(v___x_2028_, 0);
lean_dec(v_unused_2037_);
v___x_2030_ = v___x_2028_;
v_isShared_2031_ = v_isSharedCheck_2036_;
goto v_resetjp_2029_;
}
else
{
lean_dec(v___x_2028_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2036_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2032_ = lean_st_ref_get(v___x_1990_);
lean_dec(v___x_1990_);
lean_dec(v___x_2032_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v_a_2022_);
v___x_2034_ = v___x_2030_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2022_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec(v_a_2022_);
lean_dec(v___x_1990_);
v_a_2038_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2028_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2028_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
}
}
}
else
{
lean_object* v_a_2048_; 
v_a_2048_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2048_);
lean_dec_ref(v___x_2021_);
v_a_1992_ = v_a_2048_;
goto v___jp_1991_;
}
}
else
{
lean_object* v_a_2049_; 
lean_dec_ref(v_type_1969_);
lean_dec_ref(v_xs_1968_);
v_a_2049_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2049_);
lean_dec_ref(v___x_2014_);
v_a_1992_ = v_a_2049_;
goto v___jp_1991_;
}
}
else
{
lean_object* v_a_2050_; 
lean_dec_ref(v_type_1969_);
lean_dec_ref(v_xs_1968_);
v_a_2050_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2050_);
lean_dec_ref(v___x_2013_);
v_a_1992_ = v_a_2050_;
goto v___jp_1991_;
}
v___jp_1991_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_box(0);
v___x_1994_ = l_Lean_Meta_mkForallFVars_x27___lam__0(v___x_1990_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v___x_1993_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec_ref(v_a_1970_);
lean_dec(v___x_1990_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2001_ == 0)
{
lean_object* v_unused_2002_; 
v_unused_2002_ = lean_ctor_get(v___x_1994_, 0);
lean_dec(v_unused_2002_);
v___x_1996_ = v___x_1994_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_dec(v___x_1994_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
lean_ctor_set_tag(v___x_1996_, 1);
lean_ctor_set(v___x_1996_, 0, v_a_1992_);
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1992_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_dec_ref(v_a_1992_);
v_a_2003_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1994_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1994_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec_ref(v_a_1970_);
lean_dec_ref(v_type_1969_);
lean_dec_ref(v_xs_1968_);
v_a_2051_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_1985_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_1985_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
v___jp_1975_:
{
uint8_t v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1979_; 
v___x_1977_ = 1;
v___x_1978_ = 1;
v___x_1979_ = l_Lean_Meta_mkForallFVars(v_xs_1968_, v_type_1969_, v_a_1976_, v___x_1977_, v___x_1977_, v___x_1978_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec_ref(v_a_1970_);
lean_dec_ref(v_xs_1968_);
return v___x_1979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkForallFVars_x27___boxed(lean_object* v_xs_2059_, lean_object* v_type_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lean_Meta_mkForallFVars_x27(v_xs_2059_, v_type_2060_, v_a_2061_, v_a_2062_, v_a_2063_, v_a_2064_);
return v_res_2066_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ForEachExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ForEachExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ForEachExpr(builtin);
}
#ifdef __cplusplus
}
#endif
