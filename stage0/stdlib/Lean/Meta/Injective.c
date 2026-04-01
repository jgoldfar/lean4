// Lean compiler output
// Module: Lean.Meta.Injective
// Imports: public import Lean.Meta.Basic import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Assumption import Lean.Meta.SameCtorUtils import Init.Omega import Lean.Meta.Tactic.Injection import Lean.Meta.Tactic.Simp.Attr
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
lean_object* lean_st_ref_take(lean_object*);
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_occursOrInType(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_Meta_simpExtension;
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_elimOptParam___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optParam"};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_elimOptParam___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 160, 223, 165, 16, 51, 54, 209)}};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_elimOptParam___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_elimOptParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_elimOptParam___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_elimOptParam___closed__0 = (const lean_object*)&l_Lean_Meta_elimOptParam___closed__0_value;
static const lean_closure_object l_Lean_Meta_elimOptParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_elimOptParam___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_elimOptParam___closed__1 = (const lean_object*)&l_Lean_Meta_elimOptParam___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unexpected constructor type for `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "failed to prove injectivity theorem for constructor `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "`, use 'set_option genInjectivity false' to disable the generation"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "_private.Lean.Meta.Injective.0.Lean.Meta.solveEqOfCtorEq"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value),LEAN_SCALAR_PTR_LITERAL(39, 126, 11, 127, 131, 182, 22, 10)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "solving injectivity goal for "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " with hypothesis "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " at\n"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 11, 58, 56, 192, 58, 162, 195)}};
static const lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "generating `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__3;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "type: "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0 = (const lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 235, 155, 31, 77, 126, 235, 172)}};
static const lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1 = (const lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value;
static const lean_string_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "injEq_helper"};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__1 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(167, 111, 180, 146, 132, 58, 155, 57)}};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__2 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__3;
static const lean_string_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "unexpected number of goals after applying `Lean.and_imp`"};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__4 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__5;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "propIntro"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(189, 136, 38, 165, 207, 169, 133, 34)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "unexpected number of subgoals when proving injective theorem for constructor `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "genInjectivity"};
static const lean_object* l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(56, 68, 112, 222, 169, 79, 62, 37)}};
static const lean_object* l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "generate injectivity theorems for inductive datatype constructors. Temporarily (for bootstrapping reasons) also controls the generation of the\n    `ctorIdx` definition."};
static const lean_object* l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 17, 232, 138, 187, 170, 36, 13)}};
static const lean_object* l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_genInjectivity;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__0;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__1;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__3;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__4;
static const lean_array_object l_Lean_Meta_mkInjectiveTheorems___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__5 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheorems___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 101, 109, 194, 24, 99, 201, 78)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(74, 76, 255, 124, 31, 108, 47, 16)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 106, 16, 37, 3, 60, 11, 157)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(3, 239, 173, 245, 77, 160, 209, 24)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(98, 239, 175, 71, 176, 92, 247, 26)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 126, 32, 109, 177, 184, 17, 126)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 151, 10, 103, 183, 199, 62, 165)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(242, 157, 244, 230, 219, 101, 50, 39)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(67, 105, 167, 47, 98, 73, 248, 220)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "failed to generate heterogeneous injectivity theorem for `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "noConfusion"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hinj"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHInjectiveTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_6_ = l_Lean_mkConst(v___x_5_, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(lean_object* v_a_7_, lean_object* v_b_8_){
_start:
{
lean_object* v_array_9_; lean_object* v_start_10_; lean_object* v_stop_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_25_; 
v_array_9_ = lean_ctor_get(v_a_7_, 0);
v_start_10_ = lean_ctor_get(v_a_7_, 1);
v_stop_11_ = lean_ctor_get(v_a_7_, 2);
v_isSharedCheck_25_ = !lean_is_exclusive(v_a_7_);
if (v_isSharedCheck_25_ == 0)
{
v___x_13_ = v_a_7_;
v_isShared_14_ = v_isSharedCheck_25_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_stop_11_);
lean_inc(v_start_10_);
lean_inc(v_array_9_);
lean_dec(v_a_7_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_25_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
uint8_t v___x_15_; 
v___x_15_ = lean_nat_dec_lt(v_start_10_, v_stop_11_);
if (v___x_15_ == 0)
{
lean_del_object(v___x_13_);
lean_dec(v_stop_11_);
lean_dec(v_start_10_);
lean_dec_ref(v_array_9_);
return v_b_8_;
}
else
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_16_ = lean_unsigned_to_nat(1u);
v___x_17_ = lean_nat_add(v_start_10_, v___x_16_);
lean_inc_ref(v_array_9_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___x_17_);
v___x_19_ = v___x_13_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_array_9_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v___x_17_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v_stop_11_);
v___x_19_ = v_reuseFailAlloc_24_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_array_fget(v_array_9_, v_start_10_);
lean_dec(v_start_10_);
lean_dec_ref(v_array_9_);
v___x_21_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2);
v___x_22_ = l_Lean_mkAppB(v___x_21_, v___x_20_, v_b_8_);
v_a_7_ = v___x_19_;
v_b_8_ = v___x_22_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(lean_object* v_args_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_27_ = lean_array_get_size(v_args_26_);
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_nat_dec_eq(v___x_27_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v_result_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_30_ = l_Lean_instInhabitedExpr;
v___x_31_ = lean_unsigned_to_nat(1u);
v___x_32_ = lean_nat_sub(v___x_27_, v___x_31_);
v_result_33_ = lean_array_get(v___x_30_, v_args_26_, v___x_32_);
lean_dec(v___x_32_);
v___x_34_ = l_Array_reverse___redArg(v_args_26_);
v___x_35_ = lean_array_get_size(v___x_34_);
v___x_36_ = l_Array_toSubarray___redArg(v___x_34_, v___x_31_, v___x_35_);
v___x_37_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(v___x_36_, v_result_33_);
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; 
lean_dec_ref(v_args_26_);
v___x_39_ = lean_box(0);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0(lean_object* v_inst_40_, lean_object* v_R_41_, lean_object* v_a_42_, lean_object* v_b_43_, lean_object* v_c_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(v_a_42_, v_b_43_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0(lean_object* v_e_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_elimOptParam___lam__0___closed__1));
v___x_56_ = lean_unsigned_to_nat(2u);
v___x_57_ = l_Lean_Expr_isAppOfArity(v_e_51_, v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Meta_elimOptParam___lam__0___closed__2));
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_60_ = l_Lean_Expr_getAppNumArgs(v_e_51_);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_sub(v___x_60_, v___x_61_);
lean_dec(v___x_60_);
v___x_63_ = l_Lean_Expr_getRevArg_x21(v_e_51_, v___x_62_);
v___x_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0___boxed(lean_object* v_e_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Meta_elimOptParam___lam__0(v_e_66_, v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec_ref(v_e_66_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1(lean_object* v_e_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v_e_71_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1___boxed(lean_object* v_e_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Meta_elimOptParam___lam__1(v_e_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_a_82_, lean_object* v_b_83_, lean_object* v_x_84_){
_start:
{
if (lean_obj_tag(v_x_84_) == 0)
{
lean_dec(v_b_83_);
lean_dec_ref(v_a_82_);
return v_x_84_;
}
else
{
lean_object* v_key_85_; lean_object* v_value_86_; lean_object* v_tail_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_99_; 
v_key_85_ = lean_ctor_get(v_x_84_, 0);
v_value_86_ = lean_ctor_get(v_x_84_, 1);
v_tail_87_ = lean_ctor_get(v_x_84_, 2);
v_isSharedCheck_99_ = !lean_is_exclusive(v_x_84_);
if (v_isSharedCheck_99_ == 0)
{
v___x_89_ = v_x_84_;
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_tail_87_);
lean_inc(v_value_86_);
lean_inc(v_key_85_);
lean_dec(v_x_84_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
uint8_t v___x_91_; 
v___x_91_ = l_Lean_ExprStructEq_beq(v_key_85_, v_a_82_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_92_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_a_82_, v_b_83_, v_tail_87_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 2, v___x_92_);
v___x_94_ = v___x_89_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_key_85_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v_value_86_);
lean_ctor_set(v_reuseFailAlloc_95_, 2, v___x_92_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
else
{
lean_object* v___x_97_; 
lean_dec(v_value_86_);
lean_dec(v_key_85_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v_b_83_);
lean_ctor_set(v___x_89_, 0, v_a_82_);
v___x_97_ = v___x_89_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_82_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v_b_83_);
lean_ctor_set(v_reuseFailAlloc_98_, 2, v_tail_87_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg(lean_object* v_a_100_, lean_object* v_x_101_){
_start:
{
if (lean_obj_tag(v_x_101_) == 0)
{
uint8_t v___x_102_; 
v___x_102_ = 0;
return v___x_102_;
}
else
{
lean_object* v_key_103_; lean_object* v_tail_104_; uint8_t v___x_105_; 
v_key_103_ = lean_ctor_get(v_x_101_, 0);
v_tail_104_ = lean_ctor_get(v_x_101_, 2);
v___x_105_ = l_Lean_ExprStructEq_beq(v_key_103_, v_a_100_);
if (v___x_105_ == 0)
{
v_x_101_ = v_tail_104_;
goto _start;
}
else
{
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object* v_a_107_, lean_object* v_x_108_){
_start:
{
uint8_t v_res_109_; lean_object* v_r_110_; 
v_res_109_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg(v_a_107_, v_x_108_);
lean_dec(v_x_108_);
lean_dec_ref(v_a_107_);
v_r_110_ = lean_box(v_res_109_);
return v_r_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
if (lean_obj_tag(v_x_112_) == 0)
{
return v_x_111_;
}
else
{
lean_object* v_key_113_; lean_object* v_value_114_; lean_object* v_tail_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_138_; 
v_key_113_ = lean_ctor_get(v_x_112_, 0);
v_value_114_ = lean_ctor_get(v_x_112_, 1);
v_tail_115_ = lean_ctor_get(v_x_112_, 2);
v_isSharedCheck_138_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_138_ == 0)
{
v___x_117_ = v_x_112_;
v_isShared_118_ = v_isSharedCheck_138_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_tail_115_);
lean_inc(v_value_114_);
lean_inc(v_key_113_);
lean_dec(v_x_112_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_138_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; uint64_t v___x_120_; uint64_t v___x_121_; uint64_t v___x_122_; uint64_t v_fold_123_; uint64_t v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_119_ = lean_array_get_size(v_x_111_);
v___x_120_ = l_Lean_ExprStructEq_hash(v_key_113_);
v___x_121_ = 32ULL;
v___x_122_ = lean_uint64_shift_right(v___x_120_, v___x_121_);
v_fold_123_ = lean_uint64_xor(v___x_120_, v___x_122_);
v___x_124_ = 16ULL;
v___x_125_ = lean_uint64_shift_right(v_fold_123_, v___x_124_);
v___x_126_ = lean_uint64_xor(v_fold_123_, v___x_125_);
v___x_127_ = lean_uint64_to_usize(v___x_126_);
v___x_128_ = lean_usize_of_nat(v___x_119_);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_sub(v___x_128_, v___x_129_);
v___x_131_ = lean_usize_land(v___x_127_, v___x_130_);
v___x_132_ = lean_array_uget_borrowed(v_x_111_, v___x_131_);
lean_inc(v___x_132_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 2, v___x_132_);
v___x_134_ = v___x_117_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_key_113_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_value_114_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v___x_132_);
v___x_134_ = v_reuseFailAlloc_137_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; 
v___x_135_ = lean_array_uset(v_x_111_, v___x_131_, v___x_134_);
v_x_111_ = v___x_135_;
v_x_112_ = v_tail_115_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object* v_i_139_, lean_object* v_source_140_, lean_object* v_target_141_){
_start:
{
lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_142_ = lean_array_get_size(v_source_140_);
v___x_143_ = lean_nat_dec_lt(v_i_139_, v___x_142_);
if (v___x_143_ == 0)
{
lean_dec_ref(v_source_140_);
lean_dec(v_i_139_);
return v_target_141_;
}
else
{
lean_object* v_es_144_; lean_object* v___x_145_; lean_object* v_source_146_; lean_object* v_target_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_es_144_ = lean_array_fget(v_source_140_, v_i_139_);
v___x_145_ = lean_box(0);
v_source_146_ = lean_array_fset(v_source_140_, v_i_139_, v___x_145_);
v_target_147_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_target_141_, v_es_144_);
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = lean_nat_add(v_i_139_, v___x_148_);
lean_dec(v_i_139_);
v_i_139_ = v___x_149_;
v_source_140_ = v_source_146_;
v_target_141_ = v_target_147_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_data_151_){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_nbuckets_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_152_ = lean_array_get_size(v_data_151_);
v___x_153_ = lean_unsigned_to_nat(2u);
v_nbuckets_154_ = lean_nat_mul(v___x_152_, v___x_153_);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_box(0);
v___x_157_ = lean_mk_array(v_nbuckets_154_, v___x_156_);
v___x_158_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v___x_155_, v_data_151_, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(lean_object* v_m_159_, lean_object* v_a_160_, lean_object* v_b_161_){
_start:
{
lean_object* v_size_162_; lean_object* v_buckets_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_206_; 
v_size_162_ = lean_ctor_get(v_m_159_, 0);
v_buckets_163_ = lean_ctor_get(v_m_159_, 1);
v_isSharedCheck_206_ = !lean_is_exclusive(v_m_159_);
if (v_isSharedCheck_206_ == 0)
{
v___x_165_ = v_m_159_;
v_isShared_166_ = v_isSharedCheck_206_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_buckets_163_);
lean_inc(v_size_162_);
lean_dec(v_m_159_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_206_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; uint64_t v___x_170_; uint64_t v_fold_171_; uint64_t v___x_172_; uint64_t v___x_173_; uint64_t v___x_174_; size_t v___x_175_; size_t v___x_176_; size_t v___x_177_; size_t v___x_178_; size_t v___x_179_; lean_object* v_bkt_180_; uint8_t v___x_181_; 
v___x_167_ = lean_array_get_size(v_buckets_163_);
v___x_168_ = l_Lean_ExprStructEq_hash(v_a_160_);
v___x_169_ = 32ULL;
v___x_170_ = lean_uint64_shift_right(v___x_168_, v___x_169_);
v_fold_171_ = lean_uint64_xor(v___x_168_, v___x_170_);
v___x_172_ = 16ULL;
v___x_173_ = lean_uint64_shift_right(v_fold_171_, v___x_172_);
v___x_174_ = lean_uint64_xor(v_fold_171_, v___x_173_);
v___x_175_ = lean_uint64_to_usize(v___x_174_);
v___x_176_ = lean_usize_of_nat(v___x_167_);
v___x_177_ = ((size_t)1ULL);
v___x_178_ = lean_usize_sub(v___x_176_, v___x_177_);
v___x_179_ = lean_usize_land(v___x_175_, v___x_178_);
v_bkt_180_ = lean_array_uget_borrowed(v_buckets_163_, v___x_179_);
v___x_181_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg(v_a_160_, v_bkt_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v_size_x27_183_; lean_object* v___x_184_; lean_object* v_buckets_x27_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_182_ = lean_unsigned_to_nat(1u);
v_size_x27_183_ = lean_nat_add(v_size_162_, v___x_182_);
lean_dec(v_size_162_);
lean_inc(v_bkt_180_);
v___x_184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_184_, 0, v_a_160_);
lean_ctor_set(v___x_184_, 1, v_b_161_);
lean_ctor_set(v___x_184_, 2, v_bkt_180_);
v_buckets_x27_185_ = lean_array_uset(v_buckets_163_, v___x_179_, v___x_184_);
v___x_186_ = lean_unsigned_to_nat(4u);
v___x_187_ = lean_nat_mul(v_size_x27_183_, v___x_186_);
v___x_188_ = lean_unsigned_to_nat(3u);
v___x_189_ = lean_nat_div(v___x_187_, v___x_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_array_get_size(v_buckets_x27_185_);
v___x_191_ = lean_nat_dec_le(v___x_189_, v___x_190_);
lean_dec(v___x_189_);
if (v___x_191_ == 0)
{
lean_object* v_val_192_; lean_object* v___x_194_; 
v_val_192_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_buckets_x27_185_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v_val_192_);
lean_ctor_set(v___x_165_, 0, v_size_x27_183_);
v___x_194_ = v___x_165_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_size_x27_183_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_val_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
else
{
lean_object* v___x_197_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v_buckets_x27_185_);
lean_ctor_set(v___x_165_, 0, v_size_x27_183_);
v___x_197_ = v___x_165_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_size_x27_183_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_buckets_x27_185_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
else
{
lean_object* v___x_199_; lean_object* v_buckets_x27_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_204_; 
lean_inc(v_bkt_180_);
v___x_199_ = lean_box(0);
v_buckets_x27_200_ = lean_array_uset(v_buckets_163_, v___x_179_, v___x_199_);
v___x_201_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_a_160_, v_b_161_, v_bkt_180_);
v___x_202_ = lean_array_uset(v_buckets_x27_200_, v___x_179_, v___x_201_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v___x_202_);
v___x_204_ = v___x_165_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_size_162_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(lean_object* v_a_207_, lean_object* v_e_208_, lean_object* v_a_209_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_211_ = lean_st_ref_take(v_a_207_);
v___x_212_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(v___x_211_, v_e_208_, v_a_209_);
v___x_213_ = lean_st_ref_set(v_a_207_, v___x_212_);
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed(lean_object* v_a_215_, lean_object* v_e_216_, lean_object* v_a_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(v_a_215_, v_e_216_, v_a_217_);
lean_dec(v_a_215_);
return v_res_219_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = l_Lean_maxRecDepthErrorMessage;
v___x_226_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
return v___x_226_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_228_ = l_Lean_MessageData_ofFormat(v___x_227_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_230_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_231_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v___x_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_232_){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_234_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_235_, 0, v_ref_232_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_237_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(lean_object* v_x_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v___y_246_; lean_object* v_fileName_255_; lean_object* v_fileMap_256_; lean_object* v_options_257_; lean_object* v_currRecDepth_258_; lean_object* v_maxRecDepth_259_; lean_object* v_ref_260_; lean_object* v_currNamespace_261_; lean_object* v_openDecls_262_; lean_object* v_initHeartbeats_263_; lean_object* v_maxHeartbeats_264_; lean_object* v_quotContext_265_; lean_object* v_currMacroScope_266_; uint8_t v_diag_267_; lean_object* v_cancelTk_x3f_268_; uint8_t v_suppressElabErrors_269_; lean_object* v_inheritedTraceOptions_270_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_fileName_255_ = lean_ctor_get(v___y_242_, 0);
v_fileMap_256_ = lean_ctor_get(v___y_242_, 1);
v_options_257_ = lean_ctor_get(v___y_242_, 2);
v_currRecDepth_258_ = lean_ctor_get(v___y_242_, 3);
v_maxRecDepth_259_ = lean_ctor_get(v___y_242_, 4);
v_ref_260_ = lean_ctor_get(v___y_242_, 5);
v_currNamespace_261_ = lean_ctor_get(v___y_242_, 6);
v_openDecls_262_ = lean_ctor_get(v___y_242_, 7);
v_initHeartbeats_263_ = lean_ctor_get(v___y_242_, 8);
v_maxHeartbeats_264_ = lean_ctor_get(v___y_242_, 9);
v_quotContext_265_ = lean_ctor_get(v___y_242_, 10);
v_currMacroScope_266_ = lean_ctor_get(v___y_242_, 11);
v_diag_267_ = lean_ctor_get_uint8(v___y_242_, sizeof(void*)*14);
v_cancelTk_x3f_268_ = lean_ctor_get(v___y_242_, 12);
v_suppressElabErrors_269_ = lean_ctor_get_uint8(v___y_242_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_270_ = lean_ctor_get(v___y_242_, 13);
v___x_276_ = lean_unsigned_to_nat(0u);
v___x_277_ = lean_nat_dec_eq(v_maxRecDepth_259_, v___x_276_);
if (v___x_277_ == 0)
{
uint8_t v___x_278_; 
v___x_278_ = lean_nat_dec_eq(v_currRecDepth_258_, v_maxRecDepth_259_);
if (v___x_278_ == 0)
{
goto v___jp_271_;
}
else
{
lean_object* v___x_279_; 
lean_dec_ref(v_x_240_);
lean_inc(v_ref_260_);
v___x_279_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_260_);
v___y_246_ = v___x_279_;
goto v___jp_245_;
}
}
else
{
goto v___jp_271_;
}
v___jp_245_:
{
if (lean_obj_tag(v___y_246_) == 0)
{
return v___y_246_;
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
v_a_247_ = lean_ctor_get(v___y_246_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___y_246_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___y_246_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___y_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
v___jp_271_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_nat_add(v_currRecDepth_258_, v___x_272_);
lean_inc_ref(v_inheritedTraceOptions_270_);
lean_inc(v_cancelTk_x3f_268_);
lean_inc(v_currMacroScope_266_);
lean_inc(v_quotContext_265_);
lean_inc(v_maxHeartbeats_264_);
lean_inc(v_initHeartbeats_263_);
lean_inc(v_openDecls_262_);
lean_inc(v_currNamespace_261_);
lean_inc(v_ref_260_);
lean_inc(v_maxRecDepth_259_);
lean_inc_ref(v_options_257_);
lean_inc_ref(v_fileMap_256_);
lean_inc_ref(v_fileName_255_);
v___x_274_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_274_, 0, v_fileName_255_);
lean_ctor_set(v___x_274_, 1, v_fileMap_256_);
lean_ctor_set(v___x_274_, 2, v_options_257_);
lean_ctor_set(v___x_274_, 3, v___x_273_);
lean_ctor_set(v___x_274_, 4, v_maxRecDepth_259_);
lean_ctor_set(v___x_274_, 5, v_ref_260_);
lean_ctor_set(v___x_274_, 6, v_currNamespace_261_);
lean_ctor_set(v___x_274_, 7, v_openDecls_262_);
lean_ctor_set(v___x_274_, 8, v_initHeartbeats_263_);
lean_ctor_set(v___x_274_, 9, v_maxHeartbeats_264_);
lean_ctor_set(v___x_274_, 10, v_quotContext_265_);
lean_ctor_set(v___x_274_, 11, v_currMacroScope_266_);
lean_ctor_set(v___x_274_, 12, v_cancelTk_x3f_268_);
lean_ctor_set(v___x_274_, 13, v_inheritedTraceOptions_270_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*14, v_diag_267_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*14 + 1, v_suppressElabErrors_269_);
lean_inc(v___y_243_);
lean_inc(v___y_241_);
v___x_275_ = lean_apply_4(v_x_240_, v___y_241_, v___x_274_, v___y_243_, lean_box(0));
v___y_246_ = v___x_275_;
goto v___jp_245_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v_x_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_286_, lean_object* v_x_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_apply_1(v_x_287_, lean_box(0));
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_293_, lean_object* v_x_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(v_00_u03b1_293_, v_x_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_299_, lean_object* v_x_300_){
_start:
{
if (lean_obj_tag(v_x_300_) == 0)
{
lean_object* v___x_301_; 
v___x_301_ = lean_box(0);
return v___x_301_;
}
else
{
lean_object* v_key_302_; lean_object* v_value_303_; lean_object* v_tail_304_; uint8_t v___x_305_; 
v_key_302_ = lean_ctor_get(v_x_300_, 0);
v_value_303_ = lean_ctor_get(v_x_300_, 1);
v_tail_304_ = lean_ctor_get(v_x_300_, 2);
v___x_305_ = l_Lean_ExprStructEq_beq(v_key_302_, v_a_299_);
if (v___x_305_ == 0)
{
v_x_300_ = v_tail_304_;
goto _start;
}
else
{
lean_object* v___x_307_; 
lean_inc(v_value_303_);
v___x_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_307_, 0, v_value_303_);
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_308_, lean_object* v_x_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(v_a_308_, v_x_309_);
lean_dec(v_x_309_);
lean_dec_ref(v_a_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(lean_object* v_m_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_buckets_313_; lean_object* v___x_314_; uint64_t v___x_315_; uint64_t v___x_316_; uint64_t v___x_317_; uint64_t v_fold_318_; uint64_t v___x_319_; uint64_t v___x_320_; uint64_t v___x_321_; size_t v___x_322_; size_t v___x_323_; size_t v___x_324_; size_t v___x_325_; size_t v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_buckets_313_ = lean_ctor_get(v_m_311_, 1);
v___x_314_ = lean_array_get_size(v_buckets_313_);
v___x_315_ = l_Lean_ExprStructEq_hash(v_a_312_);
v___x_316_ = 32ULL;
v___x_317_ = lean_uint64_shift_right(v___x_315_, v___x_316_);
v_fold_318_ = lean_uint64_xor(v___x_315_, v___x_317_);
v___x_319_ = 16ULL;
v___x_320_ = lean_uint64_shift_right(v_fold_318_, v___x_319_);
v___x_321_ = lean_uint64_xor(v_fold_318_, v___x_320_);
v___x_322_ = lean_uint64_to_usize(v___x_321_);
v___x_323_ = lean_usize_of_nat(v___x_314_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_sub(v___x_323_, v___x_324_);
v___x_326_ = lean_usize_land(v___x_322_, v___x_325_);
v___x_327_ = lean_array_uget_borrowed(v_buckets_313_, v___x_326_);
v___x_328_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(v_a_312_, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(v_m_329_, v_a_330_);
lean_dec_ref(v_a_330_);
lean_dec_ref(v_m_329_);
return v_res_331_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_332_; lean_object* v_dummy_333_; 
v___x_332_ = lean_box(0);
v_dummy_333_ = l_Lean_Expr_sort___override(v___x_332_);
return v_dummy_333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(lean_object* v_pre_334_, lean_object* v_post_335_, size_t v_sz_336_, size_t v_i_337_, lean_object* v_bs_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_lt(v_i_337_, v_sz_336_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
lean_dec_ref(v_post_335_);
lean_dec_ref(v_pre_334_);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v_bs_338_);
return v___x_344_;
}
else
{
lean_object* v_v_345_; lean_object* v___x_346_; 
v_v_345_ = lean_array_uget_borrowed(v_bs_338_, v_i_337_);
lean_inc(v_v_345_);
lean_inc_ref(v_post_335_);
lean_inc_ref(v_pre_334_);
v___x_346_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_334_, v_post_335_, v_v_345_, v___y_339_, v___y_340_, v___y_341_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_348_; lean_object* v_bs_x27_349_; size_t v___x_350_; size_t v___x_351_; lean_object* v___x_352_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref(v___x_346_);
v___x_348_ = lean_unsigned_to_nat(0u);
v_bs_x27_349_ = lean_array_uset(v_bs_338_, v_i_337_, v___x_348_);
v___x_350_ = ((size_t)1ULL);
v___x_351_ = lean_usize_add(v_i_337_, v___x_350_);
v___x_352_ = lean_array_uset(v_bs_x27_349_, v_i_337_, v_a_347_);
v_i_337_ = v___x_351_;
v_bs_338_ = v___x_352_;
goto _start;
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v_bs_338_);
lean_dec_ref(v_post_335_);
lean_dec_ref(v_pre_334_);
v_a_354_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_346_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_346_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(lean_object* v_pre_362_, lean_object* v_post_363_, lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
if (lean_obj_tag(v_x_364_) == 5)
{
lean_object* v_fn_371_; lean_object* v_arg_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_fn_371_ = lean_ctor_get(v_x_364_, 0);
lean_inc_ref(v_fn_371_);
v_arg_372_ = lean_ctor_get(v_x_364_, 1);
lean_inc_ref(v_arg_372_);
lean_dec_ref(v_x_364_);
v___x_373_ = lean_array_set(v_x_365_, v_x_366_, v_arg_372_);
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_nat_sub(v_x_366_, v___x_374_);
lean_dec(v_x_366_);
v_x_364_ = v_fn_371_;
v_x_365_ = v___x_373_;
v_x_366_ = v___x_375_;
goto _start;
}
else
{
lean_object* v___x_377_; 
lean_dec(v_x_366_);
lean_inc_ref(v_post_363_);
lean_inc_ref(v_pre_362_);
v___x_377_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_362_, v_post_363_, v_x_364_, v___y_367_, v___y_368_, v___y_369_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; size_t v_sz_379_; size_t v___x_380_; lean_object* v___x_381_; 
v_a_378_ = lean_ctor_get(v___x_377_, 0);
lean_inc(v_a_378_);
lean_dec_ref(v___x_377_);
v_sz_379_ = lean_array_size(v_x_365_);
v___x_380_ = ((size_t)0ULL);
lean_inc_ref(v_post_363_);
lean_inc_ref(v_pre_362_);
v___x_381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(v_pre_362_, v_post_363_, v_sz_379_, v___x_380_, v_x_365_, v___y_367_, v___y_368_, v___y_369_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref(v___x_381_);
v___x_383_ = l_Lean_mkAppN(v_a_378_, v_a_382_);
lean_dec(v_a_382_);
v___x_384_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_362_, v_post_363_, v___x_383_, v___y_367_, v___y_368_, v___y_369_);
return v___x_384_;
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec(v_a_378_);
lean_dec_ref(v_post_363_);
lean_dec_ref(v_pre_362_);
v_a_385_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_381_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_381_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
else
{
lean_dec_ref(v_x_365_);
lean_dec_ref(v_post_363_);
lean_dec_ref(v_pre_362_);
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(lean_object* v_pre_393_, lean_object* v_e_394_, lean_object* v_post_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; uint8_t v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; uint8_t v___y_408_; lean_object* v___y_418_; uint8_t v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; uint8_t v___y_423_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___y_433_; uint8_t v___y_434_; lean_object* v___y_435_; uint8_t v___y_436_; lean_object* v___x_443_; 
lean_inc_ref(v_pre_393_);
lean_inc(v___y_398_);
lean_inc_ref(v___y_397_);
lean_inc_ref(v_e_394_);
v___x_443_ = lean_apply_4(v_pre_393_, v_e_394_, v___y_397_, v___y_398_, lean_box(0));
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_533_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_533_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_533_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_533_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___y_449_; 
switch(lean_obj_tag(v_a_444_))
{
case 0:
{
lean_object* v_e_523_; lean_object* v___x_525_; 
lean_dec_ref(v_post_395_);
lean_dec_ref(v_e_394_);
lean_dec_ref(v_pre_393_);
v_e_523_ = lean_ctor_get(v_a_444_, 0);
lean_inc_ref(v_e_523_);
lean_dec_ref(v_a_444_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v_e_523_);
v___x_525_ = v___x_446_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_e_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
case 1:
{
lean_object* v_e_527_; lean_object* v___x_528_; 
lean_del_object(v___x_446_);
lean_dec_ref(v_e_394_);
v_e_527_ = lean_ctor_get(v_a_444_, 0);
lean_inc_ref(v_e_527_);
lean_dec_ref(v_a_444_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_528_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_e_527_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_530_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_529_);
lean_dec_ref(v___x_528_);
v___x_530_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v_a_529_, v___y_396_, v___y_397_, v___y_398_);
return v___x_530_;
}
else
{
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_528_;
}
}
default: 
{
lean_object* v_e_x3f_531_; 
lean_del_object(v___x_446_);
v_e_x3f_531_ = lean_ctor_get(v_a_444_, 0);
lean_inc(v_e_x3f_531_);
lean_dec_ref(v_a_444_);
if (lean_obj_tag(v_e_x3f_531_) == 0)
{
v___y_449_ = v_e_394_;
goto v___jp_448_;
}
else
{
lean_object* v_val_532_; 
lean_dec_ref(v_e_394_);
v_val_532_ = lean_ctor_get(v_e_x3f_531_, 0);
lean_inc(v_val_532_);
lean_dec_ref(v_e_x3f_531_);
v___y_449_ = v_val_532_;
goto v___jp_448_;
}
}
}
v___jp_448_:
{
switch(lean_obj_tag(v___y_449_))
{
case 7:
{
lean_object* v_binderName_450_; lean_object* v_binderType_451_; lean_object* v_body_452_; uint8_t v_binderInfo_453_; lean_object* v___x_454_; 
v_binderName_450_ = lean_ctor_get(v___y_449_, 0);
lean_inc(v_binderName_450_);
v_binderType_451_ = lean_ctor_get(v___y_449_, 1);
v_body_452_ = lean_ctor_get(v___y_449_, 2);
v_binderInfo_453_ = lean_ctor_get_uint8(v___y_449_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_451_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_454_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_binderType_451_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_456_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref(v___x_454_);
lean_inc_ref(v_body_452_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_456_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_body_452_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; size_t v___x_458_; size_t v___x_459_; uint8_t v___x_460_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref(v___x_456_);
v___x_458_ = lean_ptr_addr(v_binderType_451_);
v___x_459_ = lean_ptr_addr(v_a_455_);
v___x_460_ = lean_usize_dec_eq(v___x_458_, v___x_459_);
if (v___x_460_ == 0)
{
v___y_431_ = v_a_457_;
v___y_432_ = v_a_455_;
v___y_433_ = v___y_449_;
v___y_434_ = v_binderInfo_453_;
v___y_435_ = v_binderName_450_;
v___y_436_ = v___x_460_;
goto v___jp_430_;
}
else
{
size_t v___x_461_; size_t v___x_462_; uint8_t v___x_463_; 
v___x_461_ = lean_ptr_addr(v_body_452_);
v___x_462_ = lean_ptr_addr(v_a_457_);
v___x_463_ = lean_usize_dec_eq(v___x_461_, v___x_462_);
v___y_431_ = v_a_457_;
v___y_432_ = v_a_455_;
v___y_433_ = v___y_449_;
v___y_434_ = v_binderInfo_453_;
v___y_435_ = v_binderName_450_;
v___y_436_ = v___x_463_;
goto v___jp_430_;
}
}
else
{
lean_dec(v_a_455_);
lean_dec_ref(v___y_449_);
lean_dec(v_binderName_450_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_456_;
}
}
else
{
lean_dec_ref(v___y_449_);
lean_dec(v_binderName_450_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_454_;
}
}
case 6:
{
lean_object* v_binderName_464_; lean_object* v_binderType_465_; lean_object* v_body_466_; uint8_t v_binderInfo_467_; lean_object* v___x_468_; 
v_binderName_464_ = lean_ctor_get(v___y_449_, 0);
lean_inc(v_binderName_464_);
v_binderType_465_ = lean_ctor_get(v___y_449_, 1);
v_body_466_ = lean_ctor_get(v___y_449_, 2);
v_binderInfo_467_ = lean_ctor_get_uint8(v___y_449_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_465_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_468_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_binderType_465_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_470_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_a_469_);
lean_dec_ref(v___x_468_);
lean_inc_ref(v_body_466_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_470_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_body_466_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; size_t v___x_472_; size_t v___x_473_; uint8_t v___x_474_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref(v___x_470_);
v___x_472_ = lean_ptr_addr(v_binderType_465_);
v___x_473_ = lean_ptr_addr(v_a_469_);
v___x_474_ = lean_usize_dec_eq(v___x_472_, v___x_473_);
if (v___x_474_ == 0)
{
v___y_418_ = v_binderName_464_;
v___y_419_ = v_binderInfo_467_;
v___y_420_ = v_a_471_;
v___y_421_ = v_a_469_;
v___y_422_ = v___y_449_;
v___y_423_ = v___x_474_;
goto v___jp_417_;
}
else
{
size_t v___x_475_; size_t v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_ptr_addr(v_body_466_);
v___x_476_ = lean_ptr_addr(v_a_471_);
v___x_477_ = lean_usize_dec_eq(v___x_475_, v___x_476_);
v___y_418_ = v_binderName_464_;
v___y_419_ = v_binderInfo_467_;
v___y_420_ = v_a_471_;
v___y_421_ = v_a_469_;
v___y_422_ = v___y_449_;
v___y_423_ = v___x_477_;
goto v___jp_417_;
}
}
else
{
lean_dec(v_a_469_);
lean_dec_ref(v___y_449_);
lean_dec(v_binderName_464_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_470_;
}
}
else
{
lean_dec_ref(v___y_449_);
lean_dec(v_binderName_464_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_468_;
}
}
case 8:
{
lean_object* v_declName_478_; lean_object* v_type_479_; lean_object* v_value_480_; lean_object* v_body_481_; uint8_t v_nondep_482_; lean_object* v___x_483_; 
v_declName_478_ = lean_ctor_get(v___y_449_, 0);
lean_inc(v_declName_478_);
v_type_479_ = lean_ctor_get(v___y_449_, 1);
v_value_480_ = lean_ctor_get(v___y_449_, 2);
v_body_481_ = lean_ctor_get(v___y_449_, 3);
lean_inc_ref(v_body_481_);
v_nondep_482_ = lean_ctor_get_uint8(v___y_449_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_479_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_483_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_type_479_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_485_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_a_484_);
lean_dec_ref(v___x_483_);
lean_inc_ref(v_value_480_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_485_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_value_480_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_487_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref(v___x_485_);
lean_inc_ref(v_body_481_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_487_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_body_481_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; size_t v___x_489_; size_t v___x_490_; uint8_t v___x_491_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref(v___x_487_);
v___x_489_ = lean_ptr_addr(v_type_479_);
v___x_490_ = lean_ptr_addr(v_a_484_);
v___x_491_ = lean_usize_dec_eq(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
v___y_401_ = v_a_484_;
v___y_402_ = v_body_481_;
v___y_403_ = v_a_486_;
v___y_404_ = v___y_449_;
v___y_405_ = v_nondep_482_;
v___y_406_ = v_a_488_;
v___y_407_ = v_declName_478_;
v___y_408_ = v___x_491_;
goto v___jp_400_;
}
else
{
size_t v___x_492_; size_t v___x_493_; uint8_t v___x_494_; 
v___x_492_ = lean_ptr_addr(v_value_480_);
v___x_493_ = lean_ptr_addr(v_a_486_);
v___x_494_ = lean_usize_dec_eq(v___x_492_, v___x_493_);
v___y_401_ = v_a_484_;
v___y_402_ = v_body_481_;
v___y_403_ = v_a_486_;
v___y_404_ = v___y_449_;
v___y_405_ = v_nondep_482_;
v___y_406_ = v_a_488_;
v___y_407_ = v_declName_478_;
v___y_408_ = v___x_494_;
goto v___jp_400_;
}
}
else
{
lean_dec(v_a_486_);
lean_dec(v_a_484_);
lean_dec_ref(v_body_481_);
lean_dec_ref(v___y_449_);
lean_dec(v_declName_478_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_487_;
}
}
else
{
lean_dec(v_a_484_);
lean_dec_ref(v_body_481_);
lean_dec_ref(v___y_449_);
lean_dec(v_declName_478_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_485_;
}
}
else
{
lean_dec_ref(v_body_481_);
lean_dec_ref(v___y_449_);
lean_dec(v_declName_478_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_483_;
}
}
case 5:
{
lean_object* v_dummy_495_; lean_object* v_nargs_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_dummy_495_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0);
v_nargs_496_ = l_Lean_Expr_getAppNumArgs(v___y_449_);
lean_inc(v_nargs_496_);
v___x_497_ = lean_mk_array(v_nargs_496_, v_dummy_495_);
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_nat_sub(v_nargs_496_, v___x_498_);
lean_dec(v_nargs_496_);
v___x_500_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(v_pre_393_, v_post_395_, v___y_449_, v___x_497_, v___x_499_, v___y_396_, v___y_397_, v___y_398_);
return v___x_500_;
}
case 10:
{
lean_object* v_data_501_; lean_object* v_expr_502_; lean_object* v___x_503_; 
v_data_501_ = lean_ctor_get(v___y_449_, 0);
v_expr_502_ = lean_ctor_get(v___y_449_, 1);
lean_inc_ref(v_expr_502_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_503_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_expr_502_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; size_t v___x_505_; size_t v___x_506_; uint8_t v___x_507_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref(v___x_503_);
v___x_505_ = lean_ptr_addr(v_expr_502_);
v___x_506_ = lean_ptr_addr(v_a_504_);
v___x_507_ = lean_usize_dec_eq(v___x_505_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_inc(v_data_501_);
lean_dec_ref(v___y_449_);
v___x_508_ = l_Lean_Expr_mdata___override(v_data_501_, v_a_504_);
v___x_509_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_508_, v___y_396_, v___y_397_, v___y_398_);
return v___x_509_;
}
else
{
lean_object* v___x_510_; 
lean_dec(v_a_504_);
v___x_510_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___y_449_, v___y_396_, v___y_397_, v___y_398_);
return v___x_510_;
}
}
else
{
lean_dec_ref(v___y_449_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_503_;
}
}
case 11:
{
lean_object* v_typeName_511_; lean_object* v_idx_512_; lean_object* v_struct_513_; lean_object* v___x_514_; 
v_typeName_511_ = lean_ctor_get(v___y_449_, 0);
v_idx_512_ = lean_ctor_get(v___y_449_, 1);
v_struct_513_ = lean_ctor_get(v___y_449_, 2);
lean_inc_ref(v_struct_513_);
lean_inc_ref(v_post_395_);
lean_inc_ref(v_pre_393_);
v___x_514_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_393_, v_post_395_, v_struct_513_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; size_t v___x_516_; size_t v___x_517_; uint8_t v___x_518_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref(v___x_514_);
v___x_516_ = lean_ptr_addr(v_struct_513_);
v___x_517_ = lean_ptr_addr(v_a_515_);
v___x_518_ = lean_usize_dec_eq(v___x_516_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; 
lean_inc(v_idx_512_);
lean_inc(v_typeName_511_);
lean_dec_ref(v___y_449_);
v___x_519_ = l_Lean_Expr_proj___override(v_typeName_511_, v_idx_512_, v_a_515_);
v___x_520_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_519_, v___y_396_, v___y_397_, v___y_398_);
return v___x_520_;
}
else
{
lean_object* v___x_521_; 
lean_dec(v_a_515_);
v___x_521_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___y_449_, v___y_396_, v___y_397_, v___y_398_);
return v___x_521_;
}
}
else
{
lean_dec_ref(v___y_449_);
lean_dec_ref(v_post_395_);
lean_dec_ref(v_pre_393_);
return v___x_514_;
}
}
default: 
{
lean_object* v___x_522_; 
v___x_522_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___y_449_, v___y_396_, v___y_397_, v___y_398_);
return v___x_522_;
}
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec_ref(v_post_395_);
lean_dec_ref(v_e_394_);
lean_dec_ref(v_pre_393_);
v_a_534_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_443_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_443_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
v___jp_400_:
{
if (v___y_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec_ref(v___y_404_);
lean_dec_ref(v___y_402_);
v___x_409_ = l_Lean_Expr_letE___override(v___y_407_, v___y_401_, v___y_403_, v___y_406_, v___y_405_);
v___x_410_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_409_, v___y_396_, v___y_397_, v___y_398_);
return v___x_410_;
}
else
{
size_t v___x_411_; size_t v___x_412_; uint8_t v___x_413_; 
v___x_411_ = lean_ptr_addr(v___y_402_);
lean_dec_ref(v___y_402_);
v___x_412_ = lean_ptr_addr(v___y_406_);
v___x_413_ = lean_usize_dec_eq(v___x_411_, v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec_ref(v___y_404_);
v___x_414_ = l_Lean_Expr_letE___override(v___y_407_, v___y_401_, v___y_403_, v___y_406_, v___y_405_);
v___x_415_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_414_, v___y_396_, v___y_397_, v___y_398_);
return v___x_415_;
}
else
{
lean_object* v___x_416_; 
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec_ref(v___y_403_);
lean_dec_ref(v___y_401_);
v___x_416_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___y_404_, v___y_396_, v___y_397_, v___y_398_);
return v___x_416_;
}
}
}
v___jp_417_:
{
if (v___y_423_ == 0)
{
lean_object* v___x_424_; lean_object* v___x_425_; 
lean_dec_ref(v___y_422_);
v___x_424_ = l_Lean_Expr_lam___override(v___y_418_, v___y_421_, v___y_420_, v___y_419_);
v___x_425_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_424_, v___y_396_, v___y_397_, v___y_398_);
return v___x_425_;
}
else
{
uint8_t v___x_426_; 
v___x_426_ = l_Lean_instBEqBinderInfo_beq(v___y_419_, v___y_419_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec_ref(v___y_422_);
v___x_427_ = l_Lean_Expr_lam___override(v___y_418_, v___y_421_, v___y_420_, v___y_419_);
v___x_428_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_427_, v___y_396_, v___y_397_, v___y_398_);
return v___x_428_;
}
else
{
lean_object* v___x_429_; 
lean_dec_ref(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_418_);
v___x_429_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___y_422_, v___y_396_, v___y_397_, v___y_398_);
return v___x_429_;
}
}
}
v___jp_430_:
{
if (v___y_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
lean_dec_ref(v___y_433_);
v___x_437_ = l_Lean_Expr_forallE___override(v___y_435_, v___y_432_, v___y_431_, v___y_434_);
v___x_438_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_437_, v___y_396_, v___y_397_, v___y_398_);
return v___x_438_;
}
else
{
uint8_t v___x_439_; 
v___x_439_ = l_Lean_instBEqBinderInfo_beq(v___y_434_, v___y_434_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec_ref(v___y_433_);
v___x_440_ = l_Lean_Expr_forallE___override(v___y_435_, v___y_432_, v___y_431_, v___y_434_);
v___x_441_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___x_440_, v___y_396_, v___y_397_, v___y_398_);
return v___x_441_;
}
else
{
lean_object* v___x_442_; 
lean_dec(v___y_435_);
lean_dec_ref(v___y_432_);
lean_dec_ref(v___y_431_);
v___x_442_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_393_, v_post_395_, v___y_433_, v___y_396_, v___y_397_, v___y_398_);
return v___x_442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed(lean_object* v_pre_542_, lean_object* v_e_543_, lean_object* v_post_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(v_pre_542_, v_e_543_, v_post_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(lean_object* v_pre_550_, lean_object* v_post_551_, lean_object* v_e_552_, lean_object* v_a_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_inc(v_a_553_);
v___x_557_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_557_, 0, lean_box(0));
lean_closure_set(v___x_557_, 1, lean_box(0));
lean_closure_set(v___x_557_, 2, v_a_553_);
v___x_558_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_box(0), v___x_557_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_589_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_589_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_589_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_589_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; 
v___x_563_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(v_a_559_, v_e_552_);
lean_dec(v_a_559_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v___f_564_; lean_object* v___x_565_; 
lean_del_object(v___x_561_);
lean_inc_ref(v_e_552_);
v___f_564_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed), 7, 3);
lean_closure_set(v___f_564_, 0, v_pre_550_);
lean_closure_set(v___f_564_, 1, v_e_552_);
lean_closure_set(v___f_564_, 2, v_post_551_);
v___x_565_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v___f_564_, v_a_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___f_567_; lean_object* v___x_568_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc_n(v_a_566_, 2);
lean_dec_ref(v___x_565_);
lean_inc(v_a_553_);
v___f_567_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_567_, 0, v_a_553_);
lean_closure_set(v___f_567_, 1, v_e_552_);
lean_closure_set(v___f_567_, 2, v_a_566_);
v___x_568_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_box(0), v___f_567_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; 
v_unused_576_ = lean_ctor_get(v___x_568_, 0);
lean_dec(v_unused_576_);
v___x_570_ = v___x_568_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_dec(v___x_568_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 0, v_a_566_);
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_566_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec(v_a_566_);
v_a_577_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_568_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_568_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
else
{
lean_dec_ref(v_e_552_);
return v___x_565_;
}
}
else
{
lean_object* v_val_585_; lean_object* v___x_587_; 
lean_dec_ref(v_e_552_);
lean_dec_ref(v_post_551_);
lean_dec_ref(v_pre_550_);
v_val_585_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_val_585_);
lean_dec_ref(v___x_563_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v_val_585_);
v___x_587_ = v___x_561_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_val_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref(v_e_552_);
lean_dec_ref(v_post_551_);
lean_dec_ref(v_pre_550_);
v_a_590_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_558_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_558_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(lean_object* v_pre_598_, lean_object* v_post_599_, lean_object* v_e_600_, lean_object* v_a_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v___x_605_; 
lean_inc_ref(v_post_599_);
lean_inc(v___y_603_);
lean_inc_ref(v___y_602_);
lean_inc_ref(v_e_600_);
v___x_605_ = lean_apply_4(v_post_599_, v_e_600_, v___y_602_, v___y_603_, lean_box(0));
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_624_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_624_ == 0)
{
v___x_608_ = v___x_605_;
v_isShared_609_ = v_isSharedCheck_624_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_624_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
switch(lean_obj_tag(v_a_606_))
{
case 0:
{
lean_object* v_e_610_; lean_object* v___x_612_; 
lean_dec_ref(v_e_600_);
lean_dec_ref(v_post_599_);
lean_dec_ref(v_pre_598_);
v_e_610_ = lean_ctor_get(v_a_606_, 0);
lean_inc_ref(v_e_610_);
lean_dec_ref(v_a_606_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_e_610_);
v___x_612_ = v___x_608_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_e_610_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
case 1:
{
lean_object* v_e_614_; lean_object* v___x_615_; 
lean_del_object(v___x_608_);
lean_dec_ref(v_e_600_);
v_e_614_ = lean_ctor_get(v_a_606_, 0);
lean_inc_ref(v_e_614_);
lean_dec_ref(v_a_606_);
v___x_615_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_598_, v_post_599_, v_e_614_, v_a_601_, v___y_602_, v___y_603_);
return v___x_615_;
}
default: 
{
lean_object* v_e_x3f_616_; 
lean_dec_ref(v_post_599_);
lean_dec_ref(v_pre_598_);
v_e_x3f_616_ = lean_ctor_get(v_a_606_, 0);
lean_inc(v_e_x3f_616_);
lean_dec_ref(v_a_606_);
if (lean_obj_tag(v_e_x3f_616_) == 0)
{
lean_object* v___x_618_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_e_600_);
v___x_618_ = v___x_608_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_e_600_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
else
{
lean_object* v_val_620_; lean_object* v___x_622_; 
lean_dec_ref(v_e_600_);
v_val_620_ = lean_ctor_get(v_e_x3f_616_, 0);
lean_inc(v_val_620_);
lean_dec_ref(v_e_x3f_616_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_val_620_);
v___x_622_ = v___x_608_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_val_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref(v_e_600_);
lean_dec_ref(v_post_599_);
lean_dec_ref(v_pre_598_);
v_a_625_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_605_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_605_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_633_, lean_object* v_post_634_, lean_object* v_e_635_, lean_object* v_a_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_633_, v_post_634_, v_e_635_, v_a_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v_a_636_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_641_, lean_object* v_post_642_, lean_object* v_sz_643_, lean_object* v_i_644_, lean_object* v_bs_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
size_t v_sz_boxed_650_; size_t v_i_boxed_651_; lean_object* v_res_652_; 
v_sz_boxed_650_ = lean_unbox_usize(v_sz_643_);
lean_dec(v_sz_643_);
v_i_boxed_651_ = lean_unbox_usize(v_i_644_);
lean_dec(v_i_644_);
v_res_652_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(v_pre_641_, v_post_642_, v_sz_boxed_650_, v_i_boxed_651_, v_bs_645_, v___y_646_, v___y_647_, v___y_648_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_653_, lean_object* v_post_654_, lean_object* v_x_655_, lean_object* v_x_656_, lean_object* v_x_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(v_pre_653_, v_post_654_, v_x_655_, v_x_656_, v_x_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___boxed(lean_object* v_pre_663_, lean_object* v_post_664_, lean_object* v_e_665_, lean_object* v_a_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_663_, v_post_664_, v_e_665_, v_a_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v_a_666_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_object* v_00_u03b1_671_, lean_object* v_x_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_apply_1(v_x_672_, lean_box(0));
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0___boxed(lean_object* v_00_u03b1_678_, lean_object* v_x_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(v_00_u03b1_678_, v_x_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
return v_res_683_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_box(0);
v___x_685_ = lean_unsigned_to_nat(16u);
v___x_686_ = lean_mk_array(v___x_685_, v___x_684_);
return v___x_686_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_687_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___x_687_);
return v___x_689_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1);
v___x_691_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_691_, 0, lean_box(0));
lean_closure_set(v___x_691_, 1, lean_box(0));
lean_closure_set(v___x_691_, 2, v___x_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(lean_object* v_input_692_, lean_object* v_pre_693_, lean_object* v_post_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v_a_700_; lean_object* v___x_701_; 
v___x_698_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2);
v___x_699_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_box(0), v___x_698_, v___y_695_, v___y_696_);
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref(v___x_699_);
v___x_701_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_693_, v_post_694_, v_input_692_, v_a_700_, v___y_695_, v___y_696_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref(v___x_701_);
v___x_703_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_703_, 0, lean_box(0));
lean_closure_set(v___x_703_, 1, lean_box(0));
lean_closure_set(v___x_703_, 2, v_a_700_);
v___x_704_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_box(0), v___x_703_, v___y_695_, v___y_696_);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v___x_704_, 0);
lean_dec(v_unused_712_);
v___x_706_ = v___x_704_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_dec(v___x_704_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v_a_702_);
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_702_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
else
{
lean_dec(v_a_700_);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___boxed(lean_object* v_input_713_, lean_object* v_pre_714_, lean_object* v_post_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(v_input_713_, v_pre_714_, v_post_715_, v___y_716_, v___y_717_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam(lean_object* v_type_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v___f_726_; lean_object* v___f_727_; lean_object* v___x_728_; 
v___f_726_ = ((lean_object*)(l_Lean_Meta_elimOptParam___closed__0));
v___f_727_ = ((lean_object*)(l_Lean_Meta_elimOptParam___closed__1));
v___x_728_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(v_type_722_, v___f_726_, v___f_727_, v_a_723_, v_a_724_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___boxed(lean_object* v_type_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Meta_elimOptParam(v_type_729_, v_a_730_, v_a_731_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_734_, lean_object* v_m_735_, lean_object* v_a_736_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(v_m_735_, v_a_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_738_, lean_object* v_m_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_00_u03b2_738_, v_m_739_, v_a_740_);
lean_dec_ref(v_a_740_);
lean_dec_ref(v_m_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_742_, lean_object* v_ref_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_743_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_748_, lean_object* v_ref_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_748_, v_ref_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_754_, lean_object* v_x_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v_x_755_, v___y_756_, v___y_757_, v___y_758_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_761_, lean_object* v_x_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(v_00_u03b1_761_, v_x_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_768_, lean_object* v_m_769_, lean_object* v_a_770_, lean_object* v_b_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(v_m_769_, v_a_770_, v_b_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_773_, lean_object* v_a_774_, lean_object* v_x_775_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(v_a_774_, v_x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_777_, lean_object* v_a_778_, lean_object* v_x_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_777_, v_a_778_, v_x_779_);
lean_dec(v_x_779_);
lean_dec_ref(v_a_778_);
return v_res_780_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9(lean_object* v_00_u03b2_781_, lean_object* v_a_782_, lean_object* v_x_783_){
_start:
{
uint8_t v___x_784_; 
v___x_784_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___redArg(v_a_782_, v_x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9___boxed(lean_object* v_00_u03b2_785_, lean_object* v_a_786_, lean_object* v_x_787_){
_start:
{
uint8_t v_res_788_; lean_object* v_r_789_; 
v_res_788_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__9(v_00_u03b2_785_, v_a_786_, v_x_787_);
lean_dec(v_x_787_);
lean_dec_ref(v_a_786_);
v_r_789_ = lean_box(v_res_788_);
return v_r_789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_790_, lean_object* v_data_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_data_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_793_, lean_object* v_a_794_, lean_object* v_b_795_, lean_object* v_x_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_a_794_, v_b_795_, v_x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object* v_00_u03b2_798_, lean_object* v_i_799_, lean_object* v_source_800_, lean_object* v_target_801_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v_i_799_, v_source_800_, v_target_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_x_804_, v_x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(uint8_t v_skipIfPropOrEq_807_, lean_object* v_as_808_, size_t v_sz_809_, size_t v_i_810_, lean_object* v_b_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_a_818_; uint8_t v___x_822_; 
v___x_822_ = lean_usize_dec_lt(v_i_810_, v_sz_809_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; 
v___x_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_823_, 0, v_b_811_);
return v___x_823_;
}
else
{
lean_object* v_snd_824_; lean_object* v_fst_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_903_; 
v_snd_824_ = lean_ctor_get(v_b_811_, 1);
v_fst_825_ = lean_ctor_get(v_b_811_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v_b_811_);
if (v_isSharedCheck_903_ == 0)
{
v___x_827_ = v_b_811_;
v_isShared_828_ = v_isSharedCheck_903_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_snd_824_);
lean_inc(v_fst_825_);
lean_dec(v_b_811_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_903_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_array_829_; lean_object* v_start_830_; lean_object* v_stop_831_; uint8_t v___x_832_; 
v_array_829_ = lean_ctor_get(v_snd_824_, 0);
v_start_830_ = lean_ctor_get(v_snd_824_, 1);
v_stop_831_ = lean_ctor_get(v_snd_824_, 2);
v___x_832_ = lean_nat_dec_lt(v_start_830_, v_stop_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_834_; 
if (v_isShared_828_ == 0)
{
v___x_834_ = v___x_827_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_fst_825_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_snd_824_);
v___x_834_ = v_reuseFailAlloc_836_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_835_; 
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
}
else
{
lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_899_; 
lean_inc(v_stop_831_);
lean_inc(v_start_830_);
lean_inc_ref(v_array_829_);
v_isSharedCheck_899_ = !lean_is_exclusive(v_snd_824_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; lean_object* v_unused_901_; lean_object* v_unused_902_; 
v_unused_900_ = lean_ctor_get(v_snd_824_, 2);
lean_dec(v_unused_900_);
v_unused_901_ = lean_ctor_get(v_snd_824_, 1);
lean_dec(v_unused_901_);
v_unused_902_ = lean_ctor_get(v_snd_824_, 0);
lean_dec(v_unused_902_);
v___x_838_ = v_snd_824_;
v_isShared_839_ = v_isSharedCheck_899_;
goto v_resetjp_837_;
}
else
{
lean_dec(v_snd_824_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_899_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v_a_840_; lean_object* v___x_841_; 
v_a_840_ = lean_array_uget_borrowed(v_as_808_, v_i_810_);
lean_inc(v___y_815_);
lean_inc_ref(v___y_814_);
lean_inc(v___y_813_);
lean_inc_ref(v___y_812_);
lean_inc(v_a_840_);
v___x_841_ = lean_infer_type(v_a_840_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref(v___x_841_);
v___x_843_ = lean_array_fget(v_array_829_, v_start_830_);
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = lean_nat_add(v_start_830_, v___x_844_);
lean_dec(v_start_830_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 1, v___x_845_);
v___x_847_ = v___x_838_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_array_829_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v___x_845_);
lean_ctor_set(v_reuseFailAlloc_890_, 2, v_stop_831_);
v___x_847_ = v_reuseFailAlloc_890_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
if (v_skipIfPropOrEq_807_ == 0)
{
lean_object* v___x_848_; 
lean_dec(v_a_842_);
lean_inc(v_a_840_);
v___x_848_ = l_Lean_Meta_mkEqHEq(v_a_840_, v___x_843_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_a_849_);
lean_dec_ref(v___x_848_);
v___x_850_ = lean_array_push(v_fst_825_, v_a_849_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 1, v___x_847_);
lean_ctor_set(v___x_827_, 0, v___x_850_);
v___x_852_ = v___x_827_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_850_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v___x_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
v_a_818_ = v___x_852_;
goto v___jp_817_;
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_dec_ref(v___x_847_);
lean_del_object(v___x_827_);
lean_dec(v_fst_825_);
v_a_854_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_848_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_848_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_Meta_isProp(v_a_842_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; uint8_t v___x_868_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref(v___x_862_);
v___x_868_ = lean_unbox(v_a_863_);
lean_dec(v_a_863_);
if (v___x_868_ == 0)
{
uint8_t v___x_869_; 
v___x_869_ = lean_expr_eqv(v_a_840_, v___x_843_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_del_object(v___x_827_);
lean_inc(v_a_840_);
v___x_870_ = l_Lean_Meta_mkEqHEq(v_a_840_, v___x_843_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref(v___x_870_);
v___x_872_ = lean_array_push(v_fst_825_, v_a_871_);
v___x_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_ctor_set(v___x_873_, 1, v___x_847_);
v_a_818_ = v___x_873_;
goto v___jp_817_;
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
lean_dec_ref(v___x_847_);
lean_dec(v_fst_825_);
v_a_874_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_870_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_870_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
else
{
lean_dec(v___x_843_);
goto v___jp_864_;
}
}
else
{
lean_dec(v___x_843_);
goto v___jp_864_;
}
v___jp_864_:
{
lean_object* v___x_866_; 
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 1, v___x_847_);
v___x_866_ = v___x_827_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_fst_825_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v___x_847_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
v_a_818_ = v___x_866_;
goto v___jp_817_;
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec_ref(v___x_847_);
lean_dec(v___x_843_);
lean_del_object(v___x_827_);
lean_dec(v_fst_825_);
v_a_882_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_862_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_862_);
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
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_del_object(v___x_838_);
lean_dec(v_stop_831_);
lean_dec(v_start_830_);
lean_dec_ref(v_array_829_);
lean_del_object(v___x_827_);
lean_dec(v_fst_825_);
v_a_891_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_841_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_841_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
}
}
v___jp_817_:
{
size_t v___x_819_; size_t v___x_820_; 
v___x_819_ = ((size_t)1ULL);
v___x_820_ = lean_usize_add(v_i_810_, v___x_819_);
v_i_810_ = v___x_820_;
v_b_811_ = v_a_818_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0___boxed(lean_object* v_skipIfPropOrEq_904_, lean_object* v_as_905_, lean_object* v_sz_906_, lean_object* v_i_907_, lean_object* v_b_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
uint8_t v_skipIfPropOrEq_boxed_914_; size_t v_sz_boxed_915_; size_t v_i_boxed_916_; lean_object* v_res_917_; 
v_skipIfPropOrEq_boxed_914_ = lean_unbox(v_skipIfPropOrEq_904_);
v_sz_boxed_915_ = lean_unbox_usize(v_sz_906_);
lean_dec(v_sz_906_);
v_i_boxed_916_ = lean_unbox_usize(v_i_907_);
lean_dec(v_i_907_);
v_res_917_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(v_skipIfPropOrEq_boxed_914_, v_as_905_, v_sz_boxed_915_, v_i_boxed_916_, v_b_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec_ref(v_as_905_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(lean_object* v_args1_920_, lean_object* v_args2_921_, uint8_t v_skipIfPropOrEq_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; lean_object* v_eqs_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; size_t v_sz_933_; size_t v___x_934_; lean_object* v___x_935_; 
v___x_928_ = lean_unsigned_to_nat(0u);
v_eqs_929_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_930_ = lean_array_get_size(v_args2_921_);
v___x_931_ = l_Array_toSubarray___redArg(v_args2_921_, v___x_928_, v___x_930_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_eqs_929_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v_sz_933_ = lean_array_size(v_args1_920_);
v___x_934_ = ((size_t)0ULL);
v___x_935_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(v_skipIfPropOrEq_922_, v_args1_920_, v_sz_933_, v___x_934_, v___x_932_, v_a_923_, v_a_924_, v_a_925_, v_a_926_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_944_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_944_ == 0)
{
v___x_938_ = v___x_935_;
v_isShared_939_ = v_isSharedCheck_944_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_944_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v_fst_940_; lean_object* v___x_942_; 
v_fst_940_ = lean_ctor_get(v_a_936_, 0);
lean_inc(v_fst_940_);
lean_dec(v_a_936_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v_fst_940_);
v___x_942_ = v___x_938_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_fst_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
v_a_945_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_935_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_935_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___boxed(lean_object* v_args1_953_, lean_object* v_args2_954_, lean_object* v_skipIfPropOrEq_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
uint8_t v_skipIfPropOrEq_boxed_961_; lean_object* v_res_962_; 
v_skipIfPropOrEq_boxed_961_ = lean_unbox(v_skipIfPropOrEq_955_);
v_res_962_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_953_, v_args2_954_, v_skipIfPropOrEq_boxed_961_, v_a_956_, v_a_957_, v_a_958_, v_a_959_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec_ref(v_args1_953_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(lean_object* v_k_963_, lean_object* v_b_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; 
lean_inc(v___y_968_);
lean_inc_ref(v___y_967_);
lean_inc(v___y_966_);
lean_inc_ref(v___y_965_);
v___x_970_ = lean_apply_6(v_k_963_, v_b_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, lean_box(0));
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed(lean_object* v_k_971_, lean_object* v_b_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(v_k_971_, v_b_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(lean_object* v_name_979_, uint8_t v_bi_980_, lean_object* v_type_981_, lean_object* v_k_982_, uint8_t v_kind_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v___f_989_; lean_object* v___x_990_; 
v___f_989_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_989_, 0, v_k_982_);
v___x_990_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_979_, v_bi_980_, v_type_981_, v___f_989_, v_kind_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
v_a_999_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_990_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_990_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___boxed(lean_object* v_name_1007_, lean_object* v_bi_1008_, lean_object* v_type_1009_, lean_object* v_k_1010_, lean_object* v_kind_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
uint8_t v_bi_boxed_1017_; uint8_t v_kind_boxed_1018_; lean_object* v_res_1019_; 
v_bi_boxed_1017_ = lean_unbox(v_bi_1008_);
v_kind_boxed_1018_ = lean_unbox(v_kind_1011_);
v_res_1019_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_name_1007_, v_bi_boxed_1017_, v_type_1009_, v_k_1010_, v_kind_boxed_1018_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(lean_object* v_00_u03b1_1020_, lean_object* v_name_1021_, uint8_t v_bi_1022_, lean_object* v_type_1023_, lean_object* v_k_1024_, uint8_t v_kind_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_name_1021_, v_bi_1022_, v_type_1023_, v_k_1024_, v_kind_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___boxed(lean_object* v_00_u03b1_1032_, lean_object* v_name_1033_, lean_object* v_bi_1034_, lean_object* v_type_1035_, lean_object* v_k_1036_, lean_object* v_kind_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v_bi_boxed_1043_; uint8_t v_kind_boxed_1044_; lean_object* v_res_1045_; 
v_bi_boxed_1043_ = lean_unbox(v_bi_1034_);
v_kind_boxed_1044_ = lean_unbox(v_kind_1037_);
v_res_1045_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(v_00_u03b1_1032_, v_name_1033_, v_bi_boxed_1043_, v_type_1035_, v_k_1036_, v_kind_boxed_1044_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(lean_object* v_msgData_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; lean_object* v_env_1053_; lean_object* v___x_1054_; lean_object* v_mctx_1055_; lean_object* v_lctx_1056_; lean_object* v_options_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1052_ = lean_st_ref_get(v___y_1050_);
v_env_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc_ref(v_env_1053_);
lean_dec(v___x_1052_);
v___x_1054_ = lean_st_ref_get(v___y_1048_);
v_mctx_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc_ref(v_mctx_1055_);
lean_dec(v___x_1054_);
v_lctx_1056_ = lean_ctor_get(v___y_1047_, 2);
v_options_1057_ = lean_ctor_get(v___y_1049_, 2);
lean_inc_ref(v_options_1057_);
lean_inc_ref(v_lctx_1056_);
v___x_1058_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1058_, 0, v_env_1053_);
lean_ctor_set(v___x_1058_, 1, v_mctx_1055_);
lean_ctor_set(v___x_1058_, 2, v_lctx_1056_);
lean_ctor_set(v___x_1058_, 3, v_options_1057_);
v___x_1059_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v_msgData_1046_);
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1___boxed(lean_object* v_msgData_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msgData_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(lean_object* v_msg_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_ref_1074_; lean_object* v___x_1075_; lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1084_; 
v_ref_1074_ = lean_ctor_get(v___y_1071_, 5);
v___x_1075_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1084_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1084_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1080_; lean_object* v___x_1082_; 
lean_inc(v_ref_1074_);
v___x_1080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1080_, 0, v_ref_1074_);
lean_ctor_set(v___x_1080_, 1, v_a_1076_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set_tag(v___x_1078_, 1);
lean_ctor_set(v___x_1078_, 0, v___x_1080_);
v___x_1082_ = v___x_1078_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg___boxed(lean_object* v_msg_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed(lean_object* v_i_1092_, lean_object* v_body_1093_, lean_object* v_args2_1094_, lean_object* v_args2New_1095_, lean_object* v_ctorVal_1096_, lean_object* v_useEq_1097_, lean_object* v_args1_1098_, lean_object* v_resultType_1099_, lean_object* v_k_1100_, lean_object* v_arg2_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
uint8_t v_useEq_boxed_1107_; lean_object* v_res_1108_; 
v_useEq_boxed_1107_ = lean_unbox(v_useEq_1097_);
v_res_1108_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(v_i_1092_, v_body_1093_, v_args2_1094_, v_args2New_1095_, v_ctorVal_1096_, v_useEq_boxed_1107_, v_args1_1098_, v_resultType_1099_, v_k_1100_, v_arg2_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_body_1093_);
lean_dec(v_i_1092_);
return v_res_1108_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0));
v___x_1111_ = l_Lean_stringToMessageData(v___x_1110_);
return v___x_1111_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2));
v___x_1114_ = l_Lean_stringToMessageData(v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(lean_object* v_ctorVal_1115_, uint8_t v_useEq_1116_, lean_object* v_args1_1117_, lean_object* v_resultType_1118_, lean_object* v_k_1119_, lean_object* v_i_1120_, lean_object* v_type_1121_, lean_object* v_args2_1122_, lean_object* v_args2New_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1129_ = lean_array_get_size(v_args1_1117_);
v___x_1130_ = lean_nat_dec_lt(v_i_1120_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; 
lean_dec_ref(v_type_1121_);
lean_dec(v_i_1120_);
lean_dec_ref(v_resultType_1118_);
lean_dec_ref(v_args1_1117_);
lean_dec_ref(v_ctorVal_1115_);
lean_inc(v_a_1127_);
lean_inc_ref(v_a_1126_);
lean_inc(v_a_1125_);
lean_inc_ref(v_a_1124_);
v___x_1131_ = lean_apply_7(v_k_1119_, v_args2_1122_, v_args2New_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, lean_box(0));
return v___x_1131_;
}
else
{
lean_object* v___x_1132_; 
lean_inc(v_a_1127_);
lean_inc_ref(v_a_1126_);
lean_inc(v_a_1125_);
lean_inc_ref(v_a_1124_);
v___x_1132_ = lean_whnf(v_type_1121_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1133_);
lean_dec_ref(v___x_1132_);
if (lean_obj_tag(v_a_1133_) == 7)
{
lean_object* v_binderName_1134_; lean_object* v_binderType_1135_; lean_object* v_body_1136_; lean_object* v_lctx_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v_binderName_1134_ = lean_ctor_get(v_a_1133_, 0);
lean_inc(v_binderName_1134_);
v_binderType_1135_ = lean_ctor_get(v_a_1133_, 1);
lean_inc_ref(v_binderType_1135_);
v_body_1136_ = lean_ctor_get(v_a_1133_, 2);
lean_inc_ref(v_body_1136_);
lean_dec_ref(v_a_1133_);
v_lctx_1137_ = lean_ctor_get(v_a_1124_, 2);
v___x_1138_ = lean_array_fget_borrowed(v_args1_1117_, v_i_1120_);
lean_inc(v___x_1138_);
lean_inc_ref(v_lctx_1137_);
v___x_1139_ = l_Lean_Meta_occursOrInType(v_lctx_1137_, v___x_1138_, v_resultType_1118_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___f_1141_; uint8_t v___y_1143_; 
v___x_1140_ = lean_box(v_useEq_1116_);
v___f_1141_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1141_, 0, v_i_1120_);
lean_closure_set(v___f_1141_, 1, v_body_1136_);
lean_closure_set(v___f_1141_, 2, v_args2_1122_);
lean_closure_set(v___f_1141_, 3, v_args2New_1123_);
lean_closure_set(v___f_1141_, 4, v_ctorVal_1115_);
lean_closure_set(v___f_1141_, 5, v___x_1140_);
lean_closure_set(v___f_1141_, 6, v_args1_1117_);
lean_closure_set(v___f_1141_, 7, v_resultType_1118_);
lean_closure_set(v___f_1141_, 8, v_k_1119_);
if (v_useEq_1116_ == 0)
{
uint8_t v___x_1146_; 
v___x_1146_ = 1;
v___y_1143_ = v___x_1146_;
goto v___jp_1142_;
}
else
{
uint8_t v___x_1147_; 
v___x_1147_ = 0;
v___y_1143_ = v___x_1147_;
goto v___jp_1142_;
}
v___jp_1142_:
{
uint8_t v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = 0;
v___x_1145_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_binderName_1134_, v___y_1143_, v_binderType_1135_, v___f_1141_, v___x_1144_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_);
return v___x_1145_;
}
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_dec_ref(v_binderType_1135_);
lean_dec(v_binderName_1134_);
v___x_1148_ = lean_unsigned_to_nat(1u);
v___x_1149_ = lean_nat_add(v_i_1120_, v___x_1148_);
lean_dec(v_i_1120_);
v___x_1150_ = lean_expr_instantiate1(v_body_1136_, v___x_1138_);
lean_dec_ref(v_body_1136_);
lean_inc(v___x_1138_);
v___x_1151_ = lean_array_push(v_args2_1122_, v___x_1138_);
v_i_1120_ = v___x_1149_;
v_type_1121_ = v___x_1150_;
v_args2_1122_ = v___x_1151_;
goto _start;
}
}
else
{
lean_object* v_toConstantVal_1153_; lean_object* v_name_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
lean_dec(v_a_1133_);
lean_dec_ref(v_args2New_1123_);
lean_dec_ref(v_args2_1122_);
lean_dec(v_i_1120_);
lean_dec_ref(v_k_1119_);
lean_dec_ref(v_resultType_1118_);
lean_dec_ref(v_args1_1117_);
v_toConstantVal_1153_ = lean_ctor_get(v_ctorVal_1115_, 0);
lean_inc_ref(v_toConstantVal_1153_);
lean_dec_ref(v_ctorVal_1115_);
v_name_1154_ = lean_ctor_get(v_toConstantVal_1153_, 0);
lean_inc(v_name_1154_);
lean_dec_ref(v_toConstantVal_1153_);
v___x_1155_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1);
v___x_1156_ = l_Lean_MessageData_ofName(v_name_1154_);
v___x_1157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_1159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1157_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_1159_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_);
return v___x_1160_;
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec_ref(v_args2New_1123_);
lean_dec_ref(v_args2_1122_);
lean_dec(v_i_1120_);
lean_dec_ref(v_k_1119_);
lean_dec_ref(v_resultType_1118_);
lean_dec_ref(v_args1_1117_);
lean_dec_ref(v_ctorVal_1115_);
v_a_1161_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1132_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1132_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(lean_object* v_i_1169_, lean_object* v_body_1170_, lean_object* v_args2_1171_, lean_object* v_args2New_1172_, lean_object* v_ctorVal_1173_, uint8_t v_useEq_1174_, lean_object* v_args1_1175_, lean_object* v_resultType_1176_, lean_object* v_k_1177_, lean_object* v_arg2_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = lean_nat_add(v_i_1169_, v___x_1184_);
v___x_1186_ = lean_expr_instantiate1(v_body_1170_, v_arg2_1178_);
lean_inc_ref(v_arg2_1178_);
v___x_1187_ = lean_array_push(v_args2_1171_, v_arg2_1178_);
v___x_1188_ = lean_array_push(v_args2New_1172_, v_arg2_1178_);
v___x_1189_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1173_, v_useEq_1174_, v_args1_1175_, v_resultType_1176_, v_k_1177_, v___x_1185_, v___x_1186_, v___x_1187_, v___x_1188_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed(lean_object* v_ctorVal_1190_, lean_object* v_useEq_1191_, lean_object* v_args1_1192_, lean_object* v_resultType_1193_, lean_object* v_k_1194_, lean_object* v_i_1195_, lean_object* v_type_1196_, lean_object* v_args2_1197_, lean_object* v_args2New_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
uint8_t v_useEq_boxed_1204_; lean_object* v_res_1205_; 
v_useEq_boxed_1204_ = lean_unbox(v_useEq_1191_);
v_res_1205_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1190_, v_useEq_boxed_1204_, v_args1_1192_, v_resultType_1193_, v_k_1194_, v_i_1195_, v_type_1196_, v_args2_1197_, v_args2New_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
lean_dec(v_a_1200_);
lean_dec_ref(v_a_1199_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(lean_object* v_00_u03b1_1206_, lean_object* v_msg_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___boxed(lean_object* v_00_u03b1_1214_, lean_object* v_msg_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(v_00_u03b1_1214_, v_msg_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter___redArg(lean_object* v_____x_1222_, lean_object* v_h__1_1223_, lean_object* v_h__2_1224_){
_start:
{
if (lean_obj_tag(v_____x_1222_) == 7)
{
lean_object* v_binderName_1225_; lean_object* v_binderType_1226_; lean_object* v_body_1227_; uint8_t v_binderInfo_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec(v_h__2_1224_);
v_binderName_1225_ = lean_ctor_get(v_____x_1222_, 0);
lean_inc(v_binderName_1225_);
v_binderType_1226_ = lean_ctor_get(v_____x_1222_, 1);
lean_inc_ref(v_binderType_1226_);
v_body_1227_ = lean_ctor_get(v_____x_1222_, 2);
lean_inc_ref(v_body_1227_);
v_binderInfo_1228_ = lean_ctor_get_uint8(v_____x_1222_, sizeof(void*)*3 + 8);
lean_dec_ref(v_____x_1222_);
v___x_1229_ = lean_box(v_binderInfo_1228_);
v___x_1230_ = lean_apply_4(v_h__1_1223_, v_binderName_1225_, v_binderType_1226_, v_body_1227_, v___x_1229_);
return v___x_1230_;
}
else
{
lean_object* v___x_1231_; 
lean_dec(v_h__1_1223_);
v___x_1231_ = lean_apply_2(v_h__2_1224_, v_____x_1222_, lean_box(0));
return v___x_1231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter(lean_object* v_motive_1232_, lean_object* v_____x_1233_, lean_object* v_h__1_1234_, lean_object* v_h__2_1235_){
_start:
{
if (lean_obj_tag(v_____x_1233_) == 7)
{
lean_object* v_binderName_1236_; lean_object* v_binderType_1237_; lean_object* v_body_1238_; uint8_t v_binderInfo_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec(v_h__2_1235_);
v_binderName_1236_ = lean_ctor_get(v_____x_1233_, 0);
lean_inc(v_binderName_1236_);
v_binderType_1237_ = lean_ctor_get(v_____x_1233_, 1);
lean_inc_ref(v_binderType_1237_);
v_body_1238_ = lean_ctor_get(v_____x_1233_, 2);
lean_inc_ref(v_body_1238_);
v_binderInfo_1239_ = lean_ctor_get_uint8(v_____x_1233_, sizeof(void*)*3 + 8);
lean_dec_ref(v_____x_1233_);
v___x_1240_ = lean_box(v_binderInfo_1239_);
v___x_1241_ = lean_apply_4(v_h__1_1234_, v_binderName_1236_, v_binderType_1237_, v_body_1238_, v___x_1240_);
return v___x_1241_;
}
else
{
lean_object* v___x_1242_; 
lean_dec(v_h__1_1234_);
v___x_1242_ = lean_apply_2(v_h__2_1235_, v_____x_1233_, lean_box(0));
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(lean_object* v_k_1243_, lean_object* v_b_1244_, lean_object* v_c_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___x_1251_; 
lean_inc(v___y_1249_);
lean_inc_ref(v___y_1248_);
lean_inc(v___y_1247_);
lean_inc_ref(v___y_1246_);
v___x_1251_ = lean_apply_7(v_k_1243_, v_b_1244_, v_c_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, lean_box(0));
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed(lean_object* v_k_1252_, lean_object* v_b_1253_, lean_object* v_c_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(v_k_1252_, v_b_1253_, v_c_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(lean_object* v_type_1261_, lean_object* v_k_1262_, uint8_t v_cleanupAnnotations_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v___f_1269_; uint8_t v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___f_1269_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1269_, 0, v_k_1262_);
v___x_1270_ = 0;
v___x_1271_ = lean_box(0);
v___x_1272_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1270_, v___x_1271_, v_type_1261_, v___f_1269_, v_cleanupAnnotations_1263_, v___x_1270_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
v_a_1281_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1272_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1272_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___boxed(lean_object* v_type_1289_, lean_object* v_k_1290_, lean_object* v_cleanupAnnotations_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1297_; lean_object* v_res_1298_; 
v_cleanupAnnotations_boxed_1297_ = lean_unbox(v_cleanupAnnotations_1291_);
v_res_1298_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1289_, v_k_1290_, v_cleanupAnnotations_boxed_1297_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(lean_object* v_00_u03b1_1299_, lean_object* v_type_1300_, lean_object* v_k_1301_, uint8_t v_cleanupAnnotations_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1300_, v_k_1301_, v_cleanupAnnotations_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___boxed(lean_object* v_00_u03b1_1309_, lean_object* v_type_1310_, lean_object* v_k_1311_, lean_object* v_cleanupAnnotations_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1318_; lean_object* v_res_1319_; 
v_cleanupAnnotations_boxed_1318_ = lean_unbox(v_cleanupAnnotations_1312_);
v_res_1319_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(v_00_u03b1_1309_, v_type_1310_, v_k_1311_, v_cleanupAnnotations_boxed_1318_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(lean_object* v_type_1320_, lean_object* v_maxFVars_x3f_1321_, lean_object* v_k_1322_, uint8_t v_cleanupAnnotations_1323_, uint8_t v_whnfType_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v___f_1330_; lean_object* v___x_1331_; 
v___f_1330_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1330_, 0, v_k_1322_);
v___x_1331_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1320_, v_maxFVars_x3f_1321_, v___f_1330_, v_cleanupAnnotations_1323_, v_whnfType_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1331_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
v_a_1340_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1331_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1331_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg___boxed(lean_object* v_type_1348_, lean_object* v_maxFVars_x3f_1349_, lean_object* v_k_1350_, lean_object* v_cleanupAnnotations_1351_, lean_object* v_whnfType_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1358_; uint8_t v_whnfType_boxed_1359_; lean_object* v_res_1360_; 
v_cleanupAnnotations_boxed_1358_ = lean_unbox(v_cleanupAnnotations_1351_);
v_whnfType_boxed_1359_ = lean_unbox(v_whnfType_1352_);
v_res_1360_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_type_1348_, v_maxFVars_x3f_1349_, v_k_1350_, v_cleanupAnnotations_boxed_1358_, v_whnfType_boxed_1359_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(lean_object* v_00_u03b1_1361_, lean_object* v_type_1362_, lean_object* v_maxFVars_x3f_1363_, lean_object* v_k_1364_, uint8_t v_cleanupAnnotations_1365_, uint8_t v_whnfType_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_type_1362_, v_maxFVars_x3f_1363_, v_k_1364_, v_cleanupAnnotations_1365_, v_whnfType_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___boxed(lean_object* v_00_u03b1_1373_, lean_object* v_type_1374_, lean_object* v_maxFVars_x3f_1375_, lean_object* v_k_1376_, lean_object* v_cleanupAnnotations_1377_, lean_object* v_whnfType_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1384_; uint8_t v_whnfType_boxed_1385_; lean_object* v_res_1386_; 
v_cleanupAnnotations_boxed_1384_ = lean_unbox(v_cleanupAnnotations_1377_);
v_whnfType_boxed_1385_ = lean_unbox(v_whnfType_1378_);
v_res_1386_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(v_00_u03b1_1373_, v_type_1374_, v_maxFVars_x3f_1375_, v_k_1376_, v_cleanupAnnotations_boxed_1384_, v_whnfType_boxed_1385_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(lean_object* v_name_1387_, lean_object* v_us_1388_, lean_object* v_params_1389_, lean_object* v_args1_1390_, uint8_t v_useEq_1391_, lean_object* v_args2_1392_, lean_object* v_args2New_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1399_ = l_Lean_mkConst(v_name_1387_, v_us_1388_);
v___x_1400_ = l_Lean_mkAppN(v___x_1399_, v_params_1389_);
lean_inc_ref(v___x_1400_);
v___x_1401_ = l_Lean_mkAppN(v___x_1400_, v_args1_1390_);
v___x_1402_ = l_Lean_mkAppN(v___x_1400_, v_args2_1392_);
v___x_1403_ = l_Lean_Meta_mkEq(v___x_1401_, v___x_1402_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; uint8_t v___x_1405_; lean_object* v_result_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___x_1452_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1404_);
lean_dec_ref(v___x_1403_);
v___x_1405_ = 1;
v___x_1452_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_1390_, v_args2_1392_, v___x_1405_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1484_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1455_ = v___x_1452_;
v_isShared_1456_ = v_isSharedCheck_1484_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1452_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1484_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; 
v___x_1457_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(v_a_1453_);
if (lean_obj_tag(v___x_1457_) == 1)
{
lean_del_object(v___x_1455_);
if (v_useEq_1391_ == 0)
{
lean_object* v_val_1458_; lean_object* v___x_1459_; 
v_val_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_val_1458_);
lean_dec_ref(v___x_1457_);
v___x_1459_ = l_Lean_mkArrow(v_a_1404_, v_val_1458_, v___y_1396_, v___y_1397_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref(v___x_1459_);
v_result_1407_ = v_a_1460_;
v___y_1408_ = v___y_1394_;
v___y_1409_ = v___y_1395_;
v___y_1410_ = v___y_1396_;
v___y_1411_ = v___y_1397_;
goto v___jp_1406_;
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
v_a_1461_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1459_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1459_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_val_1469_; lean_object* v___x_1470_; 
v_val_1469_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_val_1469_);
lean_dec_ref(v___x_1457_);
v___x_1470_ = l_Lean_Meta_mkEq(v_a_1404_, v_val_1469_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref(v___x_1470_);
v_result_1407_ = v_a_1471_;
v___y_1408_ = v___y_1394_;
v___y_1409_ = v___y_1395_;
v___y_1410_ = v___y_1396_;
v___y_1411_ = v___y_1397_;
goto v___jp_1406_;
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1470_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1470_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
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
else
{
lean_object* v___x_1480_; lean_object* v___x_1482_; 
lean_dec(v___x_1457_);
lean_dec(v_a_1404_);
v___x_1480_ = lean_box(0);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v___x_1480_);
v___x_1482_ = v___x_1455_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec(v_a_1404_);
v_a_1485_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1452_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1452_);
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
v___jp_1406_:
{
uint8_t v___x_1412_; uint8_t v___x_1413_; lean_object* v___x_1414_; 
v___x_1412_ = 0;
v___x_1413_ = 1;
v___x_1414_ = l_Lean_Meta_mkForallFVars(v_args2New_1393_, v_result_1407_, v___x_1412_, v___x_1405_, v___x_1405_, v___x_1413_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1416_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref(v___x_1414_);
v___x_1416_ = l_Lean_Meta_mkForallFVars(v_args1_1390_, v_a_1415_, v___x_1412_, v___x_1405_, v___x_1405_, v___x_1413_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref(v___x_1416_);
v___x_1418_ = l_Lean_Meta_mkForallFVars(v_params_1389_, v_a_1417_, v___x_1412_, v___x_1405_, v___x_1405_, v___x_1413_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1427_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1421_ = v___x_1418_;
v_isShared_1422_ = v_isSharedCheck_1427_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1418_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1427_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v_a_1419_);
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 0, v___x_1423_);
v___x_1425_ = v___x_1421_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_a_1428_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1418_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1418_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_a_1436_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1416_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1416_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
v_a_1444_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1414_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1414_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
lean_dec_ref(v_args2_1392_);
v_a_1493_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v___x_1403_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1403_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed(lean_object* v_name_1501_, lean_object* v_us_1502_, lean_object* v_params_1503_, lean_object* v_args1_1504_, lean_object* v_useEq_1505_, lean_object* v_args2_1506_, lean_object* v_args2New_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
uint8_t v_useEq_boxed_1513_; lean_object* v_res_1514_; 
v_useEq_boxed_1513_ = lean_unbox(v_useEq_1505_);
v_res_1514_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(v_name_1501_, v_us_1502_, v_params_1503_, v_args1_1504_, v_useEq_boxed_1513_, v_args2_1506_, v_args2New_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec_ref(v_args2New_1507_);
lean_dec_ref(v_args1_1504_);
lean_dec_ref(v_params_1503_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(size_t v_sz_1515_, size_t v_i_1516_, lean_object* v_bs_1517_){
_start:
{
uint8_t v___x_1518_; 
v___x_1518_ = lean_usize_dec_lt(v_i_1516_, v_sz_1515_);
if (v___x_1518_ == 0)
{
return v_bs_1517_;
}
else
{
lean_object* v_v_1519_; lean_object* v___x_1520_; lean_object* v_bs_x27_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; size_t v___x_1526_; size_t v___x_1527_; lean_object* v___x_1528_; 
v_v_1519_ = lean_array_uget(v_bs_1517_, v_i_1516_);
v___x_1520_ = lean_unsigned_to_nat(0u);
v_bs_x27_1521_ = lean_array_uset(v_bs_1517_, v_i_1516_, v___x_1520_);
v___x_1522_ = l_Lean_Expr_fvarId_x21(v_v_1519_);
lean_dec(v_v_1519_);
v___x_1523_ = 1;
v___x_1524_ = lean_box(v___x_1523_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1522_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = ((size_t)1ULL);
v___x_1527_ = lean_usize_add(v_i_1516_, v___x_1526_);
v___x_1528_ = lean_array_uset(v_bs_x27_1521_, v_i_1516_, v___x_1525_);
v_i_1516_ = v___x_1527_;
v_bs_1517_ = v___x_1528_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1___boxed(lean_object* v_sz_1530_, lean_object* v_i_1531_, lean_object* v_bs_1532_){
_start:
{
size_t v_sz_boxed_1533_; size_t v_i_boxed_1534_; lean_object* v_res_1535_; 
v_sz_boxed_1533_ = lean_unbox_usize(v_sz_1530_);
lean_dec(v_sz_1530_);
v_i_boxed_1534_ = lean_unbox_usize(v_i_1531_);
lean_dec(v_i_1531_);
v_res_1535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(v_sz_boxed_1533_, v_i_boxed_1534_, v_bs_1532_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(lean_object* v_bs_1536_, lean_object* v_k_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_1536_, v_k_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1543_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1543_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
v_a_1552_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1543_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1543_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_bs_1560_, lean_object* v_k_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v_bs_1560_, v_k_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v_bs_1560_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(lean_object* v_bs_1568_, lean_object* v_k_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
size_t v_sz_1575_; size_t v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v_sz_1575_ = lean_array_size(v_bs_1568_);
v___x_1576_ = ((size_t)0ULL);
v___x_1577_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(v_sz_1575_, v___x_1576_, v_bs_1568_);
v___x_1578_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v___x_1577_, v_k_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
lean_dec_ref(v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg___boxed(lean_object* v_bs_1579_, lean_object* v_k_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_bs_1579_, v_k_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(lean_object* v_name_1587_, lean_object* v_us_1588_, lean_object* v_params_1589_, uint8_t v_useEq_1590_, lean_object* v_ctorVal_1591_, lean_object* v_type_1592_, lean_object* v_args1_1593_, lean_object* v_resultType_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v___x_1600_; lean_object* v___f_1601_; 
v___x_1600_ = lean_box(v_useEq_1590_);
lean_inc_ref(v_args1_1593_);
lean_inc_ref(v_params_1589_);
v___f_1601_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1601_, 0, v_name_1587_);
lean_closure_set(v___f_1601_, 1, v_us_1588_);
lean_closure_set(v___f_1601_, 2, v_params_1589_);
lean_closure_set(v___f_1601_, 3, v_args1_1593_);
lean_closure_set(v___f_1601_, 4, v___x_1600_);
if (v_useEq_1590_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1602_ = l_Array_append___redArg(v_params_1589_, v_args1_1593_);
v___x_1603_ = lean_unsigned_to_nat(0u);
v___x_1604_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_1605_ = lean_box(v_useEq_1590_);
v___x_1606_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed), 14, 9);
lean_closure_set(v___x_1606_, 0, v_ctorVal_1591_);
lean_closure_set(v___x_1606_, 1, v___x_1605_);
lean_closure_set(v___x_1606_, 2, v_args1_1593_);
lean_closure_set(v___x_1606_, 3, v_resultType_1594_);
lean_closure_set(v___x_1606_, 4, v___f_1601_);
lean_closure_set(v___x_1606_, 5, v___x_1603_);
lean_closure_set(v___x_1606_, 6, v_type_1592_);
lean_closure_set(v___x_1606_, 7, v___x_1604_);
lean_closure_set(v___x_1606_, 8, v___x_1604_);
v___x_1607_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v___x_1602_, v___x_1606_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1607_;
}
else
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
lean_dec_ref(v_params_1589_);
v___x_1608_ = lean_unsigned_to_nat(0u);
v___x_1609_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_1610_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1591_, v_useEq_1590_, v_args1_1593_, v_resultType_1594_, v___f_1601_, v___x_1608_, v_type_1592_, v___x_1609_, v___x_1609_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1610_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed(lean_object* v_name_1611_, lean_object* v_us_1612_, lean_object* v_params_1613_, lean_object* v_useEq_1614_, lean_object* v_ctorVal_1615_, lean_object* v_type_1616_, lean_object* v_args1_1617_, lean_object* v_resultType_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
uint8_t v_useEq_boxed_1624_; lean_object* v_res_1625_; 
v_useEq_boxed_1624_ = lean_unbox(v_useEq_1614_);
v_res_1625_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(v_name_1611_, v_us_1612_, v_params_1613_, v_useEq_boxed_1624_, v_ctorVal_1615_, v_type_1616_, v_args1_1617_, v_resultType_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(lean_object* v_name_1626_, lean_object* v_us_1627_, uint8_t v_useEq_1628_, lean_object* v_ctorVal_1629_, lean_object* v_params_1630_, lean_object* v_type_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; lean_object* v___f_1638_; uint8_t v___x_1639_; lean_object* v___x_1640_; 
v___x_1637_ = lean_box(v_useEq_1628_);
lean_inc_ref(v_type_1631_);
v___f_1638_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed), 13, 6);
lean_closure_set(v___f_1638_, 0, v_name_1626_);
lean_closure_set(v___f_1638_, 1, v_us_1627_);
lean_closure_set(v___f_1638_, 2, v_params_1630_);
lean_closure_set(v___f_1638_, 3, v___x_1637_);
lean_closure_set(v___f_1638_, 4, v_ctorVal_1629_);
lean_closure_set(v___f_1638_, 5, v_type_1631_);
v___x_1639_ = 0;
v___x_1640_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1631_, v___f_1638_, v___x_1639_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed(lean_object* v_name_1641_, lean_object* v_us_1642_, lean_object* v_useEq_1643_, lean_object* v_ctorVal_1644_, lean_object* v_params_1645_, lean_object* v_type_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
uint8_t v_useEq_boxed_1652_; lean_object* v_res_1653_; 
v_useEq_boxed_1652_ = lean_unbox(v_useEq_1643_);
v_res_1653_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(v_name_1641_, v_us_1642_, v_useEq_boxed_1652_, v_ctorVal_1644_, v_params_1645_, v_type_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(lean_object* v_a_1654_, lean_object* v_a_1655_){
_start:
{
if (lean_obj_tag(v_a_1654_) == 0)
{
lean_object* v___x_1656_; 
v___x_1656_ = l_List_reverse___redArg(v_a_1655_);
return v___x_1656_;
}
else
{
lean_object* v_head_1657_; lean_object* v_tail_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1667_; 
v_head_1657_ = lean_ctor_get(v_a_1654_, 0);
v_tail_1658_ = lean_ctor_get(v_a_1654_, 1);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_a_1654_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1660_ = v_a_1654_;
v_isShared_1661_ = v_isSharedCheck_1667_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_tail_1658_);
lean_inc(v_head_1657_);
lean_dec(v_a_1654_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1667_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1662_; lean_object* v___x_1664_; 
v___x_1662_ = l_Lean_mkLevelParam(v_head_1657_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 1, v_a_1655_);
lean_ctor_set(v___x_1660_, 0, v___x_1662_);
v___x_1664_ = v___x_1660_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v_a_1655_);
v___x_1664_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
v_a_1654_ = v_tail_1658_;
v_a_1655_ = v___x_1664_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(lean_object* v_ctorVal_1668_, uint8_t v_useEq_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_toConstantVal_1675_; lean_object* v_numParams_1676_; lean_object* v_name_1677_; lean_object* v_levelParams_1678_; lean_object* v_type_1679_; lean_object* v___x_1680_; 
v_toConstantVal_1675_ = lean_ctor_get(v_ctorVal_1668_, 0);
v_numParams_1676_ = lean_ctor_get(v_ctorVal_1668_, 3);
lean_inc(v_numParams_1676_);
v_name_1677_ = lean_ctor_get(v_toConstantVal_1675_, 0);
lean_inc(v_name_1677_);
v_levelParams_1678_ = lean_ctor_get(v_toConstantVal_1675_, 1);
v_type_1679_ = lean_ctor_get(v_toConstantVal_1675_, 2);
lean_inc_ref(v_type_1679_);
v___x_1680_ = l_Lean_Meta_elimOptParam(v_type_1679_, v_a_1672_, v_a_1673_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1681_; lean_object* v___x_1682_; lean_object* v_us_1683_; lean_object* v___x_1684_; lean_object* v___f_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; lean_object* v___x_1688_; 
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_a_1681_);
lean_dec_ref(v___x_1680_);
v___x_1682_ = lean_box(0);
lean_inc(v_levelParams_1678_);
v_us_1683_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_1678_, v___x_1682_);
v___x_1684_ = lean_box(v_useEq_1669_);
v___f_1685_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1685_, 0, v_name_1677_);
lean_closure_set(v___f_1685_, 1, v_us_1683_);
lean_closure_set(v___f_1685_, 2, v___x_1684_);
lean_closure_set(v___f_1685_, 3, v_ctorVal_1668_);
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_numParams_1676_);
v___x_1687_ = 0;
v___x_1688_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_a_1681_, v___x_1686_, v___f_1685_, v___x_1687_, v___x_1687_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1688_;
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
lean_dec(v_name_1677_);
lean_dec(v_numParams_1676_);
lean_dec_ref(v_ctorVal_1668_);
v_a_1689_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1680_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1680_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___boxed(lean_object* v_ctorVal_1697_, lean_object* v_useEq_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_){
_start:
{
uint8_t v_useEq_boxed_1704_; lean_object* v_res_1705_; 
v_useEq_boxed_1704_ = lean_unbox(v_useEq_1698_);
v_res_1705_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_1697_, v_useEq_boxed_1704_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_);
lean_dec(v_a_1702_);
lean_dec_ref(v_a_1701_);
lean_dec(v_a_1700_);
lean_dec_ref(v_a_1699_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(lean_object* v_00_u03b1_1706_, lean_object* v_bs_1707_, lean_object* v_k_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v_bs_1707_, v_k_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1715_, lean_object* v_bs_1716_, lean_object* v_k_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(v_00_u03b1_1715_, v_bs_1716_, v_k_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec_ref(v_bs_1716_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(lean_object* v_00_u03b1_1724_, lean_object* v_bs_1725_, lean_object* v_k_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_bs_1725_, v_k_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___boxed(lean_object* v_00_u03b1_1733_, lean_object* v_bs_1734_, lean_object* v_k_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(v_00_u03b1_1733_, v_bs_1734_, v_k_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(lean_object* v_ctorVal_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
uint8_t v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = 0;
v___x_1749_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_1742_, v___x_1748_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f___boxed(lean_object* v_ctorVal_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
lean_dec(v_a_1754_);
lean_dec_ref(v_a_1753_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
return v_res_1756_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0));
v___x_1759_ = l_Lean_stringToMessageData(v___x_1758_);
return v___x_1759_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2));
v___x_1762_ = l_Lean_stringToMessageData(v___x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(lean_object* v_ctorName_1763_){
_start:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1764_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1);
v___x_1765_ = l_Lean_MessageData_ofName(v_ctorName_1763_);
v___x_1766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3);
v___x_1768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(lean_object* v_ctorName_1769_, lean_object* v_mvarId_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1776_ = l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(v_ctorName_1769_);
v___x_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1777_, 0, v_mvarId_1770_);
v___x_1778_ = l_Lean_indentD(v___x_1777_);
v___x_1779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1776_);
lean_ctor_set(v___x_1779_, 1, v___x_1778_);
v___x_1780_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_1779_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg___boxed(lean_object* v_ctorName_1781_, lean_object* v_mvarId_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1781_, v_mvarId_1782_, v_a_1783_, v_a_1784_, v_a_1785_, v_a_1786_);
lean_dec(v_a_1786_);
lean_dec_ref(v_a_1785_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(lean_object* v_00_u03b1_1789_, lean_object* v_ctorName_1790_, lean_object* v_mvarId_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1790_, v_mvarId_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___boxed(lean_object* v_00_u03b1_1798_, lean_object* v_ctorName_1799_, lean_object* v_mvarId_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(v_00_u03b1_1798_, v_ctorName_1799_, v_mvarId_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
lean_dec(v_a_1804_);
lean_dec_ref(v_a_1803_);
lean_dec(v_a_1802_);
lean_dec_ref(v_a_1801_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(lean_object* v_ctorName_1807_, lean_object* v_as_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
if (lean_obj_tag(v_as_1808_) == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_dec(v_ctorName_1807_);
v___x_1814_ = lean_box(0);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
return v___x_1815_;
}
else
{
lean_object* v_head_1816_; lean_object* v_tail_1817_; lean_object* v___x_1818_; 
v_head_1816_ = lean_ctor_get(v_as_1808_, 0);
lean_inc_n(v_head_1816_, 2);
v_tail_1817_ = lean_ctor_get(v_as_1808_, 1);
lean_inc(v_tail_1817_);
lean_dec_ref(v_as_1808_);
v___x_1818_ = l_Lean_MVarId_assumptionCore(v_head_1816_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; uint8_t v___x_1820_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref(v___x_1818_);
v___x_1820_ = lean_unbox(v_a_1819_);
lean_dec(v_a_1819_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; 
lean_dec(v_tail_1817_);
v___x_1821_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1807_, v_head_1816_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_);
return v___x_1821_;
}
else
{
lean_dec(v_head_1816_);
v_as_1808_ = v_tail_1817_;
goto _start;
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
lean_dec(v_tail_1817_);
lean_dec(v_head_1816_);
lean_dec(v_ctorName_1807_);
v_a_1823_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1818_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1818_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0___boxed(lean_object* v_ctorName_1831_, lean_object* v_as_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(v_ctorName_1831_, v_as_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(lean_object* v_mvarId_1839_, lean_object* v_ctorName_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_Lean_MVarId_splitAndCore(v_mvarId_1839_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; lean_object* v___x_1848_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_a_1847_);
lean_dec_ref(v___x_1846_);
v___x_1848_ = l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(v_ctorName_1840_, v_a_1847_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
return v___x_1848_;
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
lean_dec(v_ctorName_1840_);
v_a_1849_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1846_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1846_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption___boxed(lean_object* v_mvarId_1857_, lean_object* v_ctorName_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_mvarId_1857_, v_ctorName_1858_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_);
lean_dec(v_a_1862_);
lean_dec_ref(v_a_1861_);
lean_dec(v_a_1860_);
lean_dec_ref(v_a_1859_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(lean_object* v_msg_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v___f_1872_; lean_object* v___x_1014__overap_1873_; lean_object* v___x_1874_; 
v___f_1872_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0));
v___x_1014__overap_1873_ = lean_panic_fn_borrowed(v___f_1872_, v_msg_1866_);
lean_inc(v___y_1870_);
lean_inc_ref(v___y_1869_);
lean_inc(v___y_1868_);
lean_inc_ref(v___y_1867_);
v___x_1874_ = lean_apply_5(v___x_1014__overap_1873_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, lean_box(0));
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___boxed(lean_object* v_msg_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(v_msg_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
return v_res_1881_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1882_; double v___x_1883_; 
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = lean_float_of_nat(v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(lean_object* v_cls_1887_, lean_object* v_msg_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v_ref_1894_; lean_object* v___x_1895_; lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1940_; 
v_ref_1894_ = lean_ctor_get(v___y_1891_, 5);
v___x_1895_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1898_ = v___x_1895_;
v_isShared_1899_ = v_isSharedCheck_1940_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1895_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1940_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v_traceState_1901_; lean_object* v_env_1902_; lean_object* v_nextMacroScope_1903_; lean_object* v_ngen_1904_; lean_object* v_auxDeclNGen_1905_; lean_object* v_cache_1906_; lean_object* v_messages_1907_; lean_object* v_infoState_1908_; lean_object* v_snapshotTasks_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1939_; 
v___x_1900_ = lean_st_ref_take(v___y_1892_);
v_traceState_1901_ = lean_ctor_get(v___x_1900_, 4);
v_env_1902_ = lean_ctor_get(v___x_1900_, 0);
v_nextMacroScope_1903_ = lean_ctor_get(v___x_1900_, 1);
v_ngen_1904_ = lean_ctor_get(v___x_1900_, 2);
v_auxDeclNGen_1905_ = lean_ctor_get(v___x_1900_, 3);
v_cache_1906_ = lean_ctor_get(v___x_1900_, 5);
v_messages_1907_ = lean_ctor_get(v___x_1900_, 6);
v_infoState_1908_ = lean_ctor_get(v___x_1900_, 7);
v_snapshotTasks_1909_ = lean_ctor_get(v___x_1900_, 8);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1911_ = v___x_1900_;
v_isShared_1912_ = v_isSharedCheck_1939_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_snapshotTasks_1909_);
lean_inc(v_infoState_1908_);
lean_inc(v_messages_1907_);
lean_inc(v_cache_1906_);
lean_inc(v_traceState_1901_);
lean_inc(v_auxDeclNGen_1905_);
lean_inc(v_ngen_1904_);
lean_inc(v_nextMacroScope_1903_);
lean_inc(v_env_1902_);
lean_dec(v___x_1900_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1939_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
uint64_t v_tid_1913_; lean_object* v_traces_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1938_; 
v_tid_1913_ = lean_ctor_get_uint64(v_traceState_1901_, sizeof(void*)*1);
v_traces_1914_ = lean_ctor_get(v_traceState_1901_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_traceState_1901_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1916_ = v_traceState_1901_;
v_isShared_1917_ = v_isSharedCheck_1938_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_traces_1914_);
lean_dec(v_traceState_1901_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1938_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1918_; double v___x_1919_; uint8_t v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1928_; 
v___x_1918_ = lean_box(0);
v___x_1919_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0);
v___x_1920_ = 0;
v___x_1921_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_1922_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1922_, 0, v_cls_1887_);
lean_ctor_set(v___x_1922_, 1, v___x_1918_);
lean_ctor_set(v___x_1922_, 2, v___x_1921_);
lean_ctor_set_float(v___x_1922_, sizeof(void*)*3, v___x_1919_);
lean_ctor_set_float(v___x_1922_, sizeof(void*)*3 + 8, v___x_1919_);
lean_ctor_set_uint8(v___x_1922_, sizeof(void*)*3 + 16, v___x_1920_);
v___x_1923_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2));
v___x_1924_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v_a_1896_);
lean_ctor_set(v___x_1924_, 2, v___x_1923_);
lean_inc(v_ref_1894_);
v___x_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1925_, 0, v_ref_1894_);
lean_ctor_set(v___x_1925_, 1, v___x_1924_);
v___x_1926_ = l_Lean_PersistentArray_push___redArg(v_traces_1914_, v___x_1925_);
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v___x_1926_);
v___x_1928_ = v___x_1916_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1926_);
lean_ctor_set_uint64(v_reuseFailAlloc_1937_, sizeof(void*)*1, v_tid_1913_);
v___x_1928_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1930_; 
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 4, v___x_1928_);
v___x_1930_ = v___x_1911_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_env_1902_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_nextMacroScope_1903_);
lean_ctor_set(v_reuseFailAlloc_1936_, 2, v_ngen_1904_);
lean_ctor_set(v_reuseFailAlloc_1936_, 3, v_auxDeclNGen_1905_);
lean_ctor_set(v_reuseFailAlloc_1936_, 4, v___x_1928_);
lean_ctor_set(v_reuseFailAlloc_1936_, 5, v_cache_1906_);
lean_ctor_set(v_reuseFailAlloc_1936_, 6, v_messages_1907_);
lean_ctor_set(v_reuseFailAlloc_1936_, 7, v_infoState_1908_);
lean_ctor_set(v_reuseFailAlloc_1936_, 8, v_snapshotTasks_1909_);
v___x_1930_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
v___x_1931_ = lean_st_ref_set(v___y_1892_, v___x_1930_);
v___x_1932_ = lean_box(0);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1932_);
v___x_1934_ = v___x_1898_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___boxed(lean_object* v_cls_1941_, lean_object* v_msg_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_1941_, v_msg_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
return v_res_1948_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3(void){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1952_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2));
v___x_1953_ = lean_unsigned_to_nat(30u);
v___x_1954_ = lean_unsigned_to_nat(96u);
v___x_1955_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1));
v___x_1956_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0));
v___x_1957_ = l_mkPanicMessageWithDecl(v___x_1956_, v___x_1955_, v___x_1954_, v___x_1953_, v___x_1952_);
return v___x_1957_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9(void){
_start:
{
lean_object* v_cls_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v_cls_1966_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_1967_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8));
v___x_1968_ = l_Lean_Name_append(v___x_1967_, v_cls_1966_);
return v___x_1968_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11(void){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1970_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10));
v___x_1971_ = l_Lean_stringToMessageData(v___x_1970_);
return v___x_1971_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13(void){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12));
v___x_1974_ = l_Lean_stringToMessageData(v___x_1973_);
return v___x_1974_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15(void){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14));
v___x_1977_ = l_Lean_stringToMessageData(v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(lean_object* v_ctorName_1978_, lean_object* v_mvarId_1979_, lean_object* v_h_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v_options_2006_; uint8_t v_hasTrace_2007_; 
v_options_2006_ = lean_ctor_get(v_a_1983_, 2);
v_hasTrace_2007_ = lean_ctor_get_uint8(v_options_2006_, sizeof(void*)*1);
if (v_hasTrace_2007_ == 0)
{
v___y_1987_ = v_a_1981_;
v___y_1988_ = v_a_1982_;
v___y_1989_ = v_a_1983_;
v___y_1990_ = v_a_1984_;
goto v___jp_1986_;
}
else
{
lean_object* v_inheritedTraceOptions_2008_; lean_object* v_cls_2009_; lean_object* v___x_2010_; uint8_t v___x_2011_; 
v_inheritedTraceOptions_2008_ = lean_ctor_get(v_a_1983_, 13);
v_cls_2009_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2010_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_2011_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2008_, v_options_2006_, v___x_2010_);
if (v___x_2011_ == 0)
{
v___y_1987_ = v_a_1981_;
v___y_1988_ = v_a_1982_;
v___y_1989_ = v_a_1983_;
v___y_1990_ = v_a_1984_;
goto v___jp_1986_;
}
else
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2012_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11);
lean_inc(v_ctorName_1978_);
v___x_2013_ = l_Lean_MessageData_ofName(v_ctorName_1978_);
v___x_2014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2012_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v___x_2015_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13);
v___x_2016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2014_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
lean_inc(v_h_1980_);
v___x_2017_ = l_Lean_mkFVar(v_h_1980_);
v___x_2018_ = l_Lean_MessageData_ofExpr(v___x_2017_);
v___x_2019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2016_);
lean_ctor_set(v___x_2019_, 1, v___x_2018_);
v___x_2020_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15);
v___x_2021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2019_);
lean_ctor_set(v___x_2021_, 1, v___x_2020_);
lean_inc(v_mvarId_1979_);
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_mvarId_1979_);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2021_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2009_, v___x_2023_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_dec_ref(v___x_2024_);
v___y_1987_ = v_a_1981_;
v___y_1988_ = v_a_1982_;
v___y_1989_ = v_a_1983_;
v___y_1990_ = v_a_1984_;
goto v___jp_1986_;
}
else
{
lean_dec(v_h_1980_);
lean_dec(v_mvarId_1979_);
lean_dec(v_ctorName_1978_);
return v___x_2024_;
}
}
}
v___jp_1986_:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = lean_box(0);
v___x_1992_ = l_Lean_Meta_injection(v_mvarId_1979_, v_h_1980_, v___x_1991_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
lean_dec_ref(v___x_1992_);
if (lean_obj_tag(v_a_1993_) == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec(v_ctorName_1978_);
v___x_1994_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3);
v___x_1995_ = l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(v___x_1994_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
return v___x_1995_;
}
else
{
lean_object* v_mvarId_1996_; lean_object* v___x_1997_; 
v_mvarId_1996_ = lean_ctor_get(v_a_1993_, 0);
lean_inc(v_mvarId_1996_);
lean_dec_ref(v_a_1993_);
v___x_1997_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_mvarId_1996_, v_ctorName_1978_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
return v___x_1997_;
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v_ctorName_1978_);
v_a_1998_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1992_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1992_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___boxed(lean_object* v_ctorName_2025_, lean_object* v_mvarId_2026_, lean_object* v_h_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(v_ctorName_2025_, v_mvarId_2026_, v_h_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
lean_dec(v_a_2029_);
lean_dec_ref(v_a_2028_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(lean_object* v_type_2034_, lean_object* v_k_2035_, uint8_t v_cleanupAnnotations_2036_, uint8_t v_whnfType_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v___f_2043_; lean_object* v___x_2044_; 
v___f_2043_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2043_, 0, v_k_2035_);
v___x_2044_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_2034_, v___f_2043_, v_cleanupAnnotations_2036_, v_whnfType_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
v_a_2053_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_2044_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2044_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg___boxed(lean_object* v_type_2061_, lean_object* v_k_2062_, lean_object* v_cleanupAnnotations_2063_, lean_object* v_whnfType_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2070_; uint8_t v_whnfType_boxed_2071_; lean_object* v_res_2072_; 
v_cleanupAnnotations_boxed_2070_ = lean_unbox(v_cleanupAnnotations_2063_);
v_whnfType_boxed_2071_ = lean_unbox(v_whnfType_2064_);
v_res_2072_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_type_2061_, v_k_2062_, v_cleanupAnnotations_boxed_2070_, v_whnfType_boxed_2071_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(lean_object* v_00_u03b1_2073_, lean_object* v_type_2074_, lean_object* v_k_2075_, uint8_t v_cleanupAnnotations_2076_, uint8_t v_whnfType_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
lean_object* v___x_2083_; 
v___x_2083_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_type_2074_, v_k_2075_, v_cleanupAnnotations_2076_, v_whnfType_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___boxed(lean_object* v_00_u03b1_2084_, lean_object* v_type_2085_, lean_object* v_k_2086_, lean_object* v_cleanupAnnotations_2087_, lean_object* v_whnfType_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2094_; uint8_t v_whnfType_boxed_2095_; lean_object* v_res_2096_; 
v_cleanupAnnotations_boxed_2094_ = lean_unbox(v_cleanupAnnotations_2087_);
v_whnfType_boxed_2095_ = lean_unbox(v_whnfType_2088_);
v_res_2096_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(v_00_u03b1_2084_, v_type_2085_, v_k_2086_, v_cleanupAnnotations_boxed_2094_, v_whnfType_boxed_2095_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
lean_dec(v___y_2090_);
lean_dec_ref(v___y_2089_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(lean_object* v___x_2097_, lean_object* v_ctorName_2098_, lean_object* v_xs_2099_, lean_object* v_type_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2106_ = lean_box(0);
v___x_2107_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_2100_, v___x_2106_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref(v___x_2107_);
v___x_2109_ = l_Lean_Expr_mvarId_x21(v_a_2108_);
v___x_2110_ = lean_array_get_size(v_xs_2099_);
v___x_2111_ = lean_unsigned_to_nat(1u);
v___x_2112_ = lean_nat_sub(v___x_2110_, v___x_2111_);
v___x_2113_ = lean_array_get_borrowed(v___x_2097_, v_xs_2099_, v___x_2112_);
lean_dec(v___x_2112_);
v___x_2114_ = l_Lean_Expr_fvarId_x21(v___x_2113_);
v___x_2115_ = l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(v_ctorName_2098_, v___x_2109_, v___x_2114_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
if (lean_obj_tag(v___x_2115_) == 0)
{
uint8_t v___x_2116_; uint8_t v___x_2117_; uint8_t v___x_2118_; lean_object* v___x_2119_; 
lean_dec_ref(v___x_2115_);
v___x_2116_ = 0;
v___x_2117_ = 1;
v___x_2118_ = 1;
v___x_2119_ = l_Lean_Meta_mkLambdaFVars(v_xs_2099_, v_a_2108_, v___x_2116_, v___x_2117_, v___x_2116_, v___x_2117_, v___x_2118_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
return v___x_2119_;
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec(v_a_2108_);
v_a_2120_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2115_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2115_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
else
{
lean_dec(v_ctorName_2098_);
return v___x_2107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed(lean_object* v___x_2128_, lean_object* v_ctorName_2129_, lean_object* v_xs_2130_, lean_object* v_type_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(v___x_2128_, v_ctorName_2129_, v_xs_2130_, v_type_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec_ref(v_xs_2130_);
lean_dec_ref(v___x_2128_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(lean_object* v_ctorName_2138_, lean_object* v_targetType_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v___x_2145_; lean_object* v___f_2146_; uint8_t v___x_2147_; lean_object* v___x_2148_; 
v___x_2145_ = l_Lean_instInhabitedExpr;
v___f_2146_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2146_, 0, v___x_2145_);
lean_closure_set(v___f_2146_, 1, v_ctorName_2138_);
v___x_2147_ = 0;
v___x_2148_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_targetType_2139_, v___f_2146_, v___x_2147_, v___x_2147_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___boxed(lean_object* v_ctorName_2149_, lean_object* v_targetType_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_ctorName_2149_, v_targetType_2150_, v_a_2151_, v_a_2152_, v_a_2153_, v_a_2154_);
lean_dec(v_a_2154_);
lean_dec_ref(v_a_2153_);
lean_dec(v_a_2152_);
lean_dec_ref(v_a_2151_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor(lean_object* v_ctorName_2160_){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1));
v___x_2162_ = l_Lean_Name_append(v_ctorName_2160_, v___x_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(lean_object* v_e_2163_, lean_object* v___y_2164_){
_start:
{
uint8_t v___x_2166_; 
v___x_2166_ = l_Lean_Expr_hasMVar(v_e_2163_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v_e_2163_);
return v___x_2167_;
}
else
{
lean_object* v___x_2168_; lean_object* v_mctx_2169_; lean_object* v___x_2170_; lean_object* v_fst_2171_; lean_object* v_snd_2172_; lean_object* v___x_2173_; lean_object* v_cache_2174_; lean_object* v_zetaDeltaFVarIds_2175_; lean_object* v_postponed_2176_; lean_object* v_diag_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2186_; 
v___x_2168_ = lean_st_ref_get(v___y_2164_);
v_mctx_2169_ = lean_ctor_get(v___x_2168_, 0);
lean_inc_ref(v_mctx_2169_);
lean_dec(v___x_2168_);
v___x_2170_ = l_Lean_instantiateMVarsCore(v_mctx_2169_, v_e_2163_);
v_fst_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_fst_2171_);
v_snd_2172_ = lean_ctor_get(v___x_2170_, 1);
lean_inc(v_snd_2172_);
lean_dec_ref(v___x_2170_);
v___x_2173_ = lean_st_ref_take(v___y_2164_);
v_cache_2174_ = lean_ctor_get(v___x_2173_, 1);
v_zetaDeltaFVarIds_2175_ = lean_ctor_get(v___x_2173_, 2);
v_postponed_2176_ = lean_ctor_get(v___x_2173_, 3);
v_diag_2177_ = lean_ctor_get(v___x_2173_, 4);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2186_ == 0)
{
lean_object* v_unused_2187_; 
v_unused_2187_ = lean_ctor_get(v___x_2173_, 0);
lean_dec(v_unused_2187_);
v___x_2179_ = v___x_2173_;
v_isShared_2180_ = v_isSharedCheck_2186_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_diag_2177_);
lean_inc(v_postponed_2176_);
lean_inc(v_zetaDeltaFVarIds_2175_);
lean_inc(v_cache_2174_);
lean_dec(v___x_2173_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2186_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 0, v_snd_2172_);
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_snd_2172_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v_cache_2174_);
lean_ctor_set(v_reuseFailAlloc_2185_, 2, v_zetaDeltaFVarIds_2175_);
lean_ctor_set(v_reuseFailAlloc_2185_, 3, v_postponed_2176_);
lean_ctor_set(v_reuseFailAlloc_2185_, 4, v_diag_2177_);
v___x_2182_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2183_ = lean_st_ref_set(v___y_2164_, v___x_2182_);
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v_fst_2171_);
return v___x_2184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg___boxed(lean_object* v_e_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_e_2188_, v___y_2189_);
lean_dec(v___y_2189_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(lean_object* v_e_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_e_2192_, v___y_2194_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___boxed(lean_object* v_e_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(v_e_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
lean_dec(v___y_2203_);
lean_dec_ref(v___y_2202_);
lean_dec(v___y_2201_);
lean_dec_ref(v___y_2200_);
return v_res_2205_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2206_ = lean_unsigned_to_nat(32u);
v___x_2207_ = lean_mk_empty_array_with_capacity(v___x_2206_);
v___x_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
return v___x_2208_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2209_ = ((size_t)5ULL);
v___x_2210_ = lean_unsigned_to_nat(0u);
v___x_2211_ = lean_unsigned_to_nat(32u);
v___x_2212_ = lean_mk_empty_array_with_capacity(v___x_2211_);
v___x_2213_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0);
v___x_2214_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
lean_ctor_set(v___x_2214_, 1, v___x_2212_);
lean_ctor_set(v___x_2214_, 2, v___x_2210_);
lean_ctor_set(v___x_2214_, 3, v___x_2210_);
lean_ctor_set_usize(v___x_2214_, 4, v___x_2209_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; lean_object* v_traceState_2218_; lean_object* v_traces_2219_; lean_object* v___x_2220_; lean_object* v_traceState_2221_; lean_object* v_env_2222_; lean_object* v_nextMacroScope_2223_; lean_object* v_ngen_2224_; lean_object* v_auxDeclNGen_2225_; lean_object* v_cache_2226_; lean_object* v_messages_2227_; lean_object* v_infoState_2228_; lean_object* v_snapshotTasks_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2248_; 
v___x_2217_ = lean_st_ref_get(v___y_2215_);
v_traceState_2218_ = lean_ctor_get(v___x_2217_, 4);
lean_inc_ref(v_traceState_2218_);
lean_dec(v___x_2217_);
v_traces_2219_ = lean_ctor_get(v_traceState_2218_, 0);
lean_inc_ref(v_traces_2219_);
lean_dec_ref(v_traceState_2218_);
v___x_2220_ = lean_st_ref_take(v___y_2215_);
v_traceState_2221_ = lean_ctor_get(v___x_2220_, 4);
v_env_2222_ = lean_ctor_get(v___x_2220_, 0);
v_nextMacroScope_2223_ = lean_ctor_get(v___x_2220_, 1);
v_ngen_2224_ = lean_ctor_get(v___x_2220_, 2);
v_auxDeclNGen_2225_ = lean_ctor_get(v___x_2220_, 3);
v_cache_2226_ = lean_ctor_get(v___x_2220_, 5);
v_messages_2227_ = lean_ctor_get(v___x_2220_, 6);
v_infoState_2228_ = lean_ctor_get(v___x_2220_, 7);
v_snapshotTasks_2229_ = lean_ctor_get(v___x_2220_, 8);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2231_ = v___x_2220_;
v_isShared_2232_ = v_isSharedCheck_2248_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_snapshotTasks_2229_);
lean_inc(v_infoState_2228_);
lean_inc(v_messages_2227_);
lean_inc(v_cache_2226_);
lean_inc(v_traceState_2221_);
lean_inc(v_auxDeclNGen_2225_);
lean_inc(v_ngen_2224_);
lean_inc(v_nextMacroScope_2223_);
lean_inc(v_env_2222_);
lean_dec(v___x_2220_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2248_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
uint64_t v_tid_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2246_; 
v_tid_2233_ = lean_ctor_get_uint64(v_traceState_2221_, sizeof(void*)*1);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_traceState_2221_);
if (v_isSharedCheck_2246_ == 0)
{
lean_object* v_unused_2247_; 
v_unused_2247_ = lean_ctor_get(v_traceState_2221_, 0);
lean_dec(v_unused_2247_);
v___x_2235_ = v_traceState_2221_;
v_isShared_2236_ = v_isSharedCheck_2246_;
goto v_resetjp_2234_;
}
else
{
lean_dec(v_traceState_2221_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2246_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2237_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 0, v___x_2237_);
v___x_2239_ = v___x_2235_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2237_);
lean_ctor_set_uint64(v_reuseFailAlloc_2245_, sizeof(void*)*1, v_tid_2233_);
v___x_2239_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
lean_object* v___x_2241_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 4, v___x_2239_);
v___x_2241_ = v___x_2231_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_env_2222_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v_nextMacroScope_2223_);
lean_ctor_set(v_reuseFailAlloc_2244_, 2, v_ngen_2224_);
lean_ctor_set(v_reuseFailAlloc_2244_, 3, v_auxDeclNGen_2225_);
lean_ctor_set(v_reuseFailAlloc_2244_, 4, v___x_2239_);
lean_ctor_set(v_reuseFailAlloc_2244_, 5, v_cache_2226_);
lean_ctor_set(v_reuseFailAlloc_2244_, 6, v_messages_2227_);
lean_ctor_set(v_reuseFailAlloc_2244_, 7, v_infoState_2228_);
lean_ctor_set(v_reuseFailAlloc_2244_, 8, v_snapshotTasks_2229_);
v___x_2241_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2242_ = lean_st_ref_set(v___y_2215_, v___x_2241_);
v___x_2243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2243_, 0, v_traces_2219_);
return v___x_2243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___boxed(lean_object* v___y_2249_, lean_object* v___y_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2249_);
lean_dec(v___y_2249_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2255_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___boxed(lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
return v_res_2263_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(lean_object* v_opts_2264_, lean_object* v_opt_2265_){
_start:
{
lean_object* v_name_2266_; lean_object* v_defValue_2267_; lean_object* v_map_2268_; lean_object* v___x_2269_; 
v_name_2266_ = lean_ctor_get(v_opt_2265_, 0);
v_defValue_2267_ = lean_ctor_get(v_opt_2265_, 1);
v_map_2268_ = lean_ctor_get(v_opts_2264_, 0);
v___x_2269_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2268_, v_name_2266_);
if (lean_obj_tag(v___x_2269_) == 0)
{
uint8_t v___x_2270_; 
v___x_2270_ = lean_unbox(v_defValue_2267_);
return v___x_2270_;
}
else
{
lean_object* v_val_2271_; 
v_val_2271_ = lean_ctor_get(v___x_2269_, 0);
lean_inc(v_val_2271_);
lean_dec_ref(v___x_2269_);
if (lean_obj_tag(v_val_2271_) == 1)
{
uint8_t v_v_2272_; 
v_v_2272_ = lean_ctor_get_uint8(v_val_2271_, 0);
lean_dec_ref(v_val_2271_);
return v_v_2272_;
}
else
{
uint8_t v___x_2273_; 
lean_dec(v_val_2271_);
v___x_2273_ = lean_unbox(v_defValue_2267_);
return v___x_2273_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2___boxed(lean_object* v_opts_2274_, lean_object* v_opt_2275_){
_start:
{
uint8_t v_res_2276_; lean_object* v_r_2277_; 
v_res_2276_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2274_, v_opt_2275_);
lean_dec_ref(v_opt_2275_);
lean_dec_ref(v_opts_2274_);
v_r_2277_ = lean_box(v_res_2276_);
return v_r_2277_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2279_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0));
v___x_2280_ = l_Lean_stringToMessageData(v___x_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(lean_object* v_name_2281_, lean_object* v_x_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2288_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1);
v___x_2289_ = l_Lean_MessageData_ofName(v_name_2281_);
v___x_2290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2288_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
v___x_2291_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_2292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2290_);
lean_ctor_set(v___x_2292_, 1, v___x_2291_);
v___x_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed(lean_object* v_name_2294_, lean_object* v_x_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(v_name_2294_, v_x_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec_ref(v_x_2295_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(lean_object* v_name_2302_, lean_object* v_val_2303_, lean_object* v_name_2304_, lean_object* v_levelParams_2305_, uint8_t v___x_2306_, lean_object* v_____r_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v___x_2313_; 
lean_inc_ref(v_val_2303_);
v___x_2313_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2302_, v_val_2303_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2315_; lean_object* v_a_2316_; lean_object* v___x_2317_; lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2330_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2303_, v___y_2309_);
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref(v___x_2315_);
v___x_2317_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2314_, v___y_2309_);
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2320_ = v___x_2317_;
v_isShared_2321_ = v_isSharedCheck_2330_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2317_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2330_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2327_; 
lean_inc(v_name_2304_);
v___x_2322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2322_, 0, v_name_2304_);
lean_ctor_set(v___x_2322_, 1, v_levelParams_2305_);
lean_ctor_set(v___x_2322_, 2, v_a_2316_);
v___x_2323_ = lean_box(0);
v___x_2324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2324_, 0, v_name_2304_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
v___x_2325_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2322_);
lean_ctor_set(v___x_2325_, 1, v_a_2318_);
lean_ctor_set(v___x_2325_, 2, v___x_2324_);
if (v_isShared_2321_ == 0)
{
lean_ctor_set_tag(v___x_2320_, 2);
lean_ctor_set(v___x_2320_, 0, v___x_2325_);
v___x_2327_ = v___x_2320_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2325_);
v___x_2327_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lean_addDecl(v___x_2327_, v___x_2306_, v___y_2310_, v___y_2311_);
return v___x_2328_;
}
}
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
lean_dec(v_levelParams_2305_);
lean_dec(v_name_2304_);
lean_dec_ref(v_val_2303_);
v_a_2331_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2333_ = v___x_2313_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v___x_2313_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1___boxed(lean_object* v_name_2339_, lean_object* v_val_2340_, lean_object* v_name_2341_, lean_object* v_levelParams_2342_, lean_object* v___x_2343_, lean_object* v_____r_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
uint8_t v___x_12938__boxed_2350_; lean_object* v_res_2351_; 
v___x_12938__boxed_2350_ = lean_unbox(v___x_2343_);
v_res_2351_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2339_, v_val_2340_, v_name_2341_, v_levelParams_2342_, v___x_12938__boxed_2350_, v_____r_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(lean_object* v_name_2352_, lean_object* v_val_2353_, lean_object* v_name_2354_, lean_object* v_levelParams_2355_, lean_object* v_____r_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v___x_2362_; 
lean_inc_ref(v_val_2353_);
v___x_2362_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2352_, v_val_2353_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v___x_2364_; lean_object* v_a_2365_; lean_object* v___x_2366_; lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2380_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref(v___x_2362_);
v___x_2364_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2353_, v___y_2358_);
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_a_2365_);
lean_dec_ref(v___x_2364_);
v___x_2366_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2363_, v___y_2358_);
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2369_ = v___x_2366_;
v_isShared_2370_ = v_isSharedCheck_2380_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2366_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2380_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2376_; 
lean_inc(v_name_2354_);
v___x_2371_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2371_, 0, v_name_2354_);
lean_ctor_set(v___x_2371_, 1, v_levelParams_2355_);
lean_ctor_set(v___x_2371_, 2, v_a_2365_);
v___x_2372_ = lean_box(0);
v___x_2373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2373_, 0, v_name_2354_);
lean_ctor_set(v___x_2373_, 1, v___x_2372_);
v___x_2374_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2371_);
lean_ctor_set(v___x_2374_, 1, v_a_2367_);
lean_ctor_set(v___x_2374_, 2, v___x_2373_);
if (v_isShared_2370_ == 0)
{
lean_ctor_set_tag(v___x_2369_, 2);
lean_ctor_set(v___x_2369_, 0, v___x_2374_);
v___x_2376_ = v___x_2369_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2374_);
v___x_2376_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
uint8_t v___x_2377_; lean_object* v___x_2378_; 
v___x_2377_ = 0;
v___x_2378_ = l_Lean_addDecl(v___x_2376_, v___x_2377_, v___y_2359_, v___y_2360_);
return v___x_2378_;
}
}
}
else
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
lean_dec(v_levelParams_2355_);
lean_dec(v_name_2354_);
lean_dec_ref(v_val_2353_);
v_a_2381_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2362_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2362_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2___boxed(lean_object* v_name_2389_, lean_object* v_val_2390_, lean_object* v_name_2391_, lean_object* v_levelParams_2392_, lean_object* v_____r_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2389_, v_val_2390_, v_name_2391_, v_levelParams_2392_, v_____r_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2399_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(lean_object* v_e_2400_){
_start:
{
if (lean_obj_tag(v_e_2400_) == 0)
{
uint8_t v___x_2401_; 
v___x_2401_ = 2;
return v___x_2401_;
}
else
{
uint8_t v___x_2402_; 
v___x_2402_ = 0;
return v___x_2402_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3___boxed(lean_object* v_e_2403_){
_start:
{
uint8_t v_res_2404_; lean_object* v_r_2405_; 
v_res_2404_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(v_e_2403_);
lean_dec_ref(v_e_2403_);
v_r_2405_ = lean_box(v_res_2404_);
return v_r_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(lean_object* v_opts_2406_, lean_object* v_opt_2407_){
_start:
{
lean_object* v_name_2408_; lean_object* v_defValue_2409_; lean_object* v_map_2410_; lean_object* v___x_2411_; 
v_name_2408_ = lean_ctor_get(v_opt_2407_, 0);
v_defValue_2409_ = lean_ctor_get(v_opt_2407_, 1);
v_map_2410_ = lean_ctor_get(v_opts_2406_, 0);
v___x_2411_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2410_, v_name_2408_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_inc(v_defValue_2409_);
return v_defValue_2409_;
}
else
{
lean_object* v_val_2412_; 
v_val_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_val_2412_);
lean_dec_ref(v___x_2411_);
if (lean_obj_tag(v_val_2412_) == 3)
{
lean_object* v_v_2413_; 
v_v_2413_ = lean_ctor_get(v_val_2412_, 0);
lean_inc(v_v_2413_);
lean_dec_ref(v_val_2412_);
return v_v_2413_;
}
else
{
lean_dec(v_val_2412_);
lean_inc(v_defValue_2409_);
return v_defValue_2409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6___boxed(lean_object* v_opts_2414_, lean_object* v_opt_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2414_, v_opt_2415_);
lean_dec_ref(v_opt_2415_);
lean_dec_ref(v_opts_2414_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg(lean_object* v_x_2417_){
_start:
{
if (lean_obj_tag(v_x_2417_) == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
v_a_2419_ = lean_ctor_get(v_x_2417_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_x_2417_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v_x_2417_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v_x_2417_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
lean_ctor_set_tag(v___x_2421_, 1);
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
v_a_2427_ = lean_ctor_get(v_x_2417_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v_x_2417_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v_x_2417_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v_x_2417_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
lean_ctor_set_tag(v___x_2429_, 0);
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg___boxed(lean_object* v_x_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg(v_x_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4_spec__5(size_t v_sz_2438_, size_t v_i_2439_, lean_object* v_bs_2440_){
_start:
{
uint8_t v___x_2441_; 
v___x_2441_ = lean_usize_dec_lt(v_i_2439_, v_sz_2438_);
if (v___x_2441_ == 0)
{
return v_bs_2440_;
}
else
{
lean_object* v_v_2442_; lean_object* v_msg_2443_; lean_object* v___x_2444_; lean_object* v_bs_x27_2445_; size_t v___x_2446_; size_t v___x_2447_; lean_object* v___x_2448_; 
v_v_2442_ = lean_array_uget_borrowed(v_bs_2440_, v_i_2439_);
v_msg_2443_ = lean_ctor_get(v_v_2442_, 1);
lean_inc_ref(v_msg_2443_);
v___x_2444_ = lean_unsigned_to_nat(0u);
v_bs_x27_2445_ = lean_array_uset(v_bs_2440_, v_i_2439_, v___x_2444_);
v___x_2446_ = ((size_t)1ULL);
v___x_2447_ = lean_usize_add(v_i_2439_, v___x_2446_);
v___x_2448_ = lean_array_uset(v_bs_x27_2445_, v_i_2439_, v_msg_2443_);
v_i_2439_ = v___x_2447_;
v_bs_2440_ = v___x_2448_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4_spec__5___boxed(lean_object* v_sz_2450_, lean_object* v_i_2451_, lean_object* v_bs_2452_){
_start:
{
size_t v_sz_boxed_2453_; size_t v_i_boxed_2454_; lean_object* v_res_2455_; 
v_sz_boxed_2453_ = lean_unbox_usize(v_sz_2450_);
lean_dec(v_sz_2450_);
v_i_boxed_2454_ = lean_unbox_usize(v_i_2451_);
lean_dec(v_i_2451_);
v_res_2455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4_spec__5(v_sz_boxed_2453_, v_i_boxed_2454_, v_bs_2452_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(lean_object* v_oldTraces_2456_, lean_object* v_data_2457_, lean_object* v_ref_2458_, lean_object* v_msg_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_fileName_2465_; lean_object* v_fileMap_2466_; lean_object* v_options_2467_; lean_object* v_currRecDepth_2468_; lean_object* v_maxRecDepth_2469_; lean_object* v_ref_2470_; lean_object* v_currNamespace_2471_; lean_object* v_openDecls_2472_; lean_object* v_initHeartbeats_2473_; lean_object* v_maxHeartbeats_2474_; lean_object* v_quotContext_2475_; lean_object* v_currMacroScope_2476_; uint8_t v_diag_2477_; lean_object* v_cancelTk_x3f_2478_; uint8_t v_suppressElabErrors_2479_; lean_object* v_inheritedTraceOptions_2480_; lean_object* v___x_2481_; lean_object* v_traceState_2482_; lean_object* v_traces_2483_; lean_object* v_ref_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; size_t v_sz_2487_; size_t v___x_2488_; lean_object* v___x_2489_; lean_object* v_msg_2490_; lean_object* v___x_2491_; lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2529_; 
v_fileName_2465_ = lean_ctor_get(v___y_2462_, 0);
v_fileMap_2466_ = lean_ctor_get(v___y_2462_, 1);
v_options_2467_ = lean_ctor_get(v___y_2462_, 2);
v_currRecDepth_2468_ = lean_ctor_get(v___y_2462_, 3);
v_maxRecDepth_2469_ = lean_ctor_get(v___y_2462_, 4);
v_ref_2470_ = lean_ctor_get(v___y_2462_, 5);
v_currNamespace_2471_ = lean_ctor_get(v___y_2462_, 6);
v_openDecls_2472_ = lean_ctor_get(v___y_2462_, 7);
v_initHeartbeats_2473_ = lean_ctor_get(v___y_2462_, 8);
v_maxHeartbeats_2474_ = lean_ctor_get(v___y_2462_, 9);
v_quotContext_2475_ = lean_ctor_get(v___y_2462_, 10);
v_currMacroScope_2476_ = lean_ctor_get(v___y_2462_, 11);
v_diag_2477_ = lean_ctor_get_uint8(v___y_2462_, sizeof(void*)*14);
v_cancelTk_x3f_2478_ = lean_ctor_get(v___y_2462_, 12);
v_suppressElabErrors_2479_ = lean_ctor_get_uint8(v___y_2462_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2480_ = lean_ctor_get(v___y_2462_, 13);
v___x_2481_ = lean_st_ref_get(v___y_2463_);
v_traceState_2482_ = lean_ctor_get(v___x_2481_, 4);
lean_inc_ref(v_traceState_2482_);
lean_dec(v___x_2481_);
v_traces_2483_ = lean_ctor_get(v_traceState_2482_, 0);
lean_inc_ref(v_traces_2483_);
lean_dec_ref(v_traceState_2482_);
v_ref_2484_ = l_Lean_replaceRef(v_ref_2458_, v_ref_2470_);
lean_inc_ref(v_inheritedTraceOptions_2480_);
lean_inc(v_cancelTk_x3f_2478_);
lean_inc(v_currMacroScope_2476_);
lean_inc(v_quotContext_2475_);
lean_inc(v_maxHeartbeats_2474_);
lean_inc(v_initHeartbeats_2473_);
lean_inc(v_openDecls_2472_);
lean_inc(v_currNamespace_2471_);
lean_inc(v_maxRecDepth_2469_);
lean_inc(v_currRecDepth_2468_);
lean_inc_ref(v_options_2467_);
lean_inc_ref(v_fileMap_2466_);
lean_inc_ref(v_fileName_2465_);
v___x_2485_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2485_, 0, v_fileName_2465_);
lean_ctor_set(v___x_2485_, 1, v_fileMap_2466_);
lean_ctor_set(v___x_2485_, 2, v_options_2467_);
lean_ctor_set(v___x_2485_, 3, v_currRecDepth_2468_);
lean_ctor_set(v___x_2485_, 4, v_maxRecDepth_2469_);
lean_ctor_set(v___x_2485_, 5, v_ref_2484_);
lean_ctor_set(v___x_2485_, 6, v_currNamespace_2471_);
lean_ctor_set(v___x_2485_, 7, v_openDecls_2472_);
lean_ctor_set(v___x_2485_, 8, v_initHeartbeats_2473_);
lean_ctor_set(v___x_2485_, 9, v_maxHeartbeats_2474_);
lean_ctor_set(v___x_2485_, 10, v_quotContext_2475_);
lean_ctor_set(v___x_2485_, 11, v_currMacroScope_2476_);
lean_ctor_set(v___x_2485_, 12, v_cancelTk_x3f_2478_);
lean_ctor_set(v___x_2485_, 13, v_inheritedTraceOptions_2480_);
lean_ctor_set_uint8(v___x_2485_, sizeof(void*)*14, v_diag_2477_);
lean_ctor_set_uint8(v___x_2485_, sizeof(void*)*14 + 1, v_suppressElabErrors_2479_);
v___x_2486_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2483_);
lean_dec_ref(v_traces_2483_);
v_sz_2487_ = lean_array_size(v___x_2486_);
v___x_2488_ = ((size_t)0ULL);
v___x_2489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4_spec__5(v_sz_2487_, v___x_2488_, v___x_2486_);
v_msg_2490_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2490_, 0, v_data_2457_);
lean_ctor_set(v_msg_2490_, 1, v_msg_2459_);
lean_ctor_set(v_msg_2490_, 2, v___x_2489_);
v___x_2491_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_2490_, v___y_2460_, v___y_2461_, v___x_2485_, v___y_2463_);
lean_dec_ref(v___x_2485_);
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2494_ = v___x_2491_;
v_isShared_2495_ = v_isSharedCheck_2529_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2491_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2529_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2496_; lean_object* v_traceState_2497_; lean_object* v_env_2498_; lean_object* v_nextMacroScope_2499_; lean_object* v_ngen_2500_; lean_object* v_auxDeclNGen_2501_; lean_object* v_cache_2502_; lean_object* v_messages_2503_; lean_object* v_infoState_2504_; lean_object* v_snapshotTasks_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2528_; 
v___x_2496_ = lean_st_ref_take(v___y_2463_);
v_traceState_2497_ = lean_ctor_get(v___x_2496_, 4);
v_env_2498_ = lean_ctor_get(v___x_2496_, 0);
v_nextMacroScope_2499_ = lean_ctor_get(v___x_2496_, 1);
v_ngen_2500_ = lean_ctor_get(v___x_2496_, 2);
v_auxDeclNGen_2501_ = lean_ctor_get(v___x_2496_, 3);
v_cache_2502_ = lean_ctor_get(v___x_2496_, 5);
v_messages_2503_ = lean_ctor_get(v___x_2496_, 6);
v_infoState_2504_ = lean_ctor_get(v___x_2496_, 7);
v_snapshotTasks_2505_ = lean_ctor_get(v___x_2496_, 8);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2507_ = v___x_2496_;
v_isShared_2508_ = v_isSharedCheck_2528_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_snapshotTasks_2505_);
lean_inc(v_infoState_2504_);
lean_inc(v_messages_2503_);
lean_inc(v_cache_2502_);
lean_inc(v_traceState_2497_);
lean_inc(v_auxDeclNGen_2501_);
lean_inc(v_ngen_2500_);
lean_inc(v_nextMacroScope_2499_);
lean_inc(v_env_2498_);
lean_dec(v___x_2496_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2528_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
uint64_t v_tid_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2526_; 
v_tid_2509_ = lean_ctor_get_uint64(v_traceState_2497_, sizeof(void*)*1);
v_isSharedCheck_2526_ = !lean_is_exclusive(v_traceState_2497_);
if (v_isSharedCheck_2526_ == 0)
{
lean_object* v_unused_2527_; 
v_unused_2527_ = lean_ctor_get(v_traceState_2497_, 0);
lean_dec(v_unused_2527_);
v___x_2511_ = v_traceState_2497_;
v_isShared_2512_ = v_isSharedCheck_2526_;
goto v_resetjp_2510_;
}
else
{
lean_dec(v_traceState_2497_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2526_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2516_; 
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v_ref_2458_);
lean_ctor_set(v___x_2513_, 1, v_a_2492_);
v___x_2514_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2456_, v___x_2513_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2514_);
v___x_2516_ = v___x_2511_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v___x_2514_);
lean_ctor_set_uint64(v_reuseFailAlloc_2525_, sizeof(void*)*1, v_tid_2509_);
v___x_2516_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
lean_object* v___x_2518_; 
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 4, v___x_2516_);
v___x_2518_ = v___x_2507_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_env_2498_);
lean_ctor_set(v_reuseFailAlloc_2524_, 1, v_nextMacroScope_2499_);
lean_ctor_set(v_reuseFailAlloc_2524_, 2, v_ngen_2500_);
lean_ctor_set(v_reuseFailAlloc_2524_, 3, v_auxDeclNGen_2501_);
lean_ctor_set(v_reuseFailAlloc_2524_, 4, v___x_2516_);
lean_ctor_set(v_reuseFailAlloc_2524_, 5, v_cache_2502_);
lean_ctor_set(v_reuseFailAlloc_2524_, 6, v_messages_2503_);
lean_ctor_set(v_reuseFailAlloc_2524_, 7, v_infoState_2504_);
lean_ctor_set(v_reuseFailAlloc_2524_, 8, v_snapshotTasks_2505_);
v___x_2518_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2522_; 
v___x_2519_ = lean_st_ref_set(v___y_2463_, v___x_2518_);
v___x_2520_ = lean_box(0);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v___x_2520_);
v___x_2522_ = v___x_2494_;
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___boxed(lean_object* v_oldTraces_2530_, lean_object* v_data_2531_, lean_object* v_ref_2532_, lean_object* v_msg_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v_res_2539_; 
v_res_2539_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(v_oldTraces_2530_, v_data_2531_, v_ref_2532_, v_msg_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
return v_res_2539_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0));
v___x_2542_ = l_Lean_stringToMessageData(v___x_2541_);
return v___x_2542_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2544_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2));
v___x_2545_ = l_Lean_stringToMessageData(v___x_2544_);
return v___x_2545_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__4(void){
_start:
{
lean_object* v___x_2546_; double v___x_2547_; 
v___x_2546_ = lean_unsigned_to_nat(1000u);
v___x_2547_ = lean_float_of_nat(v___x_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object* v_cls_2548_, uint8_t v_collapsed_2549_, lean_object* v_tag_2550_, lean_object* v_opts_2551_, uint8_t v_clsEnabled_2552_, lean_object* v_oldTraces_2553_, lean_object* v_msg_2554_, lean_object* v_resStartStop_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v_fst_2561_; lean_object* v_snd_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2652_; 
v_fst_2561_ = lean_ctor_get(v_resStartStop_2555_, 0);
v_snd_2562_ = lean_ctor_get(v_resStartStop_2555_, 1);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_resStartStop_2555_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2564_ = v_resStartStop_2555_;
v_isShared_2565_ = v_isSharedCheck_2652_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_snd_2562_);
lean_inc(v_fst_2561_);
lean_dec(v_resStartStop_2555_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2652_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v_data_2569_; lean_object* v_fst_2572_; lean_object* v_snd_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2651_; 
v_fst_2572_ = lean_ctor_get(v_snd_2562_, 0);
v_snd_2573_ = lean_ctor_get(v_snd_2562_, 1);
v_isSharedCheck_2651_ = !lean_is_exclusive(v_snd_2562_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2575_ = v_snd_2562_;
v_isShared_2576_ = v_isSharedCheck_2651_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_snd_2573_);
lean_inc(v_fst_2572_);
lean_dec(v_snd_2562_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2651_;
goto v_resetjp_2574_;
}
v___jp_2566_:
{
lean_object* v___x_2570_; 
lean_inc(v___y_2568_);
v___x_2570_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(v_oldTraces_2553_, v_data_2569_, v___y_2568_, v___y_2567_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v___x_2571_; 
lean_dec_ref(v___x_2570_);
v___x_2571_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg(v_fst_2561_);
return v___x_2571_;
}
else
{
lean_dec(v_fst_2561_);
return v___x_2570_;
}
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; uint8_t v___x_2578_; lean_object* v___y_2580_; lean_object* v_a_2581_; uint8_t v___y_2605_; double v___y_2636_; 
v___x_2577_ = l_Lean_trace_profiler;
v___x_2578_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2551_, v___x_2577_);
if (v___x_2578_ == 0)
{
v___y_2605_ = v___x_2578_;
goto v___jp_2604_;
}
else
{
lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2641_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2642_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2551_, v___x_2641_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; lean_object* v___x_2644_; double v___x_2645_; double v___x_2646_; double v___x_2647_; 
v___x_2643_ = l_Lean_trace_profiler_threshold;
v___x_2644_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2551_, v___x_2643_);
v___x_2645_ = lean_float_of_nat(v___x_2644_);
v___x_2646_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__4);
v___x_2647_ = lean_float_div(v___x_2645_, v___x_2646_);
v___y_2636_ = v___x_2647_;
goto v___jp_2635_;
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; double v___x_2650_; 
v___x_2648_ = l_Lean_trace_profiler_threshold;
v___x_2649_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2551_, v___x_2648_);
v___x_2650_ = lean_float_of_nat(v___x_2649_);
v___y_2636_ = v___x_2650_;
goto v___jp_2635_;
}
}
v___jp_2579_:
{
uint8_t v_result_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2587_; 
v_result_2582_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(v_fst_2561_);
v___x_2583_ = l_Lean_TraceResult_toEmoji(v_result_2582_);
v___x_2584_ = l_Lean_stringToMessageData(v___x_2583_);
v___x_2585_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 7);
lean_ctor_set(v___x_2575_, 1, v___x_2585_);
lean_ctor_set(v___x_2575_, 0, v___x_2584_);
v___x_2587_ = v___x_2575_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2584_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v___x_2585_);
v___x_2587_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
lean_object* v_m_2589_; 
if (v_isShared_2565_ == 0)
{
lean_ctor_set_tag(v___x_2564_, 7);
lean_ctor_set(v___x_2564_, 1, v_a_2581_);
lean_ctor_set(v___x_2564_, 0, v___x_2587_);
v_m_2589_ = v___x_2564_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2587_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v_a_2581_);
v_m_2589_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; double v___x_2592_; lean_object* v_data_2593_; 
v___x_2590_ = lean_box(v_result_2582_);
v___x_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2590_);
v___x_2592_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0);
lean_inc_ref(v_tag_2550_);
lean_inc_ref(v___x_2591_);
lean_inc(v_cls_2548_);
v_data_2593_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2593_, 0, v_cls_2548_);
lean_ctor_set(v_data_2593_, 1, v___x_2591_);
lean_ctor_set(v_data_2593_, 2, v_tag_2550_);
lean_ctor_set_float(v_data_2593_, sizeof(void*)*3, v___x_2592_);
lean_ctor_set_float(v_data_2593_, sizeof(void*)*3 + 8, v___x_2592_);
lean_ctor_set_uint8(v_data_2593_, sizeof(void*)*3 + 16, v_collapsed_2549_);
if (v___x_2578_ == 0)
{
lean_dec_ref(v___x_2591_);
lean_dec(v_snd_2573_);
lean_dec(v_fst_2572_);
lean_dec_ref(v_tag_2550_);
lean_dec(v_cls_2548_);
v___y_2567_ = v_m_2589_;
v___y_2568_ = v___y_2580_;
v_data_2569_ = v_data_2593_;
goto v___jp_2566_;
}
else
{
lean_object* v_data_2594_; double v___x_2595_; double v___x_2596_; 
lean_dec_ref(v_data_2593_);
v_data_2594_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2594_, 0, v_cls_2548_);
lean_ctor_set(v_data_2594_, 1, v___x_2591_);
lean_ctor_set(v_data_2594_, 2, v_tag_2550_);
v___x_2595_ = lean_unbox_float(v_fst_2572_);
lean_dec(v_fst_2572_);
lean_ctor_set_float(v_data_2594_, sizeof(void*)*3, v___x_2595_);
v___x_2596_ = lean_unbox_float(v_snd_2573_);
lean_dec(v_snd_2573_);
lean_ctor_set_float(v_data_2594_, sizeof(void*)*3 + 8, v___x_2596_);
lean_ctor_set_uint8(v_data_2594_, sizeof(void*)*3 + 16, v_collapsed_2549_);
v___y_2567_ = v_m_2589_;
v___y_2568_ = v___y_2580_;
v_data_2569_ = v_data_2594_;
goto v___jp_2566_;
}
}
}
}
v___jp_2599_:
{
lean_object* v_ref_2600_; lean_object* v___x_2601_; 
v_ref_2600_ = lean_ctor_get(v___y_2558_, 5);
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
lean_inc(v_fst_2561_);
v___x_2601_ = lean_apply_6(v_msg_2554_, v_fst_2561_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, lean_box(0));
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref(v___x_2601_);
v___y_2580_ = v_ref_2600_;
v_a_2581_ = v_a_2602_;
goto v___jp_2579_;
}
else
{
lean_object* v___x_2603_; 
lean_dec_ref(v___x_2601_);
v___x_2603_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__3);
v___y_2580_ = v_ref_2600_;
v_a_2581_ = v___x_2603_;
goto v___jp_2579_;
}
}
v___jp_2604_:
{
if (v_clsEnabled_2552_ == 0)
{
if (v___y_2605_ == 0)
{
lean_object* v___x_2606_; lean_object* v_traceState_2607_; lean_object* v_env_2608_; lean_object* v_nextMacroScope_2609_; lean_object* v_ngen_2610_; lean_object* v_auxDeclNGen_2611_; lean_object* v_cache_2612_; lean_object* v_messages_2613_; lean_object* v_infoState_2614_; lean_object* v_snapshotTasks_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2634_; 
lean_del_object(v___x_2575_);
lean_dec(v_snd_2573_);
lean_dec(v_fst_2572_);
lean_del_object(v___x_2564_);
lean_dec_ref(v_msg_2554_);
lean_dec_ref(v_tag_2550_);
lean_dec(v_cls_2548_);
v___x_2606_ = lean_st_ref_take(v___y_2559_);
v_traceState_2607_ = lean_ctor_get(v___x_2606_, 4);
v_env_2608_ = lean_ctor_get(v___x_2606_, 0);
v_nextMacroScope_2609_ = lean_ctor_get(v___x_2606_, 1);
v_ngen_2610_ = lean_ctor_get(v___x_2606_, 2);
v_auxDeclNGen_2611_ = lean_ctor_get(v___x_2606_, 3);
v_cache_2612_ = lean_ctor_get(v___x_2606_, 5);
v_messages_2613_ = lean_ctor_get(v___x_2606_, 6);
v_infoState_2614_ = lean_ctor_get(v___x_2606_, 7);
v_snapshotTasks_2615_ = lean_ctor_get(v___x_2606_, 8);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2617_ = v___x_2606_;
v_isShared_2618_ = v_isSharedCheck_2634_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_snapshotTasks_2615_);
lean_inc(v_infoState_2614_);
lean_inc(v_messages_2613_);
lean_inc(v_cache_2612_);
lean_inc(v_traceState_2607_);
lean_inc(v_auxDeclNGen_2611_);
lean_inc(v_ngen_2610_);
lean_inc(v_nextMacroScope_2609_);
lean_inc(v_env_2608_);
lean_dec(v___x_2606_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2634_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
uint64_t v_tid_2619_; lean_object* v_traces_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2633_; 
v_tid_2619_ = lean_ctor_get_uint64(v_traceState_2607_, sizeof(void*)*1);
v_traces_2620_ = lean_ctor_get(v_traceState_2607_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v_traceState_2607_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2622_ = v_traceState_2607_;
v_isShared_2623_ = v_isSharedCheck_2633_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_traces_2620_);
lean_dec(v_traceState_2607_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2633_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2624_; lean_object* v___x_2626_; 
v___x_2624_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2553_, v_traces_2620_);
lean_dec_ref(v_traces_2620_);
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 0, v___x_2624_);
v___x_2626_ = v___x_2622_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2624_);
lean_ctor_set_uint64(v_reuseFailAlloc_2632_, sizeof(void*)*1, v_tid_2619_);
v___x_2626_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2628_; 
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 4, v___x_2626_);
v___x_2628_ = v___x_2617_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_env_2608_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_nextMacroScope_2609_);
lean_ctor_set(v_reuseFailAlloc_2631_, 2, v_ngen_2610_);
lean_ctor_set(v_reuseFailAlloc_2631_, 3, v_auxDeclNGen_2611_);
lean_ctor_set(v_reuseFailAlloc_2631_, 4, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2631_, 5, v_cache_2612_);
lean_ctor_set(v_reuseFailAlloc_2631_, 6, v_messages_2613_);
lean_ctor_set(v_reuseFailAlloc_2631_, 7, v_infoState_2614_);
lean_ctor_set(v_reuseFailAlloc_2631_, 8, v_snapshotTasks_2615_);
v___x_2628_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2629_ = lean_st_ref_set(v___y_2559_, v___x_2628_);
v___x_2630_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg(v_fst_2561_);
return v___x_2630_;
}
}
}
}
}
else
{
goto v___jp_2599_;
}
}
else
{
goto v___jp_2599_;
}
}
v___jp_2635_:
{
double v___x_2637_; double v___x_2638_; double v___x_2639_; uint8_t v___x_2640_; 
v___x_2637_ = lean_unbox_float(v_snd_2573_);
v___x_2638_ = lean_unbox_float(v_fst_2572_);
v___x_2639_ = lean_float_sub(v___x_2637_, v___x_2638_);
v___x_2640_ = lean_float_decLt(v___y_2636_, v___x_2639_);
v___y_2605_ = v___x_2640_;
goto v___jp_2604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___boxed(lean_object* v_cls_2653_, lean_object* v_collapsed_2654_, lean_object* v_tag_2655_, lean_object* v_opts_2656_, lean_object* v_clsEnabled_2657_, lean_object* v_oldTraces_2658_, lean_object* v_msg_2659_, lean_object* v_resStartStop_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
uint8_t v_collapsed_boxed_2666_; uint8_t v_clsEnabled_boxed_2667_; lean_object* v_res_2668_; 
v_collapsed_boxed_2666_ = lean_unbox(v_collapsed_2654_);
v_clsEnabled_boxed_2667_ = lean_unbox(v_clsEnabled_2657_);
v_res_2668_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2653_, v_collapsed_boxed_2666_, v_tag_2655_, v_opts_2656_, v_clsEnabled_boxed_2667_, v_oldTraces_2658_, v_msg_2659_, v_resStartStop_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec_ref(v_opts_2656_);
return v_res_2668_;
}
}
static double _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0(void){
_start:
{
lean_object* v___x_2669_; double v___x_2670_; 
v___x_2669_ = lean_unsigned_to_nat(1000000000u);
v___x_2670_ = lean_float_of_nat(v___x_2669_);
return v___x_2670_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2(void){
_start:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1));
v___x_2673_ = l_Lean_stringToMessageData(v___x_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(lean_object* v_ctorVal_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_toConstantVal_2680_; lean_object* v_options_2681_; lean_object* v_name_2682_; lean_object* v_levelParams_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2894_; 
v_toConstantVal_2680_ = lean_ctor_get(v_ctorVal_2674_, 0);
lean_inc_ref(v_toConstantVal_2680_);
v_options_2681_ = lean_ctor_get(v_a_2677_, 2);
v_name_2682_ = lean_ctor_get(v_toConstantVal_2680_, 0);
v_levelParams_2683_ = lean_ctor_get(v_toConstantVal_2680_, 1);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_toConstantVal_2680_);
if (v_isSharedCheck_2894_ == 0)
{
lean_object* v_unused_2895_; 
v_unused_2895_ = lean_ctor_get(v_toConstantVal_2680_, 2);
lean_dec(v_unused_2895_);
v___x_2685_ = v_toConstantVal_2680_;
v_isShared_2686_ = v_isSharedCheck_2894_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_levelParams_2683_);
lean_inc(v_name_2682_);
lean_dec(v_toConstantVal_2680_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2894_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v_inheritedTraceOptions_2687_; uint8_t v_hasTrace_2688_; lean_object* v_name_2689_; 
v_inheritedTraceOptions_2687_ = lean_ctor_get(v_a_2677_, 13);
v_hasTrace_2688_ = lean_ctor_get_uint8(v_options_2681_, sizeof(void*)*1);
lean_inc(v_name_2682_);
v_name_2689_ = l_Lean_Meta_mkInjectiveTheoremNameFor(v_name_2682_);
if (v_hasTrace_2688_ == 0)
{
lean_object* v___x_2690_; 
v___x_2690_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2728_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2728_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2728_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
if (lean_obj_tag(v_a_2691_) == 1)
{
lean_object* v_val_2695_; lean_object* v___x_2696_; 
lean_del_object(v___x_2693_);
v_val_2695_ = lean_ctor_get(v_a_2691_, 0);
lean_inc_n(v_val_2695_, 2);
lean_dec_ref(v_a_2691_);
v___x_2696_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2682_, v_val_2695_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2698_; lean_object* v_a_2699_; lean_object* v___x_2700_; lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2715_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref(v___x_2696_);
v___x_2698_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2695_, v_a_2676_);
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_a_2699_);
lean_dec_ref(v___x_2698_);
v___x_2700_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2697_, v_a_2676_);
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2703_ = v___x_2700_;
v_isShared_2704_ = v_isSharedCheck_2715_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2700_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2715_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
lean_inc(v_name_2689_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 2, v_a_2699_);
lean_ctor_set(v___x_2685_, 0, v_name_2689_);
v___x_2706_ = v___x_2685_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_name_2689_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v_levelParams_2683_);
lean_ctor_set(v_reuseFailAlloc_2714_, 2, v_a_2699_);
v___x_2706_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2711_; 
v___x_2707_ = lean_box(0);
v___x_2708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2708_, 0, v_name_2689_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
v___x_2709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2706_);
lean_ctor_set(v___x_2709_, 1, v_a_2701_);
lean_ctor_set(v___x_2709_, 2, v___x_2708_);
if (v_isShared_2704_ == 0)
{
lean_ctor_set_tag(v___x_2703_, 2);
lean_ctor_set(v___x_2703_, 0, v___x_2709_);
v___x_2711_ = v___x_2703_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2709_);
v___x_2711_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Lean_addDecl(v___x_2711_, v_hasTrace_2688_, v_a_2677_, v_a_2678_);
return v___x_2712_;
}
}
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec(v_val_2695_);
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
v_a_2716_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2696_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2696_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v___x_2724_; lean_object* v___x_2726_; 
lean_dec(v_a_2691_);
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v___x_2724_ = lean_box(0);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2724_);
v___x_2726_ = v___x_2693_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
else
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2736_; 
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v_a_2729_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2731_ = v___x_2690_;
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2690_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2734_; 
if (v_isShared_2732_ == 0)
{
v___x_2734_ = v___x_2731_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_a_2729_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
else
{
lean_object* v___f_2737_; lean_object* v_cls_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; lean_object* v___y_2743_; lean_object* v___y_2744_; lean_object* v_a_2745_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v_a_2757_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v_a_2762_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v_a_2773_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v_a_2788_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v_a_2793_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; 
lean_inc(v_name_2689_);
v___f_2737_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2737_, 0, v_name_2689_);
v_cls_2738_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2739_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_2740_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_2741_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2687_, v_options_2681_, v___x_2740_);
if (v___x_2741_ == 0)
{
lean_object* v___x_2836_; uint8_t v___x_2837_; 
v___x_2836_ = l_Lean_trace_profiler;
v___x_2837_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_2681_, v___x_2836_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; 
lean_dec_ref(v___f_2737_);
v___x_2838_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2885_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2841_ = v___x_2838_;
v_isShared_2842_ = v_isSharedCheck_2885_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2838_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2885_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
if (lean_obj_tag(v_a_2839_) == 1)
{
lean_object* v_val_2843_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v___y_2848_; 
lean_del_object(v___x_2841_);
v_val_2843_ = lean_ctor_get(v_a_2839_, 0);
lean_inc(v_val_2843_);
lean_dec_ref(v_a_2839_);
if (v___x_2741_ == 0)
{
v___y_2845_ = v_a_2675_;
v___y_2846_ = v_a_2676_;
v___y_2847_ = v_a_2677_;
v___y_2848_ = v_a_2678_;
goto v___jp_2844_;
}
else
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2877_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
lean_inc(v_val_2843_);
v___x_2878_ = l_Lean_MessageData_ofExpr(v_val_2843_);
v___x_2879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2738_, v___x_2879_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_dec_ref(v___x_2880_);
v___y_2845_ = v_a_2675_;
v___y_2846_ = v_a_2676_;
v___y_2847_ = v_a_2677_;
v___y_2848_ = v_a_2678_;
goto v___jp_2844_;
}
else
{
lean_dec(v_val_2843_);
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
return v___x_2880_;
}
}
v___jp_2844_:
{
lean_object* v___x_2849_; 
lean_inc(v_val_2843_);
v___x_2849_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2682_, v_val_2843_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2851_; lean_object* v_a_2852_; lean_object* v___x_2853_; lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2868_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref(v___x_2849_);
v___x_2851_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2843_, v___y_2846_);
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_a_2852_);
lean_dec_ref(v___x_2851_);
v___x_2853_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2850_, v___y_2846_);
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2856_ = v___x_2853_;
v_isShared_2857_ = v_isSharedCheck_2868_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2853_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2868_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2859_; 
lean_inc(v_name_2689_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 2, v_a_2852_);
lean_ctor_set(v___x_2685_, 0, v_name_2689_);
v___x_2859_ = v___x_2685_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_name_2689_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v_levelParams_2683_);
lean_ctor_set(v_reuseFailAlloc_2867_, 2, v_a_2852_);
v___x_2859_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2864_; 
v___x_2860_ = lean_box(0);
v___x_2861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2861_, 0, v_name_2689_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2859_);
lean_ctor_set(v___x_2862_, 1, v_a_2854_);
lean_ctor_set(v___x_2862_, 2, v___x_2861_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set_tag(v___x_2856_, 2);
lean_ctor_set(v___x_2856_, 0, v___x_2862_);
v___x_2864_ = v___x_2856_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
lean_object* v___x_2865_; 
v___x_2865_ = l_Lean_addDecl(v___x_2864_, v___x_2837_, v___y_2847_, v___y_2848_);
return v___x_2865_;
}
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec(v_val_2843_);
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
v_a_2869_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2849_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2849_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2883_; 
lean_dec(v_a_2839_);
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v___x_2881_ = lean_box(0);
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 0, v___x_2881_);
v___x_2883_ = v___x_2841_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2881_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
lean_dec(v_name_2689_);
lean_del_object(v___x_2685_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v_a_2886_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2838_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2838_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2886_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
}
else
{
lean_del_object(v___x_2685_);
goto v___jp_2801_;
}
}
else
{
lean_del_object(v___x_2685_);
goto v___jp_2801_;
}
v___jp_2742_:
{
lean_object* v___x_2746_; double v___x_2747_; double v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2746_ = lean_io_get_num_heartbeats();
v___x_2747_ = lean_float_of_nat(v___y_2744_);
v___x_2748_ = lean_float_of_nat(v___x_2746_);
v___x_2749_ = lean_box_float(v___x_2747_);
v___x_2750_ = lean_box_float(v___x_2748_);
v___x_2751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2749_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2752_, 0, v_a_2745_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2738_, v_hasTrace_2688_, v___x_2739_, v_options_2681_, v___x_2741_, v___y_2743_, v___f_2737_, v___x_2752_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
return v___x_2753_;
}
v___jp_2754_:
{
lean_object* v___x_2758_; 
v___x_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2758_, 0, v_a_2757_);
v___y_2743_ = v___y_2755_;
v___y_2744_ = v___y_2756_;
v_a_2745_ = v___x_2758_;
goto v___jp_2742_;
}
v___jp_2759_:
{
lean_object* v___x_2763_; 
v___x_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_a_2762_);
v___y_2743_ = v___y_2760_;
v___y_2744_ = v___y_2761_;
v_a_2745_ = v___x_2763_;
goto v___jp_2742_;
}
v___jp_2764_:
{
if (lean_obj_tag(v___y_2767_) == 0)
{
lean_object* v_a_2768_; 
v_a_2768_ = lean_ctor_get(v___y_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref(v___y_2767_);
v___y_2760_ = v___y_2765_;
v___y_2761_ = v___y_2766_;
v_a_2762_ = v_a_2768_;
goto v___jp_2759_;
}
else
{
lean_object* v_a_2769_; 
v_a_2769_ = lean_ctor_get(v___y_2767_, 0);
lean_inc(v_a_2769_);
lean_dec_ref(v___y_2767_);
v___y_2755_ = v___y_2765_;
v___y_2756_ = v___y_2766_;
v_a_2757_ = v_a_2769_;
goto v___jp_2754_;
}
}
v___jp_2770_:
{
lean_object* v___x_2774_; double v___x_2775_; double v___x_2776_; double v___x_2777_; double v___x_2778_; double v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2774_ = lean_io_mono_nanos_now();
v___x_2775_ = lean_float_of_nat(v___y_2772_);
v___x_2776_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_2777_ = lean_float_div(v___x_2775_, v___x_2776_);
v___x_2778_ = lean_float_of_nat(v___x_2774_);
v___x_2779_ = lean_float_div(v___x_2778_, v___x_2776_);
v___x_2780_ = lean_box_float(v___x_2777_);
v___x_2781_ = lean_box_float(v___x_2779_);
v___x_2782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2783_, 0, v_a_2773_);
lean_ctor_set(v___x_2783_, 1, v___x_2782_);
v___x_2784_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2738_, v_hasTrace_2688_, v___x_2739_, v_options_2681_, v___x_2741_, v___y_2771_, v___f_2737_, v___x_2783_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
return v___x_2784_;
}
v___jp_2785_:
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2789_, 0, v_a_2788_);
v___y_2771_ = v___y_2786_;
v___y_2772_ = v___y_2787_;
v_a_2773_ = v___x_2789_;
goto v___jp_2770_;
}
v___jp_2790_:
{
lean_object* v___x_2794_; 
v___x_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2794_, 0, v_a_2793_);
v___y_2771_ = v___y_2791_;
v___y_2772_ = v___y_2792_;
v_a_2773_ = v___x_2794_;
goto v___jp_2770_;
}
v___jp_2795_:
{
if (lean_obj_tag(v___y_2798_) == 0)
{
lean_object* v_a_2799_; 
v_a_2799_ = lean_ctor_get(v___y_2798_, 0);
lean_inc(v_a_2799_);
lean_dec_ref(v___y_2798_);
v___y_2786_ = v___y_2796_;
v___y_2787_ = v___y_2797_;
v_a_2788_ = v_a_2799_;
goto v___jp_2785_;
}
else
{
lean_object* v_a_2800_; 
v_a_2800_ = lean_ctor_get(v___y_2798_, 0);
lean_inc(v_a_2800_);
lean_dec_ref(v___y_2798_);
v___y_2791_ = v___y_2796_;
v___y_2792_ = v___y_2797_;
v_a_2793_ = v_a_2800_;
goto v___jp_2790_;
}
}
v___jp_2801_:
{
lean_object* v___x_2802_; lean_object* v_a_2803_; lean_object* v___x_2804_; uint8_t v___x_2805_; 
v___x_2802_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_2678_);
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref(v___x_2802_);
v___x_2804_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2805_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_2681_, v___x_2804_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = lean_io_mono_nanos_now();
v___x_2807_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref(v___x_2807_);
if (lean_obj_tag(v_a_2808_) == 1)
{
if (v___x_2741_ == 0)
{
lean_object* v_val_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v_val_2809_ = lean_ctor_get(v_a_2808_, 0);
lean_inc(v_val_2809_);
lean_dec_ref(v_a_2808_);
v___x_2810_ = lean_box(0);
v___x_2811_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2682_, v_val_2809_, v_name_2689_, v_levelParams_2683_, v___x_2805_, v___x_2810_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
v___y_2796_ = v_a_2803_;
v___y_2797_ = v___x_2806_;
v___y_2798_ = v___x_2811_;
goto v___jp_2795_;
}
else
{
lean_object* v_val_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v_val_2812_ = lean_ctor_get(v_a_2808_, 0);
lean_inc_n(v_val_2812_, 2);
lean_dec_ref(v_a_2808_);
v___x_2813_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_2814_ = l_Lean_MessageData_ofExpr(v_val_2812_);
v___x_2815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2813_);
lean_ctor_set(v___x_2815_, 1, v___x_2814_);
v___x_2816_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2738_, v___x_2815_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2818_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref(v___x_2816_);
v___x_2818_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2682_, v_val_2812_, v_name_2689_, v_levelParams_2683_, v___x_2805_, v_a_2817_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
v___y_2796_ = v_a_2803_;
v___y_2797_ = v___x_2806_;
v___y_2798_ = v___x_2818_;
goto v___jp_2795_;
}
else
{
lean_dec(v_val_2812_);
lean_dec(v_name_2689_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v___y_2796_ = v_a_2803_;
v___y_2797_ = v___x_2806_;
v___y_2798_ = v___x_2816_;
goto v___jp_2795_;
}
}
}
else
{
lean_object* v___x_2819_; 
lean_dec(v_a_2808_);
lean_dec(v_name_2689_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v___x_2819_ = lean_box(0);
v___y_2786_ = v_a_2803_;
v___y_2787_ = v___x_2806_;
v_a_2788_ = v___x_2819_;
goto v___jp_2785_;
}
}
else
{
lean_object* v_a_2820_; 
lean_dec(v_name_2689_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v_a_2820_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2820_);
lean_dec_ref(v___x_2807_);
v___y_2791_ = v_a_2803_;
v___y_2792_ = v___x_2806_;
v_a_2793_ = v_a_2820_;
goto v___jp_2790_;
}
}
else
{
lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2821_ = lean_io_get_num_heartbeats();
v___x_2822_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2822_) == 0)
{
lean_object* v_a_2823_; 
v_a_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_a_2823_);
lean_dec_ref(v___x_2822_);
if (lean_obj_tag(v_a_2823_) == 1)
{
if (v___x_2741_ == 0)
{
lean_object* v_val_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v_val_2824_ = lean_ctor_get(v_a_2823_, 0);
lean_inc(v_val_2824_);
lean_dec_ref(v_a_2823_);
v___x_2825_ = lean_box(0);
v___x_2826_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2682_, v_val_2824_, v_name_2689_, v_levelParams_2683_, v___x_2825_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
v___y_2765_ = v_a_2803_;
v___y_2766_ = v___x_2821_;
v___y_2767_ = v___x_2826_;
goto v___jp_2764_;
}
else
{
lean_object* v_val_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v_val_2827_ = lean_ctor_get(v_a_2823_, 0);
lean_inc_n(v_val_2827_, 2);
lean_dec_ref(v_a_2823_);
v___x_2828_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_2829_ = l_Lean_MessageData_ofExpr(v_val_2827_);
v___x_2830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2828_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2738_, v___x_2830_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2833_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref(v___x_2831_);
v___x_2833_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2682_, v_val_2827_, v_name_2689_, v_levelParams_2683_, v_a_2832_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
v___y_2765_ = v_a_2803_;
v___y_2766_ = v___x_2821_;
v___y_2767_ = v___x_2833_;
goto v___jp_2764_;
}
else
{
lean_dec(v_val_2827_);
lean_dec(v_name_2689_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v___y_2765_ = v_a_2803_;
v___y_2766_ = v___x_2821_;
v___y_2767_ = v___x_2831_;
goto v___jp_2764_;
}
}
}
else
{
lean_object* v___x_2834_; 
lean_dec(v_a_2823_);
lean_dec(v_name_2689_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v___x_2834_ = lean_box(0);
v___y_2760_ = v_a_2803_;
v___y_2761_ = v___x_2821_;
v_a_2762_ = v___x_2834_;
goto v___jp_2759_;
}
}
else
{
lean_object* v_a_2835_; 
lean_dec(v_name_2689_);
lean_dec(v_levelParams_2683_);
lean_dec(v_name_2682_);
v_a_2835_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_a_2835_);
lean_dec_ref(v___x_2822_);
v___y_2755_ = v_a_2803_;
v___y_2756_ = v___x_2821_;
v_a_2757_ = v_a_2835_;
goto v___jp_2754_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___boxed(lean_object* v_ctorVal_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_){
_start:
{
lean_object* v_res_2902_; 
v_res_2902_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(v_ctorVal_2896_, v_a_2897_, v_a_2898_, v_a_2899_, v_a_2900_);
lean_dec(v_a_2900_);
lean_dec_ref(v_a_2899_);
lean_dec(v_a_2898_);
lean_dec_ref(v_a_2897_);
return v_res_2902_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(lean_object* v_00_u03b1_2903_, lean_object* v_x_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v___x_2910_; 
v___x_2910_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___redArg(v_x_2904_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___boxed(lean_object* v_00_u03b1_2911_, lean_object* v_x_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
lean_object* v_res_2918_; 
v_res_2918_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(v_00_u03b1_2911_, v_x_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor(lean_object* v_ctorName_2922_){
_start:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2923_ = ((lean_object*)(l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1));
v___x_2924_ = l_Lean_Name_append(v_ctorName_2922_, v___x_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(lean_object* v_ctorVal_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_){
_start:
{
uint8_t v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = 1;
v___x_2932_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_2925_, v___x_2931_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f___boxed(lean_object* v_ctorVal_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_2933_, v_a_2934_, v_a_2935_, v_a_2936_, v_a_2937_);
lean_dec(v_a_2937_);
lean_dec_ref(v_a_2936_);
lean_dec(v_a_2935_);
lean_dec_ref(v_a_2934_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(lean_object* v_e_2940_, lean_object* v_t_2941_, lean_object* v_acc_2942_, lean_object* v_a_2943_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_t_2941_, v_a_2943_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2969_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2948_ = v___x_2945_;
v_isShared_2949_ = v_isSharedCheck_2969_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2945_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2969_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2955_; uint8_t v___x_2956_; 
v___x_2955_ = l_Lean_Expr_cleanupAnnotations(v_a_2946_);
v___x_2956_ = l_Lean_Expr_isApp(v___x_2955_);
if (v___x_2956_ == 0)
{
lean_dec_ref(v___x_2955_);
goto v___jp_2950_;
}
else
{
lean_object* v_arg_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v_arg_2957_ = lean_ctor_get(v___x_2955_, 1);
lean_inc_ref(v_arg_2957_);
v___x_2958_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2955_);
v___x_2959_ = l_Lean_Expr_isApp(v___x_2958_);
if (v___x_2959_ == 0)
{
lean_dec_ref(v___x_2958_);
lean_dec_ref(v_arg_2957_);
goto v___jp_2950_;
}
else
{
lean_object* v_arg_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; uint8_t v___x_2963_; 
v_arg_2960_ = lean_ctor_get(v___x_2958_, 1);
lean_inc_ref(v_arg_2960_);
v___x_2961_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2958_);
v___x_2962_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_2963_ = l_Lean_Expr_isConstOf(v___x_2961_, v___x_2962_);
lean_dec_ref(v___x_2961_);
if (v___x_2963_ == 0)
{
lean_dec_ref(v_arg_2960_);
lean_dec_ref(v_arg_2957_);
goto v___jp_2950_;
}
else
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
lean_del_object(v___x_2948_);
v___x_2964_ = lean_unsigned_to_nat(0u);
v___x_2965_ = l_Lean_mkProj(v___x_2962_, v___x_2964_, v_e_2940_);
lean_inc_ref(v___x_2965_);
v___x_2966_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v___x_2965_, v_arg_2960_, v_acc_2942_, v_a_2943_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref(v___x_2966_);
v_e_2940_ = v___x_2965_;
v_t_2941_ = v_arg_2957_;
v_acc_2942_ = v_a_2967_;
goto _start;
}
else
{
lean_dec_ref(v___x_2965_);
lean_dec_ref(v_arg_2957_);
return v___x_2966_;
}
}
}
}
v___jp_2950_:
{
lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2951_ = lean_array_push(v_acc_2942_, v_e_2940_);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 0, v___x_2951_);
v___x_2953_ = v___x_2948_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2977_; 
lean_dec_ref(v_acc_2942_);
lean_dec_ref(v_e_2940_);
v_a_2970_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2972_ = v___x_2945_;
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2945_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg___boxed(lean_object* v_e_2978_, lean_object* v_t_2979_, lean_object* v_acc_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_2978_, v_t_2979_, v_acc_2980_, v_a_2981_);
lean_dec(v_a_2981_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(lean_object* v_e_2984_, lean_object* v_t_2985_, lean_object* v_acc_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v___x_2992_; 
v___x_2992_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_2984_, v_t_2985_, v_acc_2986_, v_a_2988_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___boxed(lean_object* v_e_2993_, lean_object* v_t_2994_, lean_object* v_acc_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(v_e_2993_, v_t_2994_, v_acc_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v_a_2998_);
lean_dec(v_a_2997_);
lean_dec_ref(v_a_2996_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(lean_object* v_e_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_){
_start:
{
lean_object* v___x_3008_; 
lean_inc(v_a_3006_);
lean_inc_ref(v_a_3005_);
lean_inc(v_a_3004_);
lean_inc_ref(v_a_3003_);
lean_inc_ref(v_e_3002_);
v___x_3008_ = lean_infer_type(v_e_3002_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_a_3009_);
lean_dec_ref(v___x_3008_);
v___x_3010_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_3011_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_3002_, v_a_3009_, v___x_3010_, v_a_3004_);
return v___x_3011_;
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_dec_ref(v_e_3002_);
v_a_3012_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_3008_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_3008_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections___boxed(lean_object* v_e_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_){
_start:
{
lean_object* v_res_3026_; 
v_res_3026_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(v_e_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_);
lean_dec(v_a_3024_);
lean_dec_ref(v_a_3023_);
lean_dec(v_a_3022_);
lean_dec_ref(v_a_3021_);
return v_res_3026_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = lean_box(0);
v___x_3033_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__2));
v___x_3034_ = l_Lean_mkConst(v___x_3033_, v___x_3032_);
return v___x_3034_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__4));
v___x_3037_ = l_Lean_stringToMessageData(v___x_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(lean_object* v_b_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v___x_3044_; 
lean_inc(v_b_3038_);
v___x_3044_ = l_Lean_MVarId_getType(v_b_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3125_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3047_ = v___x_3044_;
v_isShared_3048_ = v_isSharedCheck_3125_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3044_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3125_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
if (lean_obj_tag(v_a_3045_) == 7)
{
lean_object* v_binderType_3049_; lean_object* v_body_3050_; uint8_t v___x_3051_; lean_object* v_mvarId_u2082_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; 
v_binderType_3049_ = lean_ctor_get(v_a_3045_, 1);
lean_inc_ref(v_binderType_3049_);
v_body_3050_ = lean_ctor_get(v_a_3045_, 2);
lean_inc_ref(v_body_3050_);
lean_dec_ref(v_a_3045_);
v___x_3051_ = l_Lean_Expr_hasLooseBVars(v_body_3050_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3070_; 
lean_del_object(v___x_3047_);
v___x_3070_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_3049_, v___y_3040_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3072_; uint8_t v___x_3073_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref(v___x_3070_);
v___x_3072_ = l_Lean_Expr_cleanupAnnotations(v_a_3071_);
v___x_3073_ = l_Lean_Expr_isApp(v___x_3072_);
if (v___x_3073_ == 0)
{
lean_dec_ref(v___x_3072_);
lean_dec_ref(v_body_3050_);
v_mvarId_u2082_3053_ = v_b_3038_;
v___y_3054_ = v___y_3039_;
v___y_3055_ = v___y_3040_;
v___y_3056_ = v___y_3041_;
v___y_3057_ = v___y_3042_;
goto v___jp_3052_;
}
else
{
lean_object* v_arg_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v_arg_3074_ = lean_ctor_get(v___x_3072_, 1);
lean_inc_ref(v_arg_3074_);
v___x_3075_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3072_);
v___x_3076_ = l_Lean_Expr_isApp(v___x_3075_);
if (v___x_3076_ == 0)
{
lean_dec_ref(v___x_3075_);
lean_dec_ref(v_arg_3074_);
lean_dec_ref(v_body_3050_);
v_mvarId_u2082_3053_ = v_b_3038_;
v___y_3054_ = v___y_3039_;
v___y_3055_ = v___y_3040_;
v___y_3056_ = v___y_3041_;
v___y_3057_ = v___y_3042_;
goto v___jp_3052_;
}
else
{
lean_object* v_arg_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; uint8_t v___x_3080_; 
v_arg_3077_ = lean_ctor_get(v___x_3075_, 1);
lean_inc_ref(v_arg_3077_);
v___x_3078_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3075_);
v___x_3079_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_3080_ = l_Lean_Expr_isConstOf(v___x_3078_, v___x_3079_);
lean_dec_ref(v___x_3078_);
if (v___x_3080_ == 0)
{
lean_dec_ref(v_arg_3077_);
lean_dec_ref(v_arg_3074_);
lean_dec_ref(v_body_3050_);
v_mvarId_u2082_3053_ = v_b_3038_;
v___y_3054_ = v___y_3039_;
v___y_3055_ = v___y_3040_;
v___y_3056_ = v___y_3041_;
v___y_3057_ = v___y_3042_;
goto v___jp_3052_;
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3081_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__3, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__3_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__3);
v___x_3082_ = l_Lean_mkApp3(v___x_3081_, v_arg_3077_, v_arg_3074_, v_body_3050_);
v___x_3083_ = lean_unsigned_to_nat(1u);
lean_inc(v_b_3038_);
v___x_3084_ = l_Lean_MVarId_applyN(v_b_3038_, v___x_3082_, v___x_3083_, v___x_3080_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3085_);
lean_dec_ref(v___x_3084_);
if (lean_obj_tag(v_a_3085_) == 1)
{
lean_object* v_tail_3101_; 
v_tail_3101_ = lean_ctor_get(v_a_3085_, 1);
if (lean_obj_tag(v_tail_3101_) == 0)
{
lean_object* v_head_3102_; 
lean_dec(v_b_3038_);
v_head_3102_ = lean_ctor_get(v_a_3085_, 0);
lean_inc(v_head_3102_);
lean_dec_ref(v_a_3085_);
v_mvarId_u2082_3053_ = v_head_3102_;
v___y_3054_ = v___y_3039_;
v___y_3055_ = v___y_3040_;
v___y_3056_ = v___y_3041_;
v___y_3057_ = v___y_3042_;
goto v___jp_3052_;
}
else
{
lean_dec_ref(v_a_3085_);
v___y_3087_ = v___y_3039_;
v___y_3088_ = v___y_3040_;
v___y_3089_ = v___y_3041_;
v___y_3090_ = v___y_3042_;
goto v___jp_3086_;
}
}
else
{
lean_dec(v_a_3085_);
v___y_3087_ = v___y_3039_;
v___y_3088_ = v___y_3040_;
v___y_3089_ = v___y_3041_;
v___y_3090_ = v___y_3042_;
goto v___jp_3086_;
}
v___jp_3086_:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3091_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__5, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__5_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___closed__5);
v___x_3092_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3091_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_dec_ref(v___x_3092_);
v_mvarId_u2082_3053_ = v_b_3038_;
v___y_3054_ = v___y_3087_;
v___y_3055_ = v___y_3088_;
v___y_3056_ = v___y_3089_;
v___y_3057_ = v___y_3090_;
goto v___jp_3052_;
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec(v_b_3038_);
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_3092_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3092_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v_b_3038_);
v_a_3103_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3084_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3084_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3118_; 
lean_dec_ref(v_body_3050_);
lean_dec(v_b_3038_);
v_a_3111_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3113_ = v___x_3070_;
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_3070_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3116_; 
if (v_isShared_3114_ == 0)
{
v___x_3116_ = v___x_3113_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_a_3111_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
}
else
{
lean_object* v___x_3120_; 
lean_dec_ref(v_body_3050_);
lean_dec_ref(v_binderType_3049_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 0, v_b_3038_);
v___x_3120_ = v___x_3047_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_b_3038_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
v___jp_3052_:
{
lean_object* v___x_3058_; 
v___x_3058_ = l_Lean_Meta_introSubstEq(v_mvarId_u2082_3053_, v___x_3051_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v_snd_3060_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref(v___x_3058_);
v_snd_3060_ = lean_ctor_get(v_a_3059_, 1);
lean_inc(v_snd_3060_);
lean_dec(v_a_3059_);
v_b_3038_ = v_snd_3060_;
goto _start;
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3069_; 
v_a_3062_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3064_ = v___x_3058_;
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3058_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3067_; 
if (v_isShared_3065_ == 0)
{
v___x_3067_ = v___x_3064_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_a_3062_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
}
else
{
lean_object* v___x_3123_; 
lean_dec(v_a_3045_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 0, v_b_3038_);
v___x_3123_ = v___x_3047_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_b_3038_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
lean_dec(v_b_3038_);
v_a_3126_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3044_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3044_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___boxed(lean_object* v_b_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(v_b_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_);
lean_dec(v___y_3138_);
lean_dec_ref(v___y_3137_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v_x_3141_, lean_object* v_x_3142_, lean_object* v_x_3143_, lean_object* v_x_3144_){
_start:
{
lean_object* v_ks_3145_; lean_object* v_vs_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3170_; 
v_ks_3145_ = lean_ctor_get(v_x_3141_, 0);
v_vs_3146_ = lean_ctor_get(v_x_3141_, 1);
v_isSharedCheck_3170_ = !lean_is_exclusive(v_x_3141_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3148_ = v_x_3141_;
v_isShared_3149_ = v_isSharedCheck_3170_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_vs_3146_);
lean_inc(v_ks_3145_);
lean_dec(v_x_3141_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3170_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3150_; uint8_t v___x_3151_; 
v___x_3150_ = lean_array_get_size(v_ks_3145_);
v___x_3151_ = lean_nat_dec_lt(v_x_3142_, v___x_3150_);
if (v___x_3151_ == 0)
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3155_; 
lean_dec(v_x_3142_);
v___x_3152_ = lean_array_push(v_ks_3145_, v_x_3143_);
v___x_3153_ = lean_array_push(v_vs_3146_, v_x_3144_);
if (v_isShared_3149_ == 0)
{
lean_ctor_set(v___x_3148_, 1, v___x_3153_);
lean_ctor_set(v___x_3148_, 0, v___x_3152_);
v___x_3155_ = v___x_3148_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v___x_3152_);
lean_ctor_set(v_reuseFailAlloc_3156_, 1, v___x_3153_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
else
{
lean_object* v_k_x27_3157_; uint8_t v___x_3158_; 
v_k_x27_3157_ = lean_array_fget_borrowed(v_ks_3145_, v_x_3142_);
v___x_3158_ = l_Lean_instBEqMVarId_beq(v_x_3143_, v_k_x27_3157_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3160_; 
if (v_isShared_3149_ == 0)
{
v___x_3160_ = v___x_3148_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_ks_3145_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v_vs_3146_);
v___x_3160_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_unsigned_to_nat(1u);
v___x_3162_ = lean_nat_add(v_x_3142_, v___x_3161_);
lean_dec(v_x_3142_);
v_x_3141_ = v___x_3160_;
v_x_3142_ = v___x_3162_;
goto _start;
}
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3168_; 
v___x_3165_ = lean_array_fset(v_ks_3145_, v_x_3142_, v_x_3143_);
v___x_3166_ = lean_array_fset(v_vs_3146_, v_x_3142_, v_x_3144_);
lean_dec(v_x_3142_);
if (v_isShared_3149_ == 0)
{
lean_ctor_set(v___x_3148_, 1, v___x_3166_);
lean_ctor_set(v___x_3148_, 0, v___x_3165_);
v___x_3168_ = v___x_3148_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3165_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v___x_3166_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_3171_, lean_object* v_k_3172_, lean_object* v_v_3173_){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = lean_unsigned_to_nat(0u);
v___x_3175_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_n_3171_, v___x_3174_, v_k_3172_, v_v_3173_);
return v___x_3175_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_3176_; size_t v___x_3177_; size_t v___x_3178_; 
v___x_3176_ = ((size_t)5ULL);
v___x_3177_ = ((size_t)1ULL);
v___x_3178_ = lean_usize_shift_left(v___x_3177_, v___x_3176_);
return v___x_3178_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_3179_; size_t v___x_3180_; size_t v___x_3181_; 
v___x_3179_ = ((size_t)1ULL);
v___x_3180_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3181_ = lean_usize_sub(v___x_3180_, v___x_3179_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_3182_; 
v___x_3182_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(lean_object* v_x_3183_, size_t v_x_3184_, size_t v_x_3185_, lean_object* v_x_3186_, lean_object* v_x_3187_){
_start:
{
if (lean_obj_tag(v_x_3183_) == 0)
{
lean_object* v_es_3188_; size_t v___x_3189_; size_t v___x_3190_; size_t v___x_3191_; size_t v___x_3192_; lean_object* v_j_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; 
v_es_3188_ = lean_ctor_get(v_x_3183_, 0);
v___x_3189_ = ((size_t)5ULL);
v___x_3190_ = ((size_t)1ULL);
v___x_3191_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_3192_ = lean_usize_land(v_x_3184_, v___x_3191_);
v_j_3193_ = lean_usize_to_nat(v___x_3192_);
v___x_3194_ = lean_array_get_size(v_es_3188_);
v___x_3195_ = lean_nat_dec_lt(v_j_3193_, v___x_3194_);
if (v___x_3195_ == 0)
{
lean_dec(v_j_3193_);
lean_dec(v_x_3187_);
lean_dec(v_x_3186_);
return v_x_3183_;
}
else
{
lean_object* v___x_3197_; uint8_t v_isShared_3198_; uint8_t v_isSharedCheck_3232_; 
lean_inc_ref(v_es_3188_);
v_isSharedCheck_3232_ = !lean_is_exclusive(v_x_3183_);
if (v_isSharedCheck_3232_ == 0)
{
lean_object* v_unused_3233_; 
v_unused_3233_ = lean_ctor_get(v_x_3183_, 0);
lean_dec(v_unused_3233_);
v___x_3197_ = v_x_3183_;
v_isShared_3198_ = v_isSharedCheck_3232_;
goto v_resetjp_3196_;
}
else
{
lean_dec(v_x_3183_);
v___x_3197_ = lean_box(0);
v_isShared_3198_ = v_isSharedCheck_3232_;
goto v_resetjp_3196_;
}
v_resetjp_3196_:
{
lean_object* v_v_3199_; lean_object* v___x_3200_; lean_object* v_xs_x27_3201_; lean_object* v___y_3203_; 
v_v_3199_ = lean_array_fget(v_es_3188_, v_j_3193_);
v___x_3200_ = lean_box(0);
v_xs_x27_3201_ = lean_array_fset(v_es_3188_, v_j_3193_, v___x_3200_);
switch(lean_obj_tag(v_v_3199_))
{
case 0:
{
lean_object* v_key_3208_; lean_object* v_val_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3219_; 
v_key_3208_ = lean_ctor_get(v_v_3199_, 0);
v_val_3209_ = lean_ctor_get(v_v_3199_, 1);
v_isSharedCheck_3219_ = !lean_is_exclusive(v_v_3199_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3211_ = v_v_3199_;
v_isShared_3212_ = v_isSharedCheck_3219_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_val_3209_);
lean_inc(v_key_3208_);
lean_dec(v_v_3199_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3219_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
uint8_t v___x_3213_; 
v___x_3213_ = l_Lean_instBEqMVarId_beq(v_x_3186_, v_key_3208_);
if (v___x_3213_ == 0)
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
lean_del_object(v___x_3211_);
v___x_3214_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3208_, v_val_3209_, v_x_3186_, v_x_3187_);
v___x_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
v___y_3203_ = v___x_3215_;
goto v___jp_3202_;
}
else
{
lean_object* v___x_3217_; 
lean_dec(v_val_3209_);
lean_dec(v_key_3208_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 1, v_x_3187_);
lean_ctor_set(v___x_3211_, 0, v_x_3186_);
v___x_3217_ = v___x_3211_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_x_3186_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v_x_3187_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
v___y_3203_ = v___x_3217_;
goto v___jp_3202_;
}
}
}
}
case 1:
{
lean_object* v_node_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3230_; 
v_node_3220_ = lean_ctor_get(v_v_3199_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v_v_3199_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3222_ = v_v_3199_;
v_isShared_3223_ = v_isSharedCheck_3230_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_node_3220_);
lean_dec(v_v_3199_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3230_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
size_t v___x_3224_; size_t v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3228_; 
v___x_3224_ = lean_usize_shift_right(v_x_3184_, v___x_3189_);
v___x_3225_ = lean_usize_add(v_x_3185_, v___x_3190_);
v___x_3226_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_node_3220_, v___x_3224_, v___x_3225_, v_x_3186_, v_x_3187_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 0, v___x_3226_);
v___x_3228_ = v___x_3222_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3226_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
v___y_3203_ = v___x_3228_;
goto v___jp_3202_;
}
}
}
default: 
{
lean_object* v___x_3231_; 
v___x_3231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3231_, 0, v_x_3186_);
lean_ctor_set(v___x_3231_, 1, v_x_3187_);
v___y_3203_ = v___x_3231_;
goto v___jp_3202_;
}
}
v___jp_3202_:
{
lean_object* v___x_3204_; lean_object* v___x_3206_; 
v___x_3204_ = lean_array_fset(v_xs_x27_3201_, v_j_3193_, v___y_3203_);
lean_dec(v_j_3193_);
if (v_isShared_3198_ == 0)
{
lean_ctor_set(v___x_3197_, 0, v___x_3204_);
v___x_3206_ = v___x_3197_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3204_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
}
else
{
lean_object* v_ks_3234_; lean_object* v_vs_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3255_; 
v_ks_3234_ = lean_ctor_get(v_x_3183_, 0);
v_vs_3235_ = lean_ctor_get(v_x_3183_, 1);
v_isSharedCheck_3255_ = !lean_is_exclusive(v_x_3183_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3237_ = v_x_3183_;
v_isShared_3238_ = v_isSharedCheck_3255_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_vs_3235_);
lean_inc(v_ks_3234_);
lean_dec(v_x_3183_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3255_;
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
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_ks_3234_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v_vs_3235_);
v___x_3240_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
lean_object* v_newNode_3241_; uint8_t v___y_3243_; size_t v___x_3249_; uint8_t v___x_3250_; 
v_newNode_3241_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(v___x_3240_, v_x_3186_, v_x_3187_);
v___x_3249_ = ((size_t)7ULL);
v___x_3250_ = lean_usize_dec_le(v___x_3249_, v_x_3185_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; lean_object* v___x_3252_; uint8_t v___x_3253_; 
v___x_3251_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3241_);
v___x_3252_ = lean_unsigned_to_nat(4u);
v___x_3253_ = lean_nat_dec_lt(v___x_3251_, v___x_3252_);
lean_dec(v___x_3251_);
v___y_3243_ = v___x_3253_;
goto v___jp_3242_;
}
else
{
v___y_3243_ = v___x_3250_;
goto v___jp_3242_;
}
v___jp_3242_:
{
if (v___y_3243_ == 0)
{
lean_object* v_ks_3244_; lean_object* v_vs_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v_ks_3244_ = lean_ctor_get(v_newNode_3241_, 0);
lean_inc_ref(v_ks_3244_);
v_vs_3245_ = lean_ctor_get(v_newNode_3241_, 1);
lean_inc_ref(v_vs_3245_);
lean_dec_ref(v_newNode_3241_);
v___x_3246_ = lean_unsigned_to_nat(0u);
v___x_3247_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_3248_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_x_3185_, v_ks_3244_, v_vs_3245_, v___x_3246_, v___x_3247_);
lean_dec_ref(v_vs_3245_);
lean_dec_ref(v_ks_3244_);
return v___x_3248_;
}
else
{
return v_newNode_3241_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_3256_, lean_object* v_keys_3257_, lean_object* v_vals_3258_, lean_object* v_i_3259_, lean_object* v_entries_3260_){
_start:
{
lean_object* v___x_3261_; uint8_t v___x_3262_; 
v___x_3261_ = lean_array_get_size(v_keys_3257_);
v___x_3262_ = lean_nat_dec_lt(v_i_3259_, v___x_3261_);
if (v___x_3262_ == 0)
{
lean_dec(v_i_3259_);
return v_entries_3260_;
}
else
{
lean_object* v_k_3263_; lean_object* v_v_3264_; uint64_t v___x_3265_; size_t v_h_3266_; size_t v___x_3267_; lean_object* v___x_3268_; size_t v___x_3269_; size_t v___x_3270_; size_t v___x_3271_; size_t v_h_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v_k_3263_ = lean_array_fget_borrowed(v_keys_3257_, v_i_3259_);
v_v_3264_ = lean_array_fget_borrowed(v_vals_3258_, v_i_3259_);
v___x_3265_ = l_Lean_instHashableMVarId_hash(v_k_3263_);
v_h_3266_ = lean_uint64_to_usize(v___x_3265_);
v___x_3267_ = ((size_t)5ULL);
v___x_3268_ = lean_unsigned_to_nat(1u);
v___x_3269_ = ((size_t)1ULL);
v___x_3270_ = lean_usize_sub(v_depth_3256_, v___x_3269_);
v___x_3271_ = lean_usize_mul(v___x_3267_, v___x_3270_);
v_h_3272_ = lean_usize_shift_right(v_h_3266_, v___x_3271_);
v___x_3273_ = lean_nat_add(v_i_3259_, v___x_3268_);
lean_dec(v_i_3259_);
lean_inc(v_v_3264_);
lean_inc(v_k_3263_);
v___x_3274_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_entries_3260_, v_h_3272_, v_depth_3256_, v_k_3263_, v_v_3264_);
v_i_3259_ = v___x_3273_;
v_entries_3260_ = v___x_3274_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_3276_, lean_object* v_keys_3277_, lean_object* v_vals_3278_, lean_object* v_i_3279_, lean_object* v_entries_3280_){
_start:
{
size_t v_depth_boxed_3281_; lean_object* v_res_3282_; 
v_depth_boxed_3281_ = lean_unbox_usize(v_depth_3276_);
lean_dec(v_depth_3276_);
v_res_3282_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_3281_, v_keys_3277_, v_vals_3278_, v_i_3279_, v_entries_3280_);
lean_dec_ref(v_vals_3278_);
lean_dec_ref(v_keys_3277_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_3283_, lean_object* v_x_3284_, lean_object* v_x_3285_, lean_object* v_x_3286_, lean_object* v_x_3287_){
_start:
{
size_t v_x_5080__boxed_3288_; size_t v_x_5081__boxed_3289_; lean_object* v_res_3290_; 
v_x_5080__boxed_3288_ = lean_unbox_usize(v_x_3284_);
lean_dec(v_x_3284_);
v_x_5081__boxed_3289_ = lean_unbox_usize(v_x_3285_);
lean_dec(v_x_3285_);
v_res_3290_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3283_, v_x_5080__boxed_3288_, v_x_5081__boxed_3289_, v_x_3286_, v_x_3287_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(lean_object* v_x_3291_, lean_object* v_x_3292_, lean_object* v_x_3293_){
_start:
{
uint64_t v___x_3294_; size_t v___x_3295_; size_t v___x_3296_; lean_object* v___x_3297_; 
v___x_3294_ = l_Lean_instHashableMVarId_hash(v_x_3292_);
v___x_3295_ = lean_uint64_to_usize(v___x_3294_);
v___x_3296_ = ((size_t)1ULL);
v___x_3297_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3291_, v___x_3295_, v___x_3296_, v_x_3292_, v_x_3293_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(lean_object* v_mvarId_3298_, lean_object* v_val_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v___x_3302_; lean_object* v_mctx_3303_; lean_object* v_cache_3304_; lean_object* v_zetaDeltaFVarIds_3305_; lean_object* v_postponed_3306_; lean_object* v_diag_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3334_; 
v___x_3302_ = lean_st_ref_take(v___y_3300_);
v_mctx_3303_ = lean_ctor_get(v___x_3302_, 0);
v_cache_3304_ = lean_ctor_get(v___x_3302_, 1);
v_zetaDeltaFVarIds_3305_ = lean_ctor_get(v___x_3302_, 2);
v_postponed_3306_ = lean_ctor_get(v___x_3302_, 3);
v_diag_3307_ = lean_ctor_get(v___x_3302_, 4);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3309_ = v___x_3302_;
v_isShared_3310_ = v_isSharedCheck_3334_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_diag_3307_);
lean_inc(v_postponed_3306_);
lean_inc(v_zetaDeltaFVarIds_3305_);
lean_inc(v_cache_3304_);
lean_inc(v_mctx_3303_);
lean_dec(v___x_3302_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3334_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v_depth_3311_; lean_object* v_levelAssignDepth_3312_; lean_object* v_mvarCounter_3313_; lean_object* v_lDepth_3314_; lean_object* v_decls_3315_; lean_object* v_userNames_3316_; lean_object* v_lAssignment_3317_; lean_object* v_eAssignment_3318_; lean_object* v_dAssignment_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3333_; 
v_depth_3311_ = lean_ctor_get(v_mctx_3303_, 0);
v_levelAssignDepth_3312_ = lean_ctor_get(v_mctx_3303_, 1);
v_mvarCounter_3313_ = lean_ctor_get(v_mctx_3303_, 2);
v_lDepth_3314_ = lean_ctor_get(v_mctx_3303_, 3);
v_decls_3315_ = lean_ctor_get(v_mctx_3303_, 4);
v_userNames_3316_ = lean_ctor_get(v_mctx_3303_, 5);
v_lAssignment_3317_ = lean_ctor_get(v_mctx_3303_, 6);
v_eAssignment_3318_ = lean_ctor_get(v_mctx_3303_, 7);
v_dAssignment_3319_ = lean_ctor_get(v_mctx_3303_, 8);
v_isSharedCheck_3333_ = !lean_is_exclusive(v_mctx_3303_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3321_ = v_mctx_3303_;
v_isShared_3322_ = v_isSharedCheck_3333_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_dAssignment_3319_);
lean_inc(v_eAssignment_3318_);
lean_inc(v_lAssignment_3317_);
lean_inc(v_userNames_3316_);
lean_inc(v_decls_3315_);
lean_inc(v_lDepth_3314_);
lean_inc(v_mvarCounter_3313_);
lean_inc(v_levelAssignDepth_3312_);
lean_inc(v_depth_3311_);
lean_dec(v_mctx_3303_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3333_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3323_; lean_object* v___x_3325_; 
v___x_3323_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(v_eAssignment_3318_, v_mvarId_3298_, v_val_3299_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 7, v___x_3323_);
v___x_3325_ = v___x_3321_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_depth_3311_);
lean_ctor_set(v_reuseFailAlloc_3332_, 1, v_levelAssignDepth_3312_);
lean_ctor_set(v_reuseFailAlloc_3332_, 2, v_mvarCounter_3313_);
lean_ctor_set(v_reuseFailAlloc_3332_, 3, v_lDepth_3314_);
lean_ctor_set(v_reuseFailAlloc_3332_, 4, v_decls_3315_);
lean_ctor_set(v_reuseFailAlloc_3332_, 5, v_userNames_3316_);
lean_ctor_set(v_reuseFailAlloc_3332_, 6, v_lAssignment_3317_);
lean_ctor_set(v_reuseFailAlloc_3332_, 7, v___x_3323_);
lean_ctor_set(v_reuseFailAlloc_3332_, 8, v_dAssignment_3319_);
v___x_3325_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
lean_object* v___x_3327_; 
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 0, v___x_3325_);
v___x_3327_ = v___x_3309_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v___x_3325_);
lean_ctor_set(v_reuseFailAlloc_3331_, 1, v_cache_3304_);
lean_ctor_set(v_reuseFailAlloc_3331_, 2, v_zetaDeltaFVarIds_3305_);
lean_ctor_set(v_reuseFailAlloc_3331_, 3, v_postponed_3306_);
lean_ctor_set(v_reuseFailAlloc_3331_, 4, v_diag_3307_);
v___x_3327_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3328_ = lean_st_ref_set(v___y_3300_, v___x_3327_);
v___x_3329_ = lean_box(0);
v___x_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3329_);
return v___x_3330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg___boxed(lean_object* v_mvarId_3335_, lean_object* v_val_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_mvarId_3335_, v_val_3336_, v___y_3337_);
lean_dec(v___y_3337_);
return v_res_3339_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = lean_box(0);
v___x_3346_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2));
v___x_3347_ = l_Lean_mkConst(v___x_3346_, v___x_3345_);
return v___x_3347_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5));
v___x_3354_ = l_Lean_stringToMessageData(v___x_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(lean_object* v_ctorVal_3355_, lean_object* v_xs_3356_, lean_object* v_type_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3363_ = lean_box(0);
v___x_3364_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_3357_, v___x_3363_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; uint8_t v___x_3369_; uint8_t v___x_3370_; lean_object* v___y_3372_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
lean_dec_ref(v___x_3364_);
v___x_3366_ = l_Lean_Expr_mvarId_x21(v_a_3365_);
v___x_3367_ = lean_box(0);
v___x_3368_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3);
v___x_3369_ = 1;
v___x_3370_ = 0;
v___x_3383_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4));
v___x_3384_ = lean_box(0);
v___x_3385_ = l_Lean_MVarId_apply(v___x_3366_, v___x_3368_, v___x_3383_, v___x_3384_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3391_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
lean_inc(v_a_3386_);
lean_dec_ref(v___x_3385_);
if (lean_obj_tag(v_a_3386_) == 1)
{
lean_object* v_tail_3400_; 
v_tail_3400_ = lean_ctor_get(v_a_3386_, 1);
lean_inc(v_tail_3400_);
if (lean_obj_tag(v_tail_3400_) == 1)
{
lean_object* v_tail_3401_; 
v_tail_3401_ = lean_ctor_get(v_tail_3400_, 1);
if (lean_obj_tag(v_tail_3401_) == 0)
{
lean_object* v_toConstantVal_3402_; lean_object* v_head_3403_; lean_object* v_head_3404_; lean_object* v_name_3405_; lean_object* v_levelParams_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v_toConstantVal_3402_ = lean_ctor_get(v_ctorVal_3355_, 0);
lean_inc_ref(v_toConstantVal_3402_);
lean_dec_ref(v_ctorVal_3355_);
v_head_3403_ = lean_ctor_get(v_a_3386_, 0);
lean_inc(v_head_3403_);
lean_dec_ref(v_a_3386_);
v_head_3404_ = lean_ctor_get(v_tail_3400_, 0);
lean_inc(v_head_3404_);
lean_dec_ref(v_tail_3400_);
v_name_3405_ = lean_ctor_get(v_toConstantVal_3402_, 0);
lean_inc_n(v_name_3405_, 2);
v_levelParams_3406_ = lean_ctor_get(v_toConstantVal_3402_, 1);
lean_inc(v_levelParams_3406_);
lean_dec_ref(v_toConstantVal_3402_);
v___x_3407_ = l_Lean_Meta_mkInjectiveTheoremNameFor(v_name_3405_);
v___x_3408_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_3406_, v___x_3367_);
v___x_3409_ = l_Lean_mkConst(v___x_3407_, v___x_3408_);
v___x_3410_ = l_Lean_mkAppN(v___x_3409_, v_xs_3356_);
v___x_3411_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_head_3403_, v___x_3410_, v___y_3359_);
lean_dec_ref(v___x_3411_);
v___x_3412_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(v_head_3404_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3413_; lean_object* v___x_3414_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3413_);
lean_dec_ref(v___x_3412_);
v___x_3414_ = l_Lean_MVarId_refl(v_a_3413_, v___x_3369_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_dec(v_name_3405_);
v___y_3372_ = v___x_3414_;
goto v___jp_3371_;
}
else
{
lean_object* v_a_3415_; uint8_t v___y_3417_; uint8_t v___x_3420_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
v___x_3420_ = l_Lean_Exception_isInterrupt(v_a_3415_);
if (v___x_3420_ == 0)
{
uint8_t v___x_3421_; 
v___x_3421_ = l_Lean_Exception_isRuntime(v_a_3415_);
v___y_3417_ = v___x_3421_;
goto v___jp_3416_;
}
else
{
lean_dec(v_a_3415_);
v___y_3417_ = v___x_3420_;
goto v___jp_3416_;
}
v___jp_3416_:
{
if (v___y_3417_ == 0)
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
lean_dec_ref(v___x_3414_);
v___x_3418_ = l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(v_name_3405_);
v___x_3419_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3418_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
v___y_3372_ = v___x_3419_;
goto v___jp_3371_;
}
else
{
lean_dec(v_name_3405_);
v___y_3372_ = v___x_3414_;
goto v___jp_3371_;
}
}
}
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec(v_name_3405_);
lean_dec(v_a_3365_);
v_a_3422_ = lean_ctor_get(v___x_3412_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3412_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3412_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
else
{
lean_dec_ref(v_tail_3400_);
lean_dec_ref(v_a_3386_);
lean_dec(v_a_3365_);
v___y_3388_ = v___y_3358_;
v___y_3389_ = v___y_3359_;
v___y_3390_ = v___y_3360_;
v___y_3391_ = v___y_3361_;
goto v___jp_3387_;
}
}
else
{
lean_dec_ref(v_a_3386_);
lean_dec(v_tail_3400_);
lean_dec(v_a_3365_);
v___y_3388_ = v___y_3358_;
v___y_3389_ = v___y_3359_;
v___y_3390_ = v___y_3360_;
v___y_3391_ = v___y_3361_;
goto v___jp_3387_;
}
}
else
{
lean_dec(v_a_3386_);
lean_dec(v_a_3365_);
v___y_3388_ = v___y_3358_;
v___y_3389_ = v___y_3359_;
v___y_3390_ = v___y_3360_;
v___y_3391_ = v___y_3361_;
goto v___jp_3387_;
}
v___jp_3387_:
{
lean_object* v_toConstantVal_3392_; lean_object* v_name_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v_toConstantVal_3392_ = lean_ctor_get(v_ctorVal_3355_, 0);
lean_inc_ref(v_toConstantVal_3392_);
lean_dec_ref(v_ctorVal_3355_);
v_name_3393_ = lean_ctor_get(v_toConstantVal_3392_, 0);
lean_inc(v_name_3393_);
lean_dec_ref(v_toConstantVal_3392_);
v___x_3394_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6);
v___x_3395_ = l_Lean_MessageData_ofName(v_name_3393_);
v___x_3396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3394_);
lean_ctor_set(v___x_3396_, 1, v___x_3395_);
v___x_3397_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_3398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3398_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
return v___x_3399_;
}
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_dec(v_a_3365_);
lean_dec_ref(v_ctorVal_3355_);
v_a_3430_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3385_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3385_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
v___jp_3371_:
{
if (lean_obj_tag(v___y_3372_) == 0)
{
uint8_t v___x_3373_; lean_object* v___x_3374_; 
lean_dec_ref(v___y_3372_);
v___x_3373_ = 1;
v___x_3374_ = l_Lean_Meta_mkLambdaFVars(v_xs_3356_, v_a_3365_, v___x_3370_, v___x_3369_, v___x_3370_, v___x_3369_, v___x_3373_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
return v___x_3374_;
}
else
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3382_; 
lean_dec(v_a_3365_);
v_a_3375_ = lean_ctor_get(v___y_3372_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___y_3372_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3377_ = v___y_3372_;
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v___y_3372_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3380_; 
if (v_isShared_3378_ == 0)
{
v___x_3380_ = v___x_3377_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorVal_3355_);
return v___x_3364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed(lean_object* v_ctorVal_3438_, lean_object* v_xs_3439_, lean_object* v_type_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(v_ctorVal_3438_, v_xs_3439_, v_type_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec_ref(v_xs_3439_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(lean_object* v_ctorVal_3447_, lean_object* v_targetType_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_){
_start:
{
lean_object* v___f_3454_; uint8_t v___x_3455_; lean_object* v___x_3456_; 
v___f_3454_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3454_, 0, v_ctorVal_3447_);
v___x_3455_ = 0;
v___x_3456_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_targetType_3448_, v___f_3454_, v___x_3455_, v___x_3455_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___boxed(lean_object* v_ctorVal_3457_, lean_object* v_targetType_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3457_, v_targetType_3458_, v_a_3459_, v_a_3460_, v_a_3461_, v_a_3462_);
lean_dec(v_a_3462_);
lean_dec_ref(v_a_3461_);
lean_dec(v_a_3460_);
lean_dec_ref(v_a_3459_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(lean_object* v_mvarId_3465_, lean_object* v_val_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_){
_start:
{
lean_object* v___x_3472_; 
v___x_3472_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_mvarId_3465_, v_val_3466_, v___y_3468_);
return v___x_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___boxed(lean_object* v_mvarId_3473_, lean_object* v_val_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(v_mvarId_3473_, v_val_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0(lean_object* v_00_u03b2_3481_, lean_object* v_x_3482_, lean_object* v_x_3483_, lean_object* v_x_3484_){
_start:
{
lean_object* v___x_3485_; 
v___x_3485_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(v_x_3482_, v_x_3483_, v_x_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3486_, lean_object* v_x_3487_, size_t v_x_3488_, size_t v_x_3489_, lean_object* v_x_3490_, lean_object* v_x_3491_){
_start:
{
lean_object* v___x_3492_; 
v___x_3492_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3487_, v_x_3488_, v_x_3489_, v_x_3490_, v_x_3491_);
return v___x_3492_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3493_, lean_object* v_x_3494_, lean_object* v_x_3495_, lean_object* v_x_3496_, lean_object* v_x_3497_, lean_object* v_x_3498_){
_start:
{
size_t v_x_5544__boxed_3499_; size_t v_x_5545__boxed_3500_; lean_object* v_res_3501_; 
v_x_5544__boxed_3499_ = lean_unbox_usize(v_x_3495_);
lean_dec(v_x_3495_);
v_x_5545__boxed_3500_ = lean_unbox_usize(v_x_3496_);
lean_dec(v_x_3496_);
v_res_3501_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(v_00_u03b2_3493_, v_x_3494_, v_x_5544__boxed_3499_, v_x_5545__boxed_3500_, v_x_3497_, v_x_3498_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3502_, lean_object* v_n_3503_, lean_object* v_k_3504_, lean_object* v_v_3505_){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(v_n_3503_, v_k_3504_, v_v_3505_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_3507_, size_t v_depth_3508_, lean_object* v_keys_3509_, lean_object* v_vals_3510_, lean_object* v_heq_3511_, lean_object* v_i_3512_, lean_object* v_entries_3513_){
_start:
{
lean_object* v___x_3514_; 
v___x_3514_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_3508_, v_keys_3509_, v_vals_3510_, v_i_3512_, v_entries_3513_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_3515_, lean_object* v_depth_3516_, lean_object* v_keys_3517_, lean_object* v_vals_3518_, lean_object* v_heq_3519_, lean_object* v_i_3520_, lean_object* v_entries_3521_){
_start:
{
size_t v_depth_boxed_3522_; lean_object* v_res_3523_; 
v_depth_boxed_3522_ = lean_unbox_usize(v_depth_3516_);
lean_dec(v_depth_3516_);
v_res_3523_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_3515_, v_depth_boxed_3522_, v_keys_3517_, v_vals_3518_, v_heq_3519_, v_i_3520_, v_entries_3521_);
lean_dec_ref(v_vals_3518_);
lean_dec_ref(v_keys_3517_);
return v_res_3523_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_3524_, lean_object* v_x_3525_, lean_object* v_x_3526_, lean_object* v_x_3527_, lean_object* v_x_3528_){
_start:
{
lean_object* v___x_3529_; 
v___x_3529_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_x_3525_, v_x_3526_, v_x_3527_, v_x_3528_);
return v___x_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(lean_object* v_ctorVal_3530_, lean_object* v_val_3531_, lean_object* v_name_3532_, lean_object* v_levelParams_3533_, uint8_t v___x_3534_, uint8_t v_hasTrace_3535_, lean_object* v_____r_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_){
_start:
{
lean_object* v___x_3542_; 
lean_inc_ref(v_val_3531_);
v___x_3542_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3530_, v_val_3531_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_);
if (lean_obj_tag(v___x_3542_) == 0)
{
lean_object* v_a_3543_; lean_object* v___x_3544_; lean_object* v_a_3545_; lean_object* v___x_3546_; lean_object* v_a_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3563_; 
v_a_3543_ = lean_ctor_get(v___x_3542_, 0);
lean_inc(v_a_3543_);
lean_dec_ref(v___x_3542_);
v___x_3544_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3531_, v___y_3538_);
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_a_3545_);
lean_dec_ref(v___x_3544_);
v___x_3546_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3543_, v___y_3538_);
v_a_3547_ = lean_ctor_get(v___x_3546_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3546_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3549_ = v___x_3546_;
v_isShared_3550_ = v_isSharedCheck_3563_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_a_3547_);
lean_dec(v___x_3546_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3563_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3556_; 
lean_inc_n(v_name_3532_, 2);
v___x_3551_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3551_, 0, v_name_3532_);
lean_ctor_set(v___x_3551_, 1, v_levelParams_3533_);
lean_ctor_set(v___x_3551_, 2, v_a_3545_);
v___x_3552_ = lean_box(0);
v___x_3553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3553_, 0, v_name_3532_);
lean_ctor_set(v___x_3553_, 1, v___x_3552_);
v___x_3554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3551_);
lean_ctor_set(v___x_3554_, 1, v_a_3547_);
lean_ctor_set(v___x_3554_, 2, v___x_3553_);
if (v_isShared_3550_ == 0)
{
lean_ctor_set_tag(v___x_3549_, 2);
lean_ctor_set(v___x_3549_, 0, v___x_3554_);
v___x_3556_ = v___x_3549_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3554_);
v___x_3556_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
lean_object* v___x_3557_; 
v___x_3557_ = l_Lean_addDecl(v___x_3556_, v___x_3534_, v___y_3539_, v___y_3540_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v___x_3558_; uint8_t v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec_ref(v___x_3557_);
v___x_3558_ = l_Lean_Meta_simpExtension;
v___x_3559_ = 0;
v___x_3560_ = lean_unsigned_to_nat(1000u);
v___x_3561_ = l_Lean_Meta_addSimpTheorem(v___x_3558_, v_name_3532_, v_hasTrace_3535_, v___x_3534_, v___x_3559_, v___x_3560_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_);
return v___x_3561_;
}
else
{
lean_dec(v_name_3532_);
return v___x_3557_;
}
}
}
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
lean_dec(v_levelParams_3533_);
lean_dec(v_name_3532_);
lean_dec_ref(v_val_3531_);
v_a_3564_ = lean_ctor_get(v___x_3542_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3542_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3542_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3542_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1___boxed(lean_object* v_ctorVal_3572_, lean_object* v_val_3573_, lean_object* v_name_3574_, lean_object* v_levelParams_3575_, lean_object* v___x_3576_, lean_object* v_hasTrace_3577_, lean_object* v_____r_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_){
_start:
{
uint8_t v___x_9094__boxed_3584_; uint8_t v_hasTrace_boxed_3585_; lean_object* v_res_3586_; 
v___x_9094__boxed_3584_ = lean_unbox(v___x_3576_);
v_hasTrace_boxed_3585_ = lean_unbox(v_hasTrace_3577_);
v_res_3586_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3572_, v_val_3573_, v_name_3574_, v_levelParams_3575_, v___x_9094__boxed_3584_, v_hasTrace_boxed_3585_, v_____r_3578_, v___y_3579_, v___y_3580_, v___y_3581_, v___y_3582_);
lean_dec(v___y_3582_);
lean_dec_ref(v___y_3581_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(lean_object* v_ctorVal_3587_, lean_object* v_val_3588_, lean_object* v_name_3589_, lean_object* v_levelParams_3590_, uint8_t v___x_3591_, lean_object* v_____r_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v___x_3598_; 
lean_inc_ref(v_val_3588_);
v___x_3598_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3587_, v_val_3588_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; lean_object* v___x_3600_; lean_object* v_a_3601_; lean_object* v___x_3602_; lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3620_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref(v___x_3598_);
v___x_3600_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3588_, v___y_3594_);
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref(v___x_3600_);
v___x_3602_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3599_, v___y_3594_);
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3605_ = v___x_3602_;
v_isShared_3606_ = v_isSharedCheck_3620_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3602_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3620_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3612_; 
lean_inc_n(v_name_3589_, 2);
v___x_3607_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3607_, 0, v_name_3589_);
lean_ctor_set(v___x_3607_, 1, v_levelParams_3590_);
lean_ctor_set(v___x_3607_, 2, v_a_3601_);
v___x_3608_ = lean_box(0);
v___x_3609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3609_, 0, v_name_3589_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
v___x_3610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3607_);
lean_ctor_set(v___x_3610_, 1, v_a_3603_);
lean_ctor_set(v___x_3610_, 2, v___x_3609_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set_tag(v___x_3605_, 2);
lean_ctor_set(v___x_3605_, 0, v___x_3610_);
v___x_3612_ = v___x_3605_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3610_);
v___x_3612_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
uint8_t v___x_3613_; lean_object* v___x_3614_; 
v___x_3613_ = 0;
v___x_3614_ = l_Lean_addDecl(v___x_3612_, v___x_3613_, v___y_3595_, v___y_3596_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v___x_3615_; uint8_t v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
lean_dec_ref(v___x_3614_);
v___x_3615_ = l_Lean_Meta_simpExtension;
v___x_3616_ = 0;
v___x_3617_ = lean_unsigned_to_nat(1000u);
v___x_3618_ = l_Lean_Meta_addSimpTheorem(v___x_3615_, v_name_3589_, v___x_3591_, v___x_3613_, v___x_3616_, v___x_3617_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_);
return v___x_3618_;
}
else
{
lean_dec(v_name_3589_);
return v___x_3614_;
}
}
}
}
else
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3628_; 
lean_dec(v_levelParams_3590_);
lean_dec(v_name_3589_);
lean_dec_ref(v_val_3588_);
v_a_3621_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3623_ = v___x_3598_;
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3598_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3626_; 
if (v_isShared_3624_ == 0)
{
v___x_3626_ = v___x_3623_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3621_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0___boxed(lean_object* v_ctorVal_3629_, lean_object* v_val_3630_, lean_object* v_name_3631_, lean_object* v_levelParams_3632_, lean_object* v___x_3633_, lean_object* v_____r_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
uint8_t v___x_9182__boxed_3640_; lean_object* v_res_3641_; 
v___x_9182__boxed_3640_ = lean_unbox(v___x_3633_);
v_res_3641_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3629_, v_val_3630_, v_name_3631_, v_levelParams_3632_, v___x_9182__boxed_3640_, v_____r_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
lean_dec(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec(v___y_3636_);
lean_dec_ref(v___y_3635_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(lean_object* v_ctorVal_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v_toConstantVal_3648_; lean_object* v_options_3649_; lean_object* v_name_3650_; lean_object* v_levelParams_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3871_; 
v_toConstantVal_3648_ = lean_ctor_get(v_ctorVal_3642_, 0);
lean_inc_ref(v_toConstantVal_3648_);
v_options_3649_ = lean_ctor_get(v_a_3645_, 2);
v_name_3650_ = lean_ctor_get(v_toConstantVal_3648_, 0);
v_levelParams_3651_ = lean_ctor_get(v_toConstantVal_3648_, 1);
v_isSharedCheck_3871_ = !lean_is_exclusive(v_toConstantVal_3648_);
if (v_isSharedCheck_3871_ == 0)
{
lean_object* v_unused_3872_; 
v_unused_3872_ = lean_ctor_get(v_toConstantVal_3648_, 2);
lean_dec(v_unused_3872_);
v___x_3653_ = v_toConstantVal_3648_;
v_isShared_3654_ = v_isSharedCheck_3871_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_levelParams_3651_);
lean_inc(v_name_3650_);
lean_dec(v_toConstantVal_3648_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3871_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v_inheritedTraceOptions_3655_; uint8_t v_hasTrace_3656_; lean_object* v_name_3657_; 
v_inheritedTraceOptions_3655_ = lean_ctor_get(v_a_3645_, 13);
v_hasTrace_3656_ = lean_ctor_get_uint8(v_options_3649_, sizeof(void*)*1);
v_name_3657_ = l_Lean_Meta_mkInjectiveEqTheoremNameFor(v_name_3650_);
if (v_hasTrace_3656_ == 0)
{
lean_object* v___x_3658_; 
lean_inc_ref(v_ctorVal_3642_);
v___x_3658_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3701_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3661_ = v___x_3658_;
v_isShared_3662_ = v_isSharedCheck_3701_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v___x_3658_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3701_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
if (lean_obj_tag(v_a_3659_) == 1)
{
lean_object* v_val_3663_; lean_object* v___x_3664_; 
lean_del_object(v___x_3661_);
v_val_3663_ = lean_ctor_get(v_a_3659_, 0);
lean_inc_n(v_val_3663_, 2);
lean_dec_ref(v_a_3659_);
v___x_3664_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3642_, v_val_3663_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v___x_3666_; lean_object* v_a_3667_; lean_object* v___x_3668_; lean_object* v_a_3669_; lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3688_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref(v___x_3664_);
v___x_3666_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3663_, v_a_3644_);
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_a_3667_);
lean_dec_ref(v___x_3666_);
v___x_3668_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3665_, v_a_3644_);
v_a_3669_ = lean_ctor_get(v___x_3668_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3668_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3671_ = v___x_3668_;
v_isShared_3672_ = v_isSharedCheck_3688_;
goto v_resetjp_3670_;
}
else
{
lean_inc(v_a_3669_);
lean_dec(v___x_3668_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3688_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v___x_3674_; 
lean_inc(v_name_3657_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 2, v_a_3667_);
lean_ctor_set(v___x_3653_, 0, v_name_3657_);
v___x_3674_ = v___x_3653_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_name_3657_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v_levelParams_3651_);
lean_ctor_set(v_reuseFailAlloc_3687_, 2, v_a_3667_);
v___x_3674_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3679_; 
v___x_3675_ = lean_box(0);
lean_inc(v_name_3657_);
v___x_3676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3676_, 0, v_name_3657_);
lean_ctor_set(v___x_3676_, 1, v___x_3675_);
v___x_3677_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3674_);
lean_ctor_set(v___x_3677_, 1, v_a_3669_);
lean_ctor_set(v___x_3677_, 2, v___x_3676_);
if (v_isShared_3672_ == 0)
{
lean_ctor_set_tag(v___x_3671_, 2);
lean_ctor_set(v___x_3671_, 0, v___x_3677_);
v___x_3679_ = v___x_3671_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v___x_3677_);
v___x_3679_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
lean_object* v___x_3680_; 
v___x_3680_ = l_Lean_addDecl(v___x_3679_, v_hasTrace_3656_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v___x_3681_; uint8_t v___x_3682_; uint8_t v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
lean_dec_ref(v___x_3680_);
v___x_3681_ = l_Lean_Meta_simpExtension;
v___x_3682_ = 1;
v___x_3683_ = 0;
v___x_3684_ = lean_unsigned_to_nat(1000u);
v___x_3685_ = l_Lean_Meta_addSimpTheorem(v___x_3681_, v_name_3657_, v___x_3682_, v_hasTrace_3656_, v___x_3683_, v___x_3684_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
return v___x_3685_;
}
else
{
lean_dec(v_name_3657_);
return v___x_3680_;
}
}
}
}
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_dec(v_val_3663_);
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
v_a_3689_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3664_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3664_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
else
{
lean_object* v___x_3697_; lean_object* v___x_3699_; 
lean_dec(v_a_3659_);
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v___x_3697_ = lean_box(0);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v___x_3697_);
v___x_3699_ = v___x_3661_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v___x_3697_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
else
{
lean_object* v_a_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3709_; 
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v_a_3702_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3704_ = v___x_3658_;
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_a_3702_);
lean_dec(v___x_3658_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3702_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
else
{
lean_object* v___f_3710_; lean_object* v_cls_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; uint8_t v___x_3714_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v_a_3718_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v_a_3730_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v_a_3735_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3744_; lean_object* v___y_3745_; lean_object* v_a_3746_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v_a_3761_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v_a_3766_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3771_; 
lean_inc(v_name_3657_);
v___f_3710_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3710_, 0, v_name_3657_);
v_cls_3711_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_3712_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_3713_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_3714_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3655_, v_options_3649_, v___x_3713_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3809_; uint8_t v___x_3810_; 
v___x_3809_ = l_Lean_trace_profiler;
v___x_3810_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_3649_, v___x_3809_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; 
lean_dec_ref(v___f_3710_);
lean_inc_ref(v_ctorVal_3642_);
v___x_3811_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3862_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3814_ = v___x_3811_;
v_isShared_3815_ = v_isSharedCheck_3862_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3811_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3862_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
if (lean_obj_tag(v_a_3812_) == 1)
{
lean_object* v_val_3816_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___y_3821_; 
lean_del_object(v___x_3814_);
v_val_3816_ = lean_ctor_get(v_a_3812_, 0);
lean_inc(v_val_3816_);
lean_dec_ref(v_a_3812_);
if (v___x_3714_ == 0)
{
v___y_3818_ = v_a_3643_;
v___y_3819_ = v_a_3644_;
v___y_3820_ = v_a_3645_;
v___y_3821_ = v_a_3646_;
goto v___jp_3817_;
}
else
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; 
v___x_3854_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
lean_inc(v_val_3816_);
v___x_3855_ = l_Lean_MessageData_ofExpr(v_val_3816_);
v___x_3856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3854_);
lean_ctor_set(v___x_3856_, 1, v___x_3855_);
v___x_3857_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3711_, v___x_3856_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_dec_ref(v___x_3857_);
v___y_3818_ = v_a_3643_;
v___y_3819_ = v_a_3644_;
v___y_3820_ = v_a_3645_;
v___y_3821_ = v_a_3646_;
goto v___jp_3817_;
}
else
{
lean_dec(v_val_3816_);
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
return v___x_3857_;
}
}
v___jp_3817_:
{
lean_object* v___x_3822_; 
lean_inc(v_val_3816_);
v___x_3822_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3642_, v_val_3816_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; lean_object* v___x_3824_; lean_object* v_a_3825_; lean_object* v___x_3826_; lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3845_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc(v_a_3823_);
lean_dec_ref(v___x_3822_);
v___x_3824_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3816_, v___y_3819_);
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref(v___x_3824_);
v___x_3826_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3823_, v___y_3819_);
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3829_ = v___x_3826_;
v_isShared_3830_ = v_isSharedCheck_3845_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3826_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3845_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
lean_inc(v_name_3657_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 2, v_a_3825_);
lean_ctor_set(v___x_3653_, 0, v_name_3657_);
v___x_3832_ = v___x_3653_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_name_3657_);
lean_ctor_set(v_reuseFailAlloc_3844_, 1, v_levelParams_3651_);
lean_ctor_set(v_reuseFailAlloc_3844_, 2, v_a_3825_);
v___x_3832_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3837_; 
v___x_3833_ = lean_box(0);
lean_inc(v_name_3657_);
v___x_3834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3834_, 0, v_name_3657_);
lean_ctor_set(v___x_3834_, 1, v___x_3833_);
v___x_3835_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3832_);
lean_ctor_set(v___x_3835_, 1, v_a_3827_);
lean_ctor_set(v___x_3835_, 2, v___x_3834_);
if (v_isShared_3830_ == 0)
{
lean_ctor_set_tag(v___x_3829_, 2);
lean_ctor_set(v___x_3829_, 0, v___x_3835_);
v___x_3837_ = v___x_3829_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v___x_3835_);
v___x_3837_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
lean_object* v___x_3838_; 
v___x_3838_ = l_Lean_addDecl(v___x_3837_, v___x_3810_, v___y_3820_, v___y_3821_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v___x_3839_; uint8_t v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
lean_dec_ref(v___x_3838_);
v___x_3839_ = l_Lean_Meta_simpExtension;
v___x_3840_ = 0;
v___x_3841_ = lean_unsigned_to_nat(1000u);
v___x_3842_ = l_Lean_Meta_addSimpTheorem(v___x_3839_, v_name_3657_, v_hasTrace_3656_, v___x_3810_, v___x_3840_, v___x_3841_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_);
return v___x_3842_;
}
else
{
lean_dec(v_name_3657_);
return v___x_3838_;
}
}
}
}
}
else
{
lean_object* v_a_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3853_; 
lean_dec(v_val_3816_);
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
v_a_3846_ = lean_ctor_get(v___x_3822_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3848_ = v___x_3822_;
v_isShared_3849_ = v_isSharedCheck_3853_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_a_3846_);
lean_dec(v___x_3822_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3853_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3851_; 
if (v_isShared_3849_ == 0)
{
v___x_3851_ = v___x_3848_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v_a_3846_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
}
}
}
else
{
lean_object* v___x_3858_; lean_object* v___x_3860_; 
lean_dec(v_a_3812_);
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v___x_3858_ = lean_box(0);
if (v_isShared_3815_ == 0)
{
lean_ctor_set(v___x_3814_, 0, v___x_3858_);
v___x_3860_ = v___x_3814_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v___x_3858_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_dec(v_name_3657_);
lean_del_object(v___x_3653_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v_a_3863_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3811_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3811_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
else
{
lean_del_object(v___x_3653_);
goto v___jp_3774_;
}
}
else
{
lean_del_object(v___x_3653_);
goto v___jp_3774_;
}
v___jp_3715_:
{
lean_object* v___x_3719_; double v___x_3720_; double v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3719_ = lean_io_get_num_heartbeats();
v___x_3720_ = lean_float_of_nat(v___y_3717_);
v___x_3721_ = lean_float_of_nat(v___x_3719_);
v___x_3722_ = lean_box_float(v___x_3720_);
v___x_3723_ = lean_box_float(v___x_3721_);
v___x_3724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3722_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
v___x_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3725_, 0, v_a_3718_);
lean_ctor_set(v___x_3725_, 1, v___x_3724_);
v___x_3726_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_3711_, v_hasTrace_3656_, v___x_3712_, v_options_3649_, v___x_3714_, v___y_3716_, v___f_3710_, v___x_3725_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
return v___x_3726_;
}
v___jp_3727_:
{
lean_object* v___x_3731_; 
v___x_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3731_, 0, v_a_3730_);
v___y_3716_ = v___y_3728_;
v___y_3717_ = v___y_3729_;
v_a_3718_ = v___x_3731_;
goto v___jp_3715_;
}
v___jp_3732_:
{
lean_object* v___x_3736_; 
v___x_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3736_, 0, v_a_3735_);
v___y_3716_ = v___y_3733_;
v___y_3717_ = v___y_3734_;
v_a_3718_ = v___x_3736_;
goto v___jp_3715_;
}
v___jp_3737_:
{
if (lean_obj_tag(v___y_3740_) == 0)
{
lean_object* v_a_3741_; 
v_a_3741_ = lean_ctor_get(v___y_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref(v___y_3740_);
v___y_3733_ = v___y_3738_;
v___y_3734_ = v___y_3739_;
v_a_3735_ = v_a_3741_;
goto v___jp_3732_;
}
else
{
lean_object* v_a_3742_; 
v_a_3742_ = lean_ctor_get(v___y_3740_, 0);
lean_inc(v_a_3742_);
lean_dec_ref(v___y_3740_);
v___y_3728_ = v___y_3738_;
v___y_3729_ = v___y_3739_;
v_a_3730_ = v_a_3742_;
goto v___jp_3727_;
}
}
v___jp_3743_:
{
lean_object* v___x_3747_; double v___x_3748_; double v___x_3749_; double v___x_3750_; double v___x_3751_; double v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3747_ = lean_io_mono_nanos_now();
v___x_3748_ = lean_float_of_nat(v___y_3744_);
v___x_3749_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_3750_ = lean_float_div(v___x_3748_, v___x_3749_);
v___x_3751_ = lean_float_of_nat(v___x_3747_);
v___x_3752_ = lean_float_div(v___x_3751_, v___x_3749_);
v___x_3753_ = lean_box_float(v___x_3750_);
v___x_3754_ = lean_box_float(v___x_3752_);
v___x_3755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3753_);
lean_ctor_set(v___x_3755_, 1, v___x_3754_);
v___x_3756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3756_, 0, v_a_3746_);
lean_ctor_set(v___x_3756_, 1, v___x_3755_);
v___x_3757_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_3711_, v_hasTrace_3656_, v___x_3712_, v_options_3649_, v___x_3714_, v___y_3745_, v___f_3710_, v___x_3756_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
return v___x_3757_;
}
v___jp_3758_:
{
lean_object* v___x_3762_; 
v___x_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_a_3761_);
v___y_3744_ = v___y_3759_;
v___y_3745_ = v___y_3760_;
v_a_3746_ = v___x_3762_;
goto v___jp_3743_;
}
v___jp_3763_:
{
lean_object* v___x_3767_; 
v___x_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_a_3766_);
v___y_3744_ = v___y_3764_;
v___y_3745_ = v___y_3765_;
v_a_3746_ = v___x_3767_;
goto v___jp_3743_;
}
v___jp_3768_:
{
if (lean_obj_tag(v___y_3771_) == 0)
{
lean_object* v_a_3772_; 
v_a_3772_ = lean_ctor_get(v___y_3771_, 0);
lean_inc(v_a_3772_);
lean_dec_ref(v___y_3771_);
v___y_3759_ = v___y_3769_;
v___y_3760_ = v___y_3770_;
v_a_3761_ = v_a_3772_;
goto v___jp_3758_;
}
else
{
lean_object* v_a_3773_; 
v_a_3773_ = lean_ctor_get(v___y_3771_, 0);
lean_inc(v_a_3773_);
lean_dec_ref(v___y_3771_);
v___y_3764_ = v___y_3769_;
v___y_3765_ = v___y_3770_;
v_a_3766_ = v_a_3773_;
goto v___jp_3763_;
}
}
v___jp_3774_:
{
lean_object* v___x_3775_; lean_object* v_a_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; 
v___x_3775_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_3646_);
v_a_3776_ = lean_ctor_get(v___x_3775_, 0);
lean_inc(v_a_3776_);
lean_dec_ref(v___x_3775_);
v___x_3777_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3778_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_3649_, v___x_3777_);
if (v___x_3778_ == 0)
{
lean_object* v___x_3779_; lean_object* v___x_3780_; 
v___x_3779_ = lean_io_mono_nanos_now();
lean_inc_ref(v_ctorVal_3642_);
v___x_3780_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3780_) == 0)
{
lean_object* v_a_3781_; 
v_a_3781_ = lean_ctor_get(v___x_3780_, 0);
lean_inc(v_a_3781_);
lean_dec_ref(v___x_3780_);
if (lean_obj_tag(v_a_3781_) == 1)
{
if (v___x_3714_ == 0)
{
lean_object* v_val_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v_val_3782_ = lean_ctor_get(v_a_3781_, 0);
lean_inc(v_val_3782_);
lean_dec_ref(v_a_3781_);
v___x_3783_ = lean_box(0);
v___x_3784_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3642_, v_val_3782_, v_name_3657_, v_levelParams_3651_, v___x_3778_, v_hasTrace_3656_, v___x_3783_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
v___y_3769_ = v___x_3779_;
v___y_3770_ = v_a_3776_;
v___y_3771_ = v___x_3784_;
goto v___jp_3768_;
}
else
{
lean_object* v_val_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
v_val_3785_ = lean_ctor_get(v_a_3781_, 0);
lean_inc_n(v_val_3785_, 2);
lean_dec_ref(v_a_3781_);
v___x_3786_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_3787_ = l_Lean_MessageData_ofExpr(v_val_3785_);
v___x_3788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3786_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3711_, v___x_3788_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_object* v_a_3790_; lean_object* v___x_3791_; 
v_a_3790_ = lean_ctor_get(v___x_3789_, 0);
lean_inc(v_a_3790_);
lean_dec_ref(v___x_3789_);
v___x_3791_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3642_, v_val_3785_, v_name_3657_, v_levelParams_3651_, v___x_3778_, v_hasTrace_3656_, v_a_3790_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
v___y_3769_ = v___x_3779_;
v___y_3770_ = v_a_3776_;
v___y_3771_ = v___x_3791_;
goto v___jp_3768_;
}
else
{
lean_dec(v_val_3785_);
lean_dec(v_name_3657_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v___y_3769_ = v___x_3779_;
v___y_3770_ = v_a_3776_;
v___y_3771_ = v___x_3789_;
goto v___jp_3768_;
}
}
}
else
{
lean_object* v___x_3792_; 
lean_dec(v_a_3781_);
lean_dec(v_name_3657_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v___x_3792_ = lean_box(0);
v___y_3759_ = v___x_3779_;
v___y_3760_ = v_a_3776_;
v_a_3761_ = v___x_3792_;
goto v___jp_3758_;
}
}
else
{
lean_object* v_a_3793_; 
lean_dec(v_name_3657_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v_a_3793_ = lean_ctor_get(v___x_3780_, 0);
lean_inc(v_a_3793_);
lean_dec_ref(v___x_3780_);
v___y_3764_ = v___x_3779_;
v___y_3765_ = v_a_3776_;
v_a_3766_ = v_a_3793_;
goto v___jp_3763_;
}
}
else
{
lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3794_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_ctorVal_3642_);
v___x_3795_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref(v___x_3795_);
if (lean_obj_tag(v_a_3796_) == 1)
{
if (v___x_3714_ == 0)
{
lean_object* v_val_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v_val_3797_ = lean_ctor_get(v_a_3796_, 0);
lean_inc(v_val_3797_);
lean_dec_ref(v_a_3796_);
v___x_3798_ = lean_box(0);
v___x_3799_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3642_, v_val_3797_, v_name_3657_, v_levelParams_3651_, v___x_3778_, v___x_3798_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
v___y_3738_ = v_a_3776_;
v___y_3739_ = v___x_3794_;
v___y_3740_ = v___x_3799_;
goto v___jp_3737_;
}
else
{
lean_object* v_val_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v_val_3800_ = lean_ctor_get(v_a_3796_, 0);
lean_inc_n(v_val_3800_, 2);
lean_dec_ref(v_a_3796_);
v___x_3801_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_3802_ = l_Lean_MessageData_ofExpr(v_val_3800_);
v___x_3803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3801_);
lean_ctor_set(v___x_3803_, 1, v___x_3802_);
v___x_3804_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3711_, v___x_3803_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3806_; 
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3805_);
lean_dec_ref(v___x_3804_);
v___x_3806_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3642_, v_val_3800_, v_name_3657_, v_levelParams_3651_, v___x_3778_, v_a_3805_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
v___y_3738_ = v_a_3776_;
v___y_3739_ = v___x_3794_;
v___y_3740_ = v___x_3806_;
goto v___jp_3737_;
}
else
{
lean_dec(v_val_3800_);
lean_dec(v_name_3657_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v___y_3738_ = v_a_3776_;
v___y_3739_ = v___x_3794_;
v___y_3740_ = v___x_3804_;
goto v___jp_3737_;
}
}
}
else
{
lean_object* v___x_3807_; 
lean_dec(v_a_3796_);
lean_dec(v_name_3657_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v___x_3807_ = lean_box(0);
v___y_3733_ = v_a_3776_;
v___y_3734_ = v___x_3794_;
v_a_3735_ = v___x_3807_;
goto v___jp_3732_;
}
}
else
{
lean_object* v_a_3808_; 
lean_dec(v_name_3657_);
lean_dec(v_levelParams_3651_);
lean_dec_ref(v_ctorVal_3642_);
v_a_3808_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3808_);
lean_dec_ref(v___x_3795_);
v___y_3728_ = v_a_3776_;
v___y_3729_ = v___x_3794_;
v_a_3730_ = v_a_3808_;
goto v___jp_3727_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___boxed(lean_object* v_ctorVal_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_){
_start:
{
lean_object* v_res_3879_; 
v_res_3879_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(v_ctorVal_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_);
lean_dec(v_a_3877_);
lean_dec_ref(v_a_3876_);
lean_dec(v_a_3875_);
lean_dec_ref(v_a_3874_);
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(lean_object* v_name_3880_, lean_object* v_decl_3881_, lean_object* v_ref_3882_){
_start:
{
lean_object* v_defValue_3884_; lean_object* v_descr_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_3912_; 
v_defValue_3884_ = lean_ctor_get(v_decl_3881_, 0);
v_descr_3885_ = lean_ctor_get(v_decl_3881_, 1);
v_isSharedCheck_3912_ = !lean_is_exclusive(v_decl_3881_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3887_ = v_decl_3881_;
v_isShared_3888_ = v_isSharedCheck_3912_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_descr_3885_);
lean_inc(v_defValue_3884_);
lean_dec(v_decl_3881_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_3912_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
lean_object* v___x_3889_; uint8_t v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3889_ = lean_alloc_ctor(1, 0, 1);
v___x_3890_ = lean_unbox(v_defValue_3884_);
lean_ctor_set_uint8(v___x_3889_, 0, v___x_3890_);
lean_inc_n(v_name_3880_, 2);
v___x_3891_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3891_, 0, v_name_3880_);
lean_ctor_set(v___x_3891_, 1, v_ref_3882_);
lean_ctor_set(v___x_3891_, 2, v___x_3889_);
lean_ctor_set(v___x_3891_, 3, v_descr_3885_);
v___x_3892_ = lean_register_option(v_name_3880_, v___x_3891_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3902_; 
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3902_ == 0)
{
lean_object* v_unused_3903_; 
v_unused_3903_ = lean_ctor_get(v___x_3892_, 0);
lean_dec(v_unused_3903_);
v___x_3894_ = v___x_3892_;
v_isShared_3895_ = v_isSharedCheck_3902_;
goto v_resetjp_3893_;
}
else
{
lean_dec(v___x_3892_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3902_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3888_ == 0)
{
lean_ctor_set(v___x_3887_, 1, v_defValue_3884_);
lean_ctor_set(v___x_3887_, 0, v_name_3880_);
v___x_3897_ = v___x_3887_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_name_3880_);
lean_ctor_set(v_reuseFailAlloc_3901_, 1, v_defValue_3884_);
v___x_3897_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
lean_object* v___x_3899_; 
if (v_isShared_3895_ == 0)
{
lean_ctor_set(v___x_3894_, 0, v___x_3897_);
v___x_3899_ = v___x_3894_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v___x_3897_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
lean_del_object(v___x_3887_);
lean_dec(v_defValue_3884_);
lean_dec(v_name_3880_);
v_a_3904_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3892_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3892_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_3913_, lean_object* v_decl_3914_, lean_object* v_ref_3915_, lean_object* v_a_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(v_name_3913_, v_decl_3914_, v_ref_3915_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3931_ = ((lean_object*)(l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_3932_ = ((lean_object*)(l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_3933_ = ((lean_object*)(l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_3934_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(v___x_3931_, v___x_3932_, v___x_3933_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4____boxed(lean_object* v_a_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(lean_object* v___y_3937_, uint8_t v_isExporting_3938_, lean_object* v___x_3939_, lean_object* v___y_3940_, lean_object* v___x_3941_, lean_object* v_a_x3f_3942_){
_start:
{
lean_object* v___x_3944_; lean_object* v_env_3945_; lean_object* v_nextMacroScope_3946_; lean_object* v_ngen_3947_; lean_object* v_auxDeclNGen_3948_; lean_object* v_traceState_3949_; lean_object* v_messages_3950_; lean_object* v_infoState_3951_; lean_object* v_snapshotTasks_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3977_; 
v___x_3944_ = lean_st_ref_take(v___y_3937_);
v_env_3945_ = lean_ctor_get(v___x_3944_, 0);
v_nextMacroScope_3946_ = lean_ctor_get(v___x_3944_, 1);
v_ngen_3947_ = lean_ctor_get(v___x_3944_, 2);
v_auxDeclNGen_3948_ = lean_ctor_get(v___x_3944_, 3);
v_traceState_3949_ = lean_ctor_get(v___x_3944_, 4);
v_messages_3950_ = lean_ctor_get(v___x_3944_, 6);
v_infoState_3951_ = lean_ctor_get(v___x_3944_, 7);
v_snapshotTasks_3952_ = lean_ctor_get(v___x_3944_, 8);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3944_);
if (v_isSharedCheck_3977_ == 0)
{
lean_object* v_unused_3978_; 
v_unused_3978_ = lean_ctor_get(v___x_3944_, 5);
lean_dec(v_unused_3978_);
v___x_3954_ = v___x_3944_;
v_isShared_3955_ = v_isSharedCheck_3977_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_snapshotTasks_3952_);
lean_inc(v_infoState_3951_);
lean_inc(v_messages_3950_);
lean_inc(v_traceState_3949_);
lean_inc(v_auxDeclNGen_3948_);
lean_inc(v_ngen_3947_);
lean_inc(v_nextMacroScope_3946_);
lean_inc(v_env_3945_);
lean_dec(v___x_3944_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3977_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3956_; lean_object* v___x_3958_; 
v___x_3956_ = l_Lean_Environment_setExporting(v_env_3945_, v_isExporting_3938_);
if (v_isShared_3955_ == 0)
{
lean_ctor_set(v___x_3954_, 5, v___x_3939_);
lean_ctor_set(v___x_3954_, 0, v___x_3956_);
v___x_3958_ = v___x_3954_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v___x_3956_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v_nextMacroScope_3946_);
lean_ctor_set(v_reuseFailAlloc_3976_, 2, v_ngen_3947_);
lean_ctor_set(v_reuseFailAlloc_3976_, 3, v_auxDeclNGen_3948_);
lean_ctor_set(v_reuseFailAlloc_3976_, 4, v_traceState_3949_);
lean_ctor_set(v_reuseFailAlloc_3976_, 5, v___x_3939_);
lean_ctor_set(v_reuseFailAlloc_3976_, 6, v_messages_3950_);
lean_ctor_set(v_reuseFailAlloc_3976_, 7, v_infoState_3951_);
lean_ctor_set(v_reuseFailAlloc_3976_, 8, v_snapshotTasks_3952_);
v___x_3958_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v_mctx_3961_; lean_object* v_zetaDeltaFVarIds_3962_; lean_object* v_postponed_3963_; lean_object* v_diag_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3974_; 
v___x_3959_ = lean_st_ref_set(v___y_3937_, v___x_3958_);
v___x_3960_ = lean_st_ref_take(v___y_3940_);
v_mctx_3961_ = lean_ctor_get(v___x_3960_, 0);
v_zetaDeltaFVarIds_3962_ = lean_ctor_get(v___x_3960_, 2);
v_postponed_3963_ = lean_ctor_get(v___x_3960_, 3);
v_diag_3964_ = lean_ctor_get(v___x_3960_, 4);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3960_);
if (v_isSharedCheck_3974_ == 0)
{
lean_object* v_unused_3975_; 
v_unused_3975_ = lean_ctor_get(v___x_3960_, 1);
lean_dec(v_unused_3975_);
v___x_3966_ = v___x_3960_;
v_isShared_3967_ = v_isSharedCheck_3974_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_diag_3964_);
lean_inc(v_postponed_3963_);
lean_inc(v_zetaDeltaFVarIds_3962_);
lean_inc(v_mctx_3961_);
lean_dec(v___x_3960_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3974_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3969_; 
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 1, v___x_3941_);
v___x_3969_ = v___x_3966_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_mctx_3961_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v___x_3941_);
lean_ctor_set(v_reuseFailAlloc_3973_, 2, v_zetaDeltaFVarIds_3962_);
lean_ctor_set(v_reuseFailAlloc_3973_, 3, v_postponed_3963_);
lean_ctor_set(v_reuseFailAlloc_3973_, 4, v_diag_3964_);
v___x_3969_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v___x_3970_ = lean_st_ref_set(v___y_3940_, v___x_3969_);
v___x_3971_ = lean_box(0);
v___x_3972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3971_);
return v___x_3972_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0___boxed(lean_object* v___y_3979_, lean_object* v_isExporting_3980_, lean_object* v___x_3981_, lean_object* v___y_3982_, lean_object* v___x_3983_, lean_object* v_a_x3f_3984_, lean_object* v___y_3985_){
_start:
{
uint8_t v_isExporting_boxed_3986_; lean_object* v_res_3987_; 
v_isExporting_boxed_3986_ = lean_unbox(v_isExporting_3980_);
v_res_3987_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_3979_, v_isExporting_boxed_3986_, v___x_3981_, v___y_3982_, v___x_3983_, v_a_x3f_3984_);
lean_dec(v_a_x3f_3984_);
lean_dec(v___y_3982_);
lean_dec(v___y_3979_);
return v_res_3987_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3988_; 
v___x_3988_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3988_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; 
v___x_3989_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_3991_; lean_object* v___x_3992_; 
v___x_3991_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1);
v___x_3992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3991_);
lean_ctor_set(v___x_3992_, 1, v___x_3991_);
return v___x_3992_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_3993_; lean_object* v___x_3994_; 
v___x_3993_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1);
v___x_3994_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3993_);
lean_ctor_set(v___x_3994_, 1, v___x_3993_);
lean_ctor_set(v___x_3994_, 2, v___x_3993_);
lean_ctor_set(v___x_3994_, 3, v___x_3993_);
lean_ctor_set(v___x_3994_, 4, v___x_3993_);
lean_ctor_set(v___x_3994_, 5, v___x_3993_);
return v___x_3994_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(lean_object* v_x_3995_, uint8_t v_isExporting_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v___x_4002_; lean_object* v_env_4003_; uint8_t v_isExporting_4004_; lean_object* v___x_4005_; lean_object* v_env_4006_; lean_object* v_nextMacroScope_4007_; lean_object* v_ngen_4008_; lean_object* v_auxDeclNGen_4009_; lean_object* v_traceState_4010_; lean_object* v_messages_4011_; lean_object* v_infoState_4012_; lean_object* v_snapshotTasks_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4067_; 
v___x_4002_ = lean_st_ref_get(v___y_4000_);
v_env_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc_ref(v_env_4003_);
lean_dec(v___x_4002_);
v_isExporting_4004_ = lean_ctor_get_uint8(v_env_4003_, sizeof(void*)*8);
lean_dec_ref(v_env_4003_);
v___x_4005_ = lean_st_ref_take(v___y_4000_);
v_env_4006_ = lean_ctor_get(v___x_4005_, 0);
v_nextMacroScope_4007_ = lean_ctor_get(v___x_4005_, 1);
v_ngen_4008_ = lean_ctor_get(v___x_4005_, 2);
v_auxDeclNGen_4009_ = lean_ctor_get(v___x_4005_, 3);
v_traceState_4010_ = lean_ctor_get(v___x_4005_, 4);
v_messages_4011_ = lean_ctor_get(v___x_4005_, 6);
v_infoState_4012_ = lean_ctor_get(v___x_4005_, 7);
v_snapshotTasks_4013_ = lean_ctor_get(v___x_4005_, 8);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4067_ == 0)
{
lean_object* v_unused_4068_; 
v_unused_4068_ = lean_ctor_get(v___x_4005_, 5);
lean_dec(v_unused_4068_);
v___x_4015_ = v___x_4005_;
v_isShared_4016_ = v_isSharedCheck_4067_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_snapshotTasks_4013_);
lean_inc(v_infoState_4012_);
lean_inc(v_messages_4011_);
lean_inc(v_traceState_4010_);
lean_inc(v_auxDeclNGen_4009_);
lean_inc(v_ngen_4008_);
lean_inc(v_nextMacroScope_4007_);
lean_inc(v_env_4006_);
lean_dec(v___x_4005_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4067_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4020_; 
v___x_4017_ = l_Lean_Environment_setExporting(v_env_4006_, v_isExporting_3996_);
v___x_4018_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 5, v___x_4018_);
lean_ctor_set(v___x_4015_, 0, v___x_4017_);
v___x_4020_ = v___x_4015_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v___x_4017_);
lean_ctor_set(v_reuseFailAlloc_4066_, 1, v_nextMacroScope_4007_);
lean_ctor_set(v_reuseFailAlloc_4066_, 2, v_ngen_4008_);
lean_ctor_set(v_reuseFailAlloc_4066_, 3, v_auxDeclNGen_4009_);
lean_ctor_set(v_reuseFailAlloc_4066_, 4, v_traceState_4010_);
lean_ctor_set(v_reuseFailAlloc_4066_, 5, v___x_4018_);
lean_ctor_set(v_reuseFailAlloc_4066_, 6, v_messages_4011_);
lean_ctor_set(v_reuseFailAlloc_4066_, 7, v_infoState_4012_);
lean_ctor_set(v_reuseFailAlloc_4066_, 8, v_snapshotTasks_4013_);
v___x_4020_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v_mctx_4023_; lean_object* v_zetaDeltaFVarIds_4024_; lean_object* v_postponed_4025_; lean_object* v_diag_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4064_; 
v___x_4021_ = lean_st_ref_set(v___y_4000_, v___x_4020_);
v___x_4022_ = lean_st_ref_take(v___y_3998_);
v_mctx_4023_ = lean_ctor_get(v___x_4022_, 0);
v_zetaDeltaFVarIds_4024_ = lean_ctor_get(v___x_4022_, 2);
v_postponed_4025_ = lean_ctor_get(v___x_4022_, 3);
v_diag_4026_ = lean_ctor_get(v___x_4022_, 4);
v_isSharedCheck_4064_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4064_ == 0)
{
lean_object* v_unused_4065_; 
v_unused_4065_ = lean_ctor_get(v___x_4022_, 1);
lean_dec(v_unused_4065_);
v___x_4028_ = v___x_4022_;
v_isShared_4029_ = v_isSharedCheck_4064_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_diag_4026_);
lean_inc(v_postponed_4025_);
lean_inc(v_zetaDeltaFVarIds_4024_);
lean_inc(v_mctx_4023_);
lean_dec(v___x_4022_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4064_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4030_; lean_object* v___x_4032_; 
v___x_4030_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3);
if (v_isShared_4029_ == 0)
{
lean_ctor_set(v___x_4028_, 1, v___x_4030_);
v___x_4032_ = v___x_4028_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_mctx_4023_);
lean_ctor_set(v_reuseFailAlloc_4063_, 1, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4063_, 2, v_zetaDeltaFVarIds_4024_);
lean_ctor_set(v_reuseFailAlloc_4063_, 3, v_postponed_4025_);
lean_ctor_set(v_reuseFailAlloc_4063_, 4, v_diag_4026_);
v___x_4032_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
lean_object* v___x_4033_; lean_object* v_r_4034_; 
v___x_4033_ = lean_st_ref_set(v___y_3998_, v___x_4032_);
lean_inc(v___y_4000_);
lean_inc_ref(v___y_3999_);
lean_inc(v___y_3998_);
lean_inc_ref(v___y_3997_);
v_r_4034_ = lean_apply_5(v_x_3995_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, lean_box(0));
if (lean_obj_tag(v_r_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v___x_4037_; uint8_t v_isShared_4038_; uint8_t v_isSharedCheck_4051_; 
v_a_4035_ = lean_ctor_get(v_r_4034_, 0);
v_isSharedCheck_4051_ = !lean_is_exclusive(v_r_4034_);
if (v_isSharedCheck_4051_ == 0)
{
v___x_4037_ = v_r_4034_;
v_isShared_4038_ = v_isSharedCheck_4051_;
goto v_resetjp_4036_;
}
else
{
lean_inc(v_a_4035_);
lean_dec(v_r_4034_);
v___x_4037_ = lean_box(0);
v_isShared_4038_ = v_isSharedCheck_4051_;
goto v_resetjp_4036_;
}
v_resetjp_4036_:
{
lean_object* v___x_4040_; 
lean_inc(v_a_4035_);
if (v_isShared_4038_ == 0)
{
lean_ctor_set_tag(v___x_4037_, 1);
v___x_4040_ = v___x_4037_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_a_4035_);
v___x_4040_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
lean_object* v___x_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
v___x_4041_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4000_, v_isExporting_4004_, v___x_4018_, v___y_3998_, v___x_4030_, v___x_4040_);
lean_dec_ref(v___x_4040_);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4041_);
if (v_isSharedCheck_4048_ == 0)
{
lean_object* v_unused_4049_; 
v_unused_4049_ = lean_ctor_get(v___x_4041_, 0);
lean_dec(v_unused_4049_);
v___x_4043_ = v___x_4041_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_dec(v___x_4041_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
lean_ctor_set(v___x_4043_, 0, v_a_4035_);
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4035_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
}
}
else
{
lean_object* v_a_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4061_; 
v_a_4052_ = lean_ctor_get(v_r_4034_, 0);
lean_inc(v_a_4052_);
lean_dec_ref(v_r_4034_);
v___x_4053_ = lean_box(0);
v___x_4054_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4000_, v_isExporting_4004_, v___x_4018_, v___y_3998_, v___x_4030_, v___x_4053_);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4054_);
if (v_isSharedCheck_4061_ == 0)
{
lean_object* v_unused_4062_; 
v_unused_4062_ = lean_ctor_get(v___x_4054_, 0);
lean_dec(v_unused_4062_);
v___x_4056_ = v___x_4054_;
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
else
{
lean_dec(v___x_4054_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
lean_ctor_set_tag(v___x_4056_, 1);
lean_ctor_set(v___x_4056_, 0, v_a_4052_);
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_a_4052_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___boxed(lean_object* v_x_4069_, lean_object* v_isExporting_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
uint8_t v_isExporting_boxed_4076_; lean_object* v_res_4077_; 
v_isExporting_boxed_4076_ = lean_unbox(v_isExporting_4070_);
v_res_4077_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v_x_4069_, v_isExporting_boxed_4076_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(lean_object* v_00_u03b1_4078_, lean_object* v_x_4079_, uint8_t v_isExporting_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v___x_4086_; 
v___x_4086_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v_x_4079_, v_isExporting_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___boxed(lean_object* v_00_u03b1_4087_, lean_object* v_x_4088_, lean_object* v_isExporting_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_){
_start:
{
uint8_t v_isExporting_boxed_4095_; lean_object* v_res_4096_; 
v_isExporting_boxed_4095_ = lean_unbox(v_isExporting_4089_);
v_res_4096_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(v_00_u03b1_4087_, v_x_4088_, v_isExporting_boxed_4095_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
lean_dec(v___y_4093_);
lean_dec_ref(v___y_4092_);
lean_dec(v___y_4091_);
lean_dec_ref(v___y_4090_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(lean_object* v_lctx_4097_, lean_object* v_localInsts_4098_, lean_object* v_x_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_){
_start:
{
lean_object* v___x_4105_; 
v___x_4105_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_4097_, v_localInsts_4098_, v_x_4099_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_);
if (lean_obj_tag(v___x_4105_) == 0)
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
v_a_4106_ = lean_ctor_get(v___x_4105_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4105_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4105_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4105_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
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
lean_object* v_a_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4121_; 
v_a_4114_ = lean_ctor_get(v___x_4105_, 0);
v_isSharedCheck_4121_ = !lean_is_exclusive(v___x_4105_);
if (v_isSharedCheck_4121_ == 0)
{
v___x_4116_ = v___x_4105_;
v_isShared_4117_ = v_isSharedCheck_4121_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_a_4114_);
lean_dec(v___x_4105_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4121_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4119_; 
if (v_isShared_4117_ == 0)
{
v___x_4119_ = v___x_4116_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_a_4114_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
return v___x_4119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg___boxed(lean_object* v_lctx_4122_, lean_object* v_localInsts_4123_, lean_object* v_x_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v_lctx_4122_, v_localInsts_4123_, v_x_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(lean_object* v_00_u03b1_4131_, lean_object* v_lctx_4132_, lean_object* v_localInsts_4133_, lean_object* v_x_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v___x_4140_; 
v___x_4140_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v_lctx_4132_, v_localInsts_4133_, v_x_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_);
return v___x_4140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___boxed(lean_object* v_00_u03b1_4141_, lean_object* v_lctx_4142_, lean_object* v_localInsts_4143_, lean_object* v_x_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(v_00_u03b1_4141_, v_lctx_4142_, v_localInsts_4143_, v_x_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0(lean_object* v_declName_4151_, lean_object* v_x_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_){
_start:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; 
v___x_4158_ = l_Lean_MessageData_ofName(v_declName_4151_);
v___x_4159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed(lean_object* v_declName_4160_, lean_object* v_x_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
lean_object* v_res_4167_; 
v_res_4167_ = l_Lean_Meta_mkInjectiveTheorems___lam__0(v_declName_4160_, v_x_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec_ref(v_x_4161_);
return v_res_4167_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4168_; 
v___x_4168_ = l_instMonadEIO(lean_box(0));
return v___x_4168_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(lean_object* v_msg_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v_toApplicative_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4242_; 
v___x_4179_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0);
v___x_4180_ = l_StateRefT_x27_instMonad___redArg(v___x_4179_);
v_toApplicative_4181_ = lean_ctor_get(v___x_4180_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4242_ == 0)
{
lean_object* v_unused_4243_; 
v_unused_4243_ = lean_ctor_get(v___x_4180_, 1);
lean_dec(v_unused_4243_);
v___x_4183_ = v___x_4180_;
v_isShared_4184_ = v_isSharedCheck_4242_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_toApplicative_4181_);
lean_dec(v___x_4180_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4242_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v_toFunctor_4185_; lean_object* v_toSeq_4186_; lean_object* v_toSeqLeft_4187_; lean_object* v_toSeqRight_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4240_; 
v_toFunctor_4185_ = lean_ctor_get(v_toApplicative_4181_, 0);
v_toSeq_4186_ = lean_ctor_get(v_toApplicative_4181_, 2);
v_toSeqLeft_4187_ = lean_ctor_get(v_toApplicative_4181_, 3);
v_toSeqRight_4188_ = lean_ctor_get(v_toApplicative_4181_, 4);
v_isSharedCheck_4240_ = !lean_is_exclusive(v_toApplicative_4181_);
if (v_isSharedCheck_4240_ == 0)
{
lean_object* v_unused_4241_; 
v_unused_4241_ = lean_ctor_get(v_toApplicative_4181_, 1);
lean_dec(v_unused_4241_);
v___x_4190_ = v_toApplicative_4181_;
v_isShared_4191_ = v_isSharedCheck_4240_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_toSeqRight_4188_);
lean_inc(v_toSeqLeft_4187_);
lean_inc(v_toSeq_4186_);
lean_inc(v_toFunctor_4185_);
lean_dec(v_toApplicative_4181_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4240_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___f_4192_; lean_object* v___f_4193_; lean_object* v___f_4194_; lean_object* v___f_4195_; lean_object* v___x_4196_; lean_object* v___f_4197_; lean_object* v___f_4198_; lean_object* v___f_4199_; lean_object* v___x_4201_; 
v___f_4192_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1));
v___f_4193_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2));
lean_inc_ref(v_toFunctor_4185_);
v___f_4194_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4194_, 0, v_toFunctor_4185_);
v___f_4195_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4195_, 0, v_toFunctor_4185_);
v___x_4196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4196_, 0, v___f_4194_);
lean_ctor_set(v___x_4196_, 1, v___f_4195_);
v___f_4197_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4197_, 0, v_toSeqRight_4188_);
v___f_4198_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4198_, 0, v_toSeqLeft_4187_);
v___f_4199_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4199_, 0, v_toSeq_4186_);
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 4, v___f_4197_);
lean_ctor_set(v___x_4190_, 3, v___f_4198_);
lean_ctor_set(v___x_4190_, 2, v___f_4199_);
lean_ctor_set(v___x_4190_, 1, v___f_4192_);
lean_ctor_set(v___x_4190_, 0, v___x_4196_);
v___x_4201_ = v___x_4190_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4239_; 
v_reuseFailAlloc_4239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4239_, 0, v___x_4196_);
lean_ctor_set(v_reuseFailAlloc_4239_, 1, v___f_4192_);
lean_ctor_set(v_reuseFailAlloc_4239_, 2, v___f_4199_);
lean_ctor_set(v_reuseFailAlloc_4239_, 3, v___f_4198_);
lean_ctor_set(v_reuseFailAlloc_4239_, 4, v___f_4197_);
v___x_4201_ = v_reuseFailAlloc_4239_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
lean_object* v___x_4203_; 
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 1, v___f_4193_);
lean_ctor_set(v___x_4183_, 0, v___x_4201_);
v___x_4203_ = v___x_4183_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v___x_4201_);
lean_ctor_set(v_reuseFailAlloc_4238_, 1, v___f_4193_);
v___x_4203_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
lean_object* v___x_4204_; lean_object* v_toApplicative_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4236_; 
v___x_4204_ = l_StateRefT_x27_instMonad___redArg(v___x_4203_);
v_toApplicative_4205_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4236_ == 0)
{
lean_object* v_unused_4237_; 
v_unused_4237_ = lean_ctor_get(v___x_4204_, 1);
lean_dec(v_unused_4237_);
v___x_4207_ = v___x_4204_;
v_isShared_4208_ = v_isSharedCheck_4236_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_toApplicative_4205_);
lean_dec(v___x_4204_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4236_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v_toFunctor_4209_; lean_object* v_toSeq_4210_; lean_object* v_toSeqLeft_4211_; lean_object* v_toSeqRight_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4234_; 
v_toFunctor_4209_ = lean_ctor_get(v_toApplicative_4205_, 0);
v_toSeq_4210_ = lean_ctor_get(v_toApplicative_4205_, 2);
v_toSeqLeft_4211_ = lean_ctor_get(v_toApplicative_4205_, 3);
v_toSeqRight_4212_ = lean_ctor_get(v_toApplicative_4205_, 4);
v_isSharedCheck_4234_ = !lean_is_exclusive(v_toApplicative_4205_);
if (v_isSharedCheck_4234_ == 0)
{
lean_object* v_unused_4235_; 
v_unused_4235_ = lean_ctor_get(v_toApplicative_4205_, 1);
lean_dec(v_unused_4235_);
v___x_4214_ = v_toApplicative_4205_;
v_isShared_4215_ = v_isSharedCheck_4234_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_toSeqRight_4212_);
lean_inc(v_toSeqLeft_4211_);
lean_inc(v_toSeq_4210_);
lean_inc(v_toFunctor_4209_);
lean_dec(v_toApplicative_4205_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4234_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___f_4216_; lean_object* v___f_4217_; lean_object* v___f_4218_; lean_object* v___f_4219_; lean_object* v___x_4220_; lean_object* v___f_4221_; lean_object* v___f_4222_; lean_object* v___f_4223_; lean_object* v___x_4225_; 
v___f_4216_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3));
v___f_4217_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4));
lean_inc_ref(v_toFunctor_4209_);
v___f_4218_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4218_, 0, v_toFunctor_4209_);
v___f_4219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4219_, 0, v_toFunctor_4209_);
v___x_4220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___f_4218_);
lean_ctor_set(v___x_4220_, 1, v___f_4219_);
v___f_4221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4221_, 0, v_toSeqRight_4212_);
v___f_4222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4222_, 0, v_toSeqLeft_4211_);
v___f_4223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4223_, 0, v_toSeq_4210_);
if (v_isShared_4215_ == 0)
{
lean_ctor_set(v___x_4214_, 4, v___f_4221_);
lean_ctor_set(v___x_4214_, 3, v___f_4222_);
lean_ctor_set(v___x_4214_, 2, v___f_4223_);
lean_ctor_set(v___x_4214_, 1, v___f_4216_);
lean_ctor_set(v___x_4214_, 0, v___x_4220_);
v___x_4225_ = v___x_4214_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v___x_4220_);
lean_ctor_set(v_reuseFailAlloc_4233_, 1, v___f_4216_);
lean_ctor_set(v_reuseFailAlloc_4233_, 2, v___f_4223_);
lean_ctor_set(v_reuseFailAlloc_4233_, 3, v___f_4222_);
lean_ctor_set(v_reuseFailAlloc_4233_, 4, v___f_4221_);
v___x_4225_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
lean_object* v___x_4227_; 
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 1, v___f_4217_);
lean_ctor_set(v___x_4207_, 0, v___x_4225_);
v___x_4227_ = v___x_4207_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4225_);
lean_ctor_set(v_reuseFailAlloc_4232_, 1, v___f_4217_);
v___x_4227_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_19007__overap_4230_; lean_object* v___x_4231_; 
v___x_4228_ = lean_box(0);
v___x_4229_ = l_instInhabitedOfMonad___redArg(v___x_4227_, v___x_4228_);
v___x_19007__overap_4230_ = lean_panic_fn_borrowed(v___x_4229_, v_msg_4173_);
lean_dec(v___x_4229_);
lean_inc(v___y_4177_);
lean_inc_ref(v___y_4176_);
lean_inc(v___y_4175_);
lean_inc_ref(v___y_4174_);
v___x_4231_ = lean_apply_5(v___x_19007__overap_4230_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_, lean_box(0));
return v___x_4231_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___boxed(lean_object* v_msg_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v_res_4250_; 
v_res_4250_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(v_msg_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_);
lean_dec(v___y_4248_);
lean_dec_ref(v___y_4247_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
return v_res_4250_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1(void){
_start:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4252_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0));
v___x_4253_ = l_Lean_stringToMessageData(v___x_4252_);
return v___x_4253_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4(void){
_start:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4256_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2));
v___x_4257_ = lean_unsigned_to_nat(11u);
v___x_4258_ = lean_unsigned_to_nat(122u);
v___x_4259_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3));
v___x_4260_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2));
v___x_4261_ = l_mkPanicMessageWithDecl(v___x_4260_, v___x_4259_, v___x_4258_, v___x_4257_, v___x_4256_);
return v___x_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(lean_object* v_constName_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_){
_start:
{
lean_object* v___x_4276_; lean_object* v_env_4277_; uint8_t v___x_4278_; lean_object* v___x_4279_; 
v___x_4276_ = lean_st_ref_get(v___y_4266_);
v_env_4277_ = lean_ctor_get(v___x_4276_, 0);
lean_inc_ref(v_env_4277_);
lean_dec(v___x_4276_);
v___x_4278_ = 0;
lean_inc(v_constName_4262_);
v___x_4279_ = l_Lean_Environment_findAsync_x3f(v_env_4277_, v_constName_4262_, v___x_4278_);
if (lean_obj_tag(v___x_4279_) == 1)
{
lean_object* v_val_4280_; uint8_t v_kind_4281_; 
v_val_4280_ = lean_ctor_get(v___x_4279_, 0);
lean_inc(v_val_4280_);
lean_dec_ref(v___x_4279_);
v_kind_4281_ = lean_ctor_get_uint8(v_val_4280_, sizeof(void*)*3);
if (v_kind_4281_ == 6)
{
lean_object* v___x_4282_; 
v___x_4282_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_4280_);
if (lean_obj_tag(v___x_4282_) == 6)
{
lean_object* v_val_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
lean_dec(v_constName_4262_);
v_val_4283_ = lean_ctor_get(v___x_4282_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4282_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4282_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_val_4283_);
lean_dec(v___x_4282_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
lean_ctor_set_tag(v___x_4285_, 0);
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_val_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
else
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
lean_dec_ref(v___x_4282_);
v___x_4291_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4);
v___x_4292_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(v___x_4291_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4301_; 
v_a_4293_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4295_ = v___x_4292_;
v_isShared_4296_ = v_isSharedCheck_4301_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v___x_4292_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4301_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
if (lean_obj_tag(v_a_4293_) == 0)
{
lean_del_object(v___x_4295_);
goto v___jp_4268_;
}
else
{
lean_object* v_val_4297_; lean_object* v___x_4299_; 
lean_dec(v_constName_4262_);
v_val_4297_ = lean_ctor_get(v_a_4293_, 0);
lean_inc(v_val_4297_);
lean_dec_ref(v_a_4293_);
if (v_isShared_4296_ == 0)
{
lean_ctor_set(v___x_4295_, 0, v_val_4297_);
v___x_4299_ = v___x_4295_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_val_4297_);
v___x_4299_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
return v___x_4299_;
}
}
}
}
else
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4309_; 
lean_dec(v_constName_4262_);
v_a_4302_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4304_ = v___x_4292_;
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_4292_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4307_; 
if (v_isShared_4305_ == 0)
{
v___x_4307_ = v___x_4304_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v_a_4302_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
}
}
else
{
lean_dec(v_val_4280_);
goto v___jp_4268_;
}
}
else
{
lean_dec(v___x_4279_);
goto v___jp_4268_;
}
v___jp_4268_:
{
lean_object* v___x_4269_; uint8_t v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; 
v___x_4269_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_4270_ = 0;
v___x_4271_ = l_Lean_MessageData_ofConstName(v_constName_4262_, v___x_4270_);
v___x_4272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4269_);
lean_ctor_set(v___x_4272_, 1, v___x_4271_);
v___x_4273_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1);
v___x_4274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4274_, 0, v___x_4272_);
lean_ctor_set(v___x_4274_, 1, v___x_4273_);
v___x_4275_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_4274_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_);
return v___x_4275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___boxed(lean_object* v_constName_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(v_constName_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
lean_dec_ref(v___y_4311_);
return v_res_4316_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(lean_object* v_head_4317_, lean_object* v___x_4318_, lean_object* v___x_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_){
_start:
{
lean_object* v___x_4325_; 
v___x_4325_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(v_head_4317_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4337_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4328_ = v___x_4325_;
v_isShared_4329_ = v_isSharedCheck_4337_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_a_4326_);
lean_dec(v___x_4325_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4337_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v_numFields_4330_; uint8_t v___x_4331_; 
v_numFields_4330_ = lean_ctor_get(v_a_4326_, 4);
v___x_4331_ = lean_nat_dec_lt(v___x_4318_, v_numFields_4330_);
if (v___x_4331_ == 0)
{
lean_object* v___x_4333_; 
lean_dec(v_a_4326_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4319_);
v___x_4333_ = v___x_4328_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v___x_4319_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
}
}
else
{
lean_object* v___x_4335_; 
lean_del_object(v___x_4328_);
lean_inc(v_a_4326_);
v___x_4335_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(v_a_4326_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v___x_4336_; 
lean_dec_ref(v___x_4335_);
v___x_4336_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(v_a_4326_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_);
return v___x_4336_;
}
else
{
lean_dec(v_a_4326_);
return v___x_4335_;
}
}
}
}
else
{
lean_object* v_a_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4345_; 
v_a_4338_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4345_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4345_ == 0)
{
v___x_4340_ = v___x_4325_;
v_isShared_4341_ = v_isSharedCheck_4345_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_a_4338_);
lean_dec(v___x_4325_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4345_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v___x_4343_; 
if (v_isShared_4341_ == 0)
{
v___x_4343_ = v___x_4340_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_a_4338_);
v___x_4343_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
return v___x_4343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed(lean_object* v_head_4346_, lean_object* v___x_4347_, lean_object* v___x_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(v_head_4346_, v___x_4347_, v___x_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___x_4347_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(uint8_t v___y_4355_, uint8_t v___x_4356_, lean_object* v_as_x27_4357_, lean_object* v_b_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
if (lean_obj_tag(v_as_x27_4357_) == 0)
{
lean_object* v___x_4364_; 
v___x_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4364_, 0, v_b_4358_);
return v___x_4364_;
}
else
{
lean_object* v_head_4365_; lean_object* v_tail_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___f_4369_; uint8_t v___y_4371_; uint8_t v___x_4374_; 
v_head_4365_ = lean_ctor_get(v_as_x27_4357_, 0);
lean_inc_n(v_head_4365_, 2);
v_tail_4366_ = lean_ctor_get(v_as_x27_4357_, 1);
lean_inc(v_tail_4366_);
lean_dec_ref(v_as_x27_4357_);
v___x_4367_ = lean_unsigned_to_nat(0u);
v___x_4368_ = lean_box(0);
v___f_4369_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4369_, 0, v_head_4365_);
lean_closure_set(v___f_4369_, 1, v___x_4367_);
lean_closure_set(v___f_4369_, 2, v___x_4368_);
v___x_4374_ = l_Lean_isPrivateName(v_head_4365_);
lean_dec(v_head_4365_);
if (v___x_4374_ == 0)
{
v___y_4371_ = v___y_4355_;
goto v___jp_4370_;
}
else
{
v___y_4371_ = v___x_4356_;
goto v___jp_4370_;
}
v___jp_4370_:
{
lean_object* v___x_4372_; 
v___x_4372_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v___f_4369_, v___y_4371_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_dec_ref(v___x_4372_);
v_as_x27_4357_ = v_tail_4366_;
v_b_4358_ = v___x_4368_;
goto _start;
}
else
{
lean_dec(v_tail_4366_);
return v___x_4372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___boxed(lean_object* v___y_4375_, lean_object* v___x_4376_, lean_object* v_as_x27_4377_, lean_object* v_b_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
uint8_t v___y_20116__boxed_4384_; uint8_t v___x_20117__boxed_4385_; lean_object* v_res_4386_; 
v___y_20116__boxed_4384_ = lean_unbox(v___y_4375_);
v___x_20117__boxed_4385_ = lean_unbox(v___x_4376_);
v_res_4386_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___y_20116__boxed_4384_, v___x_20117__boxed_4385_, v_as_x27_4377_, v_b_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1(uint8_t v___y_4387_, uint8_t v_hasTrace_4388_, lean_object* v_ctors_4389_, lean_object* v___x_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
lean_object* v___x_4396_; 
v___x_4396_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___y_4387_, v_hasTrace_4388_, v_ctors_4389_, v___x_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4403_; 
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4403_ == 0)
{
lean_object* v_unused_4404_; 
v_unused_4404_ = lean_ctor_get(v___x_4396_, 0);
lean_dec(v_unused_4404_);
v___x_4398_ = v___x_4396_;
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
else
{
lean_dec(v___x_4396_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
lean_ctor_set(v___x_4398_, 0, v___x_4390_);
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v___x_4390_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
return v___x_4401_;
}
}
}
else
{
return v___x_4396_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed(lean_object* v___y_4405_, lean_object* v_hasTrace_4406_, lean_object* v_ctors_4407_, lean_object* v___x_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_){
_start:
{
uint8_t v___y_20161__boxed_4414_; uint8_t v_hasTrace_boxed_4415_; lean_object* v_res_4416_; 
v___y_20161__boxed_4414_ = lean_unbox(v___y_4405_);
v_hasTrace_boxed_4415_ = lean_unbox(v_hasTrace_4406_);
v_res_4416_ = l_Lean_Meta_mkInjectiveTheorems___lam__1(v___y_20161__boxed_4414_, v_hasTrace_boxed_4415_, v_ctors_4407_, v___x_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_);
lean_dec(v___y_4412_);
lean_dec_ref(v___y_4411_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2(uint8_t v_hasTrace_4417_, uint8_t v___x_4418_, lean_object* v_ctors_4419_, lean_object* v___x_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v___x_4426_; 
v___x_4426_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v_hasTrace_4417_, v___x_4418_, v_ctors_4419_, v___x_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4433_; 
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4433_ == 0)
{
lean_object* v_unused_4434_; 
v_unused_4434_ = lean_ctor_get(v___x_4426_, 0);
lean_dec(v_unused_4434_);
v___x_4428_ = v___x_4426_;
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
else
{
lean_dec(v___x_4426_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4431_; 
if (v_isShared_4429_ == 0)
{
lean_ctor_set(v___x_4428_, 0, v___x_4420_);
v___x_4431_ = v___x_4428_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v___x_4420_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
return v___x_4431_;
}
}
}
else
{
return v___x_4426_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed(lean_object* v_hasTrace_4435_, lean_object* v___x_4436_, lean_object* v_ctors_4437_, lean_object* v___x_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
uint8_t v_hasTrace_boxed_4444_; uint8_t v___x_20202__boxed_4445_; lean_object* v_res_4446_; 
v_hasTrace_boxed_4444_ = lean_unbox(v_hasTrace_4435_);
v___x_20202__boxed_4445_ = lean_unbox(v___x_4436_);
v_res_4446_ = l_Lean_Meta_mkInjectiveTheorems___lam__2(v_hasTrace_boxed_4444_, v___x_20202__boxed_4445_, v_ctors_4437_, v___x_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__3(uint8_t v___x_4447_, uint8_t v_isUnsafe_4448_, lean_object* v_ctors_4449_, lean_object* v___x_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_){
_start:
{
lean_object* v___x_4456_; 
v___x_4456_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___x_4447_, v_isUnsafe_4448_, v_ctors_4449_, v___x_4450_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_);
if (lean_obj_tag(v___x_4456_) == 0)
{
lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4463_; 
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4456_);
if (v_isSharedCheck_4463_ == 0)
{
lean_object* v_unused_4464_; 
v_unused_4464_ = lean_ctor_get(v___x_4456_, 0);
lean_dec(v_unused_4464_);
v___x_4458_ = v___x_4456_;
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
else
{
lean_dec(v___x_4456_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
v_resetjp_4457_:
{
lean_object* v___x_4461_; 
if (v_isShared_4459_ == 0)
{
lean_ctor_set(v___x_4458_, 0, v___x_4450_);
v___x_4461_ = v___x_4458_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4450_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
else
{
return v___x_4456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__3___boxed(lean_object* v___x_4465_, lean_object* v_isUnsafe_4466_, lean_object* v_ctors_4467_, lean_object* v___x_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_){
_start:
{
uint8_t v___x_20243__boxed_4474_; uint8_t v_isUnsafe_boxed_4475_; lean_object* v_res_4476_; 
v___x_20243__boxed_4474_ = lean_unbox(v___x_4465_);
v_isUnsafe_boxed_4475_ = lean_unbox(v_isUnsafe_4466_);
v_res_4476_ = l_Lean_Meta_mkInjectiveTheorems___lam__3(v___x_20243__boxed_4474_, v_isUnsafe_boxed_4475_, v_ctors_4467_, v___x_4468_, v___y_4469_, v___y_4470_, v___y_4471_, v___y_4472_);
lean_dec(v___y_4472_);
lean_dec_ref(v___y_4471_);
lean_dec(v___y_4470_);
lean_dec_ref(v___y_4469_);
return v_res_4476_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4478_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0));
v___x_4479_ = l_Lean_stringToMessageData(v___x_4478_);
return v___x_4479_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(lean_object* v_constName_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_){
_start:
{
lean_object* v___x_4486_; lean_object* v_env_4487_; lean_object* v___x_4488_; 
v___x_4486_ = lean_st_ref_get(v___y_4484_);
v_env_4487_ = lean_ctor_get(v___x_4486_, 0);
lean_inc_ref(v_env_4487_);
lean_dec(v___x_4486_);
lean_inc(v_constName_4480_);
v___x_4488_ = l_Lean_isInductiveCore_x3f(v_env_4487_, v_constName_4480_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v___x_4489_; uint8_t v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
v___x_4489_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_4490_ = 0;
v___x_4491_ = l_Lean_MessageData_ofConstName(v_constName_4480_, v___x_4490_);
v___x_4492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4489_);
lean_ctor_set(v___x_4492_, 1, v___x_4491_);
v___x_4493_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1);
v___x_4494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4492_);
lean_ctor_set(v___x_4494_, 1, v___x_4493_);
v___x_4495_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_4494_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_);
return v___x_4495_;
}
else
{
lean_object* v_val_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4503_; 
lean_dec(v_constName_4480_);
v_val_4496_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4498_ = v___x_4488_;
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_val_4496_);
lean_dec(v___x_4488_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
lean_ctor_set_tag(v___x_4498_, 0);
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_val_4496_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___boxed(lean_object* v_constName_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
lean_object* v_res_4510_; 
v_res_4510_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_constName_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4505_);
return v_res_4510_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__0(void){
_start:
{
lean_object* v___x_4511_; 
v___x_4511_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4511_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__1(void){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4512_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4512_);
return v___x_4513_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__2(void){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4514_ = lean_unsigned_to_nat(32u);
v___x_4515_ = lean_mk_empty_array_with_capacity(v___x_4514_);
v___x_4516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4515_);
return v___x_4516_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__3(void){
_start:
{
size_t v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4517_ = ((size_t)5ULL);
v___x_4518_ = lean_unsigned_to_nat(0u);
v___x_4519_ = lean_unsigned_to_nat(32u);
v___x_4520_ = lean_mk_empty_array_with_capacity(v___x_4519_);
v___x_4521_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_4522_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4522_, 0, v___x_4521_);
lean_ctor_set(v___x_4522_, 1, v___x_4520_);
lean_ctor_set(v___x_4522_, 2, v___x_4518_);
lean_ctor_set(v___x_4522_, 3, v___x_4518_);
lean_ctor_set_usize(v___x_4522_, 4, v___x_4517_);
return v___x_4522_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__4(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4523_ = lean_box(1);
v___x_4524_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4525_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__1, &l_Lean_Meta_mkInjectiveTheorems___closed__1_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__1);
v___x_4526_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
lean_ctor_set(v___x_4526_, 1, v___x_4524_);
lean_ctor_set(v___x_4526_, 2, v___x_4523_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems(lean_object* v_declName_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_, lean_object* v_a_4533_){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4535_ = lean_st_ref_get(v_a_4533_);
lean_inc(v_declName_4529_);
v___x_4536_ = l_Lean_Meta_isInductivePredicate(v_declName_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4536_) == 0)
{
lean_object* v_a_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4733_; 
v_a_4537_ = lean_ctor_get(v___x_4536_, 0);
v_isSharedCheck_4733_ = !lean_is_exclusive(v___x_4536_);
if (v_isSharedCheck_4733_ == 0)
{
v___x_4539_ = v___x_4536_;
v_isShared_4540_ = v_isSharedCheck_4733_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_a_4537_);
lean_dec(v___x_4536_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4733_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v_env_4546_; lean_object* v___f_4547_; lean_object* v___x_4548_; uint8_t v___x_4549_; lean_object* v___y_4551_; lean_object* v___y_4552_; uint8_t v___y_4553_; lean_object* v___y_4554_; lean_object* v___y_4555_; lean_object* v___y_4556_; lean_object* v_a_4557_; lean_object* v___y_4567_; lean_object* v___y_4568_; uint8_t v___y_4569_; lean_object* v___y_4570_; lean_object* v___y_4571_; lean_object* v___y_4572_; lean_object* v_a_4573_; lean_object* v___y_4576_; lean_object* v___y_4577_; uint8_t v___y_4578_; lean_object* v___y_4579_; lean_object* v___y_4580_; lean_object* v___y_4581_; lean_object* v_a_4582_; lean_object* v___y_4585_; lean_object* v___y_4586_; uint8_t v___y_4587_; lean_object* v___y_4588_; lean_object* v___y_4589_; lean_object* v___y_4590_; lean_object* v_a_4591_; lean_object* v___y_4604_; lean_object* v___y_4605_; uint8_t v___y_4606_; lean_object* v___y_4607_; lean_object* v___y_4608_; lean_object* v___y_4609_; lean_object* v_a_4610_; lean_object* v___y_4613_; lean_object* v___y_4614_; uint8_t v___y_4615_; lean_object* v___y_4616_; lean_object* v___y_4617_; lean_object* v___y_4618_; lean_object* v_a_4619_; uint8_t v___y_4622_; lean_object* v___y_4623_; lean_object* v___y_4624_; uint8_t v___y_4625_; lean_object* v___y_4626_; uint8_t v___y_4664_; uint8_t v___x_4729_; 
v_env_4546_ = lean_ctor_get(v___x_4535_, 0);
lean_inc_ref(v_env_4546_);
lean_dec(v___x_4535_);
lean_inc(v_declName_4529_);
v___f_4547_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4547_, 0, v_declName_4529_);
v___x_4548_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2));
v___x_4549_ = 1;
v___x_4729_ = l_Lean_Environment_contains(v_env_4546_, v___x_4548_, v___x_4549_);
if (v___x_4729_ == 0)
{
v___y_4664_ = v___x_4729_;
goto v___jp_4663_;
}
else
{
lean_object* v_options_4730_; lean_object* v___x_4731_; uint8_t v___x_4732_; 
v_options_4730_ = lean_ctor_get(v_a_4532_, 2);
v___x_4731_ = l_Lean_Meta_genInjectivity;
v___x_4732_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4730_, v___x_4731_);
v___y_4664_ = v___x_4732_;
goto v___jp_4663_;
}
v___jp_4541_:
{
lean_object* v___x_4542_; lean_object* v___x_4544_; 
v___x_4542_ = lean_box(0);
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 0, v___x_4542_);
v___x_4544_ = v___x_4539_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v___x_4542_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
v___jp_4550_:
{
lean_object* v___x_4558_; double v___x_4559_; double v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4558_ = lean_io_get_num_heartbeats();
v___x_4559_ = lean_float_of_nat(v___y_4556_);
v___x_4560_ = lean_float_of_nat(v___x_4558_);
v___x_4561_ = lean_box_float(v___x_4559_);
v___x_4562_ = lean_box_float(v___x_4560_);
v___x_4563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4563_, 0, v___x_4561_);
lean_ctor_set(v___x_4563_, 1, v___x_4562_);
v___x_4564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4564_, 0, v_a_4557_);
lean_ctor_set(v___x_4564_, 1, v___x_4563_);
lean_inc_ref(v___y_4551_);
lean_inc(v___y_4552_);
v___x_4565_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___y_4552_, v___x_4549_, v___y_4551_, v___y_4555_, v___y_4553_, v___y_4554_, v___f_4547_, v___x_4564_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
return v___x_4565_;
}
v___jp_4566_:
{
lean_object* v___x_4574_; 
v___x_4574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4574_, 0, v_a_4573_);
v___y_4551_ = v___y_4568_;
v___y_4552_ = v___y_4567_;
v___y_4553_ = v___y_4569_;
v___y_4554_ = v___y_4570_;
v___y_4555_ = v___y_4571_;
v___y_4556_ = v___y_4572_;
v_a_4557_ = v___x_4574_;
goto v___jp_4550_;
}
v___jp_4575_:
{
lean_object* v___x_4583_; 
v___x_4583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4583_, 0, v_a_4582_);
v___y_4551_ = v___y_4577_;
v___y_4552_ = v___y_4576_;
v___y_4553_ = v___y_4578_;
v___y_4554_ = v___y_4579_;
v___y_4555_ = v___y_4580_;
v___y_4556_ = v___y_4581_;
v_a_4557_ = v___x_4583_;
goto v___jp_4550_;
}
v___jp_4584_:
{
lean_object* v___x_4592_; double v___x_4593_; double v___x_4594_; double v___x_4595_; double v___x_4596_; double v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4592_ = lean_io_mono_nanos_now();
v___x_4593_ = lean_float_of_nat(v___y_4588_);
v___x_4594_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_4595_ = lean_float_div(v___x_4593_, v___x_4594_);
v___x_4596_ = lean_float_of_nat(v___x_4592_);
v___x_4597_ = lean_float_div(v___x_4596_, v___x_4594_);
v___x_4598_ = lean_box_float(v___x_4595_);
v___x_4599_ = lean_box_float(v___x_4597_);
v___x_4600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4598_);
lean_ctor_set(v___x_4600_, 1, v___x_4599_);
v___x_4601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4601_, 0, v_a_4591_);
lean_ctor_set(v___x_4601_, 1, v___x_4600_);
lean_inc_ref(v___y_4585_);
lean_inc(v___y_4586_);
v___x_4602_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___y_4586_, v___x_4549_, v___y_4585_, v___y_4590_, v___y_4587_, v___y_4589_, v___f_4547_, v___x_4601_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
return v___x_4602_;
}
v___jp_4603_:
{
lean_object* v___x_4611_; 
v___x_4611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4611_, 0, v_a_4610_);
v___y_4585_ = v___y_4605_;
v___y_4586_ = v___y_4604_;
v___y_4587_ = v___y_4606_;
v___y_4588_ = v___y_4607_;
v___y_4589_ = v___y_4608_;
v___y_4590_ = v___y_4609_;
v_a_4591_ = v___x_4611_;
goto v___jp_4584_;
}
v___jp_4612_:
{
lean_object* v___x_4620_; 
v___x_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4620_, 0, v_a_4619_);
v___y_4585_ = v___y_4614_;
v___y_4586_ = v___y_4613_;
v___y_4587_ = v___y_4615_;
v___y_4588_ = v___y_4616_;
v___y_4589_ = v___y_4617_;
v___y_4590_ = v___y_4618_;
v_a_4591_ = v___x_4620_;
goto v___jp_4584_;
}
v___jp_4621_:
{
lean_object* v___x_4627_; lean_object* v_a_4628_; lean_object* v___x_4629_; uint8_t v___x_4630_; 
v___x_4627_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_4533_);
v_a_4628_ = lean_ctor_get(v___x_4627_, 0);
lean_inc(v_a_4628_);
lean_dec_ref(v___x_4627_);
v___x_4629_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4630_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v___y_4626_, v___x_4629_);
if (v___x_4630_ == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4631_ = lean_io_mono_nanos_now();
v___x_4632_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_object* v_a_4633_; uint8_t v_isUnsafe_4634_; 
v_a_4633_ = lean_ctor_get(v___x_4632_, 0);
lean_inc(v_a_4633_);
lean_dec_ref(v___x_4632_);
v_isUnsafe_4634_ = lean_ctor_get_uint8(v_a_4633_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4634_ == 0)
{
lean_object* v_ctors_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___f_4641_; lean_object* v___x_4642_; 
v_ctors_4635_ = lean_ctor_get(v_a_4633_, 4);
lean_inc(v_ctors_4635_);
lean_dec(v_a_4633_);
v___x_4636_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__4, &l_Lean_Meta_mkInjectiveTheorems___closed__4_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__4);
v___x_4637_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__5));
v___x_4638_ = lean_box(0);
v___x_4639_ = lean_box(v___y_4622_);
v___x_4640_ = lean_box(v___x_4630_);
v___f_4641_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed), 9, 4);
lean_closure_set(v___f_4641_, 0, v___x_4639_);
lean_closure_set(v___f_4641_, 1, v___x_4640_);
lean_closure_set(v___f_4641_, 2, v_ctors_4635_);
lean_closure_set(v___f_4641_, 3, v___x_4638_);
v___x_4642_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4636_, v___x_4637_, v___f_4641_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4642_) == 0)
{
lean_object* v_a_4643_; 
v_a_4643_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_a_4643_);
lean_dec_ref(v___x_4642_);
v___y_4604_ = v___y_4623_;
v___y_4605_ = v___y_4624_;
v___y_4606_ = v___y_4625_;
v___y_4607_ = v___x_4631_;
v___y_4608_ = v_a_4628_;
v___y_4609_ = v___y_4626_;
v_a_4610_ = v_a_4643_;
goto v___jp_4603_;
}
else
{
lean_object* v_a_4644_; 
v_a_4644_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_a_4644_);
lean_dec_ref(v___x_4642_);
v___y_4613_ = v___y_4623_;
v___y_4614_ = v___y_4624_;
v___y_4615_ = v___y_4625_;
v___y_4616_ = v___x_4631_;
v___y_4617_ = v_a_4628_;
v___y_4618_ = v___y_4626_;
v_a_4619_ = v_a_4644_;
goto v___jp_4612_;
}
}
else
{
lean_object* v___x_4645_; 
lean_dec(v_a_4633_);
v___x_4645_ = lean_box(0);
v___y_4604_ = v___y_4623_;
v___y_4605_ = v___y_4624_;
v___y_4606_ = v___y_4625_;
v___y_4607_ = v___x_4631_;
v___y_4608_ = v_a_4628_;
v___y_4609_ = v___y_4626_;
v_a_4610_ = v___x_4645_;
goto v___jp_4603_;
}
}
else
{
lean_object* v_a_4646_; 
v_a_4646_ = lean_ctor_get(v___x_4632_, 0);
lean_inc(v_a_4646_);
lean_dec_ref(v___x_4632_);
v___y_4613_ = v___y_4623_;
v___y_4614_ = v___y_4624_;
v___y_4615_ = v___y_4625_;
v___y_4616_ = v___x_4631_;
v___y_4617_ = v_a_4628_;
v___y_4618_ = v___y_4626_;
v_a_4619_ = v_a_4646_;
goto v___jp_4612_;
}
}
else
{
lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4647_ = lean_io_get_num_heartbeats();
v___x_4648_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v_a_4649_; uint8_t v_isUnsafe_4650_; 
v_a_4649_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4649_);
lean_dec_ref(v___x_4648_);
v_isUnsafe_4650_ = lean_ctor_get_uint8(v_a_4649_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4650_ == 0)
{
lean_object* v_ctors_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___f_4657_; lean_object* v___x_4658_; 
v_ctors_4651_ = lean_ctor_get(v_a_4649_, 4);
lean_inc(v_ctors_4651_);
lean_dec(v_a_4649_);
v___x_4652_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__4, &l_Lean_Meta_mkInjectiveTheorems___closed__4_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__4);
v___x_4653_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__5));
v___x_4654_ = lean_box(0);
v___x_4655_ = lean_box(v___x_4630_);
v___x_4656_ = lean_box(v_isUnsafe_4650_);
v___f_4657_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__3___boxed), 9, 4);
lean_closure_set(v___f_4657_, 0, v___x_4655_);
lean_closure_set(v___f_4657_, 1, v___x_4656_);
lean_closure_set(v___f_4657_, 2, v_ctors_4651_);
lean_closure_set(v___f_4657_, 3, v___x_4654_);
v___x_4658_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4652_, v___x_4653_, v___f_4657_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4658_) == 0)
{
lean_object* v_a_4659_; 
v_a_4659_ = lean_ctor_get(v___x_4658_, 0);
lean_inc(v_a_4659_);
lean_dec_ref(v___x_4658_);
v___y_4567_ = v___y_4623_;
v___y_4568_ = v___y_4624_;
v___y_4569_ = v___y_4625_;
v___y_4570_ = v_a_4628_;
v___y_4571_ = v___y_4626_;
v___y_4572_ = v___x_4647_;
v_a_4573_ = v_a_4659_;
goto v___jp_4566_;
}
else
{
lean_object* v_a_4660_; 
v_a_4660_ = lean_ctor_get(v___x_4658_, 0);
lean_inc(v_a_4660_);
lean_dec_ref(v___x_4658_);
v___y_4576_ = v___y_4623_;
v___y_4577_ = v___y_4624_;
v___y_4578_ = v___y_4625_;
v___y_4579_ = v_a_4628_;
v___y_4580_ = v___y_4626_;
v___y_4581_ = v___x_4647_;
v_a_4582_ = v_a_4660_;
goto v___jp_4575_;
}
}
else
{
lean_object* v___x_4661_; 
lean_dec(v_a_4649_);
v___x_4661_ = lean_box(0);
v___y_4567_ = v___y_4623_;
v___y_4568_ = v___y_4624_;
v___y_4569_ = v___y_4625_;
v___y_4570_ = v_a_4628_;
v___y_4571_ = v___y_4626_;
v___y_4572_ = v___x_4647_;
v_a_4573_ = v___x_4661_;
goto v___jp_4566_;
}
}
else
{
lean_object* v_a_4662_; 
v_a_4662_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4662_);
lean_dec_ref(v___x_4648_);
v___y_4576_ = v___y_4623_;
v___y_4577_ = v___y_4624_;
v___y_4578_ = v___y_4625_;
v___y_4579_ = v_a_4628_;
v___y_4580_ = v___y_4626_;
v___y_4581_ = v___x_4647_;
v_a_4582_ = v_a_4662_;
goto v___jp_4575_;
}
}
}
v___jp_4663_:
{
if (v___y_4664_ == 0)
{
lean_dec_ref(v___f_4547_);
lean_dec(v_a_4537_);
lean_dec(v_declName_4529_);
goto v___jp_4541_;
}
else
{
uint8_t v___x_4665_; 
v___x_4665_ = lean_unbox(v_a_4537_);
lean_dec(v_a_4537_);
if (v___x_4665_ == 0)
{
lean_object* v_options_4666_; uint8_t v_hasTrace_4667_; 
lean_del_object(v___x_4539_);
v_options_4666_ = lean_ctor_get(v_a_4532_, 2);
v_hasTrace_4667_ = lean_ctor_get_uint8(v_options_4666_, sizeof(void*)*1);
if (v_hasTrace_4667_ == 0)
{
lean_object* v___x_4668_; 
lean_dec_ref(v___f_4547_);
v___x_4668_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4668_) == 0)
{
lean_object* v_a_4669_; lean_object* v___x_4671_; uint8_t v_isShared_4672_; uint8_t v_isSharedCheck_4686_; 
v_a_4669_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4671_ = v___x_4668_;
v_isShared_4672_ = v_isSharedCheck_4686_;
goto v_resetjp_4670_;
}
else
{
lean_inc(v_a_4669_);
lean_dec(v___x_4668_);
v___x_4671_ = lean_box(0);
v_isShared_4672_ = v_isSharedCheck_4686_;
goto v_resetjp_4670_;
}
v_resetjp_4670_:
{
uint8_t v_isUnsafe_4673_; 
v_isUnsafe_4673_ = lean_ctor_get_uint8(v_a_4669_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4673_ == 0)
{
lean_object* v_ctors_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___f_4680_; lean_object* v___x_4681_; 
lean_del_object(v___x_4671_);
v_ctors_4674_ = lean_ctor_get(v_a_4669_, 4);
lean_inc(v_ctors_4674_);
lean_dec(v_a_4669_);
v___x_4675_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__4, &l_Lean_Meta_mkInjectiveTheorems___closed__4_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__4);
v___x_4676_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__5));
v___x_4677_ = lean_box(0);
v___x_4678_ = lean_box(v___y_4664_);
v___x_4679_ = lean_box(v_hasTrace_4667_);
v___f_4680_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4680_, 0, v___x_4678_);
lean_closure_set(v___f_4680_, 1, v___x_4679_);
lean_closure_set(v___f_4680_, 2, v_ctors_4674_);
lean_closure_set(v___f_4680_, 3, v___x_4677_);
v___x_4681_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4675_, v___x_4676_, v___f_4680_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
return v___x_4681_;
}
else
{
lean_object* v___x_4682_; lean_object* v___x_4684_; 
lean_dec(v_a_4669_);
v___x_4682_ = lean_box(0);
if (v_isShared_4672_ == 0)
{
lean_ctor_set(v___x_4671_, 0, v___x_4682_);
v___x_4684_ = v___x_4671_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v___x_4682_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
else
{
lean_object* v_a_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4694_; 
v_a_4687_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4689_ = v___x_4668_;
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_a_4687_);
lean_dec(v___x_4668_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4692_; 
if (v_isShared_4690_ == 0)
{
v___x_4692_ = v___x_4689_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_a_4687_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
return v___x_4692_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; uint8_t v___x_4699_; 
v_inheritedTraceOptions_4695_ = lean_ctor_get(v_a_4532_, 13);
v___x_4696_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_4697_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_4698_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_4699_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4695_, v_options_4666_, v___x_4698_);
if (v___x_4699_ == 0)
{
lean_object* v___x_4700_; uint8_t v___x_4701_; 
v___x_4700_ = l_Lean_trace_profiler;
v___x_4701_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4666_, v___x_4700_);
if (v___x_4701_ == 0)
{
lean_object* v___x_4702_; 
lean_dec_ref(v___f_4547_);
v___x_4702_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
if (lean_obj_tag(v___x_4702_) == 0)
{
lean_object* v_a_4703_; lean_object* v___x_4705_; uint8_t v_isShared_4706_; uint8_t v_isSharedCheck_4720_; 
v_a_4703_ = lean_ctor_get(v___x_4702_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v___x_4702_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4705_ = v___x_4702_;
v_isShared_4706_ = v_isSharedCheck_4720_;
goto v_resetjp_4704_;
}
else
{
lean_inc(v_a_4703_);
lean_dec(v___x_4702_);
v___x_4705_ = lean_box(0);
v_isShared_4706_ = v_isSharedCheck_4720_;
goto v_resetjp_4704_;
}
v_resetjp_4704_:
{
uint8_t v_isUnsafe_4707_; 
v_isUnsafe_4707_ = lean_ctor_get_uint8(v_a_4703_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4707_ == 0)
{
lean_object* v_ctors_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___f_4714_; lean_object* v___x_4715_; 
lean_del_object(v___x_4705_);
v_ctors_4708_ = lean_ctor_get(v_a_4703_, 4);
lean_inc(v_ctors_4708_);
lean_dec(v_a_4703_);
v___x_4709_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__4, &l_Lean_Meta_mkInjectiveTheorems___closed__4_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__4);
v___x_4710_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__5));
v___x_4711_ = lean_box(0);
v___x_4712_ = lean_box(v_hasTrace_4667_);
v___x_4713_ = lean_box(v___x_4701_);
v___f_4714_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed), 9, 4);
lean_closure_set(v___f_4714_, 0, v___x_4712_);
lean_closure_set(v___f_4714_, 1, v___x_4713_);
lean_closure_set(v___f_4714_, 2, v_ctors_4708_);
lean_closure_set(v___f_4714_, 3, v___x_4711_);
v___x_4715_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4709_, v___x_4710_, v___f_4714_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_);
return v___x_4715_;
}
else
{
lean_object* v___x_4716_; lean_object* v___x_4718_; 
lean_dec(v_a_4703_);
v___x_4716_ = lean_box(0);
if (v_isShared_4706_ == 0)
{
lean_ctor_set(v___x_4705_, 0, v___x_4716_);
v___x_4718_ = v___x_4705_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v___x_4716_);
v___x_4718_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
return v___x_4718_;
}
}
}
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
v_a_4721_ = lean_ctor_get(v___x_4702_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4702_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4702_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4702_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4721_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
else
{
v___y_4622_ = v_hasTrace_4667_;
v___y_4623_ = v___x_4696_;
v___y_4624_ = v___x_4697_;
v___y_4625_ = v___x_4699_;
v___y_4626_ = v_options_4666_;
goto v___jp_4621_;
}
}
else
{
v___y_4622_ = v_hasTrace_4667_;
v___y_4623_ = v___x_4696_;
v___y_4624_ = v___x_4697_;
v___y_4625_ = v___x_4699_;
v___y_4626_ = v_options_4666_;
goto v___jp_4621_;
}
}
}
else
{
lean_dec_ref(v___f_4547_);
lean_dec(v_declName_4529_);
goto v___jp_4541_;
}
}
}
}
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
lean_dec(v___x_4535_);
lean_dec(v_declName_4529_);
v_a_4734_ = lean_ctor_get(v___x_4536_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4536_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4536_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4536_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___boxed(lean_object* v_declName_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_Lean_Meta_mkInjectiveTheorems(v_declName_4742_, v_a_4743_, v_a_4744_, v_a_4745_, v_a_4746_);
lean_dec(v_a_4746_);
lean_dec_ref(v_a_4745_);
lean_dec(v_a_4744_);
lean_dec_ref(v_a_4743_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(uint8_t v___y_4749_, uint8_t v___x_4750_, lean_object* v_as_4751_, lean_object* v_as_x27_4752_, lean_object* v_b_4753_, lean_object* v_a_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_){
_start:
{
lean_object* v___x_4760_; 
v___x_4760_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___y_4749_, v___x_4750_, v_as_x27_4752_, v_b_4753_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___boxed(lean_object* v___y_4761_, lean_object* v___x_4762_, lean_object* v_as_4763_, lean_object* v_as_x27_4764_, lean_object* v_b_4765_, lean_object* v_a_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_){
_start:
{
uint8_t v___y_20870__boxed_4772_; uint8_t v___x_20871__boxed_4773_; lean_object* v_res_4774_; 
v___y_20870__boxed_4772_ = lean_unbox(v___y_4761_);
v___x_20871__boxed_4773_ = lean_unbox(v___x_4762_);
v_res_4774_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(v___y_20870__boxed_4772_, v___x_20871__boxed_4773_, v_as_4763_, v_as_x27_4764_, v_b_4765_, v_a_4766_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_);
lean_dec(v___y_4770_);
lean_dec_ref(v___y_4769_);
lean_dec(v___y_4768_);
lean_dec_ref(v___y_4767_);
lean_dec(v_as_4763_);
return v_res_4774_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4815_ = lean_unsigned_to_nat(4172903888u);
v___x_4816_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4817_ = l_Lean_Name_num___override(v___x_4816_, v___x_4815_);
return v___x_4817_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; 
v___x_4819_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4820_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4821_ = l_Lean_Name_str___override(v___x_4820_, v___x_4819_);
return v___x_4821_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4823_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4824_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4825_ = l_Lean_Name_str___override(v___x_4824_, v___x_4823_);
return v___x_4825_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
v___x_4826_ = lean_unsigned_to_nat(2u);
v___x_4827_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4828_ = l_Lean_Name_num___override(v___x_4827_, v___x_4826_);
return v___x_4828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4830_; uint8_t v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; 
v___x_4830_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_4831_ = 0;
v___x_4832_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4833_ = l_Lean_registerTraceClass(v___x_4830_, v___x_4831_, v___x_4832_);
return v___x_4833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2____boxed(lean_object* v_a_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(lean_object* v_a_4836_, lean_object* v_b_4837_){
_start:
{
lean_object* v_array_4838_; lean_object* v_start_4839_; lean_object* v_stop_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4853_; 
v_array_4838_ = lean_ctor_get(v_a_4836_, 0);
v_start_4839_ = lean_ctor_get(v_a_4836_, 1);
v_stop_4840_ = lean_ctor_get(v_a_4836_, 2);
v_isSharedCheck_4853_ = !lean_is_exclusive(v_a_4836_);
if (v_isSharedCheck_4853_ == 0)
{
v___x_4842_ = v_a_4836_;
v_isShared_4843_ = v_isSharedCheck_4853_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_stop_4840_);
lean_inc(v_start_4839_);
lean_inc(v_array_4838_);
lean_dec(v_a_4836_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4853_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
uint8_t v___x_4844_; 
v___x_4844_ = lean_nat_dec_lt(v_start_4839_, v_stop_4840_);
if (v___x_4844_ == 0)
{
lean_del_object(v___x_4842_);
lean_dec(v_stop_4840_);
lean_dec(v_start_4839_);
lean_dec_ref(v_array_4838_);
return v_b_4837_;
}
else
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4848_; 
v___x_4845_ = lean_unsigned_to_nat(1u);
v___x_4846_ = lean_nat_add(v_start_4839_, v___x_4845_);
lean_inc_ref(v_array_4838_);
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 1, v___x_4846_);
v___x_4848_ = v___x_4842_;
goto v_reusejp_4847_;
}
else
{
lean_object* v_reuseFailAlloc_4852_; 
v_reuseFailAlloc_4852_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4852_, 0, v_array_4838_);
lean_ctor_set(v_reuseFailAlloc_4852_, 1, v___x_4846_);
lean_ctor_set(v_reuseFailAlloc_4852_, 2, v_stop_4840_);
v___x_4848_ = v_reuseFailAlloc_4852_;
goto v_reusejp_4847_;
}
v_reusejp_4847_:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4849_ = lean_array_fget(v_array_4838_, v_start_4839_);
lean_dec(v_start_4839_);
lean_dec_ref(v_array_4838_);
v___x_4850_ = lean_array_push(v_b_4837_, v___x_4849_);
v_a_4836_ = v___x_4848_;
v_b_4837_ = v___x_4850_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_4854_; 
v___x_4854_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4854_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_4855_; lean_object* v___x_4856_; 
v___x_4855_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4856_, 0, v___x_4855_);
return v___x_4856_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; 
v___x_4857_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_4858_ = lean_unsigned_to_nat(0u);
v___x_4859_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4859_, 0, v___x_4858_);
lean_ctor_set(v___x_4859_, 1, v___x_4858_);
lean_ctor_set(v___x_4859_, 2, v___x_4858_);
lean_ctor_set(v___x_4859_, 3, v___x_4857_);
lean_ctor_set(v___x_4859_, 4, v___x_4857_);
lean_ctor_set(v___x_4859_, 5, v___x_4857_);
lean_ctor_set(v___x_4859_, 6, v___x_4857_);
lean_ctor_set(v___x_4859_, 7, v___x_4857_);
lean_ctor_set(v___x_4859_, 8, v___x_4857_);
return v___x_4859_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; 
v___x_4860_ = lean_box(1);
v___x_4861_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4862_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_4863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4863_, 0, v___x_4862_);
lean_ctor_set(v___x_4863_, 1, v___x_4861_);
lean_ctor_set(v___x_4863_, 2, v___x_4860_);
return v___x_4863_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___x_4865_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4));
v___x_4866_ = l_Lean_stringToMessageData(v___x_4865_);
return v___x_4866_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4868_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_4869_ = l_Lean_stringToMessageData(v___x_4868_);
return v___x_4869_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___x_4871_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_4872_ = l_Lean_stringToMessageData(v___x_4871_);
return v___x_4872_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_4874_; lean_object* v___x_4875_; 
v___x_4874_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_4875_ = l_Lean_stringToMessageData(v___x_4874_);
return v___x_4875_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_4877_; lean_object* v___x_4878_; 
v___x_4877_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_4878_ = l_Lean_stringToMessageData(v___x_4877_);
return v___x_4878_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15(void){
_start:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; 
v___x_4880_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14));
v___x_4881_ = l_Lean_stringToMessageData(v___x_4880_);
return v___x_4881_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17(void){
_start:
{
lean_object* v___x_4883_; lean_object* v___x_4884_; 
v___x_4883_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16));
v___x_4884_ = l_Lean_stringToMessageData(v___x_4883_);
return v___x_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_4885_, lean_object* v_declHint_4886_, lean_object* v___y_4887_){
_start:
{
lean_object* v___x_4889_; lean_object* v_env_4890_; uint8_t v___x_4891_; 
v___x_4889_ = lean_st_ref_get(v___y_4887_);
v_env_4890_ = lean_ctor_get(v___x_4889_, 0);
lean_inc_ref(v_env_4890_);
lean_dec(v___x_4889_);
v___x_4891_ = l_Lean_Name_isAnonymous(v_declHint_4886_);
if (v___x_4891_ == 0)
{
uint8_t v_isExporting_4892_; 
v_isExporting_4892_ = lean_ctor_get_uint8(v_env_4890_, sizeof(void*)*8);
if (v_isExporting_4892_ == 0)
{
lean_object* v___x_4893_; 
lean_dec_ref(v_env_4890_);
lean_dec(v_declHint_4886_);
v___x_4893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4893_, 0, v_msg_4885_);
return v___x_4893_;
}
else
{
lean_object* v___x_4894_; uint8_t v___x_4895_; 
lean_inc_ref(v_env_4890_);
v___x_4894_ = l_Lean_Environment_setExporting(v_env_4890_, v___x_4891_);
lean_inc(v_declHint_4886_);
lean_inc_ref(v___x_4894_);
v___x_4895_ = l_Lean_Environment_contains(v___x_4894_, v_declHint_4886_, v_isExporting_4892_);
if (v___x_4895_ == 0)
{
lean_object* v___x_4896_; 
lean_dec_ref(v___x_4894_);
lean_dec_ref(v_env_4890_);
lean_dec(v_declHint_4886_);
v___x_4896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4896_, 0, v_msg_4885_);
return v___x_4896_;
}
else
{
lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v_c_4902_; lean_object* v___x_4903_; 
v___x_4897_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_4898_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_4899_ = l_Lean_Options_empty;
v___x_4900_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4894_);
lean_ctor_set(v___x_4900_, 1, v___x_4897_);
lean_ctor_set(v___x_4900_, 2, v___x_4898_);
lean_ctor_set(v___x_4900_, 3, v___x_4899_);
lean_inc(v_declHint_4886_);
v___x_4901_ = l_Lean_MessageData_ofConstName(v_declHint_4886_, v___x_4891_);
v_c_4902_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4902_, 0, v___x_4900_);
lean_ctor_set(v_c_4902_, 1, v___x_4901_);
v___x_4903_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4890_, v_declHint_4886_);
if (lean_obj_tag(v___x_4903_) == 0)
{
lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
lean_dec_ref(v_env_4890_);
lean_dec(v_declHint_4886_);
v___x_4904_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_4905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4905_, 0, v___x_4904_);
lean_ctor_set(v___x_4905_, 1, v_c_4902_);
v___x_4906_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_4907_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4907_, 0, v___x_4905_);
lean_ctor_set(v___x_4907_, 1, v___x_4906_);
v___x_4908_ = l_Lean_MessageData_note(v___x_4907_);
v___x_4909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4909_, 0, v_msg_4885_);
lean_ctor_set(v___x_4909_, 1, v___x_4908_);
v___x_4910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4910_, 0, v___x_4909_);
return v___x_4910_;
}
else
{
lean_object* v_val_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4946_; 
v_val_4911_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4913_ = v___x_4903_;
v_isShared_4914_ = v_isSharedCheck_4946_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_val_4911_);
lean_dec(v___x_4903_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4946_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v_mod_4918_; uint8_t v___x_4919_; 
v___x_4915_ = lean_box(0);
v___x_4916_ = l_Lean_Environment_header(v_env_4890_);
lean_dec_ref(v_env_4890_);
v___x_4917_ = l_Lean_EnvironmentHeader_moduleNames(v___x_4916_);
v_mod_4918_ = lean_array_get(v___x_4915_, v___x_4917_, v_val_4911_);
lean_dec(v_val_4911_);
lean_dec_ref(v___x_4917_);
v___x_4919_ = l_Lean_isPrivateName(v_declHint_4886_);
lean_dec(v_declHint_4886_);
if (v___x_4919_ == 0)
{
lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4931_; 
v___x_4920_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_4921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4921_, 0, v___x_4920_);
lean_ctor_set(v___x_4921_, 1, v_c_4902_);
v___x_4922_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_4923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4923_, 0, v___x_4921_);
lean_ctor_set(v___x_4923_, 1, v___x_4922_);
v___x_4924_ = l_Lean_MessageData_ofName(v_mod_4918_);
v___x_4925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4925_, 0, v___x_4923_);
lean_ctor_set(v___x_4925_, 1, v___x_4924_);
v___x_4926_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_4927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4925_);
lean_ctor_set(v___x_4927_, 1, v___x_4926_);
v___x_4928_ = l_Lean_MessageData_note(v___x_4927_);
v___x_4929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4929_, 0, v_msg_4885_);
lean_ctor_set(v___x_4929_, 1, v___x_4928_);
if (v_isShared_4914_ == 0)
{
lean_ctor_set_tag(v___x_4913_, 0);
lean_ctor_set(v___x_4913_, 0, v___x_4929_);
v___x_4931_ = v___x_4913_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v___x_4929_);
v___x_4931_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
return v___x_4931_;
}
}
else
{
lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4944_; 
v___x_4933_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_4934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4933_);
lean_ctor_set(v___x_4934_, 1, v_c_4902_);
v___x_4935_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15);
v___x_4936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4934_);
lean_ctor_set(v___x_4936_, 1, v___x_4935_);
v___x_4937_ = l_Lean_MessageData_ofName(v_mod_4918_);
v___x_4938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4938_, 0, v___x_4936_);
lean_ctor_set(v___x_4938_, 1, v___x_4937_);
v___x_4939_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17);
v___x_4940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4938_);
lean_ctor_set(v___x_4940_, 1, v___x_4939_);
v___x_4941_ = l_Lean_MessageData_note(v___x_4940_);
v___x_4942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4942_, 0, v_msg_4885_);
lean_ctor_set(v___x_4942_, 1, v___x_4941_);
if (v_isShared_4914_ == 0)
{
lean_ctor_set_tag(v___x_4913_, 0);
lean_ctor_set(v___x_4913_, 0, v___x_4942_);
v___x_4944_ = v___x_4913_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v___x_4942_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
return v___x_4944_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4947_; 
lean_dec_ref(v_env_4890_);
lean_dec(v_declHint_4886_);
v___x_4947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4947_, 0, v_msg_4885_);
return v___x_4947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_4948_, lean_object* v_declHint_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_4948_, v_declHint_4949_, v___y_4950_);
lean_dec(v___y_4950_);
return v_res_4952_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_4953_, lean_object* v_declHint_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_){
_start:
{
lean_object* v___x_4960_; lean_object* v_a_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4970_; 
v___x_4960_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_4953_, v_declHint_4954_, v___y_4958_);
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_4970_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_4970_ == 0)
{
v___x_4963_ = v___x_4960_;
v_isShared_4964_ = v_isSharedCheck_4970_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_a_4961_);
lean_dec(v___x_4960_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4970_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4968_; 
v___x_4965_ = l_Lean_unknownIdentifierMessageTag;
v___x_4966_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4966_, 0, v___x_4965_);
lean_ctor_set(v___x_4966_, 1, v_a_4961_);
if (v_isShared_4964_ == 0)
{
lean_ctor_set(v___x_4963_, 0, v___x_4966_);
v___x_4968_ = v___x_4963_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4969_; 
v_reuseFailAlloc_4969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4969_, 0, v___x_4966_);
v___x_4968_ = v_reuseFailAlloc_4969_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
return v___x_4968_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_4971_, lean_object* v_declHint_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_){
_start:
{
lean_object* v_res_4978_; 
v_res_4978_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_4971_, v_declHint_4972_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_4979_, lean_object* v_msg_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_){
_start:
{
lean_object* v_fileName_4986_; lean_object* v_fileMap_4987_; lean_object* v_options_4988_; lean_object* v_currRecDepth_4989_; lean_object* v_maxRecDepth_4990_; lean_object* v_ref_4991_; lean_object* v_currNamespace_4992_; lean_object* v_openDecls_4993_; lean_object* v_initHeartbeats_4994_; lean_object* v_maxHeartbeats_4995_; lean_object* v_quotContext_4996_; lean_object* v_currMacroScope_4997_; uint8_t v_diag_4998_; lean_object* v_cancelTk_x3f_4999_; uint8_t v_suppressElabErrors_5000_; lean_object* v_inheritedTraceOptions_5001_; lean_object* v_ref_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v_fileName_4986_ = lean_ctor_get(v___y_4983_, 0);
v_fileMap_4987_ = lean_ctor_get(v___y_4983_, 1);
v_options_4988_ = lean_ctor_get(v___y_4983_, 2);
v_currRecDepth_4989_ = lean_ctor_get(v___y_4983_, 3);
v_maxRecDepth_4990_ = lean_ctor_get(v___y_4983_, 4);
v_ref_4991_ = lean_ctor_get(v___y_4983_, 5);
v_currNamespace_4992_ = lean_ctor_get(v___y_4983_, 6);
v_openDecls_4993_ = lean_ctor_get(v___y_4983_, 7);
v_initHeartbeats_4994_ = lean_ctor_get(v___y_4983_, 8);
v_maxHeartbeats_4995_ = lean_ctor_get(v___y_4983_, 9);
v_quotContext_4996_ = lean_ctor_get(v___y_4983_, 10);
v_currMacroScope_4997_ = lean_ctor_get(v___y_4983_, 11);
v_diag_4998_ = lean_ctor_get_uint8(v___y_4983_, sizeof(void*)*14);
v_cancelTk_x3f_4999_ = lean_ctor_get(v___y_4983_, 12);
v_suppressElabErrors_5000_ = lean_ctor_get_uint8(v___y_4983_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_5001_ = lean_ctor_get(v___y_4983_, 13);
v_ref_5002_ = l_Lean_replaceRef(v_ref_4979_, v_ref_4991_);
lean_inc_ref(v_inheritedTraceOptions_5001_);
lean_inc(v_cancelTk_x3f_4999_);
lean_inc(v_currMacroScope_4997_);
lean_inc(v_quotContext_4996_);
lean_inc(v_maxHeartbeats_4995_);
lean_inc(v_initHeartbeats_4994_);
lean_inc(v_openDecls_4993_);
lean_inc(v_currNamespace_4992_);
lean_inc(v_maxRecDepth_4990_);
lean_inc(v_currRecDepth_4989_);
lean_inc_ref(v_options_4988_);
lean_inc_ref(v_fileMap_4987_);
lean_inc_ref(v_fileName_4986_);
v___x_5003_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_5003_, 0, v_fileName_4986_);
lean_ctor_set(v___x_5003_, 1, v_fileMap_4987_);
lean_ctor_set(v___x_5003_, 2, v_options_4988_);
lean_ctor_set(v___x_5003_, 3, v_currRecDepth_4989_);
lean_ctor_set(v___x_5003_, 4, v_maxRecDepth_4990_);
lean_ctor_set(v___x_5003_, 5, v_ref_5002_);
lean_ctor_set(v___x_5003_, 6, v_currNamespace_4992_);
lean_ctor_set(v___x_5003_, 7, v_openDecls_4993_);
lean_ctor_set(v___x_5003_, 8, v_initHeartbeats_4994_);
lean_ctor_set(v___x_5003_, 9, v_maxHeartbeats_4995_);
lean_ctor_set(v___x_5003_, 10, v_quotContext_4996_);
lean_ctor_set(v___x_5003_, 11, v_currMacroScope_4997_);
lean_ctor_set(v___x_5003_, 12, v_cancelTk_x3f_4999_);
lean_ctor_set(v___x_5003_, 13, v_inheritedTraceOptions_5001_);
lean_ctor_set_uint8(v___x_5003_, sizeof(void*)*14, v_diag_4998_);
lean_ctor_set_uint8(v___x_5003_, sizeof(void*)*14 + 1, v_suppressElabErrors_5000_);
v___x_5004_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_4980_, v___y_4981_, v___y_4982_, v___x_5003_, v___y_4984_);
lean_dec_ref(v___x_5003_);
return v___x_5004_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_5005_, lean_object* v_msg_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5005_, v_msg_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec(v_ref_5005_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_5013_, lean_object* v_msg_5014_, lean_object* v_declHint_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_){
_start:
{
lean_object* v___x_5021_; lean_object* v_a_5022_; lean_object* v___x_5023_; 
v___x_5021_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_5014_, v_declHint_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_);
v_a_5022_ = lean_ctor_get(v___x_5021_, 0);
lean_inc(v_a_5022_);
lean_dec_ref(v___x_5021_);
v___x_5023_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5013_, v_a_5022_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_);
return v___x_5023_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_5024_, lean_object* v_msg_5025_, lean_object* v_declHint_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_){
_start:
{
lean_object* v_res_5032_; 
v_res_5032_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5024_, v_msg_5025_, v_declHint_5026_, v___y_5027_, v___y_5028_, v___y_5029_, v___y_5030_);
lean_dec(v___y_5030_);
lean_dec_ref(v___y_5029_);
lean_dec(v___y_5028_);
lean_dec_ref(v___y_5027_);
lean_dec(v_ref_5024_);
return v_res_5032_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_5034_; lean_object* v___x_5035_; 
v___x_5034_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_5035_ = l_Lean_stringToMessageData(v___x_5034_);
return v___x_5035_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_5036_, lean_object* v_constName_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_){
_start:
{
lean_object* v___x_5043_; uint8_t v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5043_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_5044_ = 0;
lean_inc(v_constName_5037_);
v___x_5045_ = l_Lean_MessageData_ofConstName(v_constName_5037_, v___x_5044_);
v___x_5046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5043_);
lean_ctor_set(v___x_5046_, 1, v___x_5045_);
v___x_5047_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5046_);
lean_ctor_set(v___x_5048_, 1, v___x_5047_);
v___x_5049_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5036_, v___x_5048_, v_constName_5037_, v___y_5038_, v___y_5039_, v___y_5040_, v___y_5041_);
return v___x_5049_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_5050_, lean_object* v_constName_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_){
_start:
{
lean_object* v_res_5057_; 
v_res_5057_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5050_, v_constName_5051_, v___y_5052_, v___y_5053_, v___y_5054_, v___y_5055_);
lean_dec(v___y_5055_);
lean_dec_ref(v___y_5054_);
lean_dec(v___y_5053_);
lean_dec_ref(v___y_5052_);
lean_dec(v_ref_5050_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(lean_object* v_constName_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_){
_start:
{
lean_object* v_ref_5064_; lean_object* v___x_5065_; 
v_ref_5064_ = lean_ctor_get(v___y_5061_, 5);
v___x_5065_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5064_, v_constName_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_);
return v___x_5065_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_constName_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_){
_start:
{
lean_object* v_res_5072_; 
v_res_5072_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5066_, v___y_5067_, v___y_5068_, v___y_5069_, v___y_5070_);
lean_dec(v___y_5070_);
lean_dec_ref(v___y_5069_);
lean_dec(v___y_5068_);
lean_dec_ref(v___y_5067_);
return v_res_5072_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(lean_object* v_constName_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_){
_start:
{
lean_object* v___x_5079_; lean_object* v_env_5080_; uint8_t v___x_5081_; lean_object* v___x_5082_; 
v___x_5079_ = lean_st_ref_get(v___y_5077_);
v_env_5080_ = lean_ctor_get(v___x_5079_, 0);
lean_inc_ref(v_env_5080_);
lean_dec(v___x_5079_);
v___x_5081_ = 0;
lean_inc(v_constName_5073_);
v___x_5082_ = l_Lean_Environment_find_x3f(v_env_5080_, v_constName_5073_, v___x_5081_);
if (lean_obj_tag(v___x_5082_) == 0)
{
lean_object* v___x_5083_; 
v___x_5083_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_);
return v___x_5083_;
}
else
{
lean_object* v_val_5084_; lean_object* v___x_5086_; uint8_t v_isShared_5087_; uint8_t v_isSharedCheck_5091_; 
lean_dec(v_constName_5073_);
v_val_5084_ = lean_ctor_get(v___x_5082_, 0);
v_isSharedCheck_5091_ = !lean_is_exclusive(v___x_5082_);
if (v_isSharedCheck_5091_ == 0)
{
v___x_5086_ = v___x_5082_;
v_isShared_5087_ = v_isSharedCheck_5091_;
goto v_resetjp_5085_;
}
else
{
lean_inc(v_val_5084_);
lean_dec(v___x_5082_);
v___x_5086_ = lean_box(0);
v_isShared_5087_ = v_isSharedCheck_5091_;
goto v_resetjp_5085_;
}
v_resetjp_5085_:
{
lean_object* v___x_5089_; 
if (v_isShared_5087_ == 0)
{
lean_ctor_set_tag(v___x_5086_, 0);
v___x_5089_ = v___x_5086_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v_val_5084_);
v___x_5089_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
return v___x_5089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0___boxed(lean_object* v_constName_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_){
_start:
{
lean_object* v_res_5098_; 
v_res_5098_ = l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(v_constName_5092_, v___y_5093_, v___y_5094_, v___y_5095_, v___y_5096_);
lean_dec(v___y_5096_);
lean_dec_ref(v___y_5095_);
lean_dec(v___y_5094_);
lean_dec_ref(v___y_5093_);
return v_res_5098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(lean_object* v_x_5101_, lean_object* v_x_5102_, lean_object* v_x_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_){
_start:
{
if (lean_obj_tag(v_x_5101_) == 5)
{
lean_object* v_fn_5109_; lean_object* v_arg_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
v_fn_5109_ = lean_ctor_get(v_x_5101_, 0);
lean_inc_ref(v_fn_5109_);
v_arg_5110_ = lean_ctor_get(v_x_5101_, 1);
lean_inc_ref(v_arg_5110_);
lean_dec_ref(v_x_5101_);
v___x_5111_ = lean_array_set(v_x_5102_, v_x_5103_, v_arg_5110_);
v___x_5112_ = lean_unsigned_to_nat(1u);
v___x_5113_ = lean_nat_sub(v_x_5103_, v___x_5112_);
lean_dec(v_x_5103_);
v_x_5101_ = v_fn_5109_;
v_x_5102_ = v___x_5111_;
v_x_5103_ = v___x_5113_;
goto _start;
}
else
{
lean_dec(v_x_5103_);
if (lean_obj_tag(v_x_5101_) == 4)
{
lean_object* v_declName_5115_; lean_object* v___x_5116_; 
v_declName_5115_ = lean_ctor_get(v_x_5101_, 0);
lean_inc(v_declName_5115_);
lean_dec_ref(v_x_5101_);
v___x_5116_ = l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(v_declName_5115_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_);
if (lean_obj_tag(v___x_5116_) == 0)
{
lean_object* v_a_5117_; lean_object* v___x_5119_; uint8_t v_isShared_5120_; uint8_t v_isSharedCheck_5148_; 
v_a_5117_ = lean_ctor_get(v___x_5116_, 0);
v_isSharedCheck_5148_ = !lean_is_exclusive(v___x_5116_);
if (v_isSharedCheck_5148_ == 0)
{
v___x_5119_ = v___x_5116_;
v_isShared_5120_ = v_isSharedCheck_5148_;
goto v_resetjp_5118_;
}
else
{
lean_inc(v_a_5117_);
lean_dec(v___x_5116_);
v___x_5119_ = lean_box(0);
v_isShared_5120_ = v_isSharedCheck_5148_;
goto v_resetjp_5118_;
}
v_resetjp_5118_:
{
lean_object* v_lower_5122_; lean_object* v_upper_5123_; 
if (lean_obj_tag(v_a_5117_) == 5)
{
lean_object* v_val_5131_; lean_object* v___x_5133_; uint8_t v_isShared_5134_; uint8_t v_isSharedCheck_5145_; 
v_val_5131_ = lean_ctor_get(v_a_5117_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v_a_5117_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5133_ = v_a_5117_;
v_isShared_5134_ = v_isSharedCheck_5145_;
goto v_resetjp_5132_;
}
else
{
lean_inc(v_val_5131_);
lean_dec(v_a_5117_);
v___x_5133_ = lean_box(0);
v_isShared_5134_ = v_isSharedCheck_5145_;
goto v_resetjp_5132_;
}
v_resetjp_5132_:
{
lean_object* v_numParams_5135_; lean_object* v_numIndices_5136_; lean_object* v___x_5137_; uint8_t v___x_5138_; 
v_numParams_5135_ = lean_ctor_get(v_val_5131_, 1);
lean_inc(v_numParams_5135_);
v_numIndices_5136_ = lean_ctor_get(v_val_5131_, 2);
lean_inc(v_numIndices_5136_);
lean_dec_ref(v_val_5131_);
v___x_5137_ = lean_unsigned_to_nat(0u);
v___x_5138_ = lean_nat_dec_eq(v_numIndices_5136_, v___x_5137_);
lean_dec(v_numIndices_5136_);
if (v___x_5138_ == 0)
{
lean_object* v___x_5139_; uint8_t v___x_5140_; 
lean_del_object(v___x_5133_);
v___x_5139_ = lean_array_get_size(v_x_5102_);
v___x_5140_ = lean_nat_dec_le(v_numParams_5135_, v___x_5137_);
if (v___x_5140_ == 0)
{
v_lower_5122_ = v_numParams_5135_;
v_upper_5123_ = v___x_5139_;
goto v___jp_5121_;
}
else
{
lean_dec(v_numParams_5135_);
v_lower_5122_ = v___x_5137_;
v_upper_5123_ = v___x_5139_;
goto v___jp_5121_;
}
}
else
{
lean_object* v___x_5141_; lean_object* v___x_5143_; 
lean_dec(v_numParams_5135_);
lean_del_object(v___x_5119_);
lean_dec_ref(v_x_5102_);
v___x_5141_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0));
if (v_isShared_5134_ == 0)
{
lean_ctor_set_tag(v___x_5133_, 0);
lean_ctor_set(v___x_5133_, 0, v___x_5141_);
v___x_5143_ = v___x_5133_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v___x_5141_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
}
else
{
lean_object* v___x_5146_; lean_object* v___x_5147_; 
lean_del_object(v___x_5119_);
lean_dec(v_a_5117_);
lean_dec_ref(v_x_5102_);
v___x_5146_ = lean_box(0);
v___x_5147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5147_, 0, v___x_5146_);
return v___x_5147_;
}
v___jp_5121_:
{
lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5129_; 
v___x_5124_ = l_Array_toSubarray___redArg(v_x_5102_, v_lower_5122_, v_upper_5123_);
v___x_5125_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_5126_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v___x_5124_, v___x_5125_);
v___x_5127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5127_, 0, v___x_5126_);
if (v_isShared_5120_ == 0)
{
lean_ctor_set(v___x_5119_, 0, v___x_5127_);
v___x_5129_ = v___x_5119_;
goto v_reusejp_5128_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v___x_5127_);
v___x_5129_ = v_reuseFailAlloc_5130_;
goto v_reusejp_5128_;
}
v_reusejp_5128_:
{
return v___x_5129_;
}
}
}
}
else
{
lean_object* v_a_5149_; lean_object* v___x_5151_; uint8_t v_isShared_5152_; uint8_t v_isSharedCheck_5156_; 
lean_dec_ref(v_x_5102_);
v_a_5149_ = lean_ctor_get(v___x_5116_, 0);
v_isSharedCheck_5156_ = !lean_is_exclusive(v___x_5116_);
if (v_isSharedCheck_5156_ == 0)
{
v___x_5151_ = v___x_5116_;
v_isShared_5152_ = v_isSharedCheck_5156_;
goto v_resetjp_5150_;
}
else
{
lean_inc(v_a_5149_);
lean_dec(v___x_5116_);
v___x_5151_ = lean_box(0);
v_isShared_5152_ = v_isSharedCheck_5156_;
goto v_resetjp_5150_;
}
v_resetjp_5150_:
{
lean_object* v___x_5154_; 
if (v_isShared_5152_ == 0)
{
v___x_5154_ = v___x_5151_;
goto v_reusejp_5153_;
}
else
{
lean_object* v_reuseFailAlloc_5155_; 
v_reuseFailAlloc_5155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5155_, 0, v_a_5149_);
v___x_5154_ = v_reuseFailAlloc_5155_;
goto v_reusejp_5153_;
}
v_reusejp_5153_:
{
return v___x_5154_;
}
}
}
}
else
{
lean_object* v___x_5157_; lean_object* v___x_5158_; 
lean_dec_ref(v_x_5102_);
lean_dec_ref(v_x_5101_);
v___x_5157_ = lean_box(0);
v___x_5158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5158_, 0, v___x_5157_);
return v___x_5158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___boxed(lean_object* v_x_5159_, lean_object* v_x_5160_, lean_object* v_x_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_){
_start:
{
lean_object* v_res_5167_; 
v_res_5167_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(v_x_5159_, v_x_5160_, v_x_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_);
lean_dec(v___y_5165_);
lean_dec_ref(v___y_5164_);
lean_dec(v___y_5163_);
lean_dec_ref(v___y_5162_);
return v_res_5167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f(lean_object* v_ctorApp_5168_, lean_object* v_a_5169_, lean_object* v_a_5170_, lean_object* v_a_5171_, lean_object* v_a_5172_){
_start:
{
lean_object* v___x_5174_; 
lean_inc(v_a_5172_);
lean_inc_ref(v_a_5171_);
lean_inc(v_a_5170_);
lean_inc_ref(v_a_5169_);
v___x_5174_ = lean_infer_type(v_ctorApp_5168_, v_a_5169_, v_a_5170_, v_a_5171_, v_a_5172_);
if (lean_obj_tag(v___x_5174_) == 0)
{
lean_object* v_a_5175_; lean_object* v___x_5176_; 
v_a_5175_ = lean_ctor_get(v___x_5174_, 0);
lean_inc(v_a_5175_);
lean_dec_ref(v___x_5174_);
v___x_5176_ = l_Lean_Meta_whnfD(v_a_5175_, v_a_5169_, v_a_5170_, v_a_5171_, v_a_5172_);
if (lean_obj_tag(v___x_5176_) == 0)
{
lean_object* v_a_5177_; lean_object* v_dummy_5178_; lean_object* v_nargs_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; 
v_a_5177_ = lean_ctor_get(v___x_5176_, 0);
lean_inc(v_a_5177_);
lean_dec_ref(v___x_5176_);
v_dummy_5178_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0);
v_nargs_5179_ = l_Lean_Expr_getAppNumArgs(v_a_5177_);
lean_inc(v_nargs_5179_);
v___x_5180_ = lean_mk_array(v_nargs_5179_, v_dummy_5178_);
v___x_5181_ = lean_unsigned_to_nat(1u);
v___x_5182_ = lean_nat_sub(v_nargs_5179_, v___x_5181_);
lean_dec(v_nargs_5179_);
v___x_5183_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(v_a_5177_, v___x_5180_, v___x_5182_, v_a_5169_, v_a_5170_, v_a_5171_, v_a_5172_);
return v___x_5183_;
}
else
{
lean_object* v_a_5184_; lean_object* v___x_5186_; uint8_t v_isShared_5187_; uint8_t v_isSharedCheck_5191_; 
v_a_5184_ = lean_ctor_get(v___x_5176_, 0);
v_isSharedCheck_5191_ = !lean_is_exclusive(v___x_5176_);
if (v_isSharedCheck_5191_ == 0)
{
v___x_5186_ = v___x_5176_;
v_isShared_5187_ = v_isSharedCheck_5191_;
goto v_resetjp_5185_;
}
else
{
lean_inc(v_a_5184_);
lean_dec(v___x_5176_);
v___x_5186_ = lean_box(0);
v_isShared_5187_ = v_isSharedCheck_5191_;
goto v_resetjp_5185_;
}
v_resetjp_5185_:
{
lean_object* v___x_5189_; 
if (v_isShared_5187_ == 0)
{
v___x_5189_ = v___x_5186_;
goto v_reusejp_5188_;
}
else
{
lean_object* v_reuseFailAlloc_5190_; 
v_reuseFailAlloc_5190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5190_, 0, v_a_5184_);
v___x_5189_ = v_reuseFailAlloc_5190_;
goto v_reusejp_5188_;
}
v_reusejp_5188_:
{
return v___x_5189_;
}
}
}
}
else
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5199_; 
v_a_5192_ = lean_ctor_get(v___x_5174_, 0);
v_isSharedCheck_5199_ = !lean_is_exclusive(v___x_5174_);
if (v_isSharedCheck_5199_ == 0)
{
v___x_5194_ = v___x_5174_;
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5174_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5197_; 
if (v_isShared_5195_ == 0)
{
v___x_5197_ = v___x_5194_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5198_; 
v_reuseFailAlloc_5198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5198_, 0, v_a_5192_);
v___x_5197_ = v_reuseFailAlloc_5198_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
return v___x_5197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f___boxed(lean_object* v_ctorApp_5200_, lean_object* v_a_5201_, lean_object* v_a_5202_, lean_object* v_a_5203_, lean_object* v_a_5204_, lean_object* v_a_5205_){
_start:
{
lean_object* v_res_5206_; 
v_res_5206_ = l_Lean_Meta_getCtorAppIndices_x3f(v_ctorApp_5200_, v_a_5201_, v_a_5202_, v_a_5203_, v_a_5204_);
lean_dec(v_a_5204_);
lean_dec_ref(v_a_5203_);
lean_dec(v_a_5202_);
lean_dec_ref(v_a_5201_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1(lean_object* v_inst_5207_, lean_object* v_R_5208_, lean_object* v_a_5209_, lean_object* v_b_5210_){
_start:
{
lean_object* v___x_5211_; 
v___x_5211_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v_a_5209_, v_b_5210_);
return v___x_5211_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(lean_object* v_00_u03b1_5212_, lean_object* v_constName_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_){
_start:
{
lean_object* v___x_5219_; 
v___x_5219_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5213_, v___y_5214_, v___y_5215_, v___y_5216_, v___y_5217_);
return v___x_5219_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5220_, lean_object* v_constName_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_){
_start:
{
lean_object* v_res_5227_; 
v_res_5227_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(v_00_u03b1_5220_, v_constName_5221_, v___y_5222_, v___y_5223_, v___y_5224_, v___y_5225_);
lean_dec(v___y_5225_);
lean_dec_ref(v___y_5224_);
lean_dec(v___y_5223_);
lean_dec_ref(v___y_5222_);
return v_res_5227_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5228_, lean_object* v_ref_5229_, lean_object* v_constName_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_){
_start:
{
lean_object* v___x_5236_; 
v___x_5236_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5229_, v_constName_5230_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5237_, lean_object* v_ref_5238_, lean_object* v_constName_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_){
_start:
{
lean_object* v_res_5245_; 
v_res_5245_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(v_00_u03b1_5237_, v_ref_5238_, v_constName_5239_, v___y_5240_, v___y_5241_, v___y_5242_, v___y_5243_);
lean_dec(v___y_5243_);
lean_dec_ref(v___y_5242_);
lean_dec(v___y_5241_);
lean_dec_ref(v___y_5240_);
lean_dec(v_ref_5238_);
return v_res_5245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_5246_, lean_object* v_ref_5247_, lean_object* v_msg_5248_, lean_object* v_declHint_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_){
_start:
{
lean_object* v___x_5255_; 
v___x_5255_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5247_, v_msg_5248_, v_declHint_5249_, v___y_5250_, v___y_5251_, v___y_5252_, v___y_5253_);
return v___x_5255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_5256_, lean_object* v_ref_5257_, lean_object* v_msg_5258_, lean_object* v_declHint_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_5256_, v_ref_5257_, v_msg_5258_, v_declHint_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v___y_5261_);
lean_dec_ref(v___y_5260_);
lean_dec(v_ref_5257_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_5266_, lean_object* v_declHint_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_){
_start:
{
lean_object* v___x_5273_; 
v___x_5273_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_5266_, v_declHint_5267_, v___y_5271_);
return v___x_5273_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_5274_, lean_object* v_declHint_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_){
_start:
{
lean_object* v_res_5281_; 
v_res_5281_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_5274_, v_declHint_5275_, v___y_5276_, v___y_5277_, v___y_5278_, v___y_5279_);
lean_dec(v___y_5279_);
lean_dec_ref(v___y_5278_);
lean_dec(v___y_5277_);
lean_dec_ref(v___y_5276_);
return v_res_5281_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_5282_, lean_object* v_ref_5283_, lean_object* v_msg_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_){
_start:
{
lean_object* v___x_5290_; 
v___x_5290_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5283_, v_msg_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_);
return v___x_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_5291_, lean_object* v_ref_5292_, lean_object* v_msg_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_){
_start:
{
lean_object* v_res_5299_; 
v_res_5299_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_5291_, v_ref_5292_, v_msg_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
lean_dec(v_ref_5292_);
return v_res_5299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed(lean_object* v_i_5300_, lean_object* v_body_5301_, lean_object* v_args2_5302_, lean_object* v_ctorVal_5303_, lean_object* v_args1_5304_, lean_object* v_k_5305_, lean_object* v_arg2_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_){
_start:
{
lean_object* v_res_5312_; 
v_res_5312_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(v_i_5300_, v_body_5301_, v_args2_5302_, v_ctorVal_5303_, v_args1_5304_, v_k_5305_, v_arg2_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
lean_dec(v___y_5310_);
lean_dec_ref(v___y_5309_);
lean_dec(v___y_5308_);
lean_dec_ref(v___y_5307_);
lean_dec_ref(v_body_5301_);
lean_dec(v_i_5300_);
return v_res_5312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(lean_object* v_ctorVal_5313_, lean_object* v_args1_5314_, lean_object* v_k_5315_, lean_object* v_i_5316_, lean_object* v_type_5317_, lean_object* v_args2_5318_, lean_object* v_a_5319_, lean_object* v_a_5320_, lean_object* v_a_5321_, lean_object* v_a_5322_){
_start:
{
lean_object* v___x_5324_; uint8_t v___x_5325_; 
v___x_5324_ = lean_array_get_size(v_args1_5314_);
v___x_5325_ = lean_nat_dec_lt(v_i_5316_, v___x_5324_);
if (v___x_5325_ == 0)
{
lean_object* v___x_5326_; 
lean_dec_ref(v_type_5317_);
lean_dec(v_i_5316_);
lean_dec_ref(v_args1_5314_);
lean_dec_ref(v_ctorVal_5313_);
lean_inc(v_a_5322_);
lean_inc_ref(v_a_5321_);
lean_inc(v_a_5320_);
lean_inc_ref(v_a_5319_);
v___x_5326_ = lean_apply_6(v_k_5315_, v_args2_5318_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_, lean_box(0));
return v___x_5326_;
}
else
{
lean_object* v___x_5327_; 
lean_inc(v_a_5322_);
lean_inc_ref(v_a_5321_);
lean_inc(v_a_5320_);
lean_inc_ref(v_a_5319_);
v___x_5327_ = lean_whnf(v_type_5317_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_);
if (lean_obj_tag(v___x_5327_) == 0)
{
lean_object* v_a_5328_; 
v_a_5328_ = lean_ctor_get(v___x_5327_, 0);
lean_inc(v_a_5328_);
lean_dec_ref(v___x_5327_);
if (lean_obj_tag(v_a_5328_) == 7)
{
lean_object* v_binderName_5329_; lean_object* v_binderType_5330_; lean_object* v_body_5331_; lean_object* v___f_5332_; uint8_t v___x_5333_; uint8_t v___x_5334_; lean_object* v___x_5335_; 
v_binderName_5329_ = lean_ctor_get(v_a_5328_, 0);
lean_inc(v_binderName_5329_);
v_binderType_5330_ = lean_ctor_get(v_a_5328_, 1);
lean_inc_ref(v_binderType_5330_);
v_body_5331_ = lean_ctor_get(v_a_5328_, 2);
lean_inc_ref(v_body_5331_);
lean_dec_ref(v_a_5328_);
v___f_5332_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed), 12, 6);
lean_closure_set(v___f_5332_, 0, v_i_5316_);
lean_closure_set(v___f_5332_, 1, v_body_5331_);
lean_closure_set(v___f_5332_, 2, v_args2_5318_);
lean_closure_set(v___f_5332_, 3, v_ctorVal_5313_);
lean_closure_set(v___f_5332_, 4, v_args1_5314_);
lean_closure_set(v___f_5332_, 5, v_k_5315_);
v___x_5333_ = 1;
v___x_5334_ = 0;
v___x_5335_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_binderName_5329_, v___x_5333_, v_binderType_5330_, v___f_5332_, v___x_5334_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_);
return v___x_5335_;
}
else
{
lean_object* v_toConstantVal_5336_; lean_object* v_name_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
lean_dec(v_a_5328_);
lean_dec_ref(v_args2_5318_);
lean_dec(v_i_5316_);
lean_dec_ref(v_k_5315_);
lean_dec_ref(v_args1_5314_);
v_toConstantVal_5336_ = lean_ctor_get(v_ctorVal_5313_, 0);
lean_inc_ref(v_toConstantVal_5336_);
lean_dec_ref(v_ctorVal_5313_);
v_name_5337_ = lean_ctor_get(v_toConstantVal_5336_, 0);
lean_inc(v_name_5337_);
lean_dec_ref(v_toConstantVal_5336_);
v___x_5338_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1);
v___x_5339_ = l_Lean_MessageData_ofName(v_name_5337_);
v___x_5340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5338_);
lean_ctor_set(v___x_5340_, 1, v___x_5339_);
v___x_5341_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5342_, 0, v___x_5340_);
lean_ctor_set(v___x_5342_, 1, v___x_5341_);
v___x_5343_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_5342_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_);
return v___x_5343_;
}
}
else
{
lean_object* v_a_5344_; lean_object* v___x_5346_; uint8_t v_isShared_5347_; uint8_t v_isSharedCheck_5351_; 
lean_dec_ref(v_args2_5318_);
lean_dec(v_i_5316_);
lean_dec_ref(v_k_5315_);
lean_dec_ref(v_args1_5314_);
lean_dec_ref(v_ctorVal_5313_);
v_a_5344_ = lean_ctor_get(v___x_5327_, 0);
v_isSharedCheck_5351_ = !lean_is_exclusive(v___x_5327_);
if (v_isSharedCheck_5351_ == 0)
{
v___x_5346_ = v___x_5327_;
v_isShared_5347_ = v_isSharedCheck_5351_;
goto v_resetjp_5345_;
}
else
{
lean_inc(v_a_5344_);
lean_dec(v___x_5327_);
v___x_5346_ = lean_box(0);
v_isShared_5347_ = v_isSharedCheck_5351_;
goto v_resetjp_5345_;
}
v_resetjp_5345_:
{
lean_object* v___x_5349_; 
if (v_isShared_5347_ == 0)
{
v___x_5349_ = v___x_5346_;
goto v_reusejp_5348_;
}
else
{
lean_object* v_reuseFailAlloc_5350_; 
v_reuseFailAlloc_5350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5350_, 0, v_a_5344_);
v___x_5349_ = v_reuseFailAlloc_5350_;
goto v_reusejp_5348_;
}
v_reusejp_5348_:
{
return v___x_5349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(lean_object* v_i_5352_, lean_object* v_body_5353_, lean_object* v_args2_5354_, lean_object* v_ctorVal_5355_, lean_object* v_args1_5356_, lean_object* v_k_5357_, lean_object* v_arg2_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_){
_start:
{
lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; 
v___x_5364_ = lean_unsigned_to_nat(1u);
v___x_5365_ = lean_nat_add(v_i_5352_, v___x_5364_);
v___x_5366_ = lean_expr_instantiate1(v_body_5353_, v_arg2_5358_);
v___x_5367_ = lean_array_push(v_args2_5354_, v_arg2_5358_);
v___x_5368_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(v_ctorVal_5355_, v_args1_5356_, v_k_5357_, v___x_5365_, v___x_5366_, v___x_5367_, v___y_5359_, v___y_5360_, v___y_5361_, v___y_5362_);
return v___x_5368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed(lean_object* v_ctorVal_5369_, lean_object* v_args1_5370_, lean_object* v_k_5371_, lean_object* v_i_5372_, lean_object* v_type_5373_, lean_object* v_args2_5374_, lean_object* v_a_5375_, lean_object* v_a_5376_, lean_object* v_a_5377_, lean_object* v_a_5378_, lean_object* v_a_5379_){
_start:
{
lean_object* v_res_5380_; 
v_res_5380_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(v_ctorVal_5369_, v_args1_5370_, v_k_5371_, v_i_5372_, v_type_5373_, v_args2_5374_, v_a_5375_, v_a_5376_, v_a_5377_, v_a_5378_);
lean_dec(v_a_5378_);
lean_dec_ref(v_a_5377_);
lean_dec(v_a_5376_);
lean_dec_ref(v_a_5375_);
return v_res_5380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(lean_object* v_name_5381_, lean_object* v_us_5382_, lean_object* v_args1_5383_, lean_object* v___x_5384_, lean_object* v_numParams_5385_, lean_object* v___x_5386_, lean_object* v_args2_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_){
_start:
{
lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; 
lean_inc(v_us_5382_);
v___x_5393_ = l_Lean_mkConst(v_name_5381_, v_us_5382_);
lean_inc_ref(v___x_5393_);
v___x_5394_ = l_Lean_mkAppN(v___x_5393_, v_args1_5383_);
v___x_5395_ = l_Lean_mkAppN(v___x_5393_, v_args2_5387_);
lean_inc_ref(v___x_5395_);
lean_inc_ref(v___x_5394_);
v___x_5396_ = l_Lean_Meta_mkEqHEq(v___x_5394_, v___x_5395_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
if (lean_obj_tag(v___x_5396_) == 0)
{
lean_object* v_a_5397_; lean_object* v___x_5398_; uint8_t v___x_5399_; lean_object* v___x_5400_; 
v_a_5397_ = lean_ctor_get(v___x_5396_, 0);
lean_inc(v_a_5397_);
lean_dec_ref(v___x_5396_);
lean_inc_ref_n(v_args2_5387_, 2);
v___x_5398_ = l_Array_toSubarray___redArg(v_args2_5387_, v___x_5384_, v_numParams_5385_);
v___x_5399_ = 1;
v___x_5400_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_5383_, v_args2_5387_, v___x_5399_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
if (lean_obj_tag(v___x_5400_) == 0)
{
lean_object* v_a_5401_; lean_object* v___x_5403_; uint8_t v_isShared_5404_; uint8_t v_isSharedCheck_5521_; 
v_a_5401_ = lean_ctor_get(v___x_5400_, 0);
v_isSharedCheck_5521_ = !lean_is_exclusive(v___x_5400_);
if (v_isSharedCheck_5521_ == 0)
{
v___x_5403_ = v___x_5400_;
v_isShared_5404_ = v_isSharedCheck_5521_;
goto v_resetjp_5402_;
}
else
{
lean_inc(v_a_5401_);
lean_dec(v___x_5400_);
v___x_5403_ = lean_box(0);
v_isShared_5404_ = v_isSharedCheck_5521_;
goto v_resetjp_5402_;
}
v_resetjp_5402_:
{
lean_object* v___x_5405_; 
v___x_5405_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(v_a_5401_);
if (lean_obj_tag(v___x_5405_) == 1)
{
lean_object* v_val_5406_; lean_object* v___x_5407_; 
lean_del_object(v___x_5403_);
v_val_5406_ = lean_ctor_get(v___x_5405_, 0);
lean_inc(v_val_5406_);
lean_dec_ref(v___x_5405_);
v___x_5407_ = l_Lean_mkArrow(v_a_5397_, v_val_5406_, v___y_5390_, v___y_5391_);
if (lean_obj_tag(v___x_5407_) == 0)
{
lean_object* v_a_5408_; lean_object* v___x_5409_; 
v_a_5408_ = lean_ctor_get(v___x_5407_, 0);
lean_inc(v_a_5408_);
lean_dec_ref(v___x_5407_);
v___x_5409_ = l_Lean_Meta_getCtorAppIndices_x3f(v___x_5394_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
if (lean_obj_tag(v___x_5409_) == 0)
{
lean_object* v_a_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5500_; 
v_a_5410_ = lean_ctor_get(v___x_5409_, 0);
v_isSharedCheck_5500_ = !lean_is_exclusive(v___x_5409_);
if (v_isSharedCheck_5500_ == 0)
{
v___x_5412_ = v___x_5409_;
v_isShared_5413_ = v_isSharedCheck_5500_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_a_5410_);
lean_dec(v___x_5409_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5500_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
if (lean_obj_tag(v_a_5410_) == 1)
{
lean_object* v_val_5414_; lean_object* v___x_5415_; 
lean_del_object(v___x_5412_);
v_val_5414_ = lean_ctor_get(v_a_5410_, 0);
lean_inc(v_val_5414_);
lean_dec_ref(v_a_5410_);
v___x_5415_ = l_Lean_Meta_getCtorAppIndices_x3f(v___x_5395_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
if (lean_obj_tag(v___x_5415_) == 0)
{
lean_object* v_a_5416_; lean_object* v___x_5418_; uint8_t v_isShared_5419_; uint8_t v_isSharedCheck_5487_; 
v_a_5416_ = lean_ctor_get(v___x_5415_, 0);
v_isSharedCheck_5487_ = !lean_is_exclusive(v___x_5415_);
if (v_isSharedCheck_5487_ == 0)
{
v___x_5418_ = v___x_5415_;
v_isShared_5419_ = v_isSharedCheck_5487_;
goto v_resetjp_5417_;
}
else
{
lean_inc(v_a_5416_);
lean_dec(v___x_5415_);
v___x_5418_ = lean_box(0);
v_isShared_5419_ = v_isSharedCheck_5487_;
goto v_resetjp_5417_;
}
v_resetjp_5417_:
{
if (lean_obj_tag(v_a_5416_) == 1)
{
lean_object* v_val_5420_; lean_object* v___x_5422_; uint8_t v_isShared_5423_; uint8_t v_isSharedCheck_5482_; 
lean_del_object(v___x_5418_);
v_val_5420_ = lean_ctor_get(v_a_5416_, 0);
v_isSharedCheck_5482_ = !lean_is_exclusive(v_a_5416_);
if (v_isSharedCheck_5482_ == 0)
{
v___x_5422_ = v_a_5416_;
v_isShared_5423_ = v_isSharedCheck_5482_;
goto v_resetjp_5421_;
}
else
{
lean_inc(v_val_5420_);
lean_dec(v_a_5416_);
v___x_5422_ = lean_box(0);
v_isShared_5423_ = v_isSharedCheck_5482_;
goto v_resetjp_5421_;
}
v_resetjp_5421_:
{
lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; uint8_t v___x_5428_; lean_object* v___x_5429_; 
v___x_5424_ = l_Subarray_copy___redArg(v___x_5386_);
v___x_5425_ = l_Array_append___redArg(v___x_5424_, v_val_5414_);
v___x_5426_ = l_Subarray_copy___redArg(v___x_5398_);
v___x_5427_ = l_Array_append___redArg(v___x_5426_, v_val_5420_);
lean_dec(v_val_5420_);
v___x_5428_ = 0;
v___x_5429_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v___x_5425_, v___x_5427_, v___x_5428_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
lean_dec_ref(v___x_5425_);
if (lean_obj_tag(v___x_5429_) == 0)
{
lean_object* v_a_5430_; lean_object* v___x_5431_; 
v_a_5430_ = lean_ctor_get(v___x_5429_, 0);
lean_inc(v_a_5430_);
lean_dec_ref(v___x_5429_);
v___x_5431_ = l_Lean_mkArrowN(v_a_5430_, v_a_5408_, v___y_5390_, v___y_5391_);
lean_dec(v_a_5430_);
if (lean_obj_tag(v___x_5431_) == 0)
{
lean_object* v_a_5432_; uint8_t v___x_5433_; lean_object* v___x_5434_; 
v_a_5432_ = lean_ctor_get(v___x_5431_, 0);
lean_inc(v_a_5432_);
lean_dec_ref(v___x_5431_);
v___x_5433_ = 1;
v___x_5434_ = l_Lean_Meta_mkForallFVars(v_args2_5387_, v_a_5432_, v___x_5428_, v___x_5399_, v___x_5399_, v___x_5433_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
lean_dec_ref(v_args2_5387_);
if (lean_obj_tag(v___x_5434_) == 0)
{
lean_object* v_a_5435_; lean_object* v___x_5436_; 
v_a_5435_ = lean_ctor_get(v___x_5434_, 0);
lean_inc(v_a_5435_);
lean_dec_ref(v___x_5434_);
v___x_5436_ = l_Lean_Meta_mkForallFVars(v_args1_5383_, v_a_5435_, v___x_5428_, v___x_5399_, v___x_5399_, v___x_5433_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
if (lean_obj_tag(v___x_5436_) == 0)
{
lean_object* v_a_5437_; lean_object* v___x_5439_; uint8_t v_isShared_5440_; uint8_t v_isSharedCheck_5449_; 
v_a_5437_ = lean_ctor_get(v___x_5436_, 0);
v_isSharedCheck_5449_ = !lean_is_exclusive(v___x_5436_);
if (v_isSharedCheck_5449_ == 0)
{
v___x_5439_ = v___x_5436_;
v_isShared_5440_ = v_isSharedCheck_5449_;
goto v_resetjp_5438_;
}
else
{
lean_inc(v_a_5437_);
lean_dec(v___x_5436_);
v___x_5439_ = lean_box(0);
v_isShared_5440_ = v_isSharedCheck_5449_;
goto v_resetjp_5438_;
}
v_resetjp_5438_:
{
lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5444_; 
v___x_5441_ = lean_array_get_size(v_val_5414_);
lean_dec(v_val_5414_);
v___x_5442_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5442_, 0, v_a_5437_);
lean_ctor_set(v___x_5442_, 1, v_us_5382_);
lean_ctor_set(v___x_5442_, 2, v___x_5441_);
if (v_isShared_5423_ == 0)
{
lean_ctor_set(v___x_5422_, 0, v___x_5442_);
v___x_5444_ = v___x_5422_;
goto v_reusejp_5443_;
}
else
{
lean_object* v_reuseFailAlloc_5448_; 
v_reuseFailAlloc_5448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5448_, 0, v___x_5442_);
v___x_5444_ = v_reuseFailAlloc_5448_;
goto v_reusejp_5443_;
}
v_reusejp_5443_:
{
lean_object* v___x_5446_; 
if (v_isShared_5440_ == 0)
{
lean_ctor_set(v___x_5439_, 0, v___x_5444_);
v___x_5446_ = v___x_5439_;
goto v_reusejp_5445_;
}
else
{
lean_object* v_reuseFailAlloc_5447_; 
v_reuseFailAlloc_5447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5447_, 0, v___x_5444_);
v___x_5446_ = v_reuseFailAlloc_5447_;
goto v_reusejp_5445_;
}
v_reusejp_5445_:
{
return v___x_5446_;
}
}
}
}
else
{
lean_object* v_a_5450_; lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5457_; 
lean_del_object(v___x_5422_);
lean_dec(v_val_5414_);
lean_dec(v_us_5382_);
v_a_5450_ = lean_ctor_get(v___x_5436_, 0);
v_isSharedCheck_5457_ = !lean_is_exclusive(v___x_5436_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5452_ = v___x_5436_;
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
else
{
lean_inc(v_a_5450_);
lean_dec(v___x_5436_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5455_; 
if (v_isShared_5453_ == 0)
{
v___x_5455_ = v___x_5452_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_a_5450_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
return v___x_5455_;
}
}
}
}
else
{
lean_object* v_a_5458_; lean_object* v___x_5460_; uint8_t v_isShared_5461_; uint8_t v_isSharedCheck_5465_; 
lean_del_object(v___x_5422_);
lean_dec(v_val_5414_);
lean_dec(v_us_5382_);
v_a_5458_ = lean_ctor_get(v___x_5434_, 0);
v_isSharedCheck_5465_ = !lean_is_exclusive(v___x_5434_);
if (v_isSharedCheck_5465_ == 0)
{
v___x_5460_ = v___x_5434_;
v_isShared_5461_ = v_isSharedCheck_5465_;
goto v_resetjp_5459_;
}
else
{
lean_inc(v_a_5458_);
lean_dec(v___x_5434_);
v___x_5460_ = lean_box(0);
v_isShared_5461_ = v_isSharedCheck_5465_;
goto v_resetjp_5459_;
}
v_resetjp_5459_:
{
lean_object* v___x_5463_; 
if (v_isShared_5461_ == 0)
{
v___x_5463_ = v___x_5460_;
goto v_reusejp_5462_;
}
else
{
lean_object* v_reuseFailAlloc_5464_; 
v_reuseFailAlloc_5464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5464_, 0, v_a_5458_);
v___x_5463_ = v_reuseFailAlloc_5464_;
goto v_reusejp_5462_;
}
v_reusejp_5462_:
{
return v___x_5463_;
}
}
}
}
else
{
lean_object* v_a_5466_; lean_object* v___x_5468_; uint8_t v_isShared_5469_; uint8_t v_isSharedCheck_5473_; 
lean_del_object(v___x_5422_);
lean_dec(v_val_5414_);
lean_dec_ref(v_args2_5387_);
lean_dec(v_us_5382_);
v_a_5466_ = lean_ctor_get(v___x_5431_, 0);
v_isSharedCheck_5473_ = !lean_is_exclusive(v___x_5431_);
if (v_isSharedCheck_5473_ == 0)
{
v___x_5468_ = v___x_5431_;
v_isShared_5469_ = v_isSharedCheck_5473_;
goto v_resetjp_5467_;
}
else
{
lean_inc(v_a_5466_);
lean_dec(v___x_5431_);
v___x_5468_ = lean_box(0);
v_isShared_5469_ = v_isSharedCheck_5473_;
goto v_resetjp_5467_;
}
v_resetjp_5467_:
{
lean_object* v___x_5471_; 
if (v_isShared_5469_ == 0)
{
v___x_5471_ = v___x_5468_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5472_; 
v_reuseFailAlloc_5472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5472_, 0, v_a_5466_);
v___x_5471_ = v_reuseFailAlloc_5472_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
return v___x_5471_;
}
}
}
}
else
{
lean_object* v_a_5474_; lean_object* v___x_5476_; uint8_t v_isShared_5477_; uint8_t v_isSharedCheck_5481_; 
lean_del_object(v___x_5422_);
lean_dec(v_val_5414_);
lean_dec(v_a_5408_);
lean_dec_ref(v_args2_5387_);
lean_dec(v_us_5382_);
v_a_5474_ = lean_ctor_get(v___x_5429_, 0);
v_isSharedCheck_5481_ = !lean_is_exclusive(v___x_5429_);
if (v_isSharedCheck_5481_ == 0)
{
v___x_5476_ = v___x_5429_;
v_isShared_5477_ = v_isSharedCheck_5481_;
goto v_resetjp_5475_;
}
else
{
lean_inc(v_a_5474_);
lean_dec(v___x_5429_);
v___x_5476_ = lean_box(0);
v_isShared_5477_ = v_isSharedCheck_5481_;
goto v_resetjp_5475_;
}
v_resetjp_5475_:
{
lean_object* v___x_5479_; 
if (v_isShared_5477_ == 0)
{
v___x_5479_ = v___x_5476_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v_a_5474_);
v___x_5479_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
return v___x_5479_;
}
}
}
}
}
else
{
lean_object* v___x_5483_; lean_object* v___x_5485_; 
lean_dec(v_a_5416_);
lean_dec(v_val_5414_);
lean_dec(v_a_5408_);
lean_dec_ref(v___x_5398_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v___x_5483_ = lean_box(0);
if (v_isShared_5419_ == 0)
{
lean_ctor_set(v___x_5418_, 0, v___x_5483_);
v___x_5485_ = v___x_5418_;
goto v_reusejp_5484_;
}
else
{
lean_object* v_reuseFailAlloc_5486_; 
v_reuseFailAlloc_5486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5486_, 0, v___x_5483_);
v___x_5485_ = v_reuseFailAlloc_5486_;
goto v_reusejp_5484_;
}
v_reusejp_5484_:
{
return v___x_5485_;
}
}
}
}
else
{
lean_object* v_a_5488_; lean_object* v___x_5490_; uint8_t v_isShared_5491_; uint8_t v_isSharedCheck_5495_; 
lean_dec(v_val_5414_);
lean_dec(v_a_5408_);
lean_dec_ref(v___x_5398_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v_a_5488_ = lean_ctor_get(v___x_5415_, 0);
v_isSharedCheck_5495_ = !lean_is_exclusive(v___x_5415_);
if (v_isSharedCheck_5495_ == 0)
{
v___x_5490_ = v___x_5415_;
v_isShared_5491_ = v_isSharedCheck_5495_;
goto v_resetjp_5489_;
}
else
{
lean_inc(v_a_5488_);
lean_dec(v___x_5415_);
v___x_5490_ = lean_box(0);
v_isShared_5491_ = v_isSharedCheck_5495_;
goto v_resetjp_5489_;
}
v_resetjp_5489_:
{
lean_object* v___x_5493_; 
if (v_isShared_5491_ == 0)
{
v___x_5493_ = v___x_5490_;
goto v_reusejp_5492_;
}
else
{
lean_object* v_reuseFailAlloc_5494_; 
v_reuseFailAlloc_5494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5494_, 0, v_a_5488_);
v___x_5493_ = v_reuseFailAlloc_5494_;
goto v_reusejp_5492_;
}
v_reusejp_5492_:
{
return v___x_5493_;
}
}
}
}
else
{
lean_object* v___x_5496_; lean_object* v___x_5498_; 
lean_dec(v_a_5410_);
lean_dec(v_a_5408_);
lean_dec_ref(v___x_5398_);
lean_dec_ref(v___x_5395_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v___x_5496_ = lean_box(0);
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 0, v___x_5496_);
v___x_5498_ = v___x_5412_;
goto v_reusejp_5497_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v___x_5496_);
v___x_5498_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5497_;
}
v_reusejp_5497_:
{
return v___x_5498_;
}
}
}
}
else
{
lean_object* v_a_5501_; lean_object* v___x_5503_; uint8_t v_isShared_5504_; uint8_t v_isSharedCheck_5508_; 
lean_dec(v_a_5408_);
lean_dec_ref(v___x_5398_);
lean_dec_ref(v___x_5395_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v_a_5501_ = lean_ctor_get(v___x_5409_, 0);
v_isSharedCheck_5508_ = !lean_is_exclusive(v___x_5409_);
if (v_isSharedCheck_5508_ == 0)
{
v___x_5503_ = v___x_5409_;
v_isShared_5504_ = v_isSharedCheck_5508_;
goto v_resetjp_5502_;
}
else
{
lean_inc(v_a_5501_);
lean_dec(v___x_5409_);
v___x_5503_ = lean_box(0);
v_isShared_5504_ = v_isSharedCheck_5508_;
goto v_resetjp_5502_;
}
v_resetjp_5502_:
{
lean_object* v___x_5506_; 
if (v_isShared_5504_ == 0)
{
v___x_5506_ = v___x_5503_;
goto v_reusejp_5505_;
}
else
{
lean_object* v_reuseFailAlloc_5507_; 
v_reuseFailAlloc_5507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5507_, 0, v_a_5501_);
v___x_5506_ = v_reuseFailAlloc_5507_;
goto v_reusejp_5505_;
}
v_reusejp_5505_:
{
return v___x_5506_;
}
}
}
}
else
{
lean_object* v_a_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5516_; 
lean_dec_ref(v___x_5398_);
lean_dec_ref(v___x_5395_);
lean_dec_ref(v___x_5394_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v_a_5509_ = lean_ctor_get(v___x_5407_, 0);
v_isSharedCheck_5516_ = !lean_is_exclusive(v___x_5407_);
if (v_isSharedCheck_5516_ == 0)
{
v___x_5511_ = v___x_5407_;
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_a_5509_);
lean_dec(v___x_5407_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v___x_5514_; 
if (v_isShared_5512_ == 0)
{
v___x_5514_ = v___x_5511_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5515_; 
v_reuseFailAlloc_5515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5515_, 0, v_a_5509_);
v___x_5514_ = v_reuseFailAlloc_5515_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
return v___x_5514_;
}
}
}
}
else
{
lean_object* v___x_5517_; lean_object* v___x_5519_; 
lean_dec(v___x_5405_);
lean_dec_ref(v___x_5398_);
lean_dec(v_a_5397_);
lean_dec_ref(v___x_5395_);
lean_dec_ref(v___x_5394_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v___x_5517_ = lean_box(0);
if (v_isShared_5404_ == 0)
{
lean_ctor_set(v___x_5403_, 0, v___x_5517_);
v___x_5519_ = v___x_5403_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v___x_5517_);
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
else
{
lean_object* v_a_5522_; lean_object* v___x_5524_; uint8_t v_isShared_5525_; uint8_t v_isSharedCheck_5529_; 
lean_dec_ref(v___x_5398_);
lean_dec(v_a_5397_);
lean_dec_ref(v___x_5395_);
lean_dec_ref(v___x_5394_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_us_5382_);
v_a_5522_ = lean_ctor_get(v___x_5400_, 0);
v_isSharedCheck_5529_ = !lean_is_exclusive(v___x_5400_);
if (v_isSharedCheck_5529_ == 0)
{
v___x_5524_ = v___x_5400_;
v_isShared_5525_ = v_isSharedCheck_5529_;
goto v_resetjp_5523_;
}
else
{
lean_inc(v_a_5522_);
lean_dec(v___x_5400_);
v___x_5524_ = lean_box(0);
v_isShared_5525_ = v_isSharedCheck_5529_;
goto v_resetjp_5523_;
}
v_resetjp_5523_:
{
lean_object* v___x_5527_; 
if (v_isShared_5525_ == 0)
{
v___x_5527_ = v___x_5524_;
goto v_reusejp_5526_;
}
else
{
lean_object* v_reuseFailAlloc_5528_; 
v_reuseFailAlloc_5528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5528_, 0, v_a_5522_);
v___x_5527_ = v_reuseFailAlloc_5528_;
goto v_reusejp_5526_;
}
v_reusejp_5526_:
{
return v___x_5527_;
}
}
}
}
else
{
lean_object* v_a_5530_; lean_object* v___x_5532_; uint8_t v_isShared_5533_; uint8_t v_isSharedCheck_5537_; 
lean_dec_ref(v___x_5395_);
lean_dec_ref(v___x_5394_);
lean_dec_ref(v_args2_5387_);
lean_dec_ref(v___x_5386_);
lean_dec(v_numParams_5385_);
lean_dec(v___x_5384_);
lean_dec(v_us_5382_);
v_a_5530_ = lean_ctor_get(v___x_5396_, 0);
v_isSharedCheck_5537_ = !lean_is_exclusive(v___x_5396_);
if (v_isSharedCheck_5537_ == 0)
{
v___x_5532_ = v___x_5396_;
v_isShared_5533_ = v_isSharedCheck_5537_;
goto v_resetjp_5531_;
}
else
{
lean_inc(v_a_5530_);
lean_dec(v___x_5396_);
v___x_5532_ = lean_box(0);
v_isShared_5533_ = v_isSharedCheck_5537_;
goto v_resetjp_5531_;
}
v_resetjp_5531_:
{
lean_object* v___x_5535_; 
if (v_isShared_5533_ == 0)
{
v___x_5535_ = v___x_5532_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5536_; 
v_reuseFailAlloc_5536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5536_, 0, v_a_5530_);
v___x_5535_ = v_reuseFailAlloc_5536_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
return v___x_5535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed(lean_object* v_name_5538_, lean_object* v_us_5539_, lean_object* v_args1_5540_, lean_object* v___x_5541_, lean_object* v_numParams_5542_, lean_object* v___x_5543_, lean_object* v_args2_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_){
_start:
{
lean_object* v_res_5550_; 
v_res_5550_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(v_name_5538_, v_us_5539_, v_args1_5540_, v___x_5541_, v_numParams_5542_, v___x_5543_, v_args2_5544_, v___y_5545_, v___y_5546_, v___y_5547_, v___y_5548_);
lean_dec(v___y_5548_);
lean_dec_ref(v___y_5547_);
lean_dec(v___y_5546_);
lean_dec_ref(v___y_5545_);
lean_dec_ref(v_args1_5540_);
return v_res_5550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(lean_object* v_numParams_5551_, lean_object* v_name_5552_, lean_object* v_us_5553_, lean_object* v_ctorVal_5554_, lean_object* v_a_5555_, lean_object* v_args1_5556_, lean_object* v_x_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_){
_start:
{
lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___f_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; 
v___x_5563_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_5551_);
lean_inc_ref_n(v_args1_5556_, 3);
v___x_5564_ = l_Array_toSubarray___redArg(v_args1_5556_, v___x_5563_, v_numParams_5551_);
v___f_5565_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed), 12, 6);
lean_closure_set(v___f_5565_, 0, v_name_5552_);
lean_closure_set(v___f_5565_, 1, v_us_5553_);
lean_closure_set(v___f_5565_, 2, v_args1_5556_);
lean_closure_set(v___f_5565_, 3, v___x_5563_);
lean_closure_set(v___f_5565_, 4, v_numParams_5551_);
lean_closure_set(v___f_5565_, 5, v___x_5564_);
v___x_5566_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_5567_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed), 11, 6);
lean_closure_set(v___x_5567_, 0, v_ctorVal_5554_);
lean_closure_set(v___x_5567_, 1, v_args1_5556_);
lean_closure_set(v___x_5567_, 2, v___f_5565_);
lean_closure_set(v___x_5567_, 3, v___x_5563_);
lean_closure_set(v___x_5567_, 4, v_a_5555_);
lean_closure_set(v___x_5567_, 5, v___x_5566_);
v___x_5568_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_args1_5556_, v___x_5567_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_);
return v___x_5568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed(lean_object* v_numParams_5569_, lean_object* v_name_5570_, lean_object* v_us_5571_, lean_object* v_ctorVal_5572_, lean_object* v_a_5573_, lean_object* v_args1_5574_, lean_object* v_x_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_){
_start:
{
lean_object* v_res_5581_; 
v_res_5581_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(v_numParams_5569_, v_name_5570_, v_us_5571_, v_ctorVal_5572_, v_a_5573_, v_args1_5574_, v_x_5575_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_);
lean_dec(v___y_5579_);
lean_dec_ref(v___y_5578_);
lean_dec(v___y_5577_);
lean_dec_ref(v___y_5576_);
lean_dec_ref(v_x_5575_);
return v_res_5581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(lean_object* v_ctorVal_5582_, lean_object* v_a_5583_, lean_object* v_a_5584_, lean_object* v_a_5585_, lean_object* v_a_5586_){
_start:
{
lean_object* v_toConstantVal_5588_; lean_object* v_numParams_5589_; lean_object* v_name_5590_; lean_object* v_levelParams_5591_; lean_object* v_type_5592_; lean_object* v___x_5593_; 
v_toConstantVal_5588_ = lean_ctor_get(v_ctorVal_5582_, 0);
v_numParams_5589_ = lean_ctor_get(v_ctorVal_5582_, 3);
lean_inc(v_numParams_5589_);
v_name_5590_ = lean_ctor_get(v_toConstantVal_5588_, 0);
lean_inc(v_name_5590_);
v_levelParams_5591_ = lean_ctor_get(v_toConstantVal_5588_, 1);
v_type_5592_ = lean_ctor_get(v_toConstantVal_5588_, 2);
lean_inc_ref(v_type_5592_);
v___x_5593_ = l_Lean_Meta_elimOptParam(v_type_5592_, v_a_5585_, v_a_5586_);
if (lean_obj_tag(v___x_5593_) == 0)
{
lean_object* v_a_5594_; lean_object* v___x_5595_; lean_object* v_us_5596_; lean_object* v___f_5597_; uint8_t v___x_5598_; lean_object* v___x_5599_; 
v_a_5594_ = lean_ctor_get(v___x_5593_, 0);
lean_inc_n(v_a_5594_, 2);
lean_dec_ref(v___x_5593_);
v___x_5595_ = lean_box(0);
lean_inc(v_levelParams_5591_);
v_us_5596_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_5591_, v___x_5595_);
v___f_5597_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed), 12, 5);
lean_closure_set(v___f_5597_, 0, v_numParams_5589_);
lean_closure_set(v___f_5597_, 1, v_name_5590_);
lean_closure_set(v___f_5597_, 2, v_us_5596_);
lean_closure_set(v___f_5597_, 3, v_ctorVal_5582_);
lean_closure_set(v___f_5597_, 4, v_a_5594_);
v___x_5598_ = 0;
v___x_5599_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_a_5594_, v___f_5597_, v___x_5598_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_);
return v___x_5599_;
}
else
{
lean_object* v_a_5600_; lean_object* v___x_5602_; uint8_t v_isShared_5603_; uint8_t v_isSharedCheck_5607_; 
lean_dec(v_name_5590_);
lean_dec(v_numParams_5589_);
lean_dec_ref(v_ctorVal_5582_);
v_a_5600_ = lean_ctor_get(v___x_5593_, 0);
v_isSharedCheck_5607_ = !lean_is_exclusive(v___x_5593_);
if (v_isSharedCheck_5607_ == 0)
{
v___x_5602_ = v___x_5593_;
v_isShared_5603_ = v_isSharedCheck_5607_;
goto v_resetjp_5601_;
}
else
{
lean_inc(v_a_5600_);
lean_dec(v___x_5593_);
v___x_5602_ = lean_box(0);
v_isShared_5603_ = v_isSharedCheck_5607_;
goto v_resetjp_5601_;
}
v_resetjp_5601_:
{
lean_object* v___x_5605_; 
if (v_isShared_5603_ == 0)
{
v___x_5605_ = v___x_5602_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v_a_5600_);
v___x_5605_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
return v___x_5605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___boxed(lean_object* v_ctorVal_5608_, lean_object* v_a_5609_, lean_object* v_a_5610_, lean_object* v_a_5611_, lean_object* v_a_5612_, lean_object* v_a_5613_){
_start:
{
lean_object* v_res_5614_; 
v_res_5614_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(v_ctorVal_5608_, v_a_5609_, v_a_5610_, v_a_5611_, v_a_5612_);
lean_dec(v_a_5612_);
lean_dec_ref(v_a_5611_);
lean_dec(v_a_5610_);
lean_dec_ref(v_a_5609_);
return v_res_5614_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1(void){
_start:
{
lean_object* v___x_5616_; lean_object* v___x_5617_; 
v___x_5616_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0));
v___x_5617_ = l_Lean_stringToMessageData(v___x_5616_);
return v___x_5617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(lean_object* v_ctorVal_5618_, lean_object* v_a_5619_, lean_object* v_a_5620_, lean_object* v_a_5621_, lean_object* v_a_5622_){
_start:
{
lean_object* v_toConstantVal_5624_; lean_object* v_name_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v_toConstantVal_5624_ = lean_ctor_get(v_ctorVal_5618_, 0);
lean_inc_ref(v_toConstantVal_5624_);
lean_dec_ref(v_ctorVal_5618_);
v_name_5625_ = lean_ctor_get(v_toConstantVal_5624_, 0);
lean_inc(v_name_5625_);
lean_dec_ref(v_toConstantVal_5624_);
v___x_5626_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1);
v___x_5627_ = l_Lean_MessageData_ofName(v_name_5625_);
v___x_5628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5626_);
lean_ctor_set(v___x_5628_, 1, v___x_5627_);
v___x_5629_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5630_, 0, v___x_5628_);
lean_ctor_set(v___x_5630_, 1, v___x_5629_);
v___x_5631_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_5630_, v_a_5619_, v_a_5620_, v_a_5621_, v_a_5622_);
return v___x_5631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___boxed(lean_object* v_ctorVal_5632_, lean_object* v_a_5633_, lean_object* v_a_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_, lean_object* v_a_5637_){
_start:
{
lean_object* v_res_5638_; 
v_res_5638_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5632_, v_a_5633_, v_a_5634_, v_a_5635_, v_a_5636_);
lean_dec(v_a_5636_);
lean_dec_ref(v_a_5635_);
lean_dec(v_a_5634_);
lean_dec_ref(v_a_5633_);
return v_res_5638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(lean_object* v_00_u03b1_5639_, lean_object* v_ctorVal_5640_, lean_object* v_a_5641_, lean_object* v_a_5642_, lean_object* v_a_5643_, lean_object* v_a_5644_){
_start:
{
lean_object* v___x_5646_; 
v___x_5646_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5640_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_);
return v___x_5646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___boxed(lean_object* v_00_u03b1_5647_, lean_object* v_ctorVal_5648_, lean_object* v_a_5649_, lean_object* v_a_5650_, lean_object* v_a_5651_, lean_object* v_a_5652_, lean_object* v_a_5653_){
_start:
{
lean_object* v_res_5654_; 
v_res_5654_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(v_00_u03b1_5647_, v_ctorVal_5648_, v_a_5649_, v_a_5650_, v_a_5651_, v_a_5652_);
lean_dec(v_a_5652_);
lean_dec_ref(v_a_5651_);
lean_dec(v_a_5650_);
lean_dec_ref(v_a_5649_);
return v_res_5654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(lean_object* v_ctorVal_5660_, size_t v_sz_5661_, size_t v_i_5662_, lean_object* v_bs_5663_, lean_object* v___y_5664_, lean_object* v___y_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_){
_start:
{
uint8_t v___x_5669_; 
v___x_5669_ = lean_usize_dec_lt(v_i_5662_, v_sz_5661_);
if (v___x_5669_ == 0)
{
lean_object* v___x_5670_; 
lean_dec_ref(v_ctorVal_5660_);
v___x_5670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5670_, 0, v_bs_5663_);
return v___x_5670_;
}
else
{
lean_object* v_v_5671_; lean_object* v___x_5672_; 
v_v_5671_ = lean_array_uget_borrowed(v_bs_5663_, v_i_5662_);
lean_inc(v___y_5667_);
lean_inc_ref(v___y_5666_);
lean_inc(v___y_5665_);
lean_inc_ref(v___y_5664_);
lean_inc(v_v_5671_);
v___x_5672_ = lean_infer_type(v_v_5671_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
if (lean_obj_tag(v___x_5672_) == 0)
{
lean_object* v_a_5673_; lean_object* v___x_5674_; 
v_a_5673_ = lean_ctor_get(v___x_5672_, 0);
lean_inc(v_a_5673_);
lean_dec_ref(v___x_5672_);
v___x_5674_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_5673_, v___y_5665_);
if (lean_obj_tag(v___x_5674_) == 0)
{
lean_object* v_a_5675_; lean_object* v___x_5676_; lean_object* v_bs_x27_5677_; lean_object* v_a_5679_; lean_object* v___y_5685_; lean_object* v_lhs_5696_; lean_object* v_rhs_5697_; lean_object* v___x_5699_; uint8_t v___x_5700_; 
v_a_5675_ = lean_ctor_get(v___x_5674_, 0);
lean_inc(v_a_5675_);
lean_dec_ref(v___x_5674_);
v___x_5676_ = lean_unsigned_to_nat(0u);
v_bs_x27_5677_ = lean_array_uset(v_bs_5663_, v_i_5662_, v___x_5676_);
v___x_5699_ = l_Lean_Expr_cleanupAnnotations(v_a_5675_);
v___x_5700_ = l_Lean_Expr_isApp(v___x_5699_);
if (v___x_5700_ == 0)
{
lean_object* v___x_5701_; 
lean_dec_ref(v___x_5699_);
lean_inc_ref(v_ctorVal_5660_);
v___x_5701_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5660_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
v___y_5685_ = v___x_5701_;
goto v___jp_5684_;
}
else
{
lean_object* v_arg_5702_; lean_object* v___x_5703_; uint8_t v___x_5704_; 
v_arg_5702_ = lean_ctor_get(v___x_5699_, 1);
lean_inc_ref(v_arg_5702_);
v___x_5703_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5699_);
v___x_5704_ = l_Lean_Expr_isApp(v___x_5703_);
if (v___x_5704_ == 0)
{
lean_object* v___x_5705_; 
lean_dec_ref(v___x_5703_);
lean_dec_ref(v_arg_5702_);
lean_inc_ref(v_ctorVal_5660_);
v___x_5705_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5660_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
v___y_5685_ = v___x_5705_;
goto v___jp_5684_;
}
else
{
lean_object* v_arg_5706_; lean_object* v___x_5707_; uint8_t v___x_5708_; 
v_arg_5706_ = lean_ctor_get(v___x_5703_, 1);
lean_inc_ref(v_arg_5706_);
v___x_5707_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5703_);
v___x_5708_ = l_Lean_Expr_isApp(v___x_5707_);
if (v___x_5708_ == 0)
{
lean_object* v___x_5709_; 
lean_dec_ref(v___x_5707_);
lean_dec_ref(v_arg_5706_);
lean_dec_ref(v_arg_5702_);
lean_inc_ref(v_ctorVal_5660_);
v___x_5709_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5660_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
v___y_5685_ = v___x_5709_;
goto v___jp_5684_;
}
else
{
lean_object* v_arg_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; uint8_t v___x_5713_; 
v_arg_5710_ = lean_ctor_get(v___x_5707_, 1);
lean_inc_ref(v_arg_5710_);
v___x_5711_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5707_);
v___x_5712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0));
v___x_5713_ = l_Lean_Expr_isConstOf(v___x_5711_, v___x_5712_);
if (v___x_5713_ == 0)
{
uint8_t v___x_5714_; 
lean_dec_ref(v_arg_5706_);
v___x_5714_ = l_Lean_Expr_isApp(v___x_5711_);
if (v___x_5714_ == 0)
{
lean_object* v___x_5715_; 
lean_dec_ref(v___x_5711_);
lean_dec_ref(v_arg_5710_);
lean_dec_ref(v_arg_5702_);
lean_inc_ref(v_ctorVal_5660_);
v___x_5715_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5660_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
v___y_5685_ = v___x_5715_;
goto v___jp_5684_;
}
else
{
lean_object* v___x_5716_; lean_object* v___x_5717_; uint8_t v___x_5718_; 
v___x_5716_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5711_);
v___x_5717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2));
v___x_5718_ = l_Lean_Expr_isConstOf(v___x_5716_, v___x_5717_);
lean_dec_ref(v___x_5716_);
if (v___x_5718_ == 0)
{
lean_object* v___x_5719_; 
lean_dec_ref(v_arg_5710_);
lean_dec_ref(v_arg_5702_);
lean_inc_ref(v_ctorVal_5660_);
v___x_5719_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5660_, v___y_5664_, v___y_5665_, v___y_5666_, v___y_5667_);
v___y_5685_ = v___x_5719_;
goto v___jp_5684_;
}
else
{
v_lhs_5696_ = v_arg_5710_;
v_rhs_5697_ = v_arg_5702_;
goto v___jp_5695_;
}
}
}
else
{
lean_dec_ref(v___x_5711_);
lean_dec_ref(v_arg_5710_);
v_lhs_5696_ = v_arg_5706_;
v_rhs_5697_ = v_arg_5702_;
goto v___jp_5695_;
}
}
}
}
v___jp_5678_:
{
size_t v___x_5680_; size_t v___x_5681_; lean_object* v___x_5682_; 
v___x_5680_ = ((size_t)1ULL);
v___x_5681_ = lean_usize_add(v_i_5662_, v___x_5680_);
v___x_5682_ = lean_array_uset(v_bs_x27_5677_, v_i_5662_, v_a_5679_);
v_i_5662_ = v___x_5681_;
v_bs_5663_ = v___x_5682_;
goto _start;
}
v___jp_5684_:
{
if (lean_obj_tag(v___y_5685_) == 0)
{
lean_object* v_a_5686_; 
v_a_5686_ = lean_ctor_get(v___y_5685_, 0);
lean_inc(v_a_5686_);
lean_dec_ref(v___y_5685_);
v_a_5679_ = v_a_5686_;
goto v___jp_5678_;
}
else
{
lean_object* v_a_5687_; lean_object* v___x_5689_; uint8_t v_isShared_5690_; uint8_t v_isSharedCheck_5694_; 
lean_dec_ref(v_bs_x27_5677_);
lean_dec_ref(v_ctorVal_5660_);
v_a_5687_ = lean_ctor_get(v___y_5685_, 0);
v_isSharedCheck_5694_ = !lean_is_exclusive(v___y_5685_);
if (v_isSharedCheck_5694_ == 0)
{
v___x_5689_ = v___y_5685_;
v_isShared_5690_ = v_isSharedCheck_5694_;
goto v_resetjp_5688_;
}
else
{
lean_inc(v_a_5687_);
lean_dec(v___y_5685_);
v___x_5689_ = lean_box(0);
v_isShared_5690_ = v_isSharedCheck_5694_;
goto v_resetjp_5688_;
}
v_resetjp_5688_:
{
lean_object* v___x_5692_; 
if (v_isShared_5690_ == 0)
{
v___x_5692_ = v___x_5689_;
goto v_reusejp_5691_;
}
else
{
lean_object* v_reuseFailAlloc_5693_; 
v_reuseFailAlloc_5693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5693_, 0, v_a_5687_);
v___x_5692_ = v_reuseFailAlloc_5693_;
goto v_reusejp_5691_;
}
v_reusejp_5691_:
{
return v___x_5692_;
}
}
}
}
v___jp_5695_:
{
lean_object* v___x_5698_; 
v___x_5698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5698_, 0, v_lhs_5696_);
lean_ctor_set(v___x_5698_, 1, v_rhs_5697_);
v_a_5679_ = v___x_5698_;
goto v___jp_5678_;
}
}
else
{
lean_object* v_a_5720_; lean_object* v___x_5722_; uint8_t v_isShared_5723_; uint8_t v_isSharedCheck_5727_; 
lean_dec_ref(v_bs_5663_);
lean_dec_ref(v_ctorVal_5660_);
v_a_5720_ = lean_ctor_get(v___x_5674_, 0);
v_isSharedCheck_5727_ = !lean_is_exclusive(v___x_5674_);
if (v_isSharedCheck_5727_ == 0)
{
v___x_5722_ = v___x_5674_;
v_isShared_5723_ = v_isSharedCheck_5727_;
goto v_resetjp_5721_;
}
else
{
lean_inc(v_a_5720_);
lean_dec(v___x_5674_);
v___x_5722_ = lean_box(0);
v_isShared_5723_ = v_isSharedCheck_5727_;
goto v_resetjp_5721_;
}
v_resetjp_5721_:
{
lean_object* v___x_5725_; 
if (v_isShared_5723_ == 0)
{
v___x_5725_ = v___x_5722_;
goto v_reusejp_5724_;
}
else
{
lean_object* v_reuseFailAlloc_5726_; 
v_reuseFailAlloc_5726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5726_, 0, v_a_5720_);
v___x_5725_ = v_reuseFailAlloc_5726_;
goto v_reusejp_5724_;
}
v_reusejp_5724_:
{
return v___x_5725_;
}
}
}
}
else
{
lean_object* v_a_5728_; lean_object* v___x_5730_; uint8_t v_isShared_5731_; uint8_t v_isSharedCheck_5735_; 
lean_dec_ref(v_bs_5663_);
lean_dec_ref(v_ctorVal_5660_);
v_a_5728_ = lean_ctor_get(v___x_5672_, 0);
v_isSharedCheck_5735_ = !lean_is_exclusive(v___x_5672_);
if (v_isSharedCheck_5735_ == 0)
{
v___x_5730_ = v___x_5672_;
v_isShared_5731_ = v_isSharedCheck_5735_;
goto v_resetjp_5729_;
}
else
{
lean_inc(v_a_5728_);
lean_dec(v___x_5672_);
v___x_5730_ = lean_box(0);
v_isShared_5731_ = v_isSharedCheck_5735_;
goto v_resetjp_5729_;
}
v_resetjp_5729_:
{
lean_object* v___x_5733_; 
if (v_isShared_5731_ == 0)
{
v___x_5733_ = v___x_5730_;
goto v_reusejp_5732_;
}
else
{
lean_object* v_reuseFailAlloc_5734_; 
v_reuseFailAlloc_5734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5734_, 0, v_a_5728_);
v___x_5733_ = v_reuseFailAlloc_5734_;
goto v_reusejp_5732_;
}
v_reusejp_5732_:
{
return v___x_5733_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed(lean_object* v_ctorVal_5736_, lean_object* v_sz_5737_, lean_object* v_i_5738_, lean_object* v_bs_5739_, lean_object* v___y_5740_, lean_object* v___y_5741_, lean_object* v___y_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_){
_start:
{
size_t v_sz_boxed_5745_; size_t v_i_boxed_5746_; lean_object* v_res_5747_; 
v_sz_boxed_5745_ = lean_unbox_usize(v_sz_5737_);
lean_dec(v_sz_5737_);
v_i_boxed_5746_ = lean_unbox_usize(v_i_5738_);
lean_dec(v_i_5738_);
v_res_5747_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(v_ctorVal_5736_, v_sz_boxed_5745_, v_i_boxed_5746_, v_bs_5739_, v___y_5740_, v___y_5741_, v___y_5742_, v___y_5743_);
lean_dec(v___y_5743_);
lean_dec_ref(v___y_5742_);
lean_dec(v___y_5741_);
lean_dec_ref(v___y_5740_);
return v_res_5747_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5749_; lean_object* v___x_5750_; 
v___x_5749_ = lean_unsigned_to_nat(0u);
v___x_5750_ = l_Lean_Level_ofNat(v___x_5749_);
return v___x_5750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(lean_object* v_ctorVal_5751_, lean_object* v_us_5752_, lean_object* v_numIndices_5753_, lean_object* v_xs_5754_, lean_object* v_type_5755_, lean_object* v___y_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_){
_start:
{
lean_object* v_toConstantVal_5761_; lean_object* v_induct_5762_; lean_object* v_numParams_5763_; lean_object* v___x_5764_; lean_object* v_noConfusionName_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v_noConfusion_5769_; lean_object* v_noConfusion_5770_; lean_object* v_lower_5772_; lean_object* v_upper_5773_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v_n_5884_; uint8_t v___x_5885_; 
v_toConstantVal_5761_ = lean_ctor_get(v_ctorVal_5751_, 0);
v_induct_5762_ = lean_ctor_get(v_ctorVal_5751_, 1);
v_numParams_5763_ = lean_ctor_get(v_ctorVal_5751_, 3);
v___x_5764_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0));
lean_inc(v_induct_5762_);
v_noConfusionName_5765_ = l_Lean_Name_str___override(v_induct_5762_, v___x_5764_);
v___x_5766_ = lean_unsigned_to_nat(0u);
v___x_5767_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1);
v___x_5768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5768_, 0, v___x_5767_);
lean_ctor_set(v___x_5768_, 1, v_us_5752_);
v_noConfusion_5769_ = l_Lean_mkConst(v_noConfusionName_5765_, v___x_5768_);
v_noConfusion_5770_ = l_Lean_Expr_app___override(v_noConfusion_5769_, v_type_5755_);
v___x_5880_ = lean_array_get_size(v_xs_5754_);
v___x_5881_ = lean_nat_sub(v___x_5880_, v_numParams_5763_);
v___x_5882_ = lean_nat_sub(v___x_5881_, v_numIndices_5753_);
lean_dec(v___x_5881_);
v___x_5883_ = lean_unsigned_to_nat(1u);
v_n_5884_ = lean_nat_sub(v___x_5882_, v___x_5883_);
lean_dec(v___x_5882_);
v___x_5885_ = lean_nat_dec_le(v_n_5884_, v___x_5766_);
if (v___x_5885_ == 0)
{
v_lower_5772_ = v_n_5884_;
v_upper_5773_ = v___x_5880_;
goto v___jp_5771_;
}
else
{
lean_dec(v_n_5884_);
v_lower_5772_ = v___x_5766_;
v_upper_5773_ = v___x_5880_;
goto v___jp_5771_;
}
v___jp_5771_:
{
lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v_eqs_5776_; size_t v_sz_5777_; size_t v___x_5778_; lean_object* v___x_5779_; 
lean_inc_ref(v_xs_5754_);
v___x_5774_ = l_Array_toSubarray___redArg(v_xs_5754_, v_lower_5772_, v_upper_5773_);
v___x_5775_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v_eqs_5776_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v___x_5774_, v___x_5775_);
v_sz_5777_ = lean_array_size(v_eqs_5776_);
v___x_5778_ = ((size_t)0ULL);
lean_inc_ref(v_eqs_5776_);
lean_inc_ref(v_ctorVal_5751_);
v___x_5779_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(v_ctorVal_5751_, v_sz_5777_, v___x_5778_, v_eqs_5776_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
if (lean_obj_tag(v___x_5779_) == 0)
{
lean_object* v_a_5780_; lean_object* v___x_5781_; lean_object* v_fst_5782_; lean_object* v_snd_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; 
v_a_5780_ = lean_ctor_get(v___x_5779_, 0);
lean_inc(v_a_5780_);
lean_dec_ref(v___x_5779_);
v___x_5781_ = l_Array_unzip___redArg(v_a_5780_);
lean_dec(v_a_5780_);
v_fst_5782_ = lean_ctor_get(v___x_5781_, 0);
lean_inc(v_fst_5782_);
v_snd_5783_ = lean_ctor_get(v___x_5781_, 1);
lean_inc(v_snd_5783_);
lean_dec_ref(v___x_5781_);
v___x_5784_ = l_Lean_mkAppN(v_noConfusion_5770_, v_fst_5782_);
lean_dec(v_fst_5782_);
v___x_5785_ = l_Lean_mkAppN(v___x_5784_, v_snd_5783_);
lean_dec(v_snd_5783_);
v___x_5786_ = l_Lean_mkAppN(v___x_5785_, v_eqs_5776_);
lean_dec_ref(v_eqs_5776_);
lean_inc(v___y_5759_);
lean_inc_ref(v___y_5758_);
lean_inc(v___y_5757_);
lean_inc_ref(v___y_5756_);
lean_inc_ref(v___x_5786_);
v___x_5787_ = lean_infer_type(v___x_5786_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
if (lean_obj_tag(v___x_5787_) == 0)
{
lean_object* v_a_5788_; lean_object* v___x_5789_; 
v_a_5788_ = lean_ctor_get(v___x_5787_, 0);
lean_inc(v_a_5788_);
lean_dec_ref(v___x_5787_);
lean_inc(v___y_5759_);
lean_inc_ref(v___y_5758_);
lean_inc(v___y_5757_);
lean_inc_ref(v___y_5756_);
v___x_5789_ = lean_whnf(v_a_5788_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
if (lean_obj_tag(v___x_5789_) == 0)
{
lean_object* v_a_5790_; 
v_a_5790_ = lean_ctor_get(v___x_5789_, 0);
lean_inc(v_a_5790_);
lean_dec_ref(v___x_5789_);
if (lean_obj_tag(v_a_5790_) == 7)
{
lean_object* v_binderType_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; 
lean_inc_ref(v_toConstantVal_5761_);
lean_dec_ref(v_ctorVal_5751_);
v_binderType_5791_ = lean_ctor_get(v_a_5790_, 1);
lean_inc_ref(v_binderType_5791_);
lean_dec_ref(v_a_5790_);
v___x_5792_ = lean_box(0);
v___x_5793_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_binderType_5791_, v___x_5792_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
if (lean_obj_tag(v___x_5793_) == 0)
{
lean_object* v_a_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; 
v_a_5794_ = lean_ctor_get(v___x_5793_, 0);
lean_inc(v_a_5794_);
lean_dec_ref(v___x_5793_);
v___x_5795_ = l_Lean_Expr_mvarId_x21(v_a_5794_);
v___x_5796_ = l_Lean_MVarId_intros(v___x_5795_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
if (lean_obj_tag(v___x_5796_) == 0)
{
lean_object* v_a_5797_; lean_object* v_snd_5798_; lean_object* v_name_5799_; lean_object* v___x_5800_; 
v_a_5797_ = lean_ctor_get(v___x_5796_, 0);
lean_inc(v_a_5797_);
lean_dec_ref(v___x_5796_);
v_snd_5798_ = lean_ctor_get(v_a_5797_, 1);
lean_inc(v_snd_5798_);
lean_dec(v_a_5797_);
v_name_5799_ = lean_ctor_get(v_toConstantVal_5761_, 0);
lean_inc(v_name_5799_);
lean_dec_ref(v_toConstantVal_5761_);
v___x_5800_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_snd_5798_, v_name_5799_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
if (lean_obj_tag(v___x_5800_) == 0)
{
lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v_a_5803_; lean_object* v___x_5805_; uint8_t v_isShared_5806_; uint8_t v_isSharedCheck_5830_; 
lean_dec_ref(v___x_5800_);
v___x_5801_ = l_Lean_Expr_app___override(v___x_5786_, v_a_5794_);
v___x_5802_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v___x_5801_, v___y_5757_);
v_a_5803_ = lean_ctor_get(v___x_5802_, 0);
v_isSharedCheck_5830_ = !lean_is_exclusive(v___x_5802_);
if (v_isSharedCheck_5830_ == 0)
{
v___x_5805_ = v___x_5802_;
v_isShared_5806_ = v_isSharedCheck_5830_;
goto v_resetjp_5804_;
}
else
{
lean_inc(v_a_5803_);
lean_dec(v___x_5802_);
v___x_5805_ = lean_box(0);
v_isShared_5806_ = v_isSharedCheck_5830_;
goto v_resetjp_5804_;
}
v_resetjp_5804_:
{
uint8_t v___x_5807_; uint8_t v___x_5808_; uint8_t v___x_5809_; lean_object* v___x_5810_; 
v___x_5807_ = 0;
v___x_5808_ = 1;
v___x_5809_ = 1;
v___x_5810_ = l_Lean_Meta_mkLambdaFVars(v_xs_5754_, v_a_5803_, v___x_5807_, v___x_5808_, v___x_5807_, v___x_5808_, v___x_5809_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
lean_dec_ref(v_xs_5754_);
if (lean_obj_tag(v___x_5810_) == 0)
{
lean_object* v_a_5811_; lean_object* v___x_5813_; uint8_t v_isShared_5814_; uint8_t v_isSharedCheck_5821_; 
v_a_5811_ = lean_ctor_get(v___x_5810_, 0);
v_isSharedCheck_5821_ = !lean_is_exclusive(v___x_5810_);
if (v_isSharedCheck_5821_ == 0)
{
v___x_5813_ = v___x_5810_;
v_isShared_5814_ = v_isSharedCheck_5821_;
goto v_resetjp_5812_;
}
else
{
lean_inc(v_a_5811_);
lean_dec(v___x_5810_);
v___x_5813_ = lean_box(0);
v_isShared_5814_ = v_isSharedCheck_5821_;
goto v_resetjp_5812_;
}
v_resetjp_5812_:
{
lean_object* v___x_5816_; 
if (v_isShared_5806_ == 0)
{
lean_ctor_set_tag(v___x_5805_, 1);
lean_ctor_set(v___x_5805_, 0, v_a_5811_);
v___x_5816_ = v___x_5805_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5820_; 
v_reuseFailAlloc_5820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5820_, 0, v_a_5811_);
v___x_5816_ = v_reuseFailAlloc_5820_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
lean_object* v___x_5818_; 
if (v_isShared_5814_ == 0)
{
lean_ctor_set(v___x_5813_, 0, v___x_5816_);
v___x_5818_ = v___x_5813_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v___x_5816_);
v___x_5818_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
return v___x_5818_;
}
}
}
}
else
{
lean_object* v_a_5822_; lean_object* v___x_5824_; uint8_t v_isShared_5825_; uint8_t v_isSharedCheck_5829_; 
lean_del_object(v___x_5805_);
v_a_5822_ = lean_ctor_get(v___x_5810_, 0);
v_isSharedCheck_5829_ = !lean_is_exclusive(v___x_5810_);
if (v_isSharedCheck_5829_ == 0)
{
v___x_5824_ = v___x_5810_;
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
else
{
lean_inc(v_a_5822_);
lean_dec(v___x_5810_);
v___x_5824_ = lean_box(0);
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
v_resetjp_5823_:
{
lean_object* v___x_5827_; 
if (v_isShared_5825_ == 0)
{
v___x_5827_ = v___x_5824_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5828_; 
v_reuseFailAlloc_5828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5828_, 0, v_a_5822_);
v___x_5827_ = v_reuseFailAlloc_5828_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
return v___x_5827_;
}
}
}
}
}
else
{
lean_object* v_a_5831_; lean_object* v___x_5833_; uint8_t v_isShared_5834_; uint8_t v_isSharedCheck_5838_; 
lean_dec(v_a_5794_);
lean_dec_ref(v___x_5786_);
lean_dec_ref(v_xs_5754_);
v_a_5831_ = lean_ctor_get(v___x_5800_, 0);
v_isSharedCheck_5838_ = !lean_is_exclusive(v___x_5800_);
if (v_isSharedCheck_5838_ == 0)
{
v___x_5833_ = v___x_5800_;
v_isShared_5834_ = v_isSharedCheck_5838_;
goto v_resetjp_5832_;
}
else
{
lean_inc(v_a_5831_);
lean_dec(v___x_5800_);
v___x_5833_ = lean_box(0);
v_isShared_5834_ = v_isSharedCheck_5838_;
goto v_resetjp_5832_;
}
v_resetjp_5832_:
{
lean_object* v___x_5836_; 
if (v_isShared_5834_ == 0)
{
v___x_5836_ = v___x_5833_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v_a_5831_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
return v___x_5836_;
}
}
}
}
else
{
lean_object* v_a_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5846_; 
lean_dec(v_a_5794_);
lean_dec_ref(v___x_5786_);
lean_dec_ref(v_toConstantVal_5761_);
lean_dec_ref(v_xs_5754_);
v_a_5839_ = lean_ctor_get(v___x_5796_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v___x_5796_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5841_ = v___x_5796_;
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_a_5839_);
lean_dec(v___x_5796_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
lean_object* v___x_5844_; 
if (v_isShared_5842_ == 0)
{
v___x_5844_ = v___x_5841_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v_a_5839_);
v___x_5844_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
return v___x_5844_;
}
}
}
}
else
{
lean_object* v_a_5847_; lean_object* v___x_5849_; uint8_t v_isShared_5850_; uint8_t v_isSharedCheck_5854_; 
lean_dec_ref(v___x_5786_);
lean_dec_ref(v_toConstantVal_5761_);
lean_dec_ref(v_xs_5754_);
v_a_5847_ = lean_ctor_get(v___x_5793_, 0);
v_isSharedCheck_5854_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5854_ == 0)
{
v___x_5849_ = v___x_5793_;
v_isShared_5850_ = v_isSharedCheck_5854_;
goto v_resetjp_5848_;
}
else
{
lean_inc(v_a_5847_);
lean_dec(v___x_5793_);
v___x_5849_ = lean_box(0);
v_isShared_5850_ = v_isSharedCheck_5854_;
goto v_resetjp_5848_;
}
v_resetjp_5848_:
{
lean_object* v___x_5852_; 
if (v_isShared_5850_ == 0)
{
v___x_5852_ = v___x_5849_;
goto v_reusejp_5851_;
}
else
{
lean_object* v_reuseFailAlloc_5853_; 
v_reuseFailAlloc_5853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5853_, 0, v_a_5847_);
v___x_5852_ = v_reuseFailAlloc_5853_;
goto v_reusejp_5851_;
}
v_reusejp_5851_:
{
return v___x_5852_;
}
}
}
}
else
{
lean_object* v___x_5855_; 
lean_dec(v_a_5790_);
lean_dec_ref(v___x_5786_);
lean_dec_ref(v_xs_5754_);
v___x_5855_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5751_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_);
return v___x_5855_;
}
}
else
{
lean_object* v_a_5856_; lean_object* v___x_5858_; uint8_t v_isShared_5859_; uint8_t v_isSharedCheck_5863_; 
lean_dec_ref(v___x_5786_);
lean_dec_ref(v_xs_5754_);
lean_dec_ref(v_ctorVal_5751_);
v_a_5856_ = lean_ctor_get(v___x_5789_, 0);
v_isSharedCheck_5863_ = !lean_is_exclusive(v___x_5789_);
if (v_isSharedCheck_5863_ == 0)
{
v___x_5858_ = v___x_5789_;
v_isShared_5859_ = v_isSharedCheck_5863_;
goto v_resetjp_5857_;
}
else
{
lean_inc(v_a_5856_);
lean_dec(v___x_5789_);
v___x_5858_ = lean_box(0);
v_isShared_5859_ = v_isSharedCheck_5863_;
goto v_resetjp_5857_;
}
v_resetjp_5857_:
{
lean_object* v___x_5861_; 
if (v_isShared_5859_ == 0)
{
v___x_5861_ = v___x_5858_;
goto v_reusejp_5860_;
}
else
{
lean_object* v_reuseFailAlloc_5862_; 
v_reuseFailAlloc_5862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5862_, 0, v_a_5856_);
v___x_5861_ = v_reuseFailAlloc_5862_;
goto v_reusejp_5860_;
}
v_reusejp_5860_:
{
return v___x_5861_;
}
}
}
}
else
{
lean_object* v_a_5864_; lean_object* v___x_5866_; uint8_t v_isShared_5867_; uint8_t v_isSharedCheck_5871_; 
lean_dec_ref(v___x_5786_);
lean_dec_ref(v_xs_5754_);
lean_dec_ref(v_ctorVal_5751_);
v_a_5864_ = lean_ctor_get(v___x_5787_, 0);
v_isSharedCheck_5871_ = !lean_is_exclusive(v___x_5787_);
if (v_isSharedCheck_5871_ == 0)
{
v___x_5866_ = v___x_5787_;
v_isShared_5867_ = v_isSharedCheck_5871_;
goto v_resetjp_5865_;
}
else
{
lean_inc(v_a_5864_);
lean_dec(v___x_5787_);
v___x_5866_ = lean_box(0);
v_isShared_5867_ = v_isSharedCheck_5871_;
goto v_resetjp_5865_;
}
v_resetjp_5865_:
{
lean_object* v___x_5869_; 
if (v_isShared_5867_ == 0)
{
v___x_5869_ = v___x_5866_;
goto v_reusejp_5868_;
}
else
{
lean_object* v_reuseFailAlloc_5870_; 
v_reuseFailAlloc_5870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5870_, 0, v_a_5864_);
v___x_5869_ = v_reuseFailAlloc_5870_;
goto v_reusejp_5868_;
}
v_reusejp_5868_:
{
return v___x_5869_;
}
}
}
}
else
{
lean_object* v_a_5872_; lean_object* v___x_5874_; uint8_t v_isShared_5875_; uint8_t v_isSharedCheck_5879_; 
lean_dec_ref(v_eqs_5776_);
lean_dec_ref(v_noConfusion_5770_);
lean_dec_ref(v_xs_5754_);
lean_dec_ref(v_ctorVal_5751_);
v_a_5872_ = lean_ctor_get(v___x_5779_, 0);
v_isSharedCheck_5879_ = !lean_is_exclusive(v___x_5779_);
if (v_isSharedCheck_5879_ == 0)
{
v___x_5874_ = v___x_5779_;
v_isShared_5875_ = v_isSharedCheck_5879_;
goto v_resetjp_5873_;
}
else
{
lean_inc(v_a_5872_);
lean_dec(v___x_5779_);
v___x_5874_ = lean_box(0);
v_isShared_5875_ = v_isSharedCheck_5879_;
goto v_resetjp_5873_;
}
v_resetjp_5873_:
{
lean_object* v___x_5877_; 
if (v_isShared_5875_ == 0)
{
v___x_5877_ = v___x_5874_;
goto v_reusejp_5876_;
}
else
{
lean_object* v_reuseFailAlloc_5878_; 
v_reuseFailAlloc_5878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5878_, 0, v_a_5872_);
v___x_5877_ = v_reuseFailAlloc_5878_;
goto v_reusejp_5876_;
}
v_reusejp_5876_:
{
return v___x_5877_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed(lean_object* v_ctorVal_5886_, lean_object* v_us_5887_, lean_object* v_numIndices_5888_, lean_object* v_xs_5889_, lean_object* v_type_5890_, lean_object* v___y_5891_, lean_object* v___y_5892_, lean_object* v___y_5893_, lean_object* v___y_5894_, lean_object* v___y_5895_){
_start:
{
lean_object* v_res_5896_; 
v_res_5896_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(v_ctorVal_5886_, v_us_5887_, v_numIndices_5888_, v_xs_5889_, v_type_5890_, v___y_5891_, v___y_5892_, v___y_5893_, v___y_5894_);
lean_dec(v___y_5894_);
lean_dec_ref(v___y_5893_);
lean_dec(v___y_5892_);
lean_dec_ref(v___y_5891_);
lean_dec(v_numIndices_5888_);
return v_res_5896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(lean_object* v_ctorVal_5897_, lean_object* v_typeInfo_5898_, lean_object* v_a_5899_, lean_object* v_a_5900_, lean_object* v_a_5901_, lean_object* v_a_5902_){
_start:
{
lean_object* v_thmType_5904_; lean_object* v_us_5905_; lean_object* v_numIndices_5906_; lean_object* v___f_5907_; uint8_t v___x_5908_; lean_object* v___x_5909_; 
v_thmType_5904_ = lean_ctor_get(v_typeInfo_5898_, 0);
lean_inc_ref(v_thmType_5904_);
v_us_5905_ = lean_ctor_get(v_typeInfo_5898_, 1);
lean_inc(v_us_5905_);
v_numIndices_5906_ = lean_ctor_get(v_typeInfo_5898_, 2);
lean_inc(v_numIndices_5906_);
lean_dec_ref(v_typeInfo_5898_);
v___f_5907_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed), 10, 3);
lean_closure_set(v___f_5907_, 0, v_ctorVal_5897_);
lean_closure_set(v___f_5907_, 1, v_us_5905_);
lean_closure_set(v___f_5907_, 2, v_numIndices_5906_);
v___x_5908_ = 0;
v___x_5909_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_thmType_5904_, v___f_5907_, v___x_5908_, v___x_5908_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_);
return v___x_5909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___boxed(lean_object* v_ctorVal_5910_, lean_object* v_typeInfo_5911_, lean_object* v_a_5912_, lean_object* v_a_5913_, lean_object* v_a_5914_, lean_object* v_a_5915_, lean_object* v_a_5916_){
_start:
{
lean_object* v_res_5917_; 
v_res_5917_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(v_ctorVal_5910_, v_typeInfo_5911_, v_a_5912_, v_a_5913_, v_a_5914_, v_a_5915_);
lean_dec(v_a_5915_);
lean_dec_ref(v_a_5914_);
lean_dec(v_a_5913_);
lean_dec_ref(v_a_5912_);
return v_res_5917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHInjectiveTheoremNameFor(lean_object* v_ctorName_5920_){
_start:
{
lean_object* v___x_5921_; lean_object* v___x_5922_; 
v___x_5921_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_5922_ = l_Lean_Name_str___override(v_ctorName_5920_, v___x_5921_);
return v___x_5922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object* v_thmName_5923_, lean_object* v_ctorVal_5924_, lean_object* v_a_5925_, lean_object* v_a_5926_, lean_object* v_a_5927_, lean_object* v_a_5928_){
_start:
{
lean_object* v___x_5930_; 
lean_inc_ref(v_ctorVal_5924_);
v___x_5930_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(v_ctorVal_5924_, v_a_5925_, v_a_5926_, v_a_5927_, v_a_5928_);
if (lean_obj_tag(v___x_5930_) == 0)
{
lean_object* v_a_5931_; lean_object* v___x_5933_; uint8_t v_isShared_5934_; uint8_t v_isSharedCheck_5992_; 
v_a_5931_ = lean_ctor_get(v___x_5930_, 0);
v_isSharedCheck_5992_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_5992_ == 0)
{
v___x_5933_ = v___x_5930_;
v_isShared_5934_ = v_isSharedCheck_5992_;
goto v_resetjp_5932_;
}
else
{
lean_inc(v_a_5931_);
lean_dec(v___x_5930_);
v___x_5933_ = lean_box(0);
v_isShared_5934_ = v_isSharedCheck_5992_;
goto v_resetjp_5932_;
}
v_resetjp_5932_:
{
if (lean_obj_tag(v_a_5931_) == 1)
{
lean_object* v_val_5935_; lean_object* v___x_5936_; 
lean_del_object(v___x_5933_);
v_val_5935_ = lean_ctor_get(v_a_5931_, 0);
lean_inc_n(v_val_5935_, 2);
lean_dec_ref(v_a_5931_);
lean_inc_ref(v_ctorVal_5924_);
v___x_5936_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(v_ctorVal_5924_, v_val_5935_, v_a_5925_, v_a_5926_, v_a_5927_, v_a_5928_);
if (lean_obj_tag(v___x_5936_) == 0)
{
lean_object* v_a_5937_; lean_object* v___x_5939_; uint8_t v_isShared_5940_; uint8_t v_isSharedCheck_5979_; 
v_a_5937_ = lean_ctor_get(v___x_5936_, 0);
v_isSharedCheck_5979_ = !lean_is_exclusive(v___x_5936_);
if (v_isSharedCheck_5979_ == 0)
{
v___x_5939_ = v___x_5936_;
v_isShared_5940_ = v_isSharedCheck_5979_;
goto v_resetjp_5938_;
}
else
{
lean_inc(v_a_5937_);
lean_dec(v___x_5936_);
v___x_5939_ = lean_box(0);
v_isShared_5940_ = v_isSharedCheck_5979_;
goto v_resetjp_5938_;
}
v_resetjp_5938_:
{
if (lean_obj_tag(v_a_5937_) == 1)
{
lean_object* v_toConstantVal_5941_; lean_object* v_val_5942_; lean_object* v___x_5944_; uint8_t v_isShared_5945_; uint8_t v_isSharedCheck_5974_; 
v_toConstantVal_5941_ = lean_ctor_get(v_ctorVal_5924_, 0);
lean_inc_ref(v_toConstantVal_5941_);
lean_dec_ref(v_ctorVal_5924_);
v_val_5942_ = lean_ctor_get(v_a_5937_, 0);
v_isSharedCheck_5974_ = !lean_is_exclusive(v_a_5937_);
if (v_isSharedCheck_5974_ == 0)
{
v___x_5944_ = v_a_5937_;
v_isShared_5945_ = v_isSharedCheck_5974_;
goto v_resetjp_5943_;
}
else
{
lean_inc(v_val_5942_);
lean_dec(v_a_5937_);
v___x_5944_ = lean_box(0);
v_isShared_5945_ = v_isSharedCheck_5974_;
goto v_resetjp_5943_;
}
v_resetjp_5943_:
{
lean_object* v_levelParams_5946_; lean_object* v___x_5948_; uint8_t v_isShared_5949_; uint8_t v_isSharedCheck_5971_; 
v_levelParams_5946_ = lean_ctor_get(v_toConstantVal_5941_, 1);
v_isSharedCheck_5971_ = !lean_is_exclusive(v_toConstantVal_5941_);
if (v_isSharedCheck_5971_ == 0)
{
lean_object* v_unused_5972_; lean_object* v_unused_5973_; 
v_unused_5972_ = lean_ctor_get(v_toConstantVal_5941_, 2);
lean_dec(v_unused_5972_);
v_unused_5973_ = lean_ctor_get(v_toConstantVal_5941_, 0);
lean_dec(v_unused_5973_);
v___x_5948_ = v_toConstantVal_5941_;
v_isShared_5949_ = v_isSharedCheck_5971_;
goto v_resetjp_5947_;
}
else
{
lean_inc(v_levelParams_5946_);
lean_dec(v_toConstantVal_5941_);
v___x_5948_ = lean_box(0);
v_isShared_5949_ = v_isSharedCheck_5971_;
goto v_resetjp_5947_;
}
v_resetjp_5947_:
{
lean_object* v_thmType_5950_; lean_object* v___x_5952_; uint8_t v_isShared_5953_; uint8_t v_isSharedCheck_5968_; 
v_thmType_5950_ = lean_ctor_get(v_val_5935_, 0);
v_isSharedCheck_5968_ = !lean_is_exclusive(v_val_5935_);
if (v_isSharedCheck_5968_ == 0)
{
lean_object* v_unused_5969_; lean_object* v_unused_5970_; 
v_unused_5969_ = lean_ctor_get(v_val_5935_, 2);
lean_dec(v_unused_5969_);
v_unused_5970_ = lean_ctor_get(v_val_5935_, 1);
lean_dec(v_unused_5970_);
v___x_5952_ = v_val_5935_;
v_isShared_5953_ = v_isSharedCheck_5968_;
goto v_resetjp_5951_;
}
else
{
lean_inc(v_thmType_5950_);
lean_dec(v_val_5935_);
v___x_5952_ = lean_box(0);
v_isShared_5953_ = v_isSharedCheck_5968_;
goto v_resetjp_5951_;
}
v_resetjp_5951_:
{
lean_object* v___x_5955_; 
lean_inc(v_thmName_5923_);
if (v_isShared_5949_ == 0)
{
lean_ctor_set(v___x_5948_, 2, v_thmType_5950_);
lean_ctor_set(v___x_5948_, 0, v_thmName_5923_);
v___x_5955_ = v___x_5948_;
goto v_reusejp_5954_;
}
else
{
lean_object* v_reuseFailAlloc_5967_; 
v_reuseFailAlloc_5967_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5967_, 0, v_thmName_5923_);
lean_ctor_set(v_reuseFailAlloc_5967_, 1, v_levelParams_5946_);
lean_ctor_set(v_reuseFailAlloc_5967_, 2, v_thmType_5950_);
v___x_5955_ = v_reuseFailAlloc_5967_;
goto v_reusejp_5954_;
}
v_reusejp_5954_:
{
lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5959_; 
v___x_5956_ = lean_box(0);
v___x_5957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5957_, 0, v_thmName_5923_);
lean_ctor_set(v___x_5957_, 1, v___x_5956_);
if (v_isShared_5953_ == 0)
{
lean_ctor_set(v___x_5952_, 2, v___x_5957_);
lean_ctor_set(v___x_5952_, 1, v_val_5942_);
lean_ctor_set(v___x_5952_, 0, v___x_5955_);
v___x_5959_ = v___x_5952_;
goto v_reusejp_5958_;
}
else
{
lean_object* v_reuseFailAlloc_5966_; 
v_reuseFailAlloc_5966_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5966_, 0, v___x_5955_);
lean_ctor_set(v_reuseFailAlloc_5966_, 1, v_val_5942_);
lean_ctor_set(v_reuseFailAlloc_5966_, 2, v___x_5957_);
v___x_5959_ = v_reuseFailAlloc_5966_;
goto v_reusejp_5958_;
}
v_reusejp_5958_:
{
lean_object* v___x_5961_; 
if (v_isShared_5945_ == 0)
{
lean_ctor_set(v___x_5944_, 0, v___x_5959_);
v___x_5961_ = v___x_5944_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v___x_5959_);
v___x_5961_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
lean_object* v___x_5963_; 
if (v_isShared_5940_ == 0)
{
lean_ctor_set(v___x_5939_, 0, v___x_5961_);
v___x_5963_ = v___x_5939_;
goto v_reusejp_5962_;
}
else
{
lean_object* v_reuseFailAlloc_5964_; 
v_reuseFailAlloc_5964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5964_, 0, v___x_5961_);
v___x_5963_ = v_reuseFailAlloc_5964_;
goto v_reusejp_5962_;
}
v_reusejp_5962_:
{
return v___x_5963_;
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
lean_object* v___x_5975_; lean_object* v___x_5977_; 
lean_dec(v_a_5937_);
lean_dec(v_val_5935_);
lean_dec_ref(v_ctorVal_5924_);
lean_dec(v_thmName_5923_);
v___x_5975_ = lean_box(0);
if (v_isShared_5940_ == 0)
{
lean_ctor_set(v___x_5939_, 0, v___x_5975_);
v___x_5977_ = v___x_5939_;
goto v_reusejp_5976_;
}
else
{
lean_object* v_reuseFailAlloc_5978_; 
v_reuseFailAlloc_5978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5978_, 0, v___x_5975_);
v___x_5977_ = v_reuseFailAlloc_5978_;
goto v_reusejp_5976_;
}
v_reusejp_5976_:
{
return v___x_5977_;
}
}
}
}
else
{
lean_object* v_a_5980_; lean_object* v___x_5982_; uint8_t v_isShared_5983_; uint8_t v_isSharedCheck_5987_; 
lean_dec(v_val_5935_);
lean_dec_ref(v_ctorVal_5924_);
lean_dec(v_thmName_5923_);
v_a_5980_ = lean_ctor_get(v___x_5936_, 0);
v_isSharedCheck_5987_ = !lean_is_exclusive(v___x_5936_);
if (v_isSharedCheck_5987_ == 0)
{
v___x_5982_ = v___x_5936_;
v_isShared_5983_ = v_isSharedCheck_5987_;
goto v_resetjp_5981_;
}
else
{
lean_inc(v_a_5980_);
lean_dec(v___x_5936_);
v___x_5982_ = lean_box(0);
v_isShared_5983_ = v_isSharedCheck_5987_;
goto v_resetjp_5981_;
}
v_resetjp_5981_:
{
lean_object* v___x_5985_; 
if (v_isShared_5983_ == 0)
{
v___x_5985_ = v___x_5982_;
goto v_reusejp_5984_;
}
else
{
lean_object* v_reuseFailAlloc_5986_; 
v_reuseFailAlloc_5986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5986_, 0, v_a_5980_);
v___x_5985_ = v_reuseFailAlloc_5986_;
goto v_reusejp_5984_;
}
v_reusejp_5984_:
{
return v___x_5985_;
}
}
}
}
else
{
lean_object* v___x_5988_; lean_object* v___x_5990_; 
lean_dec(v_a_5931_);
lean_dec_ref(v_ctorVal_5924_);
lean_dec(v_thmName_5923_);
v___x_5988_ = lean_box(0);
if (v_isShared_5934_ == 0)
{
lean_ctor_set(v___x_5933_, 0, v___x_5988_);
v___x_5990_ = v___x_5933_;
goto v_reusejp_5989_;
}
else
{
lean_object* v_reuseFailAlloc_5991_; 
v_reuseFailAlloc_5991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5991_, 0, v___x_5988_);
v___x_5990_ = v_reuseFailAlloc_5991_;
goto v_reusejp_5989_;
}
v_reusejp_5989_:
{
return v___x_5990_;
}
}
}
}
else
{
lean_object* v_a_5993_; lean_object* v___x_5995_; uint8_t v_isShared_5996_; uint8_t v_isSharedCheck_6000_; 
lean_dec_ref(v_ctorVal_5924_);
lean_dec(v_thmName_5923_);
v_a_5993_ = lean_ctor_get(v___x_5930_, 0);
v_isSharedCheck_6000_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_6000_ == 0)
{
v___x_5995_ = v___x_5930_;
v_isShared_5996_ = v_isSharedCheck_6000_;
goto v_resetjp_5994_;
}
else
{
lean_inc(v_a_5993_);
lean_dec(v___x_5930_);
v___x_5995_ = lean_box(0);
v_isShared_5996_ = v_isSharedCheck_6000_;
goto v_resetjp_5994_;
}
v_resetjp_5994_:
{
lean_object* v___x_5998_; 
if (v_isShared_5996_ == 0)
{
v___x_5998_ = v___x_5995_;
goto v_reusejp_5997_;
}
else
{
lean_object* v_reuseFailAlloc_5999_; 
v_reuseFailAlloc_5999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5999_, 0, v_a_5993_);
v___x_5998_ = v_reuseFailAlloc_5999_;
goto v_reusejp_5997_;
}
v_reusejp_5997_:
{
return v___x_5998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object* v_thmName_6001_, lean_object* v_ctorVal_6002_, lean_object* v_a_6003_, lean_object* v_a_6004_, lean_object* v_a_6005_, lean_object* v_a_6006_, lean_object* v_a_6007_){
_start:
{
lean_object* v_res_6008_; 
v_res_6008_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_thmName_6001_, v_ctorVal_6002_, v_a_6003_, v_a_6004_, v_a_6005_, v_a_6006_);
lean_dec(v_a_6006_);
lean_dec_ref(v_a_6005_);
lean_dec(v_a_6004_);
lean_dec_ref(v_a_6003_);
return v_res_6008_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(lean_object* v_env_6009_, lean_object* v_n_6010_){
_start:
{
if (lean_obj_tag(v_n_6010_) == 1)
{
lean_object* v_pre_6011_; lean_object* v_str_6012_; lean_object* v___x_6013_; uint8_t v___x_6014_; 
v_pre_6011_ = lean_ctor_get(v_n_6010_, 0);
lean_inc(v_pre_6011_);
v_str_6012_ = lean_ctor_get(v_n_6010_, 1);
lean_inc_ref(v_str_6012_);
lean_dec_ref(v_n_6010_);
v___x_6013_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6014_ = lean_string_dec_eq(v_str_6012_, v___x_6013_);
lean_dec_ref(v_str_6012_);
if (v___x_6014_ == 0)
{
lean_dec(v_pre_6011_);
lean_dec_ref(v_env_6009_);
return v___x_6014_;
}
else
{
uint8_t v___x_6015_; lean_object* v___x_6016_; 
v___x_6015_ = 0;
v___x_6016_ = l_Lean_Environment_find_x3f(v_env_6009_, v_pre_6011_, v___x_6015_);
if (lean_obj_tag(v___x_6016_) == 1)
{
lean_object* v_val_6017_; 
v_val_6017_ = lean_ctor_get(v___x_6016_, 0);
lean_inc(v_val_6017_);
lean_dec_ref(v___x_6016_);
if (lean_obj_tag(v_val_6017_) == 6)
{
lean_dec_ref(v_val_6017_);
return v___x_6014_;
}
else
{
lean_dec(v_val_6017_);
return v___x_6015_;
}
}
else
{
lean_dec(v___x_6016_);
return v___x_6015_;
}
}
}
else
{
uint8_t v___x_6018_; 
lean_dec(v_n_6010_);
lean_dec_ref(v_env_6009_);
v___x_6018_ = 0;
return v___x_6018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object* v_env_6019_, lean_object* v_n_6020_){
_start:
{
uint8_t v_res_6021_; lean_object* v_r_6022_; 
v_res_6021_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(v_env_6019_, v_n_6020_);
v_r_6022_ = lean_box(v_res_6021_);
return v_r_6022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_6025_; lean_object* v___x_6026_; 
v___f_6025_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_));
v___x_6026_ = l_Lean_registerReservedNamePredicate(v___f_6025_);
return v___x_6026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object* v_a_6027_){
_start:
{
lean_object* v_res_6028_; 
v_res_6028_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
return v_res_6028_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(lean_object* v_thm_6029_, lean_object* v___y_6030_){
_start:
{
lean_object* v___x_6032_; lean_object* v_env_6033_; lean_object* v_toConstantVal_6034_; lean_object* v_value_6035_; lean_object* v_all_6036_; uint8_t v___y_6038_; lean_object* v_type_6046_; uint8_t v___x_6047_; 
v___x_6032_ = lean_st_ref_get(v___y_6030_);
v_env_6033_ = lean_ctor_get(v___x_6032_, 0);
lean_inc_ref_n(v_env_6033_, 2);
lean_dec(v___x_6032_);
v_toConstantVal_6034_ = lean_ctor_get(v_thm_6029_, 0);
v_value_6035_ = lean_ctor_get(v_thm_6029_, 1);
v_all_6036_ = lean_ctor_get(v_thm_6029_, 2);
v_type_6046_ = lean_ctor_get(v_toConstantVal_6034_, 2);
v___x_6047_ = l_Lean_Environment_hasUnsafe(v_env_6033_, v_type_6046_);
if (v___x_6047_ == 0)
{
uint8_t v___x_6048_; 
v___x_6048_ = l_Lean_Environment_hasUnsafe(v_env_6033_, v_value_6035_);
v___y_6038_ = v___x_6048_;
goto v___jp_6037_;
}
else
{
lean_dec_ref(v_env_6033_);
v___y_6038_ = v___x_6047_;
goto v___jp_6037_;
}
v___jp_6037_:
{
if (v___y_6038_ == 0)
{
lean_object* v___x_6039_; lean_object* v___x_6040_; 
v___x_6039_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_6039_, 0, v_thm_6029_);
v___x_6040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6040_, 0, v___x_6039_);
return v___x_6040_;
}
else
{
lean_object* v___x_6041_; uint8_t v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; 
lean_inc(v_all_6036_);
lean_inc_ref(v_value_6035_);
lean_inc_ref(v_toConstantVal_6034_);
lean_dec_ref(v_thm_6029_);
v___x_6041_ = lean_box(0);
v___x_6042_ = 0;
v___x_6043_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_6043_, 0, v_toConstantVal_6034_);
lean_ctor_set(v___x_6043_, 1, v_value_6035_);
lean_ctor_set(v___x_6043_, 2, v___x_6041_);
lean_ctor_set(v___x_6043_, 3, v_all_6036_);
lean_ctor_set_uint8(v___x_6043_, sizeof(void*)*4, v___x_6042_);
v___x_6044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6044_, 0, v___x_6043_);
v___x_6045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6045_, 0, v___x_6044_);
return v___x_6045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_thm_6049_, lean_object* v___y_6050_, lean_object* v___y_6051_){
_start:
{
lean_object* v_res_6052_; 
v_res_6052_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_thm_6049_, v___y_6050_);
lean_dec(v___y_6050_);
return v_res_6052_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(lean_object* v_thm_6053_, lean_object* v___y_6054_, lean_object* v___y_6055_, lean_object* v___y_6056_, lean_object* v___y_6057_){
_start:
{
lean_object* v___x_6059_; 
v___x_6059_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_thm_6053_, v___y_6057_);
return v___x_6059_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___boxed(lean_object* v_thm_6060_, lean_object* v___y_6061_, lean_object* v___y_6062_, lean_object* v___y_6063_, lean_object* v___y_6064_, lean_object* v___y_6065_){
_start:
{
lean_object* v_res_6066_; 
v_res_6066_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(v_thm_6060_, v___y_6061_, v___y_6062_, v___y_6063_, v___y_6064_);
lean_dec(v___y_6064_);
lean_dec_ref(v___y_6063_);
lean_dec(v___y_6062_);
lean_dec_ref(v___y_6061_);
return v_res_6066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object* v_val_6067_, uint8_t v___x_6068_, lean_object* v___y_6069_, lean_object* v___y_6070_, lean_object* v___y_6071_, lean_object* v___y_6072_){
_start:
{
lean_object* v___x_6074_; lean_object* v_a_6075_; lean_object* v___x_6076_; 
v___x_6074_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_val_6067_, v___y_6072_);
v_a_6075_ = lean_ctor_get(v___x_6074_, 0);
lean_inc(v_a_6075_);
lean_dec_ref(v___x_6074_);
v___x_6076_ = l_Lean_addDecl(v_a_6075_, v___x_6068_, v___y_6071_, v___y_6072_);
return v___x_6076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v_val_6077_, lean_object* v___x_6078_, lean_object* v___y_6079_, lean_object* v___y_6080_, lean_object* v___y_6081_, lean_object* v___y_6082_, lean_object* v___y_6083_){
_start:
{
uint8_t v___x_2122__boxed_6084_; lean_object* v_res_6085_; 
v___x_2122__boxed_6084_ = lean_unbox(v___x_6078_);
v_res_6085_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(v_val_6077_, v___x_2122__boxed_6084_, v___y_6079_, v___y_6080_, v___y_6081_, v___y_6082_);
lean_dec(v___y_6082_);
lean_dec_ref(v___y_6081_);
lean_dec(v___y_6080_);
lean_dec_ref(v___y_6079_);
return v_res_6085_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; 
v___x_6088_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__1, &l_Lean_Meta_mkInjectiveTheorems___closed__1_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__1);
v___x_6089_ = lean_unsigned_to_nat(0u);
v___x_6090_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_6090_, 0, v___x_6089_);
lean_ctor_set(v___x_6090_, 1, v___x_6089_);
lean_ctor_set(v___x_6090_, 2, v___x_6089_);
lean_ctor_set(v___x_6090_, 3, v___x_6088_);
lean_ctor_set(v___x_6090_, 4, v___x_6088_);
lean_ctor_set(v___x_6090_, 5, v___x_6088_);
lean_ctor_set(v___x_6090_, 6, v___x_6088_);
lean_ctor_set(v___x_6090_, 7, v___x_6088_);
lean_ctor_set(v___x_6090_, 8, v___x_6088_);
return v___x_6090_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6091_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__1, &l_Lean_Meta_mkInjectiveTheorems___closed__1_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__1);
v___x_6092_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6091_);
lean_ctor_set(v___x_6092_, 1, v___x_6091_);
lean_ctor_set(v___x_6092_, 2, v___x_6091_);
lean_ctor_set(v___x_6092_, 3, v___x_6091_);
lean_ctor_set(v___x_6092_, 4, v___x_6091_);
lean_ctor_set(v___x_6092_, 5, v___x_6091_);
return v___x_6092_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6093_; lean_object* v___x_6094_; 
v___x_6093_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__1, &l_Lean_Meta_mkInjectiveTheorems___closed__1_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__1);
v___x_6094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6094_, 0, v___x_6093_);
lean_ctor_set(v___x_6094_, 1, v___x_6093_);
lean_ctor_set(v___x_6094_, 2, v___x_6093_);
lean_ctor_set(v___x_6094_, 3, v___x_6093_);
lean_ctor_set(v___x_6094_, 4, v___x_6093_);
return v___x_6094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object* v___x_6095_, lean_object* v_name_6096_, lean_object* v___y_6097_, lean_object* v___y_6098_){
_start:
{
if (lean_obj_tag(v_name_6096_) == 1)
{
lean_object* v_pre_6108_; lean_object* v_str_6109_; lean_object* v___x_6110_; uint8_t v___x_6111_; 
v_pre_6108_ = lean_ctor_get(v_name_6096_, 0);
lean_inc(v_pre_6108_);
v_str_6109_ = lean_ctor_get(v_name_6096_, 1);
v___x_6110_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6111_ = lean_string_dec_eq(v_str_6109_, v___x_6110_);
if (v___x_6111_ == 0)
{
lean_dec_ref(v_name_6096_);
lean_dec(v_pre_6108_);
lean_dec(v___x_6095_);
goto v___jp_6104_;
}
else
{
lean_object* v___x_6112_; lean_object* v_env_6113_; uint8_t v___x_6114_; lean_object* v___x_6115_; 
v___x_6112_ = lean_st_ref_get(v___y_6098_);
v_env_6113_ = lean_ctor_get(v___x_6112_, 0);
lean_inc_ref(v_env_6113_);
lean_dec(v___x_6112_);
v___x_6114_ = 0;
lean_inc(v_pre_6108_);
v___x_6115_ = l_Lean_Environment_find_x3f(v_env_6113_, v_pre_6108_, v___x_6114_);
if (lean_obj_tag(v___x_6115_) == 1)
{
lean_object* v_val_6116_; 
v_val_6116_ = lean_ctor_get(v___x_6115_, 0);
lean_inc(v_val_6116_);
lean_dec_ref(v___x_6115_);
if (lean_obj_tag(v_val_6116_) == 6)
{
lean_object* v_val_6117_; lean_object* v___x_6119_; uint8_t v_isShared_6120_; uint8_t v_isSharedCheck_6167_; 
v_val_6117_ = lean_ctor_get(v_val_6116_, 0);
v_isSharedCheck_6167_ = !lean_is_exclusive(v_val_6116_);
if (v_isSharedCheck_6167_ == 0)
{
v___x_6119_ = v_val_6116_;
v_isShared_6120_ = v_isSharedCheck_6167_;
goto v_resetjp_6118_;
}
else
{
lean_inc(v_val_6117_);
lean_dec(v_val_6116_);
v___x_6119_ = lean_box(0);
v_isShared_6120_ = v_isSharedCheck_6167_;
goto v_resetjp_6118_;
}
v_resetjp_6118_:
{
uint8_t v___x_6121_; uint8_t v___x_6122_; uint8_t v___x_6123_; lean_object* v___x_6124_; uint64_t v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; uint8_t v_a_6139_; lean_object* v___x_6145_; 
v___x_6121_ = 1;
v___x_6122_ = 0;
v___x_6123_ = 2;
v___x_6124_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v___x_6124_, 0, v___x_6114_);
lean_ctor_set_uint8(v___x_6124_, 1, v___x_6114_);
lean_ctor_set_uint8(v___x_6124_, 2, v___x_6114_);
lean_ctor_set_uint8(v___x_6124_, 3, v___x_6114_);
lean_ctor_set_uint8(v___x_6124_, 4, v___x_6114_);
lean_ctor_set_uint8(v___x_6124_, 5, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 6, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 7, v___x_6114_);
lean_ctor_set_uint8(v___x_6124_, 8, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 9, v___x_6121_);
lean_ctor_set_uint8(v___x_6124_, 10, v___x_6122_);
lean_ctor_set_uint8(v___x_6124_, 11, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 12, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 13, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 14, v___x_6123_);
lean_ctor_set_uint8(v___x_6124_, 15, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 16, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 17, v___x_6111_);
lean_ctor_set_uint8(v___x_6124_, 18, v___x_6111_);
v___x_6125_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_6124_);
v___x_6126_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_6126_, 0, v___x_6124_);
lean_ctor_set_uint64(v___x_6126_, sizeof(void*)*1, v___x_6125_);
v___x_6127_ = lean_unsigned_to_nat(0u);
v___x_6128_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_6129_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__4, &l_Lean_Meta_mkInjectiveTheorems___closed__4_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__4);
v___x_6130_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_));
v___x_6131_ = lean_box(0);
lean_inc(v___x_6095_);
v___x_6132_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6132_, 0, v___x_6126_);
lean_ctor_set(v___x_6132_, 1, v___x_6095_);
lean_ctor_set(v___x_6132_, 2, v___x_6129_);
lean_ctor_set(v___x_6132_, 3, v___x_6130_);
lean_ctor_set(v___x_6132_, 4, v___x_6131_);
lean_ctor_set(v___x_6132_, 5, v___x_6127_);
lean_ctor_set(v___x_6132_, 6, v___x_6131_);
lean_ctor_set_uint8(v___x_6132_, sizeof(void*)*7, v___x_6114_);
lean_ctor_set_uint8(v___x_6132_, sizeof(void*)*7 + 1, v___x_6114_);
lean_ctor_set_uint8(v___x_6132_, sizeof(void*)*7 + 2, v___x_6114_);
lean_ctor_set_uint8(v___x_6132_, sizeof(void*)*7 + 3, v___x_6111_);
v___x_6133_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6134_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6135_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6133_);
lean_ctor_set(v___x_6136_, 1, v___x_6134_);
lean_ctor_set(v___x_6136_, 2, v___x_6095_);
lean_ctor_set(v___x_6136_, 3, v___x_6128_);
lean_ctor_set(v___x_6136_, 4, v___x_6135_);
v___x_6137_ = lean_st_mk_ref(v___x_6136_);
lean_inc_ref(v_name_6096_);
v___x_6145_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_name_6096_, v_val_6117_, v___x_6132_, v___x_6137_, v___y_6097_, v___y_6098_);
if (lean_obj_tag(v___x_6145_) == 0)
{
lean_object* v_a_6146_; 
v_a_6146_ = lean_ctor_get(v___x_6145_, 0);
lean_inc(v_a_6146_);
lean_dec_ref(v___x_6145_);
if (lean_obj_tag(v_a_6146_) == 1)
{
lean_object* v_val_6147_; lean_object* v___x_6148_; lean_object* v___f_6149_; lean_object* v___x_6150_; 
v_val_6147_ = lean_ctor_get(v_a_6146_, 0);
lean_inc(v_val_6147_);
lean_dec_ref(v_a_6146_);
v___x_6148_ = lean_box(v___x_6114_);
v___f_6149_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed), 7, 2);
lean_closure_set(v___f_6149_, 0, v_val_6147_);
lean_closure_set(v___f_6149_, 1, v___x_6148_);
v___x_6150_ = l_Lean_Meta_realizeConst(v_pre_6108_, v_name_6096_, v___f_6149_, v___x_6132_, v___x_6137_, v___y_6097_, v___y_6098_);
lean_dec_ref(v___x_6132_);
if (lean_obj_tag(v___x_6150_) == 0)
{
lean_dec_ref(v___x_6150_);
v_a_6139_ = v___x_6111_;
goto v___jp_6138_;
}
else
{
lean_object* v_a_6151_; lean_object* v___x_6153_; uint8_t v_isShared_6154_; uint8_t v_isSharedCheck_6158_; 
lean_dec(v___x_6137_);
lean_del_object(v___x_6119_);
v_a_6151_ = lean_ctor_get(v___x_6150_, 0);
v_isSharedCheck_6158_ = !lean_is_exclusive(v___x_6150_);
if (v_isSharedCheck_6158_ == 0)
{
v___x_6153_ = v___x_6150_;
v_isShared_6154_ = v_isSharedCheck_6158_;
goto v_resetjp_6152_;
}
else
{
lean_inc(v_a_6151_);
lean_dec(v___x_6150_);
v___x_6153_ = lean_box(0);
v_isShared_6154_ = v_isSharedCheck_6158_;
goto v_resetjp_6152_;
}
v_resetjp_6152_:
{
lean_object* v___x_6156_; 
if (v_isShared_6154_ == 0)
{
v___x_6156_ = v___x_6153_;
goto v_reusejp_6155_;
}
else
{
lean_object* v_reuseFailAlloc_6157_; 
v_reuseFailAlloc_6157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6157_, 0, v_a_6151_);
v___x_6156_ = v_reuseFailAlloc_6157_;
goto v_reusejp_6155_;
}
v_reusejp_6155_:
{
return v___x_6156_;
}
}
}
}
else
{
lean_dec(v_a_6146_);
lean_dec_ref(v___x_6132_);
lean_dec_ref(v_name_6096_);
lean_dec(v_pre_6108_);
v_a_6139_ = v___x_6114_;
goto v___jp_6138_;
}
}
else
{
lean_object* v_a_6159_; lean_object* v___x_6161_; uint8_t v_isShared_6162_; uint8_t v_isSharedCheck_6166_; 
lean_dec(v___x_6137_);
lean_dec_ref(v___x_6132_);
lean_del_object(v___x_6119_);
lean_dec_ref(v_name_6096_);
lean_dec(v_pre_6108_);
v_a_6159_ = lean_ctor_get(v___x_6145_, 0);
v_isSharedCheck_6166_ = !lean_is_exclusive(v___x_6145_);
if (v_isSharedCheck_6166_ == 0)
{
v___x_6161_ = v___x_6145_;
v_isShared_6162_ = v_isSharedCheck_6166_;
goto v_resetjp_6160_;
}
else
{
lean_inc(v_a_6159_);
lean_dec(v___x_6145_);
v___x_6161_ = lean_box(0);
v_isShared_6162_ = v_isSharedCheck_6166_;
goto v_resetjp_6160_;
}
v_resetjp_6160_:
{
lean_object* v___x_6164_; 
if (v_isShared_6162_ == 0)
{
v___x_6164_ = v___x_6161_;
goto v_reusejp_6163_;
}
else
{
lean_object* v_reuseFailAlloc_6165_; 
v_reuseFailAlloc_6165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6165_, 0, v_a_6159_);
v___x_6164_ = v_reuseFailAlloc_6165_;
goto v_reusejp_6163_;
}
v_reusejp_6163_:
{
return v___x_6164_;
}
}
}
v___jp_6138_:
{
lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6143_; 
v___x_6140_ = lean_st_ref_get(v___x_6137_);
lean_dec(v___x_6137_);
lean_dec(v___x_6140_);
v___x_6141_ = lean_box(v_a_6139_);
if (v_isShared_6120_ == 0)
{
lean_ctor_set_tag(v___x_6119_, 0);
lean_ctor_set(v___x_6119_, 0, v___x_6141_);
v___x_6143_ = v___x_6119_;
goto v_reusejp_6142_;
}
else
{
lean_object* v_reuseFailAlloc_6144_; 
v_reuseFailAlloc_6144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6144_, 0, v___x_6141_);
v___x_6143_ = v_reuseFailAlloc_6144_;
goto v_reusejp_6142_;
}
v_reusejp_6142_:
{
return v___x_6143_;
}
}
}
}
else
{
lean_dec(v_val_6116_);
lean_dec_ref(v_name_6096_);
lean_dec(v_pre_6108_);
lean_dec(v___x_6095_);
goto v___jp_6100_;
}
}
else
{
lean_dec(v___x_6115_);
lean_dec_ref(v_name_6096_);
lean_dec(v_pre_6108_);
lean_dec(v___x_6095_);
goto v___jp_6100_;
}
}
}
else
{
lean_dec(v_name_6096_);
lean_dec(v___x_6095_);
goto v___jp_6104_;
}
v___jp_6100_:
{
uint8_t v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; 
v___x_6101_ = 0;
v___x_6102_ = lean_box(v___x_6101_);
v___x_6103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6103_, 0, v___x_6102_);
return v___x_6103_;
}
v___jp_6104_:
{
uint8_t v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; 
v___x_6105_ = 0;
v___x_6106_ = lean_box(v___x_6105_);
v___x_6107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6107_, 0, v___x_6106_);
return v___x_6107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v___x_6168_, lean_object* v_name_6169_, lean_object* v___y_6170_, lean_object* v___y_6171_, lean_object* v___y_6172_){
_start:
{
lean_object* v_res_6173_; 
v_res_6173_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(v___x_6168_, v_name_6169_, v___y_6170_, v___y_6171_);
lean_dec(v___y_6171_);
lean_dec_ref(v___y_6170_);
return v_res_6173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_6177_; lean_object* v___x_6178_; 
v___f_6177_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_));
v___x_6178_ = l_Lean_registerReservedNameAction(v___f_6177_);
return v___x_6178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v_a_6179_){
_start:
{
lean_object* v_res_6180_; 
v_res_6180_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
return v_res_6180_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_genInjectivity = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_genInjectivity);
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Injective(builtin);
}
#ifdef __cplusplus
}
#endif
