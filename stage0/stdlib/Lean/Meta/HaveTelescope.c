// Lean compiler output
// Module: Lean.Meta.HaveTelescope
// Imports: public import Lean.Meta.Basic public import Lean.Meta.MonadSimp import Lean.Util.CollectFVars import Lean.Util.CollectLooseBVars import Lean.Meta.AppBuilder import Init.While
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Expr_collectLooseBVars(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo;
static const lean_array_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo;
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1;
static const lean_array_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_getHaveTelescopeInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_getHaveTelescopeInfo___closed__0 = (const lean_object*)&l_Lean_Meta_getHaveTelescopeInfo___closed__0_value;
static const lean_string_object l_Lean_Meta_getHaveTelescopeInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "_have_telescope_info_dummy_"};
static const lean_object* l_Lean_Meta_getHaveTelescopeInfo___closed__1 = (const lean_object*)&l_Lean_Meta_getHaveTelescopeInfo___closed__1_value;
static const lean_ctor_object l_Lean_Meta_getHaveTelescopeInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getHaveTelescopeInfo___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 236, 171, 204, 19, 216, 21, 195)}};
static const lean_object* l_Lean_Meta_getHaveTelescopeInfo___closed__2 = (const lean_object*)&l_Lean_Meta_getHaveTelescopeInfo___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getHaveTelescopeInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getHaveTelescopeInfo___closed__3;
static lean_once_cell_t l_Lean_Meta_getHaveTelescopeInfo___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getHaveTelescopeInfo___closed__4;
static lean_once_cell_t l_Lean_Meta_getHaveTelescopeInfo___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getHaveTelescopeInfo___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0 = (const lean_object*)&l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_unused_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "have_unused'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "have_body_congr_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "have_val_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_body_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "have_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "have telescope; simplifying body "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(224, 171, 76, 175, 220, 234, 86, 123)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(203, 102, 186, 241, 230, 68, 112, 189)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(231, 39, 204, 185, 148, 242, 27, 8)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "have telescope; unused "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "have telescope; fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "have telescope; non-fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Debug"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__5_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__6_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__5_value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__6_value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__7_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__13;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__15 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__15_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__15_value)} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__16 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__16_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__16_value)} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(255, 213, 12, 50, 85, 170, 122, 222)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(238, 251, 30, 34, 208, 131, 54, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(33, 35, 129, 148, 230, 9, 239, 46)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.HaveTelescope"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.HaveTelescope.0.Lean.Meta.simpHaveTelescopeAux"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "assertion violation: !rb.exprType.hasLooseBVar 0\n        "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_simp_let_unused_dummy"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 140, 102, 13, 80, 16, 156, 102)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.simpHaveTelescope"};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "assertion violation: !info.haveInfo.isEmpty\n  "};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__0, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_Lean_instInhabitedLocalDecl_default;
v___x_9_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_10_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__2, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_instInhabitedHaveInfo_default;
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_box(0);
v___x_19_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_20_ = l_Lean_Expr_const___override(v___x_19_, v___x_18_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_21_ = lean_box(0);
v___x_22_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3);
v___x_23_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_24_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_25_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set(v___x_25_, 2, v___x_23_);
lean_ctor_set(v___x_25_, 3, v___x_22_);
lean_ctor_set(v___x_25_, 4, v___x_22_);
lean_ctor_set(v___x_25_, 5, v___x_21_);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(lean_object* v_lctx_28_, lean_object* v_x_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_keyedConfig_35_; uint8_t v_trackZetaDelta_36_; lean_object* v_zetaDeltaSet_37_; lean_object* v_localInstances_38_; lean_object* v_defEqCtx_x3f_39_; lean_object* v_synthPendingDepth_40_; lean_object* v_canUnfold_x3f_41_; uint8_t v_univApprox_42_; uint8_t v_inTypeClassResolution_43_; uint8_t v_cacheInferType_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_keyedConfig_35_ = lean_ctor_get(v___y_30_, 0);
v_trackZetaDelta_36_ = lean_ctor_get_uint8(v___y_30_, sizeof(void*)*7);
v_zetaDeltaSet_37_ = lean_ctor_get(v___y_30_, 1);
v_localInstances_38_ = lean_ctor_get(v___y_30_, 3);
v_defEqCtx_x3f_39_ = lean_ctor_get(v___y_30_, 4);
v_synthPendingDepth_40_ = lean_ctor_get(v___y_30_, 5);
v_canUnfold_x3f_41_ = lean_ctor_get(v___y_30_, 6);
v_univApprox_42_ = lean_ctor_get_uint8(v___y_30_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_43_ = lean_ctor_get_uint8(v___y_30_, sizeof(void*)*7 + 2);
v_cacheInferType_44_ = lean_ctor_get_uint8(v___y_30_, sizeof(void*)*7 + 3);
v_isSharedCheck_52_ = !lean_is_exclusive(v___y_30_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v___y_30_, 2);
lean_dec(v_unused_53_);
v___x_46_ = v___y_30_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_canUnfold_x3f_41_);
lean_inc(v_synthPendingDepth_40_);
lean_inc(v_defEqCtx_x3f_39_);
lean_inc(v_localInstances_38_);
lean_inc(v_zetaDeltaSet_37_);
lean_inc(v_keyedConfig_35_);
lean_dec(v___y_30_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_49_; 
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 2, v_lctx_28_);
v___x_49_ = v___x_46_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_keyedConfig_35_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_zetaDeltaSet_37_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v_lctx_28_);
lean_ctor_set(v_reuseFailAlloc_51_, 3, v_localInstances_38_);
lean_ctor_set(v_reuseFailAlloc_51_, 4, v_defEqCtx_x3f_39_);
lean_ctor_set(v_reuseFailAlloc_51_, 5, v_synthPendingDepth_40_);
lean_ctor_set(v_reuseFailAlloc_51_, 6, v_canUnfold_x3f_41_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*7, v_trackZetaDelta_36_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*7 + 1, v_univApprox_42_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*7 + 2, v_inTypeClassResolution_43_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*7 + 3, v_cacheInferType_44_);
v___x_49_ = v_reuseFailAlloc_51_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
lean_object* v___x_50_; 
v___x_50_ = lean_apply_5(v_x_29_, v___x_49_, v___y_31_, v___y_32_, v___y_33_, lean_box(0));
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg___boxed(lean_object* v_lctx_54_, lean_object* v_x_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_54_, v_x_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object* v_00_u03b1_62_, lean_object* v_lctx_63_, lean_object* v_x_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_63_, v_x_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object* v_00_u03b1_71_, lean_object* v_lctx_72_, lean_object* v_x_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(v_00_u03b1_71_, v_lctx_72_, v_x_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(lean_object* v_x_80_, lean_object* v_x_81_){
_start:
{
if (lean_obj_tag(v_x_81_) == 0)
{
return v_x_80_;
}
else
{
lean_object* v_key_82_; lean_object* v_value_83_; lean_object* v_tail_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_107_; 
v_key_82_ = lean_ctor_get(v_x_81_, 0);
v_value_83_ = lean_ctor_get(v_x_81_, 1);
v_tail_84_ = lean_ctor_get(v_x_81_, 2);
v_isSharedCheck_107_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_107_ == 0)
{
v___x_86_ = v_x_81_;
v_isShared_87_ = v_isSharedCheck_107_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_tail_84_);
lean_inc(v_value_83_);
lean_inc(v_key_82_);
lean_dec(v_x_81_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_107_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; uint64_t v___x_89_; uint64_t v___x_90_; uint64_t v___x_91_; uint64_t v_fold_92_; uint64_t v___x_93_; uint64_t v___x_94_; uint64_t v___x_95_; size_t v___x_96_; size_t v___x_97_; size_t v___x_98_; size_t v___x_99_; size_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_88_ = lean_array_get_size(v_x_80_);
v___x_89_ = lean_uint64_of_nat(v_key_82_);
v___x_90_ = 32ULL;
v___x_91_ = lean_uint64_shift_right(v___x_89_, v___x_90_);
v_fold_92_ = lean_uint64_xor(v___x_89_, v___x_91_);
v___x_93_ = 16ULL;
v___x_94_ = lean_uint64_shift_right(v_fold_92_, v___x_93_);
v___x_95_ = lean_uint64_xor(v_fold_92_, v___x_94_);
v___x_96_ = lean_uint64_to_usize(v___x_95_);
v___x_97_ = lean_usize_of_nat(v___x_88_);
v___x_98_ = ((size_t)1ULL);
v___x_99_ = lean_usize_sub(v___x_97_, v___x_98_);
v___x_100_ = lean_usize_land(v___x_96_, v___x_99_);
v___x_101_ = lean_array_uget_borrowed(v_x_80_, v___x_100_);
lean_inc(v___x_101_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 2, v___x_101_);
v___x_103_ = v___x_86_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_key_82_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_value_83_);
lean_ctor_set(v_reuseFailAlloc_106_, 2, v___x_101_);
v___x_103_ = v_reuseFailAlloc_106_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = lean_array_uset(v_x_80_, v___x_100_, v___x_103_);
v_x_80_ = v___x_104_;
v_x_81_ = v_tail_84_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object* v_i_108_, lean_object* v_source_109_, lean_object* v_target_110_){
_start:
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_array_get_size(v_source_109_);
v___x_112_ = lean_nat_dec_lt(v_i_108_, v___x_111_);
if (v___x_112_ == 0)
{
lean_dec_ref(v_source_109_);
lean_dec(v_i_108_);
return v_target_110_;
}
else
{
lean_object* v_es_113_; lean_object* v___x_114_; lean_object* v_source_115_; lean_object* v_target_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_es_113_ = lean_array_fget(v_source_109_, v_i_108_);
v___x_114_ = lean_box(0);
v_source_115_ = lean_array_fset(v_source_109_, v_i_108_, v___x_114_);
v_target_116_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(v_target_110_, v_es_113_);
v___x_117_ = lean_unsigned_to_nat(1u);
v___x_118_ = lean_nat_add(v_i_108_, v___x_117_);
lean_dec(v_i_108_);
v_i_108_ = v___x_118_;
v_source_109_ = v_source_115_;
v_target_110_ = v_target_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object* v_data_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v_nbuckets_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_121_ = lean_array_get_size(v_data_120_);
v___x_122_ = lean_unsigned_to_nat(2u);
v_nbuckets_123_ = lean_nat_mul(v___x_121_, v___x_122_);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_box(0);
v___x_126_ = lean_mk_array(v_nbuckets_123_, v___x_125_);
v___x_127_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v___x_124_, v_data_120_, v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object* v_a_128_, lean_object* v_x_129_){
_start:
{
if (lean_obj_tag(v_x_129_) == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
else
{
lean_object* v_key_131_; lean_object* v_tail_132_; uint8_t v___x_133_; 
v_key_131_ = lean_ctor_get(v_x_129_, 0);
v_tail_132_ = lean_ctor_get(v_x_129_, 2);
v___x_133_ = lean_nat_dec_eq(v_key_131_, v_a_128_);
if (v___x_133_ == 0)
{
v_x_129_ = v_tail_132_;
goto _start;
}
else
{
return v___x_133_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object* v_a_135_, lean_object* v_x_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_135_, v_x_136_);
lean_dec(v_x_136_);
lean_dec(v_a_135_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object* v_m_139_, lean_object* v_a_140_, lean_object* v_b_141_){
_start:
{
lean_object* v_size_142_; lean_object* v_buckets_143_; lean_object* v___x_144_; uint64_t v___x_145_; uint64_t v___x_146_; uint64_t v___x_147_; uint64_t v_fold_148_; uint64_t v___x_149_; uint64_t v___x_150_; uint64_t v___x_151_; size_t v___x_152_; size_t v___x_153_; size_t v___x_154_; size_t v___x_155_; size_t v___x_156_; lean_object* v_bkt_157_; uint8_t v___x_158_; 
v_size_142_ = lean_ctor_get(v_m_139_, 0);
v_buckets_143_ = lean_ctor_get(v_m_139_, 1);
v___x_144_ = lean_array_get_size(v_buckets_143_);
v___x_145_ = lean_uint64_of_nat(v_a_140_);
v___x_146_ = 32ULL;
v___x_147_ = lean_uint64_shift_right(v___x_145_, v___x_146_);
v_fold_148_ = lean_uint64_xor(v___x_145_, v___x_147_);
v___x_149_ = 16ULL;
v___x_150_ = lean_uint64_shift_right(v_fold_148_, v___x_149_);
v___x_151_ = lean_uint64_xor(v_fold_148_, v___x_150_);
v___x_152_ = lean_uint64_to_usize(v___x_151_);
v___x_153_ = lean_usize_of_nat(v___x_144_);
v___x_154_ = ((size_t)1ULL);
v___x_155_ = lean_usize_sub(v___x_153_, v___x_154_);
v___x_156_ = lean_usize_land(v___x_152_, v___x_155_);
v_bkt_157_ = lean_array_uget_borrowed(v_buckets_143_, v___x_156_);
v___x_158_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_140_, v_bkt_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_179_; 
lean_inc_ref(v_buckets_143_);
lean_inc(v_size_142_);
v_isSharedCheck_179_ = !lean_is_exclusive(v_m_139_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_180_ = lean_ctor_get(v_m_139_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_m_139_, 0);
lean_dec(v_unused_181_);
v___x_160_ = v_m_139_;
v_isShared_161_ = v_isSharedCheck_179_;
goto v_resetjp_159_;
}
else
{
lean_dec(v_m_139_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_179_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v_size_x27_163_; lean_object* v___x_164_; lean_object* v_buckets_x27_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_162_ = lean_unsigned_to_nat(1u);
v_size_x27_163_ = lean_nat_add(v_size_142_, v___x_162_);
lean_dec(v_size_142_);
lean_inc(v_bkt_157_);
v___x_164_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_164_, 0, v_a_140_);
lean_ctor_set(v___x_164_, 1, v_b_141_);
lean_ctor_set(v___x_164_, 2, v_bkt_157_);
v_buckets_x27_165_ = lean_array_uset(v_buckets_143_, v___x_156_, v___x_164_);
v___x_166_ = lean_unsigned_to_nat(4u);
v___x_167_ = lean_nat_mul(v_size_x27_163_, v___x_166_);
v___x_168_ = lean_unsigned_to_nat(3u);
v___x_169_ = lean_nat_div(v___x_167_, v___x_168_);
lean_dec(v___x_167_);
v___x_170_ = lean_array_get_size(v_buckets_x27_165_);
v___x_171_ = lean_nat_dec_le(v___x_169_, v___x_170_);
lean_dec(v___x_169_);
if (v___x_171_ == 0)
{
lean_object* v_val_172_; lean_object* v___x_174_; 
v_val_172_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_buckets_x27_165_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_val_172_);
lean_ctor_set(v___x_160_, 0, v_size_x27_163_);
v___x_174_ = v___x_160_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_size_x27_163_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_val_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
else
{
lean_object* v___x_177_; 
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v_buckets_x27_165_);
lean_ctor_set(v___x_160_, 0, v_size_x27_163_);
v___x_177_ = v___x_160_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_size_x27_163_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_buckets_x27_165_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
else
{
lean_dec(v_b_141_);
lean_dec(v_a_140_);
return v_m_139_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object* v_numHaves_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
return v_x_183_;
}
else
{
lean_object* v_key_185_; lean_object* v_tail_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v_key_185_ = lean_ctor_get(v_x_184_, 0);
v_tail_186_ = lean_ctor_get(v_x_184_, 2);
v___x_187_ = lean_nat_sub(v_numHaves_182_, v_key_185_);
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_nat_sub(v___x_187_, v___x_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v___x_191_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_x_183_, v___x_189_, v___x_190_);
v_x_183_ = v___x_191_;
v_x_184_ = v_tail_186_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object* v_numHaves_193_, lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_193_, v_x_194_, v_x_195_);
lean_dec(v_x_195_);
lean_dec(v_numHaves_193_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object* v_numHaves_197_, lean_object* v_as_198_, size_t v_i_199_, size_t v_stop_200_, lean_object* v_b_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = lean_usize_dec_eq(v_i_199_, v_stop_200_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; size_t v___x_205_; size_t v___x_206_; 
v___x_203_ = lean_array_uget_borrowed(v_as_198_, v_i_199_);
v___x_204_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_197_, v_b_201_, v___x_203_);
v___x_205_ = ((size_t)1ULL);
v___x_206_ = lean_usize_add(v_i_199_, v___x_205_);
v_i_199_ = v___x_206_;
v_b_201_ = v___x_204_;
goto _start;
}
else
{
return v_b_201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object* v_numHaves_208_, lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_stop_211_, lean_object* v_b_212_){
_start:
{
size_t v_i_boxed_213_; size_t v_stop_boxed_214_; lean_object* v_res_215_; 
v_i_boxed_213_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_stop_boxed_214_ = lean_unbox_usize(v_stop_211_);
lean_dec(v_stop_211_);
v_res_215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_208_, v_as_209_, v_i_boxed_213_, v_stop_boxed_214_, v_b_212_);
lean_dec_ref(v_as_209_);
lean_dec(v_numHaves_208_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object* v_numHaves_216_, lean_object* v_a_217_){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v_buckets_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_220_ = l_Lean_Expr_collectLooseBVars(v_a_217_, v___x_218_);
v_buckets_221_ = lean_ctor_get(v___x_220_, 1);
lean_inc_ref(v_buckets_221_);
lean_dec_ref(v___x_220_);
v___x_222_ = lean_array_get_size(v_buckets_221_);
v___x_223_ = lean_nat_dec_lt(v___x_218_, v___x_222_);
if (v___x_223_ == 0)
{
lean_dec_ref(v_buckets_221_);
return v___x_219_;
}
else
{
uint8_t v___x_224_; 
v___x_224_ = lean_nat_dec_le(v___x_222_, v___x_222_);
if (v___x_224_ == 0)
{
if (v___x_223_ == 0)
{
lean_dec_ref(v_buckets_221_);
return v___x_219_;
}
else
{
size_t v___x_225_; size_t v___x_226_; lean_object* v___x_227_; 
v___x_225_ = ((size_t)0ULL);
v___x_226_ = lean_usize_of_nat(v___x_222_);
v___x_227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_216_, v_buckets_221_, v___x_225_, v___x_226_, v___x_219_);
lean_dec_ref(v_buckets_221_);
return v___x_227_;
}
}
else
{
size_t v___x_228_; size_t v___x_229_; lean_object* v___x_230_; 
v___x_228_ = ((size_t)0ULL);
v___x_229_ = lean_usize_of_nat(v___x_222_);
v___x_230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_216_, v_buckets_221_, v___x_228_, v___x_229_, v___x_219_);
lean_dec_ref(v_buckets_221_);
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object* v_numHaves_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_231_, v_a_232_);
lean_dec(v_numHaves_231_);
return v_res_233_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object* v_k_234_, lean_object* v_t_235_){
_start:
{
if (lean_obj_tag(v_t_235_) == 0)
{
lean_object* v_k_236_; lean_object* v_l_237_; lean_object* v_r_238_; uint8_t v___x_239_; 
v_k_236_ = lean_ctor_get(v_t_235_, 1);
v_l_237_ = lean_ctor_get(v_t_235_, 3);
v_r_238_ = lean_ctor_get(v_t_235_, 4);
v___x_239_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_234_, v_k_236_);
switch(v___x_239_)
{
case 0:
{
v_t_235_ = v_l_237_;
goto _start;
}
case 1:
{
uint8_t v___x_241_; 
v___x_241_ = 1;
return v___x_241_;
}
default: 
{
v_t_235_ = v_r_238_;
goto _start;
}
}
}
else
{
uint8_t v___x_243_; 
v___x_243_ = 0;
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object* v_k_244_, lean_object* v_t_245_){
_start:
{
uint8_t v_res_246_; lean_object* v_r_247_; 
v_res_246_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_k_244_, v_t_245_);
lean_dec(v_t_245_);
lean_dec(v_k_244_);
v_r_247_ = lean_box(v_res_246_);
return v_r_247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object* v_fvars_248_, lean_object* v___x_249_, lean_object* v_n_250_, lean_object* v_j_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_zero_253_; uint8_t v_isZero_254_; 
v_zero_253_ = lean_unsigned_to_nat(0u);
v_isZero_254_ = lean_nat_dec_eq(v_j_251_, v_zero_253_);
if (v_isZero_254_ == 1)
{
lean_dec(v_j_251_);
return v_a_252_;
}
else
{
lean_object* v_one_255_; lean_object* v_n_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_one_255_ = lean_unsigned_to_nat(1u);
v_n_256_ = lean_nat_sub(v_j_251_, v_one_255_);
v___x_257_ = lean_nat_sub(v_n_250_, v_j_251_);
lean_dec(v_j_251_);
v___x_258_ = lean_array_fget_borrowed(v_fvars_248_, v___x_257_);
v___x_259_ = l_Lean_Expr_fvarId_x21(v___x_258_);
v___x_260_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v___x_259_, v___x_249_);
lean_dec(v___x_259_);
if (v___x_260_ == 0)
{
lean_dec(v___x_257_);
v_j_251_ = v_n_256_;
goto _start;
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_box(0);
v___x_263_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_a_252_, v___x_257_, v___x_262_);
v_j_251_ = v_n_256_;
v_a_252_ = v___x_263_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object* v_fvars_265_, lean_object* v___x_266_, lean_object* v_n_267_, lean_object* v_j_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_265_, v___x_266_, v_n_267_, v_j_268_, v_a_269_);
lean_dec(v_n_267_);
lean_dec(v___x_266_);
lean_dec_ref(v_fvars_265_);
return v_res_270_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_271_ = lean_box(0);
v___x_272_ = lean_unsigned_to_nat(16u);
v___x_273_ = lean_mk_array(v___x_272_, v___x_271_);
return v___x_273_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0);
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object* v_body_279_, lean_object* v___x_280_, lean_object* v_fvars_281_, lean_object* v_info_282_, lean_object* v_bodyDeps_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v___x_289_; 
lean_inc(v___y_287_);
lean_inc_ref(v___y_286_);
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
lean_inc_ref(v_body_279_);
v___x_289_ = lean_infer_type(v_body_279_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref(v___x_289_);
lean_inc(v_a_290_);
v___x_291_ = l_Lean_Meta_getLevel(v_a_290_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_319_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_319_ == 0)
{
v___x_294_ = v___x_291_;
v_isShared_295_ = v_isSharedCheck_319_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_319_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v_fvarSet_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v_haveInfo_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_313_; 
v___x_296_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
v___x_297_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2));
v___x_298_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_280_);
lean_ctor_set(v___x_298_, 2, v___x_297_);
lean_inc(v_a_290_);
v___x_299_ = l_Lean_collectFVars(v___x_298_, v_a_290_);
v_fvarSet_300_ = lean_ctor_get(v___x_299_, 1);
lean_inc(v_fvarSet_300_);
lean_dec_ref(v___x_299_);
v___x_301_ = lean_array_get_size(v_fvars_281_);
v___x_302_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_281_, v_fvarSet_300_, v___x_301_, v___x_301_, v___x_296_);
lean_dec(v_fvarSet_300_);
v_haveInfo_303_ = lean_ctor_get(v_info_282_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v_info_282_);
if (v_isSharedCheck_313_ == 0)
{
lean_object* v_unused_314_; lean_object* v_unused_315_; lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; 
v_unused_314_ = lean_ctor_get(v_info_282_, 5);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_info_282_, 4);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_info_282_, 3);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_info_282_, 2);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_info_282_, 1);
lean_dec(v_unused_318_);
v___x_305_ = v_info_282_;
v_isShared_306_ = v_isSharedCheck_313_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_haveInfo_303_);
lean_dec(v_info_282_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_313_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 5, v_a_292_);
lean_ctor_set(v___x_305_, 4, v_a_290_);
lean_ctor_set(v___x_305_, 3, v_body_279_);
lean_ctor_set(v___x_305_, 2, v___x_302_);
lean_ctor_set(v___x_305_, 1, v_bodyDeps_283_);
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_haveInfo_303_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_bodyDeps_283_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_312_, 3, v_body_279_);
lean_ctor_set(v_reuseFailAlloc_312_, 4, v_a_290_);
lean_ctor_set(v_reuseFailAlloc_312_, 5, v_a_292_);
v___x_308_ = v_reuseFailAlloc_312_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_310_; 
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_308_);
v___x_310_ = v___x_294_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_290_);
lean_dec_ref(v_bodyDeps_283_);
lean_dec_ref(v_info_282_);
lean_dec(v___x_280_);
lean_dec_ref(v_body_279_);
v_a_320_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_291_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_291_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec_ref(v_bodyDeps_283_);
lean_dec_ref(v_info_282_);
lean_dec(v___x_280_);
lean_dec_ref(v_body_279_);
v_a_328_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_289_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_289_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object* v_body_336_, lean_object* v___x_337_, lean_object* v_fvars_338_, lean_object* v_info_339_, lean_object* v_bodyDeps_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(v_body_336_, v___x_337_, v_fvars_338_, v_info_339_, v_bodyDeps_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec_ref(v_fvars_338_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; lean_object* v_ngen_350_; lean_object* v_namePrefix_351_; lean_object* v_idx_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_381_; 
v___x_349_ = lean_st_ref_get(v___y_347_);
v_ngen_350_ = lean_ctor_get(v___x_349_, 2);
lean_inc_ref(v_ngen_350_);
lean_dec(v___x_349_);
v_namePrefix_351_ = lean_ctor_get(v_ngen_350_, 0);
v_idx_352_ = lean_ctor_get(v_ngen_350_, 1);
v_isSharedCheck_381_ = !lean_is_exclusive(v_ngen_350_);
if (v_isSharedCheck_381_ == 0)
{
v___x_354_ = v_ngen_350_;
v_isShared_355_ = v_isSharedCheck_381_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_idx_352_);
lean_inc(v_namePrefix_351_);
lean_dec(v_ngen_350_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_381_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v_env_357_; lean_object* v_nextMacroScope_358_; lean_object* v_auxDeclNGen_359_; lean_object* v_traceState_360_; lean_object* v_cache_361_; lean_object* v_messages_362_; lean_object* v_infoState_363_; lean_object* v_snapshotTasks_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_379_; 
v___x_356_ = lean_st_ref_take(v___y_347_);
v_env_357_ = lean_ctor_get(v___x_356_, 0);
v_nextMacroScope_358_ = lean_ctor_get(v___x_356_, 1);
v_auxDeclNGen_359_ = lean_ctor_get(v___x_356_, 3);
v_traceState_360_ = lean_ctor_get(v___x_356_, 4);
v_cache_361_ = lean_ctor_get(v___x_356_, 5);
v_messages_362_ = lean_ctor_get(v___x_356_, 6);
v_infoState_363_ = lean_ctor_get(v___x_356_, 7);
v_snapshotTasks_364_ = lean_ctor_get(v___x_356_, 8);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; 
v_unused_380_ = lean_ctor_get(v___x_356_, 2);
lean_dec(v_unused_380_);
v___x_366_ = v___x_356_;
v_isShared_367_ = v_isSharedCheck_379_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_snapshotTasks_364_);
lean_inc(v_infoState_363_);
lean_inc(v_messages_362_);
lean_inc(v_cache_361_);
lean_inc(v_traceState_360_);
lean_inc(v_auxDeclNGen_359_);
lean_inc(v_nextMacroScope_358_);
lean_inc(v_env_357_);
lean_dec(v___x_356_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_379_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v_r_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
lean_inc(v_idx_352_);
lean_inc(v_namePrefix_351_);
v_r_368_ = l_Lean_Name_num___override(v_namePrefix_351_, v_idx_352_);
v___x_369_ = lean_unsigned_to_nat(1u);
v___x_370_ = lean_nat_add(v_idx_352_, v___x_369_);
lean_dec(v_idx_352_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v___x_370_);
v___x_372_ = v___x_354_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_namePrefix_351_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_370_);
v___x_372_ = v_reuseFailAlloc_378_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_374_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 2, v___x_372_);
v___x_374_ = v___x_366_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_env_357_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_nextMacroScope_358_);
lean_ctor_set(v_reuseFailAlloc_377_, 2, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_377_, 3, v_auxDeclNGen_359_);
lean_ctor_set(v_reuseFailAlloc_377_, 4, v_traceState_360_);
lean_ctor_set(v_reuseFailAlloc_377_, 5, v_cache_361_);
lean_ctor_set(v_reuseFailAlloc_377_, 6, v_messages_362_);
lean_ctor_set(v_reuseFailAlloc_377_, 7, v_infoState_363_);
lean_ctor_set(v_reuseFailAlloc_377_, 8, v_snapshotTasks_364_);
v___x_374_ = v_reuseFailAlloc_377_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_st_ref_set(v___y_347_, v___x_374_);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v_r_368_);
return v___x_376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg___boxed(lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_382_);
lean_dec(v___y_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
v___x_390_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_388_);
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6___boxed(lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object* v_e_405_, lean_object* v_numHaves_406_, lean_object* v_info_407_, lean_object* v_lctx_408_, lean_object* v_fvars_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___x_415_; lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; lean_object* v___y_420_; 
v___x_415_ = lean_box(1);
if (lean_obj_tag(v_e_405_) == 8)
{
uint8_t v_nondep_425_; 
v_nondep_425_ = lean_ctor_get_uint8(v_e_405_, sizeof(void*)*4 + 8);
if (v_nondep_425_ == 1)
{
lean_object* v_declName_426_; lean_object* v_type_427_; lean_object* v_value_428_; lean_object* v_body_429_; lean_object* v_t_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_declName_426_ = lean_ctor_get(v_e_405_, 0);
lean_inc(v_declName_426_);
v_type_427_ = lean_ctor_get(v_e_405_, 1);
lean_inc_ref(v_type_427_);
v_value_428_ = lean_ctor_get(v_e_405_, 2);
lean_inc_ref(v_value_428_);
v_body_429_ = lean_ctor_get(v_e_405_, 3);
lean_inc_ref(v_body_429_);
lean_dec_ref(v_e_405_);
v_t_430_ = lean_expr_instantiate_rev(v_type_427_, v_fvars_409_);
lean_inc_ref(v_t_430_);
v___x_431_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_431_, 0, v_t_430_);
lean_inc(v_a_413_);
lean_inc_ref(v_a_412_);
lean_inc(v_a_411_);
lean_inc_ref(v_a_410_);
lean_inc_ref(v_lctx_408_);
v___x_432_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_408_, v___x_431_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_434_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref(v___x_432_);
v___x_434_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v_haveInfo_436_; lean_object* v_bodyDeps_437_; lean_object* v_bodyTypeDeps_438_; lean_object* v_body_439_; lean_object* v_bodyType_440_; lean_object* v_level_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_462_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref(v___x_434_);
v_haveInfo_436_ = lean_ctor_get(v_info_407_, 0);
v_bodyDeps_437_ = lean_ctor_get(v_info_407_, 1);
v_bodyTypeDeps_438_ = lean_ctor_get(v_info_407_, 2);
v_body_439_ = lean_ctor_get(v_info_407_, 3);
v_bodyType_440_ = lean_ctor_get(v_info_407_, 4);
v_level_441_ = lean_ctor_get(v_info_407_, 5);
v_isSharedCheck_462_ = !lean_is_exclusive(v_info_407_);
if (v_isSharedCheck_462_ == 0)
{
v___x_443_ = v_info_407_;
v_isShared_444_ = v_isSharedCheck_462_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_level_441_);
lean_inc(v_bodyType_440_);
lean_inc(v_body_439_);
lean_inc(v_bodyTypeDeps_438_);
lean_inc(v_bodyDeps_437_);
lean_inc(v_haveInfo_436_);
lean_dec(v_info_407_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_462_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v_typeBackDeps_445_; lean_object* v_valueBackDeps_446_; lean_object* v_v_447_; lean_object* v___x_448_; uint8_t v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v_typeBackDeps_445_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_406_, v_type_427_);
lean_inc_ref(v_value_428_);
v_valueBackDeps_446_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_406_, v_value_428_);
v_v_447_ = lean_expr_instantiate_rev(v_value_428_, v_fvars_409_);
lean_dec_ref(v_value_428_);
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = 0;
lean_inc(v_a_435_);
v___x_450_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v_a_435_);
lean_ctor_set(v___x_450_, 2, v_declName_426_);
lean_ctor_set(v___x_450_, 3, v_t_430_);
lean_ctor_set(v___x_450_, 4, v_v_447_);
lean_ctor_set_uint8(v___x_450_, sizeof(void*)*5, v_nondep_425_);
lean_ctor_set_uint8(v___x_450_, sizeof(void*)*5 + 1, v___x_449_);
lean_inc_ref(v___x_450_);
v___x_451_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_451_, 0, v_typeBackDeps_445_);
lean_ctor_set(v___x_451_, 1, v_valueBackDeps_446_);
lean_ctor_set(v___x_451_, 2, v___x_450_);
lean_ctor_set(v___x_451_, 3, v_a_433_);
v___x_452_ = lean_array_push(v_haveInfo_436_, v___x_451_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_452_);
v___x_454_ = v___x_443_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_bodyDeps_437_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_bodyTypeDeps_438_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_body_439_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v_bodyType_440_);
lean_ctor_set(v_reuseFailAlloc_461_, 5, v_level_441_);
v___x_454_ = v_reuseFailAlloc_461_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_455_ = l_Lean_LocalContext_addDecl(v_lctx_408_, v___x_450_);
v___x_456_ = l_Lean_mkFVar(v_a_435_);
v___x_457_ = lean_array_push(v_fvars_409_, v___x_456_);
v___x_458_ = lean_unsigned_to_nat(1u);
v___x_459_ = lean_nat_add(v_numHaves_406_, v___x_458_);
lean_dec(v_numHaves_406_);
v_e_405_ = v_body_429_;
v_numHaves_406_ = v___x_459_;
v_info_407_ = v___x_454_;
v_lctx_408_ = v___x_455_;
v_fvars_409_ = v___x_457_;
goto _start;
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_dec(v_a_433_);
lean_dec_ref(v_t_430_);
lean_dec_ref(v_body_429_);
lean_dec_ref(v_value_428_);
lean_dec_ref(v_type_427_);
lean_dec(v_declName_426_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec_ref(v_fvars_409_);
lean_dec_ref(v_lctx_408_);
lean_dec_ref(v_info_407_);
lean_dec(v_numHaves_406_);
v_a_463_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_434_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_434_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_dec_ref(v_t_430_);
lean_dec_ref(v_body_429_);
lean_dec_ref(v_value_428_);
lean_dec_ref(v_type_427_);
lean_dec(v_declName_426_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec_ref(v_fvars_409_);
lean_dec_ref(v_lctx_408_);
lean_dec_ref(v_info_407_);
lean_dec(v_numHaves_406_);
v_a_471_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_432_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_432_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
v___y_417_ = v_a_410_;
v___y_418_ = v_a_411_;
v___y_419_ = v_a_412_;
v___y_420_ = v_a_413_;
goto v___jp_416_;
}
}
else
{
v___y_417_ = v_a_410_;
v___y_418_ = v_a_411_;
v___y_419_ = v_a_412_;
v___y_420_ = v_a_413_;
goto v___jp_416_;
}
v___jp_416_:
{
lean_object* v_bodyDeps_421_; lean_object* v_body_422_; lean_object* v___f_423_; lean_object* v___x_424_; 
lean_inc_ref(v_e_405_);
v_bodyDeps_421_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_406_, v_e_405_);
lean_dec(v_numHaves_406_);
v_body_422_ = lean_expr_instantiate_rev(v_e_405_, v_fvars_409_);
lean_dec_ref(v_e_405_);
v___f_423_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed), 10, 5);
lean_closure_set(v___f_423_, 0, v_body_422_);
lean_closure_set(v___f_423_, 1, v___x_415_);
lean_closure_set(v___f_423_, 2, v_fvars_409_);
lean_closure_set(v___f_423_, 3, v_info_407_);
lean_closure_set(v___f_423_, 4, v_bodyDeps_421_);
v___x_424_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_408_, v___f_423_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object* v_e_479_, lean_object* v_numHaves_480_, lean_object* v_info_481_, lean_object* v_lctx_482_, lean_object* v_fvars_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_479_, v_numHaves_480_, v_info_481_, v_lctx_482_, v_fvars_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object* v_00_u03b2_490_, lean_object* v_m_491_, lean_object* v_a_492_, lean_object* v_b_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_m_491_, v_a_492_, v_b_493_);
return v___x_494_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object* v_00_u03b2_495_, lean_object* v_k_496_, lean_object* v_t_497_){
_start:
{
uint8_t v___x_498_; 
v___x_498_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_k_496_, v_t_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object* v_00_u03b2_499_, lean_object* v_k_500_, lean_object* v_t_501_){
_start:
{
uint8_t v_res_502_; lean_object* v_r_503_; 
v_res_502_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(v_00_u03b2_499_, v_k_500_, v_t_501_);
lean_dec(v_t_501_);
lean_dec(v_k_500_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object* v_fvars_504_, lean_object* v___x_505_, lean_object* v_n_506_, lean_object* v_j_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_504_, v___x_505_, v_n_506_, v_j_507_, v_a_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object* v_fvars_511_, lean_object* v___x_512_, lean_object* v_n_513_, lean_object* v_j_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(v_fvars_511_, v___x_512_, v_n_513_, v_j_514_, v_a_515_, v_a_516_);
lean_dec(v_n_513_);
lean_dec(v___x_512_);
lean_dec_ref(v_fvars_511_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_521_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___boxed(lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(v___y_524_, v___y_525_, v___y_526_, v___y_527_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
return v_res_529_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object* v_00_u03b2_530_, lean_object* v_a_531_, lean_object* v_x_532_){
_start:
{
uint8_t v___x_533_; 
v___x_533_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_531_, v_x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object* v_00_u03b2_534_, lean_object* v_a_535_, lean_object* v_x_536_){
_start:
{
uint8_t v_res_537_; lean_object* v_r_538_; 
v_res_537_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(v_00_u03b2_534_, v_a_535_, v_x_536_);
lean_dec(v_x_536_);
lean_dec(v_a_535_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object* v_00_u03b2_539_, lean_object* v_data_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_data_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_542_, lean_object* v_i_543_, lean_object* v_source_544_, lean_object* v_target_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v_i_543_, v_source_544_, v_target_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10(lean_object* v_00_u03b2_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(v_x_548_, v_x_549_);
return v___x_550_;
}
}
static lean_object* _init_l_Lean_Meta_getHaveTelescopeInfo___closed__3(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = lean_box(0);
v___x_557_ = ((lean_object*)(l_Lean_Meta_getHaveTelescopeInfo___closed__2));
v___x_558_ = l_Lean_Expr_const___override(v___x_557_, v___x_556_);
return v___x_558_;
}
}
static lean_object* _init_l_Lean_Meta_getHaveTelescopeInfo___closed__4(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lean_Meta_getHaveTelescopeInfo___closed__2));
v___x_560_ = l_Lean_Level_param___override(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l_Lean_Meta_getHaveTelescopeInfo___closed__5(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_561_ = lean_obj_once(&l_Lean_Meta_getHaveTelescopeInfo___closed__4, &l_Lean_Meta_getHaveTelescopeInfo___closed__4_once, _init_l_Lean_Meta_getHaveTelescopeInfo___closed__4);
v___x_562_ = lean_obj_once(&l_Lean_Meta_getHaveTelescopeInfo___closed__3, &l_Lean_Meta_getHaveTelescopeInfo___closed__3_once, _init_l_Lean_Meta_getHaveTelescopeInfo___closed__3);
v___x_563_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_564_ = ((lean_object*)(l_Lean_Meta_getHaveTelescopeInfo___closed__0));
v___x_565_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_563_);
lean_ctor_set(v___x_565_, 2, v___x_563_);
lean_ctor_set(v___x_565_, 3, v___x_562_);
lean_ctor_set(v___x_565_, 4, v___x_562_);
lean_ctor_set(v___x_565_, 5, v___x_561_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object* v_e_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_lctx_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_lctx_572_ = lean_ctor_get(v_a_567_, 2);
lean_inc_ref(v_lctx_572_);
v___x_573_ = lean_unsigned_to_nat(0u);
v___x_574_ = ((lean_object*)(l_Lean_Meta_getHaveTelescopeInfo___closed__0));
v___x_575_ = lean_obj_once(&l_Lean_Meta_getHaveTelescopeInfo___closed__5, &l_Lean_Meta_getHaveTelescopeInfo___closed__5_once, _init_l_Lean_Meta_getHaveTelescopeInfo___closed__5);
v___x_576_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_566_, v___x_573_, v___x_575_, v_lctx_572_, v___x_574_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object* v_e_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_Meta_getHaveTelescopeInfo(v_e_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object* v_x_584_, lean_object* v_x_585_){
_start:
{
if (lean_obj_tag(v_x_585_) == 0)
{
return v_x_584_;
}
else
{
lean_object* v_key_586_; lean_object* v_tail_587_; uint8_t v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_key_586_ = lean_ctor_get(v_x_585_, 0);
v_tail_587_ = lean_ctor_get(v_x_585_, 2);
v___x_588_ = 1;
v___x_589_ = lean_box(v___x_588_);
v___x_590_ = lean_array_set(v_x_584_, v_key_586_, v___x_589_);
v_x_584_ = v___x_590_;
v_x_585_ = v_tail_587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object* v_x_592_, lean_object* v_x_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_x_592_, v_x_593_);
lean_dec(v_x_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object* v_as_595_, size_t v_i_596_, size_t v_stop_597_, lean_object* v_b_598_){
_start:
{
uint8_t v___x_599_; 
v___x_599_ = lean_usize_dec_eq(v_i_596_, v_stop_597_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_601_; size_t v___x_602_; size_t v___x_603_; 
v___x_600_ = lean_array_uget_borrowed(v_as_595_, v_i_596_);
v___x_601_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_b_598_, v___x_600_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_add(v_i_596_, v___x_602_);
v_i_596_ = v___x_603_;
v_b_598_ = v___x_601_;
goto _start;
}
else
{
return v_b_598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object* v_as_605_, lean_object* v_i_606_, lean_object* v_stop_607_, lean_object* v_b_608_){
_start:
{
size_t v_i_boxed_609_; size_t v_stop_boxed_610_; lean_object* v_res_611_; 
v_i_boxed_609_ = lean_unbox_usize(v_i_606_);
lean_dec(v_i_606_);
v_stop_boxed_610_ = lean_unbox_usize(v_stop_607_);
lean_dec(v_stop_607_);
v_res_611_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_as_605_, v_i_boxed_609_, v_stop_boxed_610_, v_b_608_);
lean_dec_ref(v_as_605_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object* v_arr_612_, lean_object* v_s_613_){
_start:
{
lean_object* v_buckets_614_; lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v_buckets_614_ = lean_ctor_get(v_s_613_, 1);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_array_get_size(v_buckets_614_);
v___x_617_ = lean_nat_dec_lt(v___x_615_, v___x_616_);
if (v___x_617_ == 0)
{
return v_arr_612_;
}
else
{
uint8_t v___x_618_; 
v___x_618_ = lean_nat_dec_le(v___x_616_, v___x_616_);
if (v___x_618_ == 0)
{
if (v___x_617_ == 0)
{
return v_arr_612_;
}
else
{
size_t v___x_619_; size_t v___x_620_; lean_object* v___x_621_; 
v___x_619_ = ((size_t)0ULL);
v___x_620_ = lean_usize_of_nat(v___x_616_);
v___x_621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_buckets_614_, v___x_619_, v___x_620_, v_arr_612_);
return v___x_621_;
}
}
else
{
size_t v___x_622_; size_t v___x_623_; lean_object* v___x_624_; 
v___x_622_ = ((size_t)0ULL);
v___x_623_ = lean_usize_of_nat(v___x_616_);
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_buckets_614_, v___x_622_, v___x_623_, v_arr_612_);
return v___x_624_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object* v_arr_625_, lean_object* v_s_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_arr_625_, v_s_626_);
lean_dec_ref(v_s_626_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object* v_upperBound_628_, lean_object* v_numHaves_629_, lean_object* v___x_630_, lean_object* v_a_631_, lean_object* v_b_632_){
_start:
{
lean_object* v_a_635_; uint8_t v___x_639_; 
v___x_639_ = lean_nat_dec_lt(v_a_631_, v_upperBound_628_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec(v_a_631_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_b_632_);
return v___x_640_;
}
else
{
uint8_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_641_ = 0;
v___x_642_ = lean_nat_sub(v_numHaves_629_, v_a_631_);
v___x_643_ = lean_unsigned_to_nat(1u);
v___x_644_ = lean_nat_sub(v___x_642_, v___x_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(v___x_641_);
v___x_646_ = lean_array_get_borrowed(v___x_645_, v_b_632_, v___x_644_);
v___x_647_ = lean_unbox(v___x_646_);
if (v___x_647_ == 0)
{
lean_dec(v___x_644_);
v_a_635_ = v_b_632_;
goto v___jp_634_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_typeBackDeps_650_; lean_object* v_valueBackDeps_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_648_ = l_Lean_Meta_instInhabitedHaveInfo_default;
v___x_649_ = lean_array_get_borrowed(v___x_648_, v___x_630_, v___x_644_);
lean_dec(v___x_644_);
v_typeBackDeps_650_ = lean_ctor_get(v___x_649_, 0);
v_valueBackDeps_651_ = lean_ctor_get(v___x_649_, 1);
v___x_652_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_b_632_, v_typeBackDeps_650_);
v___x_653_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v___x_652_, v_valueBackDeps_651_);
v_a_635_ = v___x_653_;
goto v___jp_634_;
}
}
v___jp_634_:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_unsigned_to_nat(1u);
v___x_637_ = lean_nat_add(v_a_631_, v___x_636_);
lean_dec(v_a_631_);
v_a_631_ = v___x_637_;
v_b_632_ = v_a_635_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object* v_upperBound_654_, lean_object* v_numHaves_655_, lean_object* v___x_656_, lean_object* v_a_657_, lean_object* v_b_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_654_, v_numHaves_655_, v___x_656_, v_a_657_, v_b_658_);
lean_dec_ref(v___x_656_);
lean_dec(v_numHaves_655_);
lean_dec(v_upperBound_654_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object* v_info_661_, lean_object* v_init_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_haveInfo_668_; lean_object* v_numHaves_669_; uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v_used_672_; lean_object* v___x_673_; lean_object* v_used_674_; lean_object* v___x_675_; 
v_haveInfo_668_ = lean_ctor_get(v_info_661_, 0);
v_numHaves_669_ = lean_array_get_size(v_haveInfo_668_);
v___x_670_ = 0;
v___x_671_ = lean_box(v___x_670_);
v_used_672_ = lean_mk_array(v_numHaves_669_, v___x_671_);
v___x_673_ = lean_unsigned_to_nat(0u);
v_used_674_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_used_672_, v_init_662_);
v___x_675_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_numHaves_669_, v_numHaves_669_, v_haveInfo_668_, v___x_673_, v_used_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object* v_info_676_, lean_object* v_init_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_676_, v_init_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
lean_dec(v_a_681_);
lean_dec_ref(v_a_680_);
lean_dec(v_a_679_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_init_677_);
lean_dec_ref(v_info_676_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object* v_upperBound_684_, lean_object* v_numHaves_685_, lean_object* v___x_686_, lean_object* v_inst_687_, lean_object* v_R_688_, lean_object* v_a_689_, lean_object* v_b_690_, lean_object* v_c_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_684_, v_numHaves_685_, v___x_686_, v_a_689_, v_b_690_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object* v_upperBound_698_, lean_object* v_numHaves_699_, lean_object* v___x_700_, lean_object* v_inst_701_, lean_object* v_R_702_, lean_object* v_a_703_, lean_object* v_b_704_, lean_object* v_c_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(v_upperBound_698_, v_numHaves_699_, v___x_700_, v_inst_701_, v_R_702_, v_a_703_, v_b_704_, v_c_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec_ref(v___x_700_);
lean_dec(v_numHaves_699_);
lean_dec(v_upperBound_698_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object* v_info_714_, uint8_t v_keepUnused_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_bodyDeps_721_; lean_object* v_bodyTypeDeps_722_; lean_object* v___x_723_; 
v_bodyDeps_721_ = lean_ctor_get(v_info_714_, 1);
v_bodyTypeDeps_722_ = lean_ctor_get(v_info_714_, 2);
v___x_723_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_714_, v_bodyTypeDeps_722_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
if (lean_obj_tag(v___x_723_) == 0)
{
if (v_keepUnused_715_ == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref(v___x_723_);
v___x_725_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_714_, v_bodyDeps_721_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_734_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_734_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_734_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_734_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v_a_724_);
lean_ctor_set(v___x_730_, 1, v_a_726_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_730_);
v___x_732_ = v___x_728_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_724_);
v_a_735_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_725_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_725_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_752_; 
v_a_743_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_752_ == 0)
{
v___x_745_ = v___x_723_;
v_isShared_746_ = v_isSharedCheck_752_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_723_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_752_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_747_ = ((lean_object*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0));
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v_a_743_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 0, v___x_748_);
v___x_750_ = v___x_745_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
v_a_753_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_723_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_723_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object* v_info_761_, lean_object* v_keepUnused_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
uint8_t v_keepUnused_boxed_768_; lean_object* v_res_769_; 
v_keepUnused_boxed_768_ = lean_unbox(v_keepUnused_762_);
v_res_769_ = l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(v_info_761_, v_keepUnused_boxed_768_, v_a_763_, v_a_764_, v_a_765_, v_a_766_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec_ref(v_info_761_);
return v_res_769_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default___closed__0(void){
_start:
{
uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_770_ = 0;
v___x_771_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3);
v___x_772_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
lean_ctor_set(v___x_772_, 2, v___x_771_);
lean_ctor_set(v___x_772_, 3, v___x_771_);
lean_ctor_set(v___x_772_, 4, v___x_771_);
lean_ctor_set_uint8(v___x_772_, sizeof(void*)*5, v___x_770_);
return v___x_772_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default___closed__0);
return v___x_773_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult(void){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default;
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object* v_toApplicative_791_, lean_object* v_level_792_, lean_object* v_exprType_793_, lean_object* v_e_794_, uint8_t v___x_795_, lean_object* v_xs_796_, lean_object* v_____do__lift_797_){
_start:
{
if (lean_obj_tag(v_____do__lift_797_) == 0)
{
lean_object* v_toPure_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v_proof_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v_toPure_798_ = lean_ctor_get(v_toApplicative_791_, 1);
lean_inc(v_toPure_798_);
lean_dec_ref(v_toApplicative_791_);
v___x_799_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_800_ = lean_box(0);
v___x_801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_801_, 0, v_level_792_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = l_Lean_mkConst(v___x_799_, v___x_801_);
lean_inc_ref(v_e_794_);
lean_inc_ref(v_exprType_793_);
v_proof_803_ = l_Lean_mkAppB(v___x_802_, v_exprType_793_, v_e_794_);
lean_inc_ref_n(v_e_794_, 2);
v___x_804_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_804_, 0, v_e_794_);
lean_ctor_set(v___x_804_, 1, v_exprType_793_);
lean_ctor_set(v___x_804_, 2, v_e_794_);
lean_ctor_set(v___x_804_, 3, v_e_794_);
lean_ctor_set(v___x_804_, 4, v_proof_803_);
lean_ctor_set_uint8(v___x_804_, sizeof(void*)*5, v___x_795_);
v___x_805_ = lean_apply_2(v_toPure_798_, lean_box(0), v___x_804_);
return v___x_805_;
}
else
{
lean_object* v_e_806_; lean_object* v_h_807_; lean_object* v_expr_808_; lean_object* v_proof_809_; lean_object* v___x_815_; uint8_t v___x_816_; 
lean_dec(v_level_792_);
v_e_806_ = lean_ctor_get(v_____do__lift_797_, 0);
v_h_807_ = lean_ctor_get(v_____do__lift_797_, 1);
v_expr_808_ = lean_expr_abstract(v_e_806_, v_xs_796_);
v_proof_809_ = lean_expr_abstract(v_h_807_, v_xs_796_);
lean_inc_ref(v_proof_809_);
v___x_815_ = l_Lean_Expr_cleanupAnnotations(v_proof_809_);
v___x_816_ = l_Lean_Expr_isApp(v___x_815_);
if (v___x_816_ == 0)
{
lean_dec_ref(v___x_815_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_arg_817_ = lean_ctor_get(v___x_815_, 1);
lean_inc_ref(v_arg_817_);
v___x_818_ = l_Lean_Expr_appFnCleanup___redArg(v___x_815_);
v___x_819_ = l_Lean_Expr_isApp(v___x_818_);
if (v___x_819_ == 0)
{
lean_dec_ref(v___x_818_);
lean_dec_ref(v_arg_817_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_820_; lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v_arg_820_ = lean_ctor_get(v___x_818_, 1);
lean_inc_ref(v_arg_820_);
v___x_821_ = l_Lean_Expr_appFnCleanup___redArg(v___x_818_);
v___x_822_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4));
v___x_823_ = l_Lean_Expr_isConstOf(v___x_821_, v___x_822_);
lean_dec_ref(v___x_821_);
if (v___x_823_ == 0)
{
lean_dec_ref(v_arg_820_);
lean_dec_ref(v_arg_817_);
goto v___jp_810_;
}
else
{
lean_object* v___x_824_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_824_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_825_ = lean_unsigned_to_nat(3u);
v___x_826_ = l_Lean_Expr_isAppOfArity(v_arg_820_, v___x_824_, v___x_825_);
lean_dec_ref(v_arg_820_);
if (v___x_826_ == 0)
{
lean_dec_ref(v_arg_817_);
goto v___jp_810_;
}
else
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = l_Lean_Expr_cleanupAnnotations(v_arg_817_);
v___x_828_ = l_Lean_Expr_isApp(v___x_827_);
if (v___x_828_ == 0)
{
lean_dec_ref(v___x_827_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v_arg_829_ = lean_ctor_get(v___x_827_, 1);
lean_inc_ref(v_arg_829_);
v___x_830_ = l_Lean_Expr_appFnCleanup___redArg(v___x_827_);
v___x_831_ = l_Lean_Expr_isApp(v___x_830_);
if (v___x_831_ == 0)
{
lean_dec_ref(v___x_830_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v_arg_832_ = lean_ctor_get(v___x_830_, 1);
lean_inc_ref(v_arg_832_);
v___x_833_ = l_Lean_Expr_appFnCleanup___redArg(v___x_830_);
v___x_834_ = l_Lean_Expr_isConstOf(v___x_833_, v___x_822_);
lean_dec_ref(v___x_833_);
if (v___x_834_ == 0)
{
lean_dec_ref(v_arg_832_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_835_ = l_Lean_Expr_cleanupAnnotations(v_arg_832_);
v___x_836_ = l_Lean_Expr_isApp(v___x_835_);
if (v___x_836_ == 0)
{
lean_dec_ref(v___x_835_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v_arg_837_ = lean_ctor_get(v___x_835_, 1);
lean_inc_ref(v_arg_837_);
v___x_838_ = l_Lean_Expr_appFnCleanup___redArg(v___x_835_);
v___x_839_ = l_Lean_Expr_isApp(v___x_838_);
if (v___x_839_ == 0)
{
lean_dec_ref(v___x_838_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_840_; uint8_t v___y_842_; lean_object* v___x_846_; uint8_t v___x_847_; 
v_arg_840_ = lean_ctor_get(v___x_838_, 1);
lean_inc_ref(v_arg_840_);
v___x_846_ = l_Lean_Expr_appFnCleanup___redArg(v___x_838_);
v___x_847_ = l_Lean_Expr_isApp(v___x_846_);
if (v___x_847_ == 0)
{
lean_dec_ref(v___x_846_);
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = l_Lean_Expr_appFnCleanup___redArg(v___x_846_);
v___x_849_ = l_Lean_Expr_isConstOf(v___x_848_, v___x_824_);
lean_dec_ref(v___x_848_);
if (v___x_849_ == 0)
{
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v___x_850_; 
v___x_850_ = l_Lean_Expr_getAppFn(v_arg_829_);
if (lean_obj_tag(v___x_850_) == 4)
{
lean_object* v_declName_851_; 
v_declName_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_declName_851_);
lean_dec_ref(v___x_850_);
if (lean_obj_tag(v_declName_851_) == 1)
{
lean_object* v_pre_852_; 
v_pre_852_ = lean_ctor_get(v_declName_851_, 0);
if (lean_obj_tag(v_pre_852_) == 0)
{
lean_object* v_str_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_str_853_ = lean_ctor_get(v_declName_851_, 1);
lean_inc_ref(v_str_853_);
lean_dec_ref(v_declName_851_);
v___x_854_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6));
v___x_855_ = lean_string_dec_eq(v_str_853_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7));
v___x_857_ = lean_string_dec_eq(v_str_853_, v___x_856_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_858_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8));
v___x_859_ = lean_string_dec_eq(v_str_853_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9));
v___x_861_ = lean_string_dec_eq(v_str_853_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10));
v___x_863_ = lean_string_dec_eq(v_str_853_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_864_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11));
v___x_865_ = lean_string_dec_eq(v_str_853_, v___x_864_);
lean_dec_ref(v_str_853_);
if (v___x_865_ == 0)
{
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
v___y_842_ = v___x_823_;
goto v___jp_841_;
}
}
else
{
lean_dec_ref(v_str_853_);
v___y_842_ = v___x_823_;
goto v___jp_841_;
}
}
else
{
lean_dec_ref(v_str_853_);
v___y_842_ = v___x_823_;
goto v___jp_841_;
}
}
else
{
lean_dec_ref(v_str_853_);
v___y_842_ = v___x_823_;
goto v___jp_841_;
}
}
else
{
lean_dec_ref(v_str_853_);
v___y_842_ = v___x_823_;
goto v___jp_841_;
}
}
else
{
lean_dec_ref(v_str_853_);
v___y_842_ = v___x_823_;
goto v___jp_841_;
}
}
else
{
lean_dec_ref(v_declName_851_);
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
}
else
{
lean_dec(v_declName_851_);
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
}
else
{
lean_dec_ref(v___x_850_);
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
}
}
v___jp_841_:
{
if (v___y_842_ == 0)
{
lean_dec_ref(v_arg_840_);
lean_dec_ref(v_arg_837_);
lean_dec_ref(v_arg_829_);
goto v___jp_810_;
}
else
{
lean_object* v_toPure_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec_ref(v_proof_809_);
lean_dec_ref(v_e_794_);
v_toPure_843_ = lean_ctor_get(v_toApplicative_791_, 1);
lean_inc(v_toPure_843_);
lean_dec_ref(v_toApplicative_791_);
v___x_844_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_844_, 0, v_arg_837_);
lean_ctor_set(v___x_844_, 1, v_exprType_793_);
lean_ctor_set(v___x_844_, 2, v_arg_840_);
lean_ctor_set(v___x_844_, 3, v_expr_808_);
lean_ctor_set(v___x_844_, 4, v_arg_829_);
lean_ctor_set_uint8(v___x_844_, sizeof(void*)*5, v___x_823_);
v___x_845_ = lean_apply_2(v_toPure_843_, lean_box(0), v___x_844_);
return v___x_845_;
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
v___jp_810_:
{
lean_object* v_toPure_811_; uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_toPure_811_ = lean_ctor_get(v_toApplicative_791_, 1);
lean_inc(v_toPure_811_);
lean_dec_ref(v_toApplicative_791_);
v___x_812_ = 1;
lean_inc_ref(v_expr_808_);
v___x_813_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_813_, 0, v_expr_808_);
lean_ctor_set(v___x_813_, 1, v_exprType_793_);
lean_ctor_set(v___x_813_, 2, v_e_794_);
lean_ctor_set(v___x_813_, 3, v_expr_808_);
lean_ctor_set(v___x_813_, 4, v_proof_809_);
lean_ctor_set_uint8(v___x_813_, sizeof(void*)*5, v___x_812_);
v___x_814_ = lean_apply_2(v_toPure_811_, lean_box(0), v___x_813_);
return v___x_814_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object* v_toApplicative_866_, lean_object* v_level_867_, lean_object* v_exprType_868_, lean_object* v_e_869_, lean_object* v___x_870_, lean_object* v_xs_871_, lean_object* v_____do__lift_872_){
_start:
{
uint8_t v___x_10170__boxed_873_; lean_object* v_res_874_; 
v___x_10170__boxed_873_ = lean_unbox(v___x_870_);
v_res_874_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(v_toApplicative_866_, v_level_867_, v_exprType_868_, v_e_869_, v___x_10170__boxed_873_, v_xs_871_, v_____do__lift_872_);
lean_dec(v_____do__lift_872_);
lean_dec_ref(v_xs_871_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object* v_inst_875_, lean_object* v_bodyType_876_, lean_object* v_xs_877_, lean_object* v_toApplicative_878_, lean_object* v_level_879_, lean_object* v_e_880_, uint8_t v___x_881_, lean_object* v_body_882_, lean_object* v_toBind_883_, lean_object* v_____r_884_){
_start:
{
lean_object* v_simp_885_; lean_object* v_exprType_886_; lean_object* v___x_887_; lean_object* v___f_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_simp_885_ = lean_ctor_get(v_inst_875_, 2);
lean_inc(v_simp_885_);
lean_dec_ref(v_inst_875_);
v_exprType_886_ = lean_expr_abstract(v_bodyType_876_, v_xs_877_);
v___x_887_ = lean_box(v___x_881_);
v___f_888_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_888_, 0, v_toApplicative_878_);
lean_closure_set(v___f_888_, 1, v_level_879_);
lean_closure_set(v___f_888_, 2, v_exprType_886_);
lean_closure_set(v___f_888_, 3, v_e_880_);
lean_closure_set(v___f_888_, 4, v___x_887_);
lean_closure_set(v___f_888_, 5, v_xs_877_);
v___x_889_ = lean_apply_1(v_simp_885_, v_body_882_);
v___x_890_ = lean_apply_4(v_toBind_883_, lean_box(0), lean_box(0), v___x_889_, v___f_888_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object* v_inst_891_, lean_object* v_bodyType_892_, lean_object* v_xs_893_, lean_object* v_toApplicative_894_, lean_object* v_level_895_, lean_object* v_e_896_, lean_object* v___x_897_, lean_object* v_body_898_, lean_object* v_toBind_899_, lean_object* v_____r_900_){
_start:
{
uint8_t v___x_10323__boxed_901_; lean_object* v_res_902_; 
v___x_10323__boxed_901_ = lean_unbox(v___x_897_);
v_res_902_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(v_inst_891_, v_bodyType_892_, v_xs_893_, v_toApplicative_894_, v_level_895_, v_e_896_, v___x_10323__boxed_901_, v_body_898_, v_toBind_899_, v_____r_900_);
lean_dec_ref(v_bodyType_892_);
return v_res_902_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2));
v___x_907_ = l_Lean_stringToMessageData(v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object* v___x_908_, lean_object* v___x_909_, lean_object* v___x_910_, lean_object* v_cls_911_, lean_object* v___x_912_, lean_object* v___f_913_, lean_object* v_body_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___x_9698__overap_920_; lean_object* v___x_921_; 
lean_inc(v_cls_911_);
lean_inc_ref(v___x_909_);
lean_inc_ref(v___x_908_);
v___x_9698__overap_920_ = l_Lean_isTracingEnabledFor___redArg(v___x_908_, v___x_909_, v___x_910_, v_cls_911_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
lean_inc(v___y_916_);
lean_inc_ref(v___y_915_);
v___x_921_ = lean_apply_5(v___x_9698__overap_920_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, lean_box(0));
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_943_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_943_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_943_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_943_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
uint8_t v___x_926_; 
v___x_926_ = lean_unbox(v_a_922_);
lean_dec(v_a_922_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; lean_object* v___x_929_; 
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec_ref(v_body_914_);
lean_dec(v___f_913_);
lean_dec(v___x_912_);
lean_dec(v_cls_911_);
lean_dec_ref(v___x_909_);
lean_dec_ref(v___x_908_);
v___x_927_ = lean_box(0);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_927_);
v___x_929_ = v___x_924_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_927_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
else
{
lean_object* v___f_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v_toMonadRef_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_9713__overap_941_; lean_object* v___x_942_; 
lean_del_object(v___x_924_);
v___f_931_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0));
v___x_932_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
v___x_933_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_934_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_932_, v___x_912_, v___x_933_);
v___x_935_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_931_, v___f_913_, v___x_934_);
v_toMonadRef_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc_ref(v_toMonadRef_936_);
lean_dec_ref(v___x_935_);
v___x_937_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_938_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3);
v___x_939_ = l_Lean_MessageData_ofExpr(v_body_914_);
v___x_940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_938_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_9713__overap_941_ = l_Lean_addTrace___redArg(v___x_908_, v___x_909_, v_toMonadRef_936_, v___x_937_, v_cls_911_, v___x_940_);
v___x_942_ = lean_apply_5(v___x_9713__overap_941_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, lean_box(0));
return v___x_942_;
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec_ref(v_body_914_);
lean_dec(v___f_913_);
lean_dec(v___x_912_);
lean_dec(v_cls_911_);
lean_dec_ref(v___x_909_);
lean_dec_ref(v___x_908_);
v_a_944_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_921_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_921_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object* v___x_952_, lean_object* v___x_953_, lean_object* v___x_954_, lean_object* v_cls_955_, lean_object* v___x_956_, lean_object* v___f_957_, lean_object* v_body_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(v___x_952_, v___x_953_, v___x_954_, v_cls_955_, v___x_956_, v___f_957_, v_body_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object* v_declName_967_, lean_object* v_type_968_, lean_object* v___y_969_, lean_object* v_value_970_, uint8_t v_nondep_971_, lean_object* v_toApplicative_972_, lean_object* v___x_973_, uint8_t v___y_974_, lean_object* v_us_975_, lean_object* v_rb_976_){
_start:
{
lean_object* v_expr_977_; lean_object* v_exprType_978_; lean_object* v_exprInit_979_; lean_object* v_exprResult_980_; lean_object* v_proof_981_; uint8_t v_modified_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1011_; 
v_expr_977_ = lean_ctor_get(v_rb_976_, 0);
v_exprType_978_ = lean_ctor_get(v_rb_976_, 1);
v_exprInit_979_ = lean_ctor_get(v_rb_976_, 2);
v_exprResult_980_ = lean_ctor_get(v_rb_976_, 3);
v_proof_981_ = lean_ctor_get(v_rb_976_, 4);
v_modified_982_ = lean_ctor_get_uint8(v_rb_976_, sizeof(void*)*5);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_rb_976_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_984_ = v_rb_976_;
v_isShared_985_ = v_isSharedCheck_1011_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_proof_981_);
lean_inc(v_exprResult_980_);
lean_inc(v_exprInit_979_);
lean_inc(v_exprType_978_);
lean_inc(v_expr_977_);
lean_dec(v_rb_976_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1011_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
uint8_t v___x_986_; lean_object* v___x_987_; lean_object* v_expr_988_; lean_object* v___x_989_; lean_object* v_exprType_990_; lean_object* v___x_991_; lean_object* v_exprInit_992_; lean_object* v_exprResult_993_; 
v___x_986_ = 0;
lean_inc_ref(v_type_968_);
lean_inc(v_declName_967_);
v___x_987_ = l_Lean_mkLambda(v_declName_967_, v___x_986_, v_type_968_, v_expr_977_);
lean_inc_ref(v___y_969_);
lean_inc_ref(v___x_987_);
v_expr_988_ = l_Lean_Expr_app___override(v___x_987_, v___y_969_);
lean_inc_ref(v_type_968_);
lean_inc(v_declName_967_);
v___x_989_ = l_Lean_mkLambda(v_declName_967_, v___x_986_, v_type_968_, v_exprType_978_);
lean_inc_ref(v___y_969_);
lean_inc_ref(v___x_989_);
v_exprType_990_ = l_Lean_Expr_app___override(v___x_989_, v___y_969_);
lean_inc_ref(v_type_968_);
lean_inc(v_declName_967_);
v___x_991_ = l_Lean_mkLambda(v_declName_967_, v___x_986_, v_type_968_, v_exprInit_979_);
lean_inc_ref(v___x_991_);
v_exprInit_992_ = l_Lean_Expr_app___override(v___x_991_, v_value_970_);
lean_inc_ref(v___y_969_);
lean_inc_ref(v_type_968_);
lean_inc(v_declName_967_);
v_exprResult_993_ = l_Lean_Expr_letE___override(v_declName_967_, v_type_968_, v___y_969_, v_exprResult_980_, v_nondep_971_);
if (v_modified_982_ == 0)
{
lean_object* v_toPure_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_proof_997_; lean_object* v___x_999_; 
lean_dec_ref(v___x_991_);
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_987_);
lean_dec_ref(v_proof_981_);
lean_dec(v_us_975_);
lean_dec_ref(v___y_969_);
lean_dec_ref(v_type_968_);
lean_dec(v_declName_967_);
v_toPure_994_ = lean_ctor_get(v_toApplicative_972_, 1);
lean_inc(v_toPure_994_);
lean_dec_ref(v_toApplicative_972_);
v___x_995_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_996_ = l_Lean_mkConst(v___x_995_, v___x_973_);
lean_inc_ref(v_expr_988_);
lean_inc_ref(v_exprType_990_);
v_proof_997_ = l_Lean_mkAppB(v___x_996_, v_exprType_990_, v_expr_988_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v_proof_997_);
lean_ctor_set(v___x_984_, 3, v_exprResult_993_);
lean_ctor_set(v___x_984_, 2, v_exprInit_992_);
lean_ctor_set(v___x_984_, 1, v_exprType_990_);
lean_ctor_set(v___x_984_, 0, v_expr_988_);
v___x_999_ = v___x_984_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_expr_988_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_exprType_990_);
lean_ctor_set(v_reuseFailAlloc_1001_, 2, v_exprInit_992_);
lean_ctor_set(v_reuseFailAlloc_1001_, 3, v_exprResult_993_);
lean_ctor_set(v_reuseFailAlloc_1001_, 4, v_proof_997_);
v___x_999_ = v_reuseFailAlloc_1001_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; 
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*5, v___y_974_);
v___x_1000_ = lean_apply_2(v_toPure_994_, lean_box(0), v___x_999_);
return v___x_1000_;
}
}
else
{
lean_object* v_toPure_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v_proof_1006_; lean_object* v___x_1008_; 
lean_dec(v___x_973_);
v_toPure_1002_ = lean_ctor_get(v_toApplicative_972_, 1);
lean_inc(v_toPure_1002_);
lean_dec_ref(v_toApplicative_972_);
lean_inc_ref(v_type_968_);
v___x_1003_ = l_Lean_mkLambda(v_declName_967_, v___x_986_, v_type_968_, v_proof_981_);
v___x_1004_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0));
v___x_1005_ = l_Lean_mkConst(v___x_1004_, v_us_975_);
v_proof_1006_ = l_Lean_mkApp6(v___x_1005_, v_type_968_, v___x_989_, v___y_969_, v___x_991_, v___x_987_, v___x_1003_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v_proof_1006_);
lean_ctor_set(v___x_984_, 3, v_exprResult_993_);
lean_ctor_set(v___x_984_, 2, v_exprInit_992_);
lean_ctor_set(v___x_984_, 1, v_exprType_990_);
lean_ctor_set(v___x_984_, 0, v_expr_988_);
v___x_1008_ = v___x_984_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_expr_988_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_exprType_990_);
lean_ctor_set(v_reuseFailAlloc_1010_, 2, v_exprInit_992_);
lean_ctor_set(v_reuseFailAlloc_1010_, 3, v_exprResult_993_);
lean_ctor_set(v_reuseFailAlloc_1010_, 4, v_proof_1006_);
v___x_1008_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1009_; 
lean_ctor_set_uint8(v___x_1008_, sizeof(void*)*5, v_nondep_971_);
v___x_1009_ = lean_apply_2(v_toPure_1002_, lean_box(0), v___x_1008_);
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object* v_declName_1012_, lean_object* v_type_1013_, lean_object* v___y_1014_, lean_object* v_value_1015_, lean_object* v_nondep_1016_, lean_object* v_toApplicative_1017_, lean_object* v___x_1018_, lean_object* v___y_1019_, lean_object* v_us_1020_, lean_object* v_rb_1021_){
_start:
{
uint8_t v_nondep_10459__boxed_1022_; uint8_t v___y_10461__boxed_1023_; lean_object* v_res_1024_; 
v_nondep_10459__boxed_1022_ = lean_unbox(v_nondep_1016_);
v___y_10461__boxed_1023_ = lean_unbox(v___y_1019_);
v_res_1024_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(v_declName_1012_, v_type_1013_, v___y_1014_, v_value_1015_, v_nondep_10459__boxed_1022_, v_toApplicative_1017_, v___x_1018_, v___y_10461__boxed_1023_, v_us_1020_, v_rb_1021_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object* v___f_1025_, lean_object* v_____x_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_apply_1(v___f_1025_, v_____x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object* v___x_1032_, lean_object* v_declName_1033_, lean_object* v_type_1034_, lean_object* v_value_1035_, lean_object* v_us_1036_, lean_object* v___x_1037_, lean_object* v_toApplicative_1038_, uint8_t v_nondep_1039_, lean_object* v_rb_1040_){
_start:
{
lean_object* v_expr_1041_; lean_object* v_exprType_1042_; lean_object* v_exprInit_1043_; lean_object* v_exprResult_1044_; lean_object* v_proof_1045_; uint8_t v_modified_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1076_; 
v_expr_1041_ = lean_ctor_get(v_rb_1040_, 0);
v_exprType_1042_ = lean_ctor_get(v_rb_1040_, 1);
v_exprInit_1043_ = lean_ctor_get(v_rb_1040_, 2);
v_exprResult_1044_ = lean_ctor_get(v_rb_1040_, 3);
v_proof_1045_ = lean_ctor_get(v_rb_1040_, 4);
v_modified_1046_ = lean_ctor_get_uint8(v_rb_1040_, sizeof(void*)*5);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_rb_1040_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1048_ = v_rb_1040_;
v_isShared_1049_ = v_isSharedCheck_1076_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_proof_1045_);
lean_inc(v_exprResult_1044_);
lean_inc(v_exprInit_1043_);
lean_inc(v_exprType_1042_);
lean_inc(v_expr_1041_);
lean_dec(v_rb_1040_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1076_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v_expr_1050_; lean_object* v_exprType_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v_exprInit_1054_; lean_object* v_exprResult_1055_; 
v_expr_1050_ = lean_expr_lower_loose_bvars(v_expr_1041_, v___x_1032_, v___x_1032_);
lean_dec_ref(v_expr_1041_);
v_exprType_1051_ = lean_expr_lower_loose_bvars(v_exprType_1042_, v___x_1032_, v___x_1032_);
lean_dec_ref(v_exprType_1042_);
v___x_1052_ = 0;
lean_inc_ref(v_type_1034_);
lean_inc(v_declName_1033_);
v___x_1053_ = l_Lean_mkLambda(v_declName_1033_, v___x_1052_, v_type_1034_, v_exprInit_1043_);
lean_inc_ref(v_value_1035_);
lean_inc_ref(v___x_1053_);
v_exprInit_1054_ = l_Lean_Expr_app___override(v___x_1053_, v_value_1035_);
v_exprResult_1055_ = lean_expr_lower_loose_bvars(v_exprResult_1044_, v___x_1032_, v___x_1032_);
lean_dec_ref(v_exprResult_1044_);
if (v_modified_1046_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v_proof_1061_; lean_object* v_toPure_1062_; lean_object* v___x_1064_; 
lean_dec_ref(v___x_1053_);
lean_dec_ref(v_proof_1045_);
lean_dec(v_declName_1033_);
v___x_1056_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0));
v___x_1057_ = l_Lean_mkConst(v___x_1056_, v_us_1036_);
v___x_1058_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1059_ = l_Lean_mkConst(v___x_1058_, v___x_1037_);
lean_inc_ref(v_expr_1050_);
lean_inc_ref(v_exprType_1051_);
v___x_1060_ = l_Lean_mkAppB(v___x_1059_, v_exprType_1051_, v_expr_1050_);
lean_inc_ref_n(v_expr_1050_, 2);
lean_inc_ref(v_exprType_1051_);
v_proof_1061_ = l_Lean_mkApp6(v___x_1057_, v_type_1034_, v_exprType_1051_, v_value_1035_, v_expr_1050_, v_expr_1050_, v___x_1060_);
v_toPure_1062_ = lean_ctor_get(v_toApplicative_1038_, 1);
lean_inc(v_toPure_1062_);
lean_dec_ref(v_toApplicative_1038_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 4, v_proof_1061_);
lean_ctor_set(v___x_1048_, 3, v_exprResult_1055_);
lean_ctor_set(v___x_1048_, 2, v_exprInit_1054_);
lean_ctor_set(v___x_1048_, 1, v_exprType_1051_);
lean_ctor_set(v___x_1048_, 0, v_expr_1050_);
v___x_1064_ = v___x_1048_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_expr_1050_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_exprType_1051_);
lean_ctor_set(v_reuseFailAlloc_1066_, 2, v_exprInit_1054_);
lean_ctor_set(v_reuseFailAlloc_1066_, 3, v_exprResult_1055_);
lean_ctor_set(v_reuseFailAlloc_1066_, 4, v_proof_1061_);
v___x_1064_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v___x_1065_; 
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*5, v_nondep_1039_);
v___x_1065_ = lean_apply_2(v_toPure_1062_, lean_box(0), v___x_1064_);
return v___x_1065_;
}
}
else
{
lean_object* v_toPure_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v_proof_1071_; lean_object* v___x_1073_; 
lean_dec(v___x_1037_);
v_toPure_1067_ = lean_ctor_get(v_toApplicative_1038_, 1);
lean_inc(v_toPure_1067_);
lean_dec_ref(v_toApplicative_1038_);
lean_inc_ref(v_type_1034_);
v___x_1068_ = l_Lean_mkLambda(v_declName_1033_, v___x_1052_, v_type_1034_, v_proof_1045_);
v___x_1069_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1));
v___x_1070_ = l_Lean_mkConst(v___x_1069_, v_us_1036_);
lean_inc_ref(v_expr_1050_);
lean_inc_ref(v_exprType_1051_);
v_proof_1071_ = l_Lean_mkApp6(v___x_1070_, v_type_1034_, v_exprType_1051_, v_value_1035_, v___x_1053_, v_expr_1050_, v___x_1068_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 4, v_proof_1071_);
lean_ctor_set(v___x_1048_, 3, v_exprResult_1055_);
lean_ctor_set(v___x_1048_, 2, v_exprInit_1054_);
lean_ctor_set(v___x_1048_, 1, v_exprType_1051_);
lean_ctor_set(v___x_1048_, 0, v_expr_1050_);
v___x_1073_ = v___x_1048_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_expr_1050_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v_exprType_1051_);
lean_ctor_set(v_reuseFailAlloc_1075_, 2, v_exprInit_1054_);
lean_ctor_set(v_reuseFailAlloc_1075_, 3, v_exprResult_1055_);
lean_ctor_set(v_reuseFailAlloc_1075_, 4, v_proof_1071_);
v___x_1073_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_object* v___x_1074_; 
lean_ctor_set_uint8(v___x_1073_, sizeof(void*)*5, v_nondep_1039_);
v___x_1074_ = lean_apply_2(v_toPure_1067_, lean_box(0), v___x_1073_);
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object* v___x_1077_, lean_object* v_declName_1078_, lean_object* v_type_1079_, lean_object* v_value_1080_, lean_object* v_us_1081_, lean_object* v___x_1082_, lean_object* v_toApplicative_1083_, lean_object* v_nondep_1084_, lean_object* v_rb_1085_){
_start:
{
uint8_t v_nondep_10546__boxed_1086_; lean_object* v_res_1087_; 
v_nondep_10546__boxed_1086_ = lean_unbox(v_nondep_1084_);
v_res_1087_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(v___x_1077_, v_declName_1078_, v_type_1079_, v_value_1080_, v_us_1081_, v___x_1082_, v_toApplicative_1083_, v_nondep_10546__boxed_1086_, v_rb_1085_);
lean_dec(v___x_1077_);
return v_res_1087_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0));
v___x_1090_ = l_Lean_stringToMessageData(v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2));
v___x_1093_ = l_Lean_stringToMessageData(v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object* v___x_1094_, lean_object* v___x_1095_, lean_object* v___x_1096_, lean_object* v_cls_1097_, lean_object* v___x_1098_, lean_object* v___f_1099_, lean_object* v_declName_1100_, lean_object* v_val_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v___x_10113__overap_1107_; lean_object* v___x_1108_; 
lean_inc(v_cls_1097_);
lean_inc_ref(v___x_1095_);
lean_inc_ref(v___x_1094_);
v___x_10113__overap_1107_ = l_Lean_isTracingEnabledFor___redArg(v___x_1094_, v___x_1095_, v___x_1096_, v_cls_1097_);
lean_inc(v___y_1105_);
lean_inc_ref(v___y_1104_);
lean_inc(v___y_1103_);
lean_inc_ref(v___y_1102_);
v___x_1108_ = lean_apply_5(v___x_10113__overap_1107_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, lean_box(0));
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1134_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1134_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1134_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
uint8_t v___x_1113_; 
v___x_1113_ = lean_unbox(v_a_1109_);
lean_dec(v_a_1109_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1116_; 
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_val_1101_);
lean_dec(v_declName_1100_);
lean_dec(v___f_1099_);
lean_dec(v___x_1098_);
lean_dec(v_cls_1097_);
lean_dec_ref(v___x_1095_);
lean_dec_ref(v___x_1094_);
v___x_1114_ = lean_box(0);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1114_);
v___x_1116_ = v___x_1111_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
else
{
lean_object* v___f_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v_toMonadRef_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_10133__overap_1132_; lean_object* v___x_1133_; 
lean_del_object(v___x_1111_);
v___f_1118_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0));
v___x_1119_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
v___x_1120_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1121_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1119_, v___x_1098_, v___x_1120_);
v___x_1122_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1118_, v___f_1099_, v___x_1121_);
v_toMonadRef_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc_ref(v_toMonadRef_1123_);
lean_dec_ref(v___x_1122_);
v___x_1124_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1125_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1);
v___x_1126_ = l_Lean_MessageData_ofName(v_declName_1100_);
v___x_1127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1125_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = l_Lean_MessageData_ofExpr(v_val_1101_);
v___x_1131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_10133__overap_1132_ = l_Lean_addTrace___redArg(v___x_1094_, v___x_1095_, v_toMonadRef_1123_, v___x_1124_, v_cls_1097_, v___x_1131_);
v___x_1133_ = lean_apply_5(v___x_10133__overap_1132_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, lean_box(0));
return v___x_1133_;
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_val_1101_);
lean_dec(v_declName_1100_);
lean_dec(v___f_1099_);
lean_dec(v___x_1098_);
lean_dec(v_cls_1097_);
lean_dec_ref(v___x_1095_);
lean_dec_ref(v___x_1094_);
v_a_1135_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1108_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1108_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object* v___x_1143_, lean_object* v___x_1144_, lean_object* v___x_1145_, lean_object* v_cls_1146_, lean_object* v___x_1147_, lean_object* v___f_1148_, lean_object* v_declName_1149_, lean_object* v_val_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(v___x_1143_, v___x_1144_, v___x_1145_, v_cls_1146_, v___x_1147_, v___f_1148_, v_declName_1149_, v_val_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
return v_res_1156_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0));
v___x_1159_ = l_Lean_stringToMessageData(v___x_1158_);
return v___x_1159_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2));
v___x_1162_ = l_Lean_stringToMessageData(v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object* v___x_1163_, lean_object* v___x_1164_, lean_object* v___x_1165_, lean_object* v_cls_1166_, lean_object* v___x_1167_, lean_object* v___f_1168_, lean_object* v_declName_1169_, lean_object* v_val_1170_, lean_object* v_val_x27_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_9782__overap_1177_; lean_object* v___x_1178_; 
lean_inc(v_cls_1166_);
lean_inc_ref(v___x_1164_);
lean_inc_ref(v___x_1163_);
v___x_9782__overap_1177_ = l_Lean_isTracingEnabledFor___redArg(v___x_1163_, v___x_1164_, v___x_1165_, v_cls_1166_);
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
v___x_1178_ = lean_apply_5(v___x_9782__overap_1177_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, lean_box(0));
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1208_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1208_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1208_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
uint8_t v___x_1183_; 
v___x_1183_ = lean_unbox(v_a_1179_);
lean_dec(v_a_1179_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec_ref(v_val_x27_1171_);
lean_dec_ref(v_val_1170_);
lean_dec(v_declName_1169_);
lean_dec(v___f_1168_);
lean_dec(v___x_1167_);
lean_dec(v_cls_1166_);
lean_dec_ref(v___x_1164_);
lean_dec_ref(v___x_1163_);
v___x_1184_ = lean_box(0);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1184_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
else
{
lean_object* v___f_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v_toMonadRef_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_9807__overap_1206_; lean_object* v___x_1207_; 
lean_del_object(v___x_1181_);
v___f_1188_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0));
v___x_1189_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
v___x_1190_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1191_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1189_, v___x_1167_, v___x_1190_);
v___x_1192_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1188_, v___f_1168_, v___x_1191_);
v_toMonadRef_1193_ = lean_ctor_get(v___x_1192_, 0);
lean_inc_ref(v_toMonadRef_1193_);
lean_dec_ref(v___x_1192_);
v___x_1194_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1195_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1);
v___x_1196_ = l_Lean_MessageData_ofName(v_declName_1169_);
v___x_1197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1195_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = l_Lean_MessageData_ofExpr(v_val_1170_);
v___x_1201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1199_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1201_);
lean_ctor_set(v___x_1203_, 1, v___x_1202_);
v___x_1204_ = l_Lean_MessageData_ofExpr(v_val_x27_1171_);
v___x_1205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1203_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_9807__overap_1206_ = l_Lean_addTrace___redArg(v___x_1163_, v___x_1164_, v_toMonadRef_1193_, v___x_1194_, v_cls_1166_, v___x_1205_);
v___x_1207_ = lean_apply_5(v___x_9807__overap_1206_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, lean_box(0));
return v___x_1207_;
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec_ref(v_val_x27_1171_);
lean_dec_ref(v_val_1170_);
lean_dec(v_declName_1169_);
lean_dec(v___f_1168_);
lean_dec(v___x_1167_);
lean_dec(v_cls_1166_);
lean_dec_ref(v___x_1164_);
lean_dec_ref(v___x_1163_);
v_a_1209_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1178_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1178_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object* v___x_1217_, lean_object* v___x_1218_, lean_object* v___x_1219_, lean_object* v_cls_1220_, lean_object* v___x_1221_, lean_object* v___f_1222_, lean_object* v_declName_1223_, lean_object* v_val_1224_, lean_object* v_val_x27_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(v___x_1217_, v___x_1218_, v___x_1219_, v_cls_1220_, v___x_1221_, v___f_1222_, v_declName_1223_, v_val_1224_, v_val_x27_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object* v_toApplicative_1232_, lean_object* v_e_1233_, lean_object* v_xs_1234_, lean_object* v_h_1235_, uint8_t v_nondep_1236_, lean_object* v_toBind_1237_, lean_object* v___f_1238_, lean_object* v_____r_1239_){
_start:
{
lean_object* v_toPure_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v_toPure_1240_ = lean_ctor_get(v_toApplicative_1232_, 1);
lean_inc(v_toPure_1240_);
lean_dec_ref(v_toApplicative_1232_);
v___x_1241_ = lean_expr_abstract(v_e_1233_, v_xs_1234_);
v___x_1242_ = lean_expr_abstract(v_h_1235_, v_xs_1234_);
v___x_1243_ = lean_box(v_nondep_1236_);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
lean_ctor_set(v___x_1244_, 1, v___x_1242_);
v___x_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1241_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = lean_apply_2(v_toPure_1240_, lean_box(0), v___x_1245_);
v___x_1247_ = lean_apply_4(v_toBind_1237_, lean_box(0), lean_box(0), v___x_1246_, v___f_1238_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object* v_toApplicative_1248_, lean_object* v_e_1249_, lean_object* v_xs_1250_, lean_object* v_h_1251_, lean_object* v_nondep_1252_, lean_object* v_toBind_1253_, lean_object* v___f_1254_, lean_object* v_____r_1255_){
_start:
{
uint8_t v_nondep_10864__boxed_1256_; lean_object* v_res_1257_; 
v_nondep_10864__boxed_1256_ = lean_unbox(v_nondep_1252_);
v_res_1257_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(v_toApplicative_1248_, v_e_1249_, v_xs_1250_, v_h_1251_, v_nondep_10864__boxed_1256_, v_toBind_1253_, v___f_1254_, v_____r_1255_);
lean_dec_ref(v_h_1251_);
lean_dec_ref(v_xs_1250_);
lean_dec_ref(v_e_1249_);
return v_res_1257_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0));
v___x_1260_ = l_Lean_stringToMessageData(v___x_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object* v___x_1261_, lean_object* v___x_1262_, lean_object* v___x_1263_, lean_object* v_cls_1264_, lean_object* v___x_1265_, lean_object* v___f_1266_, lean_object* v_declName_1267_, lean_object* v_val_1268_, lean_object* v_e_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v___x_9966__overap_1275_; lean_object* v___x_1276_; 
lean_inc(v_cls_1264_);
lean_inc_ref(v___x_1262_);
lean_inc_ref(v___x_1261_);
v___x_9966__overap_1275_ = l_Lean_isTracingEnabledFor___redArg(v___x_1261_, v___x_1262_, v___x_1263_, v_cls_1264_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
v___x_1276_ = lean_apply_5(v___x_9966__overap_1275_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, lean_box(0));
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1306_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1279_ = v___x_1276_;
v_isShared_1280_ = v_isSharedCheck_1306_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1276_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1306_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
uint8_t v___x_1281_; 
v___x_1281_ = lean_unbox(v_a_1277_);
lean_dec(v_a_1277_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1284_; 
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec_ref(v_e_1269_);
lean_dec_ref(v_val_1268_);
lean_dec(v_declName_1267_);
lean_dec(v___f_1266_);
lean_dec(v___x_1265_);
lean_dec(v_cls_1264_);
lean_dec_ref(v___x_1262_);
lean_dec_ref(v___x_1261_);
v___x_1282_ = lean_box(0);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1282_);
v___x_1284_ = v___x_1279_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
else
{
lean_object* v___f_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v_toMonadRef_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_9991__overap_1304_; lean_object* v___x_1305_; 
lean_del_object(v___x_1279_);
v___f_1286_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0));
v___x_1287_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
v___x_1288_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1289_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1287_, v___x_1265_, v___x_1288_);
v___x_1290_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1286_, v___f_1266_, v___x_1289_);
v_toMonadRef_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc_ref(v_toMonadRef_1291_);
lean_dec_ref(v___x_1290_);
v___x_1292_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1293_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1);
v___x_1294_ = l_Lean_MessageData_ofName(v_declName_1267_);
v___x_1295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1295_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = l_Lean_MessageData_ofExpr(v_val_1268_);
v___x_1299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1297_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = l_Lean_MessageData_ofExpr(v_e_1269_);
v___x_1303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1301_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_9991__overap_1304_ = l_Lean_addTrace___redArg(v___x_1261_, v___x_1262_, v_toMonadRef_1291_, v___x_1292_, v_cls_1264_, v___x_1303_);
v___x_1305_ = lean_apply_5(v___x_9991__overap_1304_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, lean_box(0));
return v___x_1305_;
}
}
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec_ref(v_e_1269_);
lean_dec_ref(v_val_1268_);
lean_dec(v_declName_1267_);
lean_dec(v___f_1266_);
lean_dec(v___x_1265_);
lean_dec(v_cls_1264_);
lean_dec_ref(v___x_1262_);
lean_dec_ref(v___x_1261_);
v_a_1307_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1276_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1276_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object* v___x_1315_, lean_object* v___x_1316_, lean_object* v___x_1317_, lean_object* v_cls_1318_, lean_object* v___x_1319_, lean_object* v___f_1320_, lean_object* v_declName_1321_, lean_object* v_val_1322_, lean_object* v_e_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(v___x_1315_, v___x_1316_, v___x_1317_, v_cls_1318_, v___x_1319_, v___f_1320_, v_declName_1321_, v_val_1322_, v_e_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
return v_res_1329_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0(void){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_instMonadEIO(lean_box(0));
return v___x_1330_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0);
v___x_1332_ = l_StateRefT_x27_instMonad___redArg(v___x_1331_);
return v___x_1332_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__13(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1349_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12));
v___x_1350_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1349_, v___x_1348_);
return v___x_1350_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14(void){
_start:
{
lean_object* v___x_1351_; lean_object* v___f_1352_; lean_object* v___x_1353_; 
v___x_1351_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__13, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__13_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__13);
v___f_1352_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11));
v___x_1353_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1352_, v___x_1351_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object* v_toApplicative_1359_, lean_object* v_level_1360_, lean_object* v___x_1361_, lean_object* v_type_1362_, lean_object* v_value_1363_, uint8_t v___x_1364_, lean_object* v_toBind_1365_, lean_object* v___f_1366_, lean_object* v_xs_1367_, uint8_t v_nondep_1368_, lean_object* v___f_1369_, lean_object* v_declName_1370_, lean_object* v_val_1371_, lean_object* v_inst_1372_, lean_object* v_____do__lift_1373_){
_start:
{
if (lean_obj_tag(v_____do__lift_1373_) == 0)
{
lean_object* v_toPure_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
lean_dec(v_inst_1372_);
lean_dec_ref(v_val_1371_);
lean_dec(v_declName_1370_);
lean_dec(v___f_1369_);
lean_dec_ref(v_xs_1367_);
v_toPure_1374_ = lean_ctor_get(v_toApplicative_1359_, 1);
lean_inc(v_toPure_1374_);
lean_dec_ref(v_toApplicative_1359_);
v___x_1375_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1376_, 0, v_level_1360_);
lean_ctor_set(v___x_1376_, 1, v___x_1361_);
v___x_1377_ = l_Lean_mkConst(v___x_1375_, v___x_1376_);
lean_inc_ref(v_value_1363_);
v___x_1378_ = l_Lean_mkAppB(v___x_1377_, v_type_1362_, v_value_1363_);
v___x_1379_ = lean_box(v___x_1364_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v___x_1378_);
v___x_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1381_, 0, v_value_1363_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = lean_apply_2(v_toPure_1374_, lean_box(0), v___x_1381_);
v___x_1383_ = lean_apply_4(v_toBind_1365_, lean_box(0), lean_box(0), v___x_1382_, v___f_1366_);
return v___x_1383_;
}
else
{
lean_object* v_e_1384_; lean_object* v_h_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1461_; 
lean_dec(v___f_1366_);
lean_dec_ref(v_value_1363_);
lean_dec_ref(v_type_1362_);
lean_dec(v___x_1361_);
lean_dec(v_level_1360_);
v_e_1384_ = lean_ctor_get(v_____do__lift_1373_, 0);
v_h_1385_ = lean_ctor_get(v_____do__lift_1373_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_____do__lift_1373_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1387_ = v_____do__lift_1373_;
v_isShared_1388_ = v_isSharedCheck_1461_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_h_1385_);
lean_inc(v_e_1384_);
lean_dec(v_____do__lift_1373_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1461_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v_toApplicative_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1459_; 
v___x_1389_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1);
v_toApplicative_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1459_ == 0)
{
lean_object* v_unused_1460_; 
v_unused_1460_ = lean_ctor_get(v___x_1389_, 1);
lean_dec(v_unused_1460_);
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1459_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_toApplicative_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1459_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v_toFunctor_1394_; lean_object* v_toSeq_1395_; lean_object* v_toSeqLeft_1396_; lean_object* v_toSeqRight_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1457_; 
v_toFunctor_1394_ = lean_ctor_get(v_toApplicative_1390_, 0);
v_toSeq_1395_ = lean_ctor_get(v_toApplicative_1390_, 2);
v_toSeqLeft_1396_ = lean_ctor_get(v_toApplicative_1390_, 3);
v_toSeqRight_1397_ = lean_ctor_get(v_toApplicative_1390_, 4);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_toApplicative_1390_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; 
v_unused_1458_ = lean_ctor_get(v_toApplicative_1390_, 1);
lean_dec(v_unused_1458_);
v___x_1399_ = v_toApplicative_1390_;
v_isShared_1400_ = v_isSharedCheck_1457_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_toSeqRight_1397_);
lean_inc(v_toSeqLeft_1396_);
lean_inc(v_toSeq_1395_);
lean_inc(v_toFunctor_1394_);
lean_dec(v_toApplicative_1390_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1457_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___f_1401_; lean_object* v___f_1402_; lean_object* v___f_1403_; lean_object* v___f_1404_; lean_object* v___x_1406_; 
v___f_1401_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2));
v___f_1402_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3));
lean_inc_ref(v_toFunctor_1394_);
v___f_1403_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1403_, 0, v_toFunctor_1394_);
v___f_1404_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1404_, 0, v_toFunctor_1394_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set_tag(v___x_1387_, 0);
lean_ctor_set(v___x_1387_, 1, v___f_1404_);
lean_ctor_set(v___x_1387_, 0, v___f_1403_);
v___x_1406_ = v___x_1387_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___f_1403_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v___f_1404_);
v___x_1406_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___f_1407_; lean_object* v___f_1408_; lean_object* v___f_1409_; lean_object* v___x_1411_; 
v___f_1407_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1407_, 0, v_toSeqRight_1397_);
v___f_1408_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1408_, 0, v_toSeqLeft_1396_);
v___f_1409_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1409_, 0, v_toSeq_1395_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 4, v___f_1407_);
lean_ctor_set(v___x_1399_, 3, v___f_1408_);
lean_ctor_set(v___x_1399_, 2, v___f_1409_);
lean_ctor_set(v___x_1399_, 1, v___f_1401_);
lean_ctor_set(v___x_1399_, 0, v___x_1406_);
v___x_1411_ = v___x_1399_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1406_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v___f_1401_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v___f_1409_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v___f_1408_);
lean_ctor_set(v_reuseFailAlloc_1455_, 4, v___f_1407_);
v___x_1411_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1413_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 1, v___f_1402_);
lean_ctor_set(v___x_1392_, 0, v___x_1411_);
v___x_1413_ = v___x_1392_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v___f_1402_);
v___x_1413_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1414_; lean_object* v_toApplicative_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1452_; 
v___x_1414_ = l_StateRefT_x27_instMonad___redArg(v___x_1413_);
v_toApplicative_1415_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1452_ == 0)
{
lean_object* v_unused_1453_; 
v_unused_1453_ = lean_ctor_get(v___x_1414_, 1);
lean_dec(v_unused_1453_);
v___x_1417_ = v___x_1414_;
v_isShared_1418_ = v_isSharedCheck_1452_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_toApplicative_1415_);
lean_dec(v___x_1414_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1452_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v_toFunctor_1419_; lean_object* v_toSeq_1420_; lean_object* v_toSeqLeft_1421_; lean_object* v_toSeqRight_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1450_; 
v_toFunctor_1419_ = lean_ctor_get(v_toApplicative_1415_, 0);
v_toSeq_1420_ = lean_ctor_get(v_toApplicative_1415_, 2);
v_toSeqLeft_1421_ = lean_ctor_get(v_toApplicative_1415_, 3);
v_toSeqRight_1422_ = lean_ctor_get(v_toApplicative_1415_, 4);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_toApplicative_1415_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v_toApplicative_1415_, 1);
lean_dec(v_unused_1451_);
v___x_1424_ = v_toApplicative_1415_;
v_isShared_1425_ = v_isSharedCheck_1450_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_toSeqRight_1422_);
lean_inc(v_toSeqLeft_1421_);
lean_inc(v_toSeq_1420_);
lean_inc(v_toFunctor_1419_);
lean_dec(v_toApplicative_1415_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1450_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1426_; lean_object* v___f_1427_; lean_object* v_cls_1428_; lean_object* v___f_1429_; lean_object* v___f_1430_; lean_object* v___f_1431_; lean_object* v___f_1432_; lean_object* v___x_1433_; lean_object* v___f_1434_; lean_object* v___f_1435_; lean_object* v___f_1436_; lean_object* v___x_1438_; 
v___x_1426_ = lean_box(v_nondep_1368_);
lean_inc(v_toBind_1365_);
lean_inc_ref(v_e_1384_);
v___f_1427_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_1427_, 0, v_toApplicative_1359_);
lean_closure_set(v___f_1427_, 1, v_e_1384_);
lean_closure_set(v___f_1427_, 2, v_xs_1367_);
lean_closure_set(v___f_1427_, 3, v_h_1385_);
lean_closure_set(v___f_1427_, 4, v___x_1426_);
lean_closure_set(v___f_1427_, 5, v_toBind_1365_);
lean_closure_set(v___f_1427_, 6, v___f_1369_);
v_cls_1428_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8));
v___f_1429_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9));
v___f_1430_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10));
lean_inc_ref(v_toFunctor_1419_);
v___f_1431_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1431_, 0, v_toFunctor_1419_);
v___f_1432_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1432_, 0, v_toFunctor_1419_);
v___x_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___f_1431_);
lean_ctor_set(v___x_1433_, 1, v___f_1432_);
v___f_1434_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1434_, 0, v_toSeqRight_1422_);
v___f_1435_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1435_, 0, v_toSeqLeft_1421_);
v___f_1436_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1436_, 0, v_toSeq_1420_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 4, v___f_1434_);
lean_ctor_set(v___x_1424_, 3, v___f_1435_);
lean_ctor_set(v___x_1424_, 2, v___f_1436_);
lean_ctor_set(v___x_1424_, 1, v___f_1429_);
lean_ctor_set(v___x_1424_, 0, v___x_1433_);
v___x_1438_ = v___x_1424_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1433_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v___f_1429_);
lean_ctor_set(v_reuseFailAlloc_1449_, 2, v___f_1436_);
lean_ctor_set(v_reuseFailAlloc_1449_, 3, v___f_1435_);
lean_ctor_set(v_reuseFailAlloc_1449_, 4, v___f_1434_);
v___x_1438_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
lean_object* v___x_1440_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 1, v___f_1430_);
lean_ctor_set(v___x_1417_, 0, v___x_1438_);
v___x_1440_ = v___x_1417_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1438_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v___f_1430_);
v___x_1440_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___f_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___f_1441_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11));
v___x_1442_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12));
v___x_1443_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14);
v___x_1444_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17));
v___f_1445_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed), 14, 9);
lean_closure_set(v___f_1445_, 0, v___x_1440_);
lean_closure_set(v___f_1445_, 1, v___x_1443_);
lean_closure_set(v___f_1445_, 2, v___x_1444_);
lean_closure_set(v___f_1445_, 3, v_cls_1428_);
lean_closure_set(v___f_1445_, 4, v___x_1442_);
lean_closure_set(v___f_1445_, 5, v___f_1441_);
lean_closure_set(v___f_1445_, 6, v_declName_1370_);
lean_closure_set(v___f_1445_, 7, v_val_1371_);
lean_closure_set(v___f_1445_, 8, v_e_1384_);
v___x_1446_ = lean_apply_2(v_inst_1372_, lean_box(0), v___f_1445_);
v___x_1447_ = lean_apply_4(v_toBind_1365_, lean_box(0), lean_box(0), v___x_1446_, v___f_1427_);
return v___x_1447_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object* v_toApplicative_1462_, lean_object* v_level_1463_, lean_object* v___x_1464_, lean_object* v_type_1465_, lean_object* v_value_1466_, lean_object* v___x_1467_, lean_object* v_toBind_1468_, lean_object* v___f_1469_, lean_object* v_xs_1470_, lean_object* v_nondep_1471_, lean_object* v___f_1472_, lean_object* v_declName_1473_, lean_object* v_val_1474_, lean_object* v_inst_1475_, lean_object* v_____do__lift_1476_){
_start:
{
uint8_t v___x_11087__boxed_1477_; uint8_t v_nondep_11089__boxed_1478_; lean_object* v_res_1479_; 
v___x_11087__boxed_1477_ = lean_unbox(v___x_1467_);
v_nondep_11089__boxed_1478_ = lean_unbox(v_nondep_1471_);
v_res_1479_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(v_toApplicative_1462_, v_level_1463_, v___x_1464_, v_type_1465_, v_value_1466_, v___x_11087__boxed_1477_, v_toBind_1468_, v___f_1469_, v_xs_1470_, v_nondep_11089__boxed_1478_, v___f_1472_, v_declName_1473_, v_val_1474_, v_inst_1475_, v_____do__lift_1476_);
return v_res_1479_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6(void){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1489_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5));
v___x_1490_ = lean_unsigned_to_nat(8u);
v___x_1491_ = lean_unsigned_to_nat(287u);
v___x_1492_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1493_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1494_ = l_mkPanicMessageWithDecl(v___x_1493_, v___x_1492_, v___x_1491_, v___x_1490_, v___x_1489_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object* v_declName_1495_, lean_object* v_type_1496_, lean_object* v_fst_1497_, lean_object* v___x_1498_, lean_object* v_value_1499_, uint8_t v_nondep_1500_, uint8_t v_fst_1501_, lean_object* v_toApplicative_1502_, lean_object* v___x_1503_, lean_object* v_us_1504_, lean_object* v_snd_1505_, lean_object* v_inst_1506_, lean_object* v_rb_1507_){
_start:
{
lean_object* v_expr_1508_; lean_object* v_exprType_1509_; lean_object* v_exprInit_1510_; lean_object* v_exprResult_1511_; lean_object* v_proof_1512_; uint8_t v_modified_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1564_; 
v_expr_1508_ = lean_ctor_get(v_rb_1507_, 0);
v_exprType_1509_ = lean_ctor_get(v_rb_1507_, 1);
v_exprInit_1510_ = lean_ctor_get(v_rb_1507_, 2);
v_exprResult_1511_ = lean_ctor_get(v_rb_1507_, 3);
v_proof_1512_ = lean_ctor_get(v_rb_1507_, 4);
v_modified_1513_ = lean_ctor_get_uint8(v_rb_1507_, sizeof(void*)*5);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_rb_1507_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1515_ = v_rb_1507_;
v_isShared_1516_ = v_isSharedCheck_1564_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_proof_1512_);
lean_inc(v_exprResult_1511_);
lean_inc(v_exprInit_1510_);
lean_inc(v_exprType_1509_);
lean_inc(v_expr_1508_);
lean_dec(v_rb_1507_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1564_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = lean_unsigned_to_nat(0u);
v___x_1518_ = lean_expr_has_loose_bvar(v_exprType_1509_, v___x_1517_);
if (v___x_1518_ == 0)
{
uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v_expr_1521_; lean_object* v_exprType_1522_; lean_object* v___x_1523_; lean_object* v_exprInit_1524_; lean_object* v_exprResult_1525_; 
lean_dec_ref(v_inst_1506_);
v___x_1519_ = 0;
lean_inc_ref(v_type_1496_);
lean_inc(v_declName_1495_);
v___x_1520_ = l_Lean_mkLambda(v_declName_1495_, v___x_1519_, v_type_1496_, v_expr_1508_);
lean_inc_ref(v_fst_1497_);
lean_inc_ref(v___x_1520_);
v_expr_1521_ = l_Lean_Expr_app___override(v___x_1520_, v_fst_1497_);
v_exprType_1522_ = lean_expr_lower_loose_bvars(v_exprType_1509_, v___x_1498_, v___x_1498_);
lean_dec_ref(v_exprType_1509_);
lean_inc_ref(v_type_1496_);
lean_inc(v_declName_1495_);
v___x_1523_ = l_Lean_mkLambda(v_declName_1495_, v___x_1519_, v_type_1496_, v_exprInit_1510_);
lean_inc_ref(v_value_1499_);
lean_inc_ref(v___x_1523_);
v_exprInit_1524_ = l_Lean_Expr_app___override(v___x_1523_, v_value_1499_);
lean_inc_ref(v_fst_1497_);
lean_inc_ref(v_type_1496_);
lean_inc(v_declName_1495_);
v_exprResult_1525_ = l_Lean_Expr_letE___override(v_declName_1495_, v_type_1496_, v_fst_1497_, v_exprResult_1511_, v_nondep_1500_);
if (v_fst_1501_ == 0)
{
lean_dec_ref(v_snd_1505_);
lean_dec_ref(v_fst_1497_);
if (v_modified_1513_ == 0)
{
lean_object* v_toPure_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v_proof_1529_; lean_object* v___x_1531_; 
lean_dec_ref(v___x_1523_);
lean_dec_ref(v___x_1520_);
lean_dec_ref(v_proof_1512_);
lean_dec(v_us_1504_);
lean_dec_ref(v_value_1499_);
lean_dec_ref(v_type_1496_);
lean_dec(v_declName_1495_);
v_toPure_1526_ = lean_ctor_get(v_toApplicative_1502_, 1);
lean_inc(v_toPure_1526_);
lean_dec_ref(v_toApplicative_1502_);
v___x_1527_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1528_ = l_Lean_mkConst(v___x_1527_, v___x_1503_);
lean_inc_ref(v_expr_1521_);
lean_inc_ref(v_exprType_1522_);
v_proof_1529_ = l_Lean_mkAppB(v___x_1528_, v_exprType_1522_, v_expr_1521_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 4, v_proof_1529_);
lean_ctor_set(v___x_1515_, 3, v_exprResult_1525_);
lean_ctor_set(v___x_1515_, 2, v_exprInit_1524_);
lean_ctor_set(v___x_1515_, 1, v_exprType_1522_);
lean_ctor_set(v___x_1515_, 0, v_expr_1521_);
v___x_1531_ = v___x_1515_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_expr_1521_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v_exprType_1522_);
lean_ctor_set(v_reuseFailAlloc_1533_, 2, v_exprInit_1524_);
lean_ctor_set(v_reuseFailAlloc_1533_, 3, v_exprResult_1525_);
lean_ctor_set(v_reuseFailAlloc_1533_, 4, v_proof_1529_);
lean_ctor_set_uint8(v_reuseFailAlloc_1533_, sizeof(void*)*5, v_modified_1513_);
v___x_1531_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_apply_2(v_toPure_1526_, lean_box(0), v___x_1531_);
return v___x_1532_;
}
}
else
{
lean_object* v_toPure_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v_proof_1538_; lean_object* v___x_1540_; 
lean_dec(v___x_1503_);
v_toPure_1534_ = lean_ctor_get(v_toApplicative_1502_, 1);
lean_inc(v_toPure_1534_);
lean_dec_ref(v_toApplicative_1502_);
lean_inc_ref(v_type_1496_);
v___x_1535_ = l_Lean_mkLambda(v_declName_1495_, v___x_1519_, v_type_1496_, v_proof_1512_);
v___x_1536_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0));
v___x_1537_ = l_Lean_mkConst(v___x_1536_, v_us_1504_);
lean_inc_ref(v_exprType_1522_);
v_proof_1538_ = l_Lean_mkApp6(v___x_1537_, v_type_1496_, v_exprType_1522_, v_value_1499_, v___x_1523_, v___x_1520_, v___x_1535_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 4, v_proof_1538_);
lean_ctor_set(v___x_1515_, 3, v_exprResult_1525_);
lean_ctor_set(v___x_1515_, 2, v_exprInit_1524_);
lean_ctor_set(v___x_1515_, 1, v_exprType_1522_);
lean_ctor_set(v___x_1515_, 0, v_expr_1521_);
v___x_1540_ = v___x_1515_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_expr_1521_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_exprType_1522_);
lean_ctor_set(v_reuseFailAlloc_1542_, 2, v_exprInit_1524_);
lean_ctor_set(v_reuseFailAlloc_1542_, 3, v_exprResult_1525_);
lean_ctor_set(v_reuseFailAlloc_1542_, 4, v_proof_1538_);
v___x_1540_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
lean_object* v___x_1541_; 
lean_ctor_set_uint8(v___x_1540_, sizeof(void*)*5, v_nondep_1500_);
v___x_1541_ = lean_apply_2(v_toPure_1534_, lean_box(0), v___x_1540_);
return v___x_1541_;
}
}
}
else
{
lean_dec(v___x_1503_);
if (v_modified_1513_ == 0)
{
lean_object* v_toPure_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v_proof_1546_; lean_object* v___x_1548_; 
lean_dec_ref(v___x_1520_);
lean_dec_ref(v_proof_1512_);
lean_dec(v_declName_1495_);
v_toPure_1543_ = lean_ctor_get(v_toApplicative_1502_, 1);
lean_inc(v_toPure_1543_);
lean_dec_ref(v_toApplicative_1502_);
v___x_1544_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1));
v___x_1545_ = l_Lean_mkConst(v___x_1544_, v_us_1504_);
lean_inc_ref(v_exprType_1522_);
v_proof_1546_ = l_Lean_mkApp6(v___x_1545_, v_type_1496_, v_exprType_1522_, v_value_1499_, v_fst_1497_, v___x_1523_, v_snd_1505_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 4, v_proof_1546_);
lean_ctor_set(v___x_1515_, 3, v_exprResult_1525_);
lean_ctor_set(v___x_1515_, 2, v_exprInit_1524_);
lean_ctor_set(v___x_1515_, 1, v_exprType_1522_);
lean_ctor_set(v___x_1515_, 0, v_expr_1521_);
v___x_1548_ = v___x_1515_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_expr_1521_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v_exprType_1522_);
lean_ctor_set(v_reuseFailAlloc_1550_, 2, v_exprInit_1524_);
lean_ctor_set(v_reuseFailAlloc_1550_, 3, v_exprResult_1525_);
lean_ctor_set(v_reuseFailAlloc_1550_, 4, v_proof_1546_);
v___x_1548_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
lean_object* v___x_1549_; 
lean_ctor_set_uint8(v___x_1548_, sizeof(void*)*5, v_nondep_1500_);
v___x_1549_ = lean_apply_2(v_toPure_1543_, lean_box(0), v___x_1548_);
return v___x_1549_;
}
}
else
{
lean_object* v_toPure_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v_proof_1555_; lean_object* v___x_1557_; 
v_toPure_1551_ = lean_ctor_get(v_toApplicative_1502_, 1);
lean_inc(v_toPure_1551_);
lean_dec_ref(v_toApplicative_1502_);
lean_inc_ref(v_type_1496_);
v___x_1552_ = l_Lean_mkLambda(v_declName_1495_, v___x_1519_, v_type_1496_, v_proof_1512_);
v___x_1553_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2));
v___x_1554_ = l_Lean_mkConst(v___x_1553_, v_us_1504_);
lean_inc_ref(v_exprType_1522_);
v_proof_1555_ = l_Lean_mkApp8(v___x_1554_, v_type_1496_, v_exprType_1522_, v_value_1499_, v_fst_1497_, v___x_1523_, v___x_1520_, v_snd_1505_, v___x_1552_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 4, v_proof_1555_);
lean_ctor_set(v___x_1515_, 3, v_exprResult_1525_);
lean_ctor_set(v___x_1515_, 2, v_exprInit_1524_);
lean_ctor_set(v___x_1515_, 1, v_exprType_1522_);
lean_ctor_set(v___x_1515_, 0, v_expr_1521_);
v___x_1557_ = v___x_1515_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_expr_1521_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_exprType_1522_);
lean_ctor_set(v_reuseFailAlloc_1559_, 2, v_exprInit_1524_);
lean_ctor_set(v_reuseFailAlloc_1559_, 3, v_exprResult_1525_);
lean_ctor_set(v_reuseFailAlloc_1559_, 4, v_proof_1555_);
v___x_1557_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1558_; 
lean_ctor_set_uint8(v___x_1557_, sizeof(void*)*5, v_nondep_1500_);
v___x_1558_ = lean_apply_2(v_toPure_1551_, lean_box(0), v___x_1557_);
return v___x_1558_;
}
}
}
}
else
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_del_object(v___x_1515_);
lean_dec_ref(v_proof_1512_);
lean_dec_ref(v_exprResult_1511_);
lean_dec_ref(v_exprInit_1510_);
lean_dec_ref(v_exprType_1509_);
lean_dec_ref(v_expr_1508_);
lean_dec_ref(v_snd_1505_);
lean_dec(v_us_1504_);
lean_dec(v___x_1503_);
lean_dec_ref(v_toApplicative_1502_);
lean_dec_ref(v_value_1499_);
lean_dec_ref(v_fst_1497_);
lean_dec_ref(v_type_1496_);
lean_dec(v_declName_1495_);
v___x_1560_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default;
v___x_1561_ = l_instInhabitedOfMonad___redArg(v_inst_1506_, v___x_1560_);
v___x_1562_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6);
v___x_1563_ = l_panic___redArg(v___x_1561_, v___x_1562_);
return v___x_1563_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object* v_declName_1565_, lean_object* v_type_1566_, lean_object* v_fst_1567_, lean_object* v___x_1568_, lean_object* v_value_1569_, lean_object* v_nondep_1570_, lean_object* v_fst_1571_, lean_object* v_toApplicative_1572_, lean_object* v___x_1573_, lean_object* v_us_1574_, lean_object* v_snd_1575_, lean_object* v_inst_1576_, lean_object* v_rb_1577_){
_start:
{
uint8_t v_nondep_11340__boxed_1578_; uint8_t v_fst_11341__boxed_1579_; lean_object* v_res_1580_; 
v_nondep_11340__boxed_1578_ = lean_unbox(v_nondep_1570_);
v_fst_11341__boxed_1579_ = lean_unbox(v_fst_1571_);
v_res_1580_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(v_declName_1565_, v_type_1566_, v_fst_1567_, v___x_1568_, v_value_1569_, v_nondep_11340__boxed_1578_, v_fst_11341__boxed_1579_, v_toApplicative_1572_, v___x_1573_, v_us_1574_, v_snd_1575_, v_inst_1576_, v_rb_1577_);
lean_dec(v___x_1568_);
return v_res_1580_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1(void){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1585_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0));
v___x_1586_ = lean_unsigned_to_nat(34u);
v___x_1587_ = lean_unsigned_to_nat(217u);
v___x_1588_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1589_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1590_ = l_mkPanicMessageWithDecl(v___x_1589_, v___x_1588_, v___x_1587_, v___x_1586_, v___x_1585_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object* v_declName_1591_, lean_object* v_type_1592_, lean_object* v_value_1593_, uint8_t v_nondep_1594_, lean_object* v_toApplicative_1595_, lean_object* v___x_1596_, lean_object* v_us_1597_, lean_object* v_decl_1598_, lean_object* v_x_1599_, lean_object* v_i_1600_, lean_object* v_xs_1601_, lean_object* v_inst_1602_, lean_object* v_inst_1603_, lean_object* v_inst_1604_, lean_object* v_inst_1605_, lean_object* v_info_1606_, lean_object* v_fixed_1607_, lean_object* v_used_1608_, lean_object* v_body_1609_, lean_object* v_toBind_1610_, lean_object* v_withNewLemmas_1611_, lean_object* v_val_x27_1612_, lean_object* v_val_1613_, uint8_t v___x_1614_, lean_object* v_____r_1615_){
_start:
{
uint8_t v___y_1617_; lean_object* v___y_1618_; uint8_t v___y_1634_; uint8_t v___x_1636_; 
v___x_1636_ = lean_expr_eqv(v_val_1613_, v_val_x27_1612_);
if (v___x_1636_ == 0)
{
v___y_1634_ = v_nondep_1594_;
goto v___jp_1633_;
}
else
{
v___y_1634_ = v___x_1614_;
goto v___jp_1633_;
}
v___jp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___f_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1619_ = lean_box(v_nondep_1594_);
v___x_1620_ = lean_box(v___y_1617_);
v___f_1621_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed), 10, 9);
lean_closure_set(v___f_1621_, 0, v_declName_1591_);
lean_closure_set(v___f_1621_, 1, v_type_1592_);
lean_closure_set(v___f_1621_, 2, v___y_1618_);
lean_closure_set(v___f_1621_, 3, v_value_1593_);
lean_closure_set(v___f_1621_, 4, v___x_1619_);
lean_closure_set(v___f_1621_, 5, v_toApplicative_1595_);
lean_closure_set(v___f_1621_, 6, v___x_1596_);
lean_closure_set(v___f_1621_, 7, v___x_1620_);
lean_closure_set(v___f_1621_, 8, v_us_1597_);
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_decl_1598_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_unsigned_to_nat(1u);
v___x_1625_ = lean_mk_empty_array_with_capacity(v___x_1624_);
lean_inc_ref(v_x_1599_);
v___x_1626_ = lean_array_push(v___x_1625_, v_x_1599_);
v___x_1627_ = lean_nat_add(v_i_1600_, v___x_1624_);
v___x_1628_ = lean_array_push(v_xs_1601_, v_x_1599_);
lean_inc_ref(v_inst_1604_);
lean_inc_ref(v_inst_1602_);
v___x_1629_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1602_, v_inst_1603_, v_inst_1604_, v_inst_1605_, v_info_1606_, v_fixed_1607_, v_used_1608_, v_body_1609_, v___x_1627_, v___x_1628_);
v___x_1630_ = lean_apply_4(v_toBind_1610_, lean_box(0), lean_box(0), v___x_1629_, v___f_1621_);
v___x_1631_ = lean_apply_3(v_withNewLemmas_1611_, lean_box(0), v___x_1626_, v___x_1630_);
v___x_1632_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1604_, v_inst_1602_, v___x_1623_, v___x_1631_);
return v___x_1632_;
}
v___jp_1633_:
{
if (v___y_1634_ == 0)
{
lean_inc_ref(v_value_1593_);
v___y_1617_ = v___y_1634_;
v___y_1618_ = v_value_1593_;
goto v___jp_1616_;
}
else
{
lean_object* v___x_1635_; 
v___x_1635_ = lean_expr_abstract(v_val_x27_1612_, v_xs_1601_);
v___y_1617_ = v___y_1634_;
v___y_1618_ = v___x_1635_;
goto v___jp_1616_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_declName_1637_ = _args[0];
lean_object* v_type_1638_ = _args[1];
lean_object* v_value_1639_ = _args[2];
lean_object* v_nondep_1640_ = _args[3];
lean_object* v_toApplicative_1641_ = _args[4];
lean_object* v___x_1642_ = _args[5];
lean_object* v_us_1643_ = _args[6];
lean_object* v_decl_1644_ = _args[7];
lean_object* v_x_1645_ = _args[8];
lean_object* v_i_1646_ = _args[9];
lean_object* v_xs_1647_ = _args[10];
lean_object* v_inst_1648_ = _args[11];
lean_object* v_inst_1649_ = _args[12];
lean_object* v_inst_1650_ = _args[13];
lean_object* v_inst_1651_ = _args[14];
lean_object* v_info_1652_ = _args[15];
lean_object* v_fixed_1653_ = _args[16];
lean_object* v_used_1654_ = _args[17];
lean_object* v_body_1655_ = _args[18];
lean_object* v_toBind_1656_ = _args[19];
lean_object* v_withNewLemmas_1657_ = _args[20];
lean_object* v_val_x27_1658_ = _args[21];
lean_object* v_val_1659_ = _args[22];
lean_object* v___x_1660_ = _args[23];
lean_object* v_____r_1661_ = _args[24];
_start:
{
uint8_t v_nondep_11611__boxed_1662_; uint8_t v___x_11618__boxed_1663_; lean_object* v_res_1664_; 
v_nondep_11611__boxed_1662_ = lean_unbox(v_nondep_1640_);
v___x_11618__boxed_1663_ = lean_unbox(v___x_1660_);
v_res_1664_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(v_declName_1637_, v_type_1638_, v_value_1639_, v_nondep_11611__boxed_1662_, v_toApplicative_1641_, v___x_1642_, v_us_1643_, v_decl_1644_, v_x_1645_, v_i_1646_, v_xs_1647_, v_inst_1648_, v_inst_1649_, v_inst_1650_, v_inst_1651_, v_info_1652_, v_fixed_1653_, v_used_1654_, v_body_1655_, v_toBind_1656_, v_withNewLemmas_1657_, v_val_x27_1658_, v_val_1659_, v___x_11618__boxed_1663_, v_____r_1661_);
lean_dec_ref(v_val_1659_);
lean_dec_ref(v_val_x27_1658_);
lean_dec(v_i_1646_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object* v_declName_1665_, lean_object* v_type_1666_, lean_object* v_value_1667_, uint8_t v_nondep_1668_, lean_object* v_toApplicative_1669_, lean_object* v___x_1670_, lean_object* v_us_1671_, lean_object* v_decl_1672_, lean_object* v_x_1673_, lean_object* v_i_1674_, lean_object* v_xs_1675_, lean_object* v_inst_1676_, lean_object* v_inst_1677_, lean_object* v_inst_1678_, lean_object* v_inst_1679_, lean_object* v_info_1680_, lean_object* v_fixed_1681_, lean_object* v_used_1682_, lean_object* v_body_1683_, lean_object* v_toBind_1684_, lean_object* v_withNewLemmas_1685_, lean_object* v_val_1686_, uint8_t v___x_1687_, lean_object* v_val_x27_1688_){
_start:
{
lean_object* v___x_1689_; lean_object* v_toApplicative_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1758_; 
v___x_1689_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1);
v_toApplicative_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1758_ == 0)
{
lean_object* v_unused_1759_; 
v_unused_1759_ = lean_ctor_get(v___x_1689_, 1);
lean_dec(v_unused_1759_);
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1758_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_toApplicative_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1758_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v_toFunctor_1694_; lean_object* v_toSeq_1695_; lean_object* v_toSeqLeft_1696_; lean_object* v_toSeqRight_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1756_; 
v_toFunctor_1694_ = lean_ctor_get(v_toApplicative_1690_, 0);
v_toSeq_1695_ = lean_ctor_get(v_toApplicative_1690_, 2);
v_toSeqLeft_1696_ = lean_ctor_get(v_toApplicative_1690_, 3);
v_toSeqRight_1697_ = lean_ctor_get(v_toApplicative_1690_, 4);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_toApplicative_1690_);
if (v_isSharedCheck_1756_ == 0)
{
lean_object* v_unused_1757_; 
v_unused_1757_ = lean_ctor_get(v_toApplicative_1690_, 1);
lean_dec(v_unused_1757_);
v___x_1699_ = v_toApplicative_1690_;
v_isShared_1700_ = v_isSharedCheck_1756_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_toSeqRight_1697_);
lean_inc(v_toSeqLeft_1696_);
lean_inc(v_toSeq_1695_);
lean_inc(v_toFunctor_1694_);
lean_dec(v_toApplicative_1690_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1756_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___f_1701_; lean_object* v___f_1702_; lean_object* v___f_1703_; lean_object* v___f_1704_; lean_object* v___x_1705_; lean_object* v___f_1706_; lean_object* v___f_1707_; lean_object* v___f_1708_; lean_object* v___x_1710_; 
v___f_1701_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2));
v___f_1702_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3));
lean_inc_ref(v_toFunctor_1694_);
v___f_1703_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1703_, 0, v_toFunctor_1694_);
v___f_1704_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1704_, 0, v_toFunctor_1694_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___f_1703_);
lean_ctor_set(v___x_1705_, 1, v___f_1704_);
v___f_1706_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1706_, 0, v_toSeqRight_1697_);
v___f_1707_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1707_, 0, v_toSeqLeft_1696_);
v___f_1708_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1708_, 0, v_toSeq_1695_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 4, v___f_1706_);
lean_ctor_set(v___x_1699_, 3, v___f_1707_);
lean_ctor_set(v___x_1699_, 2, v___f_1708_);
lean_ctor_set(v___x_1699_, 1, v___f_1701_);
lean_ctor_set(v___x_1699_, 0, v___x_1705_);
v___x_1710_ = v___x_1699_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1705_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v___f_1701_);
lean_ctor_set(v_reuseFailAlloc_1755_, 2, v___f_1708_);
lean_ctor_set(v_reuseFailAlloc_1755_, 3, v___f_1707_);
lean_ctor_set(v_reuseFailAlloc_1755_, 4, v___f_1706_);
v___x_1710_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1712_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 1, v___f_1702_);
lean_ctor_set(v___x_1692_, 0, v___x_1710_);
v___x_1712_ = v___x_1692_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1710_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v___f_1702_);
v___x_1712_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1713_; lean_object* v_toApplicative_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1752_; 
v___x_1713_ = l_StateRefT_x27_instMonad___redArg(v___x_1712_);
v_toApplicative_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1752_ == 0)
{
lean_object* v_unused_1753_; 
v_unused_1753_ = lean_ctor_get(v___x_1713_, 1);
lean_dec(v_unused_1753_);
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1752_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_toApplicative_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1752_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v_toFunctor_1718_; lean_object* v_toSeq_1719_; lean_object* v_toSeqLeft_1720_; lean_object* v_toSeqRight_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1750_; 
v_toFunctor_1718_ = lean_ctor_get(v_toApplicative_1714_, 0);
v_toSeq_1719_ = lean_ctor_get(v_toApplicative_1714_, 2);
v_toSeqLeft_1720_ = lean_ctor_get(v_toApplicative_1714_, 3);
v_toSeqRight_1721_ = lean_ctor_get(v_toApplicative_1714_, 4);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_toApplicative_1714_);
if (v_isSharedCheck_1750_ == 0)
{
lean_object* v_unused_1751_; 
v_unused_1751_ = lean_ctor_get(v_toApplicative_1714_, 1);
lean_dec(v_unused_1751_);
v___x_1723_ = v_toApplicative_1714_;
v_isShared_1724_ = v_isSharedCheck_1750_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_toSeqRight_1721_);
lean_inc(v_toSeqLeft_1720_);
lean_inc(v_toSeq_1719_);
lean_inc(v_toFunctor_1718_);
lean_dec(v_toApplicative_1714_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1750_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___f_1727_; lean_object* v_cls_1728_; lean_object* v___f_1729_; lean_object* v___f_1730_; lean_object* v___f_1731_; lean_object* v___f_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; lean_object* v___f_1735_; lean_object* v___f_1736_; lean_object* v___x_1738_; 
v___x_1725_ = lean_box(v_nondep_1668_);
v___x_1726_ = lean_box(v___x_1687_);
lean_inc_ref(v_val_1686_);
lean_inc_ref(v_val_x27_1688_);
lean_inc(v_toBind_1684_);
lean_inc(v_inst_1677_);
lean_inc(v_declName_1665_);
v___f_1727_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed), 25, 24);
lean_closure_set(v___f_1727_, 0, v_declName_1665_);
lean_closure_set(v___f_1727_, 1, v_type_1666_);
lean_closure_set(v___f_1727_, 2, v_value_1667_);
lean_closure_set(v___f_1727_, 3, v___x_1725_);
lean_closure_set(v___f_1727_, 4, v_toApplicative_1669_);
lean_closure_set(v___f_1727_, 5, v___x_1670_);
lean_closure_set(v___f_1727_, 6, v_us_1671_);
lean_closure_set(v___f_1727_, 7, v_decl_1672_);
lean_closure_set(v___f_1727_, 8, v_x_1673_);
lean_closure_set(v___f_1727_, 9, v_i_1674_);
lean_closure_set(v___f_1727_, 10, v_xs_1675_);
lean_closure_set(v___f_1727_, 11, v_inst_1676_);
lean_closure_set(v___f_1727_, 12, v_inst_1677_);
lean_closure_set(v___f_1727_, 13, v_inst_1678_);
lean_closure_set(v___f_1727_, 14, v_inst_1679_);
lean_closure_set(v___f_1727_, 15, v_info_1680_);
lean_closure_set(v___f_1727_, 16, v_fixed_1681_);
lean_closure_set(v___f_1727_, 17, v_used_1682_);
lean_closure_set(v___f_1727_, 18, v_body_1683_);
lean_closure_set(v___f_1727_, 19, v_toBind_1684_);
lean_closure_set(v___f_1727_, 20, v_withNewLemmas_1685_);
lean_closure_set(v___f_1727_, 21, v_val_x27_1688_);
lean_closure_set(v___f_1727_, 22, v_val_1686_);
lean_closure_set(v___f_1727_, 23, v___x_1726_);
v_cls_1728_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8));
v___f_1729_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9));
v___f_1730_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10));
lean_inc_ref(v_toFunctor_1718_);
v___f_1731_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1731_, 0, v_toFunctor_1718_);
v___f_1732_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1732_, 0, v_toFunctor_1718_);
v___x_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___f_1731_);
lean_ctor_set(v___x_1733_, 1, v___f_1732_);
v___f_1734_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1734_, 0, v_toSeqRight_1721_);
v___f_1735_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1735_, 0, v_toSeqLeft_1720_);
v___f_1736_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1736_, 0, v_toSeq_1719_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 4, v___f_1734_);
lean_ctor_set(v___x_1723_, 3, v___f_1735_);
lean_ctor_set(v___x_1723_, 2, v___f_1736_);
lean_ctor_set(v___x_1723_, 1, v___f_1729_);
lean_ctor_set(v___x_1723_, 0, v___x_1733_);
v___x_1738_ = v___x_1723_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v___f_1729_);
lean_ctor_set(v_reuseFailAlloc_1749_, 2, v___f_1736_);
lean_ctor_set(v_reuseFailAlloc_1749_, 3, v___f_1735_);
lean_ctor_set(v_reuseFailAlloc_1749_, 4, v___f_1734_);
v___x_1738_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
lean_object* v___x_1740_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 1, v___f_1730_);
lean_ctor_set(v___x_1716_, 0, v___x_1738_);
v___x_1740_ = v___x_1716_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1738_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v___f_1730_);
v___x_1740_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___f_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___f_1741_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11));
v___x_1742_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12));
v___x_1743_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14);
v___x_1744_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17));
v___f_1745_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed), 14, 9);
lean_closure_set(v___f_1745_, 0, v___x_1740_);
lean_closure_set(v___f_1745_, 1, v___x_1743_);
lean_closure_set(v___f_1745_, 2, v___x_1744_);
lean_closure_set(v___f_1745_, 3, v_cls_1728_);
lean_closure_set(v___f_1745_, 4, v___x_1742_);
lean_closure_set(v___f_1745_, 5, v___f_1741_);
lean_closure_set(v___f_1745_, 6, v_declName_1665_);
lean_closure_set(v___f_1745_, 7, v_val_1686_);
lean_closure_set(v___f_1745_, 8, v_val_x27_1688_);
v___x_1746_ = lean_apply_2(v_inst_1677_, lean_box(0), v___f_1745_);
v___x_1747_ = lean_apply_4(v_toBind_1684_, lean_box(0), lean_box(0), v___x_1746_, v___f_1727_);
return v___x_1747_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_declName_1760_ = _args[0];
lean_object* v_type_1761_ = _args[1];
lean_object* v_value_1762_ = _args[2];
lean_object* v_nondep_1763_ = _args[3];
lean_object* v_toApplicative_1764_ = _args[4];
lean_object* v___x_1765_ = _args[5];
lean_object* v_us_1766_ = _args[6];
lean_object* v_decl_1767_ = _args[7];
lean_object* v_x_1768_ = _args[8];
lean_object* v_i_1769_ = _args[9];
lean_object* v_xs_1770_ = _args[10];
lean_object* v_inst_1771_ = _args[11];
lean_object* v_inst_1772_ = _args[12];
lean_object* v_inst_1773_ = _args[13];
lean_object* v_inst_1774_ = _args[14];
lean_object* v_info_1775_ = _args[15];
lean_object* v_fixed_1776_ = _args[16];
lean_object* v_used_1777_ = _args[17];
lean_object* v_body_1778_ = _args[18];
lean_object* v_toBind_1779_ = _args[19];
lean_object* v_withNewLemmas_1780_ = _args[20];
lean_object* v_val_1781_ = _args[21];
lean_object* v___x_1782_ = _args[22];
lean_object* v_val_x27_1783_ = _args[23];
_start:
{
uint8_t v_nondep_11642__boxed_1784_; uint8_t v___x_11649__boxed_1785_; lean_object* v_res_1786_; 
v_nondep_11642__boxed_1784_ = lean_unbox(v_nondep_1763_);
v___x_11649__boxed_1785_ = lean_unbox(v___x_1782_);
v_res_1786_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(v_declName_1760_, v_type_1761_, v_value_1762_, v_nondep_11642__boxed_1784_, v_toApplicative_1764_, v___x_1765_, v_us_1766_, v_decl_1767_, v_x_1768_, v_i_1769_, v_xs_1770_, v_inst_1771_, v_inst_1772_, v_inst_1773_, v_inst_1774_, v_info_1775_, v_fixed_1776_, v_used_1777_, v_body_1778_, v_toBind_1779_, v_withNewLemmas_1780_, v_val_1781_, v___x_11649__boxed_1785_, v_val_x27_1783_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object* v_decl_1787_, lean_object* v_declName_1788_, lean_object* v_type_1789_, lean_object* v_value_1790_, uint8_t v_nondep_1791_, lean_object* v_toApplicative_1792_, lean_object* v___x_1793_, lean_object* v_us_1794_, lean_object* v_inst_1795_, lean_object* v_x_1796_, lean_object* v_i_1797_, lean_object* v_xs_1798_, lean_object* v_inst_1799_, lean_object* v_inst_1800_, lean_object* v_inst_1801_, lean_object* v_info_1802_, lean_object* v_fixed_1803_, lean_object* v_used_1804_, lean_object* v_body_1805_, lean_object* v_toBind_1806_, lean_object* v_withNewLemmas_1807_, lean_object* v_____x_1808_){
_start:
{
lean_object* v_snd_1809_; lean_object* v_fst_1810_; lean_object* v_fst_1811_; lean_object* v_snd_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1831_; 
v_snd_1809_ = lean_ctor_get(v_____x_1808_, 1);
lean_inc(v_snd_1809_);
v_fst_1810_ = lean_ctor_get(v_____x_1808_, 0);
lean_inc(v_fst_1810_);
lean_dec_ref(v_____x_1808_);
v_fst_1811_ = lean_ctor_get(v_snd_1809_, 0);
v_snd_1812_ = lean_ctor_get(v_snd_1809_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_snd_1809_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1814_ = v_snd_1809_;
v_isShared_1815_ = v_isSharedCheck_1831_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_snd_1812_);
lean_inc(v_fst_1811_);
lean_dec(v_snd_1809_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1831_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1816_ = lean_box(0);
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 1);
lean_ctor_set(v___x_1814_, 1, v___x_1816_);
lean_ctor_set(v___x_1814_, 0, v_decl_1787_);
v___x_1818_ = v___x_1814_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_decl_1787_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___f_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1819_ = lean_unsigned_to_nat(1u);
v___x_1820_ = lean_box(v_nondep_1791_);
lean_inc_ref(v_inst_1795_);
v___f_1821_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed), 13, 12);
lean_closure_set(v___f_1821_, 0, v_declName_1788_);
lean_closure_set(v___f_1821_, 1, v_type_1789_);
lean_closure_set(v___f_1821_, 2, v_fst_1810_);
lean_closure_set(v___f_1821_, 3, v___x_1819_);
lean_closure_set(v___f_1821_, 4, v_value_1790_);
lean_closure_set(v___f_1821_, 5, v___x_1820_);
lean_closure_set(v___f_1821_, 6, v_fst_1811_);
lean_closure_set(v___f_1821_, 7, v_toApplicative_1792_);
lean_closure_set(v___f_1821_, 8, v___x_1793_);
lean_closure_set(v___f_1821_, 9, v_us_1794_);
lean_closure_set(v___f_1821_, 10, v_snd_1812_);
lean_closure_set(v___f_1821_, 11, v_inst_1795_);
v___x_1822_ = lean_mk_empty_array_with_capacity(v___x_1819_);
lean_inc_ref(v_x_1796_);
v___x_1823_ = lean_array_push(v___x_1822_, v_x_1796_);
v___x_1824_ = lean_nat_add(v_i_1797_, v___x_1819_);
v___x_1825_ = lean_array_push(v_xs_1798_, v_x_1796_);
lean_inc_ref(v_inst_1800_);
lean_inc_ref(v_inst_1795_);
v___x_1826_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1795_, v_inst_1799_, v_inst_1800_, v_inst_1801_, v_info_1802_, v_fixed_1803_, v_used_1804_, v_body_1805_, v___x_1824_, v___x_1825_);
v___x_1827_ = lean_apply_4(v_toBind_1806_, lean_box(0), lean_box(0), v___x_1826_, v___f_1821_);
v___x_1828_ = lean_apply_3(v_withNewLemmas_1807_, lean_box(0), v___x_1823_, v___x_1827_);
v___x_1829_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1800_, v_inst_1795_, v___x_1818_, v___x_1828_);
return v___x_1829_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_decl_1832_ = _args[0];
lean_object* v_declName_1833_ = _args[1];
lean_object* v_type_1834_ = _args[2];
lean_object* v_value_1835_ = _args[3];
lean_object* v_nondep_1836_ = _args[4];
lean_object* v_toApplicative_1837_ = _args[5];
lean_object* v___x_1838_ = _args[6];
lean_object* v_us_1839_ = _args[7];
lean_object* v_inst_1840_ = _args[8];
lean_object* v_x_1841_ = _args[9];
lean_object* v_i_1842_ = _args[10];
lean_object* v_xs_1843_ = _args[11];
lean_object* v_inst_1844_ = _args[12];
lean_object* v_inst_1845_ = _args[13];
lean_object* v_inst_1846_ = _args[14];
lean_object* v_info_1847_ = _args[15];
lean_object* v_fixed_1848_ = _args[16];
lean_object* v_used_1849_ = _args[17];
lean_object* v_body_1850_ = _args[18];
lean_object* v_toBind_1851_ = _args[19];
lean_object* v_withNewLemmas_1852_ = _args[20];
lean_object* v_____x_1853_ = _args[21];
_start:
{
uint8_t v_nondep_11584__boxed_1854_; lean_object* v_res_1855_; 
v_nondep_11584__boxed_1854_ = lean_unbox(v_nondep_1836_);
v_res_1855_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(v_decl_1832_, v_declName_1833_, v_type_1834_, v_value_1835_, v_nondep_11584__boxed_1854_, v_toApplicative_1837_, v___x_1838_, v_us_1839_, v_inst_1840_, v_x_1841_, v_i_1842_, v_xs_1843_, v_inst_1844_, v_inst_1845_, v_inst_1846_, v_info_1847_, v_fixed_1848_, v_used_1849_, v_body_1850_, v_toBind_1851_, v_withNewLemmas_1852_, v_____x_1853_);
lean_dec(v_i_1842_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object** _args){
lean_object* v___x_1856_ = _args[0];
lean_object* v_declName_1857_ = _args[1];
lean_object* v_type_1858_ = _args[2];
lean_object* v_value_1859_ = _args[3];
lean_object* v_us_1860_ = _args[4];
lean_object* v___x_1861_ = _args[5];
lean_object* v_toApplicative_1862_ = _args[6];
lean_object* v_nondep_1863_ = _args[7];
lean_object* v_i_1864_ = _args[8];
lean_object* v_xs_1865_ = _args[9];
lean_object* v_inst_1866_ = _args[10];
lean_object* v_inst_1867_ = _args[11];
lean_object* v_inst_1868_ = _args[12];
lean_object* v_inst_1869_ = _args[13];
lean_object* v_info_1870_ = _args[14];
lean_object* v_fixed_1871_ = _args[15];
lean_object* v_used_1872_ = _args[16];
lean_object* v_body_1873_ = _args[17];
lean_object* v_toBind_1874_ = _args[18];
lean_object* v_____r_1875_ = _args[19];
_start:
{
uint8_t v_nondep_11567__boxed_1876_; lean_object* v_res_1877_; 
v_nondep_11567__boxed_1876_ = lean_unbox(v_nondep_1863_);
v_res_1877_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(v___x_1856_, v_declName_1857_, v_type_1858_, v_value_1859_, v_us_1860_, v___x_1861_, v_toApplicative_1862_, v_nondep_11567__boxed_1876_, v_i_1864_, v_xs_1865_, v_inst_1866_, v_inst_1867_, v_inst_1868_, v_inst_1869_, v_info_1870_, v_fixed_1871_, v_used_1872_, v_body_1873_, v_toBind_1874_, v_____r_1875_);
lean_dec(v_i_1864_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object* v_inst_1878_, lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_info_1882_, lean_object* v_fixed_1883_, lean_object* v_used_1884_, lean_object* v_e_1885_, lean_object* v_i_1886_, lean_object* v_xs_1887_){
_start:
{
lean_object* v_haveInfo_1893_; lean_object* v_body_1894_; lean_object* v_bodyType_1895_; lean_object* v_level_1896_; lean_object* v___x_1897_; uint8_t v___x_1898_; 
v_haveInfo_1893_ = lean_ctor_get(v_info_1882_, 0);
v_body_1894_ = lean_ctor_get(v_info_1882_, 3);
v_bodyType_1895_ = lean_ctor_get(v_info_1882_, 4);
v_level_1896_ = lean_ctor_get(v_info_1882_, 5);
v___x_1897_ = lean_array_get_size(v_haveInfo_1893_);
v___x_1898_ = lean_nat_dec_lt(v_i_1886_, v___x_1897_);
if (v___x_1898_ == 0)
{
lean_object* v_toApplicative_1899_; lean_object* v_toBind_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1976_; 
lean_inc(v_level_1896_);
lean_inc_ref(v_bodyType_1895_);
lean_inc_ref(v_body_1894_);
lean_dec(v_i_1886_);
lean_dec_ref(v_used_1884_);
lean_dec_ref(v_fixed_1883_);
lean_dec_ref(v_info_1882_);
lean_dec_ref(v_inst_1880_);
v_toApplicative_1899_ = lean_ctor_get(v_inst_1878_, 0);
v_toBind_1900_ = lean_ctor_get(v_inst_1878_, 1);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_inst_1878_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1902_ = v_inst_1878_;
v_isShared_1903_ = v_isSharedCheck_1976_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_toBind_1900_);
lean_inc(v_toApplicative_1899_);
lean_dec(v_inst_1878_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1976_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1904_; lean_object* v_toApplicative_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1974_; 
v___x_1904_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1);
v_toApplicative_1905_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1974_ == 0)
{
lean_object* v_unused_1975_; 
v_unused_1975_ = lean_ctor_get(v___x_1904_, 1);
lean_dec(v_unused_1975_);
v___x_1907_ = v___x_1904_;
v_isShared_1908_ = v_isSharedCheck_1974_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_toApplicative_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1974_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v_toFunctor_1909_; lean_object* v_toSeq_1910_; lean_object* v_toSeqLeft_1911_; lean_object* v_toSeqRight_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1972_; 
v_toFunctor_1909_ = lean_ctor_get(v_toApplicative_1905_, 0);
v_toSeq_1910_ = lean_ctor_get(v_toApplicative_1905_, 2);
v_toSeqLeft_1911_ = lean_ctor_get(v_toApplicative_1905_, 3);
v_toSeqRight_1912_ = lean_ctor_get(v_toApplicative_1905_, 4);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_toApplicative_1905_);
if (v_isSharedCheck_1972_ == 0)
{
lean_object* v_unused_1973_; 
v_unused_1973_ = lean_ctor_get(v_toApplicative_1905_, 1);
lean_dec(v_unused_1973_);
v___x_1914_ = v_toApplicative_1905_;
v_isShared_1915_ = v_isSharedCheck_1972_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_toSeqRight_1912_);
lean_inc(v_toSeqLeft_1911_);
lean_inc(v_toSeq_1910_);
lean_inc(v_toFunctor_1909_);
lean_dec(v_toApplicative_1905_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1972_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___f_1916_; lean_object* v___f_1917_; lean_object* v___f_1918_; lean_object* v___f_1919_; lean_object* v___x_1921_; 
v___f_1916_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2));
v___f_1917_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3));
lean_inc_ref(v_toFunctor_1909_);
v___f_1918_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1918_, 0, v_toFunctor_1909_);
v___f_1919_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1919_, 0, v_toFunctor_1909_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 1, v___f_1919_);
lean_ctor_set(v___x_1902_, 0, v___f_1918_);
v___x_1921_ = v___x_1902_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___f_1918_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v___f_1919_);
v___x_1921_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___f_1924_; lean_object* v___x_1926_; 
v___f_1922_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1922_, 0, v_toSeqRight_1912_);
v___f_1923_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1923_, 0, v_toSeqLeft_1911_);
v___f_1924_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1924_, 0, v_toSeq_1910_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 4, v___f_1922_);
lean_ctor_set(v___x_1914_, 3, v___f_1923_);
lean_ctor_set(v___x_1914_, 2, v___f_1924_);
lean_ctor_set(v___x_1914_, 1, v___f_1916_);
lean_ctor_set(v___x_1914_, 0, v___x_1921_);
v___x_1926_ = v___x_1914_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1921_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v___f_1916_);
lean_ctor_set(v_reuseFailAlloc_1970_, 2, v___f_1924_);
lean_ctor_set(v_reuseFailAlloc_1970_, 3, v___f_1923_);
lean_ctor_set(v_reuseFailAlloc_1970_, 4, v___f_1922_);
v___x_1926_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
lean_object* v___x_1928_; 
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 1, v___f_1917_);
lean_ctor_set(v___x_1907_, 0, v___x_1926_);
v___x_1928_ = v___x_1907_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1926_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v___f_1917_);
v___x_1928_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; lean_object* v_toApplicative_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1967_; 
v___x_1929_ = l_StateRefT_x27_instMonad___redArg(v___x_1928_);
v_toApplicative_1930_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1967_ == 0)
{
lean_object* v_unused_1968_; 
v_unused_1968_ = lean_ctor_get(v___x_1929_, 1);
lean_dec(v_unused_1968_);
v___x_1932_ = v___x_1929_;
v_isShared_1933_ = v_isSharedCheck_1967_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_toApplicative_1930_);
lean_dec(v___x_1929_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1967_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v_toFunctor_1934_; lean_object* v_toSeq_1935_; lean_object* v_toSeqLeft_1936_; lean_object* v_toSeqRight_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1965_; 
v_toFunctor_1934_ = lean_ctor_get(v_toApplicative_1930_, 0);
v_toSeq_1935_ = lean_ctor_get(v_toApplicative_1930_, 2);
v_toSeqLeft_1936_ = lean_ctor_get(v_toApplicative_1930_, 3);
v_toSeqRight_1937_ = lean_ctor_get(v_toApplicative_1930_, 4);
v_isSharedCheck_1965_ = !lean_is_exclusive(v_toApplicative_1930_);
if (v_isSharedCheck_1965_ == 0)
{
lean_object* v_unused_1966_; 
v_unused_1966_ = lean_ctor_get(v_toApplicative_1930_, 1);
lean_dec(v_unused_1966_);
v___x_1939_ = v_toApplicative_1930_;
v_isShared_1940_ = v_isSharedCheck_1965_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_toSeqRight_1937_);
lean_inc(v_toSeqLeft_1936_);
lean_inc(v_toSeq_1935_);
lean_inc(v_toFunctor_1934_);
lean_dec(v_toApplicative_1930_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1965_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1941_; lean_object* v___f_1942_; lean_object* v_cls_1943_; lean_object* v___f_1944_; lean_object* v___f_1945_; lean_object* v___f_1946_; lean_object* v___f_1947_; lean_object* v___x_1948_; lean_object* v___f_1949_; lean_object* v___f_1950_; lean_object* v___f_1951_; lean_object* v___x_1953_; 
v___x_1941_ = lean_box(v___x_1898_);
lean_inc(v_toBind_1900_);
lean_inc_ref(v_body_1894_);
v___f_1942_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_1942_, 0, v_inst_1881_);
lean_closure_set(v___f_1942_, 1, v_bodyType_1895_);
lean_closure_set(v___f_1942_, 2, v_xs_1887_);
lean_closure_set(v___f_1942_, 3, v_toApplicative_1899_);
lean_closure_set(v___f_1942_, 4, v_level_1896_);
lean_closure_set(v___f_1942_, 5, v_e_1885_);
lean_closure_set(v___f_1942_, 6, v___x_1941_);
lean_closure_set(v___f_1942_, 7, v_body_1894_);
lean_closure_set(v___f_1942_, 8, v_toBind_1900_);
v_cls_1943_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8));
v___f_1944_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9));
v___f_1945_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10));
lean_inc_ref(v_toFunctor_1934_);
v___f_1946_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1946_, 0, v_toFunctor_1934_);
v___f_1947_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1947_, 0, v_toFunctor_1934_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___f_1946_);
lean_ctor_set(v___x_1948_, 1, v___f_1947_);
v___f_1949_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1949_, 0, v_toSeqRight_1937_);
v___f_1950_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1950_, 0, v_toSeqLeft_1936_);
v___f_1951_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1951_, 0, v_toSeq_1935_);
if (v_isShared_1940_ == 0)
{
lean_ctor_set(v___x_1939_, 4, v___f_1949_);
lean_ctor_set(v___x_1939_, 3, v___f_1950_);
lean_ctor_set(v___x_1939_, 2, v___f_1951_);
lean_ctor_set(v___x_1939_, 1, v___f_1944_);
lean_ctor_set(v___x_1939_, 0, v___x_1948_);
v___x_1953_ = v___x_1939_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1948_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v___f_1944_);
lean_ctor_set(v_reuseFailAlloc_1964_, 2, v___f_1951_);
lean_ctor_set(v_reuseFailAlloc_1964_, 3, v___f_1950_);
lean_ctor_set(v_reuseFailAlloc_1964_, 4, v___f_1949_);
v___x_1953_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1955_; 
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 1, v___f_1945_);
lean_ctor_set(v___x_1932_, 0, v___x_1953_);
v___x_1955_ = v___x_1932_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1953_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v___f_1945_);
v___x_1955_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___f_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___f_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___f_1956_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11));
v___x_1957_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12));
v___x_1958_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14);
v___x_1959_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17));
v___f_1960_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed), 12, 7);
lean_closure_set(v___f_1960_, 0, v___x_1955_);
lean_closure_set(v___f_1960_, 1, v___x_1958_);
lean_closure_set(v___f_1960_, 2, v___x_1959_);
lean_closure_set(v___f_1960_, 3, v_cls_1943_);
lean_closure_set(v___f_1960_, 4, v___x_1957_);
lean_closure_set(v___f_1960_, 5, v___f_1956_);
lean_closure_set(v___f_1960_, 6, v_body_1894_);
v___x_1961_ = lean_apply_2(v_inst_1879_, lean_box(0), v___f_1960_);
v___x_1962_ = lean_apply_4(v_toBind_1900_, lean_box(0), lean_box(0), v___x_1961_, v___f_1942_);
return v___x_1962_;
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
else
{
if (lean_obj_tag(v_e_1885_) == 8)
{
uint8_t v_nondep_1977_; 
v_nondep_1977_ = lean_ctor_get_uint8(v_e_1885_, sizeof(void*)*4 + 8);
if (v_nondep_1977_ == 1)
{
lean_object* v_declName_1978_; lean_object* v_type_1979_; lean_object* v_value_1980_; lean_object* v_body_1981_; lean_object* v_hinfo_1982_; lean_object* v_decl_1983_; lean_object* v_level_1984_; lean_object* v_x_1985_; lean_object* v_val_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v_us_1989_; uint8_t v___y_1991_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v_declName_1978_ = lean_ctor_get(v_e_1885_, 0);
lean_inc(v_declName_1978_);
v_type_1979_ = lean_ctor_get(v_e_1885_, 1);
lean_inc_ref(v_type_1979_);
v_value_1980_ = lean_ctor_get(v_e_1885_, 2);
lean_inc_ref(v_value_1980_);
v_body_1981_ = lean_ctor_get(v_e_1885_, 3);
lean_inc_ref(v_body_1981_);
lean_dec_ref(v_e_1885_);
v_hinfo_1982_ = lean_array_fget_borrowed(v_haveInfo_1893_, v_i_1886_);
v_decl_1983_ = lean_ctor_get(v_hinfo_1982_, 2);
v_level_1984_ = lean_ctor_get(v_hinfo_1982_, 3);
lean_inc_ref(v_decl_1983_);
v_x_1985_ = l_Lean_LocalDecl_toExpr(v_decl_1983_);
v_val_1986_ = l_Lean_LocalDecl_value(v_decl_1983_, v_nondep_1977_);
v___x_1987_ = lean_box(0);
lean_inc(v_level_1896_);
v___x_1988_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1988_, 0, v_level_1896_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
lean_inc_ref(v___x_1988_);
lean_inc(v_level_1984_);
v_us_1989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_us_1989_, 0, v_level_1984_);
lean_ctor_set(v_us_1989_, 1, v___x_1988_);
v___x_2018_ = lean_array_get_size(v_used_1884_);
v___x_2019_ = lean_nat_dec_lt(v_i_1886_, v___x_2018_);
if (v___x_2019_ == 0)
{
lean_inc_ref(v_decl_1983_);
goto v___jp_2001_;
}
else
{
lean_object* v___x_2020_; uint8_t v___x_2021_; 
v___x_2020_ = lean_array_fget_borrowed(v_used_1884_, v_i_1886_);
v___x_2021_ = lean_unbox(v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v_toApplicative_2022_; lean_object* v_toBind_2023_; lean_object* v___x_2024_; lean_object* v_toApplicative_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2092_; 
lean_dec_ref(v_x_1985_);
v_toApplicative_2022_ = lean_ctor_get(v_inst_1878_, 0);
lean_inc_ref(v_toApplicative_2022_);
v_toBind_2023_ = lean_ctor_get(v_inst_1878_, 1);
lean_inc(v_toBind_2023_);
v___x_2024_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1);
v_toApplicative_2025_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2092_ == 0)
{
lean_object* v_unused_2093_; 
v_unused_2093_ = lean_ctor_get(v___x_2024_, 1);
lean_dec(v_unused_2093_);
v___x_2027_ = v___x_2024_;
v_isShared_2028_ = v_isSharedCheck_2092_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_toApplicative_2025_);
lean_dec(v___x_2024_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2092_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_toFunctor_2029_; lean_object* v_toSeq_2030_; lean_object* v_toSeqLeft_2031_; lean_object* v_toSeqRight_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2090_; 
v_toFunctor_2029_ = lean_ctor_get(v_toApplicative_2025_, 0);
v_toSeq_2030_ = lean_ctor_get(v_toApplicative_2025_, 2);
v_toSeqLeft_2031_ = lean_ctor_get(v_toApplicative_2025_, 3);
v_toSeqRight_2032_ = lean_ctor_get(v_toApplicative_2025_, 4);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_toApplicative_2025_);
if (v_isSharedCheck_2090_ == 0)
{
lean_object* v_unused_2091_; 
v_unused_2091_ = lean_ctor_get(v_toApplicative_2025_, 1);
lean_dec(v_unused_2091_);
v___x_2034_ = v_toApplicative_2025_;
v_isShared_2035_ = v_isSharedCheck_2090_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_toSeqRight_2032_);
lean_inc(v_toSeqLeft_2031_);
lean_inc(v_toSeq_2030_);
lean_inc(v_toFunctor_2029_);
lean_dec(v_toApplicative_2025_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2090_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___f_2036_; lean_object* v___f_2037_; lean_object* v___f_2038_; lean_object* v___f_2039_; lean_object* v___x_2040_; lean_object* v___f_2041_; lean_object* v___f_2042_; lean_object* v___f_2043_; lean_object* v___x_2045_; 
v___f_2036_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2));
v___f_2037_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3));
lean_inc_ref(v_toFunctor_2029_);
v___f_2038_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2038_, 0, v_toFunctor_2029_);
v___f_2039_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2039_, 0, v_toFunctor_2029_);
v___x_2040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___f_2038_);
lean_ctor_set(v___x_2040_, 1, v___f_2039_);
v___f_2041_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2041_, 0, v_toSeqRight_2032_);
v___f_2042_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2042_, 0, v_toSeqLeft_2031_);
v___f_2043_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2043_, 0, v_toSeq_2030_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 4, v___f_2041_);
lean_ctor_set(v___x_2034_, 3, v___f_2042_);
lean_ctor_set(v___x_2034_, 2, v___f_2043_);
lean_ctor_set(v___x_2034_, 1, v___f_2036_);
lean_ctor_set(v___x_2034_, 0, v___x_2040_);
v___x_2045_ = v___x_2034_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v___x_2040_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v___f_2036_);
lean_ctor_set(v_reuseFailAlloc_2089_, 2, v___f_2043_);
lean_ctor_set(v_reuseFailAlloc_2089_, 3, v___f_2042_);
lean_ctor_set(v_reuseFailAlloc_2089_, 4, v___f_2041_);
v___x_2045_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2047_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 1, v___f_2037_);
lean_ctor_set(v___x_2027_, 0, v___x_2045_);
v___x_2047_ = v___x_2027_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2045_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v___f_2037_);
v___x_2047_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2048_; lean_object* v_toApplicative_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2086_; 
v___x_2048_ = l_StateRefT_x27_instMonad___redArg(v___x_2047_);
v_toApplicative_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; 
v_unused_2087_ = lean_ctor_get(v___x_2048_, 1);
lean_dec(v_unused_2087_);
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2086_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_toApplicative_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2086_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v_toFunctor_2053_; lean_object* v_toSeq_2054_; lean_object* v_toSeqLeft_2055_; lean_object* v_toSeqRight_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2084_; 
v_toFunctor_2053_ = lean_ctor_get(v_toApplicative_2049_, 0);
v_toSeq_2054_ = lean_ctor_get(v_toApplicative_2049_, 2);
v_toSeqLeft_2055_ = lean_ctor_get(v_toApplicative_2049_, 3);
v_toSeqRight_2056_ = lean_ctor_get(v_toApplicative_2049_, 4);
v_isSharedCheck_2084_ = !lean_is_exclusive(v_toApplicative_2049_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; 
v_unused_2085_ = lean_ctor_get(v_toApplicative_2049_, 1);
lean_dec(v_unused_2085_);
v___x_2058_ = v_toApplicative_2049_;
v_isShared_2059_ = v_isSharedCheck_2084_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_toSeqRight_2056_);
lean_inc(v_toSeqLeft_2055_);
lean_inc(v_toSeq_2054_);
lean_inc(v_toFunctor_2053_);
lean_dec(v_toApplicative_2049_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2084_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; lean_object* v___f_2061_; lean_object* v_cls_2062_; lean_object* v___f_2063_; lean_object* v___f_2064_; lean_object* v___f_2065_; lean_object* v___f_2066_; lean_object* v___x_2067_; lean_object* v___f_2068_; lean_object* v___f_2069_; lean_object* v___f_2070_; lean_object* v___x_2072_; 
v___x_2060_ = lean_box(v_nondep_1977_);
lean_inc(v_toBind_2023_);
lean_inc(v_inst_1879_);
lean_inc(v_declName_1978_);
v___f_2061_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed), 20, 19);
lean_closure_set(v___f_2061_, 0, v___x_1987_);
lean_closure_set(v___f_2061_, 1, v_declName_1978_);
lean_closure_set(v___f_2061_, 2, v_type_1979_);
lean_closure_set(v___f_2061_, 3, v_value_1980_);
lean_closure_set(v___f_2061_, 4, v_us_1989_);
lean_closure_set(v___f_2061_, 5, v___x_1988_);
lean_closure_set(v___f_2061_, 6, v_toApplicative_2022_);
lean_closure_set(v___f_2061_, 7, v___x_2060_);
lean_closure_set(v___f_2061_, 8, v_i_1886_);
lean_closure_set(v___f_2061_, 9, v_xs_1887_);
lean_closure_set(v___f_2061_, 10, v_inst_1878_);
lean_closure_set(v___f_2061_, 11, v_inst_1879_);
lean_closure_set(v___f_2061_, 12, v_inst_1880_);
lean_closure_set(v___f_2061_, 13, v_inst_1881_);
lean_closure_set(v___f_2061_, 14, v_info_1882_);
lean_closure_set(v___f_2061_, 15, v_fixed_1883_);
lean_closure_set(v___f_2061_, 16, v_used_1884_);
lean_closure_set(v___f_2061_, 17, v_body_1981_);
lean_closure_set(v___f_2061_, 18, v_toBind_2023_);
v_cls_2062_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__8));
v___f_2063_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__9));
v___f_2064_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__10));
lean_inc_ref(v_toFunctor_2053_);
v___f_2065_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2065_, 0, v_toFunctor_2053_);
v___f_2066_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2066_, 0, v_toFunctor_2053_);
v___x_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___f_2065_);
lean_ctor_set(v___x_2067_, 1, v___f_2066_);
v___f_2068_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2068_, 0, v_toSeqRight_2056_);
v___f_2069_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2069_, 0, v_toSeqLeft_2055_);
v___f_2070_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2070_, 0, v_toSeq_2054_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 4, v___f_2068_);
lean_ctor_set(v___x_2058_, 3, v___f_2069_);
lean_ctor_set(v___x_2058_, 2, v___f_2070_);
lean_ctor_set(v___x_2058_, 1, v___f_2063_);
lean_ctor_set(v___x_2058_, 0, v___x_2067_);
v___x_2072_ = v___x_2058_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v___f_2063_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v___f_2070_);
lean_ctor_set(v_reuseFailAlloc_2083_, 3, v___f_2069_);
lean_ctor_set(v_reuseFailAlloc_2083_, 4, v___f_2068_);
v___x_2072_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v___x_2074_; 
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 1, v___f_2064_);
lean_ctor_set(v___x_2051_, 0, v___x_2072_);
v___x_2074_ = v___x_2051_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2072_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___f_2064_);
v___x_2074_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___f_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___f_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___f_2075_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__11));
v___x_2076_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__12));
v___x_2077_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__14);
v___x_2078_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__17));
v___f_2079_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed), 13, 8);
lean_closure_set(v___f_2079_, 0, v___x_2074_);
lean_closure_set(v___f_2079_, 1, v___x_2077_);
lean_closure_set(v___f_2079_, 2, v___x_2078_);
lean_closure_set(v___f_2079_, 3, v_cls_2062_);
lean_closure_set(v___f_2079_, 4, v___x_2076_);
lean_closure_set(v___f_2079_, 5, v___f_2075_);
lean_closure_set(v___f_2079_, 6, v_declName_1978_);
lean_closure_set(v___f_2079_, 7, v_val_1986_);
v___x_2080_ = lean_apply_2(v_inst_1879_, lean_box(0), v___f_2079_);
v___x_2081_ = lean_apply_4(v_toBind_2023_, lean_box(0), lean_box(0), v___x_2080_, v___f_2061_);
return v___x_2081_;
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
lean_inc_ref(v_decl_1983_);
goto v___jp_2001_;
}
}
v___jp_1990_:
{
lean_object* v_toApplicative_1992_; lean_object* v_toBind_1993_; lean_object* v_withNewLemmas_1994_; lean_object* v_dsimp_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___f_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v_toApplicative_1992_ = lean_ctor_get(v_inst_1878_, 0);
lean_inc_ref(v_toApplicative_1992_);
v_toBind_1993_ = lean_ctor_get(v_inst_1878_, 1);
lean_inc(v_toBind_1993_);
v_withNewLemmas_1994_ = lean_ctor_get(v_inst_1881_, 0);
lean_inc(v_withNewLemmas_1994_);
v_dsimp_1995_ = lean_ctor_get(v_inst_1881_, 1);
lean_inc(v_dsimp_1995_);
v___x_1996_ = lean_box(v_nondep_1977_);
v___x_1997_ = lean_box(v___y_1991_);
lean_inc_ref(v_val_1986_);
lean_inc(v_toBind_1993_);
v___f_1998_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed), 24, 23);
lean_closure_set(v___f_1998_, 0, v_declName_1978_);
lean_closure_set(v___f_1998_, 1, v_type_1979_);
lean_closure_set(v___f_1998_, 2, v_value_1980_);
lean_closure_set(v___f_1998_, 3, v___x_1996_);
lean_closure_set(v___f_1998_, 4, v_toApplicative_1992_);
lean_closure_set(v___f_1998_, 5, v___x_1988_);
lean_closure_set(v___f_1998_, 6, v_us_1989_);
lean_closure_set(v___f_1998_, 7, v_decl_1983_);
lean_closure_set(v___f_1998_, 8, v_x_1985_);
lean_closure_set(v___f_1998_, 9, v_i_1886_);
lean_closure_set(v___f_1998_, 10, v_xs_1887_);
lean_closure_set(v___f_1998_, 11, v_inst_1878_);
lean_closure_set(v___f_1998_, 12, v_inst_1879_);
lean_closure_set(v___f_1998_, 13, v_inst_1880_);
lean_closure_set(v___f_1998_, 14, v_inst_1881_);
lean_closure_set(v___f_1998_, 15, v_info_1882_);
lean_closure_set(v___f_1998_, 16, v_fixed_1883_);
lean_closure_set(v___f_1998_, 17, v_used_1884_);
lean_closure_set(v___f_1998_, 18, v_body_1981_);
lean_closure_set(v___f_1998_, 19, v_toBind_1993_);
lean_closure_set(v___f_1998_, 20, v_withNewLemmas_1994_);
lean_closure_set(v___f_1998_, 21, v_val_1986_);
lean_closure_set(v___f_1998_, 22, v___x_1997_);
v___x_1999_ = lean_apply_1(v_dsimp_1995_, v_val_1986_);
v___x_2000_ = lean_apply_4(v_toBind_1993_, lean_box(0), lean_box(0), v___x_1999_, v___f_1998_);
return v___x_2000_;
}
v___jp_2001_:
{
uint8_t v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v___x_2002_ = 0;
v___x_2003_ = lean_array_get_size(v_fixed_1883_);
v___x_2004_ = lean_nat_dec_lt(v_i_1886_, v___x_2003_);
if (v___x_2004_ == 0)
{
v___y_1991_ = v___x_2002_;
goto v___jp_1990_;
}
else
{
lean_object* v___x_2005_; uint8_t v___x_2006_; 
v___x_2005_ = lean_array_fget_borrowed(v_fixed_1883_, v_i_1886_);
v___x_2006_ = lean_unbox(v___x_2005_);
if (v___x_2006_ == 0)
{
lean_object* v_toApplicative_2007_; lean_object* v_toBind_2008_; lean_object* v_withNewLemmas_2009_; lean_object* v_simp_2010_; lean_object* v___x_2011_; lean_object* v___f_2012_; lean_object* v___f_2013_; lean_object* v___x_2014_; lean_object* v___f_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
lean_inc(v___x_2005_);
lean_inc(v_level_1984_);
v_toApplicative_2007_ = lean_ctor_get(v_inst_1878_, 0);
lean_inc_ref(v_toApplicative_2007_);
v_toBind_2008_ = lean_ctor_get(v_inst_1878_, 1);
lean_inc(v_toBind_2008_);
v_withNewLemmas_2009_ = lean_ctor_get(v_inst_1881_, 0);
lean_inc(v_withNewLemmas_2009_);
v_simp_2010_ = lean_ctor_get(v_inst_1881_, 2);
lean_inc(v_simp_2010_);
v___x_2011_ = lean_box(v_nondep_1977_);
lean_inc(v_toBind_2008_);
lean_inc(v_inst_1879_);
lean_inc_ref(v_xs_1887_);
lean_inc_ref(v_toApplicative_2007_);
lean_inc_ref(v_value_1980_);
lean_inc_ref(v_type_1979_);
lean_inc(v_declName_1978_);
v___f_2012_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed), 22, 21);
lean_closure_set(v___f_2012_, 0, v_decl_1983_);
lean_closure_set(v___f_2012_, 1, v_declName_1978_);
lean_closure_set(v___f_2012_, 2, v_type_1979_);
lean_closure_set(v___f_2012_, 3, v_value_1980_);
lean_closure_set(v___f_2012_, 4, v___x_2011_);
lean_closure_set(v___f_2012_, 5, v_toApplicative_2007_);
lean_closure_set(v___f_2012_, 6, v___x_1988_);
lean_closure_set(v___f_2012_, 7, v_us_1989_);
lean_closure_set(v___f_2012_, 8, v_inst_1878_);
lean_closure_set(v___f_2012_, 9, v_x_1985_);
lean_closure_set(v___f_2012_, 10, v_i_1886_);
lean_closure_set(v___f_2012_, 11, v_xs_1887_);
lean_closure_set(v___f_2012_, 12, v_inst_1879_);
lean_closure_set(v___f_2012_, 13, v_inst_1880_);
lean_closure_set(v___f_2012_, 14, v_inst_1881_);
lean_closure_set(v___f_2012_, 15, v_info_1882_);
lean_closure_set(v___f_2012_, 16, v_fixed_1883_);
lean_closure_set(v___f_2012_, 17, v_used_1884_);
lean_closure_set(v___f_2012_, 18, v_body_1981_);
lean_closure_set(v___f_2012_, 19, v_toBind_2008_);
lean_closure_set(v___f_2012_, 20, v_withNewLemmas_2009_);
v___f_2013_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9), 2, 1);
lean_closure_set(v___f_2013_, 0, v___f_2012_);
v___x_2014_ = lean_box(v_nondep_1977_);
lean_inc_ref(v_val_1986_);
lean_inc_ref(v___f_2013_);
lean_inc(v_toBind_2008_);
v___f_2015_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed), 15, 14);
lean_closure_set(v___f_2015_, 0, v_toApplicative_2007_);
lean_closure_set(v___f_2015_, 1, v_level_1984_);
lean_closure_set(v___f_2015_, 2, v___x_1987_);
lean_closure_set(v___f_2015_, 3, v_type_1979_);
lean_closure_set(v___f_2015_, 4, v_value_1980_);
lean_closure_set(v___f_2015_, 5, v___x_2005_);
lean_closure_set(v___f_2015_, 6, v_toBind_2008_);
lean_closure_set(v___f_2015_, 7, v___f_2013_);
lean_closure_set(v___f_2015_, 8, v_xs_1887_);
lean_closure_set(v___f_2015_, 9, v___x_2014_);
lean_closure_set(v___f_2015_, 10, v___f_2013_);
lean_closure_set(v___f_2015_, 11, v_declName_1978_);
lean_closure_set(v___f_2015_, 12, v_val_1986_);
lean_closure_set(v___f_2015_, 13, v_inst_1879_);
v___x_2016_ = lean_apply_1(v_simp_2010_, v_val_1986_);
v___x_2017_ = lean_apply_4(v_toBind_2008_, lean_box(0), lean_box(0), v___x_2016_, v___f_2015_);
return v___x_2017_;
}
else
{
v___y_1991_ = v___x_2002_;
goto v___jp_1990_;
}
}
}
}
else
{
lean_dec_ref(v_e_1885_);
lean_dec_ref(v_xs_1887_);
lean_dec(v_i_1886_);
lean_dec_ref(v_used_1884_);
lean_dec_ref(v_fixed_1883_);
lean_dec_ref(v_info_1882_);
lean_dec_ref(v_inst_1881_);
lean_dec_ref(v_inst_1880_);
lean_dec(v_inst_1879_);
goto v___jp_1888_;
}
}
else
{
lean_dec_ref(v_xs_1887_);
lean_dec(v_i_1886_);
lean_dec_ref(v_e_1885_);
lean_dec_ref(v_used_1884_);
lean_dec_ref(v_fixed_1883_);
lean_dec_ref(v_info_1882_);
lean_dec_ref(v_inst_1881_);
lean_dec_ref(v_inst_1880_);
lean_dec(v_inst_1879_);
goto v___jp_1888_;
}
}
v___jp_1888_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1889_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default;
v___x_1890_ = l_instInhabitedOfMonad___redArg(v_inst_1878_, v___x_1889_);
v___x_1891_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1);
v___x_1892_ = l_panic___redArg(v___x_1890_, v___x_1891_);
return v___x_1892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object* v___x_2094_, lean_object* v_declName_2095_, lean_object* v_type_2096_, lean_object* v_value_2097_, lean_object* v_us_2098_, lean_object* v___x_2099_, lean_object* v_toApplicative_2100_, uint8_t v_nondep_2101_, lean_object* v_i_2102_, lean_object* v_xs_2103_, lean_object* v_inst_2104_, lean_object* v_inst_2105_, lean_object* v_inst_2106_, lean_object* v_inst_2107_, lean_object* v_info_2108_, lean_object* v_fixed_2109_, lean_object* v_used_2110_, lean_object* v_body_2111_, lean_object* v_toBind_2112_, lean_object* v_____r_2113_){
_start:
{
lean_object* v___x_2114_; lean_object* v_x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___f_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2114_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1));
v_x_2115_ = l_Lean_mkConst(v___x_2114_, v___x_2094_);
v___x_2116_ = lean_unsigned_to_nat(1u);
v___x_2117_ = lean_box(v_nondep_2101_);
v___f_2118_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed), 9, 8);
lean_closure_set(v___f_2118_, 0, v___x_2116_);
lean_closure_set(v___f_2118_, 1, v_declName_2095_);
lean_closure_set(v___f_2118_, 2, v_type_2096_);
lean_closure_set(v___f_2118_, 3, v_value_2097_);
lean_closure_set(v___f_2118_, 4, v_us_2098_);
lean_closure_set(v___f_2118_, 5, v___x_2099_);
lean_closure_set(v___f_2118_, 6, v_toApplicative_2100_);
lean_closure_set(v___f_2118_, 7, v___x_2117_);
v___x_2119_ = lean_nat_add(v_i_2102_, v___x_2116_);
v___x_2120_ = lean_array_push(v_xs_2103_, v_x_2115_);
v___x_2121_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_2104_, v_inst_2105_, v_inst_2106_, v_inst_2107_, v_info_2108_, v_fixed_2109_, v_used_2110_, v_body_2111_, v___x_2119_, v___x_2120_);
v___x_2122_ = lean_apply_4(v_toBind_2112_, lean_box(0), lean_box(0), v___x_2121_, v___f_2118_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object* v_m_2123_, lean_object* v_inst_2124_, lean_object* v_inst_2125_, lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_info_2128_, lean_object* v_fixed_2129_, lean_object* v_used_2130_, lean_object* v_e_2131_, lean_object* v_i_2132_, lean_object* v_xs_2133_){
_start:
{
lean_object* v___x_2134_; 
v___x_2134_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_2124_, v_inst_2125_, v_inst_2126_, v_inst_2127_, v_info_2128_, v_fixed_2129_, v_used_2130_, v_e_2131_, v_i_2132_, v_xs_2133_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx(uint8_t v_x_2135_){
_start:
{
switch(v_x_2135_)
{
case 0:
{
lean_object* v___x_2136_; 
v___x_2136_ = lean_unsigned_to_nat(0u);
return v___x_2136_;
}
case 1:
{
lean_object* v___x_2137_; 
v___x_2137_ = lean_unsigned_to_nat(1u);
return v___x_2137_;
}
default: 
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_unsigned_to_nat(2u);
return v___x_2138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___boxed(lean_object* v_x_2139_){
_start:
{
uint8_t v_x_boxed_2140_; lean_object* v_res_2141_; 
v_x_boxed_2140_ = lean_unbox(v_x_2139_);
v_res_2141_ = l_Lean_Meta_ZetaUnusedMode_ctorIdx(v_x_boxed_2140_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_toCtorIdx(uint8_t v_x_2142_){
_start:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Meta_ZetaUnusedMode_ctorIdx(v_x_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_toCtorIdx___boxed(lean_object* v_x_2144_){
_start:
{
uint8_t v_x_4__boxed_2145_; lean_object* v_res_2146_; 
v_x_4__boxed_2145_ = lean_unbox(v_x_2144_);
v_res_2146_ = l_Lean_Meta_ZetaUnusedMode_toCtorIdx(v_x_4__boxed_2145_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object* v_k_2147_){
_start:
{
lean_inc(v_k_2147_);
return v_k_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object* v_k_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(v_k_2148_);
lean_dec(v_k_2148_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object* v_motive_2150_, lean_object* v_ctorIdx_2151_, uint8_t v_t_2152_, lean_object* v_h_2153_, lean_object* v_k_2154_){
_start:
{
lean_inc(v_k_2154_);
return v_k_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object* v_motive_2155_, lean_object* v_ctorIdx_2156_, lean_object* v_t_2157_, lean_object* v_h_2158_, lean_object* v_k_2159_){
_start:
{
uint8_t v_t_boxed_2160_; lean_object* v_res_2161_; 
v_t_boxed_2160_ = lean_unbox(v_t_2157_);
v_res_2161_ = l_Lean_Meta_ZetaUnusedMode_ctorElim(v_motive_2155_, v_ctorIdx_2156_, v_t_boxed_2160_, v_h_2158_, v_k_2159_);
lean_dec(v_k_2159_);
lean_dec(v_ctorIdx_2156_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object* v_no_2162_){
_start:
{
lean_inc(v_no_2162_);
return v_no_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object* v_no_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(v_no_2163_);
lean_dec(v_no_2163_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object* v_motive_2165_, uint8_t v_t_2166_, lean_object* v_h_2167_, lean_object* v_no_2168_){
_start:
{
lean_inc(v_no_2168_);
return v_no_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object* v_motive_2169_, lean_object* v_t_2170_, lean_object* v_h_2171_, lean_object* v_no_2172_){
_start:
{
uint8_t v_t_boxed_2173_; lean_object* v_res_2174_; 
v_t_boxed_2173_ = lean_unbox(v_t_2170_);
v_res_2174_ = l_Lean_Meta_ZetaUnusedMode_no_elim(v_motive_2169_, v_t_boxed_2173_, v_h_2171_, v_no_2172_);
lean_dec(v_no_2172_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object* v_singlePass_2175_){
_start:
{
lean_inc(v_singlePass_2175_);
return v_singlePass_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object* v_singlePass_2176_){
_start:
{
lean_object* v_res_2177_; 
v_res_2177_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(v_singlePass_2176_);
lean_dec(v_singlePass_2176_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object* v_motive_2178_, uint8_t v_t_2179_, lean_object* v_h_2180_, lean_object* v_singlePass_2181_){
_start:
{
lean_inc(v_singlePass_2181_);
return v_singlePass_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object* v_motive_2182_, lean_object* v_t_2183_, lean_object* v_h_2184_, lean_object* v_singlePass_2185_){
_start:
{
uint8_t v_t_boxed_2186_; lean_object* v_res_2187_; 
v_t_boxed_2186_ = lean_unbox(v_t_2183_);
v_res_2187_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim(v_motive_2182_, v_t_boxed_2186_, v_h_2184_, v_singlePass_2185_);
lean_dec(v_singlePass_2185_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object* v_twoPasses_2188_){
_start:
{
lean_inc(v_twoPasses_2188_);
return v_twoPasses_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object* v_twoPasses_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(v_twoPasses_2189_);
lean_dec(v_twoPasses_2189_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object* v_motive_2191_, uint8_t v_t_2192_, lean_object* v_h_2193_, lean_object* v_twoPasses_2194_){
_start:
{
lean_inc(v_twoPasses_2194_);
return v_twoPasses_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object* v_motive_2195_, lean_object* v_t_2196_, lean_object* v_h_2197_, lean_object* v_twoPasses_2198_){
_start:
{
uint8_t v_t_boxed_2199_; lean_object* v_res_2200_; 
v_t_boxed_2199_ = lean_unbox(v_t_2196_);
v_res_2200_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(v_motive_2195_, v_t_boxed_2199_, v_h_2197_, v_twoPasses_2198_);
lean_dec(v_twoPasses_2198_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object* v_k_2201_, lean_object* v_b_2202_, lean_object* v_c_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_apply_7(v_k_2201_, v_b_2202_, v_c_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, lean_box(0));
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object* v_k_2210_, lean_object* v_b_2211_, lean_object* v_c_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(v_k_2210_, v_b_2211_, v_c_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object* v_e_2219_, lean_object* v_k_2220_, uint8_t v_cleanupAnnotations_2221_, uint8_t v_preserveNondepLet_2222_, uint8_t v_nondepLetOnly_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v___f_2229_; uint8_t v___x_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___f_2229_ = lean_alloc_closure((void*)(l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2229_, 0, v_k_2220_);
v___x_2230_ = 0;
v___x_2231_ = 1;
v___x_2232_ = lean_box(0);
v___x_2233_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2219_, v___x_2230_, v___x_2231_, v_preserveNondepLet_2222_, v_nondepLetOnly_2223_, v___x_2232_, v___f_2229_, v_cleanupAnnotations_2221_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
v_a_2234_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2233_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2233_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
v_a_2242_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2233_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2233_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object* v_e_2250_, lean_object* v_k_2251_, lean_object* v_cleanupAnnotations_2252_, lean_object* v_preserveNondepLet_2253_, lean_object* v_nondepLetOnly_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2260_; uint8_t v_preserveNondepLet_boxed_2261_; uint8_t v_nondepLetOnly_boxed_2262_; lean_object* v_res_2263_; 
v_cleanupAnnotations_boxed_2260_ = lean_unbox(v_cleanupAnnotations_2252_);
v_preserveNondepLet_boxed_2261_ = lean_unbox(v_preserveNondepLet_2253_);
v_nondepLetOnly_boxed_2262_ = lean_unbox(v_nondepLetOnly_2254_);
v_res_2263_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_2250_, v_k_2251_, v_cleanupAnnotations_boxed_2260_, v_preserveNondepLet_boxed_2261_, v_nondepLetOnly_boxed_2262_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object* v_00_u03b1_2264_, lean_object* v_e_2265_, lean_object* v_k_2266_, uint8_t v_cleanupAnnotations_2267_, uint8_t v_preserveNondepLet_2268_, uint8_t v_nondepLetOnly_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_2265_, v_k_2266_, v_cleanupAnnotations_2267_, v_preserveNondepLet_2268_, v_nondepLetOnly_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object* v_00_u03b1_2276_, lean_object* v_e_2277_, lean_object* v_k_2278_, lean_object* v_cleanupAnnotations_2279_, lean_object* v_preserveNondepLet_2280_, lean_object* v_nondepLetOnly_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2287_; uint8_t v_preserveNondepLet_boxed_2288_; uint8_t v_nondepLetOnly_boxed_2289_; lean_object* v_res_2290_; 
v_cleanupAnnotations_boxed_2287_ = lean_unbox(v_cleanupAnnotations_2279_);
v_preserveNondepLet_boxed_2288_ = lean_unbox(v_preserveNondepLet_2280_);
v_nondepLetOnly_boxed_2289_ = lean_unbox(v_nondepLetOnly_2281_);
v_res_2290_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(v_00_u03b1_2276_, v_e_2277_, v_k_2278_, v_cleanupAnnotations_boxed_2287_, v_preserveNondepLet_boxed_2288_, v_nondepLetOnly_boxed_2289_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object* v_xs_2291_, lean_object* v_b_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_snd_2297_; lean_object* v_fst_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2353_; 
v_snd_2297_ = lean_ctor_get(v_b_2292_, 1);
v_fst_2298_ = lean_ctor_get(v_b_2292_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_b_2292_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2300_ = v_b_2292_;
v_isShared_2301_ = v_isSharedCheck_2353_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_snd_2297_);
lean_inc(v_fst_2298_);
lean_dec(v_b_2292_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2353_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v_fst_2302_; lean_object* v_snd_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2352_; 
v_fst_2302_ = lean_ctor_get(v_snd_2297_, 0);
v_snd_2303_ = lean_ctor_get(v_snd_2297_, 1);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_snd_2297_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2305_ = v_snd_2297_;
v_isShared_2306_ = v_isSharedCheck_2352_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_snd_2303_);
lean_inc(v_fst_2302_);
lean_dec(v_snd_2297_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2352_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2307_; uint8_t v___x_2308_; 
v___x_2307_ = lean_unsigned_to_nat(0u);
v___x_2308_ = lean_nat_dec_lt(v___x_2307_, v_snd_2303_);
if (v___x_2308_ == 0)
{
lean_object* v___x_2310_; 
lean_dec_ref(v___y_2293_);
if (v_isShared_2306_ == 0)
{
v___x_2310_ = v___x_2305_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_fst_2302_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_snd_2303_);
v___x_2310_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2312_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 1, v___x_2310_);
v___x_2312_ = v___x_2300_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; 
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
return v___x_2313_;
}
}
}
else
{
lean_object* v_fvarSet_2316_; lean_object* v___x_2317_; lean_object* v_i_2318_; lean_object* v___x_2319_; lean_object* v_x_2320_; lean_object* v_xFVarId_2321_; uint8_t v___x_2322_; 
v_fvarSet_2316_ = lean_ctor_get(v_fst_2298_, 1);
v___x_2317_ = lean_unsigned_to_nat(1u);
v_i_2318_ = lean_nat_sub(v_snd_2303_, v___x_2317_);
lean_dec(v_snd_2303_);
v___x_2319_ = l_Lean_instInhabitedExpr;
v_x_2320_ = lean_array_get_borrowed(v___x_2319_, v_xs_2291_, v_i_2318_);
v_xFVarId_2321_ = l_Lean_Expr_fvarId_x21(v_x_2320_);
v___x_2322_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_xFVarId_2321_, v_fvarSet_2316_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2324_; 
lean_dec(v_xFVarId_2321_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 1, v_i_2318_);
v___x_2324_ = v___x_2305_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_fst_2302_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_i_2318_);
v___x_2324_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
lean_object* v___x_2326_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 1, v___x_2324_);
v___x_2326_ = v___x_2300_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_fst_2298_);
lean_ctor_set(v_reuseFailAlloc_2328_, 1, v___x_2324_);
v___x_2326_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
v_b_2292_ = v___x_2326_;
goto _start;
}
}
}
else
{
lean_object* v___x_2330_; 
lean_inc_ref(v___y_2293_);
v___x_2330_ = l_Lean_FVarId_getDecl___redArg(v_xFVarId_2321_, v___y_2293_, v___y_2294_, v___y_2295_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2338_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref(v___x_2330_);
v___x_2332_ = l_Lean_LocalDecl_type(v_a_2331_);
v___x_2333_ = l_Lean_collectFVars(v_fst_2298_, v___x_2332_);
v___x_2334_ = l_Lean_LocalDecl_value(v_a_2331_, v___x_2322_);
lean_dec(v_a_2331_);
v___x_2335_ = l_Lean_collectFVars(v___x_2333_, v___x_2334_);
lean_inc(v_x_2320_);
v___x_2336_ = lean_array_push(v_fst_2302_, v_x_2320_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 1, v_i_2318_);
lean_ctor_set(v___x_2305_, 0, v___x_2336_);
v___x_2338_ = v___x_2305_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v___x_2336_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_i_2318_);
v___x_2338_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2340_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 1, v___x_2338_);
lean_ctor_set(v___x_2300_, 0, v___x_2335_);
v___x_2340_ = v___x_2300_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
v_b_2292_ = v___x_2340_;
goto _start;
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec(v_i_2318_);
lean_del_object(v___x_2305_);
lean_dec(v_fst_2302_);
lean_del_object(v___x_2300_);
lean_dec(v_fst_2298_);
lean_dec_ref(v___y_2293_);
v_a_2344_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2330_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2330_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object* v_xs_2354_, lean_object* v_b_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2354_, v_b_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
lean_dec(v___y_2358_);
lean_dec_ref(v___y_2357_);
lean_dec_ref(v_xs_2354_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object* v___x_2361_, lean_object* v_e_2362_, lean_object* v_xs_2363_, lean_object* v_body_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v_s_2373_; lean_object* v_i_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2370_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
v___x_2371_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2));
v___x_2372_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2370_);
lean_ctor_set(v___x_2372_, 1, v___x_2361_);
lean_ctor_set(v___x_2372_, 2, v___x_2371_);
lean_inc_ref(v_body_2364_);
v_s_2373_ = l_Lean_collectFVars(v___x_2372_, v_body_2364_);
v_i_2374_ = lean_array_get_size(v_xs_2363_);
v___x_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2371_);
lean_ctor_set(v___x_2375_, 1, v_i_2374_);
v___x_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2376_, 0, v_s_2373_);
lean_ctor_set(v___x_2376_, 1, v___x_2375_);
lean_inc_ref(v___y_2365_);
v___x_2377_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2363_, v___x_2376_, v___y_2365_, v___y_2367_, v___y_2368_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2393_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2380_ = v___x_2377_;
v_isShared_2381_ = v_isSharedCheck_2393_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2377_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2393_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v_snd_2382_; lean_object* v_fst_2383_; lean_object* v___x_2384_; uint8_t v___x_2385_; 
v_snd_2382_ = lean_ctor_get(v_a_2378_, 1);
lean_inc(v_snd_2382_);
lean_dec(v_a_2378_);
v_fst_2383_ = lean_ctor_get(v_snd_2382_, 0);
lean_inc(v_fst_2383_);
lean_dec(v_snd_2382_);
v___x_2384_ = lean_array_get_size(v_fst_2383_);
v___x_2385_ = lean_nat_dec_eq(v___x_2384_, v_i_2374_);
if (v___x_2385_ == 0)
{
uint8_t v___x_2386_; lean_object* v___x_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; 
lean_del_object(v___x_2380_);
lean_dec_ref(v_e_2362_);
v___x_2386_ = 1;
v___x_2387_ = l_Array_reverse___redArg(v_fst_2383_);
v___x_2388_ = 1;
v___x_2389_ = l_Lean_Meta_mkLetFVars(v___x_2387_, v_body_2364_, v___x_2386_, v___x_2385_, v___x_2388_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
lean_dec_ref(v___y_2365_);
lean_dec_ref(v___x_2387_);
return v___x_2389_;
}
else
{
lean_object* v___x_2391_; 
lean_dec(v_fst_2383_);
lean_dec_ref(v___y_2365_);
lean_dec_ref(v_body_2364_);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 0, v_e_2362_);
v___x_2391_ = v___x_2380_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_e_2362_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
lean_dec_ref(v___y_2365_);
lean_dec_ref(v_body_2364_);
lean_dec_ref(v_e_2362_);
v_a_2394_ = lean_ctor_get(v___x_2377_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2377_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2377_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object* v___x_2402_, lean_object* v_e_2403_, lean_object* v_xs_2404_, lean_object* v_body_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lean_Meta_zetaUnused___lam__0(v___x_2402_, v_e_2403_, v_xs_2404_, v_body_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v_xs_2404_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object* v_e_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_){
_start:
{
lean_object* v___x_2418_; lean_object* v___f_2419_; uint8_t v___x_2420_; uint8_t v___x_2421_; lean_object* v___x_2422_; 
v___x_2418_ = lean_box(1);
lean_inc_ref(v_e_2412_);
v___f_2419_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaUnused___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2419_, 0, v___x_2418_);
lean_closure_set(v___f_2419_, 1, v_e_2412_);
v___x_2420_ = 0;
v___x_2421_ = 1;
v___x_2422_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_2412_, v___f_2419_, v___x_2420_, v___x_2421_, v___x_2420_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object* v_e_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_Meta_zetaUnused(v_e_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0(lean_object* v_xs_2430_, lean_object* v_b_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2430_, v_b_2431_, v___y_2432_, v___y_2434_, v___y_2435_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object* v_xs_2438_, lean_object* v_b_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_zetaUnused_spec__0(v_xs_2438_, v_b_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v_xs_2438_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object* v_u_2450_, lean_object* v_source_2451_, lean_object* v_result_2452_, uint8_t v_keepUnused_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_){
_start:
{
uint8_t v_modified_2459_; 
v_modified_2459_ = lean_ctor_get_uint8(v_result_2452_, sizeof(void*)*5);
if (v_modified_2459_ == 0)
{
if (v_keepUnused_2453_ == 0)
{
lean_object* v_exprType_2460_; lean_object* v___x_2461_; 
v_exprType_2460_ = lean_ctor_get(v_result_2452_, 1);
lean_inc_ref(v_exprType_2460_);
lean_dec_ref(v_result_2452_);
lean_inc_ref(v_source_2451_);
v___x_2461_ = l_Lean_Meta_zetaUnused(v_source_2451_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2480_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2464_ = v___x_2461_;
v_isShared_2465_ = v_isSharedCheck_2480_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2461_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2480_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
uint8_t v___x_2466_; 
v___x_2466_ = lean_expr_eqv(v_a_2462_, v_source_2451_);
lean_dec_ref(v_source_2451_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2474_; 
v___x_2467_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2468_ = lean_box(0);
v___x_2469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2469_, 0, v_u_2450_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = l_Lean_mkConst(v___x_2467_, v___x_2469_);
lean_inc(v_a_2462_);
v___x_2471_ = l_Lean_mkAppB(v___x_2470_, v_exprType_2460_, v_a_2462_);
v___x_2472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2472_, 0, v_a_2462_);
lean_ctor_set(v___x_2472_, 1, v___x_2471_);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2472_);
v___x_2474_ = v___x_2464_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v___x_2472_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
else
{
lean_object* v___x_2476_; lean_object* v___x_2478_; 
lean_dec(v_a_2462_);
lean_dec_ref(v_exprType_2460_);
lean_dec(v_u_2450_);
v___x_2476_ = lean_box(0);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2476_);
v___x_2478_ = v___x_2464_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2476_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_dec_ref(v_exprType_2460_);
lean_dec_ref(v_source_2451_);
lean_dec(v_u_2450_);
v_a_2481_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2461_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2461_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
else
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec_ref(v_result_2452_);
lean_dec_ref(v_source_2451_);
lean_dec(v_u_2450_);
v___x_2489_ = lean_box(0);
v___x_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
return v___x_2490_;
}
}
else
{
lean_object* v_expr_2491_; lean_object* v_exprType_2492_; lean_object* v_exprInit_2493_; lean_object* v_exprResult_2494_; lean_object* v_proof_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v_proof_2503_; 
v_expr_2491_ = lean_ctor_get(v_result_2452_, 0);
lean_inc_ref(v_expr_2491_);
v_exprType_2492_ = lean_ctor_get(v_result_2452_, 1);
lean_inc_ref(v_exprType_2492_);
v_exprInit_2493_ = lean_ctor_get(v_result_2452_, 2);
lean_inc_ref(v_exprInit_2493_);
v_exprResult_2494_ = lean_ctor_get(v_result_2452_, 3);
lean_inc_ref(v_exprResult_2494_);
v_proof_2495_ = lean_ctor_get(v_result_2452_, 4);
lean_inc_ref(v_proof_2495_);
lean_dec_ref(v_result_2452_);
v___x_2496_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_2497_ = lean_box(0);
v___x_2498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2498_, 0, v_u_2450_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
lean_inc_ref(v___x_2498_);
v___x_2499_ = l_Lean_mkConst(v___x_2496_, v___x_2498_);
lean_inc_ref(v_exprType_2492_);
lean_inc_ref(v___x_2499_);
v___x_2500_ = l_Lean_mkApp3(v___x_2499_, v_exprType_2492_, v_exprInit_2493_, v_expr_2491_);
v___x_2501_ = l_Lean_Meta_mkExpectedPropHint(v_proof_2495_, v___x_2500_);
lean_inc_ref(v_exprResult_2494_);
lean_inc_ref(v_source_2451_);
lean_inc_ref(v_exprType_2492_);
v___x_2502_ = l_Lean_mkApp3(v___x_2499_, v_exprType_2492_, v_source_2451_, v_exprResult_2494_);
v_proof_2503_ = l_Lean_Meta_mkExpectedPropHint(v___x_2501_, v___x_2502_);
if (v_keepUnused_2453_ == 0)
{
lean_object* v___x_2504_; 
lean_inc_ref(v_exprResult_2494_);
v___x_2504_ = l_Lean_Meta_zetaUnused(v_exprResult_2494_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2524_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2524_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2524_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
uint8_t v___x_2509_; 
v___x_2509_ = lean_expr_eqv(v_a_2505_, v_exprResult_2494_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2518_; 
v___x_2510_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1));
lean_inc_ref(v___x_2498_);
v___x_2511_ = l_Lean_mkConst(v___x_2510_, v___x_2498_);
v___x_2512_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2513_ = l_Lean_mkConst(v___x_2512_, v___x_2498_);
lean_inc(v_a_2505_);
lean_inc_ref(v_exprType_2492_);
v___x_2514_ = l_Lean_mkAppB(v___x_2513_, v_exprType_2492_, v_a_2505_);
lean_inc(v_a_2505_);
v___x_2515_ = l_Lean_mkApp6(v___x_2511_, v_exprType_2492_, v_source_2451_, v_exprResult_2494_, v_a_2505_, v_proof_2503_, v___x_2514_);
v___x_2516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2516_, 0, v_a_2505_);
lean_ctor_set(v___x_2516_, 1, v___x_2515_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2516_);
v___x_2518_ = v___x_2507_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v___x_2516_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
else
{
lean_object* v___x_2520_; lean_object* v___x_2522_; 
lean_dec(v_a_2505_);
lean_dec_ref(v___x_2498_);
lean_dec_ref(v_exprType_2492_);
lean_dec_ref(v_source_2451_);
v___x_2520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2520_, 0, v_exprResult_2494_);
lean_ctor_set(v___x_2520_, 1, v_proof_2503_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2520_);
v___x_2522_ = v___x_2507_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2520_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
else
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
lean_dec_ref(v_proof_2503_);
lean_dec_ref(v___x_2498_);
lean_dec_ref(v_exprResult_2494_);
lean_dec_ref(v_exprType_2492_);
lean_dec_ref(v_source_2451_);
v_a_2525_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2504_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2504_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
else
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec_ref(v___x_2498_);
lean_dec_ref(v_exprType_2492_);
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec_ref(v_source_2451_);
v___x_2533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2533_, 0, v_exprResult_2494_);
lean_ctor_set(v___x_2533_, 1, v_proof_2503_);
v___x_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
return v___x_2534_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object* v_u_2535_, lean_object* v_source_2536_, lean_object* v_result_2537_, lean_object* v_keepUnused_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_){
_start:
{
uint8_t v_keepUnused_boxed_2544_; lean_object* v_res_2545_; 
v_keepUnused_boxed_2544_ = lean_unbox(v_keepUnused_2538_);
v_res_2545_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(v_u_2535_, v_source_2536_, v_result_2537_, v_keepUnused_boxed_2544_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object* v_level_2546_, lean_object* v_e_2547_, lean_object* v_inst_2548_, uint8_t v_zetaUnusedMode_2549_, uint8_t v___x_2550_, uint8_t v___x_2551_, lean_object* v_r_2552_){
_start:
{
uint8_t v___y_2554_; 
switch(v_zetaUnusedMode_2549_)
{
case 0:
{
v___y_2554_ = v___x_2550_;
goto v___jp_2553_;
}
case 1:
{
v___y_2554_ = v___x_2550_;
goto v___jp_2553_;
}
default: 
{
v___y_2554_ = v___x_2551_;
goto v___jp_2553_;
}
}
v___jp_2553_:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2555_ = lean_box(v___y_2554_);
v___x_2556_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed), 9, 4);
lean_closure_set(v___x_2556_, 0, v_level_2546_);
lean_closure_set(v___x_2556_, 1, v_e_2547_);
lean_closure_set(v___x_2556_, 2, v_r_2552_);
lean_closure_set(v___x_2556_, 3, v___x_2555_);
v___x_2557_ = lean_apply_2(v_inst_2548_, lean_box(0), v___x_2556_);
return v___x_2557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object* v_level_2558_, lean_object* v_e_2559_, lean_object* v_inst_2560_, lean_object* v_zetaUnusedMode_2561_, lean_object* v___x_2562_, lean_object* v___x_2563_, lean_object* v_r_2564_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2565_; uint8_t v___x_363__boxed_2566_; uint8_t v___x_364__boxed_2567_; lean_object* v_res_2568_; 
v_zetaUnusedMode_boxed_2565_ = lean_unbox(v_zetaUnusedMode_2561_);
v___x_363__boxed_2566_ = lean_unbox(v___x_2562_);
v___x_364__boxed_2567_ = lean_unbox(v___x_2563_);
v_res_2568_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__0(v_level_2558_, v_e_2559_, v_inst_2560_, v_zetaUnusedMode_boxed_2565_, v___x_363__boxed_2566_, v___x_364__boxed_2567_, v_r_2564_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object* v___x_2569_, lean_object* v_inst_2570_, lean_object* v_inst_2571_, lean_object* v_inst_2572_, lean_object* v_inst_2573_, lean_object* v_info_2574_, lean_object* v_e_2575_, lean_object* v___x_2576_, lean_object* v_toBind_2577_, lean_object* v___f_2578_, lean_object* v_____x_2579_){
_start:
{
lean_object* v_fst_2580_; lean_object* v_snd_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v_fst_2580_ = lean_ctor_get(v_____x_2579_, 0);
lean_inc(v_fst_2580_);
v_snd_2581_ = lean_ctor_get(v_____x_2579_, 1);
lean_inc(v_snd_2581_);
lean_dec_ref(v_____x_2579_);
v___x_2582_ = lean_mk_empty_array_with_capacity(v___x_2569_);
v___x_2583_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_2570_, v_inst_2571_, v_inst_2572_, v_inst_2573_, v_info_2574_, v_fst_2580_, v_snd_2581_, v_e_2575_, v___x_2576_, v___x_2582_);
v___x_2584_ = lean_apply_4(v_toBind_2577_, lean_box(0), lean_box(0), v___x_2583_, v___f_2578_);
return v___x_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object* v___x_2585_, lean_object* v_inst_2586_, lean_object* v_inst_2587_, lean_object* v_inst_2588_, lean_object* v_inst_2589_, lean_object* v_info_2590_, lean_object* v_e_2591_, lean_object* v___x_2592_, lean_object* v_toBind_2593_, lean_object* v___f_2594_, lean_object* v_____x_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__1(v___x_2585_, v_inst_2586_, v_inst_2587_, v_inst_2588_, v_inst_2589_, v_info_2590_, v_e_2591_, v___x_2592_, v_toBind_2593_, v___f_2594_, v_____x_2595_);
lean_dec(v___x_2585_);
return v_res_2596_;
}
}
static lean_object* _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2599_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1));
v___x_2600_ = lean_unsigned_to_nat(2u);
v___x_2601_ = lean_unsigned_to_nat(456u);
v___x_2602_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0));
v___x_2603_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_2604_ = l_mkPanicMessageWithDecl(v___x_2603_, v___x_2602_, v___x_2601_, v___x_2600_, v___x_2599_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object* v_e_2605_, lean_object* v_inst_2606_, uint8_t v_zetaUnusedMode_2607_, lean_object* v_inst_2608_, lean_object* v_inst_2609_, lean_object* v_inst_2610_, lean_object* v_toBind_2611_, lean_object* v_info_2612_){
_start:
{
lean_object* v_haveInfo_2613_; lean_object* v_level_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v_haveInfo_2613_ = lean_ctor_get(v_info_2612_, 0);
v_level_2614_ = lean_ctor_get(v_info_2612_, 5);
v___x_2615_ = lean_array_get_size(v_haveInfo_2613_);
v___x_2616_ = lean_unsigned_to_nat(0u);
v___x_2617_ = lean_nat_dec_eq(v___x_2615_, v___x_2616_);
if (v___x_2617_ == 0)
{
uint8_t v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___f_2622_; lean_object* v___f_2623_; uint8_t v___y_2625_; 
v___x_2618_ = 1;
v___x_2619_ = lean_box(v_zetaUnusedMode_2607_);
v___x_2620_ = lean_box(v___x_2618_);
v___x_2621_ = lean_box(v___x_2617_);
lean_inc(v_inst_2606_);
lean_inc_ref(v_e_2605_);
lean_inc(v_level_2614_);
v___f_2622_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_2622_, 0, v_level_2614_);
lean_closure_set(v___f_2622_, 1, v_e_2605_);
lean_closure_set(v___f_2622_, 2, v_inst_2606_);
lean_closure_set(v___f_2622_, 3, v___x_2619_);
lean_closure_set(v___f_2622_, 4, v___x_2620_);
lean_closure_set(v___f_2622_, 5, v___x_2621_);
lean_inc(v_toBind_2611_);
lean_inc_ref(v_info_2612_);
lean_inc(v_inst_2606_);
v___f_2623_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_2623_, 0, v___x_2615_);
lean_closure_set(v___f_2623_, 1, v_inst_2608_);
lean_closure_set(v___f_2623_, 2, v_inst_2606_);
lean_closure_set(v___f_2623_, 3, v_inst_2609_);
lean_closure_set(v___f_2623_, 4, v_inst_2610_);
lean_closure_set(v___f_2623_, 5, v_info_2612_);
lean_closure_set(v___f_2623_, 6, v_e_2605_);
lean_closure_set(v___f_2623_, 7, v___x_2616_);
lean_closure_set(v___f_2623_, 8, v_toBind_2611_);
lean_closure_set(v___f_2623_, 9, v___f_2622_);
switch(v_zetaUnusedMode_2607_)
{
case 0:
{
v___y_2625_ = v___x_2618_;
goto v___jp_2624_;
}
case 2:
{
v___y_2625_ = v___x_2618_;
goto v___jp_2624_;
}
default: 
{
v___y_2625_ = v___x_2617_;
goto v___jp_2624_;
}
}
v___jp_2624_:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2626_ = lean_box(v___y_2625_);
v___x_2627_ = lean_alloc_closure((void*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed), 7, 2);
lean_closure_set(v___x_2627_, 0, v_info_2612_);
lean_closure_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = lean_apply_2(v_inst_2606_, lean_box(0), v___x_2627_);
v___x_2629_ = lean_apply_4(v_toBind_2611_, lean_box(0), lean_box(0), v___x_2628_, v___f_2623_);
return v___x_2629_;
}
}
else
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_dec_ref(v_info_2612_);
lean_dec(v_toBind_2611_);
lean_dec_ref(v_inst_2610_);
lean_dec_ref(v_inst_2609_);
lean_dec(v_inst_2606_);
lean_dec_ref(v_e_2605_);
v___x_2630_ = lean_box(0);
v___x_2631_ = l_instInhabitedOfMonad___redArg(v_inst_2608_, v___x_2630_);
v___x_2632_ = lean_obj_once(&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2, &l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once, _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2);
v___x_2633_ = l_panic___redArg(v___x_2631_, v___x_2632_);
return v___x_2633_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object* v_e_2634_, lean_object* v_inst_2635_, lean_object* v_zetaUnusedMode_2636_, lean_object* v_inst_2637_, lean_object* v_inst_2638_, lean_object* v_inst_2639_, lean_object* v_toBind_2640_, lean_object* v_info_2641_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2642_; lean_object* v_res_2643_; 
v_zetaUnusedMode_boxed_2642_ = lean_unbox(v_zetaUnusedMode_2636_);
v_res_2643_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__2(v_e_2634_, v_inst_2635_, v_zetaUnusedMode_boxed_2642_, v_inst_2637_, v_inst_2638_, v_inst_2639_, v_toBind_2640_, v_info_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object* v_inst_2644_, lean_object* v_inst_2645_, lean_object* v_inst_2646_, lean_object* v_inst_2647_, lean_object* v_e_2648_, uint8_t v_zetaUnusedMode_2649_){
_start:
{
lean_object* v_toBind_2650_; lean_object* v___x_2651_; lean_object* v___f_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v_toBind_2650_ = lean_ctor_get(v_inst_2644_, 1);
lean_inc(v_toBind_2650_);
v___x_2651_ = lean_box(v_zetaUnusedMode_2649_);
lean_inc(v_toBind_2650_);
lean_inc(v_inst_2645_);
lean_inc_ref(v_e_2648_);
v___f_2652_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2652_, 0, v_e_2648_);
lean_closure_set(v___f_2652_, 1, v_inst_2645_);
lean_closure_set(v___f_2652_, 2, v___x_2651_);
lean_closure_set(v___f_2652_, 3, v_inst_2644_);
lean_closure_set(v___f_2652_, 4, v_inst_2646_);
lean_closure_set(v___f_2652_, 5, v_inst_2647_);
lean_closure_set(v___f_2652_, 6, v_toBind_2650_);
v___x_2653_ = lean_alloc_closure((void*)(l_Lean_Meta_getHaveTelescopeInfo___boxed), 6, 1);
lean_closure_set(v___x_2653_, 0, v_e_2648_);
v___x_2654_ = lean_apply_2(v_inst_2645_, lean_box(0), v___x_2653_);
v___x_2655_ = lean_apply_4(v_toBind_2650_, lean_box(0), lean_box(0), v___x_2654_, v___f_2652_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object* v_inst_2656_, lean_object* v_inst_2657_, lean_object* v_inst_2658_, lean_object* v_inst_2659_, lean_object* v_e_2660_, lean_object* v_zetaUnusedMode_2661_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2662_; lean_object* v_res_2663_; 
v_zetaUnusedMode_boxed_2662_ = lean_unbox(v_zetaUnusedMode_2661_);
v_res_2663_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2656_, v_inst_2657_, v_inst_2658_, v_inst_2659_, v_e_2660_, v_zetaUnusedMode_boxed_2662_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object* v_m_2664_, lean_object* v_inst_2665_, lean_object* v_inst_2666_, lean_object* v_inst_2667_, lean_object* v_inst_2668_, lean_object* v_e_2669_, uint8_t v_zetaUnusedMode_2670_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2665_, v_inst_2666_, v_inst_2667_, v_inst_2668_, v_e_2669_, v_zetaUnusedMode_2670_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object* v_m_2672_, lean_object* v_inst_2673_, lean_object* v_inst_2674_, lean_object* v_inst_2675_, lean_object* v_inst_2676_, lean_object* v_e_2677_, lean_object* v_zetaUnusedMode_2678_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2679_; lean_object* v_res_2680_; 
v_zetaUnusedMode_boxed_2679_ = lean_unbox(v_zetaUnusedMode_2678_);
v_res_2680_ = l_Lean_Meta_simpHaveTelescope(v_m_2672_, v_inst_2673_, v_inst_2674_, v_inst_2675_, v_inst_2676_, v_e_2677_, v_zetaUnusedMode_boxed_2679_);
return v_res_2680_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedHaveInfo_default = _init_l_Lean_Meta_instInhabitedHaveInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo_default);
l_Lean_Meta_instInhabitedHaveInfo = _init_l_Lean_Meta_instInhabitedHaveInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo);
l_Lean_Meta_instInhabitedHaveTelescopeInfo_default = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default);
l_Lean_Meta_instInhabitedHaveTelescopeInfo = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo);
l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default = _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default();
lean_mark_persistent(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult_default);
l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult = _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult();
lean_mark_persistent(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_HaveTelescope(builtin);
}
#ifdef __cplusplus
}
#endif
