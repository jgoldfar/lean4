// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Unfold
// Imports: public import Lean.Elab.PreDefinition.Basic public import Lean.Meta.Tactic.Simp.Types import Lean.Elab.PreDefinition.EqnsUtils import Lean.Meta.Tactic.Split import Lean.Meta.Tactic.Simp.Main import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.Refl import Init.Simproc
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
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Eqns_deltaLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_Simp_Result_addExtraArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_delta_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_SimprocsArray_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTarget(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_MVarId_refl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_Meta_isMatcherAppCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_instInhabitedSimpM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_altNumParams(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Split_splitMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Elab.PreDefinition.WF.Unfold"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Elab.PreDefinition.WF.Unfold.0.Lean.Elab.WF.rwFixEq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__5;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__6_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rwFixEq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(216, 129, 81, 44, 19, 93, 163, 124)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__8_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "expected saturated fixed-point application in "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__10;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "WellFounded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__12 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__12_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__12_value),LEAN_SCALAR_PTR_LITERAL(209, 126, 194, 128, 117, 36, 224, 78)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(196, 0, 160, 225, 119, 146, 123, 62)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(172, 133, 211, 204, 28, 206, 53, 233)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__15 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__15_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fix_eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__16 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__16_value),LEAN_SCALAR_PTR_LITERAL(69, 110, 168, 55, 181, 1, 128, 191)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__17 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__17_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__12_value),LEAN_SCALAR_PTR_LITERAL(209, 126, 194, 128, 117, 36, 224, 78)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__16_value),LEAN_SCALAR_PTR_LITERAL(173, 254, 168, 75, 13, 175, 61, 73)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "rwFixEq: cannot delta-reduce "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__20 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__21;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "_private.Lean.Elab.PreDefinition.WF.Unfold.0.Lean.Elab.WF.splitMatchOrCasesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: matcherInfo.numDiscrs = 1\n    "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "assertion violation: discr.isFVar\n    "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__4;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 55, 55, 9, 143, 73, 230, 150)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "_private.Lean.Elab.PreDefinition.WF.Unfold.0.Lean.Elab.WF.mkMatchArgPusher"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "assertion violation: altBodyType.isForall\n          "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__3(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unexpected matcher application for "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = ", motive is not a proposition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 17, 233, 98, 131, 1, 46, 199)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "β"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 67, 89, 131, 111, 186, 232, 248)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 178, 247, 241, 102, 42, 87, 174)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "v"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 108, 188, 174, 117, 112, 110, 72)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__4_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_arg_pusher"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 93, 110, 193, 138, 112, 221, 105)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Cannot create match arg pusher for "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_instInhabitedSimpM___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__1;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "matcherPushArg: expected equality:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "_private.Lean.Elab.PreDefinition.WF.Unfold.0.Lean.Elab.WF.matcherPushArg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "assertion violation: fExprType.isForall\n  "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(231, 60, 146, 67, 170, 35, 9, 50)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Unfold"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(107, 60, 73, 44, 205, 78, 214, 55)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(214, 186, 22, 181, 135, 89, 255, 35)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(127, 174, 101, 137, 114, 200, 12, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(33, 93, 149, 86, 9, 247, 3, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(177, 93, 103, 123, 232, 207, 165, 166)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "matcherPushArg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(225, 113, 246, 21, 195, 5, 15, 220)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 32, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 1, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 1, 1, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__0_value;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__9;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__10;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__11;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "failed to finish proof for equational theorem for `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__12 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "mkUnfoldEq defined "};
static const lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__2(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkUnfoldEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Cannot derive unfold equation "};
static const lean_object* l_Lean_Elab_WF_mkUnfoldEq___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_mkUnfoldEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkUnfoldEq___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "mkBinaryUnfoldEq defined "};
static const lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__1;
static const lean_ctor_object l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Failed to apply `"};
static const lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__4;
static const lean_string_object l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` to `"};
static const lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Cannot derive "};
static const lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__1;
static const lean_string_object l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " from "};
static const lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__2_value;
static lean_once_cell_t l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(77, 14, 28, 10, 226, 95, 51, 62)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 26, 119, 163, 229, 120, 15, 205)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 120, 226, 204, 0, 34, 252, 196)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(156, 125, 245, 250, 214, 234, 210, 86)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(150, 57, 156, 205, 162, 224, 99, 74)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(201, 193, 43, 137, 57, 227, 113, 35)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(41, 253, 77, 165, 5, 71, 84, 139)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(133, 113, 198, 34, 182, 132, 253, 5)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)(((size_t)(417821031) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(25, 31, 165, 159, 161, 54, 57, 238)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 149, 109, 35, 113, 129, 96, 22)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(118, 3, 149, 243, 10, 45, 240, 255)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(247, 102, 107, 61, 251, 143, 49, 202)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___f_8_; lean_object* v___x_5025__overap_9_; lean_object* v___x_10_; 
v___f_8_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___closed__0));
v___x_5025__overap_9_ = lean_panic_fn(v___f_8_, v_msg_2_);
v___x_10_ = lean_apply_5(v___x_5025__overap_9_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___boxed(lean_object* v_msg_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0(v_msg_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0(lean_object* v_k_18_, lean_object* v_b_19_, lean_object* v_c_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_apply_7(v_k_18_, v_b_19_, v_c_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, lean_box(0));
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0___boxed(lean_object* v_k_27_, lean_object* v_b_28_, lean_object* v_c_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0(v_k_27_, v_b_28_, v_c_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(lean_object* v_type_36_, lean_object* v_maxFVars_x3f_37_, lean_object* v_k_38_, uint8_t v_cleanupAnnotations_39_, uint8_t v_whnfType_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v___f_46_; lean_object* v___x_47_; 
v___f_46_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_46_, 0, v_k_38_);
v___x_47_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_36_, v_maxFVars_x3f_37_, v___f_46_, v_cleanupAnnotations_39_, v_whnfType_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
v_a_48_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_47_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_47_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
v_a_56_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_47_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_47_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___boxed(lean_object* v_type_64_, lean_object* v_maxFVars_x3f_65_, lean_object* v_k_66_, lean_object* v_cleanupAnnotations_67_, lean_object* v_whnfType_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_74_; uint8_t v_whnfType_boxed_75_; lean_object* v_res_76_; 
v_cleanupAnnotations_boxed_74_ = lean_unbox(v_cleanupAnnotations_67_);
v_whnfType_boxed_75_ = lean_unbox(v_whnfType_68_);
v_res_76_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v_type_64_, v_maxFVars_x3f_65_, v_k_66_, v_cleanupAnnotations_boxed_74_, v_whnfType_boxed_75_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1(lean_object* v_00_u03b1_77_, lean_object* v_type_78_, lean_object* v_maxFVars_x3f_79_, lean_object* v_k_80_, uint8_t v_cleanupAnnotations_81_, uint8_t v_whnfType_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v_type_78_, v_maxFVars_x3f_79_, v_k_80_, v_cleanupAnnotations_81_, v_whnfType_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___boxed(lean_object* v_00_u03b1_89_, lean_object* v_type_90_, lean_object* v_maxFVars_x3f_91_, lean_object* v_k_92_, lean_object* v_cleanupAnnotations_93_, lean_object* v_whnfType_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_100_; uint8_t v_whnfType_boxed_101_; lean_object* v_res_102_; 
v_cleanupAnnotations_boxed_100_ = lean_unbox(v_cleanupAnnotations_93_);
v_whnfType_boxed_101_ = lean_unbox(v_whnfType_94_);
v_res_102_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1(v_00_u03b1_89_, v_type_90_, v_maxFVars_x3f_91_, v_k_92_, v_cleanupAnnotations_boxed_100_, v_whnfType_boxed_101_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg(lean_object* v_mvarId_103_, lean_object* v_x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_103_, v_x_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
v_a_119_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_110_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_110_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg___boxed(lean_object* v_mvarId_127_, lean_object* v_x_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg(v_mvarId_127_, v_x_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4(lean_object* v_00_u03b1_135_, lean_object* v_mvarId_136_, lean_object* v_x_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg(v_mvarId_136_, v_x_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___boxed(lean_object* v_00_u03b1_144_, lean_object* v_mvarId_145_, lean_object* v_x_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4(v_00_u03b1_144_, v_mvarId_145_, v_x_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
return v_res_152_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__0(uint8_t v___x_153_, lean_object* v_x_154_){
_start:
{
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__0___boxed(lean_object* v___x_155_, lean_object* v_x_156_){
_start:
{
uint8_t v___x_7429__boxed_157_; uint8_t v_res_158_; lean_object* v_r_159_; 
v___x_7429__boxed_157_ = lean_unbox(v___x_155_);
v_res_158_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__0(v___x_7429__boxed_157_, v_x_156_);
lean_dec(v_x_156_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__1(lean_object* v___x_160_, lean_object* v___x_161_, uint8_t v___x_162_, uint8_t v___x_163_, lean_object* v_ys_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; lean_object* v___x_176_; 
v___x_171_ = l_Lean_Expr_appFn_x21(v___x_160_);
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_array_get_borrowed(v___x_161_, v_ys_164_, v___x_172_);
lean_inc(v___x_173_);
v___x_174_ = l_Lean_Expr_app___override(v___x_171_, v___x_173_);
v___x_175_ = 1;
v___x_176_ = l_Lean_Meta_mkLambdaFVars(v_ys_164_, v___x_174_, v___x_162_, v___x_163_, v___x_162_, v___x_163_, v___x_175_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__1___boxed(lean_object* v___x_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v___x_180_, lean_object* v_ys_181_, lean_object* v_x_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
uint8_t v___x_7437__boxed_188_; uint8_t v___x_7438__boxed_189_; lean_object* v_res_190_; 
v___x_7437__boxed_188_ = lean_unbox(v___x_179_);
v___x_7438__boxed_189_ = lean_unbox(v___x_180_);
v_res_190_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__1(v___x_177_, v___x_178_, v___x_7437__boxed_188_, v___x_7438__boxed_189_, v_ys_181_, v_x_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec_ref(v_x_182_);
lean_dec_ref(v_ys_181_);
lean_dec_ref(v___x_177_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4(lean_object* v_msgData_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v___x_197_; lean_object* v_env_198_; lean_object* v___x_199_; lean_object* v_mctx_200_; lean_object* v_lctx_201_; lean_object* v_options_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_197_ = lean_st_ref_get(v___y_195_);
v_env_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc_ref(v_env_198_);
lean_dec(v___x_197_);
v___x_199_ = lean_st_ref_get(v___y_193_);
v_mctx_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc_ref(v_mctx_200_);
lean_dec(v___x_199_);
v_lctx_201_ = lean_ctor_get(v___y_192_, 2);
v_options_202_ = lean_ctor_get(v___y_194_, 2);
lean_inc_ref(v_options_202_);
lean_inc_ref(v_lctx_201_);
v___x_203_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_203_, 0, v_env_198_);
lean_ctor_set(v___x_203_, 1, v_mctx_200_);
lean_ctor_set(v___x_203_, 2, v_lctx_201_);
lean_ctor_set(v___x_203_, 3, v_options_202_);
v___x_204_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v_msgData_191_);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4___boxed(lean_object* v_msgData_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4(v_msgData_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(lean_object* v_msg_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
lean_object* v_ref_219_; lean_object* v___x_220_; lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_229_; 
v_ref_219_ = lean_ctor_get(v___y_216_, 5);
v___x_220_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4(v_msg_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
v_a_221_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_229_ == 0)
{
v___x_223_ = v___x_220_;
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_220_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_229_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___x_227_; 
lean_inc(v_ref_219_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_ref_219_);
lean_ctor_set(v___x_225_, 1, v_a_221_);
if (v_isShared_224_ == 0)
{
lean_ctor_set_tag(v___x_223_, 1);
lean_ctor_set(v___x_223_, 0, v___x_225_);
v___x_227_ = v___x_223_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg___boxed(lean_object* v_msg_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(v_msg_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object* v_x_237_, lean_object* v_x_238_, lean_object* v_x_239_, lean_object* v_x_240_){
_start:
{
lean_object* v_ks_241_; lean_object* v_vs_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_266_; 
v_ks_241_ = lean_ctor_get(v_x_237_, 0);
v_vs_242_ = lean_ctor_get(v_x_237_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v_x_237_);
if (v_isSharedCheck_266_ == 0)
{
v___x_244_ = v_x_237_;
v_isShared_245_ = v_isSharedCheck_266_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_vs_242_);
lean_inc(v_ks_241_);
lean_dec(v_x_237_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_266_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_246_ = lean_array_get_size(v_ks_241_);
v___x_247_ = lean_nat_dec_lt(v_x_238_, v___x_246_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_251_; 
lean_dec(v_x_238_);
v___x_248_ = lean_array_push(v_ks_241_, v_x_239_);
v___x_249_ = lean_array_push(v_vs_242_, v_x_240_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v___x_249_);
lean_ctor_set(v___x_244_, 0, v___x_248_);
v___x_251_ = v___x_244_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
else
{
lean_object* v_k_x27_253_; uint8_t v___x_254_; 
v_k_x27_253_ = lean_array_fget_borrowed(v_ks_241_, v_x_238_);
v___x_254_ = l_Lean_instBEqMVarId_beq(v_x_239_, v_k_x27_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_256_; 
if (v_isShared_245_ == 0)
{
v___x_256_ = v___x_244_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_ks_241_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_vs_242_);
v___x_256_ = v_reuseFailAlloc_260_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lean_nat_add(v_x_238_, v___x_257_);
lean_dec(v_x_238_);
v_x_237_ = v___x_256_;
v_x_238_ = v___x_258_;
goto _start;
}
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_261_ = lean_array_fset(v_ks_241_, v_x_238_, v_x_239_);
v___x_262_ = lean_array_fset(v_vs_242_, v_x_238_, v_x_240_);
lean_dec(v_x_238_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v___x_262_);
lean_ctor_set(v___x_244_, 0, v___x_261_);
v___x_264_ = v___x_244_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7___redArg(lean_object* v_n_267_, lean_object* v_k_268_, lean_object* v_v_269_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_n_267_, v___x_270_, v_k_268_, v_v_269_);
return v___x_271_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_272_; size_t v___x_273_; size_t v___x_274_; 
v___x_272_ = ((size_t)5ULL);
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_shift_left(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_275_; size_t v___x_276_; size_t v___x_277_; 
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__0);
v___x_277_ = lean_usize_sub(v___x_276_, v___x_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(lean_object* v_x_279_, size_t v_x_280_, size_t v_x_281_, lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v_es_284_; size_t v___x_285_; size_t v___x_286_; size_t v___x_287_; size_t v___x_288_; lean_object* v_j_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v_es_284_ = lean_ctor_get(v_x_279_, 0);
v___x_285_ = ((size_t)5ULL);
v___x_286_ = ((size_t)1ULL);
v___x_287_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__1);
v___x_288_ = lean_usize_land(v_x_280_, v___x_287_);
v_j_289_ = lean_usize_to_nat(v___x_288_);
v___x_290_ = lean_array_get_size(v_es_284_);
v___x_291_ = lean_nat_dec_lt(v_j_289_, v___x_290_);
if (v___x_291_ == 0)
{
lean_dec(v_j_289_);
lean_dec(v_x_283_);
lean_dec(v_x_282_);
return v_x_279_;
}
else
{
lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_328_; 
lean_inc_ref(v_es_284_);
v_isSharedCheck_328_ = !lean_is_exclusive(v_x_279_);
if (v_isSharedCheck_328_ == 0)
{
lean_object* v_unused_329_; 
v_unused_329_ = lean_ctor_get(v_x_279_, 0);
lean_dec(v_unused_329_);
v___x_293_ = v_x_279_;
v_isShared_294_ = v_isSharedCheck_328_;
goto v_resetjp_292_;
}
else
{
lean_dec(v_x_279_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_328_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v_v_295_; lean_object* v___x_296_; lean_object* v_xs_x27_297_; lean_object* v___y_299_; 
v_v_295_ = lean_array_fget(v_es_284_, v_j_289_);
v___x_296_ = lean_box(0);
v_xs_x27_297_ = lean_array_fset(v_es_284_, v_j_289_, v___x_296_);
switch(lean_obj_tag(v_v_295_))
{
case 0:
{
lean_object* v_key_304_; lean_object* v_val_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_315_; 
v_key_304_ = lean_ctor_get(v_v_295_, 0);
v_val_305_ = lean_ctor_get(v_v_295_, 1);
v_isSharedCheck_315_ = !lean_is_exclusive(v_v_295_);
if (v_isSharedCheck_315_ == 0)
{
v___x_307_ = v_v_295_;
v_isShared_308_ = v_isSharedCheck_315_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_val_305_);
lean_inc(v_key_304_);
lean_dec(v_v_295_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_315_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
uint8_t v___x_309_; 
v___x_309_ = l_Lean_instBEqMVarId_beq(v_x_282_, v_key_304_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; lean_object* v___x_311_; 
lean_del_object(v___x_307_);
v___x_310_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_304_, v_val_305_, v_x_282_, v_x_283_);
v___x_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
v___y_299_ = v___x_311_;
goto v___jp_298_;
}
else
{
lean_object* v___x_313_; 
lean_dec(v_val_305_);
lean_dec(v_key_304_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 1, v_x_283_);
lean_ctor_set(v___x_307_, 0, v_x_282_);
v___x_313_ = v___x_307_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_x_282_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_x_283_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
v___y_299_ = v___x_313_;
goto v___jp_298_;
}
}
}
}
case 1:
{
lean_object* v_node_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_326_; 
v_node_316_ = lean_ctor_get(v_v_295_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_v_295_);
if (v_isSharedCheck_326_ == 0)
{
v___x_318_ = v_v_295_;
v_isShared_319_ = v_isSharedCheck_326_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_node_316_);
lean_dec(v_v_295_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_326_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_324_; 
v___x_320_ = lean_usize_shift_right(v_x_280_, v___x_285_);
v___x_321_ = lean_usize_add(v_x_281_, v___x_286_);
v___x_322_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(v_node_316_, v___x_320_, v___x_321_, v_x_282_, v_x_283_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_322_);
v___x_324_ = v___x_318_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
v___y_299_ = v___x_324_;
goto v___jp_298_;
}
}
}
default: 
{
lean_object* v___x_327_; 
v___x_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_327_, 0, v_x_282_);
lean_ctor_set(v___x_327_, 1, v_x_283_);
v___y_299_ = v___x_327_;
goto v___jp_298_;
}
}
v___jp_298_:
{
lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_300_ = lean_array_fset(v_xs_x27_297_, v_j_289_, v___y_299_);
lean_dec(v_j_289_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v___x_300_);
v___x_302_ = v___x_293_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
else
{
lean_object* v_ks_330_; lean_object* v_vs_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_351_; 
v_ks_330_ = lean_ctor_get(v_x_279_, 0);
v_vs_331_ = lean_ctor_get(v_x_279_, 1);
v_isSharedCheck_351_ = !lean_is_exclusive(v_x_279_);
if (v_isSharedCheck_351_ == 0)
{
v___x_333_ = v_x_279_;
v_isShared_334_ = v_isSharedCheck_351_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_vs_331_);
lean_inc(v_ks_330_);
lean_dec(v_x_279_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_351_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_ks_330_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_vs_331_);
v___x_336_ = v_reuseFailAlloc_350_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v_newNode_337_; uint8_t v___y_339_; size_t v___x_345_; uint8_t v___x_346_; 
v_newNode_337_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7___redArg(v___x_336_, v_x_282_, v_x_283_);
v___x_345_ = ((size_t)7ULL);
v___x_346_ = lean_usize_dec_le(v___x_345_, v_x_281_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_347_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_337_);
v___x_348_ = lean_unsigned_to_nat(4u);
v___x_349_ = lean_nat_dec_lt(v___x_347_, v___x_348_);
lean_dec(v___x_347_);
v___y_339_ = v___x_349_;
goto v___jp_338_;
}
else
{
v___y_339_ = v___x_346_;
goto v___jp_338_;
}
v___jp_338_:
{
if (v___y_339_ == 0)
{
lean_object* v_ks_340_; lean_object* v_vs_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_ks_340_ = lean_ctor_get(v_newNode_337_, 0);
lean_inc_ref(v_ks_340_);
v_vs_341_ = lean_ctor_get(v_newNode_337_, 1);
lean_inc_ref(v_vs_341_);
lean_dec_ref(v_newNode_337_);
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___closed__2);
v___x_344_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg(v_x_281_, v_ks_340_, v_vs_341_, v___x_342_, v___x_343_);
lean_dec_ref(v_vs_341_);
lean_dec_ref(v_ks_340_);
return v___x_344_;
}
else
{
return v_newNode_337_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg(size_t v_depth_352_, lean_object* v_keys_353_, lean_object* v_vals_354_, lean_object* v_i_355_, lean_object* v_entries_356_){
_start:
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = lean_array_get_size(v_keys_353_);
v___x_358_ = lean_nat_dec_lt(v_i_355_, v___x_357_);
if (v___x_358_ == 0)
{
lean_dec(v_i_355_);
return v_entries_356_;
}
else
{
lean_object* v_k_359_; lean_object* v_v_360_; uint64_t v___x_361_; size_t v_h_362_; size_t v___x_363_; lean_object* v___x_364_; size_t v___x_365_; size_t v___x_366_; size_t v___x_367_; size_t v_h_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_k_359_ = lean_array_fget_borrowed(v_keys_353_, v_i_355_);
v_v_360_ = lean_array_fget_borrowed(v_vals_354_, v_i_355_);
v___x_361_ = l_Lean_instHashableMVarId_hash(v_k_359_);
v_h_362_ = lean_uint64_to_usize(v___x_361_);
v___x_363_ = ((size_t)5ULL);
v___x_364_ = lean_unsigned_to_nat(1u);
v___x_365_ = ((size_t)1ULL);
v___x_366_ = lean_usize_sub(v_depth_352_, v___x_365_);
v___x_367_ = lean_usize_mul(v___x_363_, v___x_366_);
v_h_368_ = lean_usize_shift_right(v_h_362_, v___x_367_);
v___x_369_ = lean_nat_add(v_i_355_, v___x_364_);
lean_dec(v_i_355_);
lean_inc(v_v_360_);
lean_inc(v_k_359_);
v___x_370_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(v_entries_356_, v_h_368_, v_depth_352_, v_k_359_, v_v_360_);
v_i_355_ = v___x_369_;
v_entries_356_ = v___x_370_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_372_, lean_object* v_keys_373_, lean_object* v_vals_374_, lean_object* v_i_375_, lean_object* v_entries_376_){
_start:
{
size_t v_depth_boxed_377_; lean_object* v_res_378_; 
v_depth_boxed_377_ = lean_unbox_usize(v_depth_372_);
lean_dec(v_depth_372_);
v_res_378_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_boxed_377_, v_keys_373_, v_vals_374_, v_i_375_, v_entries_376_);
lean_dec_ref(v_vals_374_);
lean_dec_ref(v_keys_373_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_x_379_, lean_object* v_x_380_, lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v_x_383_){
_start:
{
size_t v_x_7627__boxed_384_; size_t v_x_7628__boxed_385_; lean_object* v_res_386_; 
v_x_7627__boxed_384_ = lean_unbox_usize(v_x_380_);
lean_dec(v_x_380_);
v_x_7628__boxed_385_ = lean_unbox_usize(v_x_381_);
lean_dec(v_x_381_);
v_res_386_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(v_x_379_, v_x_7627__boxed_384_, v_x_7628__boxed_385_, v_x_382_, v_x_383_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2___redArg(lean_object* v_x_387_, lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
uint64_t v___x_390_; size_t v___x_391_; size_t v___x_392_; lean_object* v___x_393_; 
v___x_390_ = l_Lean_instHashableMVarId_hash(v_x_388_);
v___x_391_ = lean_uint64_to_usize(v___x_390_);
v___x_392_ = ((size_t)1ULL);
v___x_393_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(v_x_387_, v___x_391_, v___x_392_, v_x_388_, v_x_389_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg(lean_object* v_mvarId_394_, lean_object* v_val_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___x_398_; lean_object* v_mctx_399_; lean_object* v_cache_400_; lean_object* v_zetaDeltaFVarIds_401_; lean_object* v_postponed_402_; lean_object* v_diag_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_430_; 
v___x_398_ = lean_st_ref_take(v___y_396_);
v_mctx_399_ = lean_ctor_get(v___x_398_, 0);
v_cache_400_ = lean_ctor_get(v___x_398_, 1);
v_zetaDeltaFVarIds_401_ = lean_ctor_get(v___x_398_, 2);
v_postponed_402_ = lean_ctor_get(v___x_398_, 3);
v_diag_403_ = lean_ctor_get(v___x_398_, 4);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_430_ == 0)
{
v___x_405_ = v___x_398_;
v_isShared_406_ = v_isSharedCheck_430_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_diag_403_);
lean_inc(v_postponed_402_);
lean_inc(v_zetaDeltaFVarIds_401_);
lean_inc(v_cache_400_);
lean_inc(v_mctx_399_);
lean_dec(v___x_398_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_430_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v_depth_407_; lean_object* v_levelAssignDepth_408_; lean_object* v_mvarCounter_409_; lean_object* v_lDepth_410_; lean_object* v_decls_411_; lean_object* v_userNames_412_; lean_object* v_lAssignment_413_; lean_object* v_eAssignment_414_; lean_object* v_dAssignment_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_429_; 
v_depth_407_ = lean_ctor_get(v_mctx_399_, 0);
v_levelAssignDepth_408_ = lean_ctor_get(v_mctx_399_, 1);
v_mvarCounter_409_ = lean_ctor_get(v_mctx_399_, 2);
v_lDepth_410_ = lean_ctor_get(v_mctx_399_, 3);
v_decls_411_ = lean_ctor_get(v_mctx_399_, 4);
v_userNames_412_ = lean_ctor_get(v_mctx_399_, 5);
v_lAssignment_413_ = lean_ctor_get(v_mctx_399_, 6);
v_eAssignment_414_ = lean_ctor_get(v_mctx_399_, 7);
v_dAssignment_415_ = lean_ctor_get(v_mctx_399_, 8);
v_isSharedCheck_429_ = !lean_is_exclusive(v_mctx_399_);
if (v_isSharedCheck_429_ == 0)
{
v___x_417_ = v_mctx_399_;
v_isShared_418_ = v_isSharedCheck_429_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_dAssignment_415_);
lean_inc(v_eAssignment_414_);
lean_inc(v_lAssignment_413_);
lean_inc(v_userNames_412_);
lean_inc(v_decls_411_);
lean_inc(v_lDepth_410_);
lean_inc(v_mvarCounter_409_);
lean_inc(v_levelAssignDepth_408_);
lean_inc(v_depth_407_);
lean_dec(v_mctx_399_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_429_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_419_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2___redArg(v_eAssignment_414_, v_mvarId_394_, v_val_395_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 7, v___x_419_);
v___x_421_ = v___x_417_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_depth_407_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_levelAssignDepth_408_);
lean_ctor_set(v_reuseFailAlloc_428_, 2, v_mvarCounter_409_);
lean_ctor_set(v_reuseFailAlloc_428_, 3, v_lDepth_410_);
lean_ctor_set(v_reuseFailAlloc_428_, 4, v_decls_411_);
lean_ctor_set(v_reuseFailAlloc_428_, 5, v_userNames_412_);
lean_ctor_set(v_reuseFailAlloc_428_, 6, v_lAssignment_413_);
lean_ctor_set(v_reuseFailAlloc_428_, 7, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_428_, 8, v_dAssignment_415_);
v___x_421_ = v_reuseFailAlloc_428_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_423_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_421_);
v___x_423_ = v___x_405_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_cache_400_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_zetaDeltaFVarIds_401_);
lean_ctor_set(v_reuseFailAlloc_427_, 3, v_postponed_402_);
lean_ctor_set(v_reuseFailAlloc_427_, 4, v_diag_403_);
v___x_423_ = v_reuseFailAlloc_427_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_st_ref_set(v___y_396_, v___x_423_);
v___x_425_ = lean_box(0);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg___boxed(lean_object* v_mvarId_431_, lean_object* v_val_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg(v_mvarId_431_, v_val_432_, v___y_433_);
lean_dec(v___y_433_);
return v_res_435_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__5(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_442_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__4));
v___x_443_ = lean_unsigned_to_nat(41u);
v___x_444_ = lean_unsigned_to_nat(34u);
v___x_445_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__3));
v___x_446_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2));
v___x_447_ = l_mkPanicMessageWithDecl(v___x_446_, v___x_445_, v___x_444_, v___x_443_, v___x_442_);
return v___x_447_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__10(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__9));
v___x_455_ = l_Lean_stringToMessageData(v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18(void){
_start:
{
lean_object* v___x_470_; lean_object* v_dummy_471_; 
v___x_470_ = lean_box(0);
v_dummy_471_ = l_Lean_Expr_sort___override(v___x_470_);
return v_dummy_471_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__21(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__20));
v___x_478_ = l_Lean_stringToMessageData(v___x_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2(lean_object* v_mvarId_479_, lean_object* v___x_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v___x_486_; 
lean_inc(v___y_484_);
lean_inc_ref(v___y_483_);
lean_inc(v___y_482_);
lean_inc_ref(v___y_481_);
lean_inc(v_mvarId_479_);
v___x_486_ = l_Lean_MVarId_getType_x27(v_mvarId_479_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref(v___x_486_);
v___x_488_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__1));
v___x_489_ = lean_unsigned_to_nat(3u);
v___x_490_ = l_Lean_Expr_isAppOfArity(v_a_487_, v___x_488_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
lean_dec(v_a_487_);
lean_dec_ref(v___x_480_);
lean_dec(v_mvarId_479_);
v___x_491_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__5);
v___x_492_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0(v___x_491_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
return v___x_492_;
}
else
{
lean_object* v___x_493_; lean_object* v___f_494_; lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; lean_object* v___x_498_; 
v___x_493_ = lean_box(v___x_490_);
v___f_494_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__0___boxed), 2, 1);
lean_closure_set(v___f_494_, 0, v___x_493_);
v___x_495_ = l_Lean_Expr_appFn_x21(v_a_487_);
v___x_496_ = l_Lean_Expr_appArg_x21(v___x_495_);
lean_dec_ref(v___x_495_);
v___x_497_ = 0;
lean_inc_ref(v___x_496_);
v___x_498_ = l_Lean_Meta_delta_x3f(v___x_496_, v___f_494_, v___x_497_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref(v___x_498_);
if (lean_obj_tag(v_a_499_) == 1)
{
lean_object* v_val_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_653_; 
v_val_500_ = lean_ctor_get(v_a_499_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v_a_499_);
if (v_isSharedCheck_653_ == 0)
{
v___x_502_ = v_a_499_;
v_isShared_503_ = v_isSharedCheck_653_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_val_500_);
lean_dec(v_a_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_653_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; 
lean_inc(v_val_500_);
v___x_504_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_val_500_, v___y_482_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___f_508_; lean_object* v___x_509_; lean_object* v_h_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___y_588_; lean_object* v___x_606_; uint8_t v___x_607_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_505_);
lean_dec_ref(v___x_504_);
v___x_506_ = lean_box(v___x_497_);
v___x_507_ = lean_box(v___x_490_);
v___f_508_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__1___boxed), 11, 4);
lean_closure_set(v___f_508_, 0, v___x_496_);
lean_closure_set(v___f_508_, 1, v___x_480_);
lean_closure_set(v___f_508_, 2, v___x_506_);
lean_closure_set(v___f_508_, 3, v___x_507_);
v___x_509_ = l_Lean_Expr_appArg_x21(v_a_487_);
lean_dec(v_a_487_);
v___x_606_ = l_Lean_Expr_cleanupAnnotations(v_a_505_);
v___x_607_ = l_Lean_Expr_isApp(v___x_606_);
if (v___x_607_ == 0)
{
lean_dec_ref(v___x_606_);
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = l_Lean_Expr_appFnCleanup___redArg(v___x_606_);
v___x_609_ = l_Lean_Expr_isApp(v___x_608_);
if (v___x_609_ == 0)
{
lean_dec_ref(v___x_608_);
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_610_ = l_Lean_Expr_appFnCleanup___redArg(v___x_608_);
v___x_611_ = l_Lean_Expr_isApp(v___x_610_);
if (v___x_611_ == 0)
{
lean_dec_ref(v___x_610_);
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = l_Lean_Expr_appFnCleanup___redArg(v___x_610_);
v___x_613_ = l_Lean_Expr_isApp(v___x_612_);
if (v___x_613_ == 0)
{
lean_dec_ref(v___x_612_);
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = l_Lean_Expr_appFnCleanup___redArg(v___x_612_);
v___x_615_ = l_Lean_Expr_isApp(v___x_614_);
if (v___x_615_ == 0)
{
lean_dec_ref(v___x_614_);
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_616_ = l_Lean_Expr_appFnCleanup___redArg(v___x_614_);
v___x_617_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__14));
v___x_618_ = l_Lean_Expr_isConstOf(v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
uint8_t v___x_619_; 
v___x_619_ = l_Lean_Expr_isApp(v___x_616_);
if (v___x_619_ == 0)
{
lean_dec_ref(v___x_616_);
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_620_ = l_Lean_Expr_appFnCleanup___redArg(v___x_616_);
v___x_621_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__15));
v___x_622_ = l_Lean_Expr_isConstOf(v___x_620_, v___x_621_);
lean_dec_ref(v___x_620_);
if (v___x_622_ == 0)
{
v___y_585_ = v___y_481_;
v___y_586_ = v___y_482_;
v___y_587_ = v___y_483_;
v___y_588_ = v___y_484_;
goto v___jp_584_;
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v_dummy_627_; lean_object* v_nargs_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
lean_del_object(v___x_502_);
v___x_623_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__17));
v___x_624_ = l_Lean_Expr_getAppFn(v_val_500_);
v___x_625_ = l_Lean_Expr_constLevels_x21(v___x_624_);
lean_dec_ref(v___x_624_);
v___x_626_ = l_Lean_mkConst(v___x_623_, v___x_625_);
v_dummy_627_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18);
v_nargs_628_ = l_Lean_Expr_getAppNumArgs(v_val_500_);
lean_inc(v_nargs_628_);
v___x_629_ = lean_mk_array(v_nargs_628_, v_dummy_627_);
v___x_630_ = lean_unsigned_to_nat(1u);
v___x_631_ = lean_nat_sub(v_nargs_628_, v___x_630_);
lean_dec(v_nargs_628_);
lean_inc(v_val_500_);
v___x_632_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_500_, v___x_629_, v___x_631_);
v___x_633_ = l_Lean_mkAppN(v___x_626_, v___x_632_);
lean_dec_ref(v___x_632_);
v_h_511_ = v___x_633_;
v___y_512_ = v___y_481_;
v___y_513_ = v___y_482_;
v___y_514_ = v___y_483_;
v___y_515_ = v___y_484_;
goto v___jp_510_;
}
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v_dummy_638_; lean_object* v_nargs_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
lean_dec_ref(v___x_616_);
lean_del_object(v___x_502_);
v___x_634_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__19));
v___x_635_ = l_Lean_Expr_getAppFn(v_val_500_);
v___x_636_ = l_Lean_Expr_constLevels_x21(v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = l_Lean_mkConst(v___x_634_, v___x_636_);
v_dummy_638_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18);
v_nargs_639_ = l_Lean_Expr_getAppNumArgs(v_val_500_);
lean_inc(v_nargs_639_);
v___x_640_ = lean_mk_array(v_nargs_639_, v_dummy_638_);
v___x_641_ = lean_unsigned_to_nat(1u);
v___x_642_ = lean_nat_sub(v_nargs_639_, v___x_641_);
lean_dec(v_nargs_639_);
lean_inc(v_val_500_);
v___x_643_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_500_, v___x_640_, v___x_642_);
v___x_644_ = l_Lean_mkAppN(v___x_637_, v___x_643_);
lean_dec_ref(v___x_643_);
v_h_511_ = v___x_644_;
v___y_512_ = v___y_481_;
v___y_513_ = v___y_482_;
v___y_514_ = v___y_483_;
v___y_515_ = v___y_484_;
goto v___jp_510_;
}
}
}
}
}
}
v___jp_510_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_516_ = l_Lean_Expr_appFn_x21(v_val_500_);
v___x_517_ = l_Lean_Expr_appArg_x21(v___x_516_);
lean_dec_ref(v___x_516_);
v___x_518_ = l_Lean_Expr_appArg_x21(v_val_500_);
lean_dec(v_val_500_);
lean_inc_ref(v___x_518_);
lean_inc_ref(v___x_517_);
v___x_519_ = l_Lean_Expr_app___override(v___x_517_, v___x_518_);
lean_inc(v___y_515_);
lean_inc_ref(v___y_514_);
lean_inc(v___y_513_);
lean_inc_ref(v___y_512_);
v___x_520_ = lean_infer_type(v___x_519_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref(v___x_520_);
v___x_522_ = l_Lean_Expr_bindingDomain_x21(v_a_521_);
lean_dec(v_a_521_);
v___x_523_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__6));
lean_inc(v___y_515_);
lean_inc_ref(v___y_514_);
lean_inc(v___y_513_);
lean_inc_ref(v___y_512_);
v___x_524_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v___x_522_, v___x_523_, v___f_508_, v___x_497_, v___x_497_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref(v___x_524_);
v___x_526_ = l_Lean_mkAppB(v___x_517_, v___x_518_, v_a_525_);
lean_inc(v___y_515_);
lean_inc_ref(v___y_514_);
lean_inc(v___y_513_);
lean_inc_ref(v___y_512_);
v___x_527_ = l_Lean_Meta_mkEq(v___x_526_, v___x_509_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref(v___x_527_);
v___x_529_ = lean_box(0);
lean_inc_ref(v___y_512_);
v___x_530_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_528_, v___x_529_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_532_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref(v___x_530_);
lean_inc(v___y_513_);
lean_inc(v_a_531_);
v___x_532_ = l_Lean_Meta_mkEqTrans(v_h_511_, v_a_531_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_542_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
lean_dec_ref(v___x_532_);
v___x_534_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg(v_mvarId_479_, v_a_533_, v___y_513_);
lean_dec(v___y_513_);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_542_ == 0)
{
lean_object* v_unused_543_; 
v_unused_543_ = lean_ctor_get(v___x_534_, 0);
lean_dec(v_unused_543_);
v___x_536_ = v___x_534_;
v_isShared_537_ = v_isSharedCheck_542_;
goto v_resetjp_535_;
}
else
{
lean_dec(v___x_534_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_542_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_538_ = l_Lean_Expr_mvarId_x21(v_a_531_);
lean_dec(v_a_531_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v___x_538_);
v___x_540_ = v___x_536_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
lean_dec(v_a_531_);
lean_dec(v___y_513_);
lean_dec(v_mvarId_479_);
v_a_544_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_532_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_532_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec_ref(v_h_511_);
lean_dec(v_mvarId_479_);
v_a_552_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_530_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_530_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec_ref(v_h_511_);
lean_dec(v_mvarId_479_);
v_a_560_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_527_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_527_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec_ref(v___x_518_);
lean_dec_ref(v___x_517_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v___x_509_);
lean_dec(v_mvarId_479_);
v_a_568_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_524_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_524_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec_ref(v___x_518_);
lean_dec_ref(v___x_517_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v___x_509_);
lean_dec_ref(v___f_508_);
lean_dec(v_mvarId_479_);
v_a_576_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_520_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_520_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
v___jp_584_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_589_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__8));
v___x_590_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__10, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__10);
lean_inc(v_val_500_);
v___x_591_ = l_Lean_MessageData_ofExpr(v_val_500_);
v___x_592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v___x_592_);
v___x_594_ = v___x_502_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_605_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; 
lean_inc(v_mvarId_479_);
v___x_595_ = l_Lean_Meta_throwTacticEx___redArg(v___x_589_, v_mvarId_479_, v___x_594_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref(v___x_595_);
v_h_511_ = v_a_596_;
v___y_512_ = v___y_585_;
v___y_513_ = v___y_586_;
v___y_514_ = v___y_587_;
v___y_515_ = v___y_588_;
goto v___jp_510_;
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec_ref(v___x_509_);
lean_dec_ref(v___f_508_);
lean_dec(v_val_500_);
lean_dec(v_mvarId_479_);
v_a_597_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_595_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_595_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_del_object(v___x_502_);
lean_dec(v_val_500_);
lean_dec_ref(v___x_496_);
lean_dec(v_a_487_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec_ref(v___x_480_);
lean_dec(v_mvarId_479_);
v_a_645_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_504_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_504_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
else
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
lean_dec(v_a_499_);
lean_dec(v_a_487_);
lean_dec_ref(v___x_480_);
lean_dec(v_mvarId_479_);
v___x_654_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__21, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__21);
v___x_655_ = l_Lean_MessageData_ofExpr(v___x_496_);
v___x_656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_654_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(v___x_656_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
return v___x_657_;
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec_ref(v___x_496_);
lean_dec(v_a_487_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec_ref(v___x_480_);
lean_dec(v_mvarId_479_);
v_a_658_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_498_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_498_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec_ref(v___x_480_);
lean_dec(v_mvarId_479_);
v_a_666_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_486_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_486_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___boxed(lean_object* v_mvarId_674_, lean_object* v___x_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2(v_mvarId_674_, v___x_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq(lean_object* v_mvarId_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_){
_start:
{
lean_object* v___x_688_; lean_object* v___f_689_; lean_object* v___x_690_; 
v___x_688_ = l_Lean_instInhabitedExpr;
lean_inc(v_mvarId_682_);
v___f_689_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___boxed), 7, 2);
lean_closure_set(v___f_689_, 0, v_mvarId_682_);
lean_closure_set(v___f_689_, 1, v___x_688_);
v___x_690_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__4___redArg(v_mvarId_682_, v___f_689_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___boxed(lean_object* v_mvarId_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq(v_mvarId_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2(lean_object* v_mvarId_698_, lean_object* v_val_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___redArg(v_mvarId_698_, v_val_699_, v___y_701_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2___boxed(lean_object* v_mvarId_706_, lean_object* v_val_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2(v_mvarId_706_, v_val_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3(lean_object* v_00_u03b1_714_, lean_object* v_msg_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(v_msg_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___boxed(lean_object* v_00_u03b1_722_, lean_object* v_msg_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3(v_00_u03b1_722_, v_msg_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2(lean_object* v_00_u03b2_730_, lean_object* v_x_731_, lean_object* v_x_732_, lean_object* v_x_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2___redArg(v_x_731_, v_x_732_, v_x_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_735_, lean_object* v_x_736_, size_t v_x_737_, size_t v_x_738_, lean_object* v_x_739_, lean_object* v_x_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___redArg(v_x_736_, v_x_737_, v_x_738_, v_x_739_, v_x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_742_, lean_object* v_x_743_, lean_object* v_x_744_, lean_object* v_x_745_, lean_object* v_x_746_, lean_object* v_x_747_){
_start:
{
size_t v_x_8424__boxed_748_; size_t v_x_8425__boxed_749_; lean_object* v_res_750_; 
v_x_8424__boxed_748_ = lean_unbox_usize(v_x_744_);
lean_dec(v_x_744_);
v_x_8425__boxed_749_ = lean_unbox_usize(v_x_745_);
lean_dec(v_x_745_);
v_res_750_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4(v_00_u03b2_742_, v_x_743_, v_x_8424__boxed_748_, v_x_8425__boxed_749_, v_x_746_, v_x_747_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_751_, lean_object* v_n_752_, lean_object* v_k_753_, lean_object* v_v_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7___redArg(v_n_752_, v_k_753_, v_v_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_756_, size_t v_depth_757_, lean_object* v_keys_758_, lean_object* v_vals_759_, lean_object* v_heq_760_, lean_object* v_i_761_, lean_object* v_entries_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_757_, v_keys_758_, v_vals_759_, v_i_761_, v_entries_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_764_, lean_object* v_depth_765_, lean_object* v_keys_766_, lean_object* v_vals_767_, lean_object* v_heq_768_, lean_object* v_i_769_, lean_object* v_entries_770_){
_start:
{
size_t v_depth_boxed_771_; lean_object* v_res_772_; 
v_depth_boxed_771_ = lean_unbox_usize(v_depth_765_);
lean_dec(v_depth_765_);
v_res_772_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__8(v_00_u03b2_764_, v_depth_boxed_771_, v_keys_766_, v_vals_767_, v_heq_768_, v_i_769_, v_entries_770_);
lean_dec_ref(v_vals_767_);
lean_dec_ref(v_keys_766_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object* v_00_u03b2_773_, lean_object* v_x_774_, lean_object* v_x_775_, lean_object* v_x_776_, lean_object* v_x_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_x_774_, v_x_775_, v_x_776_, v_x_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg(lean_object* v_e_779_, lean_object* v_maxFVars_780_, lean_object* v_k_781_, uint8_t v_cleanupAnnotations_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v___f_788_; uint8_t v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___f_788_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_788_, 0, v_k_781_);
v___x_789_ = 1;
v___x_790_ = 0;
v___x_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_791_, 0, v_maxFVars_780_);
v___x_792_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_779_, v___x_789_, v___x_790_, v___x_789_, v___x_790_, v___x_791_, v___f_788_, v_cleanupAnnotations_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec_ref(v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_792_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_792_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
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
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v_a_801_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_792_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_792_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg___boxed(lean_object* v_e_809_, lean_object* v_maxFVars_810_, lean_object* v_k_811_, lean_object* v_cleanupAnnotations_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_818_; lean_object* v_res_819_; 
v_cleanupAnnotations_boxed_818_ = lean_unbox(v_cleanupAnnotations_812_);
v_res_819_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg(v_e_809_, v_maxFVars_810_, v_k_811_, v_cleanupAnnotations_boxed_818_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0(lean_object* v_00_u03b1_820_, lean_object* v_e_821_, lean_object* v_maxFVars_822_, lean_object* v_k_823_, uint8_t v_cleanupAnnotations_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg(v_e_821_, v_maxFVars_822_, v_k_823_, v_cleanupAnnotations_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___boxed(lean_object* v_00_u03b1_831_, lean_object* v_e_832_, lean_object* v_maxFVars_833_, lean_object* v_k_834_, lean_object* v_cleanupAnnotations_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_841_; lean_object* v_res_842_; 
v_cleanupAnnotations_boxed_841_ = lean_unbox(v_cleanupAnnotations_835_);
v_res_842_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0(v_00_u03b1_831_, v_e_832_, v_maxFVars_833_, v_k_834_, v_cleanupAnnotations_boxed_841_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___lam__0(lean_object* v___x_843_, lean_object* v_xs_844_, lean_object* v_t_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
uint8_t v___y_855_; lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_878_ = lean_array_get_size(v_xs_844_);
v___x_879_ = lean_nat_dec_eq(v___x_878_, v___x_843_);
if (v___x_879_ == 0)
{
v___y_855_ = v___x_879_;
goto v___jp_854_;
}
else
{
uint8_t v___x_880_; 
v___x_880_ = l_Lean_Expr_isForall(v_t_845_);
v___y_855_ = v___x_880_;
goto v___jp_854_;
}
v___jp_851_:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_box(0);
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
v___jp_854_:
{
if (v___y_855_ == 0)
{
goto v___jp_851_;
}
else
{
lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_856_ = l_Lean_Expr_bindingBody_x21(v_t_845_);
v___x_857_ = lean_unsigned_to_nat(0u);
v___x_858_ = lean_expr_has_loose_bvar(v___x_856_, v___x_857_);
if (v___x_858_ == 0)
{
uint8_t v___x_859_; lean_object* v___x_860_; 
v___x_859_ = 1;
v___x_860_ = l_Lean_Meta_mkLambdaFVars(v_xs_844_, v___x_856_, v___x_858_, v___y_855_, v___x_858_, v___y_855_, v___x_859_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_869_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_869_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_869_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_869_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_865_, 0, v_a_861_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_865_);
v___x_867_ = v___x_863_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
v_a_870_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_860_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_860_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_dec_ref(v___x_856_);
goto v___jp_851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___lam__0___boxed(lean_object* v___x_881_, lean_object* v_xs_882_, lean_object* v_t_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___lam__0(v___x_881_, v_xs_882_, v_t_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec_ref(v_t_883_);
lean_dec_ref(v_xs_882_);
lean_dec(v___x_881_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive(lean_object* v_matcherApp_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_motive_896_; lean_object* v_discrs_897_; lean_object* v___x_898_; lean_object* v___f_899_; uint8_t v___x_900_; lean_object* v___x_901_; 
v_motive_896_ = lean_ctor_get(v_matcherApp_890_, 4);
lean_inc_ref(v_motive_896_);
v_discrs_897_ = lean_ctor_get(v_matcherApp_890_, 5);
lean_inc_ref(v_discrs_897_);
lean_dec_ref(v_matcherApp_890_);
v___x_898_ = lean_array_get_size(v_discrs_897_);
lean_dec_ref(v_discrs_897_);
v___f_899_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___lam__0___boxed), 8, 1);
lean_closure_set(v___f_899_, 0, v___x_898_);
v___x_900_ = 0;
v___x_901_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg(v_motive_896_, v___x_898_, v___f_899_, v___x_900_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive___boxed(lean_object* v_matcherApp_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive(v_matcherApp_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg(lean_object* v_e_909_, lean_object* v___y_910_){
_start:
{
lean_object* v___x_912_; lean_object* v_env_913_; uint8_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_912_ = lean_st_ref_get(v___y_910_);
v_env_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc_ref(v_env_913_);
lean_dec(v___x_912_);
v___x_914_ = l_Lean_Meta_isMatcherAppCore(v_env_913_, v_e_909_);
v___x_915_ = lean_box(v___x_914_);
v___x_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg___boxed(lean_object* v_e_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg(v_e_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v_e_917_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0(lean_object* v_e_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg(v_e_921_, v___y_925_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___boxed(lean_object* v_e_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0(v_e_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec_ref(v_e_928_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1(lean_object* v_msg_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___f_941_; lean_object* v___x_868__overap_942_; lean_object* v___x_943_; 
v___f_941_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___closed__0));
v___x_868__overap_942_ = lean_panic_fn(v___f_941_, v_msg_935_);
v___x_943_ = lean_apply_5(v___x_868__overap_942_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, lean_box(0));
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1___boxed(lean_object* v_msg_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1(v_msg_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__2(size_t v_sz_951_, size_t v_i_952_, lean_object* v_bs_953_){
_start:
{
uint8_t v___x_954_; 
v___x_954_ = lean_usize_dec_lt(v_i_952_, v_sz_951_);
if (v___x_954_ == 0)
{
return v_bs_953_;
}
else
{
lean_object* v_v_955_; lean_object* v_toInductionSubgoal_956_; lean_object* v_mvarId_957_; lean_object* v___x_958_; lean_object* v_bs_x27_959_; size_t v___x_960_; size_t v___x_961_; lean_object* v___x_962_; 
v_v_955_ = lean_array_uget_borrowed(v_bs_953_, v_i_952_);
v_toInductionSubgoal_956_ = lean_ctor_get(v_v_955_, 0);
v_mvarId_957_ = lean_ctor_get(v_toInductionSubgoal_956_, 0);
lean_inc(v_mvarId_957_);
v___x_958_ = lean_unsigned_to_nat(0u);
v_bs_x27_959_ = lean_array_uset(v_bs_953_, v_i_952_, v___x_958_);
v___x_960_ = ((size_t)1ULL);
v___x_961_ = lean_usize_add(v_i_952_, v___x_960_);
v___x_962_ = lean_array_uset(v_bs_x27_959_, v_i_952_, v_mvarId_957_);
v_i_952_ = v___x_961_;
v_bs_953_ = v___x_962_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__2___boxed(lean_object* v_sz_964_, lean_object* v_i_965_, lean_object* v_bs_966_){
_start:
{
size_t v_sz_boxed_967_; size_t v_i_boxed_968_; lean_object* v_res_969_; 
v_sz_boxed_967_ = lean_unbox_usize(v_sz_964_);
lean_dec(v_sz_964_);
v_i_boxed_968_ = lean_unbox_usize(v_i_965_);
lean_dec(v_i_965_);
v_res_969_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__2(v_sz_boxed_967_, v_i_boxed_968_, v_bs_966_);
return v_res_969_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__2(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_972_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__1));
v___x_973_ = lean_unsigned_to_nat(4u);
v___x_974_ = lean_unsigned_to_nat(76u);
v___x_975_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__0));
v___x_976_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2));
v___x_977_ = l_mkPanicMessageWithDecl(v___x_976_, v___x_975_, v___x_974_, v___x_973_, v___x_972_);
return v___x_977_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__4(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_979_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__3));
v___x_980_ = lean_unsigned_to_nat(4u);
v___x_981_ = lean_unsigned_to_nat(78u);
v___x_982_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__0));
v___x_983_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2));
v___x_984_ = l_mkPanicMessageWithDecl(v___x_983_, v___x_982_, v___x_981_, v___x_980_, v___x_979_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn(lean_object* v_mvarId_987_, lean_object* v_e_988_, lean_object* v_matcherInfo_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_){
_start:
{
lean_object* v___x_995_; lean_object* v_a_996_; uint8_t v___x_997_; 
v___x_995_ = l_Lean_Meta_isMatcherApp___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__0___redArg(v_e_988_, v_a_993_);
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref(v___x_995_);
v___x_997_ = lean_unbox(v_a_996_);
if (v___x_997_ == 0)
{
lean_object* v_numParams_998_; lean_object* v_numDiscrs_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; 
v_numParams_998_ = lean_ctor_get(v_matcherInfo_989_, 0);
v_numDiscrs_999_ = lean_ctor_get(v_matcherInfo_989_, 1);
v___x_1000_ = lean_unsigned_to_nat(1u);
v___x_1001_ = lean_nat_dec_eq(v_numDiscrs_999_, v___x_1000_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
lean_dec(v_a_996_);
lean_dec_ref(v_e_988_);
lean_dec(v_mvarId_987_);
v___x_1002_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__2);
v___x_1003_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1(v___x_1002_, v_a_990_, v_a_991_, v_a_992_, v_a_993_);
return v___x_1003_;
}
else
{
lean_object* v___x_1004_; lean_object* v_dummy_1005_; lean_object* v_nargs_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___x_1004_ = l_Lean_instInhabitedExpr;
v_dummy_1005_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18);
v_nargs_1006_ = l_Lean_Expr_getAppNumArgs(v_e_988_);
lean_inc(v_nargs_1006_);
v___x_1007_ = lean_mk_array(v_nargs_1006_, v_dummy_1005_);
v___x_1008_ = lean_nat_sub(v_nargs_1006_, v___x_1000_);
lean_dec(v_nargs_1006_);
v___x_1009_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_988_, v___x_1007_, v___x_1008_);
v___x_1010_ = lean_nat_add(v_numParams_998_, v___x_1000_);
v___x_1011_ = lean_array_get(v___x_1004_, v___x_1009_, v___x_1010_);
lean_dec(v___x_1010_);
lean_dec_ref(v___x_1009_);
v___x_1012_ = l_Lean_Expr_isFVar(v___x_1011_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_dec(v___x_1011_);
lean_dec(v_a_996_);
lean_dec(v_mvarId_987_);
v___x_1013_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__4);
v___x_1014_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__1(v___x_1013_, v_a_990_, v_a_991_, v_a_992_, v_a_993_);
return v___x_1014_;
}
else
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; 
v___x_1015_ = l_Lean_Expr_fvarId_x21(v___x_1011_);
lean_dec(v___x_1011_);
v___x_1016_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___closed__5));
v___x_1017_ = lean_box(0);
v___x_1018_ = lean_unbox(v_a_996_);
lean_dec(v_a_996_);
v___x_1019_ = l_Lean_MVarId_cases(v_mvarId_987_, v___x_1015_, v___x_1016_, v___x_1018_, v___x_1017_, v_a_990_, v_a_991_, v_a_992_, v_a_993_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1031_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1031_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1031_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
size_t v_sz_1024_; size_t v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1029_; 
v_sz_1024_ = lean_array_size(v_a_1020_);
v___x_1025_ = ((size_t)0ULL);
v___x_1026_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn_spec__2(v_sz_1024_, v___x_1025_, v_a_1020_);
v___x_1027_ = lean_array_to_list(v___x_1026_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1027_);
v___x_1029_ = v___x_1022_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
v_a_1032_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1019_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1019_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
}
else
{
lean_object* v___x_1040_; 
lean_dec(v_a_996_);
v___x_1040_ = l_Lean_Meta_Split_splitMatch(v_mvarId_987_, v_e_988_, v_a_990_, v_a_991_, v_a_992_, v_a_993_);
return v___x_1040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn___boxed(lean_object* v_mvarId_1041_, lean_object* v_e_1042_, lean_object* v_matcherInfo_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn(v_mvarId_1041_, v_e_1042_, v_matcherInfo_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_);
lean_dec_ref(v_matcherInfo_1043_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__1(lean_object* v_msg_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v___f_1056_; lean_object* v___x_12214__overap_1057_; lean_object* v___x_1058_; 
v___f_1056_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__0___closed__0));
v___x_12214__overap_1057_ = lean_panic_fn(v___f_1056_, v_msg_1050_);
v___x_1058_ = lean_apply_5(v___x_12214__overap_1057_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, lean_box(0));
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__1___boxed(lean_object* v_msg_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__1(v_msg_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg(lean_object* v_type_1066_, lean_object* v_k_1067_, uint8_t v_cleanupAnnotations_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v___f_1074_; uint8_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___f_1074_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1074_, 0, v_k_1067_);
v___x_1075_ = 0;
v___x_1076_ = lean_box(0);
v___x_1077_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1075_, v___x_1076_, v_type_1066_, v___f_1074_, v_cleanupAnnotations_1068_, v___x_1075_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1077_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1077_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_a_1086_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v___x_1077_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1077_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg___boxed(lean_object* v_type_1094_, lean_object* v_k_1095_, lean_object* v_cleanupAnnotations_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1102_; lean_object* v_res_1103_; 
v_cleanupAnnotations_boxed_1102_ = lean_unbox(v_cleanupAnnotations_1096_);
v_res_1103_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg(v_type_1094_, v_k_1095_, v_cleanupAnnotations_boxed_1102_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2(lean_object* v_00_u03b1_1104_, lean_object* v_type_1105_, lean_object* v_k_1106_, uint8_t v_cleanupAnnotations_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg(v_type_1105_, v_k_1106_, v_cleanupAnnotations_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___boxed(lean_object* v_00_u03b1_1114_, lean_object* v_type_1115_, lean_object* v_k_1116_, lean_object* v_cleanupAnnotations_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1123_; lean_object* v_res_1124_; 
v_cleanupAnnotations_boxed_1123_ = lean_unbox(v_cleanupAnnotations_1117_);
v_res_1124_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2(v_00_u03b1_1114_, v_type_1115_, v_k_1116_, v_cleanupAnnotations_boxed_1123_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(lean_object* v_e_1125_, lean_object* v___y_1126_){
_start:
{
uint8_t v___x_1128_; 
v___x_1128_ = l_Lean_Expr_hasMVar(v_e_1125_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_e_1125_);
return v___x_1129_;
}
else
{
lean_object* v___x_1130_; lean_object* v_mctx_1131_; lean_object* v___x_1132_; lean_object* v_fst_1133_; lean_object* v_snd_1134_; lean_object* v___x_1135_; lean_object* v_cache_1136_; lean_object* v_zetaDeltaFVarIds_1137_; lean_object* v_postponed_1138_; lean_object* v_diag_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1148_; 
v___x_1130_ = lean_st_ref_get(v___y_1126_);
v_mctx_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc_ref(v_mctx_1131_);
lean_dec(v___x_1130_);
v___x_1132_ = l_Lean_instantiateMVarsCore(v_mctx_1131_, v_e_1125_);
v_fst_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_fst_1133_);
v_snd_1134_ = lean_ctor_get(v___x_1132_, 1);
lean_inc(v_snd_1134_);
lean_dec_ref(v___x_1132_);
v___x_1135_ = lean_st_ref_take(v___y_1126_);
v_cache_1136_ = lean_ctor_get(v___x_1135_, 1);
v_zetaDeltaFVarIds_1137_ = lean_ctor_get(v___x_1135_, 2);
v_postponed_1138_ = lean_ctor_get(v___x_1135_, 3);
v_diag_1139_ = lean_ctor_get(v___x_1135_, 4);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1148_ == 0)
{
lean_object* v_unused_1149_; 
v_unused_1149_ = lean_ctor_get(v___x_1135_, 0);
lean_dec(v_unused_1149_);
v___x_1141_ = v___x_1135_;
v_isShared_1142_ = v_isSharedCheck_1148_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_diag_1139_);
lean_inc(v_postponed_1138_);
lean_inc(v_zetaDeltaFVarIds_1137_);
lean_inc(v_cache_1136_);
lean_dec(v___x_1135_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1148_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v_snd_1134_);
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_snd_1134_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_cache_1136_);
lean_ctor_set(v_reuseFailAlloc_1147_, 2, v_zetaDeltaFVarIds_1137_);
lean_ctor_set(v_reuseFailAlloc_1147_, 3, v_postponed_1138_);
lean_ctor_set(v_reuseFailAlloc_1147_, 4, v_diag_1139_);
v___x_1144_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = lean_st_ref_set(v___y_1126_, v___x_1144_);
v___x_1146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1146_, 0, v_fst_1133_);
return v___x_1146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg___boxed(lean_object* v_e_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(v_e_1150_, v___y_1151_);
lean_dec(v___y_1151_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6(lean_object* v_e_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(v_e_1154_, v___y_1156_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___boxed(lean_object* v_e_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6(v_e_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__0(lean_object* v_x_1168_, lean_object* v_motiveBody_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_Meta_getLevel(v_motiveBody_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__0___boxed(lean_object* v_x_1176_, lean_object* v_motiveBody_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__0(v_x_1176_, v_motiveBody_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec_ref(v_x_1176_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__1(lean_object* v___x_1184_, lean_object* v___x_1185_, lean_object* v_alpha_1186_, uint8_t v___x_1187_, lean_object* v_xs_1188_, lean_object* v_x_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; uint8_t v___x_1199_; uint8_t v___x_1200_; lean_object* v___x_1201_; 
v___x_1195_ = l_Lean_Level_ofNat(v___x_1184_);
v___x_1196_ = l_Lean_Expr_sort___override(v___x_1195_);
v___x_1197_ = l_Lean_Expr_forallE___override(v___x_1185_, v_alpha_1186_, v___x_1196_, v___x_1187_);
v___x_1198_ = 0;
v___x_1199_ = 1;
v___x_1200_ = 1;
v___x_1201_ = l_Lean_Meta_mkForallFVars(v_xs_1188_, v___x_1197_, v___x_1198_, v___x_1199_, v___x_1199_, v___x_1200_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__1___boxed(lean_object* v___x_1202_, lean_object* v___x_1203_, lean_object* v_alpha_1204_, lean_object* v___x_1205_, lean_object* v_xs_1206_, lean_object* v_x_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
uint8_t v___x_16364__boxed_1213_; lean_object* v_res_1214_; 
v___x_16364__boxed_1213_ = lean_unbox(v___x_1205_);
v_res_1214_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__1(v___x_1202_, v___x_1203_, v_alpha_1204_, v___x_16364__boxed_1213_, v_xs_1206_, v_x_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_xs_1206_);
lean_dec(v___x_1202_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2(lean_object* v___x_1221_, lean_object* v___x_1222_, lean_object* v_rel_1223_, lean_object* v___x_1224_, lean_object* v_beta_1225_, uint8_t v___x_1226_, lean_object* v_alpha_1227_, uint8_t v___x_1228_, lean_object* v_xs_1229_, lean_object* v_x_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1236_ = l_Lean_mkAppN(v___x_1221_, v_xs_1229_);
v___x_1237_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__1));
v___x_1238_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__3));
lean_inc_ref(v_xs_1229_);
v___x_1239_ = lean_array_push(v_xs_1229_, v___x_1222_);
v___x_1240_ = l_Lean_mkAppN(v_rel_1223_, v___x_1239_);
lean_dec_ref(v___x_1239_);
v___x_1241_ = l_Lean_Expr_bvar___override(v___x_1224_);
v___x_1242_ = l_Lean_Expr_app___override(v_beta_1225_, v___x_1241_);
v___x_1243_ = l_Lean_Expr_forallE___override(v___x_1238_, v___x_1240_, v___x_1242_, v___x_1226_);
v___x_1244_ = l_Lean_Expr_forallE___override(v___x_1237_, v_alpha_1227_, v___x_1243_, v___x_1226_);
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
v___x_1245_ = l_Lean_mkArrow(v___x_1244_, v___x_1236_, v___y_1233_, v___y_1234_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; uint8_t v___x_1247_; uint8_t v___x_1248_; lean_object* v___x_1249_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref(v___x_1245_);
v___x_1247_ = 1;
v___x_1248_ = 1;
v___x_1249_ = l_Lean_Meta_mkLambdaFVars(v_xs_1229_, v_a_1246_, v___x_1228_, v___x_1247_, v___x_1228_, v___x_1247_, v___x_1248_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec_ref(v_xs_1229_);
return v___x_1249_;
}
else
{
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec_ref(v_xs_1229_);
return v___x_1245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___boxed(lean_object* v___x_1250_, lean_object* v___x_1251_, lean_object* v_rel_1252_, lean_object* v___x_1253_, lean_object* v_beta_1254_, lean_object* v___x_1255_, lean_object* v_alpha_1256_, lean_object* v___x_1257_, lean_object* v_xs_1258_, lean_object* v_x_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
uint8_t v___x_16418__boxed_1265_; uint8_t v___x_16419__boxed_1266_; lean_object* v_res_1267_; 
v___x_16418__boxed_1265_ = lean_unbox(v___x_1255_);
v___x_16419__boxed_1266_ = lean_unbox(v___x_1257_);
v_res_1267_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2(v___x_1250_, v___x_1251_, v_rel_1252_, v___x_1253_, v_beta_1254_, v___x_16418__boxed_1265_, v_alpha_1256_, v___x_16419__boxed_1266_, v_xs_1258_, v_x_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec_ref(v_x_1259_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__0(lean_object* v___x_1268_, lean_object* v___x_1269_, lean_object* v_f_1270_, uint8_t v___x_1271_, uint8_t v___x_1272_, lean_object* v_ys_1273_, lean_object* v_x_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; 
v___x_1280_ = lean_array_get_borrowed(v___x_1268_, v_ys_1273_, v___x_1269_);
lean_inc(v___x_1280_);
v___x_1281_ = l_Lean_Expr_app___override(v_f_1270_, v___x_1280_);
v___x_1282_ = 1;
v___x_1283_ = l_Lean_Meta_mkLambdaFVars(v_ys_1273_, v___x_1281_, v___x_1271_, v___x_1272_, v___x_1271_, v___x_1272_, v___x_1282_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__0___boxed(lean_object* v___x_1284_, lean_object* v___x_1285_, lean_object* v_f_1286_, lean_object* v___x_1287_, lean_object* v___x_1288_, lean_object* v_ys_1289_, lean_object* v_x_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
uint8_t v___x_16485__boxed_1296_; uint8_t v___x_16486__boxed_1297_; lean_object* v_res_1298_; 
v___x_16485__boxed_1296_ = lean_unbox(v___x_1287_);
v___x_16486__boxed_1297_ = lean_unbox(v___x_1288_);
v_res_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__0(v___x_1284_, v___x_1285_, v_f_1286_, v___x_16485__boxed_1296_, v___x_16486__boxed_1297_, v_ys_1289_, v_x_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec_ref(v_x_1290_);
lean_dec_ref(v_ys_1289_);
lean_dec(v___x_1285_);
return v_res_1298_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1301_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__1));
v___x_1302_ = lean_unsigned_to_nat(10u);
v___x_1303_ = lean_unsigned_to_nat(145u);
v___x_1304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__0));
v___x_1305_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2));
v___x_1306_ = l_mkPanicMessageWithDecl(v___x_1305_, v___x_1304_, v___x_1303_, v___x_1302_, v___x_1301_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1(lean_object* v___x_1307_, lean_object* v___x_1308_, lean_object* v_f_1309_, uint8_t v___x_1310_, lean_object* v_a_1311_, lean_object* v_ys_1312_, lean_object* v_altBodyType_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
uint8_t v___x_1319_; 
v___x_1319_ = l_Lean_Expr_isForall(v_altBodyType_1313_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_dec_ref(v_ys_1312_);
lean_dec_ref(v_a_1311_);
lean_dec_ref(v_f_1309_);
lean_dec(v___x_1308_);
lean_dec_ref(v___x_1307_);
v___x_1320_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___closed__2);
v___x_1321_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__1(v___x_1320_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___f_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1322_ = lean_box(v___x_1310_);
v___x_1323_ = lean_box(v___x_1319_);
v___f_1324_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1324_, 0, v___x_1307_);
lean_closure_set(v___f_1324_, 1, v___x_1308_);
lean_closure_set(v___f_1324_, 2, v_f_1309_);
lean_closure_set(v___f_1324_, 3, v___x_1322_);
lean_closure_set(v___f_1324_, 4, v___x_1323_);
v___x_1325_ = l_Lean_Expr_bindingDomain_x21(v_altBodyType_1313_);
v___x_1326_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__6));
lean_inc(v___y_1317_);
lean_inc_ref(v___y_1316_);
lean_inc(v___y_1315_);
lean_inc_ref(v___y_1314_);
v___x_1327_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v___x_1325_, v___x_1326_, v___f_1324_, v___x_1310_, v___x_1310_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1328_);
lean_dec_ref(v___x_1327_);
lean_inc_ref(v_ys_1312_);
v___x_1329_ = lean_array_push(v_ys_1312_, v_a_1328_);
v___x_1330_ = l_Lean_mkAppN(v_a_1311_, v___x_1329_);
lean_dec_ref(v___x_1329_);
v___x_1331_ = 1;
v___x_1332_ = l_Lean_Meta_mkLambdaFVars(v_ys_1312_, v___x_1330_, v___x_1310_, v___x_1319_, v___x_1310_, v___x_1319_, v___x_1331_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec_ref(v_ys_1312_);
return v___x_1332_;
}
else
{
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec_ref(v_ys_1312_);
lean_dec_ref(v_a_1311_);
return v___x_1327_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___boxed(lean_object* v___x_1333_, lean_object* v___x_1334_, lean_object* v_f_1335_, lean_object* v___x_1336_, lean_object* v_a_1337_, lean_object* v_ys_1338_, lean_object* v_altBodyType_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
uint8_t v___x_16542__boxed_1345_; lean_object* v_res_1346_; 
v___x_16542__boxed_1345_ = lean_unbox(v___x_1336_);
v_res_1346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1(v___x_1333_, v___x_1334_, v_f_1335_, v___x_16542__boxed_1345_, v_a_1337_, v_ys_1338_, v_altBodyType_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
lean_dec_ref(v_altBodyType_1339_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4(lean_object* v_f_1347_, lean_object* v_as_1348_, size_t v_sz_1349_, size_t v_i_1350_, lean_object* v_b_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
uint8_t v___x_1357_; 
v___x_1357_ = lean_usize_dec_lt(v_i_1350_, v_sz_1349_);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; 
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec_ref(v_f_1347_);
v___x_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1358_, 0, v_b_1351_);
return v___x_1358_;
}
else
{
lean_object* v_snd_1359_; lean_object* v_fst_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1419_; 
v_snd_1359_ = lean_ctor_get(v_b_1351_, 1);
v_fst_1360_ = lean_ctor_get(v_b_1351_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v_b_1351_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1362_ = v_b_1351_;
v_isShared_1363_ = v_isSharedCheck_1419_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_snd_1359_);
lean_inc(v_fst_1360_);
lean_dec(v_b_1351_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1419_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v_array_1364_; lean_object* v_start_1365_; lean_object* v_stop_1366_; uint8_t v___x_1367_; 
v_array_1364_ = lean_ctor_get(v_snd_1359_, 0);
v_start_1365_ = lean_ctor_get(v_snd_1359_, 1);
v_stop_1366_ = lean_ctor_get(v_snd_1359_, 2);
v___x_1367_ = lean_nat_dec_lt(v_start_1365_, v_stop_1366_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1369_; 
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec_ref(v_f_1347_);
if (v_isShared_1363_ == 0)
{
v___x_1369_ = v___x_1362_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_fst_1360_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v_snd_1359_);
v___x_1369_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
}
else
{
lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1415_; 
lean_inc(v_stop_1366_);
lean_inc(v_start_1365_);
lean_inc_ref(v_array_1364_);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_snd_1359_);
if (v_isSharedCheck_1415_ == 0)
{
lean_object* v_unused_1416_; lean_object* v_unused_1417_; lean_object* v_unused_1418_; 
v_unused_1416_ = lean_ctor_get(v_snd_1359_, 2);
lean_dec(v_unused_1416_);
v_unused_1417_ = lean_ctor_get(v_snd_1359_, 1);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_snd_1359_, 0);
lean_dec(v_unused_1418_);
v___x_1373_ = v_snd_1359_;
v_isShared_1374_ = v_isSharedCheck_1415_;
goto v_resetjp_1372_;
}
else
{
lean_dec(v_snd_1359_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1415_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v_a_1375_; lean_object* v___x_1376_; 
v_a_1375_ = lean_array_uget_borrowed(v_as_1348_, v_i_1350_);
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1354_);
lean_inc(v___y_1353_);
lean_inc_ref(v___y_1352_);
lean_inc(v_a_1375_);
v___x_1376_ = lean_infer_type(v_a_1375_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; lean_object* v___x_1381_; lean_object* v___f_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
lean_dec_ref(v___x_1376_);
v___x_1378_ = l_Lean_instInhabitedExpr;
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = 0;
v___x_1381_ = lean_box(v___x_1380_);
lean_inc(v_a_1375_);
lean_inc_ref(v_f_1347_);
v___f_1382_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___lam__1___boxed), 12, 5);
lean_closure_set(v___f_1382_, 0, v___x_1378_);
lean_closure_set(v___f_1382_, 1, v___x_1379_);
lean_closure_set(v___f_1382_, 2, v_f_1347_);
lean_closure_set(v___f_1382_, 3, v___x_1381_);
lean_closure_set(v___f_1382_, 4, v_a_1375_);
v___x_1383_ = lean_array_fget_borrowed(v_array_1364_, v_start_1365_);
lean_inc(v___x_1383_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1354_);
lean_inc(v___y_1353_);
lean_inc_ref(v___y_1352_);
v___x_1385_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v_a_1377_, v___x_1384_, v___f_1382_, v___x_1380_, v___x_1380_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1390_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref(v___x_1385_);
v___x_1387_ = lean_unsigned_to_nat(1u);
v___x_1388_ = lean_nat_add(v_start_1365_, v___x_1387_);
lean_dec(v_start_1365_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 1, v___x_1388_);
v___x_1390_ = v___x_1373_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_array_1364_);
lean_ctor_set(v_reuseFailAlloc_1398_, 1, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1398_, 2, v_stop_1366_);
v___x_1390_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1391_ = l_Lean_Expr_app___override(v_fst_1360_, v_a_1386_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 1, v___x_1390_);
lean_ctor_set(v___x_1362_, 0, v___x_1391_);
v___x_1393_ = v___x_1362_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v___x_1390_);
v___x_1393_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
size_t v___x_1394_; size_t v___x_1395_; 
v___x_1394_ = ((size_t)1ULL);
v___x_1395_ = lean_usize_add(v_i_1350_, v___x_1394_);
v_i_1350_ = v___x_1395_;
v_b_1351_ = v___x_1393_;
goto _start;
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_del_object(v___x_1373_);
lean_dec(v_stop_1366_);
lean_dec(v_start_1365_);
lean_dec_ref(v_array_1364_);
lean_del_object(v___x_1362_);
lean_dec(v_fst_1360_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec_ref(v_f_1347_);
v_a_1399_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1385_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1385_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
lean_del_object(v___x_1373_);
lean_dec(v_stop_1366_);
lean_dec(v_start_1365_);
lean_dec_ref(v_array_1364_);
lean_del_object(v___x_1362_);
lean_dec(v_fst_1360_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec_ref(v_f_1347_);
v_a_1407_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1376_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1376_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4___boxed(lean_object* v_f_1420_, lean_object* v_as_1421_, lean_object* v_sz_1422_, lean_object* v_i_1423_, lean_object* v_b_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
size_t v_sz_boxed_1430_; size_t v_i_boxed_1431_; lean_object* v_res_1432_; 
v_sz_boxed_1430_ = lean_unbox_usize(v_sz_1422_);
lean_dec(v_sz_1422_);
v_i_boxed_1431_ = lean_unbox_usize(v_i_1423_);
lean_dec(v_i_1423_);
v_res_1432_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4(v_f_1420_, v_as_1421_, v_sz_boxed_1430_, v_i_boxed_1431_, v_b_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
lean_dec_ref(v_as_1421_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg(lean_object* v_as_x27_1433_, lean_object* v_b_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
if (lean_obj_tag(v_as_x27_1433_) == 0)
{
lean_object* v___x_1440_; 
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
v___x_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1440_, 0, v_b_1434_);
return v___x_1440_;
}
else
{
lean_object* v_head_1441_; lean_object* v_tail_1442_; uint8_t v___x_1443_; lean_object* v___x_1444_; 
v_head_1441_ = lean_ctor_get(v_as_x27_1433_, 0);
lean_inc(v_head_1441_);
v_tail_1442_ = lean_ctor_get(v_as_x27_1433_, 1);
lean_inc(v_tail_1442_);
lean_dec_ref(v_as_x27_1433_);
v___x_1443_ = 1;
lean_inc(v___y_1438_);
lean_inc_ref(v___y_1437_);
lean_inc(v___y_1436_);
lean_inc_ref(v___y_1435_);
v___x_1444_ = l_Lean_MVarId_refl(v_head_1441_, v___x_1443_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v___x_1445_; 
lean_dec_ref(v___x_1444_);
v___x_1445_ = lean_box(0);
v_as_x27_1433_ = v_tail_1442_;
v_b_1434_ = v___x_1445_;
goto _start;
}
else
{
lean_dec(v_tail_1442_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
return v___x_1444_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg___boxed(lean_object* v_as_x27_1447_, lean_object* v_b_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg(v_as_x27_1447_, v_b_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__3(lean_object* v___x_1455_, lean_object* v_matcherInfo_1456_, lean_object* v___x_1457_, lean_object* v___x_1458_, lean_object* v_f_1459_, lean_object* v_discrs_1460_, lean_object* v___x_1461_, lean_object* v_rel_1462_, lean_object* v___x_1463_, uint8_t v___x_1464_, lean_object* v_alpha_1465_, lean_object* v___x_1466_, lean_object* v_beta_1467_, lean_object* v___x_1468_, uint8_t v___x_1469_, lean_object* v___x_1470_, lean_object* v___x_1471_, lean_object* v___x_1472_, lean_object* v_alts_1473_, lean_object* v_x_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; size_t v_sz_1485_; size_t v___x_1486_; lean_object* v___x_1487_; 
v___x_1480_ = l_Lean_mkAppN(v___x_1455_, v_alts_1473_);
lean_inc_ref(v_matcherInfo_1456_);
v___x_1481_ = l_Lean_Meta_Match_MatcherInfo_altNumParams(v_matcherInfo_1456_);
v___x_1482_ = lean_array_get_size(v___x_1481_);
v___x_1483_ = l_Array_toSubarray___redArg(v___x_1481_, v___x_1457_, v___x_1482_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1458_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v_sz_1485_ = lean_array_size(v_alts_1473_);
v___x_1486_ = ((size_t)0ULL);
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc(v___y_1476_);
lean_inc_ref(v___y_1475_);
lean_inc_ref(v_f_1459_);
v___x_1487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__4(v_f_1459_, v_alts_1473_, v_sz_1485_, v___x_1486_, v___x_1484_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v_fst_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1583_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref(v___x_1487_);
v_fst_1489_ = lean_ctor_get(v_a_1488_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_a_1488_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; 
v_unused_1584_ = lean_ctor_get(v_a_1488_, 1);
lean_dec(v_unused_1584_);
v___x_1491_ = v_a_1488_;
v_isShared_1492_ = v_isSharedCheck_1583_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_fst_1489_);
lean_dec(v_a_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1583_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1493_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__1));
v___x_1494_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___closed__3));
lean_inc_ref(v_discrs_1460_);
v___x_1495_ = lean_array_push(v_discrs_1460_, v___x_1461_);
lean_inc_ref(v_rel_1462_);
v___x_1496_ = l_Lean_mkAppN(v_rel_1462_, v___x_1495_);
lean_dec_ref(v___x_1495_);
v___x_1497_ = l_Lean_Expr_bvar___override(v___x_1463_);
lean_inc_ref(v_f_1459_);
v___x_1498_ = l_Lean_Expr_app___override(v_f_1459_, v___x_1497_);
v___x_1499_ = l_Lean_Expr_lam___override(v___x_1494_, v___x_1496_, v___x_1498_, v___x_1464_);
lean_inc_ref(v_alpha_1465_);
v___x_1500_ = l_Lean_Expr_lam___override(v___x_1493_, v_alpha_1465_, v___x_1499_, v___x_1464_);
v___x_1501_ = l_Lean_Expr_app___override(v___x_1480_, v___x_1500_);
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc(v___y_1476_);
lean_inc_ref(v___y_1475_);
lean_inc(v_fst_1489_);
v___x_1502_ = l_Lean_Meta_mkEq(v___x_1501_, v_fst_1489_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
lean_dec_ref(v___x_1502_);
v___x_1504_ = lean_box(0);
lean_inc_ref(v___y_1475_);
lean_inc(v_a_1503_);
v___x_1505_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1503_, v___x_1504_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref(v___x_1505_);
v___x_1507_ = l_Lean_Expr_mvarId_x21(v_a_1506_);
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc(v___y_1476_);
lean_inc_ref(v___y_1475_);
v___x_1508_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_splitMatchOrCasesOn(v___x_1507_, v_fst_1489_, v_matcherInfo_1456_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec_ref(v_matcherInfo_1456_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref(v___x_1508_);
v___x_1510_ = lean_box(0);
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc(v___y_1476_);
lean_inc_ref(v___y_1475_);
v___x_1511_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg(v_a_1509_, v___x_1510_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v___x_1512_; lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1558_; 
lean_dec_ref(v___x_1511_);
v___x_1512_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(v_a_1506_, v___y_1476_);
v_a_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1558_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1558_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; uint8_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1517_ = lean_unsigned_to_nat(5u);
v___x_1518_ = lean_mk_empty_array_with_capacity(v___x_1517_);
v___x_1519_ = lean_array_push(v___x_1518_, v___x_1466_);
v___x_1520_ = lean_array_push(v___x_1519_, v_alpha_1465_);
v___x_1521_ = lean_array_push(v___x_1520_, v_beta_1467_);
v___x_1522_ = lean_array_push(v___x_1521_, v_f_1459_);
v___x_1523_ = lean_array_push(v___x_1522_, v_rel_1462_);
v___x_1524_ = l_Array_append___redArg(v___x_1468_, v___x_1523_);
lean_dec_ref(v___x_1523_);
v___x_1525_ = l_Array_append___redArg(v___x_1524_, v_discrs_1460_);
lean_dec_ref(v_discrs_1460_);
v___x_1526_ = l_Array_append___redArg(v___x_1525_, v_alts_1473_);
v___x_1527_ = 1;
v___x_1528_ = 1;
v___x_1529_ = l_Lean_Meta_mkForallFVars(v___x_1526_, v_a_1503_, v___x_1469_, v___x_1527_, v___x_1527_, v___x_1528_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1531_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref(v___x_1529_);
v___x_1531_ = l_Lean_Meta_mkLambdaFVars(v___x_1526_, v_a_1513_, v___x_1469_, v___x_1527_, v___x_1469_, v___x_1527_, v___x_1528_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec_ref(v___x_1526_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1533_; lean_object* v___x_1535_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_a_1532_);
lean_dec_ref(v___x_1531_);
lean_inc(v___x_1470_);
v___x_1533_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1470_);
lean_ctor_set(v___x_1533_, 1, v___x_1471_);
lean_ctor_set(v___x_1533_, 2, v_a_1530_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set_tag(v___x_1491_, 1);
lean_ctor_set(v___x_1491_, 1, v___x_1472_);
lean_ctor_set(v___x_1491_, 0, v___x_1470_);
v___x_1535_ = v___x_1491_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1470_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v___x_1472_);
v___x_1535_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1533_);
lean_ctor_set(v___x_1536_, 1, v_a_1532_);
lean_ctor_set(v___x_1536_, 2, v___x_1535_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set_tag(v___x_1515_, 2);
lean_ctor_set(v___x_1515_, 0, v___x_1536_);
v___x_1538_ = v___x_1515_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_Lean_addDecl(v___x_1538_, v___x_1469_, v___y_1477_, v___y_1478_);
return v___x_1539_;
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1549_; 
lean_dec(v_a_1530_);
lean_del_object(v___x_1515_);
lean_del_object(v___x_1491_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
v_a_1542_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1544_ = v___x_1531_;
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1531_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___x_1547_; 
if (v_isShared_1545_ == 0)
{
v___x_1547_ = v___x_1544_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1542_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
}
else
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1557_; 
lean_dec_ref(v___x_1526_);
lean_del_object(v___x_1515_);
lean_dec(v_a_1513_);
lean_del_object(v___x_1491_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
v_a_1550_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1529_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1529_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1555_; 
if (v_isShared_1553_ == 0)
{
v___x_1555_ = v___x_1552_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
}
}
else
{
lean_dec(v_a_1506_);
lean_dec(v_a_1503_);
lean_del_object(v___x_1491_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
lean_dec_ref(v___x_1468_);
lean_dec_ref(v_beta_1467_);
lean_dec_ref(v___x_1466_);
lean_dec_ref(v_alpha_1465_);
lean_dec_ref(v_rel_1462_);
lean_dec_ref(v_discrs_1460_);
lean_dec_ref(v_f_1459_);
return v___x_1511_;
}
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
lean_dec(v_a_1506_);
lean_dec(v_a_1503_);
lean_del_object(v___x_1491_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
lean_dec_ref(v___x_1468_);
lean_dec_ref(v_beta_1467_);
lean_dec_ref(v___x_1466_);
lean_dec_ref(v_alpha_1465_);
lean_dec_ref(v_rel_1462_);
lean_dec_ref(v_discrs_1460_);
lean_dec_ref(v_f_1459_);
v_a_1559_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1508_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1508_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_a_1503_);
lean_del_object(v___x_1491_);
lean_dec(v_fst_1489_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
lean_dec_ref(v___x_1468_);
lean_dec_ref(v_beta_1467_);
lean_dec_ref(v___x_1466_);
lean_dec_ref(v_alpha_1465_);
lean_dec_ref(v_rel_1462_);
lean_dec_ref(v_discrs_1460_);
lean_dec_ref(v_f_1459_);
lean_dec_ref(v_matcherInfo_1456_);
v_a_1567_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1505_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1505_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_del_object(v___x_1491_);
lean_dec(v_fst_1489_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
lean_dec_ref(v___x_1468_);
lean_dec_ref(v_beta_1467_);
lean_dec_ref(v___x_1466_);
lean_dec_ref(v_alpha_1465_);
lean_dec_ref(v_rel_1462_);
lean_dec_ref(v_discrs_1460_);
lean_dec_ref(v_f_1459_);
lean_dec_ref(v_matcherInfo_1456_);
v_a_1575_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1502_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1502_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
else
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
lean_dec_ref(v___x_1480_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___x_1472_);
lean_dec(v___x_1471_);
lean_dec(v___x_1470_);
lean_dec_ref(v___x_1468_);
lean_dec_ref(v_beta_1467_);
lean_dec_ref(v___x_1466_);
lean_dec_ref(v_alpha_1465_);
lean_dec(v___x_1463_);
lean_dec_ref(v_rel_1462_);
lean_dec_ref(v___x_1461_);
lean_dec_ref(v_discrs_1460_);
lean_dec_ref(v_f_1459_);
lean_dec_ref(v_matcherInfo_1456_);
v_a_1585_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1487_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1487_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__3___boxed(lean_object** _args){
lean_object* v___x_1593_ = _args[0];
lean_object* v_matcherInfo_1594_ = _args[1];
lean_object* v___x_1595_ = _args[2];
lean_object* v___x_1596_ = _args[3];
lean_object* v_f_1597_ = _args[4];
lean_object* v_discrs_1598_ = _args[5];
lean_object* v___x_1599_ = _args[6];
lean_object* v_rel_1600_ = _args[7];
lean_object* v___x_1601_ = _args[8];
lean_object* v___x_1602_ = _args[9];
lean_object* v_alpha_1603_ = _args[10];
lean_object* v___x_1604_ = _args[11];
lean_object* v_beta_1605_ = _args[12];
lean_object* v___x_1606_ = _args[13];
lean_object* v___x_1607_ = _args[14];
lean_object* v___x_1608_ = _args[15];
lean_object* v___x_1609_ = _args[16];
lean_object* v___x_1610_ = _args[17];
lean_object* v_alts_1611_ = _args[18];
lean_object* v_x_1612_ = _args[19];
lean_object* v___y_1613_ = _args[20];
lean_object* v___y_1614_ = _args[21];
lean_object* v___y_1615_ = _args[22];
lean_object* v___y_1616_ = _args[23];
lean_object* v___y_1617_ = _args[24];
_start:
{
uint8_t v___x_16772__boxed_1618_; uint8_t v___x_16775__boxed_1619_; lean_object* v_res_1620_; 
v___x_16772__boxed_1618_ = lean_unbox(v___x_1602_);
v___x_16775__boxed_1619_ = lean_unbox(v___x_1607_);
v_res_1620_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__3(v___x_1593_, v_matcherInfo_1594_, v___x_1595_, v___x_1596_, v_f_1597_, v_discrs_1598_, v___x_1599_, v_rel_1600_, v___x_1601_, v___x_16772__boxed_1618_, v_alpha_1603_, v___x_1604_, v_beta_1605_, v___x_1606_, v___x_16775__boxed_1619_, v___x_1608_, v___x_1609_, v___x_1610_, v_alts_1611_, v_x_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec_ref(v_x_1612_);
lean_dec_ref(v_alts_1611_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__4(lean_object* v___x_1621_, lean_object* v___x_1622_, lean_object* v_matcherInfo_1623_, lean_object* v___x_1624_, lean_object* v_f_1625_, lean_object* v___x_1626_, lean_object* v_rel_1627_, lean_object* v___x_1628_, uint8_t v___x_1629_, lean_object* v_alpha_1630_, lean_object* v___x_1631_, lean_object* v_beta_1632_, lean_object* v___x_1633_, uint8_t v___x_1634_, lean_object* v___x_1635_, lean_object* v___x_1636_, lean_object* v___x_1637_, lean_object* v_discrs_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = l_Lean_mkAppN(v___x_1621_, v_discrs_1638_);
lean_inc(v___y_1643_);
lean_inc_ref(v___y_1642_);
lean_inc(v___y_1641_);
lean_inc_ref(v___y_1640_);
lean_inc_ref(v___x_1645_);
v___x_1646_ = lean_infer_type(v___x_1645_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___f_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref(v___x_1646_);
v___x_1648_ = l_Lean_mkAppN(v___x_1622_, v_discrs_1638_);
v___x_1649_ = lean_box(v___x_1629_);
v___x_1650_ = lean_box(v___x_1634_);
lean_inc_ref(v_matcherInfo_1623_);
v___f_1651_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__3___boxed), 25, 18);
lean_closure_set(v___f_1651_, 0, v___x_1645_);
lean_closure_set(v___f_1651_, 1, v_matcherInfo_1623_);
lean_closure_set(v___f_1651_, 2, v___x_1624_);
lean_closure_set(v___f_1651_, 3, v___x_1648_);
lean_closure_set(v___f_1651_, 4, v_f_1625_);
lean_closure_set(v___f_1651_, 5, v_discrs_1638_);
lean_closure_set(v___f_1651_, 6, v___x_1626_);
lean_closure_set(v___f_1651_, 7, v_rel_1627_);
lean_closure_set(v___f_1651_, 8, v___x_1628_);
lean_closure_set(v___f_1651_, 9, v___x_1649_);
lean_closure_set(v___f_1651_, 10, v_alpha_1630_);
lean_closure_set(v___f_1651_, 11, v___x_1631_);
lean_closure_set(v___f_1651_, 12, v_beta_1632_);
lean_closure_set(v___f_1651_, 13, v___x_1633_);
lean_closure_set(v___f_1651_, 14, v___x_1650_);
lean_closure_set(v___f_1651_, 15, v___x_1635_);
lean_closure_set(v___f_1651_, 16, v___x_1636_);
lean_closure_set(v___f_1651_, 17, v___x_1637_);
v___x_1652_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_matcherInfo_1623_);
lean_dec_ref(v_matcherInfo_1623_);
v___x_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
v___x_1654_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v_a_1647_, v___x_1653_, v___f_1651_, v___x_1634_, v___x_1634_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
return v___x_1654_;
}
else
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec_ref(v___x_1645_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec_ref(v_discrs_1638_);
lean_dec(v___x_1637_);
lean_dec(v___x_1636_);
lean_dec(v___x_1635_);
lean_dec_ref(v___x_1633_);
lean_dec_ref(v_beta_1632_);
lean_dec_ref(v___x_1631_);
lean_dec_ref(v_alpha_1630_);
lean_dec(v___x_1628_);
lean_dec_ref(v_rel_1627_);
lean_dec_ref(v___x_1626_);
lean_dec_ref(v_f_1625_);
lean_dec(v___x_1624_);
lean_dec_ref(v_matcherInfo_1623_);
lean_dec_ref(v___x_1622_);
v_a_1655_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1646_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1646_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__4___boxed(lean_object** _args){
lean_object* v___x_1663_ = _args[0];
lean_object* v___x_1664_ = _args[1];
lean_object* v_matcherInfo_1665_ = _args[2];
lean_object* v___x_1666_ = _args[3];
lean_object* v_f_1667_ = _args[4];
lean_object* v___x_1668_ = _args[5];
lean_object* v_rel_1669_ = _args[6];
lean_object* v___x_1670_ = _args[7];
lean_object* v___x_1671_ = _args[8];
lean_object* v_alpha_1672_ = _args[9];
lean_object* v___x_1673_ = _args[10];
lean_object* v_beta_1674_ = _args[11];
lean_object* v___x_1675_ = _args[12];
lean_object* v___x_1676_ = _args[13];
lean_object* v___x_1677_ = _args[14];
lean_object* v___x_1678_ = _args[15];
lean_object* v___x_1679_ = _args[16];
lean_object* v_discrs_1680_ = _args[17];
lean_object* v_x_1681_ = _args[18];
lean_object* v___y_1682_ = _args[19];
lean_object* v___y_1683_ = _args[20];
lean_object* v___y_1684_ = _args[21];
lean_object* v___y_1685_ = _args[22];
lean_object* v___y_1686_ = _args[23];
_start:
{
uint8_t v___x_17053__boxed_1687_; uint8_t v___x_17056__boxed_1688_; lean_object* v_res_1689_; 
v___x_17053__boxed_1687_ = lean_unbox(v___x_1671_);
v___x_17056__boxed_1688_ = lean_unbox(v___x_1676_);
v_res_1689_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__4(v___x_1663_, v___x_1664_, v_matcherInfo_1665_, v___x_1666_, v_f_1667_, v___x_1668_, v_rel_1669_, v___x_1670_, v___x_17053__boxed_1687_, v_alpha_1672_, v___x_1673_, v_beta_1674_, v___x_1675_, v___x_17056__boxed_1688_, v___x_1677_, v___x_1678_, v___x_1679_, v_discrs_1680_, v_x_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_);
lean_dec_ref(v_x_1681_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__3(lean_object* v_a_1690_, lean_object* v_a_1691_){
_start:
{
if (lean_obj_tag(v_a_1690_) == 0)
{
lean_object* v___x_1692_; 
v___x_1692_ = l_List_reverse___redArg(v_a_1691_);
return v___x_1692_;
}
else
{
lean_object* v_head_1693_; lean_object* v_tail_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1703_; 
v_head_1693_ = lean_ctor_get(v_a_1690_, 0);
v_tail_1694_ = lean_ctor_get(v_a_1690_, 1);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_a_1690_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1696_ = v_a_1690_;
v_isShared_1697_ = v_isSharedCheck_1703_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_tail_1694_);
lean_inc(v_head_1693_);
lean_dec(v_a_1690_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1703_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1700_; 
v___x_1698_ = l_Lean_mkLevelParam(v_head_1693_);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 1, v_a_1691_);
lean_ctor_set(v___x_1696_, 0, v___x_1698_);
v___x_1700_ = v___x_1696_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1698_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_a_1691_);
v___x_1700_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
v_a_1690_ = v_tail_1694_;
v_a_1691_ = v___x_1700_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__0));
v___x_1706_ = l_Lean_stringToMessageData(v___x_1705_);
return v___x_1706_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__2));
v___x_1709_ = l_Lean_stringToMessageData(v___x_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5(lean_object* v___x_1710_, lean_object* v___x_1711_, lean_object* v___x_1712_, lean_object* v_beta_1713_, uint8_t v___x_1714_, lean_object* v_alpha_1715_, uint8_t v___x_1716_, lean_object* v_numDiscrs_1717_, lean_object* v___f_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_levelParams_1721_, lean_object* v_matcherName_1722_, lean_object* v___x_1723_, lean_object* v_matcherInfo_1724_, lean_object* v___x_1725_, lean_object* v_f_1726_, lean_object* v___x_1727_, lean_object* v_uElimPos_x3f_1728_, lean_object* v_rel_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v___x_1735_; 
lean_inc(v___y_1733_);
lean_inc_ref(v___y_1732_);
lean_inc(v___y_1731_);
lean_inc_ref(v___y_1730_);
lean_inc_ref(v___x_1710_);
v___x_1735_ = lean_infer_type(v___x_1710_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___f_1739_; lean_object* v___x_1740_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref(v___x_1735_);
v___x_1737_ = lean_box(v___x_1714_);
v___x_1738_ = lean_box(v___x_1716_);
lean_inc_ref(v_alpha_1715_);
lean_inc_ref(v_beta_1713_);
lean_inc(v___x_1712_);
lean_inc_ref(v_rel_1729_);
lean_inc_ref(v___x_1711_);
lean_inc_ref(v___x_1710_);
v___f_1739_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__2___boxed), 15, 8);
lean_closure_set(v___f_1739_, 0, v___x_1710_);
lean_closure_set(v___f_1739_, 1, v___x_1711_);
lean_closure_set(v___f_1739_, 2, v_rel_1729_);
lean_closure_set(v___f_1739_, 3, v___x_1712_);
lean_closure_set(v___f_1739_, 4, v_beta_1713_);
lean_closure_set(v___f_1739_, 5, v___x_1737_);
lean_closure_set(v___f_1739_, 6, v_alpha_1715_);
lean_closure_set(v___f_1739_, 7, v___x_1738_);
lean_inc(v___y_1733_);
lean_inc_ref(v___y_1732_);
lean_inc(v___y_1731_);
lean_inc_ref(v___y_1730_);
v___x_1740_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg(v_a_1736_, v___f_1739_, v___x_1716_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref(v___x_1740_);
lean_inc(v___y_1733_);
lean_inc_ref(v___y_1732_);
lean_inc(v___y_1731_);
lean_inc_ref(v___y_1730_);
lean_inc(v_numDiscrs_1717_);
lean_inc(v_a_1741_);
v___x_1742_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive_spec__0___redArg(v_a_1741_, v_numDiscrs_1717_, v___f_1718_, v___x_1716_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v_matcherLevels_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref(v___x_1742_);
v___x_1744_ = lean_box(0);
v___x_1745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1745_, 0, v_a_1719_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1746_, 0, v_a_1720_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
lean_inc(v_levelParams_1721_);
v___x_1747_ = l_List_appendTR___redArg(v_levelParams_1721_, v___x_1746_);
v___x_1748_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__3(v_levelParams_1721_, v___x_1744_);
if (lean_obj_tag(v_uElimPos_x3f_1728_) == 0)
{
uint8_t v___x_1777_; 
v___x_1777_ = l_Lean_Level_isZero(v_a_1743_);
lean_dec(v_a_1743_);
if (v___x_1777_ == 0)
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
lean_dec(v___x_1748_);
lean_dec(v___x_1747_);
lean_dec(v_a_1741_);
lean_dec_ref(v_rel_1729_);
lean_dec(v___x_1727_);
lean_dec_ref(v_f_1726_);
lean_dec(v___x_1725_);
lean_dec_ref(v_matcherInfo_1724_);
lean_dec_ref(v___x_1723_);
lean_dec(v_numDiscrs_1717_);
lean_dec_ref(v_alpha_1715_);
lean_dec_ref(v_beta_1713_);
lean_dec(v___x_1712_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1710_);
v___x_1778_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__1);
v___x_1779_ = l_Lean_MessageData_ofConstName(v_matcherName_1722_, v___x_1716_);
v___x_1780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___closed__3);
v___x_1782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1780_);
lean_ctor_set(v___x_1782_, 1, v___x_1781_);
v___x_1783_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(v___x_1782_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v___x_1783_;
}
else
{
lean_inc(v___x_1748_);
v_matcherLevels_1750_ = v___x_1748_;
v___y_1751_ = v___y_1730_;
v___y_1752_ = v___y_1731_;
v___y_1753_ = v___y_1732_;
v___y_1754_ = v___y_1733_;
goto v___jp_1749_;
}
}
else
{
lean_object* v_val_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_val_1784_ = lean_ctor_get(v_uElimPos_x3f_1728_, 0);
lean_inc(v___x_1748_);
v___x_1785_ = lean_array_mk(v___x_1748_);
v___x_1786_ = lean_array_set(v___x_1785_, v_val_1784_, v_a_1743_);
v___x_1787_ = lean_array_to_list(v___x_1786_);
v_matcherLevels_1750_ = v___x_1787_;
v___y_1751_ = v___y_1730_;
v___y_1752_ = v___y_1731_;
v___y_1753_ = v___y_1732_;
v___y_1754_ = v___y_1733_;
goto v___jp_1749_;
}
v___jp_1749_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; 
lean_inc(v_matcherName_1722_);
v___x_1755_ = l_Lean_Expr_const___override(v_matcherName_1722_, v_matcherLevels_1750_);
v___x_1756_ = l_Subarray_copy___redArg(v___x_1723_);
v___x_1757_ = l_Lean_mkAppN(v___x_1755_, v___x_1756_);
v___x_1758_ = l_Lean_Expr_app___override(v___x_1757_, v_a_1741_);
lean_inc(v___y_1754_);
lean_inc_ref(v___y_1753_);
lean_inc(v___y_1752_);
lean_inc_ref(v___y_1751_);
lean_inc_ref(v___x_1758_);
v___x_1759_ = lean_infer_type(v___x_1758_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___f_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref(v___x_1759_);
v___x_1761_ = l_Lean_Expr_const___override(v_matcherName_1722_, v___x_1748_);
v___x_1762_ = l_Lean_mkAppN(v___x_1761_, v___x_1756_);
lean_inc_ref(v___x_1710_);
v___x_1763_ = l_Lean_Expr_app___override(v___x_1762_, v___x_1710_);
v___x_1764_ = lean_box(v___x_1714_);
v___x_1765_ = lean_box(v___x_1716_);
v___f_1766_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__4___boxed), 24, 17);
lean_closure_set(v___f_1766_, 0, v___x_1758_);
lean_closure_set(v___f_1766_, 1, v___x_1763_);
lean_closure_set(v___f_1766_, 2, v_matcherInfo_1724_);
lean_closure_set(v___f_1766_, 3, v___x_1725_);
lean_closure_set(v___f_1766_, 4, v_f_1726_);
lean_closure_set(v___f_1766_, 5, v___x_1711_);
lean_closure_set(v___f_1766_, 6, v_rel_1729_);
lean_closure_set(v___f_1766_, 7, v___x_1712_);
lean_closure_set(v___f_1766_, 8, v___x_1764_);
lean_closure_set(v___f_1766_, 9, v_alpha_1715_);
lean_closure_set(v___f_1766_, 10, v___x_1710_);
lean_closure_set(v___f_1766_, 11, v_beta_1713_);
lean_closure_set(v___f_1766_, 12, v___x_1756_);
lean_closure_set(v___f_1766_, 13, v___x_1765_);
lean_closure_set(v___f_1766_, 14, v___x_1727_);
lean_closure_set(v___f_1766_, 15, v___x_1747_);
lean_closure_set(v___f_1766_, 16, v___x_1744_);
v___x_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_numDiscrs_1717_);
v___x_1768_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v_a_1760_, v___x_1767_, v___f_1766_, v___x_1716_, v___x_1716_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
return v___x_1768_;
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v___x_1758_);
lean_dec_ref(v___x_1756_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___x_1748_);
lean_dec(v___x_1747_);
lean_dec_ref(v_rel_1729_);
lean_dec(v___x_1727_);
lean_dec_ref(v_f_1726_);
lean_dec(v___x_1725_);
lean_dec_ref(v_matcherInfo_1724_);
lean_dec(v_matcherName_1722_);
lean_dec(v_numDiscrs_1717_);
lean_dec_ref(v_alpha_1715_);
lean_dec_ref(v_beta_1713_);
lean_dec(v___x_1712_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1710_);
v_a_1769_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1759_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1759_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1795_; 
lean_dec(v_a_1741_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec_ref(v_rel_1729_);
lean_dec(v___x_1727_);
lean_dec_ref(v_f_1726_);
lean_dec(v___x_1725_);
lean_dec_ref(v_matcherInfo_1724_);
lean_dec_ref(v___x_1723_);
lean_dec(v_matcherName_1722_);
lean_dec(v_levelParams_1721_);
lean_dec(v_a_1720_);
lean_dec(v_a_1719_);
lean_dec(v_numDiscrs_1717_);
lean_dec_ref(v_alpha_1715_);
lean_dec_ref(v_beta_1713_);
lean_dec(v___x_1712_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1710_);
v_a_1788_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1790_ = v___x_1742_;
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1742_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1788_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec_ref(v_rel_1729_);
lean_dec(v___x_1727_);
lean_dec_ref(v_f_1726_);
lean_dec(v___x_1725_);
lean_dec_ref(v_matcherInfo_1724_);
lean_dec_ref(v___x_1723_);
lean_dec(v_matcherName_1722_);
lean_dec(v_levelParams_1721_);
lean_dec(v_a_1720_);
lean_dec(v_a_1719_);
lean_dec_ref(v___f_1718_);
lean_dec(v_numDiscrs_1717_);
lean_dec_ref(v_alpha_1715_);
lean_dec_ref(v_beta_1713_);
lean_dec(v___x_1712_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1710_);
v_a_1796_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1740_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1740_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec_ref(v_rel_1729_);
lean_dec(v___x_1727_);
lean_dec_ref(v_f_1726_);
lean_dec(v___x_1725_);
lean_dec_ref(v_matcherInfo_1724_);
lean_dec_ref(v___x_1723_);
lean_dec(v_matcherName_1722_);
lean_dec(v_levelParams_1721_);
lean_dec(v_a_1720_);
lean_dec(v_a_1719_);
lean_dec_ref(v___f_1718_);
lean_dec(v_numDiscrs_1717_);
lean_dec_ref(v_alpha_1715_);
lean_dec_ref(v_beta_1713_);
lean_dec(v___x_1712_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1710_);
v_a_1804_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1735_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1735_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___boxed(lean_object** _args){
lean_object* v___x_1812_ = _args[0];
lean_object* v___x_1813_ = _args[1];
lean_object* v___x_1814_ = _args[2];
lean_object* v_beta_1815_ = _args[3];
lean_object* v___x_1816_ = _args[4];
lean_object* v_alpha_1817_ = _args[5];
lean_object* v___x_1818_ = _args[6];
lean_object* v_numDiscrs_1819_ = _args[7];
lean_object* v___f_1820_ = _args[8];
lean_object* v_a_1821_ = _args[9];
lean_object* v_a_1822_ = _args[10];
lean_object* v_levelParams_1823_ = _args[11];
lean_object* v_matcherName_1824_ = _args[12];
lean_object* v___x_1825_ = _args[13];
lean_object* v_matcherInfo_1826_ = _args[14];
lean_object* v___x_1827_ = _args[15];
lean_object* v_f_1828_ = _args[16];
lean_object* v___x_1829_ = _args[17];
lean_object* v_uElimPos_x3f_1830_ = _args[18];
lean_object* v_rel_1831_ = _args[19];
lean_object* v___y_1832_ = _args[20];
lean_object* v___y_1833_ = _args[21];
lean_object* v___y_1834_ = _args[22];
lean_object* v___y_1835_ = _args[23];
lean_object* v___y_1836_ = _args[24];
_start:
{
uint8_t v___x_17181__boxed_1837_; uint8_t v___x_17182__boxed_1838_; lean_object* v_res_1839_; 
v___x_17181__boxed_1837_ = lean_unbox(v___x_1816_);
v___x_17182__boxed_1838_ = lean_unbox(v___x_1818_);
v_res_1839_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5(v___x_1812_, v___x_1813_, v___x_1814_, v_beta_1815_, v___x_17181__boxed_1837_, v_alpha_1817_, v___x_17182__boxed_1838_, v_numDiscrs_1819_, v___f_1820_, v_a_1821_, v_a_1822_, v_levelParams_1823_, v_matcherName_1824_, v___x_1825_, v_matcherInfo_1826_, v___x_1827_, v_f_1828_, v___x_1829_, v_uElimPos_x3f_1830_, v_rel_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_);
lean_dec(v_uElimPos_x3f_1830_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___lam__0(lean_object* v_k_1840_, lean_object* v_b_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_apply_6(v_k_1840_, v_b_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, lean_box(0));
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___lam__0___boxed(lean_object* v_k_1848_, lean_object* v_b_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___lam__0(v_k_1848_, v_b_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg(lean_object* v_name_1856_, uint8_t v_bi_1857_, lean_object* v_type_1858_, lean_object* v_k_1859_, uint8_t v_kind_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v___f_1866_; lean_object* v___x_1867_; 
v___f_1866_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1866_, 0, v_k_1859_);
v___x_1867_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1856_, v_bi_1857_, v_type_1858_, v___f_1866_, v_kind_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
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
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
v_a_1876_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1867_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1867_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg___boxed(lean_object* v_name_1884_, lean_object* v_bi_1885_, lean_object* v_type_1886_, lean_object* v_k_1887_, lean_object* v_kind_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
uint8_t v_bi_boxed_1894_; uint8_t v_kind_boxed_1895_; lean_object* v_res_1896_; 
v_bi_boxed_1894_ = lean_unbox(v_bi_1885_);
v_kind_boxed_1895_ = lean_unbox(v_kind_1888_);
v_res_1896_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg(v_name_1884_, v_bi_boxed_1894_, v_type_1886_, v_k_1887_, v_kind_boxed_1895_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(lean_object* v_name_1897_, lean_object* v_type_1898_, lean_object* v_k_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
uint8_t v___x_1905_; uint8_t v___x_1906_; lean_object* v___x_1907_; 
v___x_1905_ = 0;
v___x_1906_ = 0;
v___x_1907_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg(v_name_1897_, v___x_1905_, v_type_1898_, v_k_1899_, v___x_1906_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg___boxed(lean_object* v_name_1908_, lean_object* v_type_1909_, lean_object* v_k_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(v_name_1908_, v_type_1909_, v_k_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6(lean_object* v___x_1920_, lean_object* v___f_1921_, lean_object* v___x_1922_, lean_object* v___x_1923_, lean_object* v_beta_1924_, uint8_t v___x_1925_, lean_object* v_alpha_1926_, lean_object* v_numDiscrs_1927_, lean_object* v___f_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_levelParams_1931_, lean_object* v_matcherName_1932_, lean_object* v___x_1933_, lean_object* v_matcherInfo_1934_, lean_object* v___x_1935_, lean_object* v___x_1936_, lean_object* v_uElimPos_x3f_1937_, lean_object* v_f_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v___x_1944_; 
lean_inc(v___y_1942_);
lean_inc_ref(v___y_1941_);
lean_inc(v___y_1940_);
lean_inc_ref(v___y_1939_);
lean_inc_ref(v___x_1920_);
v___x_1944_ = lean_infer_type(v___x_1920_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; uint8_t v___x_1946_; lean_object* v___x_1947_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_1945_);
lean_dec_ref(v___x_1944_);
v___x_1946_ = 0;
lean_inc(v___y_1942_);
lean_inc_ref(v___y_1941_);
lean_inc(v___y_1940_);
lean_inc_ref(v___y_1939_);
v___x_1947_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__2___redArg(v_a_1945_, v___f_1921_, v___x_1946_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___f_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref(v___x_1947_);
v___x_1949_ = lean_box(v___x_1925_);
v___x_1950_ = lean_box(v___x_1946_);
v___f_1951_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__5___boxed), 25, 19);
lean_closure_set(v___f_1951_, 0, v___x_1920_);
lean_closure_set(v___f_1951_, 1, v___x_1922_);
lean_closure_set(v___f_1951_, 2, v___x_1923_);
lean_closure_set(v___f_1951_, 3, v_beta_1924_);
lean_closure_set(v___f_1951_, 4, v___x_1949_);
lean_closure_set(v___f_1951_, 5, v_alpha_1926_);
lean_closure_set(v___f_1951_, 6, v___x_1950_);
lean_closure_set(v___f_1951_, 7, v_numDiscrs_1927_);
lean_closure_set(v___f_1951_, 8, v___f_1928_);
lean_closure_set(v___f_1951_, 9, v_a_1929_);
lean_closure_set(v___f_1951_, 10, v_a_1930_);
lean_closure_set(v___f_1951_, 11, v_levelParams_1931_);
lean_closure_set(v___f_1951_, 12, v_matcherName_1932_);
lean_closure_set(v___f_1951_, 13, v___x_1933_);
lean_closure_set(v___f_1951_, 14, v_matcherInfo_1934_);
lean_closure_set(v___f_1951_, 15, v___x_1935_);
lean_closure_set(v___f_1951_, 16, v_f_1938_);
lean_closure_set(v___f_1951_, 17, v___x_1936_);
lean_closure_set(v___f_1951_, 18, v_uElimPos_x3f_1937_);
v___x_1952_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___closed__1));
v___x_1953_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(v___x_1952_, v_a_1948_, v___f_1951_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
return v___x_1953_;
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec_ref(v_f_1938_);
lean_dec(v_uElimPos_x3f_1937_);
lean_dec(v___x_1936_);
lean_dec(v___x_1935_);
lean_dec_ref(v_matcherInfo_1934_);
lean_dec_ref(v___x_1933_);
lean_dec(v_matcherName_1932_);
lean_dec(v_levelParams_1931_);
lean_dec(v_a_1930_);
lean_dec(v_a_1929_);
lean_dec_ref(v___f_1928_);
lean_dec(v_numDiscrs_1927_);
lean_dec_ref(v_alpha_1926_);
lean_dec_ref(v_beta_1924_);
lean_dec(v___x_1923_);
lean_dec_ref(v___x_1922_);
lean_dec_ref(v___x_1920_);
v_a_1954_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1947_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1947_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec_ref(v_f_1938_);
lean_dec(v_uElimPos_x3f_1937_);
lean_dec(v___x_1936_);
lean_dec(v___x_1935_);
lean_dec_ref(v_matcherInfo_1934_);
lean_dec_ref(v___x_1933_);
lean_dec(v_matcherName_1932_);
lean_dec(v_levelParams_1931_);
lean_dec(v_a_1930_);
lean_dec(v_a_1929_);
lean_dec_ref(v___f_1928_);
lean_dec(v_numDiscrs_1927_);
lean_dec_ref(v_alpha_1926_);
lean_dec_ref(v_beta_1924_);
lean_dec(v___x_1923_);
lean_dec_ref(v___x_1922_);
lean_dec_ref(v___f_1921_);
lean_dec_ref(v___x_1920_);
v_a_1962_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1944_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1944_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___boxed(lean_object** _args){
lean_object* v___x_1970_ = _args[0];
lean_object* v___f_1971_ = _args[1];
lean_object* v___x_1972_ = _args[2];
lean_object* v___x_1973_ = _args[3];
lean_object* v_beta_1974_ = _args[4];
lean_object* v___x_1975_ = _args[5];
lean_object* v_alpha_1976_ = _args[6];
lean_object* v_numDiscrs_1977_ = _args[7];
lean_object* v___f_1978_ = _args[8];
lean_object* v_a_1979_ = _args[9];
lean_object* v_a_1980_ = _args[10];
lean_object* v_levelParams_1981_ = _args[11];
lean_object* v_matcherName_1982_ = _args[12];
lean_object* v___x_1983_ = _args[13];
lean_object* v_matcherInfo_1984_ = _args[14];
lean_object* v___x_1985_ = _args[15];
lean_object* v___x_1986_ = _args[16];
lean_object* v_uElimPos_x3f_1987_ = _args[17];
lean_object* v_f_1988_ = _args[18];
lean_object* v___y_1989_ = _args[19];
lean_object* v___y_1990_ = _args[20];
lean_object* v___y_1991_ = _args[21];
lean_object* v___y_1992_ = _args[22];
lean_object* v___y_1993_ = _args[23];
_start:
{
uint8_t v___x_17485__boxed_1994_; lean_object* v_res_1995_; 
v___x_17485__boxed_1994_ = lean_unbox(v___x_1975_);
v_res_1995_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6(v___x_1970_, v___f_1971_, v___x_1972_, v___x_1973_, v_beta_1974_, v___x_17485__boxed_1994_, v_alpha_1976_, v_numDiscrs_1977_, v___f_1978_, v_a_1979_, v_a_1980_, v_levelParams_1981_, v_matcherName_1982_, v___x_1983_, v_matcherInfo_1984_, v___x_1985_, v___x_1986_, v_uElimPos_x3f_1987_, v_f_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7(lean_object* v___x_2002_, lean_object* v_alpha_2003_, lean_object* v___x_2004_, lean_object* v___x_2005_, lean_object* v_numDiscrs_2006_, lean_object* v___f_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_levelParams_2010_, lean_object* v_matcherName_2011_, lean_object* v___x_2012_, lean_object* v_matcherInfo_2013_, lean_object* v___x_2014_, lean_object* v_uElimPos_x3f_2015_, lean_object* v_beta_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; lean_object* v___f_2028_; lean_object* v___x_2029_; lean_object* v___f_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2022_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__1));
v___x_2023_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___closed__3));
lean_inc(v___x_2002_);
v___x_2024_ = l_Lean_Expr_bvar___override(v___x_2002_);
lean_inc_ref(v___x_2024_);
lean_inc_ref(v_beta_2016_);
v___x_2025_ = l_Lean_Expr_app___override(v_beta_2016_, v___x_2024_);
v___x_2026_ = 0;
v___x_2027_ = lean_box(v___x_2026_);
lean_inc_ref(v_alpha_2003_);
lean_inc(v___x_2002_);
v___f_2028_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__1___boxed), 11, 4);
lean_closure_set(v___f_2028_, 0, v___x_2002_);
lean_closure_set(v___f_2028_, 1, v___x_2023_);
lean_closure_set(v___f_2028_, 2, v_alpha_2003_);
lean_closure_set(v___f_2028_, 3, v___x_2027_);
v___x_2029_ = lean_box(v___x_2026_);
lean_inc_ref(v_alpha_2003_);
v___f_2030_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__6___boxed), 24, 18);
lean_closure_set(v___f_2030_, 0, v___x_2004_);
lean_closure_set(v___f_2030_, 1, v___f_2028_);
lean_closure_set(v___f_2030_, 2, v___x_2024_);
lean_closure_set(v___f_2030_, 3, v___x_2005_);
lean_closure_set(v___f_2030_, 4, v_beta_2016_);
lean_closure_set(v___f_2030_, 5, v___x_2029_);
lean_closure_set(v___f_2030_, 6, v_alpha_2003_);
lean_closure_set(v___f_2030_, 7, v_numDiscrs_2006_);
lean_closure_set(v___f_2030_, 8, v___f_2007_);
lean_closure_set(v___f_2030_, 9, v_a_2008_);
lean_closure_set(v___f_2030_, 10, v_a_2009_);
lean_closure_set(v___f_2030_, 11, v_levelParams_2010_);
lean_closure_set(v___f_2030_, 12, v_matcherName_2011_);
lean_closure_set(v___f_2030_, 13, v___x_2012_);
lean_closure_set(v___f_2030_, 14, v_matcherInfo_2013_);
lean_closure_set(v___f_2030_, 15, v___x_2002_);
lean_closure_set(v___f_2030_, 16, v___x_2014_);
lean_closure_set(v___f_2030_, 17, v_uElimPos_x3f_2015_);
v___x_2031_ = l_Lean_Expr_forallE___override(v___x_2023_, v_alpha_2003_, v___x_2025_, v___x_2026_);
v___x_2032_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(v___x_2022_, v___x_2031_, v___f_2030_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___boxed(lean_object** _args){
lean_object* v___x_2033_ = _args[0];
lean_object* v_alpha_2034_ = _args[1];
lean_object* v___x_2035_ = _args[2];
lean_object* v___x_2036_ = _args[3];
lean_object* v_numDiscrs_2037_ = _args[4];
lean_object* v___f_2038_ = _args[5];
lean_object* v_a_2039_ = _args[6];
lean_object* v_a_2040_ = _args[7];
lean_object* v_levelParams_2041_ = _args[8];
lean_object* v_matcherName_2042_ = _args[9];
lean_object* v___x_2043_ = _args[10];
lean_object* v_matcherInfo_2044_ = _args[11];
lean_object* v___x_2045_ = _args[12];
lean_object* v_uElimPos_x3f_2046_ = _args[13];
lean_object* v_beta_2047_ = _args[14];
lean_object* v___y_2048_ = _args[15];
lean_object* v___y_2049_ = _args[16];
lean_object* v___y_2050_ = _args[17];
lean_object* v___y_2051_ = _args[18];
lean_object* v___y_2052_ = _args[19];
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7(v___x_2033_, v_alpha_2034_, v___x_2035_, v___x_2036_, v_numDiscrs_2037_, v___f_2038_, v_a_2039_, v_a_2040_, v_levelParams_2041_, v_matcherName_2042_, v___x_2043_, v_matcherInfo_2044_, v___x_2045_, v_uElimPos_x3f_2046_, v_beta_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8(lean_object* v_a_2057_, lean_object* v___x_2058_, lean_object* v___x_2059_, lean_object* v___x_2060_, lean_object* v_numDiscrs_2061_, lean_object* v___f_2062_, lean_object* v_a_2063_, lean_object* v_levelParams_2064_, lean_object* v_matcherName_2065_, lean_object* v___x_2066_, lean_object* v_matcherInfo_2067_, lean_object* v___x_2068_, lean_object* v_uElimPos_x3f_2069_, lean_object* v_alpha_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_inc(v_a_2057_);
v___x_2076_ = l_Lean_Level_param___override(v_a_2057_);
v___x_2077_ = l_Lean_Expr_sort___override(v___x_2076_);
lean_inc(v___y_2074_);
lean_inc_ref(v___y_2073_);
lean_inc_ref(v_alpha_2070_);
v___x_2078_ = l_Lean_mkArrow(v_alpha_2070_, v___x_2077_, v___y_2073_, v___y_2074_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; lean_object* v___f_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref(v___x_2078_);
v___f_2080_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__7___boxed), 20, 14);
lean_closure_set(v___f_2080_, 0, v___x_2058_);
lean_closure_set(v___f_2080_, 1, v_alpha_2070_);
lean_closure_set(v___f_2080_, 2, v___x_2059_);
lean_closure_set(v___f_2080_, 3, v___x_2060_);
lean_closure_set(v___f_2080_, 4, v_numDiscrs_2061_);
lean_closure_set(v___f_2080_, 5, v___f_2062_);
lean_closure_set(v___f_2080_, 6, v_a_2057_);
lean_closure_set(v___f_2080_, 7, v_a_2063_);
lean_closure_set(v___f_2080_, 8, v_levelParams_2064_);
lean_closure_set(v___f_2080_, 9, v_matcherName_2065_);
lean_closure_set(v___f_2080_, 10, v___x_2066_);
lean_closure_set(v___f_2080_, 11, v_matcherInfo_2067_);
lean_closure_set(v___f_2080_, 12, v___x_2068_);
lean_closure_set(v___f_2080_, 13, v_uElimPos_x3f_2069_);
v___x_2081_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___closed__1));
v___x_2082_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(v___x_2081_, v_a_2079_, v___f_2080_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
return v___x_2082_;
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec_ref(v_alpha_2070_);
lean_dec(v_uElimPos_x3f_2069_);
lean_dec(v___x_2068_);
lean_dec_ref(v_matcherInfo_2067_);
lean_dec_ref(v___x_2066_);
lean_dec(v_matcherName_2065_);
lean_dec(v_levelParams_2064_);
lean_dec(v_a_2063_);
lean_dec_ref(v___f_2062_);
lean_dec(v_numDiscrs_2061_);
lean_dec(v___x_2060_);
lean_dec_ref(v___x_2059_);
lean_dec(v___x_2058_);
lean_dec(v_a_2057_);
v_a_2083_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2078_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2078_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___boxed(lean_object** _args){
lean_object* v_a_2091_ = _args[0];
lean_object* v___x_2092_ = _args[1];
lean_object* v___x_2093_ = _args[2];
lean_object* v___x_2094_ = _args[3];
lean_object* v_numDiscrs_2095_ = _args[4];
lean_object* v___f_2096_ = _args[5];
lean_object* v_a_2097_ = _args[6];
lean_object* v_levelParams_2098_ = _args[7];
lean_object* v_matcherName_2099_ = _args[8];
lean_object* v___x_2100_ = _args[9];
lean_object* v_matcherInfo_2101_ = _args[10];
lean_object* v___x_2102_ = _args[11];
lean_object* v_uElimPos_x3f_2103_ = _args[12];
lean_object* v_alpha_2104_ = _args[13];
lean_object* v___y_2105_ = _args[14];
lean_object* v___y_2106_ = _args[15];
lean_object* v___y_2107_ = _args[16];
lean_object* v___y_2108_ = _args[17];
lean_object* v___y_2109_ = _args[18];
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8(v_a_2091_, v___x_2092_, v___x_2093_, v___x_2094_, v_numDiscrs_2095_, v___f_2096_, v_a_2097_, v_levelParams_2098_, v_matcherName_2099_, v___x_2100_, v_matcherInfo_2101_, v___x_2102_, v_uElimPos_x3f_2103_, v_alpha_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9(lean_object* v_numParams_2120_, lean_object* v___x_2121_, lean_object* v___x_2122_, lean_object* v_numDiscrs_2123_, lean_object* v___f_2124_, lean_object* v_levelParams_2125_, lean_object* v_matcherName_2126_, lean_object* v_matcherInfo_2127_, lean_object* v___x_2128_, lean_object* v_uElimPos_x3f_2129_, lean_object* v_xs_2130_, lean_object* v_x_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__1));
lean_inc(v___y_2135_);
lean_inc_ref(v___y_2134_);
v___x_2138_ = l_Lean_Core_mkFreshUserName(v___x_2137_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref(v___x_2138_);
v___x_2140_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__3));
lean_inc(v___y_2135_);
lean_inc_ref(v___y_2134_);
v___x_2141_ = l_Lean_Core_mkFreshUserName(v___x_2140_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___f_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref(v___x_2141_);
v___x_2143_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2120_);
lean_inc_ref(v_xs_2130_);
v___x_2144_ = l_Array_toSubarray___redArg(v_xs_2130_, v___x_2143_, v_numParams_2120_);
v___x_2145_ = lean_array_get(v___x_2121_, v_xs_2130_, v_numParams_2120_);
lean_dec(v_numParams_2120_);
lean_dec_ref(v_xs_2130_);
lean_inc(v_a_2139_);
v___f_2146_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__8___boxed), 19, 13);
lean_closure_set(v___f_2146_, 0, v_a_2142_);
lean_closure_set(v___f_2146_, 1, v___x_2143_);
lean_closure_set(v___f_2146_, 2, v___x_2145_);
lean_closure_set(v___f_2146_, 3, v___x_2122_);
lean_closure_set(v___f_2146_, 4, v_numDiscrs_2123_);
lean_closure_set(v___f_2146_, 5, v___f_2124_);
lean_closure_set(v___f_2146_, 6, v_a_2139_);
lean_closure_set(v___f_2146_, 7, v_levelParams_2125_);
lean_closure_set(v___f_2146_, 8, v_matcherName_2126_);
lean_closure_set(v___f_2146_, 9, v___x_2144_);
lean_closure_set(v___f_2146_, 10, v_matcherInfo_2127_);
lean_closure_set(v___f_2146_, 11, v___x_2128_);
lean_closure_set(v___f_2146_, 12, v_uElimPos_x3f_2129_);
v___x_2147_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___closed__5));
v___x_2148_ = l_Lean_Level_param___override(v_a_2139_);
v___x_2149_ = l_Lean_Expr_sort___override(v___x_2148_);
v___x_2150_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(v___x_2147_, v___x_2149_, v___f_2146_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
return v___x_2150_;
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec(v_a_2139_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec_ref(v_xs_2130_);
lean_dec(v_uElimPos_x3f_2129_);
lean_dec(v___x_2128_);
lean_dec_ref(v_matcherInfo_2127_);
lean_dec(v_matcherName_2126_);
lean_dec(v_levelParams_2125_);
lean_dec_ref(v___f_2124_);
lean_dec(v_numDiscrs_2123_);
lean_dec(v___x_2122_);
lean_dec_ref(v___x_2121_);
lean_dec(v_numParams_2120_);
v_a_2151_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2141_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2141_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec_ref(v_xs_2130_);
lean_dec(v_uElimPos_x3f_2129_);
lean_dec(v___x_2128_);
lean_dec_ref(v_matcherInfo_2127_);
lean_dec(v_matcherName_2126_);
lean_dec(v_levelParams_2125_);
lean_dec_ref(v___f_2124_);
lean_dec(v_numDiscrs_2123_);
lean_dec(v___x_2122_);
lean_dec_ref(v___x_2121_);
lean_dec(v_numParams_2120_);
v_a_2159_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2138_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2138_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___boxed(lean_object** _args){
lean_object* v_numParams_2167_ = _args[0];
lean_object* v___x_2168_ = _args[1];
lean_object* v___x_2169_ = _args[2];
lean_object* v_numDiscrs_2170_ = _args[3];
lean_object* v___f_2171_ = _args[4];
lean_object* v_levelParams_2172_ = _args[5];
lean_object* v_matcherName_2173_ = _args[6];
lean_object* v_matcherInfo_2174_ = _args[7];
lean_object* v___x_2175_ = _args[8];
lean_object* v_uElimPos_x3f_2176_ = _args[9];
lean_object* v_xs_2177_ = _args[10];
lean_object* v_x_2178_ = _args[11];
lean_object* v___y_2179_ = _args[12];
lean_object* v___y_2180_ = _args[13];
lean_object* v___y_2181_ = _args[14];
lean_object* v___y_2182_ = _args[15];
lean_object* v___y_2183_ = _args[16];
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9(v_numParams_2167_, v___x_2168_, v___x_2169_, v_numDiscrs_2170_, v___f_2171_, v_levelParams_2172_, v_matcherName_2173_, v_matcherInfo_2174_, v___x_2175_, v_uElimPos_x3f_2176_, v_xs_2177_, v_x_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_);
lean_dec_ref(v_x_2178_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg(lean_object* v_ref_2185_, lean_object* v_msg_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_fileName_2192_; lean_object* v_fileMap_2193_; lean_object* v_options_2194_; lean_object* v_currRecDepth_2195_; lean_object* v_maxRecDepth_2196_; lean_object* v_ref_2197_; lean_object* v_currNamespace_2198_; lean_object* v_openDecls_2199_; lean_object* v_initHeartbeats_2200_; lean_object* v_maxHeartbeats_2201_; lean_object* v_quotContext_2202_; lean_object* v_currMacroScope_2203_; uint8_t v_diag_2204_; lean_object* v_cancelTk_x3f_2205_; uint8_t v_suppressElabErrors_2206_; lean_object* v_inheritedTraceOptions_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2216_; 
v_fileName_2192_ = lean_ctor_get(v___y_2189_, 0);
v_fileMap_2193_ = lean_ctor_get(v___y_2189_, 1);
v_options_2194_ = lean_ctor_get(v___y_2189_, 2);
v_currRecDepth_2195_ = lean_ctor_get(v___y_2189_, 3);
v_maxRecDepth_2196_ = lean_ctor_get(v___y_2189_, 4);
v_ref_2197_ = lean_ctor_get(v___y_2189_, 5);
v_currNamespace_2198_ = lean_ctor_get(v___y_2189_, 6);
v_openDecls_2199_ = lean_ctor_get(v___y_2189_, 7);
v_initHeartbeats_2200_ = lean_ctor_get(v___y_2189_, 8);
v_maxHeartbeats_2201_ = lean_ctor_get(v___y_2189_, 9);
v_quotContext_2202_ = lean_ctor_get(v___y_2189_, 10);
v_currMacroScope_2203_ = lean_ctor_get(v___y_2189_, 11);
v_diag_2204_ = lean_ctor_get_uint8(v___y_2189_, sizeof(void*)*14);
v_cancelTk_x3f_2205_ = lean_ctor_get(v___y_2189_, 12);
v_suppressElabErrors_2206_ = lean_ctor_get_uint8(v___y_2189_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2207_ = lean_ctor_get(v___y_2189_, 13);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___y_2189_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2209_ = v___y_2189_;
v_isShared_2210_ = v_isSharedCheck_2216_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_inheritedTraceOptions_2207_);
lean_inc(v_cancelTk_x3f_2205_);
lean_inc(v_currMacroScope_2203_);
lean_inc(v_quotContext_2202_);
lean_inc(v_maxHeartbeats_2201_);
lean_inc(v_initHeartbeats_2200_);
lean_inc(v_openDecls_2199_);
lean_inc(v_currNamespace_2198_);
lean_inc(v_ref_2197_);
lean_inc(v_maxRecDepth_2196_);
lean_inc(v_currRecDepth_2195_);
lean_inc(v_options_2194_);
lean_inc(v_fileMap_2193_);
lean_inc(v_fileName_2192_);
lean_dec(v___y_2189_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2216_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v_ref_2211_; lean_object* v___x_2213_; 
v_ref_2211_ = l_Lean_replaceRef(v_ref_2185_, v_ref_2197_);
lean_dec(v_ref_2197_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 5, v_ref_2211_);
v___x_2213_ = v___x_2209_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_fileName_2192_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_fileMap_2193_);
lean_ctor_set(v_reuseFailAlloc_2215_, 2, v_options_2194_);
lean_ctor_set(v_reuseFailAlloc_2215_, 3, v_currRecDepth_2195_);
lean_ctor_set(v_reuseFailAlloc_2215_, 4, v_maxRecDepth_2196_);
lean_ctor_set(v_reuseFailAlloc_2215_, 5, v_ref_2211_);
lean_ctor_set(v_reuseFailAlloc_2215_, 6, v_currNamespace_2198_);
lean_ctor_set(v_reuseFailAlloc_2215_, 7, v_openDecls_2199_);
lean_ctor_set(v_reuseFailAlloc_2215_, 8, v_initHeartbeats_2200_);
lean_ctor_set(v_reuseFailAlloc_2215_, 9, v_maxHeartbeats_2201_);
lean_ctor_set(v_reuseFailAlloc_2215_, 10, v_quotContext_2202_);
lean_ctor_set(v_reuseFailAlloc_2215_, 11, v_currMacroScope_2203_);
lean_ctor_set(v_reuseFailAlloc_2215_, 12, v_cancelTk_x3f_2205_);
lean_ctor_set(v_reuseFailAlloc_2215_, 13, v_inheritedTraceOptions_2207_);
lean_ctor_set_uint8(v_reuseFailAlloc_2215_, sizeof(void*)*14, v_diag_2204_);
lean_ctor_set_uint8(v_reuseFailAlloc_2215_, sizeof(void*)*14 + 1, v_suppressElabErrors_2206_);
v___x_2213_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2214_; 
v___x_2214_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(v_msg_2186_, v___y_2187_, v___y_2188_, v___x_2213_, v___y_2190_);
lean_dec_ref(v___x_2213_);
return v___x_2214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg___boxed(lean_object* v_ref_2217_, lean_object* v_msg_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg(v_ref_2217_, v_msg_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v_ref_2217_);
return v_res_2224_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2225_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__0);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1);
v___x_2229_ = lean_unsigned_to_nat(0u);
v___x_2230_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___x_2229_);
lean_ctor_set(v___x_2230_, 2, v___x_2229_);
lean_ctor_set(v___x_2230_, 3, v___x_2228_);
lean_ctor_set(v___x_2230_, 4, v___x_2228_);
lean_ctor_set(v___x_2230_, 5, v___x_2228_);
lean_ctor_set(v___x_2230_, 6, v___x_2228_);
lean_ctor_set(v___x_2230_, 7, v___x_2228_);
lean_ctor_set(v___x_2230_, 8, v___x_2228_);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2231_ = lean_unsigned_to_nat(32u);
v___x_2232_ = lean_mk_empty_array_with_capacity(v___x_2231_);
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
return v___x_2233_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__4(void){
_start:
{
size_t v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2234_ = ((size_t)5ULL);
v___x_2235_ = lean_unsigned_to_nat(0u);
v___x_2236_ = lean_unsigned_to_nat(32u);
v___x_2237_ = lean_mk_empty_array_with_capacity(v___x_2236_);
v___x_2238_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__3);
v___x_2239_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2239_, 0, v___x_2238_);
lean_ctor_set(v___x_2239_, 1, v___x_2237_);
lean_ctor_set(v___x_2239_, 2, v___x_2235_);
lean_ctor_set(v___x_2239_, 3, v___x_2235_);
lean_ctor_set_usize(v___x_2239_, 4, v___x_2234_);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5(void){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2240_ = lean_box(1);
v___x_2241_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__4);
v___x_2242_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__1);
v___x_2243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2242_);
lean_ctor_set(v___x_2243_, 1, v___x_2241_);
lean_ctor_set(v___x_2243_, 2, v___x_2240_);
return v___x_2243_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2245_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__6));
v___x_2246_ = l_Lean_stringToMessageData(v___x_2245_);
return v___x_2246_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__8));
v___x_2249_ = l_Lean_stringToMessageData(v___x_2248_);
return v___x_2249_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__10));
v___x_2252_ = l_Lean_stringToMessageData(v___x_2251_);
return v___x_2252_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2254_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__12));
v___x_2255_ = l_Lean_stringToMessageData(v___x_2254_);
return v___x_2255_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15(void){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__14));
v___x_2258_ = l_Lean_stringToMessageData(v___x_2257_);
return v___x_2258_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17(void){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2260_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__16));
v___x_2261_ = l_Lean_stringToMessageData(v___x_2260_);
return v___x_2261_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19(void){
_start:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2263_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__18));
v___x_2264_ = l_Lean_stringToMessageData(v___x_2263_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg(lean_object* v_msg_2265_, lean_object* v_declHint_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v___x_2269_; lean_object* v_env_2270_; uint8_t v___x_2271_; 
v___x_2269_ = lean_st_ref_get(v___y_2267_);
v_env_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc_ref(v_env_2270_);
lean_dec(v___x_2269_);
v___x_2271_ = l_Lean_Name_isAnonymous(v_declHint_2266_);
if (v___x_2271_ == 0)
{
uint8_t v_isExporting_2272_; 
v_isExporting_2272_ = lean_ctor_get_uint8(v_env_2270_, sizeof(void*)*8);
if (v_isExporting_2272_ == 0)
{
lean_object* v___x_2273_; 
lean_dec_ref(v_env_2270_);
lean_dec(v_declHint_2266_);
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v_msg_2265_);
return v___x_2273_;
}
else
{
lean_object* v___x_2274_; uint8_t v___x_2275_; 
lean_inc_ref(v_env_2270_);
v___x_2274_ = l_Lean_Environment_setExporting(v_env_2270_, v___x_2271_);
lean_inc(v_declHint_2266_);
lean_inc_ref(v___x_2274_);
v___x_2275_ = l_Lean_Environment_contains(v___x_2274_, v_declHint_2266_, v_isExporting_2272_);
if (v___x_2275_ == 0)
{
lean_object* v___x_2276_; 
lean_dec_ref(v___x_2274_);
lean_dec_ref(v_env_2270_);
lean_dec(v_declHint_2266_);
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v_msg_2265_);
return v___x_2276_;
}
else
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v_c_2282_; lean_object* v___x_2283_; 
v___x_2277_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2);
v___x_2278_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5);
v___x_2279_ = l_Lean_Options_empty;
v___x_2280_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2274_);
lean_ctor_set(v___x_2280_, 1, v___x_2277_);
lean_ctor_set(v___x_2280_, 2, v___x_2278_);
lean_ctor_set(v___x_2280_, 3, v___x_2279_);
lean_inc(v_declHint_2266_);
v___x_2281_ = l_Lean_MessageData_ofConstName(v_declHint_2266_, v___x_2271_);
v_c_2282_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2282_, 0, v___x_2280_);
lean_ctor_set(v_c_2282_, 1, v___x_2281_);
v___x_2283_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2270_, v_declHint_2266_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
lean_dec_ref(v_env_2270_);
lean_dec(v_declHint_2266_);
v___x_2284_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7);
v___x_2285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
lean_ctor_set(v___x_2285_, 1, v_c_2282_);
v___x_2286_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9);
v___x_2287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2285_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = l_Lean_MessageData_note(v___x_2287_);
v___x_2289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2289_, 0, v_msg_2265_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2289_);
return v___x_2290_;
}
else
{
lean_object* v_val_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2326_; 
v_val_2291_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2293_ = v___x_2283_;
v_isShared_2294_ = v_isSharedCheck_2326_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_val_2291_);
lean_dec(v___x_2283_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2326_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v_mod_2298_; uint8_t v___x_2299_; 
v___x_2295_ = lean_box(0);
v___x_2296_ = l_Lean_Environment_header(v_env_2270_);
lean_dec_ref(v_env_2270_);
v___x_2297_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2296_);
v_mod_2298_ = lean_array_get(v___x_2295_, v___x_2297_, v_val_2291_);
lean_dec(v_val_2291_);
lean_dec_ref(v___x_2297_);
v___x_2299_ = l_Lean_isPrivateName(v_declHint_2266_);
lean_dec(v_declHint_2266_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2311_; 
v___x_2300_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11);
v___x_2301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v_c_2282_);
v___x_2302_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13);
v___x_2303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = l_Lean_MessageData_ofName(v_mod_2298_);
v___x_2305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2303_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15);
v___x_2307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2305_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
v___x_2308_ = l_Lean_MessageData_note(v___x_2307_);
v___x_2309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2309_, 0, v_msg_2265_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2309_);
v___x_2311_ = v___x_2293_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2324_; 
v___x_2313_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
lean_ctor_set(v___x_2314_, 1, v_c_2282_);
v___x_2315_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = l_Lean_MessageData_ofName(v_mod_2298_);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19);
v___x_2320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = l_Lean_MessageData_note(v___x_2320_);
v___x_2322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2322_, 0, v_msg_2265_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2322_);
v___x_2324_ = v___x_2293_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2327_; 
lean_dec_ref(v_env_2270_);
lean_dec(v_declHint_2266_);
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v_msg_2265_);
return v___x_2327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___boxed(lean_object* v_msg_2328_, lean_object* v_declHint_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg(v_msg_2328_, v_declHint_2329_, v___y_2330_);
lean_dec(v___y_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11(lean_object* v_msg_2333_, lean_object* v_declHint_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v___x_2340_; lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2350_; 
v___x_2340_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg(v_msg_2333_, v_declHint_2334_, v___y_2338_);
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2343_ = v___x_2340_;
v_isShared_2344_ = v_isSharedCheck_2350_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2350_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2348_; 
v___x_2345_ = l_Lean_unknownIdentifierMessageTag;
v___x_2346_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2345_);
lean_ctor_set(v___x_2346_, 1, v_a_2341_);
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 0, v___x_2346_);
v___x_2348_ = v___x_2343_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11___boxed(lean_object* v_msg_2351_, lean_object* v_declHint_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11(v_msg_2351_, v_declHint_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg(lean_object* v_ref_2359_, lean_object* v_msg_2360_, lean_object* v_declHint_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v___x_2367_; lean_object* v_a_2368_; lean_object* v___x_2369_; 
v___x_2367_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11(v_msg_2360_, v_declHint_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref(v___x_2367_);
v___x_2369_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg(v_ref_2359_, v_a_2368_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg___boxed(lean_object* v_ref_2370_, lean_object* v_msg_2371_, lean_object* v_declHint_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg(v_ref_2370_, v_msg_2371_, v_declHint_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_);
lean_dec(v___y_2376_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v_ref_2370_);
return v_res_2378_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2380_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__0));
v___x_2381_ = l_Lean_stringToMessageData(v___x_2380_);
return v___x_2381_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__2));
v___x_2384_ = l_Lean_stringToMessageData(v___x_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg(lean_object* v_ref_2385_, lean_object* v_constName_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v___x_2392_; uint8_t v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2392_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1);
v___x_2393_ = 0;
lean_inc(v_constName_2386_);
v___x_2394_ = l_Lean_MessageData_ofConstName(v_constName_2386_, v___x_2393_);
v___x_2395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2392_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
v___x_2396_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_2397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg(v_ref_2385_, v___x_2397_, v_constName_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_ref_2399_, lean_object* v_constName_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg(v_ref_2399_, v_constName_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
lean_dec(v___y_2404_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v_ref_2399_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg(lean_object* v_constName_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v_ref_2413_; lean_object* v___x_2414_; 
v_ref_2413_ = lean_ctor_get(v___y_2410_, 5);
lean_inc(v_ref_2413_);
v___x_2414_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg(v_ref_2413_, v_constName_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
lean_dec(v_ref_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg(v_constName_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0(lean_object* v_constName_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
lean_object* v___x_2428_; lean_object* v_env_2429_; uint8_t v___x_2430_; lean_object* v___x_2431_; 
v___x_2428_ = lean_st_ref_get(v___y_2426_);
v_env_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc_ref(v_env_2429_);
lean_dec(v___x_2428_);
v___x_2430_ = 0;
lean_inc(v_constName_2422_);
v___x_2431_ = l_Lean_Environment_findConstVal_x3f(v_env_2429_, v_constName_2422_, v___x_2430_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v___x_2432_; 
v___x_2432_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg(v_constName_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
return v___x_2432_;
}
else
{
lean_object* v_val_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
lean_dec_ref(v___y_2425_);
lean_dec(v_constName_2422_);
v_val_2433_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2431_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_val_2433_);
lean_dec(v___x_2431_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 0);
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_val_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0___boxed(lean_object* v_constName_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0(v_constName_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
lean_dec(v___y_2445_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__10(lean_object* v_matcherName_2448_, lean_object* v_matcherInfo_2449_, lean_object* v___x_2450_, lean_object* v___f_2451_, lean_object* v___x_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v___x_2458_; 
lean_inc_ref(v___y_2455_);
lean_inc(v_matcherName_2448_);
v___x_2458_ = l_Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0(v_matcherName_2448_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v_levelParams_2460_; lean_object* v_type_2461_; lean_object* v_numParams_2462_; lean_object* v_numDiscrs_2463_; lean_object* v_uElimPos_x3f_2464_; lean_object* v___x_2465_; lean_object* v___f_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; uint8_t v___x_2469_; lean_object* v___x_2470_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref(v___x_2458_);
v_levelParams_2460_ = lean_ctor_get(v_a_2459_, 1);
lean_inc(v_levelParams_2460_);
v_type_2461_ = lean_ctor_get(v_a_2459_, 2);
lean_inc_ref(v_type_2461_);
lean_dec(v_a_2459_);
v_numParams_2462_ = lean_ctor_get(v_matcherInfo_2449_, 0);
lean_inc(v_numParams_2462_);
v_numDiscrs_2463_ = lean_ctor_get(v_matcherInfo_2449_, 1);
lean_inc(v_numDiscrs_2463_);
v_uElimPos_x3f_2464_ = lean_ctor_get(v_matcherInfo_2449_, 3);
lean_inc(v_uElimPos_x3f_2464_);
v___x_2465_ = lean_unsigned_to_nat(1u);
lean_inc(v_numParams_2462_);
v___f_2466_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__9___boxed), 17, 10);
lean_closure_set(v___f_2466_, 0, v_numParams_2462_);
lean_closure_set(v___f_2466_, 1, v___x_2450_);
lean_closure_set(v___f_2466_, 2, v___x_2465_);
lean_closure_set(v___f_2466_, 3, v_numDiscrs_2463_);
lean_closure_set(v___f_2466_, 4, v___f_2451_);
lean_closure_set(v___f_2466_, 5, v_levelParams_2460_);
lean_closure_set(v___f_2466_, 6, v_matcherName_2448_);
lean_closure_set(v___f_2466_, 7, v_matcherInfo_2449_);
lean_closure_set(v___f_2466_, 8, v___x_2452_);
lean_closure_set(v___f_2466_, 9, v_uElimPos_x3f_2464_);
v___x_2467_ = lean_nat_add(v_numParams_2462_, v___x_2465_);
lean_dec(v_numParams_2462_);
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
v___x_2469_ = 0;
v___x_2470_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg(v_type_2461_, v___x_2468_, v___f_2466_, v___x_2469_, v___x_2469_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_);
return v___x_2470_;
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___x_2452_);
lean_dec_ref(v___f_2451_);
lean_dec_ref(v___x_2450_);
lean_dec_ref(v_matcherInfo_2449_);
lean_dec(v_matcherName_2448_);
v_a_2471_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2458_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2458_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__10___boxed(lean_object* v_matcherName_2479_, lean_object* v_matcherInfo_2480_, lean_object* v___x_2481_, lean_object* v___f_2482_, lean_object* v___x_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__10(v_matcherName_2479_, v_matcherInfo_2480_, v___x_2481_, v___f_2482_, v___x_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__11(lean_object* v___x_2490_, lean_object* v_e_2491_){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = l_Lean_indentD(v_e_2491_);
v___x_2493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2490_);
lean_ctor_set(v___x_2493_, 1, v___x_2492_);
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__12(lean_object* v___f_2494_, lean_object* v___f_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v___x_2501_; 
v___x_2501_ = l_Lean_Meta_mapErrorImp___redArg(v___f_2494_, v___f_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2501_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2501_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2502_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
v_a_2510_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2501_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2501_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__12___boxed(lean_object* v___f_2518_, lean_object* v___f_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__12(v___f_2518_, v___f_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
return v_res_2525_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__4(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__3));
v___x_2532_ = l_Lean_stringToMessageData(v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher(lean_object* v_matcherName_2533_, lean_object* v_matcherInfo_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_){
_start:
{
lean_object* v___x_2540_; lean_object* v_env_2541_; lean_object* v___f_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___f_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___f_2551_; lean_object* v___f_2552_; lean_object* v___x_2553_; 
v___x_2540_ = lean_st_ref_get(v_a_2538_);
v_env_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc_ref(v_env_2541_);
lean_dec(v___x_2540_);
v___f_2542_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__0));
v___x_2543_ = l_Lean_instInhabitedExpr;
lean_inc(v_matcherName_2533_);
v___x_2544_ = l_Lean_mkPrivateName(v_env_2541_, v_matcherName_2533_);
lean_dec_ref(v_env_2541_);
v___x_2545_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__2));
v___x_2546_ = l_Lean_Name_append(v___x_2544_, v___x_2545_);
lean_inc(v___x_2546_);
lean_inc(v_matcherName_2533_);
v___f_2547_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__10___boxed), 10, 5);
lean_closure_set(v___f_2547_, 0, v_matcherName_2533_);
lean_closure_set(v___f_2547_, 1, v_matcherInfo_2534_);
lean_closure_set(v___f_2547_, 2, v___x_2543_);
lean_closure_set(v___f_2547_, 3, v___f_2542_);
lean_closure_set(v___f_2547_, 4, v___x_2546_);
v___x_2548_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___closed__4);
lean_inc(v_matcherName_2533_);
v___x_2549_ = l_Lean_MessageData_ofName(v_matcherName_2533_);
v___x_2550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
v___f_2551_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__11), 2, 1);
lean_closure_set(v___f_2551_, 0, v___x_2550_);
v___f_2552_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__12___boxed), 7, 2);
lean_closure_set(v___f_2552_, 0, v___f_2547_);
lean_closure_set(v___f_2552_, 1, v___f_2551_);
lean_inc(v___x_2546_);
v___x_2553_ = l_Lean_Meta_realizeConst(v_matcherName_2533_, v___x_2546_, v___f_2552_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2560_ == 0)
{
lean_object* v_unused_2561_; 
v_unused_2561_ = lean_ctor_get(v___x_2553_, 0);
lean_dec(v_unused_2561_);
v___x_2555_ = v___x_2553_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_dec(v___x_2553_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 0, v___x_2546_);
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v___x_2546_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec(v___x_2546_);
v_a_2562_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2553_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2553_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___boxed(lean_object* v_matcherName_2570_, lean_object* v_matcherInfo_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher(v_matcherName_2570_, v_matcherInfo_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5(lean_object* v_as_2578_, lean_object* v_as_x27_2579_, lean_object* v_b_2580_, lean_object* v_a_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v___x_2587_; 
v___x_2587_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___redArg(v_as_x27_2579_, v_b_2580_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5___boxed(lean_object* v_as_2588_, lean_object* v_as_x27_2589_, lean_object* v_b_2590_, lean_object* v_a_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__5(v_as_2588_, v_as_x27_2589_, v_b_2590_, v_a_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_);
lean_dec(v_as_2588_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8(lean_object* v_00_u03b1_2598_, lean_object* v_name_2599_, uint8_t v_bi_2600_, lean_object* v_type_2601_, lean_object* v_k_2602_, uint8_t v_kind_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___redArg(v_name_2599_, v_bi_2600_, v_type_2601_, v_k_2602_, v_kind_2603_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8___boxed(lean_object* v_00_u03b1_2610_, lean_object* v_name_2611_, lean_object* v_bi_2612_, lean_object* v_type_2613_, lean_object* v_k_2614_, lean_object* v_kind_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
uint8_t v_bi_boxed_2621_; uint8_t v_kind_boxed_2622_; lean_object* v_res_2623_; 
v_bi_boxed_2621_ = lean_unbox(v_bi_2612_);
v_kind_boxed_2622_ = lean_unbox(v_kind_2615_);
v_res_2623_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7_spec__8(v_00_u03b1_2610_, v_name_2611_, v_bi_boxed_2621_, v_type_2613_, v_k_2614_, v_kind_boxed_2622_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7(lean_object* v_00_u03b1_2624_, lean_object* v_name_2625_, lean_object* v_type_2626_, lean_object* v_k_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___redArg(v_name_2625_, v_type_2626_, v_k_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7___boxed(lean_object* v_00_u03b1_2634_, lean_object* v_name_2635_, lean_object* v_type_2636_, lean_object* v_k_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__7(v_00_u03b1_2634_, v_name_2635_, v_type_2636_, v_k_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0(lean_object* v_00_u03b1_2644_, lean_object* v_constName_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
lean_object* v___x_2651_; 
v___x_2651_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___redArg(v_constName_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2652_, lean_object* v_constName_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0(v_00_u03b1_2652_, v_constName_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_2660_, lean_object* v_ref_2661_, lean_object* v_constName_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg(v_ref_2661_, v_constName_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b1_2669_, lean_object* v_ref_2670_, lean_object* v_constName_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4(v_00_u03b1_2669_, v_ref_2670_, v_constName_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
lean_dec(v___y_2675_);
lean_dec(v___y_2673_);
lean_dec_ref(v___y_2672_);
lean_dec(v_ref_2670_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10(lean_object* v_00_u03b1_2678_, lean_object* v_ref_2679_, lean_object* v_msg_2680_, lean_object* v_declHint_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___redArg(v_ref_2679_, v_msg_2680_, v_declHint_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10___boxed(lean_object* v_00_u03b1_2688_, lean_object* v_ref_2689_, lean_object* v_msg_2690_, lean_object* v_declHint_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_){
_start:
{
lean_object* v_res_2697_; 
v_res_2697_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10(v_00_u03b1_2688_, v_ref_2689_, v_msg_2690_, v_declHint_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
lean_dec(v___y_2695_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v_ref_2689_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12(lean_object* v_msg_2698_, lean_object* v_declHint_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v___x_2705_; 
v___x_2705_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg(v_msg_2698_, v_declHint_2699_, v___y_2703_);
return v___x_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___boxed(lean_object* v_msg_2706_, lean_object* v_declHint_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12(v_msg_2706_, v_declHint_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_);
lean_dec(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12(lean_object* v_00_u03b1_2714_, lean_object* v_ref_2715_, lean_object* v_msg_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___redArg(v_ref_2715_, v_msg_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12___boxed(lean_object* v_00_u03b1_2723_, lean_object* v_ref_2724_, lean_object* v_msg_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__12(v_00_u03b1_2723_, v_ref_2724_, v_msg_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
lean_dec(v___y_2729_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v_ref_2724_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2(lean_object* v_msg_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v___f_2742_; lean_object* v___x_46809__overap_2743_; lean_object* v___x_2744_; 
v___f_2742_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2___closed__0));
v___x_46809__overap_2743_ = lean_panic_fn(v___f_2742_, v_msg_2733_);
v___x_2744_ = lean_apply_8(v___x_46809__overap_2743_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, lean_box(0));
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2___boxed(lean_object* v_msg_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2(v_msg_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___lam__0(lean_object* v_k_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v_b_2759_, lean_object* v_c_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_apply_10(v_k_2755_, v_b_2759_, v_c_2760_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, lean_box(0));
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___lam__0___boxed(lean_object* v_k_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v_b_2771_, lean_object* v_c_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___lam__0(v_k_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v_b_2771_, v_c_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg(lean_object* v_e_2779_, lean_object* v_k_2780_, uint8_t v_cleanupAnnotations_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_){
_start:
{
lean_object* v___f_2790_; uint8_t v___x_2791_; uint8_t v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___f_2790_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2790_, 0, v_k_2780_);
lean_closure_set(v___f_2790_, 1, v___y_2782_);
lean_closure_set(v___f_2790_, 2, v___y_2783_);
lean_closure_set(v___f_2790_, 3, v___y_2784_);
v___x_2791_ = 1;
v___x_2792_ = 0;
v___x_2793_ = lean_box(0);
v___x_2794_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2779_, v___x_2791_, v___x_2792_, v___x_2791_, v___x_2792_, v___x_2793_, v___f_2790_, v_cleanupAnnotations_2781_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_);
if (lean_obj_tag(v___x_2794_) == 0)
{
return v___x_2794_;
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg___boxed(lean_object* v_e_2803_, lean_object* v_k_2804_, lean_object* v_cleanupAnnotations_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2814_; lean_object* v_res_2815_; 
v_cleanupAnnotations_boxed_2814_ = lean_unbox(v_cleanupAnnotations_2805_);
v_res_2815_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg(v_e_2803_, v_k_2804_, v_cleanupAnnotations_boxed_2814_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3(lean_object* v_00_u03b1_2816_, lean_object* v_e_2817_, lean_object* v_k_2818_, uint8_t v_cleanupAnnotations_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg(v_e_2817_, v_k_2818_, v_cleanupAnnotations_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___boxed(lean_object* v_00_u03b1_2829_, lean_object* v_e_2830_, lean_object* v_k_2831_, lean_object* v_cleanupAnnotations_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2841_; lean_object* v_res_2842_; 
v_cleanupAnnotations_boxed_2841_ = lean_unbox(v_cleanupAnnotations_2832_);
v_res_2842_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3(v_00_u03b1_2829_, v_e_2830_, v_k_2831_, v_cleanupAnnotations_boxed_2841_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___lam__0(uint8_t v___x_2843_, uint8_t v___x_2844_, uint8_t v___x_2845_, lean_object* v_xs_2846_, lean_object* v_motiveBody_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_){
_start:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; lean_object* v___x_2863_; 
v___x_2856_ = l_Lean_Expr_bindingDomain_x21(v_motiveBody_2847_);
v___x_2857_ = l_Lean_Expr_bindingName_x21(v___x_2856_);
v___x_2858_ = l_Lean_Expr_bindingDomain_x21(v___x_2856_);
v___x_2859_ = l_Lean_Expr_bindingBody_x21(v___x_2856_);
lean_dec_ref(v___x_2856_);
v___x_2860_ = l_Lean_Expr_bindingDomain_x21(v___x_2859_);
lean_dec_ref(v___x_2859_);
v___x_2861_ = l_Lean_Expr_lam___override(v___x_2857_, v___x_2858_, v___x_2860_, v___x_2843_);
v___x_2862_ = 1;
v___x_2863_ = l_Lean_Meta_mkLambdaFVars(v_xs_2846_, v___x_2861_, v___x_2844_, v___x_2845_, v___x_2844_, v___x_2845_, v___x_2862_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___lam__0___boxed(lean_object* v___x_2864_, lean_object* v___x_2865_, lean_object* v___x_2866_, lean_object* v_xs_2867_, lean_object* v_motiveBody_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
uint8_t v___x_54564__boxed_2877_; uint8_t v___x_54565__boxed_2878_; uint8_t v___x_54566__boxed_2879_; lean_object* v_res_2880_; 
v___x_54564__boxed_2877_ = lean_unbox(v___x_2864_);
v___x_54565__boxed_2878_ = lean_unbox(v___x_2865_);
v___x_54566__boxed_2879_ = lean_unbox(v___x_2866_);
v_res_2880_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___lam__0(v___x_54564__boxed_2877_, v___x_54565__boxed_2878_, v___x_54566__boxed_2879_, v_xs_2867_, v_motiveBody_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v_motiveBody_2868_);
lean_dec_ref(v_xs_2867_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__4(size_t v_sz_2881_, size_t v_i_2882_, lean_object* v_bs_2883_){
_start:
{
uint8_t v___x_2884_; 
v___x_2884_ = lean_usize_dec_lt(v_i_2882_, v_sz_2881_);
if (v___x_2884_ == 0)
{
return v_bs_2883_;
}
else
{
lean_object* v_v_2885_; lean_object* v___x_2886_; lean_object* v_bs_x27_2887_; lean_object* v___x_2888_; size_t v___x_2889_; size_t v___x_2890_; lean_object* v___x_2891_; 
v_v_2885_ = lean_array_uget(v_bs_2883_, v_i_2882_);
v___x_2886_ = lean_unsigned_to_nat(0u);
v_bs_x27_2887_ = lean_array_uset(v_bs_2883_, v_i_2882_, v___x_2886_);
v___x_2888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2888_, 0, v_v_2885_);
v___x_2889_ = ((size_t)1ULL);
v___x_2890_ = lean_usize_add(v_i_2882_, v___x_2889_);
v___x_2891_ = lean_array_uset(v_bs_x27_2887_, v_i_2882_, v___x_2888_);
v_i_2882_ = v___x_2890_;
v_bs_2883_ = v___x_2891_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__4___boxed(lean_object* v_sz_2893_, lean_object* v_i_2894_, lean_object* v_bs_2895_){
_start:
{
size_t v_sz_boxed_2896_; size_t v_i_boxed_2897_; lean_object* v_res_2898_; 
v_sz_boxed_2896_ = lean_unbox_usize(v_sz_2893_);
lean_dec(v_sz_2893_);
v_i_boxed_2897_ = lean_unbox_usize(v_i_2894_);
lean_dec(v_i_2894_);
v_res_2898_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__4(v_sz_boxed_2896_, v_i_boxed_2897_, v_bs_2895_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg(lean_object* v_msg_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v_ref_2905_; lean_object* v___x_2906_; lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2915_; 
v_ref_2905_ = lean_ctor_get(v___y_2902_, 5);
v___x_2906_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4(v_msg_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_);
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2909_ = v___x_2906_;
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2906_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
lean_inc(v_ref_2905_);
v___x_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2911_, 0, v_ref_2905_);
lean_ctor_set(v___x_2911_, 1, v_a_2907_);
if (v_isShared_2910_ == 0)
{
lean_ctor_set_tag(v___x_2909_, 1);
lean_ctor_set(v___x_2909_, 0, v___x_2911_);
v___x_2913_ = v___x_2909_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2911_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg___boxed(lean_object* v_msg_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg(v_msg_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg(lean_object* v_declName_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v___x_2926_; lean_object* v_env_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2926_ = lean_st_ref_get(v___y_2924_);
v_env_2927_ = lean_ctor_get(v___x_2926_, 0);
lean_inc_ref(v_env_2927_);
lean_dec(v___x_2926_);
v___x_2928_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2927_, v_declName_2923_);
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg___boxed(lean_object* v_declName_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg(v_declName_2930_, v___y_2931_);
lean_dec(v___y_2931_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg(lean_object* v_ref_2934_, lean_object* v_msg_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v_fileName_2944_; lean_object* v_fileMap_2945_; lean_object* v_options_2946_; lean_object* v_currRecDepth_2947_; lean_object* v_maxRecDepth_2948_; lean_object* v_ref_2949_; lean_object* v_currNamespace_2950_; lean_object* v_openDecls_2951_; lean_object* v_initHeartbeats_2952_; lean_object* v_maxHeartbeats_2953_; lean_object* v_quotContext_2954_; lean_object* v_currMacroScope_2955_; uint8_t v_diag_2956_; lean_object* v_cancelTk_x3f_2957_; uint8_t v_suppressElabErrors_2958_; lean_object* v_inheritedTraceOptions_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2968_; 
v_fileName_2944_ = lean_ctor_get(v___y_2941_, 0);
v_fileMap_2945_ = lean_ctor_get(v___y_2941_, 1);
v_options_2946_ = lean_ctor_get(v___y_2941_, 2);
v_currRecDepth_2947_ = lean_ctor_get(v___y_2941_, 3);
v_maxRecDepth_2948_ = lean_ctor_get(v___y_2941_, 4);
v_ref_2949_ = lean_ctor_get(v___y_2941_, 5);
v_currNamespace_2950_ = lean_ctor_get(v___y_2941_, 6);
v_openDecls_2951_ = lean_ctor_get(v___y_2941_, 7);
v_initHeartbeats_2952_ = lean_ctor_get(v___y_2941_, 8);
v_maxHeartbeats_2953_ = lean_ctor_get(v___y_2941_, 9);
v_quotContext_2954_ = lean_ctor_get(v___y_2941_, 10);
v_currMacroScope_2955_ = lean_ctor_get(v___y_2941_, 11);
v_diag_2956_ = lean_ctor_get_uint8(v___y_2941_, sizeof(void*)*14);
v_cancelTk_x3f_2957_ = lean_ctor_get(v___y_2941_, 12);
v_suppressElabErrors_2958_ = lean_ctor_get_uint8(v___y_2941_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2959_ = lean_ctor_get(v___y_2941_, 13);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___y_2941_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2961_ = v___y_2941_;
v_isShared_2962_ = v_isSharedCheck_2968_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_inheritedTraceOptions_2959_);
lean_inc(v_cancelTk_x3f_2957_);
lean_inc(v_currMacroScope_2955_);
lean_inc(v_quotContext_2954_);
lean_inc(v_maxHeartbeats_2953_);
lean_inc(v_initHeartbeats_2952_);
lean_inc(v_openDecls_2951_);
lean_inc(v_currNamespace_2950_);
lean_inc(v_ref_2949_);
lean_inc(v_maxRecDepth_2948_);
lean_inc(v_currRecDepth_2947_);
lean_inc(v_options_2946_);
lean_inc(v_fileMap_2945_);
lean_inc(v_fileName_2944_);
lean_dec(v___y_2941_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2968_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v_ref_2963_; lean_object* v___x_2965_; 
v_ref_2963_ = l_Lean_replaceRef(v_ref_2934_, v_ref_2949_);
lean_dec(v_ref_2949_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 5, v_ref_2963_);
v___x_2965_ = v___x_2961_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_fileName_2944_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v_fileMap_2945_);
lean_ctor_set(v_reuseFailAlloc_2967_, 2, v_options_2946_);
lean_ctor_set(v_reuseFailAlloc_2967_, 3, v_currRecDepth_2947_);
lean_ctor_set(v_reuseFailAlloc_2967_, 4, v_maxRecDepth_2948_);
lean_ctor_set(v_reuseFailAlloc_2967_, 5, v_ref_2963_);
lean_ctor_set(v_reuseFailAlloc_2967_, 6, v_currNamespace_2950_);
lean_ctor_set(v_reuseFailAlloc_2967_, 7, v_openDecls_2951_);
lean_ctor_set(v_reuseFailAlloc_2967_, 8, v_initHeartbeats_2952_);
lean_ctor_set(v_reuseFailAlloc_2967_, 9, v_maxHeartbeats_2953_);
lean_ctor_set(v_reuseFailAlloc_2967_, 10, v_quotContext_2954_);
lean_ctor_set(v_reuseFailAlloc_2967_, 11, v_currMacroScope_2955_);
lean_ctor_set(v_reuseFailAlloc_2967_, 12, v_cancelTk_x3f_2957_);
lean_ctor_set(v_reuseFailAlloc_2967_, 13, v_inheritedTraceOptions_2959_);
lean_ctor_set_uint8(v_reuseFailAlloc_2967_, sizeof(void*)*14, v_diag_2956_);
lean_ctor_set_uint8(v_reuseFailAlloc_2967_, sizeof(void*)*14 + 1, v_suppressElabErrors_2958_);
v___x_2965_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2966_; 
v___x_2966_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg(v_msg_2935_, v___y_2939_, v___y_2940_, v___x_2965_, v___y_2942_);
lean_dec_ref(v___x_2965_);
return v___x_2966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg___boxed(lean_object* v_ref_2969_, lean_object* v_msg_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_){
_start:
{
lean_object* v_res_2979_; 
v_res_2979_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg(v_ref_2969_, v_msg_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec(v___y_2977_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec(v___y_2973_);
lean_dec_ref(v___y_2972_);
lean_dec(v___y_2971_);
lean_dec(v_ref_2969_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg(lean_object* v_msg_2980_, lean_object* v_declHint_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v___x_2984_; lean_object* v_env_2985_; uint8_t v___x_2986_; 
v___x_2984_ = lean_st_ref_get(v___y_2982_);
v_env_2985_ = lean_ctor_get(v___x_2984_, 0);
lean_inc_ref(v_env_2985_);
lean_dec(v___x_2984_);
v___x_2986_ = l_Lean_Name_isAnonymous(v_declHint_2981_);
if (v___x_2986_ == 0)
{
uint8_t v_isExporting_2987_; 
v_isExporting_2987_ = lean_ctor_get_uint8(v_env_2985_, sizeof(void*)*8);
if (v_isExporting_2987_ == 0)
{
lean_object* v___x_2988_; 
lean_dec_ref(v_env_2985_);
lean_dec(v_declHint_2981_);
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v_msg_2980_);
return v___x_2988_;
}
else
{
lean_object* v___x_2989_; uint8_t v___x_2990_; 
lean_inc_ref(v_env_2985_);
v___x_2989_ = l_Lean_Environment_setExporting(v_env_2985_, v___x_2986_);
lean_inc(v_declHint_2981_);
lean_inc_ref(v___x_2989_);
v___x_2990_ = l_Lean_Environment_contains(v___x_2989_, v_declHint_2981_, v_isExporting_2987_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; 
lean_dec_ref(v___x_2989_);
lean_dec_ref(v_env_2985_);
lean_dec(v_declHint_2981_);
v___x_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2991_, 0, v_msg_2980_);
return v___x_2991_;
}
else
{
lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v_c_2999_; lean_object* v___x_3000_; 
v___x_2992_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__2);
v___x_2993_ = lean_unsigned_to_nat(32u);
v___x_2994_ = lean_mk_empty_array_with_capacity(v___x_2993_);
lean_dec_ref(v___x_2994_);
v___x_2995_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__5);
v___x_2996_ = l_Lean_Options_empty;
v___x_2997_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2989_);
lean_ctor_set(v___x_2997_, 1, v___x_2992_);
lean_ctor_set(v___x_2997_, 2, v___x_2995_);
lean_ctor_set(v___x_2997_, 3, v___x_2996_);
lean_inc(v_declHint_2981_);
v___x_2998_ = l_Lean_MessageData_ofConstName(v_declHint_2981_, v___x_2986_);
v_c_2999_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2999_, 0, v___x_2997_);
lean_ctor_set(v_c_2999_, 1, v___x_2998_);
v___x_3000_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2985_, v_declHint_2981_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
lean_dec_ref(v_env_2985_);
lean_dec(v_declHint_2981_);
v___x_3001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7);
v___x_3002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3001_);
lean_ctor_set(v___x_3002_, 1, v_c_2999_);
v___x_3003_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__9);
v___x_3004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3002_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = l_Lean_MessageData_note(v___x_3004_);
v___x_3006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3006_, 0, v_msg_2980_);
lean_ctor_set(v___x_3006_, 1, v___x_3005_);
v___x_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
return v___x_3007_;
}
else
{
lean_object* v_val_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3043_; 
v_val_3008_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3010_ = v___x_3000_;
v_isShared_3011_ = v_isSharedCheck_3043_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_val_3008_);
lean_dec(v___x_3000_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3043_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v_mod_3015_; uint8_t v___x_3016_; 
v___x_3012_ = lean_box(0);
v___x_3013_ = l_Lean_Environment_header(v_env_2985_);
lean_dec_ref(v_env_2985_);
v___x_3014_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3013_);
v_mod_3015_ = lean_array_get(v___x_3012_, v___x_3014_, v_val_3008_);
lean_dec(v_val_3008_);
lean_dec_ref(v___x_3014_);
v___x_3016_ = l_Lean_isPrivateName(v_declHint_2981_);
lean_dec(v_declHint_2981_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3028_; 
v___x_3017_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__11);
v___x_3018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
lean_ctor_set(v___x_3018_, 1, v_c_2999_);
v___x_3019_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__13);
v___x_3020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = l_Lean_MessageData_ofName(v_mod_3015_);
v___x_3022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3020_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
v___x_3023_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__15);
v___x_3024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3022_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
v___x_3025_ = l_Lean_MessageData_note(v___x_3024_);
v___x_3026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3026_, 0, v_msg_2980_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set_tag(v___x_3010_, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3026_);
v___x_3028_ = v___x_3010_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
else
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3041_; 
v___x_3030_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__7);
v___x_3031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3031_, 0, v___x_3030_);
lean_ctor_set(v___x_3031_, 1, v_c_2999_);
v___x_3032_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__17);
v___x_3033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3031_);
lean_ctor_set(v___x_3033_, 1, v___x_3032_);
v___x_3034_ = l_Lean_MessageData_ofName(v_mod_3015_);
v___x_3035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3033_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
v___x_3036_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4_spec__10_spec__11_spec__12___redArg___closed__19);
v___x_3037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3035_);
lean_ctor_set(v___x_3037_, 1, v___x_3036_);
v___x_3038_ = l_Lean_MessageData_note(v___x_3037_);
v___x_3039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3039_, 0, v_msg_2980_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set_tag(v___x_3010_, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3039_);
v___x_3041_ = v___x_3010_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3039_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3044_; 
lean_dec_ref(v_env_2985_);
lean_dec(v_declHint_2981_);
v___x_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3044_, 0, v_msg_2980_);
return v___x_3044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg___boxed(lean_object* v_msg_3045_, lean_object* v_declHint_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg(v_msg_3045_, v_declHint_3046_, v___y_3047_);
lean_dec(v___y_3047_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11(lean_object* v_msg_3050_, lean_object* v_declHint_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v___x_3060_; lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3070_; 
v___x_3060_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg(v_msg_3050_, v_declHint_3051_, v___y_3058_);
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3063_ = v___x_3060_;
v_isShared_3064_ = v_isSharedCheck_3070_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3060_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3070_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
v___x_3065_ = l_Lean_unknownIdentifierMessageTag;
v___x_3066_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
lean_ctor_set(v___x_3066_, 1, v_a_3061_);
if (v_isShared_3064_ == 0)
{
lean_ctor_set(v___x_3063_, 0, v___x_3066_);
v___x_3068_ = v___x_3063_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11___boxed(lean_object* v_msg_3071_, lean_object* v_declHint_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11(v_msg_3071_, v_declHint_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
lean_dec(v___y_3079_);
lean_dec_ref(v___y_3078_);
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3073_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(lean_object* v_ref_3082_, lean_object* v_msg_3083_, lean_object* v_declHint_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
lean_object* v___x_3093_; lean_object* v_a_3094_; lean_object* v___x_3095_; 
v___x_3093_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11(v_msg_3083_, v_declHint_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_);
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3094_);
lean_dec_ref(v___x_3093_);
v___x_3095_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg(v_ref_3082_, v_a_3094_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___boxed(lean_object* v_ref_3096_, lean_object* v_msg_3097_, lean_object* v_declHint_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_ref_3096_, v_msg_3097_, v_declHint_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_);
lean_dec(v___y_3105_);
lean_dec(v___y_3103_);
lean_dec_ref(v___y_3102_);
lean_dec(v___y_3101_);
lean_dec_ref(v___y_3100_);
lean_dec(v___y_3099_);
lean_dec(v_ref_3096_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg(lean_object* v_ref_3108_, lean_object* v_constName_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v___x_3118_; uint8_t v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3118_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__1);
v___x_3119_ = 0;
lean_inc(v_constName_3109_);
v___x_3120_ = l_Lean_MessageData_ofConstName(v_constName_3109_, v___x_3119_);
v___x_3121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3118_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3124_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_ref_3108_, v___x_3123_, v_constName_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg___boxed(lean_object* v_ref_3125_, lean_object* v_constName_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg(v_ref_3125_, v_constName_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
lean_dec(v___y_3133_);
lean_dec(v___y_3131_);
lean_dec_ref(v___y_3130_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec(v_ref_3125_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg(lean_object* v_constName_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_){
_start:
{
lean_object* v_ref_3145_; lean_object* v___x_3146_; 
v_ref_3145_ = lean_ctor_get(v___y_3142_, 5);
lean_inc(v_ref_3145_);
v___x_3146_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg(v_ref_3145_, v_constName_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
lean_dec(v_ref_3145_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_constName_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_){
_start:
{
lean_object* v_res_3156_; 
v_res_3156_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg(v_constName_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
lean_dec(v___y_3154_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0(lean_object* v_constName_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
lean_object* v___x_3166_; lean_object* v_env_3167_; uint8_t v___x_3168_; lean_object* v___x_3169_; 
v___x_3166_ = lean_st_ref_get(v___y_3164_);
v_env_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc_ref(v_env_3167_);
lean_dec(v___x_3166_);
v___x_3168_ = 0;
lean_inc(v_constName_3157_);
v___x_3169_ = l_Lean_Environment_find_x3f(v_env_3167_, v_constName_3157_, v___x_3168_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_object* v___x_3170_; 
v___x_3170_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg(v_constName_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
return v___x_3170_;
}
else
{
lean_object* v_val_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_dec_ref(v___y_3163_);
lean_dec(v_constName_3157_);
v_val_3171_ = lean_ctor_get(v___x_3169_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3169_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3169_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_val_3171_);
lean_dec(v___x_3169_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
lean_ctor_set_tag(v___x_3173_, 0);
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_val_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0___boxed(lean_object* v_constName_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
lean_object* v_res_3188_; 
v_res_3188_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0(v_constName_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3183_);
lean_dec(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3180_);
return v_res_3188_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = l_instMonadEIO(lean_box(0));
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1(lean_object* v_msg_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v_toApplicative_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3269_; 
v___x_3203_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__0, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__0);
v___x_3204_ = l_StateRefT_x27_instMonad___redArg(v___x_3203_);
v_toApplicative_3205_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3269_ == 0)
{
lean_object* v_unused_3270_; 
v_unused_3270_ = lean_ctor_get(v___x_3204_, 1);
lean_dec(v_unused_3270_);
v___x_3207_ = v___x_3204_;
v_isShared_3208_ = v_isSharedCheck_3269_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_toApplicative_3205_);
lean_dec(v___x_3204_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3269_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v_toFunctor_3209_; lean_object* v_toSeq_3210_; lean_object* v_toSeqLeft_3211_; lean_object* v_toSeqRight_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3267_; 
v_toFunctor_3209_ = lean_ctor_get(v_toApplicative_3205_, 0);
v_toSeq_3210_ = lean_ctor_get(v_toApplicative_3205_, 2);
v_toSeqLeft_3211_ = lean_ctor_get(v_toApplicative_3205_, 3);
v_toSeqRight_3212_ = lean_ctor_get(v_toApplicative_3205_, 4);
v_isSharedCheck_3267_ = !lean_is_exclusive(v_toApplicative_3205_);
if (v_isSharedCheck_3267_ == 0)
{
lean_object* v_unused_3268_; 
v_unused_3268_ = lean_ctor_get(v_toApplicative_3205_, 1);
lean_dec(v_unused_3268_);
v___x_3214_ = v_toApplicative_3205_;
v_isShared_3215_ = v_isSharedCheck_3267_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_toSeqRight_3212_);
lean_inc(v_toSeqLeft_3211_);
lean_inc(v_toSeq_3210_);
lean_inc(v_toFunctor_3209_);
lean_dec(v_toApplicative_3205_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3267_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___f_3216_; lean_object* v___f_3217_; lean_object* v___f_3218_; lean_object* v___f_3219_; lean_object* v___x_3220_; lean_object* v___f_3221_; lean_object* v___f_3222_; lean_object* v___f_3223_; lean_object* v___x_3225_; 
v___f_3216_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__1));
v___f_3217_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_3209_);
v___f_3218_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3218_, 0, v_toFunctor_3209_);
v___f_3219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3219_, 0, v_toFunctor_3209_);
v___x_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3220_, 0, v___f_3218_);
lean_ctor_set(v___x_3220_, 1, v___f_3219_);
v___f_3221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3221_, 0, v_toSeqRight_3212_);
v___f_3222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3222_, 0, v_toSeqLeft_3211_);
v___f_3223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3223_, 0, v_toSeq_3210_);
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 4, v___f_3221_);
lean_ctor_set(v___x_3214_, 3, v___f_3222_);
lean_ctor_set(v___x_3214_, 2, v___f_3223_);
lean_ctor_set(v___x_3214_, 1, v___f_3216_);
lean_ctor_set(v___x_3214_, 0, v___x_3220_);
v___x_3225_ = v___x_3214_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v___x_3220_);
lean_ctor_set(v_reuseFailAlloc_3266_, 1, v___f_3216_);
lean_ctor_set(v_reuseFailAlloc_3266_, 2, v___f_3223_);
lean_ctor_set(v_reuseFailAlloc_3266_, 3, v___f_3222_);
lean_ctor_set(v_reuseFailAlloc_3266_, 4, v___f_3221_);
v___x_3225_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
lean_object* v___x_3227_; 
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 1, v___f_3217_);
lean_ctor_set(v___x_3207_, 0, v___x_3225_);
v___x_3227_ = v___x_3207_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v___x_3225_);
lean_ctor_set(v_reuseFailAlloc_3265_, 1, v___f_3217_);
v___x_3227_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
lean_object* v___x_3228_; lean_object* v_toApplicative_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3263_; 
v___x_3228_ = l_StateRefT_x27_instMonad___redArg(v___x_3227_);
v_toApplicative_3229_ = lean_ctor_get(v___x_3228_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3263_ == 0)
{
lean_object* v_unused_3264_; 
v_unused_3264_ = lean_ctor_get(v___x_3228_, 1);
lean_dec(v_unused_3264_);
v___x_3231_ = v___x_3228_;
v_isShared_3232_ = v_isSharedCheck_3263_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_toApplicative_3229_);
lean_dec(v___x_3228_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3263_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v_toFunctor_3233_; lean_object* v_toSeq_3234_; lean_object* v_toSeqLeft_3235_; lean_object* v_toSeqRight_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3261_; 
v_toFunctor_3233_ = lean_ctor_get(v_toApplicative_3229_, 0);
v_toSeq_3234_ = lean_ctor_get(v_toApplicative_3229_, 2);
v_toSeqLeft_3235_ = lean_ctor_get(v_toApplicative_3229_, 3);
v_toSeqRight_3236_ = lean_ctor_get(v_toApplicative_3229_, 4);
v_isSharedCheck_3261_ = !lean_is_exclusive(v_toApplicative_3229_);
if (v_isSharedCheck_3261_ == 0)
{
lean_object* v_unused_3262_; 
v_unused_3262_ = lean_ctor_get(v_toApplicative_3229_, 1);
lean_dec(v_unused_3262_);
v___x_3238_ = v_toApplicative_3229_;
v_isShared_3239_ = v_isSharedCheck_3261_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_toSeqRight_3236_);
lean_inc(v_toSeqLeft_3235_);
lean_inc(v_toSeq_3234_);
lean_inc(v_toFunctor_3233_);
lean_dec(v_toApplicative_3229_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3261_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___f_3240_; lean_object* v___f_3241_; lean_object* v___f_3242_; lean_object* v___f_3243_; lean_object* v___x_3244_; lean_object* v___f_3245_; lean_object* v___f_3246_; lean_object* v___f_3247_; lean_object* v___x_3249_; 
v___f_3240_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__3));
v___f_3241_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_3233_);
v___f_3242_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3242_, 0, v_toFunctor_3233_);
v___f_3243_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3243_, 0, v_toFunctor_3233_);
v___x_3244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3244_, 0, v___f_3242_);
lean_ctor_set(v___x_3244_, 1, v___f_3243_);
v___f_3245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3245_, 0, v_toSeqRight_3236_);
v___f_3246_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3246_, 0, v_toSeqLeft_3235_);
v___f_3247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3247_, 0, v_toSeq_3234_);
if (v_isShared_3239_ == 0)
{
lean_ctor_set(v___x_3238_, 4, v___f_3245_);
lean_ctor_set(v___x_3238_, 3, v___f_3246_);
lean_ctor_set(v___x_3238_, 2, v___f_3247_);
lean_ctor_set(v___x_3238_, 1, v___f_3240_);
lean_ctor_set(v___x_3238_, 0, v___x_3244_);
v___x_3249_ = v___x_3238_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___x_3244_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v___f_3240_);
lean_ctor_set(v_reuseFailAlloc_3260_, 2, v___f_3247_);
lean_ctor_set(v_reuseFailAlloc_3260_, 3, v___f_3246_);
lean_ctor_set(v_reuseFailAlloc_3260_, 4, v___f_3245_);
v___x_3249_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3251_; 
if (v_isShared_3232_ == 0)
{
lean_ctor_set(v___x_3231_, 1, v___f_3241_);
lean_ctor_set(v___x_3231_, 0, v___x_3249_);
v___x_3251_ = v___x_3231_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v___x_3249_);
lean_ctor_set(v_reuseFailAlloc_3259_, 1, v___f_3241_);
v___x_3251_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_48883__overap_3257_; lean_object* v___x_3258_; 
v___x_3252_ = l_StateRefT_x27_instMonad___redArg(v___x_3251_);
v___x_3253_ = l_ReaderT_instMonad___redArg(v___x_3252_);
v___x_3254_ = l_ReaderT_instMonad___redArg(v___x_3253_);
v___x_3255_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_3256_ = l_instInhabitedOfMonad___redArg(v___x_3254_, v___x_3255_);
v___x_48883__overap_3257_ = lean_panic_fn(v___x_3256_, v_msg_3194_);
v___x_3258_ = lean_apply_8(v___x_48883__overap_3257_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, lean_box(0));
return v___x_3258_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1___boxed(lean_object* v_msg_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1(v_msg_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
return v_res_3280_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__2));
v___x_3285_ = lean_unsigned_to_nat(53u);
v___x_3286_ = lean_unsigned_to_nat(62u);
v___x_3287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__1));
v___x_3288_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__0));
v___x_3289_ = l_mkPanicMessageWithDecl(v___x_3288_, v___x_3287_, v___x_3286_, v___x_3285_, v___x_3284_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3(size_t v_sz_3290_, size_t v_i_3291_, lean_object* v_bs_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
uint8_t v___x_3301_; 
v___x_3301_ = lean_usize_dec_lt(v_i_3291_, v_sz_3290_);
if (v___x_3301_ == 0)
{
lean_object* v___x_3302_; 
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
v___x_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3302_, 0, v_bs_3292_);
return v___x_3302_;
}
else
{
lean_object* v_v_3303_; lean_object* v___x_3304_; 
v_v_3303_ = lean_array_uget_borrowed(v_bs_3292_, v_i_3291_);
lean_inc_ref(v___y_3298_);
lean_inc(v_v_3303_);
v___x_3304_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0(v_v_3303_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v_a_3305_; lean_object* v___x_3306_; lean_object* v_bs_x27_3307_; lean_object* v_a_3309_; 
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3305_);
lean_dec_ref(v___x_3304_);
v___x_3306_ = lean_unsigned_to_nat(0u);
v_bs_x27_3307_ = lean_array_uset(v_bs_3292_, v_i_3291_, v___x_3306_);
if (lean_obj_tag(v_a_3305_) == 6)
{
lean_object* v_val_3314_; lean_object* v_numFields_3315_; uint8_t v___x_3316_; lean_object* v___x_3317_; 
v_val_3314_ = lean_ctor_get(v_a_3305_, 0);
lean_inc_ref(v_val_3314_);
lean_dec_ref(v_a_3305_);
v_numFields_3315_ = lean_ctor_get(v_val_3314_, 4);
lean_inc(v_numFields_3315_);
lean_dec_ref(v_val_3314_);
v___x_3316_ = 0;
v___x_3317_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3317_, 0, v_numFields_3315_);
lean_ctor_set(v___x_3317_, 1, v___x_3306_);
lean_ctor_set_uint8(v___x_3317_, sizeof(void*)*2, v___x_3316_);
v_a_3309_ = v___x_3317_;
goto v___jp_3308_;
}
else
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
lean_dec(v_a_3305_);
v___x_3318_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___closed__3);
lean_inc(v___y_3299_);
lean_inc_ref(v___y_3298_);
lean_inc(v___y_3297_);
lean_inc_ref(v___y_3296_);
lean_inc(v___y_3295_);
lean_inc_ref(v___y_3294_);
lean_inc(v___y_3293_);
v___x_3319_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__1(v___x_3318_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3320_);
lean_dec_ref(v___x_3319_);
v_a_3309_ = v_a_3320_;
goto v___jp_3308_;
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec_ref(v_bs_x27_3307_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
v_a_3321_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3319_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3319_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
v___jp_3308_:
{
size_t v___x_3310_; size_t v___x_3311_; lean_object* v___x_3312_; 
v___x_3310_ = ((size_t)1ULL);
v___x_3311_ = lean_usize_add(v_i_3291_, v___x_3310_);
v___x_3312_ = lean_array_uset(v_bs_x27_3307_, v_i_3291_, v_a_3309_);
v_i_3291_ = v___x_3311_;
v_bs_3292_ = v___x_3312_;
goto _start;
}
}
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v_bs_3292_);
v_a_3329_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3304_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3304_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3___boxed(lean_object* v_sz_3337_, lean_object* v_i_3338_, lean_object* v_bs_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
size_t v_sz_boxed_3348_; size_t v_i_boxed_3349_; lean_object* v_res_3350_; 
v_sz_boxed_3348_ = lean_unbox_usize(v_sz_3337_);
lean_dec(v_sz_3337_);
v_i_boxed_3349_ = lean_unbox_usize(v_i_3338_);
lean_dec(v_i_3338_);
v_res_3350_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3(v_sz_boxed_3348_, v_i_boxed_3349_, v_bs_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
return v_res_3350_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3351_ = lean_box(0);
v___x_3352_ = lean_unsigned_to_nat(16u);
v___x_3353_ = lean_mk_array(v___x_3352_, v___x_3351_);
return v___x_3353_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3354_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__0);
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3355_);
lean_ctor_set(v___x_3356_, 1, v___x_3354_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0(lean_object* v_e_3359_, uint8_t v_alsoCasesOn_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_){
_start:
{
uint8_t v___x_3372_; 
v___x_3372_ = l_Lean_Expr_isApp(v_e_3359_);
if (v___x_3372_ == 0)
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v_e_3359_);
v___x_3373_ = lean_box(0);
v___x_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3373_);
return v___x_3374_;
}
else
{
lean_object* v___x_3375_; 
v___x_3375_ = l_Lean_Expr_getAppFn(v_e_3359_);
if (lean_obj_tag(v___x_3375_) == 4)
{
lean_object* v_declName_3376_; lean_object* v_us_3377_; lean_object* v___x_3378_; lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3533_; 
v_declName_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_declName_3376_);
v_us_3377_ = lean_ctor_get(v___x_3375_, 1);
lean_inc(v_us_3377_);
lean_dec_ref(v___x_3375_);
lean_inc(v_declName_3376_);
v___x_3378_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg(v_declName_3376_, v___y_3367_);
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3381_ = v___x_3378_;
v_isShared_3382_ = v_isSharedCheck_3533_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3378_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3533_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
if (lean_obj_tag(v_a_3379_) == 1)
{
lean_object* v_val_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3425_; 
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
v_val_3383_ = lean_ctor_get(v_a_3379_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v_a_3379_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3385_ = v_a_3379_;
v_isShared_3386_ = v_isSharedCheck_3425_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_val_3383_);
lean_dec(v_a_3379_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3425_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v_dummy_3387_; lean_object* v_nargs_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v_args_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; 
v_dummy_3387_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18);
v_nargs_3388_ = l_Lean_Expr_getAppNumArgs(v_e_3359_);
lean_inc(v_nargs_3388_);
v___x_3389_ = lean_mk_array(v_nargs_3388_, v_dummy_3387_);
v___x_3390_ = lean_unsigned_to_nat(1u);
v___x_3391_ = lean_nat_sub(v_nargs_3388_, v___x_3390_);
lean_dec(v_nargs_3388_);
v_args_3392_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3359_, v___x_3389_, v___x_3391_);
v___x_3393_ = lean_array_get_size(v_args_3392_);
v___x_3394_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_3383_);
v___x_3395_ = lean_nat_dec_lt(v___x_3393_, v___x_3394_);
lean_dec(v___x_3394_);
if (v___x_3395_ == 0)
{
lean_object* v_numParams_3396_; lean_object* v_numDiscrs_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v_numParams_3396_ = lean_ctor_get(v_val_3383_, 0);
v_numDiscrs_3397_ = lean_ctor_get(v_val_3383_, 1);
v___x_3398_ = lean_array_mk(v_us_3377_);
v___x_3399_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3396_);
v___x_3400_ = l_Array_extract___redArg(v_args_3392_, v___x_3399_, v_numParams_3396_);
v___x_3401_ = l_Lean_instInhabitedExpr;
v___x_3402_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_3383_);
v___x_3403_ = lean_array_get(v___x_3401_, v_args_3392_, v___x_3402_);
lean_dec(v___x_3402_);
v___x_3404_ = lean_nat_add(v_numParams_3396_, v___x_3390_);
v___x_3405_ = lean_nat_add(v___x_3404_, v_numDiscrs_3397_);
lean_inc(v___x_3405_);
lean_inc_ref(v_args_3392_);
v___x_3406_ = l_Array_toSubarray___redArg(v_args_3392_, v___x_3404_, v___x_3405_);
v___x_3407_ = l_Subarray_copy___redArg(v___x_3406_);
v___x_3408_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_3383_);
v___x_3409_ = lean_nat_add(v___x_3405_, v___x_3408_);
lean_dec(v___x_3408_);
lean_inc(v___x_3409_);
lean_inc_ref(v_args_3392_);
v___x_3410_ = l_Array_toSubarray___redArg(v_args_3392_, v___x_3405_, v___x_3409_);
v___x_3411_ = l_Subarray_copy___redArg(v___x_3410_);
v___x_3412_ = l_Array_toSubarray___redArg(v_args_3392_, v___x_3409_, v___x_3393_);
v___x_3413_ = l_Subarray_copy___redArg(v___x_3412_);
v___x_3414_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3414_, 0, v_val_3383_);
lean_ctor_set(v___x_3414_, 1, v_declName_3376_);
lean_ctor_set(v___x_3414_, 2, v___x_3398_);
lean_ctor_set(v___x_3414_, 3, v___x_3400_);
lean_ctor_set(v___x_3414_, 4, v___x_3403_);
lean_ctor_set(v___x_3414_, 5, v___x_3407_);
lean_ctor_set(v___x_3414_, 6, v___x_3411_);
lean_ctor_set(v___x_3414_, 7, v___x_3413_);
if (v_isShared_3386_ == 0)
{
lean_ctor_set(v___x_3385_, 0, v___x_3414_);
v___x_3416_ = v___x_3385_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3418_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set(v___x_3381_, 0, v___x_3416_);
v___x_3418_ = v___x_3381_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3416_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3423_; 
lean_dec_ref(v_args_3392_);
lean_del_object(v___x_3385_);
lean_dec(v_val_3383_);
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
v___x_3421_ = lean_box(0);
if (v_isShared_3382_ == 0)
{
lean_ctor_set(v___x_3381_, 0, v___x_3421_);
v___x_3423_ = v___x_3381_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3421_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
return v___x_3423_;
}
}
}
}
else
{
lean_object* v___x_3426_; 
lean_del_object(v___x_3381_);
lean_dec(v_a_3379_);
v___x_3426_ = lean_st_ref_get(v___y_3367_);
if (v_alsoCasesOn_3360_ == 0)
{
lean_dec(v___x_3426_);
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v_e_3359_);
goto v___jp_3369_;
}
else
{
lean_object* v_env_3427_; uint8_t v___x_3428_; 
v_env_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc_ref(v_env_3427_);
lean_dec(v___x_3426_);
lean_inc(v_declName_3376_);
v___x_3428_ = l_Lean_isCasesOnRecursor(v_env_3427_, v_declName_3376_);
if (v___x_3428_ == 0)
{
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v_e_3359_);
goto v___jp_3369_;
}
else
{
lean_object* v_indName_3429_; lean_object* v___x_3430_; 
v_indName_3429_ = l_Lean_Name_getPrefix(v_declName_3376_);
lean_inc_ref(v___y_3366_);
v___x_3430_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0(v_indName_3429_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3524_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3524_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3524_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
if (lean_obj_tag(v_a_3431_) == 5)
{
lean_object* v_val_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3519_; 
v_val_3435_ = lean_ctor_get(v_a_3431_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v_a_3431_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3437_ = v_a_3431_;
v_isShared_3438_ = v_isSharedCheck_3519_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_val_3435_);
lean_dec(v_a_3431_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3519_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v_toConstantVal_3439_; lean_object* v_numParams_3440_; lean_object* v_numIndices_3441_; lean_object* v_ctors_3442_; lean_object* v_nargs_3443_; lean_object* v_dummy_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v_args_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; uint8_t v___x_3455_; 
v_toConstantVal_3439_ = lean_ctor_get(v_val_3435_, 0);
lean_inc_ref(v_toConstantVal_3439_);
v_numParams_3440_ = lean_ctor_get(v_val_3435_, 1);
lean_inc(v_numParams_3440_);
v_numIndices_3441_ = lean_ctor_get(v_val_3435_, 2);
lean_inc(v_numIndices_3441_);
v_ctors_3442_ = lean_ctor_get(v_val_3435_, 4);
lean_inc(v_ctors_3442_);
v_nargs_3443_ = l_Lean_Expr_getAppNumArgs(v_e_3359_);
v_dummy_3444_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__18);
lean_inc(v_nargs_3443_);
v___x_3445_ = lean_mk_array(v_nargs_3443_, v_dummy_3444_);
v___x_3446_ = lean_unsigned_to_nat(1u);
v___x_3447_ = lean_nat_sub(v_nargs_3443_, v___x_3446_);
lean_dec(v_nargs_3443_);
v_args_3448_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3359_, v___x_3445_, v___x_3447_);
v___x_3449_ = lean_nat_add(v_numParams_3440_, v___x_3446_);
v___x_3450_ = lean_nat_add(v___x_3449_, v_numIndices_3441_);
v___x_3451_ = lean_nat_add(v___x_3450_, v___x_3446_);
lean_dec(v___x_3450_);
v___x_3452_ = l_Lean_InductiveVal_numCtors(v_val_3435_);
lean_dec_ref(v_val_3435_);
v___x_3453_ = lean_nat_add(v___x_3451_, v___x_3452_);
lean_dec(v___x_3452_);
v___x_3454_ = lean_array_get_size(v_args_3448_);
v___x_3455_ = lean_nat_dec_le(v___x_3453_, v___x_3454_);
if (v___x_3455_ == 0)
{
lean_object* v___x_3456_; lean_object* v___x_3458_; 
lean_dec(v___x_3453_);
lean_dec(v___x_3451_);
lean_dec(v___x_3449_);
lean_dec_ref(v_args_3448_);
lean_dec(v_ctors_3442_);
lean_dec(v_numIndices_3441_);
lean_dec(v_numParams_3440_);
lean_dec_ref(v_toConstantVal_3439_);
lean_del_object(v___x_3437_);
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
v___x_3456_ = lean_box(0);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3456_);
v___x_3458_ = v___x_3433_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3456_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
else
{
lean_object* v___x_3460_; lean_object* v_params_3461_; lean_object* v___x_3462_; lean_object* v_motive_3463_; lean_object* v_discrs_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v_discrInfos_3467_; lean_object* v_alts_3468_; lean_object* v___y_3470_; lean_object* v___y_3471_; lean_object* v_lower_3510_; lean_object* v_upper_3511_; uint8_t v___x_3518_; 
lean_del_object(v___x_3433_);
v___x_3460_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3440_);
lean_inc_ref(v_args_3448_);
v_params_3461_ = l_Array_toSubarray___redArg(v_args_3448_, v___x_3460_, v_numParams_3440_);
v___x_3462_ = l_Lean_instInhabitedExpr;
v_motive_3463_ = lean_array_get(v___x_3462_, v_args_3448_, v_numParams_3440_);
lean_dec(v_numParams_3440_);
lean_inc(v___x_3451_);
lean_inc_ref(v_args_3448_);
v_discrs_3464_ = l_Array_toSubarray___redArg(v_args_3448_, v___x_3449_, v___x_3451_);
v___x_3465_ = lean_nat_add(v_numIndices_3441_, v___x_3446_);
lean_dec(v_numIndices_3441_);
v___x_3466_ = lean_box(0);
v_discrInfos_3467_ = lean_mk_array(v___x_3465_, v___x_3466_);
lean_inc(v___x_3453_);
lean_inc_ref(v_args_3448_);
v_alts_3468_ = l_Array_toSubarray___redArg(v_args_3448_, v___x_3451_, v___x_3453_);
v___x_3518_ = lean_nat_dec_le(v___x_3453_, v___x_3460_);
if (v___x_3518_ == 0)
{
v_lower_3510_ = v___x_3453_;
v_upper_3511_ = v___x_3454_;
goto v___jp_3509_;
}
else
{
lean_dec(v___x_3453_);
v_lower_3510_ = v___x_3460_;
v_upper_3511_ = v___x_3454_;
goto v___jp_3509_;
}
v___jp_3469_:
{
lean_object* v___x_3472_; size_t v_sz_3473_; size_t v___x_3474_; lean_object* v___x_3475_; 
v___x_3472_ = lean_array_mk(v_ctors_3442_);
v_sz_3473_ = lean_array_size(v___x_3472_);
v___x_3474_ = ((size_t)0ULL);
v___x_3475_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__3(v_sz_3473_, v___x_3474_, v___x_3472_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3500_; 
v_a_3476_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3478_ = v___x_3475_;
v_isShared_3479_ = v_isSharedCheck_3500_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v___x_3475_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3500_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v_start_3480_; lean_object* v_stop_3481_; lean_object* v_start_3482_; lean_object* v_stop_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3495_; 
v_start_3480_ = lean_ctor_get(v_params_3461_, 1);
lean_inc(v_start_3480_);
v_stop_3481_ = lean_ctor_get(v_params_3461_, 2);
lean_inc(v_stop_3481_);
v_start_3482_ = lean_ctor_get(v_discrs_3464_, 1);
lean_inc(v_start_3482_);
v_stop_3483_ = lean_ctor_get(v_discrs_3464_, 2);
lean_inc(v_stop_3483_);
v___x_3484_ = lean_nat_sub(v_stop_3481_, v_start_3480_);
lean_dec(v_start_3480_);
lean_dec(v_stop_3481_);
v___x_3485_ = lean_nat_sub(v_stop_3483_, v_start_3482_);
lean_dec(v_start_3482_);
lean_dec(v_stop_3483_);
v___x_3486_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__1);
v___x_3487_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3484_);
lean_ctor_set(v___x_3487_, 1, v___x_3485_);
lean_ctor_set(v___x_3487_, 2, v_a_3476_);
lean_ctor_set(v___x_3487_, 3, v___y_3471_);
lean_ctor_set(v___x_3487_, 4, v_discrInfos_3467_);
lean_ctor_set(v___x_3487_, 5, v___x_3486_);
v___x_3488_ = lean_array_mk(v_us_3377_);
v___x_3489_ = l_Subarray_copy___redArg(v_params_3461_);
v___x_3490_ = l_Subarray_copy___redArg(v_discrs_3464_);
v___x_3491_ = l_Subarray_copy___redArg(v_alts_3468_);
v___x_3492_ = l_Subarray_copy___redArg(v___y_3470_);
v___x_3493_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3487_);
lean_ctor_set(v___x_3493_, 1, v_declName_3376_);
lean_ctor_set(v___x_3493_, 2, v___x_3488_);
lean_ctor_set(v___x_3493_, 3, v___x_3489_);
lean_ctor_set(v___x_3493_, 4, v_motive_3463_);
lean_ctor_set(v___x_3493_, 5, v___x_3490_);
lean_ctor_set(v___x_3493_, 6, v___x_3491_);
lean_ctor_set(v___x_3493_, 7, v___x_3492_);
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 1);
lean_ctor_set(v___x_3437_, 0, v___x_3493_);
v___x_3495_ = v___x_3437_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3493_);
v___x_3495_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3497_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 0, v___x_3495_);
v___x_3497_ = v___x_3478_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
else
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3508_; 
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec_ref(v_alts_3468_);
lean_dec_ref(v_discrInfos_3467_);
lean_dec_ref(v_discrs_3464_);
lean_dec(v_motive_3463_);
lean_dec_ref(v_params_3461_);
lean_del_object(v___x_3437_);
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
v_a_3501_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3503_ = v___x_3475_;
v_isShared_3504_ = v_isSharedCheck_3508_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3475_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3508_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3506_; 
if (v_isShared_3504_ == 0)
{
v___x_3506_ = v___x_3503_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v_a_3501_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
}
v___jp_3509_:
{
lean_object* v_levelParams_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; uint8_t v___x_3516_; 
v_levelParams_3512_ = lean_ctor_get(v_toConstantVal_3439_, 1);
lean_inc(v_levelParams_3512_);
lean_dec_ref(v_toConstantVal_3439_);
v___x_3513_ = l_Array_toSubarray___redArg(v_args_3448_, v_lower_3510_, v_upper_3511_);
v___x_3514_ = l_List_lengthTR___redArg(v_levelParams_3512_);
lean_dec(v_levelParams_3512_);
v___x_3515_ = l_List_lengthTR___redArg(v_us_3377_);
v___x_3516_ = lean_nat_dec_eq(v___x_3514_, v___x_3515_);
lean_dec(v___x_3515_);
lean_dec(v___x_3514_);
if (v___x_3516_ == 0)
{
lean_object* v___x_3517_; 
v___x_3517_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___closed__2));
v___y_3470_ = v___x_3513_;
v___y_3471_ = v___x_3517_;
goto v___jp_3469_;
}
else
{
v___y_3470_ = v___x_3513_;
v___y_3471_ = v___x_3466_;
goto v___jp_3469_;
}
}
}
}
}
else
{
lean_object* v___x_3520_; lean_object* v___x_3522_; 
lean_dec(v_a_3431_);
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v_e_3359_);
v___x_3520_ = lean_box(0);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3520_);
v___x_3522_ = v___x_3433_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v___x_3520_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
else
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3532_; 
lean_dec(v_us_3377_);
lean_dec(v_declName_3376_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v_e_3359_);
v_a_3525_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3527_ = v___x_3430_;
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3430_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_a_3525_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
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
lean_dec_ref(v___x_3375_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v_e_3359_);
goto v___jp_3369_;
}
}
v___jp_3369_:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = lean_box(0);
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3370_);
return v___x_3371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0___boxed(lean_object* v_e_3534_, lean_object* v_alsoCasesOn_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_){
_start:
{
uint8_t v_alsoCasesOn_boxed_3544_; lean_object* v_res_3545_; 
v_alsoCasesOn_boxed_3544_ = lean_unbox(v_alsoCasesOn_3535_);
v_res_3545_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0(v_e_3534_, v_alsoCasesOn_boxed_3544_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_);
return v_res_3545_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__2(void){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__1));
v___x_3550_ = l_Lean_stringToMessageData(v___x_3549_);
return v___x_3550_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__3(void){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = lean_unsigned_to_nat(1u);
v___x_3552_ = l_Lean_Expr_bvar___override(v___x_3551_);
return v___x_3552_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__6(void){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3555_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__5));
v___x_3556_ = lean_unsigned_to_nat(2u);
v___x_3557_ = lean_unsigned_to_nat(181u);
v___x_3558_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__4));
v___x_3559_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__2));
v___x_3560_ = l_mkPanicMessageWithDecl(v___x_3559_, v___x_3558_, v___x_3557_, v___x_3556_, v___x_3555_);
return v___x_3560_;
}
}
static uint64_t _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7(void){
_start:
{
uint8_t v___x_3561_; uint64_t v___x_3562_; 
v___x_3561_ = 0;
v___x_3562_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3561_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg(lean_object* v_e_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_){
_start:
{
lean_object* v_e_3572_; uint8_t v___x_3573_; lean_object* v___x_3574_; 
v_e_3572_ = l_Lean_Expr_headBeta(v_e_3563_);
v___x_3573_ = 1;
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
lean_inc(v_a_3566_);
lean_inc_ref(v_a_3565_);
lean_inc(v_a_3564_);
v___x_3574_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0(v_e_3572_, v___x_3573_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3864_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3577_ = v___x_3574_;
v_isShared_3578_ = v_isSharedCheck_3864_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3574_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3864_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
if (lean_obj_tag(v_a_3575_) == 1)
{
lean_object* v_val_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3859_; 
v_val_3579_ = lean_ctor_get(v_a_3575_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v_a_3575_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3581_ = v_a_3575_;
v_isShared_3582_ = v_isSharedCheck_3859_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_val_3579_);
lean_dec(v_a_3575_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3859_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v_toMatcherInfo_3583_; lean_object* v_matcherName_3584_; lean_object* v_params_3585_; lean_object* v_motive_3586_; lean_object* v_discrs_3587_; lean_object* v_alts_3588_; lean_object* v_remaining_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; 
v_toMatcherInfo_3583_ = lean_ctor_get(v_val_3579_, 0);
lean_inc_ref(v_toMatcherInfo_3583_);
v_matcherName_3584_ = lean_ctor_get(v_val_3579_, 1);
lean_inc(v_matcherName_3584_);
v_params_3585_ = lean_ctor_get(v_val_3579_, 3);
lean_inc_ref(v_params_3585_);
v_motive_3586_ = lean_ctor_get(v_val_3579_, 4);
lean_inc_ref(v_motive_3586_);
v_discrs_3587_ = lean_ctor_get(v_val_3579_, 5);
lean_inc_ref(v_discrs_3587_);
v_alts_3588_ = lean_ctor_get(v_val_3579_, 6);
lean_inc_ref(v_alts_3588_);
v_remaining_3589_ = lean_ctor_get(v_val_3579_, 7);
lean_inc_ref(v_remaining_3589_);
v___x_3590_ = lean_unsigned_to_nat(0u);
v___x_3591_ = lean_array_get_size(v_remaining_3589_);
v___x_3592_ = lean_nat_dec_lt(v___x_3590_, v___x_3591_);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; lean_object* v___x_3595_; 
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3593_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3593_);
v___x_3595_ = v___x_3577_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
else
{
lean_object* v___x_3597_; uint8_t v___x_3598_; 
v___x_3597_ = lean_array_fget_borrowed(v_remaining_3589_, v___x_3590_);
v___x_3598_ = l_Lean_Expr_isLambda(v___x_3597_);
if (v___x_3598_ == 0)
{
lean_object* v___x_3599_; lean_object* v___x_3601_; 
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3599_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3599_);
v___x_3601_ = v___x_3577_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
else
{
lean_object* v___x_3603_; uint8_t v___x_3604_; 
v___x_3603_ = l_Lean_Expr_bindingBody_x21(v___x_3597_);
v___x_3604_ = l_Lean_Expr_isLambda(v___x_3603_);
if (v___x_3604_ == 0)
{
lean_object* v___x_3605_; lean_object* v___x_3607_; 
lean_dec_ref(v___x_3603_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3605_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3605_);
v___x_3607_ = v___x_3577_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
else
{
lean_object* v___x_3609_; uint8_t v___x_3610_; 
v___x_3609_ = l_Lean_Expr_bindingBody_x21(v___x_3603_);
lean_dec_ref(v___x_3603_);
v___x_3610_ = l_Lean_Expr_isApp(v___x_3609_);
if (v___x_3610_ == 0)
{
lean_object* v___x_3611_; lean_object* v___x_3613_; 
lean_dec_ref(v___x_3609_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3611_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3611_);
v___x_3613_ = v___x_3577_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3611_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
else
{
uint8_t v___x_3615_; 
v___x_3615_ = lean_expr_has_loose_bvar(v___x_3609_, v___x_3590_);
if (v___x_3615_ == 0)
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v_a_3619_; lean_object* v___x_3673_; uint8_t v___x_3674_; 
v___x_3616_ = l_Lean_Expr_appArg_x21(v___x_3609_);
v___x_3617_ = lean_unsigned_to_nat(1u);
v___x_3673_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__3);
v___x_3674_ = lean_expr_eqv(v___x_3616_, v___x_3673_);
lean_dec_ref(v___x_3616_);
if (v___x_3674_ == 0)
{
lean_object* v___x_3675_; lean_object* v___x_3677_; 
lean_dec_ref(v___x_3609_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3675_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3675_);
v___x_3677_ = v___x_3577_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
else
{
lean_object* v___x_3679_; uint8_t v___x_3680_; 
v___x_3679_ = l_Lean_Expr_appFn_x21(v___x_3609_);
lean_dec_ref(v___x_3609_);
v___x_3680_ = lean_expr_has_loose_bvar(v___x_3679_, v___x_3617_);
if (v___x_3680_ == 0)
{
lean_object* v___x_3681_; 
lean_del_object(v___x_3577_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
lean_inc_ref(v___x_3679_);
v___x_3681_ = lean_infer_type(v___x_3679_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3683_; uint8_t v_foApprox_3684_; uint8_t v_ctxApprox_3685_; uint8_t v_quasiPatternApprox_3686_; uint8_t v_constApprox_3687_; uint8_t v_isDefEqStuckEx_3688_; uint8_t v_unificationHints_3689_; uint8_t v_proofIrrelevance_3690_; uint8_t v_assignSyntheticOpaque_3691_; uint8_t v_offsetCnstrs_3692_; uint8_t v_etaStruct_3693_; uint8_t v_univApprox_3694_; uint8_t v_iota_3695_; uint8_t v_beta_3696_; uint8_t v_proj_3697_; uint8_t v_zeta_3698_; uint8_t v_zetaDelta_3699_; uint8_t v_zetaUnused_3700_; uint8_t v_zetaHave_3701_; uint8_t v_trackZetaDelta_3702_; lean_object* v_zetaDeltaSet_3703_; lean_object* v_lctx_3704_; lean_object* v_localInstances_3705_; lean_object* v_defEqCtx_x3f_3706_; lean_object* v_synthPendingDepth_3707_; lean_object* v_canUnfold_x3f_3708_; uint8_t v_univApprox_3709_; uint8_t v_inTypeClassResolution_3710_; uint8_t v_cacheInferType_3711_; uint8_t v___x_3712_; lean_object* v_a_3714_; lean_object* v_config_3823_; uint64_t v___x_3824_; uint64_t v___x_3825_; uint64_t v___x_3826_; uint64_t v___x_3827_; uint64_t v___x_3828_; uint64_t v_key_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref(v___x_3681_);
v___x_3683_ = l_Lean_Meta_Context_config(v_a_3567_);
v_foApprox_3684_ = lean_ctor_get_uint8(v___x_3683_, 0);
v_ctxApprox_3685_ = lean_ctor_get_uint8(v___x_3683_, 1);
v_quasiPatternApprox_3686_ = lean_ctor_get_uint8(v___x_3683_, 2);
v_constApprox_3687_ = lean_ctor_get_uint8(v___x_3683_, 3);
v_isDefEqStuckEx_3688_ = lean_ctor_get_uint8(v___x_3683_, 4);
v_unificationHints_3689_ = lean_ctor_get_uint8(v___x_3683_, 5);
v_proofIrrelevance_3690_ = lean_ctor_get_uint8(v___x_3683_, 6);
v_assignSyntheticOpaque_3691_ = lean_ctor_get_uint8(v___x_3683_, 7);
v_offsetCnstrs_3692_ = lean_ctor_get_uint8(v___x_3683_, 8);
v_etaStruct_3693_ = lean_ctor_get_uint8(v___x_3683_, 10);
v_univApprox_3694_ = lean_ctor_get_uint8(v___x_3683_, 11);
v_iota_3695_ = lean_ctor_get_uint8(v___x_3683_, 12);
v_beta_3696_ = lean_ctor_get_uint8(v___x_3683_, 13);
v_proj_3697_ = lean_ctor_get_uint8(v___x_3683_, 14);
v_zeta_3698_ = lean_ctor_get_uint8(v___x_3683_, 15);
v_zetaDelta_3699_ = lean_ctor_get_uint8(v___x_3683_, 16);
v_zetaUnused_3700_ = lean_ctor_get_uint8(v___x_3683_, 17);
v_zetaHave_3701_ = lean_ctor_get_uint8(v___x_3683_, 18);
v_trackZetaDelta_3702_ = lean_ctor_get_uint8(v_a_3567_, sizeof(void*)*7);
v_zetaDeltaSet_3703_ = lean_ctor_get(v_a_3567_, 1);
v_lctx_3704_ = lean_ctor_get(v_a_3567_, 2);
v_localInstances_3705_ = lean_ctor_get(v_a_3567_, 3);
v_defEqCtx_x3f_3706_ = lean_ctor_get(v_a_3567_, 4);
v_synthPendingDepth_3707_ = lean_ctor_get(v_a_3567_, 5);
v_canUnfold_x3f_3708_ = lean_ctor_get(v_a_3567_, 6);
v_univApprox_3709_ = lean_ctor_get_uint8(v_a_3567_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3710_ = lean_ctor_get_uint8(v_a_3567_, sizeof(void*)*7 + 2);
v_cacheInferType_3711_ = lean_ctor_get_uint8(v_a_3567_, sizeof(void*)*7 + 3);
v___x_3712_ = 0;
v_config_3823_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_config_3823_, 0, v_foApprox_3684_);
lean_ctor_set_uint8(v_config_3823_, 1, v_ctxApprox_3685_);
lean_ctor_set_uint8(v_config_3823_, 2, v_quasiPatternApprox_3686_);
lean_ctor_set_uint8(v_config_3823_, 3, v_constApprox_3687_);
lean_ctor_set_uint8(v_config_3823_, 4, v_isDefEqStuckEx_3688_);
lean_ctor_set_uint8(v_config_3823_, 5, v_unificationHints_3689_);
lean_ctor_set_uint8(v_config_3823_, 6, v_proofIrrelevance_3690_);
lean_ctor_set_uint8(v_config_3823_, 7, v_assignSyntheticOpaque_3691_);
lean_ctor_set_uint8(v_config_3823_, 8, v_offsetCnstrs_3692_);
lean_ctor_set_uint8(v_config_3823_, 9, v___x_3712_);
lean_ctor_set_uint8(v_config_3823_, 10, v_etaStruct_3693_);
lean_ctor_set_uint8(v_config_3823_, 11, v_univApprox_3694_);
lean_ctor_set_uint8(v_config_3823_, 12, v_iota_3695_);
lean_ctor_set_uint8(v_config_3823_, 13, v_beta_3696_);
lean_ctor_set_uint8(v_config_3823_, 14, v_proj_3697_);
lean_ctor_set_uint8(v_config_3823_, 15, v_zeta_3698_);
lean_ctor_set_uint8(v_config_3823_, 16, v_zetaDelta_3699_);
lean_ctor_set_uint8(v_config_3823_, 17, v_zetaUnused_3700_);
lean_ctor_set_uint8(v_config_3823_, 18, v_zetaHave_3701_);
v___x_3824_ = l_Lean_Meta_Context_configKey(v_a_3567_);
v___x_3825_ = 2ULL;
v___x_3826_ = lean_uint64_shift_right(v___x_3824_, v___x_3825_);
v___x_3827_ = lean_uint64_shift_left(v___x_3826_, v___x_3825_);
v___x_3828_ = lean_uint64_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7);
v_key_3829_ = lean_uint64_lor(v___x_3827_, v___x_3828_);
v___x_3830_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3830_, 0, v_config_3823_);
lean_ctor_set_uint64(v___x_3830_, sizeof(void*)*1, v_key_3829_);
lean_inc(v_canUnfold_x3f_3708_);
lean_inc(v_synthPendingDepth_3707_);
lean_inc(v_defEqCtx_x3f_3706_);
lean_inc_ref(v_localInstances_3705_);
lean_inc_ref(v_lctx_3704_);
lean_inc(v_zetaDeltaSet_3703_);
v___x_3831_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3831_, 0, v___x_3830_);
lean_ctor_set(v___x_3831_, 1, v_zetaDeltaSet_3703_);
lean_ctor_set(v___x_3831_, 2, v_lctx_3704_);
lean_ctor_set(v___x_3831_, 3, v_localInstances_3705_);
lean_ctor_set(v___x_3831_, 4, v_defEqCtx_x3f_3706_);
lean_ctor_set(v___x_3831_, 5, v_synthPendingDepth_3707_);
lean_ctor_set(v___x_3831_, 6, v_canUnfold_x3f_3708_);
lean_ctor_set_uint8(v___x_3831_, sizeof(void*)*7, v_trackZetaDelta_3702_);
lean_ctor_set_uint8(v___x_3831_, sizeof(void*)*7 + 1, v_univApprox_3709_);
lean_ctor_set_uint8(v___x_3831_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3710_);
lean_ctor_set_uint8(v___x_3831_, sizeof(void*)*7 + 3, v_cacheInferType_3711_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
v___x_3832_ = l_Lean_Meta_whnfForall(v_a_3682_, v___x_3831_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3832_) == 0)
{
lean_object* v_a_3833_; 
v_a_3833_ = lean_ctor_get(v___x_3832_, 0);
lean_inc(v_a_3833_);
lean_dec_ref(v___x_3832_);
v_a_3714_ = v_a_3833_;
goto v___jp_3713_;
}
else
{
if (lean_obj_tag(v___x_3832_) == 0)
{
lean_object* v_a_3834_; 
v_a_3834_ = lean_ctor_get(v___x_3832_, 0);
lean_inc(v_a_3834_);
lean_dec_ref(v___x_3832_);
v_a_3714_ = v_a_3834_;
goto v___jp_3713_;
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3842_; 
lean_dec_ref(v___x_3683_);
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v_a_3835_ = lean_ctor_get(v___x_3832_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3832_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3837_ = v___x_3832_;
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v___x_3832_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3840_; 
if (v_isShared_3838_ == 0)
{
v___x_3840_ = v___x_3837_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3835_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
}
v___jp_3713_:
{
uint8_t v___x_3715_; 
v___x_3715_ = l_Lean_Expr_isForall(v_a_3714_);
if (v___x_3715_ == 0)
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
lean_dec_ref(v_a_3714_);
lean_dec_ref(v___x_3683_);
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
v___x_3716_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__6);
v___x_3717_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__2(v___x_3716_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
return v___x_3717_;
}
else
{
lean_object* v___x_3718_; 
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
v___x_3718_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_isForallMotive(v_val_3579_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3814_; 
v_a_3719_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3721_ = v___x_3718_;
v_isShared_3722_ = v_isSharedCheck_3814_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3718_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3814_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
if (lean_obj_tag(v_a_3719_) == 1)
{
lean_object* v_val_3723_; uint8_t v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___f_3728_; lean_object* v___x_3729_; 
lean_del_object(v___x_3721_);
v_val_3723_ = lean_ctor_get(v_a_3719_, 0);
lean_inc(v_val_3723_);
lean_dec_ref(v_a_3719_);
v___x_3724_ = 0;
v___x_3725_ = lean_box(v___x_3724_);
v___x_3726_ = lean_box(v___x_3680_);
v___x_3727_ = lean_box(v___x_3573_);
v___f_3728_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___lam__0___boxed), 13, 3);
lean_closure_set(v___f_3728_, 0, v___x_3725_);
lean_closure_set(v___f_3728_, 1, v___x_3726_);
lean_closure_set(v___f_3728_, 2, v___x_3727_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
v___x_3729_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__3___redArg(v_motive_3586_, v___f_3728_, v___x_3680_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3731_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
lean_inc(v_a_3730_);
lean_dec_ref(v___x_3729_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
v___x_3731_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher(v_matcherName_3584_, v_toMatcherInfo_3583_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; uint8_t v_foApprox_3733_; uint8_t v_ctxApprox_3734_; uint8_t v_quasiPatternApprox_3735_; uint8_t v_constApprox_3736_; uint8_t v_isDefEqStuckEx_3737_; uint8_t v_unificationHints_3738_; uint8_t v_proofIrrelevance_3739_; uint8_t v_assignSyntheticOpaque_3740_; uint8_t v_offsetCnstrs_3741_; uint8_t v_etaStruct_3742_; uint8_t v_univApprox_3743_; uint8_t v_iota_3744_; uint8_t v_beta_3745_; uint8_t v_proj_3746_; uint8_t v_zeta_3747_; uint8_t v_zetaDelta_3748_; uint8_t v_zetaUnused_3749_; uint8_t v_zetaHave_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3793_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
lean_dec_ref(v___x_3731_);
v_foApprox_3733_ = lean_ctor_get_uint8(v___x_3683_, 0);
v_ctxApprox_3734_ = lean_ctor_get_uint8(v___x_3683_, 1);
v_quasiPatternApprox_3735_ = lean_ctor_get_uint8(v___x_3683_, 2);
v_constApprox_3736_ = lean_ctor_get_uint8(v___x_3683_, 3);
v_isDefEqStuckEx_3737_ = lean_ctor_get_uint8(v___x_3683_, 4);
v_unificationHints_3738_ = lean_ctor_get_uint8(v___x_3683_, 5);
v_proofIrrelevance_3739_ = lean_ctor_get_uint8(v___x_3683_, 6);
v_assignSyntheticOpaque_3740_ = lean_ctor_get_uint8(v___x_3683_, 7);
v_offsetCnstrs_3741_ = lean_ctor_get_uint8(v___x_3683_, 8);
v_etaStruct_3742_ = lean_ctor_get_uint8(v___x_3683_, 10);
v_univApprox_3743_ = lean_ctor_get_uint8(v___x_3683_, 11);
v_iota_3744_ = lean_ctor_get_uint8(v___x_3683_, 12);
v_beta_3745_ = lean_ctor_get_uint8(v___x_3683_, 13);
v_proj_3746_ = lean_ctor_get_uint8(v___x_3683_, 14);
v_zeta_3747_ = lean_ctor_get_uint8(v___x_3683_, 15);
v_zetaDelta_3748_ = lean_ctor_get_uint8(v___x_3683_, 16);
v_zetaUnused_3749_ = lean_ctor_get_uint8(v___x_3683_, 17);
v_zetaHave_3750_ = lean_ctor_get_uint8(v___x_3683_, 18);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3752_ = v___x_3683_;
v_isShared_3753_ = v_isSharedCheck_3793_;
goto v_resetjp_3751_;
}
else
{
lean_dec(v___x_3683_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3793_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; size_t v_sz_3768_; lean_object* v_config_3770_; 
v___x_3754_ = l_Lean_Expr_bindingDomain_x21(v_a_3714_);
v___x_3755_ = l_Lean_Expr_bindingName_x21(v_a_3714_);
v___x_3756_ = l_Lean_Expr_bindingBody_x21(v_a_3714_);
lean_dec_ref(v_a_3714_);
lean_inc_ref(v___x_3754_);
v___x_3757_ = l_Lean_Expr_lam___override(v___x_3755_, v___x_3754_, v___x_3756_, v___x_3724_);
v___x_3758_ = lean_unsigned_to_nat(5u);
v___x_3759_ = lean_mk_empty_array_with_capacity(v___x_3758_);
v___x_3760_ = lean_array_push(v___x_3759_, v_val_3723_);
v___x_3761_ = lean_array_push(v___x_3760_, v___x_3754_);
v___x_3762_ = lean_array_push(v___x_3761_, v___x_3757_);
v___x_3763_ = lean_array_push(v___x_3762_, v___x_3679_);
v___x_3764_ = lean_array_push(v___x_3763_, v_a_3730_);
v___x_3765_ = l_Array_append___redArg(v_params_3585_, v___x_3764_);
lean_dec_ref(v___x_3764_);
v___x_3766_ = l_Array_append___redArg(v___x_3765_, v_discrs_3587_);
lean_dec_ref(v_discrs_3587_);
v___x_3767_ = l_Array_append___redArg(v___x_3766_, v_alts_3588_);
lean_dec_ref(v_alts_3588_);
v_sz_3768_ = lean_array_size(v___x_3767_);
if (v_isShared_3753_ == 0)
{
v_config_3770_ = v___x_3752_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 0, v_foApprox_3733_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 1, v_ctxApprox_3734_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 2, v_quasiPatternApprox_3735_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 3, v_constApprox_3736_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 4, v_isDefEqStuckEx_3737_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 5, v_unificationHints_3738_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 6, v_proofIrrelevance_3739_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 7, v_assignSyntheticOpaque_3740_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 8, v_offsetCnstrs_3741_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 10, v_etaStruct_3742_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 11, v_univApprox_3743_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 12, v_iota_3744_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 13, v_beta_3745_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 14, v_proj_3746_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 15, v_zeta_3747_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 16, v_zetaDelta_3748_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 17, v_zetaUnused_3749_);
lean_ctor_set_uint8(v_reuseFailAlloc_3792_, 18, v_zetaHave_3750_);
v_config_3770_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
uint64_t v___x_3771_; uint64_t v___x_3772_; uint64_t v___x_3773_; size_t v___x_3774_; lean_object* v___x_3775_; uint64_t v___x_3776_; uint64_t v___x_3777_; uint64_t v_key_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
lean_ctor_set_uint8(v_config_3770_, 9, v___x_3712_);
v___x_3771_ = l_Lean_Meta_Context_configKey(v_a_3567_);
v___x_3772_ = 2ULL;
v___x_3773_ = lean_uint64_shift_right(v___x_3771_, v___x_3772_);
v___x_3774_ = ((size_t)0ULL);
v___x_3775_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__4(v_sz_3768_, v___x_3774_, v___x_3767_);
v___x_3776_ = lean_uint64_shift_left(v___x_3773_, v___x_3772_);
v___x_3777_ = lean_uint64_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7);
v_key_3778_ = lean_uint64_lor(v___x_3776_, v___x_3777_);
v___x_3779_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3779_, 0, v_config_3770_);
lean_ctor_set_uint64(v___x_3779_, sizeof(void*)*1, v_key_3778_);
lean_inc(v_canUnfold_x3f_3708_);
lean_inc(v_synthPendingDepth_3707_);
lean_inc(v_defEqCtx_x3f_3706_);
lean_inc_ref(v_localInstances_3705_);
lean_inc_ref(v_lctx_3704_);
lean_inc(v_zetaDeltaSet_3703_);
v___x_3780_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
lean_ctor_set(v___x_3780_, 1, v_zetaDeltaSet_3703_);
lean_ctor_set(v___x_3780_, 2, v_lctx_3704_);
lean_ctor_set(v___x_3780_, 3, v_localInstances_3705_);
lean_ctor_set(v___x_3780_, 4, v_defEqCtx_x3f_3706_);
lean_ctor_set(v___x_3780_, 5, v_synthPendingDepth_3707_);
lean_ctor_set(v___x_3780_, 6, v_canUnfold_x3f_3708_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*7, v_trackZetaDelta_3702_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*7 + 1, v_univApprox_3709_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3710_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*7 + 3, v_cacheInferType_3711_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
v___x_3781_ = l_Lean_Meta_mkAppOptM(v_a_3732_, v___x_3775_, v___x_3780_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3781_) == 0)
{
lean_object* v_a_3782_; 
v_a_3782_ = lean_ctor_get(v___x_3781_, 0);
lean_inc(v_a_3782_);
lean_dec_ref(v___x_3781_);
v_a_3619_ = v_a_3782_;
goto v___jp_3618_;
}
else
{
if (lean_obj_tag(v___x_3781_) == 0)
{
lean_object* v_a_3783_; 
v_a_3783_ = lean_ctor_get(v___x_3781_, 0);
lean_inc(v_a_3783_);
lean_dec_ref(v___x_3781_);
v_a_3619_ = v_a_3783_;
goto v___jp_3618_;
}
else
{
lean_object* v_a_3784_; lean_object* v___x_3786_; uint8_t v_isShared_3787_; uint8_t v_isSharedCheck_3791_; 
lean_dec_ref(v_remaining_3589_);
lean_del_object(v___x_3581_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
v_a_3784_ = lean_ctor_get(v___x_3781_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3781_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3786_ = v___x_3781_;
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
else
{
lean_inc(v_a_3784_);
lean_dec(v___x_3781_);
v___x_3786_ = lean_box(0);
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
v_resetjp_3785_:
{
lean_object* v___x_3789_; 
if (v_isShared_3787_ == 0)
{
v___x_3789_ = v___x_3786_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3784_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
lean_dec(v_a_3730_);
lean_dec(v_val_3723_);
lean_dec_ref(v_a_3714_);
lean_dec_ref(v___x_3683_);
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_params_3585_);
lean_del_object(v___x_3581_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
v_a_3794_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3731_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3731_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_dec(v_val_3723_);
lean_dec_ref(v_a_3714_);
lean_dec_ref(v___x_3683_);
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
v_a_3802_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3729_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3729_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
else
{
lean_object* v___x_3810_; lean_object* v___x_3812_; 
lean_dec(v_a_3719_);
lean_dec_ref(v_a_3714_);
lean_dec_ref(v___x_3683_);
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3810_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3722_ == 0)
{
lean_ctor_set(v___x_3721_, 0, v___x_3810_);
v___x_3812_ = v___x_3721_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3810_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
else
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3822_; 
lean_dec_ref(v_a_3714_);
lean_dec_ref(v___x_3683_);
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v_a_3815_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3817_ = v___x_3718_;
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3718_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v_a_3843_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3681_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3681_);
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
lean_object* v___x_3851_; lean_object* v___x_3853_; 
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3851_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3851_);
v___x_3853_ = v___x_3577_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
v___jp_3618_:
{
lean_object* v___x_3620_; 
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
lean_inc_ref(v_a_3619_);
v___x_3620_ = lean_infer_type(v_a_3619_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; uint8_t v___x_3624_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref(v___x_3620_);
v___x_3622_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq___lam__2___closed__1));
v___x_3623_ = lean_unsigned_to_nat(3u);
v___x_3624_ = l_Lean_Expr_isAppOfArity(v_a_3621_, v___x_3622_, v___x_3623_);
if (v___x_3624_ == 0)
{
lean_object* v___x_3625_; 
lean_dec(v_a_3621_);
lean_dec_ref(v_remaining_3589_);
lean_del_object(v___x_3581_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
v___x_3625_ = lean_infer_type(v_a_3619_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3625_) == 0)
{
lean_object* v_a_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v_a_3626_ = lean_ctor_get(v___x_3625_, 0);
lean_inc(v_a_3626_);
lean_dec_ref(v___x_3625_);
v___x_3627_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__2);
v___x_3628_ = l_Lean_indentExpr(v_a_3626_);
v___x_3629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3627_);
lean_ctor_set(v___x_3629_, 1, v___x_3628_);
v___x_3630_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg(v___x_3629_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
return v___x_3630_;
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
v_a_3631_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3625_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3625_);
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
lean_object* v___x_3639_; lean_object* v___x_3641_; 
v___x_3639_ = l_Lean_Expr_appArg_x21(v_a_3621_);
lean_dec(v_a_3621_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v_a_3619_);
v___x_3641_ = v___x_3581_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_a_3619_);
v___x_3641_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3642_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3642_, 0, v___x_3639_);
lean_ctor_set(v___x_3642_, 1, v___x_3641_);
lean_ctor_set_uint8(v___x_3642_, sizeof(void*)*2, v___x_3573_);
v___x_3643_ = l_Array_toSubarray___redArg(v_remaining_3589_, v___x_3617_, v___x_3591_);
v___x_3644_ = l_Subarray_copy___redArg(v___x_3643_);
v___x_3645_ = l_Lean_Meta_Simp_Result_addExtraArgs(v___x_3642_, v___x_3644_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
lean_dec_ref(v___x_3644_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3655_; 
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3655_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3645_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3655_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3653_; 
v___x_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3650_, 0, v_a_3646_);
v___x_3651_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3650_);
if (v_isShared_3649_ == 0)
{
lean_ctor_set(v___x_3648_, 0, v___x_3651_);
v___x_3653_ = v___x_3648_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3651_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
else
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
v_a_3656_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3645_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3645_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
}
}
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
lean_dec_ref(v_a_3619_);
lean_dec_ref(v_remaining_3589_);
lean_del_object(v___x_3581_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
v_a_3665_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3620_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3620_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
}
else
{
lean_object* v___x_3855_; lean_object* v___x_3857_; 
lean_dec_ref(v___x_3609_);
lean_dec_ref(v_remaining_3589_);
lean_dec_ref(v_alts_3588_);
lean_dec_ref(v_discrs_3587_);
lean_dec_ref(v_motive_3586_);
lean_dec_ref(v_params_3585_);
lean_dec(v_matcherName_3584_);
lean_dec_ref(v_toMatcherInfo_3583_);
lean_del_object(v___x_3581_);
lean_dec(v_val_3579_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3855_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3855_);
v___x_3857_ = v___x_3577_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
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
lean_object* v___x_3860_; lean_object* v___x_3862_; 
lean_dec(v_a_3575_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v___x_3860_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__0));
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 0, v___x_3860_);
v___x_3862_ = v___x_3577_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3860_);
v___x_3862_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
return v___x_3862_;
}
}
}
}
else
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3872_; 
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
v_a_3865_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3867_ = v___x_3574_;
v_isShared_3868_ = v_isSharedCheck_3872_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v___x_3574_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3872_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3870_; 
if (v_isShared_3868_ == 0)
{
v___x_3870_ = v___x_3867_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v_a_3865_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___boxed(lean_object* v_e_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_){
_start:
{
lean_object* v_res_3882_; 
v_res_3882_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg(v_e_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_);
return v_res_3882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2(lean_object* v_declName_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v___x_3892_; 
v___x_3892_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___redArg(v_declName_3883_, v___y_3890_);
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2___boxed(lean_object* v_declName_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__2(v_declName_3893_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
lean_dec(v___y_3900_);
lean_dec_ref(v___y_3899_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1(lean_object* v_00_u03b1_3903_, lean_object* v_msg_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v___x_3913_; 
v___x_3913_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___redArg(v_msg_3904_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1___boxed(lean_object* v_00_u03b1_3914_, lean_object* v_msg_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__1(v_00_u03b1_3914_, v_msg_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec(v___y_3916_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_3925_, lean_object* v_constName_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_){
_start:
{
lean_object* v___x_3935_; 
v___x_3935_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___redArg(v_constName_3926_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_);
return v___x_3935_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_3936_, lean_object* v_constName_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3(v_00_u03b1_3936_, v_constName_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
lean_dec(v___y_3944_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec(v___y_3940_);
lean_dec_ref(v___y_3939_);
lean_dec(v___y_3938_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8(lean_object* v_00_u03b1_3947_, lean_object* v_ref_3948_, lean_object* v_constName_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
lean_object* v___x_3958_; 
v___x_3958_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___redArg(v_ref_3948_, v_constName_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
return v___x_3958_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8___boxed(lean_object* v_00_u03b1_3959_, lean_object* v_ref_3960_, lean_object* v_constName_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_){
_start:
{
lean_object* v_res_3970_; 
v_res_3970_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8(v_00_u03b1_3959_, v_ref_3960_, v_constName_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_);
lean_dec(v___y_3968_);
lean_dec(v___y_3966_);
lean_dec_ref(v___y_3965_);
lean_dec(v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec(v_ref_3960_);
return v_res_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10(lean_object* v_00_u03b1_3971_, lean_object* v_ref_3972_, lean_object* v_msg_3973_, lean_object* v_declHint_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_ref_3972_, v_msg_3973_, v_declHint_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10___boxed(lean_object* v_00_u03b1_3984_, lean_object* v_ref_3985_, lean_object* v_msg_3986_, lean_object* v_declHint_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10(v_00_u03b1_3984_, v_ref_3985_, v_msg_3986_, v_declHint_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_);
lean_dec(v___y_3994_);
lean_dec(v___y_3992_);
lean_dec_ref(v___y_3991_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec(v___y_3988_);
lean_dec(v_ref_3985_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12(lean_object* v_msg_3997_, lean_object* v_declHint_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_){
_start:
{
lean_object* v___x_4007_; 
v___x_4007_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___redArg(v_msg_3997_, v_declHint_3998_, v___y_4005_);
return v___x_4007_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12___boxed(lean_object* v_msg_4008_, lean_object* v_declHint_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_){
_start:
{
lean_object* v_res_4018_; 
v_res_4018_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__11_spec__12(v_msg_4008_, v_declHint_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_);
lean_dec(v___y_4016_);
lean_dec_ref(v___y_4015_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
lean_dec(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec(v___y_4010_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12(lean_object* v_00_u03b1_4019_, lean_object* v_ref_4020_, lean_object* v_msg_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_){
_start:
{
lean_object* v___x_4030_; 
v___x_4030_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___redArg(v_ref_4020_, v_msg_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
return v___x_4030_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12___boxed(lean_object* v_00_u03b1_4031_, lean_object* v_ref_4032_, lean_object* v_msg_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_spec__0_spec__0_spec__3_spec__8_spec__10_spec__12(v_00_u03b1_4031_, v_ref_4032_, v_msg_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_);
lean_dec(v___y_4040_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
lean_dec(v_ref_4032_);
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4088_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_));
v___x_4089_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_));
v___x_4090_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___boxed), 9, 0);
v___x_4091_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_4088_, v___x_4089_, v___x_4090_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9____boxed(lean_object* v_a_4092_){
_start:
{
lean_object* v_res_4093_; 
v_res_4093_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_();
return v_res_4093_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__2(void){
_start:
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4103_ = lean_box(0);
v___x_4104_ = lean_unsigned_to_nat(16u);
v___x_4105_ = lean_mk_array(v___x_4104_, v___x_4103_);
return v___x_4105_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__3(void){
_start:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4106_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__2);
v___x_4107_ = lean_unsigned_to_nat(0u);
v___x_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
lean_ctor_set(v___x_4108_, 1, v___x_4106_);
return v___x_4108_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__4(void){
_start:
{
lean_object* v___x_4109_; 
v___x_4109_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4109_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5(void){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4110_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__4);
v___x_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
return v___x_4111_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__6(void){
_start:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; uint8_t v___x_4114_; lean_object* v___x_4115_; 
v___x_4112_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5);
v___x_4113_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__3);
v___x_4114_ = 1;
v___x_4115_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4115_, 0, v___x_4113_);
lean_ctor_set(v___x_4115_, 1, v___x_4112_);
lean_ctor_set_uint8(v___x_4115_, sizeof(void*)*2, v___x_4114_);
return v___x_4115_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__7(void){
_start:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___x_4116_ = lean_unsigned_to_nat(0u);
v___x_4117_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5);
v___x_4118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
lean_ctor_set(v___x_4118_, 1, v___x_4116_);
return v___x_4118_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__8(void){
_start:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4119_ = lean_unsigned_to_nat(32u);
v___x_4120_ = lean_mk_empty_array_with_capacity(v___x_4119_);
v___x_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4121_, 0, v___x_4120_);
return v___x_4121_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__9(void){
_start:
{
size_t v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4122_ = ((size_t)5ULL);
v___x_4123_ = lean_unsigned_to_nat(0u);
v___x_4124_ = lean_unsigned_to_nat(32u);
v___x_4125_ = lean_mk_empty_array_with_capacity(v___x_4124_);
v___x_4126_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__8, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__8);
v___x_4127_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
lean_ctor_set(v___x_4127_, 1, v___x_4125_);
lean_ctor_set(v___x_4127_, 2, v___x_4123_);
lean_ctor_set(v___x_4127_, 3, v___x_4123_);
lean_ctor_set_usize(v___x_4127_, 4, v___x_4122_);
return v___x_4127_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__10(void){
_start:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4128_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__9, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__9);
v___x_4129_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__5);
v___x_4130_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
lean_ctor_set(v___x_4130_, 1, v___x_4129_);
lean_ctor_set(v___x_4130_, 2, v___x_4129_);
lean_ctor_set(v___x_4130_, 3, v___x_4128_);
return v___x_4130_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__11(void){
_start:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; 
v___x_4131_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__10, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__10);
v___x_4132_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__7);
v___x_4133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4133_, 0, v___x_4132_);
lean_ctor_set(v___x_4133_, 1, v___x_4131_);
return v___x_4133_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__13(void){
_start:
{
lean_object* v___x_4135_; lean_object* v___x_4136_; 
v___x_4135_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__12));
v___x_4136_ = l_Lean_stringToMessageData(v___x_4135_);
return v___x_4136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof(lean_object* v_declName_4137_, lean_object* v_mvarId_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_){
_start:
{
uint8_t v___x_4144_; uint8_t v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; uint8_t v_foApprox_4149_; uint8_t v_ctxApprox_4150_; uint8_t v_quasiPatternApprox_4151_; uint8_t v_constApprox_4152_; uint8_t v_isDefEqStuckEx_4153_; uint8_t v_unificationHints_4154_; uint8_t v_proofIrrelevance_4155_; uint8_t v_assignSyntheticOpaque_4156_; uint8_t v_offsetCnstrs_4157_; uint8_t v_etaStruct_4158_; uint8_t v_univApprox_4159_; uint8_t v_iota_4160_; uint8_t v_beta_4161_; uint8_t v_proj_4162_; uint8_t v_zeta_4163_; uint8_t v_zetaDelta_4164_; uint8_t v_zetaUnused_4165_; uint8_t v_zetaHave_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4281_; 
v___x_4144_ = 0;
v___x_4145_ = 1;
v___x_4146_ = lean_box(0);
v___x_4147_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__0));
v___x_4148_ = l_Lean_Meta_Context_config(v_a_4139_);
v_foApprox_4149_ = lean_ctor_get_uint8(v___x_4148_, 0);
v_ctxApprox_4150_ = lean_ctor_get_uint8(v___x_4148_, 1);
v_quasiPatternApprox_4151_ = lean_ctor_get_uint8(v___x_4148_, 2);
v_constApprox_4152_ = lean_ctor_get_uint8(v___x_4148_, 3);
v_isDefEqStuckEx_4153_ = lean_ctor_get_uint8(v___x_4148_, 4);
v_unificationHints_4154_ = lean_ctor_get_uint8(v___x_4148_, 5);
v_proofIrrelevance_4155_ = lean_ctor_get_uint8(v___x_4148_, 6);
v_assignSyntheticOpaque_4156_ = lean_ctor_get_uint8(v___x_4148_, 7);
v_offsetCnstrs_4157_ = lean_ctor_get_uint8(v___x_4148_, 8);
v_etaStruct_4158_ = lean_ctor_get_uint8(v___x_4148_, 10);
v_univApprox_4159_ = lean_ctor_get_uint8(v___x_4148_, 11);
v_iota_4160_ = lean_ctor_get_uint8(v___x_4148_, 12);
v_beta_4161_ = lean_ctor_get_uint8(v___x_4148_, 13);
v_proj_4162_ = lean_ctor_get_uint8(v___x_4148_, 14);
v_zeta_4163_ = lean_ctor_get_uint8(v___x_4148_, 15);
v_zetaDelta_4164_ = lean_ctor_get_uint8(v___x_4148_, 16);
v_zetaUnused_4165_ = lean_ctor_get_uint8(v___x_4148_, 17);
v_zetaHave_4166_ = lean_ctor_get_uint8(v___x_4148_, 18);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4148_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4168_ = v___x_4148_;
v_isShared_4169_ = v_isSharedCheck_4281_;
goto v_resetjp_4167_;
}
else
{
lean_dec(v___x_4148_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4281_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
uint8_t v_trackZetaDelta_4170_; lean_object* v_zetaDeltaSet_4171_; lean_object* v_lctx_4172_; lean_object* v_localInstances_4173_; lean_object* v_defEqCtx_x3f_4174_; lean_object* v_synthPendingDepth_4175_; lean_object* v_canUnfold_x3f_4176_; uint8_t v_univApprox_4177_; uint8_t v_inTypeClassResolution_4178_; uint8_t v_cacheInferType_4179_; lean_object* v___x_4180_; uint8_t v___x_4181_; lean_object* v_config_4183_; 
v_trackZetaDelta_4170_ = lean_ctor_get_uint8(v_a_4139_, sizeof(void*)*7);
v_zetaDeltaSet_4171_ = lean_ctor_get(v_a_4139_, 1);
lean_inc(v_zetaDeltaSet_4171_);
v_lctx_4172_ = lean_ctor_get(v_a_4139_, 2);
lean_inc_ref(v_lctx_4172_);
v_localInstances_4173_ = lean_ctor_get(v_a_4139_, 3);
lean_inc_ref(v_localInstances_4173_);
v_defEqCtx_x3f_4174_ = lean_ctor_get(v_a_4139_, 4);
lean_inc(v_defEqCtx_x3f_4174_);
v_synthPendingDepth_4175_ = lean_ctor_get(v_a_4139_, 5);
lean_inc(v_synthPendingDepth_4175_);
v_canUnfold_x3f_4176_ = lean_ctor_get(v_a_4139_, 6);
lean_inc(v_canUnfold_x3f_4176_);
v_univApprox_4177_ = lean_ctor_get_uint8(v_a_4139_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4178_ = lean_ctor_get_uint8(v_a_4139_, sizeof(void*)*7 + 2);
v_cacheInferType_4179_ = lean_ctor_get_uint8(v_a_4139_, sizeof(void*)*7 + 3);
v___x_4180_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__1));
v___x_4181_ = 0;
if (v_isShared_4169_ == 0)
{
v_config_4183_ = v___x_4168_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 0, v_foApprox_4149_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 1, v_ctxApprox_4150_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 2, v_quasiPatternApprox_4151_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 3, v_constApprox_4152_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 4, v_isDefEqStuckEx_4153_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 5, v_unificationHints_4154_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 6, v_proofIrrelevance_4155_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 7, v_assignSyntheticOpaque_4156_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 8, v_offsetCnstrs_4157_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 10, v_etaStruct_4158_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 11, v_univApprox_4159_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 12, v_iota_4160_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 13, v_beta_4161_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 14, v_proj_4162_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 15, v_zeta_4163_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 16, v_zetaDelta_4164_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 17, v_zetaUnused_4165_);
lean_ctor_set_uint8(v_reuseFailAlloc_4280_, 18, v_zetaHave_4166_);
v_config_4183_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
uint64_t v___x_4184_; lean_object* v___x_4186_; uint8_t v_isShared_4187_; uint8_t v_isSharedCheck_4272_; 
lean_ctor_set_uint8(v_config_4183_, 9, v___x_4181_);
v___x_4184_ = l_Lean_Meta_Context_configKey(v_a_4139_);
v_isSharedCheck_4272_ = !lean_is_exclusive(v_a_4139_);
if (v_isSharedCheck_4272_ == 0)
{
lean_object* v_unused_4273_; lean_object* v_unused_4274_; lean_object* v_unused_4275_; lean_object* v_unused_4276_; lean_object* v_unused_4277_; lean_object* v_unused_4278_; lean_object* v_unused_4279_; 
v_unused_4273_ = lean_ctor_get(v_a_4139_, 6);
lean_dec(v_unused_4273_);
v_unused_4274_ = lean_ctor_get(v_a_4139_, 5);
lean_dec(v_unused_4274_);
v_unused_4275_ = lean_ctor_get(v_a_4139_, 4);
lean_dec(v_unused_4275_);
v_unused_4276_ = lean_ctor_get(v_a_4139_, 3);
lean_dec(v_unused_4276_);
v_unused_4277_ = lean_ctor_get(v_a_4139_, 2);
lean_dec(v_unused_4277_);
v_unused_4278_ = lean_ctor_get(v_a_4139_, 1);
lean_dec(v_unused_4278_);
v_unused_4279_ = lean_ctor_get(v_a_4139_, 0);
lean_dec(v_unused_4279_);
v___x_4186_ = v_a_4139_;
v_isShared_4187_ = v_isSharedCheck_4272_;
goto v_resetjp_4185_;
}
else
{
lean_dec(v_a_4139_);
v___x_4186_ = lean_box(0);
v_isShared_4187_ = v_isSharedCheck_4272_;
goto v_resetjp_4185_;
}
v_resetjp_4185_:
{
uint64_t v___x_4188_; uint64_t v___x_4189_; lean_object* v___x_4190_; uint64_t v___x_4191_; uint64_t v___x_4192_; uint64_t v_key_4193_; lean_object* v___x_4194_; lean_object* v___x_4196_; 
v___x_4188_ = 2ULL;
v___x_4189_ = lean_uint64_shift_right(v___x_4184_, v___x_4188_);
v___x_4190_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__6);
v___x_4191_ = lean_uint64_shift_left(v___x_4189_, v___x_4188_);
v___x_4192_ = lean_uint64_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg___closed__7);
v_key_4193_ = lean_uint64_lor(v___x_4191_, v___x_4192_);
v___x_4194_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4194_, 0, v_config_4183_);
lean_ctor_set_uint64(v___x_4194_, sizeof(void*)*1, v_key_4193_);
if (v_isShared_4187_ == 0)
{
lean_ctor_set(v___x_4186_, 0, v___x_4194_);
v___x_4196_ = v___x_4186_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4271_; 
v_reuseFailAlloc_4271_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_4271_, 0, v___x_4194_);
lean_ctor_set(v_reuseFailAlloc_4271_, 1, v_zetaDeltaSet_4171_);
lean_ctor_set(v_reuseFailAlloc_4271_, 2, v_lctx_4172_);
lean_ctor_set(v_reuseFailAlloc_4271_, 3, v_localInstances_4173_);
lean_ctor_set(v_reuseFailAlloc_4271_, 4, v_defEqCtx_x3f_4174_);
lean_ctor_set(v_reuseFailAlloc_4271_, 5, v_synthPendingDepth_4175_);
lean_ctor_set(v_reuseFailAlloc_4271_, 6, v_canUnfold_x3f_4176_);
lean_ctor_set_uint8(v_reuseFailAlloc_4271_, sizeof(void*)*7, v_trackZetaDelta_4170_);
lean_ctor_set_uint8(v_reuseFailAlloc_4271_, sizeof(void*)*7 + 1, v_univApprox_4177_);
lean_ctor_set_uint8(v_reuseFailAlloc_4271_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4178_);
lean_ctor_set_uint8(v_reuseFailAlloc_4271_, sizeof(void*)*7 + 3, v_cacheInferType_4179_);
v___x_4196_ = v_reuseFailAlloc_4271_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
lean_object* v___x_4197_; 
v___x_4197_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_4147_, v___x_4180_, v___x_4190_, v___x_4196_, v_a_4141_, v_a_4142_);
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; 
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_a_4198_);
lean_dec_ref(v___x_4197_);
v___x_4199_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_));
v___x_4200_ = l_Lean_Meta_Simp_SimprocsArray_add(v___x_4180_, v___x_4199_, v___x_4144_, v_a_4141_, v_a_4142_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
lean_inc(v_a_4201_);
lean_dec_ref(v___x_4200_);
v___x_4202_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__11, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__11);
lean_inc(v_a_4142_);
lean_inc_ref(v_a_4141_);
lean_inc(v_a_4140_);
lean_inc_ref(v___x_4196_);
v___x_4203_ = l_Lean_Meta_simpTarget(v_mvarId_4138_, v_a_4198_, v_a_4201_, v___x_4146_, v___x_4145_, v___x_4202_, v___x_4196_, v_a_4140_, v_a_4141_, v_a_4142_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4246_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4206_ = v___x_4203_;
v_isShared_4207_ = v_isSharedCheck_4246_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_dec(v___x_4203_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4246_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v_fst_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4244_; 
v_fst_4208_ = lean_ctor_get(v_a_4204_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v_a_4204_);
if (v_isSharedCheck_4244_ == 0)
{
lean_object* v_unused_4245_; 
v_unused_4245_ = lean_ctor_get(v_a_4204_, 1);
lean_dec(v_unused_4245_);
v___x_4210_ = v_a_4204_;
v_isShared_4211_ = v_isSharedCheck_4244_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_fst_4208_);
lean_dec(v_a_4204_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4244_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
if (lean_obj_tag(v_fst_4208_) == 0)
{
lean_object* v___x_4212_; lean_object* v___x_4214_; 
lean_del_object(v___x_4210_);
lean_dec_ref(v___x_4196_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
lean_dec(v_a_4140_);
lean_dec(v_declName_4137_);
v___x_4212_ = lean_box(0);
if (v_isShared_4207_ == 0)
{
lean_ctor_set(v___x_4206_, 0, v___x_4212_);
v___x_4214_ = v___x_4206_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v___x_4212_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
else
{
lean_object* v_val_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4220_; 
lean_del_object(v___x_4206_);
v_val_4216_ = lean_ctor_get(v_fst_4208_, 0);
lean_inc(v_val_4216_);
lean_dec_ref(v_fst_4208_);
v___x_4217_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__13, &l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___closed__13);
v___x_4218_ = l_Lean_MessageData_ofConstName(v_declName_4137_, v___x_4144_);
if (v_isShared_4211_ == 0)
{
lean_ctor_set_tag(v___x_4210_, 7);
lean_ctor_set(v___x_4210_, 1, v___x_4218_);
lean_ctor_set(v___x_4210_, 0, v___x_4217_);
v___x_4220_ = v___x_4210_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4217_);
lean_ctor_set(v_reuseFailAlloc_4243_, 1, v___x_4218_);
v___x_4220_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___f_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4221_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_4222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4222_, 0, v___x_4220_);
lean_ctor_set(v___x_4222_, 1, v___x_4221_);
v___f_4223_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__11), 2, 1);
lean_closure_set(v___f_4223_, 0, v___x_4222_);
v___x_4224_ = lean_box(v___x_4145_);
v___x_4225_ = lean_alloc_closure((void*)(l_Lean_MVarId_refl___boxed), 7, 2);
lean_closure_set(v___x_4225_, 0, v_val_4216_);
lean_closure_set(v___x_4225_, 1, v___x_4224_);
v___x_4226_ = l_Lean_Meta_mapErrorImp___redArg(v___x_4225_, v___f_4223_, v___x_4196_, v_a_4140_, v_a_4141_, v_a_4142_);
if (lean_obj_tag(v___x_4226_) == 0)
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4234_; 
v_a_4227_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4229_ = v___x_4226_;
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4226_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4230_ == 0)
{
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4242_; 
v_a_4235_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4237_ = v___x_4226_;
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4226_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
return v___x_4240_;
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
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4254_; 
lean_dec_ref(v___x_4196_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
lean_dec(v_a_4140_);
lean_dec(v_declName_4137_);
v_a_4247_ = lean_ctor_get(v___x_4203_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4249_ = v___x_4203_;
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4203_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
return v___x_4252_;
}
}
}
}
else
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
lean_dec(v_a_4198_);
lean_dec_ref(v___x_4196_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
lean_dec(v_a_4140_);
lean_dec(v_mvarId_4138_);
lean_dec(v_declName_4137_);
v_a_4255_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4257_ = v___x_4200_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4200_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4270_; 
lean_dec_ref(v___x_4196_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
lean_dec(v_a_4140_);
lean_dec(v_mvarId_4138_);
lean_dec(v_declName_4137_);
v_a_4263_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4265_ = v___x_4197_;
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4197_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof___boxed(lean_object* v_declName_4282_, lean_object* v_mvarId_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof(v_declName_4282_, v_mvarId_4283_, v_a_4284_, v_a_4285_, v_a_4286_, v_a_4287_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg(lean_object* v_cls_4293_, lean_object* v___y_4294_){
_start:
{
lean_object* v_options_4296_; uint8_t v_hasTrace_4297_; 
v_options_4296_ = lean_ctor_get(v___y_4294_, 2);
v_hasTrace_4297_ = lean_ctor_get_uint8(v_options_4296_, sizeof(void*)*1);
if (v_hasTrace_4297_ == 0)
{
lean_object* v___x_4298_; lean_object* v___x_4299_; 
lean_dec(v_cls_4293_);
v___x_4298_ = lean_box(v_hasTrace_4297_);
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v___x_4298_);
return v___x_4299_;
}
else
{
lean_object* v_inheritedTraceOptions_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; uint8_t v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v_inheritedTraceOptions_4300_ = lean_ctor_get(v___y_4294_, 13);
v___x_4301_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__1));
v___x_4302_ = l_Lean_Name_append(v___x_4301_, v_cls_4293_);
v___x_4303_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4300_, v_options_4296_, v___x_4302_);
lean_dec(v___x_4302_);
v___x_4304_ = lean_box(v___x_4303_);
v___x_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4305_, 0, v___x_4304_);
return v___x_4305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___boxed(lean_object* v_cls_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg(v_cls_4306_, v___y_4307_);
lean_dec_ref(v___y_4307_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0(lean_object* v_cls_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg(v_cls_4310_, v___y_4313_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___boxed(lean_object* v_cls_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0(v_cls_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg(lean_object* v_e_4324_, lean_object* v_k_4325_, uint8_t v_cleanupAnnotations_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v___f_4332_; uint8_t v___x_4333_; uint8_t v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v___f_4332_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4332_, 0, v_k_4325_);
v___x_4333_ = 1;
v___x_4334_ = 0;
v___x_4335_ = lean_box(0);
v___x_4336_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4324_, v___x_4333_, v___x_4334_, v___x_4333_, v___x_4334_, v___x_4335_, v___f_4332_, v_cleanupAnnotations_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4336_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4336_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
v_a_4345_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4336_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4336_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg___boxed(lean_object* v_e_4353_, lean_object* v_k_4354_, lean_object* v_cleanupAnnotations_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4361_; lean_object* v_res_4362_; 
v_cleanupAnnotations_boxed_4361_ = lean_unbox(v_cleanupAnnotations_4355_);
v_res_4362_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg(v_e_4353_, v_k_4354_, v_cleanupAnnotations_boxed_4361_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_);
return v_res_4362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2(lean_object* v_00_u03b1_4363_, lean_object* v_e_4364_, lean_object* v_k_4365_, uint8_t v_cleanupAnnotations_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_){
_start:
{
lean_object* v___x_4372_; 
v___x_4372_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg(v_e_4364_, v_k_4365_, v_cleanupAnnotations_4366_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___boxed(lean_object* v_00_u03b1_4373_, lean_object* v_e_4374_, lean_object* v_k_4375_, lean_object* v_cleanupAnnotations_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4382_; lean_object* v_res_4383_; 
v_cleanupAnnotations_boxed_4382_ = lean_unbox(v_cleanupAnnotations_4376_);
v_res_4383_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2(v_00_u03b1_4373_, v_e_4374_, v_k_4375_, v_cleanupAnnotations_boxed_4382_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
return v_res_4383_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4(lean_object* v_opts_4384_, lean_object* v_opt_4385_){
_start:
{
lean_object* v_name_4386_; lean_object* v_defValue_4387_; lean_object* v_map_4388_; lean_object* v___x_4389_; 
v_name_4386_ = lean_ctor_get(v_opt_4385_, 0);
v_defValue_4387_ = lean_ctor_get(v_opt_4385_, 1);
v_map_4388_ = lean_ctor_get(v_opts_4384_, 0);
v___x_4389_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4388_, v_name_4386_);
if (lean_obj_tag(v___x_4389_) == 0)
{
uint8_t v___x_4390_; 
v___x_4390_ = lean_unbox(v_defValue_4387_);
return v___x_4390_;
}
else
{
lean_object* v_val_4391_; 
v_val_4391_ = lean_ctor_get(v___x_4389_, 0);
lean_inc(v_val_4391_);
lean_dec_ref(v___x_4389_);
if (lean_obj_tag(v_val_4391_) == 1)
{
uint8_t v_v_4392_; 
v_v_4392_ = lean_ctor_get_uint8(v_val_4391_, 0);
lean_dec_ref(v_val_4391_);
return v_v_4392_;
}
else
{
uint8_t v___x_4393_; 
lean_dec(v_val_4391_);
v___x_4393_ = lean_unbox(v_defValue_4387_);
return v___x_4393_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4___boxed(lean_object* v_opts_4394_, lean_object* v_opt_4395_){
_start:
{
uint8_t v_res_4396_; lean_object* v_r_4397_; 
v_res_4396_ = l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4(v_opts_4394_, v_opt_4395_);
lean_dec_ref(v_opt_4395_);
lean_dec_ref(v_opts_4394_);
v_r_4397_ = lean_box(v_res_4396_);
return v_r_4397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5(lean_object* v_opts_4398_, lean_object* v_opt_4399_){
_start:
{
lean_object* v_name_4400_; lean_object* v_defValue_4401_; lean_object* v_map_4402_; lean_object* v___x_4403_; 
v_name_4400_ = lean_ctor_get(v_opt_4399_, 0);
v_defValue_4401_ = lean_ctor_get(v_opt_4399_, 1);
v_map_4402_ = lean_ctor_get(v_opts_4398_, 0);
v___x_4403_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4402_, v_name_4400_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_inc(v_defValue_4401_);
return v_defValue_4401_;
}
else
{
lean_object* v_val_4404_; 
v_val_4404_ = lean_ctor_get(v___x_4403_, 0);
lean_inc(v_val_4404_);
lean_dec_ref(v___x_4403_);
if (lean_obj_tag(v_val_4404_) == 3)
{
lean_object* v_v_4405_; 
v_v_4405_ = lean_ctor_get(v_val_4404_, 0);
lean_inc(v_v_4405_);
lean_dec_ref(v_val_4404_);
return v_v_4405_;
}
else
{
lean_dec(v_val_4404_);
lean_inc(v_defValue_4401_);
return v_defValue_4401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5___boxed(lean_object* v_opts_4406_, lean_object* v_opt_4407_){
_start:
{
lean_object* v_res_4408_; 
v_res_4408_ = l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5(v_opts_4406_, v_opt_4407_);
lean_dec_ref(v_opt_4407_);
lean_dec_ref(v_opts_4406_);
return v_res_4408_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4409_; double v___x_4410_; 
v___x_4409_ = lean_unsigned_to_nat(0u);
v___x_4410_ = lean_float_of_nat(v___x_4409_);
return v___x_4410_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1(lean_object* v_cls_4414_, lean_object* v_msg_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_){
_start:
{
lean_object* v_ref_4421_; lean_object* v___x_4422_; lean_object* v_a_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4467_; 
v_ref_4421_ = lean_ctor_get(v___y_4418_, 5);
v___x_4422_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3_spec__4(v_msg_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
v_a_4423_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4425_ = v___x_4422_;
v_isShared_4426_ = v_isSharedCheck_4467_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_a_4423_);
lean_dec(v___x_4422_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4467_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4427_; lean_object* v_traceState_4428_; lean_object* v_env_4429_; lean_object* v_nextMacroScope_4430_; lean_object* v_ngen_4431_; lean_object* v_auxDeclNGen_4432_; lean_object* v_cache_4433_; lean_object* v_messages_4434_; lean_object* v_infoState_4435_; lean_object* v_snapshotTasks_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4466_; 
v___x_4427_ = lean_st_ref_take(v___y_4419_);
v_traceState_4428_ = lean_ctor_get(v___x_4427_, 4);
v_env_4429_ = lean_ctor_get(v___x_4427_, 0);
v_nextMacroScope_4430_ = lean_ctor_get(v___x_4427_, 1);
v_ngen_4431_ = lean_ctor_get(v___x_4427_, 2);
v_auxDeclNGen_4432_ = lean_ctor_get(v___x_4427_, 3);
v_cache_4433_ = lean_ctor_get(v___x_4427_, 5);
v_messages_4434_ = lean_ctor_get(v___x_4427_, 6);
v_infoState_4435_ = lean_ctor_get(v___x_4427_, 7);
v_snapshotTasks_4436_ = lean_ctor_get(v___x_4427_, 8);
v_isSharedCheck_4466_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4438_ = v___x_4427_;
v_isShared_4439_ = v_isSharedCheck_4466_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_snapshotTasks_4436_);
lean_inc(v_infoState_4435_);
lean_inc(v_messages_4434_);
lean_inc(v_cache_4433_);
lean_inc(v_traceState_4428_);
lean_inc(v_auxDeclNGen_4432_);
lean_inc(v_ngen_4431_);
lean_inc(v_nextMacroScope_4430_);
lean_inc(v_env_4429_);
lean_dec(v___x_4427_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4466_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
uint64_t v_tid_4440_; lean_object* v_traces_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4465_; 
v_tid_4440_ = lean_ctor_get_uint64(v_traceState_4428_, sizeof(void*)*1);
v_traces_4441_ = lean_ctor_get(v_traceState_4428_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_traceState_4428_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4443_ = v_traceState_4428_;
v_isShared_4444_ = v_isSharedCheck_4465_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_traces_4441_);
lean_dec(v_traceState_4428_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4465_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4445_; double v___x_4446_; uint8_t v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4455_; 
v___x_4445_ = lean_box(0);
v___x_4446_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__0);
v___x_4447_ = 0;
v___x_4448_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__1));
v___x_4449_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4449_, 0, v_cls_4414_);
lean_ctor_set(v___x_4449_, 1, v___x_4445_);
lean_ctor_set(v___x_4449_, 2, v___x_4448_);
lean_ctor_set_float(v___x_4449_, sizeof(void*)*3, v___x_4446_);
lean_ctor_set_float(v___x_4449_, sizeof(void*)*3 + 8, v___x_4446_);
lean_ctor_set_uint8(v___x_4449_, sizeof(void*)*3 + 16, v___x_4447_);
v___x_4450_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___closed__2));
v___x_4451_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4449_);
lean_ctor_set(v___x_4451_, 1, v_a_4423_);
lean_ctor_set(v___x_4451_, 2, v___x_4450_);
lean_inc(v_ref_4421_);
v___x_4452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4452_, 0, v_ref_4421_);
lean_ctor_set(v___x_4452_, 1, v___x_4451_);
v___x_4453_ = l_Lean_PersistentArray_push___redArg(v_traces_4441_, v___x_4452_);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 0, v___x_4453_);
v___x_4455_ = v___x_4443_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v___x_4453_);
lean_ctor_set_uint64(v_reuseFailAlloc_4464_, sizeof(void*)*1, v_tid_4440_);
v___x_4455_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
lean_object* v___x_4457_; 
if (v_isShared_4439_ == 0)
{
lean_ctor_set(v___x_4438_, 4, v___x_4455_);
v___x_4457_ = v___x_4438_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_env_4429_);
lean_ctor_set(v_reuseFailAlloc_4463_, 1, v_nextMacroScope_4430_);
lean_ctor_set(v_reuseFailAlloc_4463_, 2, v_ngen_4431_);
lean_ctor_set(v_reuseFailAlloc_4463_, 3, v_auxDeclNGen_4432_);
lean_ctor_set(v_reuseFailAlloc_4463_, 4, v___x_4455_);
lean_ctor_set(v_reuseFailAlloc_4463_, 5, v_cache_4433_);
lean_ctor_set(v_reuseFailAlloc_4463_, 6, v_messages_4434_);
lean_ctor_set(v_reuseFailAlloc_4463_, 7, v_infoState_4435_);
lean_ctor_set(v_reuseFailAlloc_4463_, 8, v_snapshotTasks_4436_);
v___x_4457_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4458_ = lean_st_ref_set(v___y_4419_, v___x_4457_);
v___x_4459_ = lean_box(0);
if (v_isShared_4426_ == 0)
{
lean_ctor_set(v___x_4425_, 0, v___x_4459_);
v___x_4461_ = v___x_4425_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4459_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1___boxed(lean_object* v_cls_4468_, lean_object* v_msg_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1(v_cls_4468_, v_msg_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
return v_res_4475_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; 
v___x_4483_ = ((lean_object*)(l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__3));
v___x_4484_ = l_Lean_stringToMessageData(v___x_4483_);
return v___x_4484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0(lean_object* v_levelParams_4485_, lean_object* v_declName_4486_, lean_object* v_wfPreprocessProof_4487_, lean_object* v___x_4488_, lean_object* v_unaryPreDefName_4489_, lean_object* v_xs_4490_, lean_object* v_body_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v___x_4497_ = lean_box(0);
lean_inc(v_levelParams_4485_);
v___x_4498_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__3(v_levelParams_4485_, v___x_4497_);
lean_inc(v_declName_4486_);
v___x_4499_ = l_Lean_mkConst(v_declName_4486_, v___x_4498_);
v___x_4500_ = l_Lean_mkAppN(v___x_4499_, v_xs_4490_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc(v___y_4493_);
lean_inc_ref(v___y_4492_);
v___x_4501_ = l_Lean_Meta_mkEq(v___x_4500_, v_body_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref(v___x_4501_);
v___x_4503_ = lean_box(0);
lean_inc_ref(v___y_4492_);
lean_inc(v_a_4502_);
v___x_4504_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4502_, v___x_4503_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; lean_object* v___x_4506_; 
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref(v___x_4504_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc(v___y_4493_);
lean_inc_ref(v___y_4492_);
v___x_4506_ = l_Lean_Meta_Simp_Result_addExtraArgs(v_wfPreprocessProof_4487_, v_xs_4490_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4506_) == 0)
{
lean_object* v_a_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; uint8_t v___x_4510_; lean_object* v_mvarId_4512_; lean_object* v___y_4513_; lean_object* v___y_4514_; lean_object* v___y_4515_; lean_object* v___y_4516_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v_a_4507_ = lean_ctor_get(v___x_4506_, 0);
lean_inc(v_a_4507_);
lean_dec_ref(v___x_4506_);
v___x_4508_ = l_Lean_Expr_appFn_x21(v_a_4502_);
v___x_4509_ = lean_box(0);
v___x_4510_ = 1;
v___x_4590_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4590_, 0, v___x_4508_);
lean_ctor_set(v___x_4590_, 1, v___x_4509_);
lean_ctor_set_uint8(v___x_4590_, sizeof(void*)*2, v___x_4510_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc(v___y_4493_);
lean_inc_ref(v___y_4492_);
v___x_4591_ = l_Lean_Meta_Simp_mkCongr(v___x_4590_, v_a_4507_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc(v_a_4592_);
lean_dec_ref(v___x_4591_);
v___x_4593_ = l_Lean_Expr_mvarId_x21(v_a_4505_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc(v___y_4493_);
lean_inc_ref(v___y_4492_);
v___x_4594_ = l_Lean_Meta_applySimpResultToTarget(v___x_4593_, v_a_4502_, v_a_4592_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4594_) == 0)
{
lean_object* v_a_4595_; uint8_t v___x_4596_; 
v_a_4595_ = lean_ctor_get(v___x_4594_, 0);
lean_inc(v_a_4595_);
lean_dec_ref(v___x_4594_);
v___x_4596_ = lean_name_eq(v_declName_4486_, v_unaryPreDefName_4489_);
if (v___x_4596_ == 0)
{
lean_object* v___x_4597_; 
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc(v___y_4493_);
lean_inc_ref(v___y_4492_);
v___x_4597_ = l_Lean_Elab_Eqns_deltaLHS(v_a_4595_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4597_) == 0)
{
lean_object* v_a_4598_; 
v_a_4598_ = lean_ctor_get(v___x_4597_, 0);
lean_inc(v_a_4598_);
lean_dec_ref(v___x_4597_);
v_mvarId_4512_ = v_a_4598_;
v___y_4513_ = v___y_4492_;
v___y_4514_ = v___y_4493_;
v___y_4515_ = v___y_4494_;
v___y_4516_ = v___y_4495_;
goto v___jp_4511_;
}
else
{
lean_object* v_a_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4606_; 
lean_dec(v_a_4505_);
lean_dec(v_a_4502_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___x_4488_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4599_ = lean_ctor_get(v___x_4597_, 0);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4597_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4601_ = v___x_4597_;
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_a_4599_);
lean_dec(v___x_4597_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4604_; 
if (v_isShared_4602_ == 0)
{
v___x_4604_ = v___x_4601_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4599_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
}
else
{
v_mvarId_4512_ = v_a_4595_;
v___y_4513_ = v___y_4492_;
v___y_4514_ = v___y_4493_;
v___y_4515_ = v___y_4494_;
v___y_4516_ = v___y_4495_;
goto v___jp_4511_;
}
}
else
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
lean_dec(v_a_4505_);
lean_dec(v_a_4502_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___x_4488_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4607_ = lean_ctor_get(v___x_4594_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4594_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4594_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
else
{
lean_object* v_a_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4622_; 
lean_dec(v_a_4505_);
lean_dec(v_a_4502_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___x_4488_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4615_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4622_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4622_ == 0)
{
v___x_4617_ = v___x_4591_;
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_a_4615_);
lean_dec(v___x_4591_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4620_; 
if (v_isShared_4618_ == 0)
{
v___x_4620_ = v___x_4617_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v_a_4615_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
return v___x_4620_;
}
}
}
v___jp_4511_:
{
lean_object* v___x_4517_; 
lean_inc(v___y_4516_);
lean_inc_ref(v___y_4515_);
lean_inc(v___y_4514_);
lean_inc_ref(v___y_4513_);
v___x_4517_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq(v_mvarId_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4517_) == 0)
{
lean_object* v_a_4518_; lean_object* v___x_4519_; 
v_a_4518_ = lean_ctor_get(v___x_4517_, 0);
lean_inc(v_a_4518_);
lean_dec_ref(v___x_4517_);
lean_inc(v___y_4516_);
lean_inc_ref(v___y_4515_);
lean_inc(v___y_4514_);
lean_inc_ref(v___y_4513_);
v___x_4519_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkUnfoldProof(v_declName_4486_, v_a_4518_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4519_) == 0)
{
lean_object* v___x_4520_; lean_object* v_a_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4581_; 
lean_dec_ref(v___x_4519_);
v___x_4520_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(v_a_4505_, v___y_4514_);
v_a_4521_ = lean_ctor_get(v___x_4520_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4523_ = v___x_4520_;
v_isShared_4524_ = v_isSharedCheck_4581_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_a_4521_);
lean_dec(v___x_4520_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4581_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
uint8_t v___x_4525_; uint8_t v___x_4526_; lean_object* v___x_4527_; 
v___x_4525_ = 0;
v___x_4526_ = 1;
v___x_4527_ = l_Lean_Meta_mkForallFVars(v_xs_4490_, v_a_4502_, v___x_4525_, v___x_4510_, v___x_4510_, v___x_4526_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; lean_object* v___x_4529_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_a_4528_);
lean_dec_ref(v___x_4527_);
lean_inc(v___y_4516_);
lean_inc_ref(v___y_4515_);
lean_inc(v___y_4514_);
lean_inc_ref(v___y_4513_);
v___x_4529_ = l_Lean_Meta_letToHave(v_a_4528_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4529_) == 0)
{
lean_object* v_a_4530_; lean_object* v___x_4531_; 
v_a_4530_ = lean_ctor_get(v___x_4529_, 0);
lean_inc(v_a_4530_);
lean_dec_ref(v___x_4529_);
v___x_4531_ = l_Lean_Meta_mkLambdaFVars(v_xs_4490_, v_a_4521_, v___x_4525_, v___x_4510_, v___x_4525_, v___x_4510_, v___x_4526_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4537_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
lean_inc(v_a_4532_);
lean_dec_ref(v___x_4531_);
lean_inc(v___x_4488_);
v___x_4533_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4533_, 0, v___x_4488_);
lean_ctor_set(v___x_4533_, 1, v_levelParams_4485_);
lean_ctor_set(v___x_4533_, 2, v_a_4530_);
lean_inc(v___x_4488_);
v___x_4534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4488_);
lean_ctor_set(v___x_4534_, 1, v___x_4497_);
v___x_4535_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4535_, 0, v___x_4533_);
lean_ctor_set(v___x_4535_, 1, v_a_4532_);
lean_ctor_set(v___x_4535_, 2, v___x_4534_);
if (v_isShared_4524_ == 0)
{
lean_ctor_set_tag(v___x_4523_, 2);
lean_ctor_set(v___x_4523_, 0, v___x_4535_);
v___x_4537_ = v___x_4523_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v___x_4535_);
v___x_4537_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
lean_object* v___x_4538_; 
lean_inc(v___y_4516_);
lean_inc_ref(v___y_4515_);
v___x_4538_ = l_Lean_addDecl(v___x_4537_, v___x_4525_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v___x_4539_; 
lean_dec_ref(v___x_4538_);
lean_inc(v___y_4516_);
lean_inc_ref(v___y_4515_);
lean_inc(v___y_4514_);
lean_inc_ref(v___y_4513_);
lean_inc(v___x_4488_);
v___x_4539_ = l_Lean_inferDefEqAttr(v___x_4488_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4555_; 
lean_dec_ref(v___x_4539_);
v___x_4540_ = ((lean_object*)(l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2));
v___x_4541_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg(v___x_4540_, v___y_4515_);
v_a_4542_ = lean_ctor_get(v___x_4541_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4541_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4544_ = v___x_4541_;
v_isShared_4545_ = v_isSharedCheck_4555_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4541_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4555_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
uint8_t v___x_4546_; 
v___x_4546_ = lean_unbox(v_a_4542_);
lean_dec(v_a_4542_);
if (v___x_4546_ == 0)
{
lean_object* v___x_4547_; lean_object* v___x_4549_; 
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___x_4488_);
v___x_4547_ = lean_box(0);
if (v_isShared_4545_ == 0)
{
lean_ctor_set(v___x_4544_, 0, v___x_4547_);
v___x_4549_ = v___x_4544_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v___x_4547_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
else
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
lean_del_object(v___x_4544_);
v___x_4551_ = lean_obj_once(&l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__4, &l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__4_once, _init_l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__4);
v___x_4552_ = l_Lean_MessageData_ofConstName(v___x_4488_, v___x_4525_);
v___x_4553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4551_);
lean_ctor_set(v___x_4553_, 1, v___x_4552_);
v___x_4554_ = l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1(v___x_4540_, v___x_4553_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_);
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
return v___x_4554_;
}
}
}
else
{
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___x_4488_);
return v___x_4539_;
}
}
else
{
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___x_4488_);
return v___x_4538_;
}
}
}
else
{
lean_object* v_a_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4564_; 
lean_dec(v_a_4530_);
lean_del_object(v___x_4523_);
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___x_4488_);
lean_dec(v_levelParams_4485_);
v_a_4557_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4559_ = v___x_4531_;
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_a_4557_);
lean_dec(v___x_4531_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4562_; 
if (v_isShared_4560_ == 0)
{
v___x_4562_ = v___x_4559_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_a_4557_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
}
}
}
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
lean_del_object(v___x_4523_);
lean_dec(v_a_4521_);
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___x_4488_);
lean_dec(v_levelParams_4485_);
v_a_4565_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4567_ = v___x_4529_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_a_4565_);
lean_dec(v___x_4529_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4565_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4580_; 
lean_del_object(v___x_4523_);
lean_dec(v_a_4521_);
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___x_4488_);
lean_dec(v_levelParams_4485_);
v_a_4573_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4575_ = v___x_4527_;
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4527_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4578_; 
if (v_isShared_4576_ == 0)
{
v___x_4578_ = v___x_4575_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_a_4573_);
v___x_4578_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
return v___x_4578_;
}
}
}
}
}
else
{
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v_a_4505_);
lean_dec(v_a_4502_);
lean_dec(v___x_4488_);
lean_dec(v_levelParams_4485_);
return v___x_4519_;
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4589_; 
lean_dec(v___y_4516_);
lean_dec_ref(v___y_4515_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v_a_4505_);
lean_dec(v_a_4502_);
lean_dec(v___x_4488_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4582_ = lean_ctor_get(v___x_4517_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4517_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4584_ = v___x_4517_;
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___x_4517_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4587_; 
if (v_isShared_4585_ == 0)
{
v___x_4587_ = v___x_4584_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v_a_4582_);
v___x_4587_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
return v___x_4587_;
}
}
}
}
}
else
{
lean_object* v_a_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4630_; 
lean_dec(v_a_4505_);
lean_dec(v_a_4502_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___x_4488_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4623_ = lean_ctor_get(v___x_4506_, 0);
v_isSharedCheck_4630_ = !lean_is_exclusive(v___x_4506_);
if (v_isSharedCheck_4630_ == 0)
{
v___x_4625_ = v___x_4506_;
v_isShared_4626_ = v_isSharedCheck_4630_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_a_4623_);
lean_dec(v___x_4506_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4630_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v___x_4628_; 
if (v_isShared_4626_ == 0)
{
v___x_4628_ = v___x_4625_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4629_; 
v_reuseFailAlloc_4629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4629_, 0, v_a_4623_);
v___x_4628_ = v_reuseFailAlloc_4629_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
return v___x_4628_;
}
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
lean_dec(v_a_4502_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___x_4488_);
lean_dec_ref(v_wfPreprocessProof_4487_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4631_ = lean_ctor_get(v___x_4504_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4504_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4504_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4504_);
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
else
{
lean_object* v_a_4639_; lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4646_; 
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v___x_4488_);
lean_dec_ref(v_wfPreprocessProof_4487_);
lean_dec(v_declName_4486_);
lean_dec(v_levelParams_4485_);
v_a_4639_ = lean_ctor_get(v___x_4501_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v___x_4501_);
if (v_isSharedCheck_4646_ == 0)
{
v___x_4641_ = v___x_4501_;
v_isShared_4642_ = v_isSharedCheck_4646_;
goto v_resetjp_4640_;
}
else
{
lean_inc(v_a_4639_);
lean_dec(v___x_4501_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4646_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v___x_4644_; 
if (v_isShared_4642_ == 0)
{
v___x_4644_ = v___x_4641_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4645_; 
v_reuseFailAlloc_4645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4645_, 0, v_a_4639_);
v___x_4644_ = v_reuseFailAlloc_4645_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
return v___x_4644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__0___boxed(lean_object* v_levelParams_4647_, lean_object* v_declName_4648_, lean_object* v_wfPreprocessProof_4649_, lean_object* v___x_4650_, lean_object* v_unaryPreDefName_4651_, lean_object* v_xs_4652_, lean_object* v_body_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_){
_start:
{
lean_object* v_res_4659_; 
v_res_4659_ = l_Lean_Elab_WF_mkUnfoldEq___lam__0(v_levelParams_4647_, v_declName_4648_, v_wfPreprocessProof_4649_, v___x_4650_, v_unaryPreDefName_4651_, v_xs_4652_, v_body_4653_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
lean_dec_ref(v_xs_4652_);
lean_dec(v_unaryPreDefName_4651_);
return v_res_4659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3_spec__3(lean_object* v_o_4660_, lean_object* v_k_4661_, uint8_t v_v_4662_){
_start:
{
lean_object* v_map_4663_; uint8_t v_hasTrace_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4678_; 
v_map_4663_ = lean_ctor_get(v_o_4660_, 0);
v_hasTrace_4664_ = lean_ctor_get_uint8(v_o_4660_, sizeof(void*)*1);
v_isSharedCheck_4678_ = !lean_is_exclusive(v_o_4660_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4666_ = v_o_4660_;
v_isShared_4667_ = v_isSharedCheck_4678_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_map_4663_);
lean_dec(v_o_4660_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4678_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___x_4668_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4668_, 0, v_v_4662_);
lean_inc(v_k_4661_);
v___x_4669_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_4661_, v___x_4668_, v_map_4663_);
if (v_hasTrace_4664_ == 0)
{
lean_object* v___x_4670_; uint8_t v___x_4671_; lean_object* v___x_4673_; 
v___x_4670_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg___closed__1));
v___x_4671_ = l_Lean_Name_isPrefixOf(v___x_4670_, v_k_4661_);
lean_dec(v_k_4661_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 0, v___x_4669_);
v___x_4673_ = v___x_4666_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v___x_4669_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
lean_ctor_set_uint8(v___x_4673_, sizeof(void*)*1, v___x_4671_);
return v___x_4673_;
}
}
else
{
lean_object* v___x_4676_; 
lean_dec(v_k_4661_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 0, v___x_4669_);
v___x_4676_ = v___x_4666_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v___x_4669_);
lean_ctor_set_uint8(v_reuseFailAlloc_4677_, sizeof(void*)*1, v_hasTrace_4664_);
v___x_4676_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
return v___x_4676_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3_spec__3___boxed(lean_object* v_o_4679_, lean_object* v_k_4680_, lean_object* v_v_4681_){
_start:
{
uint8_t v_v_boxed_4682_; lean_object* v_res_4683_; 
v_v_boxed_4682_ = lean_unbox(v_v_4681_);
v_res_4683_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3_spec__3(v_o_4679_, v_k_4680_, v_v_boxed_4682_);
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3(lean_object* v_opts_4684_, lean_object* v_opt_4685_, uint8_t v_val_4686_){
_start:
{
lean_object* v_name_4687_; lean_object* v___x_4688_; 
v_name_4687_ = lean_ctor_get(v_opt_4685_, 0);
lean_inc(v_name_4687_);
lean_dec_ref(v_opt_4685_);
v___x_4688_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3_spec__3(v_opts_4684_, v_name_4687_, v_val_4686_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3___boxed(lean_object* v_opts_4689_, lean_object* v_opt_4690_, lean_object* v_val_4691_){
_start:
{
uint8_t v_val_boxed_4692_; lean_object* v_res_4693_; 
v_val_boxed_4692_ = lean_unbox(v_val_4691_);
v_res_4693_ = l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3(v_opts_4689_, v_opt_4690_, v_val_boxed_4692_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0(lean_object* v___y_4694_, uint8_t v_isExporting_4695_, lean_object* v___x_4696_, lean_object* v___y_4697_, lean_object* v___x_4698_, lean_object* v_a_x3f_4699_){
_start:
{
lean_object* v___x_4701_; lean_object* v_env_4702_; lean_object* v_nextMacroScope_4703_; lean_object* v_ngen_4704_; lean_object* v_auxDeclNGen_4705_; lean_object* v_traceState_4706_; lean_object* v_messages_4707_; lean_object* v_infoState_4708_; lean_object* v_snapshotTasks_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4734_; 
v___x_4701_ = lean_st_ref_take(v___y_4694_);
v_env_4702_ = lean_ctor_get(v___x_4701_, 0);
v_nextMacroScope_4703_ = lean_ctor_get(v___x_4701_, 1);
v_ngen_4704_ = lean_ctor_get(v___x_4701_, 2);
v_auxDeclNGen_4705_ = lean_ctor_get(v___x_4701_, 3);
v_traceState_4706_ = lean_ctor_get(v___x_4701_, 4);
v_messages_4707_ = lean_ctor_get(v___x_4701_, 6);
v_infoState_4708_ = lean_ctor_get(v___x_4701_, 7);
v_snapshotTasks_4709_ = lean_ctor_get(v___x_4701_, 8);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4701_);
if (v_isSharedCheck_4734_ == 0)
{
lean_object* v_unused_4735_; 
v_unused_4735_ = lean_ctor_get(v___x_4701_, 5);
lean_dec(v_unused_4735_);
v___x_4711_ = v___x_4701_;
v_isShared_4712_ = v_isSharedCheck_4734_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_snapshotTasks_4709_);
lean_inc(v_infoState_4708_);
lean_inc(v_messages_4707_);
lean_inc(v_traceState_4706_);
lean_inc(v_auxDeclNGen_4705_);
lean_inc(v_ngen_4704_);
lean_inc(v_nextMacroScope_4703_);
lean_inc(v_env_4702_);
lean_dec(v___x_4701_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4734_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4713_; lean_object* v___x_4715_; 
v___x_4713_ = l_Lean_Environment_setExporting(v_env_4702_, v_isExporting_4695_);
if (v_isShared_4712_ == 0)
{
lean_ctor_set(v___x_4711_, 5, v___x_4696_);
lean_ctor_set(v___x_4711_, 0, v___x_4713_);
v___x_4715_ = v___x_4711_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v___x_4713_);
lean_ctor_set(v_reuseFailAlloc_4733_, 1, v_nextMacroScope_4703_);
lean_ctor_set(v_reuseFailAlloc_4733_, 2, v_ngen_4704_);
lean_ctor_set(v_reuseFailAlloc_4733_, 3, v_auxDeclNGen_4705_);
lean_ctor_set(v_reuseFailAlloc_4733_, 4, v_traceState_4706_);
lean_ctor_set(v_reuseFailAlloc_4733_, 5, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4733_, 6, v_messages_4707_);
lean_ctor_set(v_reuseFailAlloc_4733_, 7, v_infoState_4708_);
lean_ctor_set(v_reuseFailAlloc_4733_, 8, v_snapshotTasks_4709_);
v___x_4715_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v_mctx_4718_; lean_object* v_zetaDeltaFVarIds_4719_; lean_object* v_postponed_4720_; lean_object* v_diag_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4731_; 
v___x_4716_ = lean_st_ref_set(v___y_4694_, v___x_4715_);
v___x_4717_ = lean_st_ref_take(v___y_4697_);
v_mctx_4718_ = lean_ctor_get(v___x_4717_, 0);
v_zetaDeltaFVarIds_4719_ = lean_ctor_get(v___x_4717_, 2);
v_postponed_4720_ = lean_ctor_get(v___x_4717_, 3);
v_diag_4721_ = lean_ctor_get(v___x_4717_, 4);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___x_4717_);
if (v_isSharedCheck_4731_ == 0)
{
lean_object* v_unused_4732_; 
v_unused_4732_ = lean_ctor_get(v___x_4717_, 1);
lean_dec(v_unused_4732_);
v___x_4723_ = v___x_4717_;
v_isShared_4724_ = v_isSharedCheck_4731_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_diag_4721_);
lean_inc(v_postponed_4720_);
lean_inc(v_zetaDeltaFVarIds_4719_);
lean_inc(v_mctx_4718_);
lean_dec(v___x_4717_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4731_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
lean_ctor_set(v___x_4723_, 1, v___x_4698_);
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v_mctx_4718_);
lean_ctor_set(v_reuseFailAlloc_4730_, 1, v___x_4698_);
lean_ctor_set(v_reuseFailAlloc_4730_, 2, v_zetaDeltaFVarIds_4719_);
lean_ctor_set(v_reuseFailAlloc_4730_, 3, v_postponed_4720_);
lean_ctor_set(v_reuseFailAlloc_4730_, 4, v_diag_4721_);
v___x_4726_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; 
v___x_4727_ = lean_st_ref_set(v___y_4697_, v___x_4726_);
v___x_4728_ = lean_box(0);
v___x_4729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4729_, 0, v___x_4728_);
return v___x_4729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v___y_4736_, lean_object* v_isExporting_4737_, lean_object* v___x_4738_, lean_object* v___y_4739_, lean_object* v___x_4740_, lean_object* v_a_x3f_4741_, lean_object* v___y_4742_){
_start:
{
uint8_t v_isExporting_boxed_4743_; lean_object* v_res_4744_; 
v_isExporting_boxed_4743_ = lean_unbox(v_isExporting_4737_);
v_res_4744_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0(v___y_4736_, v_isExporting_boxed_4743_, v___x_4738_, v___y_4739_, v___x_4740_, v_a_x3f_4741_);
lean_dec(v_a_x3f_4741_);
lean_dec(v___y_4739_);
lean_dec(v___y_4736_);
return v_res_4744_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_4745_; 
v___x_4745_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4745_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_4746_; lean_object* v___x_4747_; 
v___x_4746_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__0);
v___x_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4746_);
return v___x_4747_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_4748_; lean_object* v___x_4749_; 
v___x_4748_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1);
v___x_4749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4748_);
lean_ctor_set(v___x_4749_, 1, v___x_4748_);
return v___x_4749_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; 
v___x_4750_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__1);
v___x_4751_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4750_);
lean_ctor_set(v___x_4751_, 1, v___x_4750_);
lean_ctor_set(v___x_4751_, 2, v___x_4750_);
lean_ctor_set(v___x_4751_, 3, v___x_4750_);
lean_ctor_set(v___x_4751_, 4, v___x_4750_);
lean_ctor_set(v___x_4751_, 5, v___x_4750_);
return v___x_4751_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg(lean_object* v_x_4752_, uint8_t v_isExporting_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
lean_object* v___x_4759_; lean_object* v_env_4760_; uint8_t v_isExporting_4761_; lean_object* v___x_4762_; lean_object* v_env_4763_; lean_object* v_nextMacroScope_4764_; lean_object* v_ngen_4765_; lean_object* v_auxDeclNGen_4766_; lean_object* v_traceState_4767_; lean_object* v_messages_4768_; lean_object* v_infoState_4769_; lean_object* v_snapshotTasks_4770_; lean_object* v___x_4772_; uint8_t v_isShared_4773_; uint8_t v_isSharedCheck_4824_; 
v___x_4759_ = lean_st_ref_get(v___y_4757_);
v_env_4760_ = lean_ctor_get(v___x_4759_, 0);
lean_inc_ref(v_env_4760_);
lean_dec(v___x_4759_);
v_isExporting_4761_ = lean_ctor_get_uint8(v_env_4760_, sizeof(void*)*8);
lean_dec_ref(v_env_4760_);
v___x_4762_ = lean_st_ref_take(v___y_4757_);
v_env_4763_ = lean_ctor_get(v___x_4762_, 0);
v_nextMacroScope_4764_ = lean_ctor_get(v___x_4762_, 1);
v_ngen_4765_ = lean_ctor_get(v___x_4762_, 2);
v_auxDeclNGen_4766_ = lean_ctor_get(v___x_4762_, 3);
v_traceState_4767_ = lean_ctor_get(v___x_4762_, 4);
v_messages_4768_ = lean_ctor_get(v___x_4762_, 6);
v_infoState_4769_ = lean_ctor_get(v___x_4762_, 7);
v_snapshotTasks_4770_ = lean_ctor_get(v___x_4762_, 8);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4762_);
if (v_isSharedCheck_4824_ == 0)
{
lean_object* v_unused_4825_; 
v_unused_4825_ = lean_ctor_get(v___x_4762_, 5);
lean_dec(v_unused_4825_);
v___x_4772_ = v___x_4762_;
v_isShared_4773_ = v_isSharedCheck_4824_;
goto v_resetjp_4771_;
}
else
{
lean_inc(v_snapshotTasks_4770_);
lean_inc(v_infoState_4769_);
lean_inc(v_messages_4768_);
lean_inc(v_traceState_4767_);
lean_inc(v_auxDeclNGen_4766_);
lean_inc(v_ngen_4765_);
lean_inc(v_nextMacroScope_4764_);
lean_inc(v_env_4763_);
lean_dec(v___x_4762_);
v___x_4772_ = lean_box(0);
v_isShared_4773_ = v_isSharedCheck_4824_;
goto v_resetjp_4771_;
}
v_resetjp_4771_:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4777_; 
v___x_4774_ = l_Lean_Environment_setExporting(v_env_4763_, v_isExporting_4753_);
v___x_4775_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2);
if (v_isShared_4773_ == 0)
{
lean_ctor_set(v___x_4772_, 5, v___x_4775_);
lean_ctor_set(v___x_4772_, 0, v___x_4774_);
v___x_4777_ = v___x_4772_;
goto v_reusejp_4776_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v___x_4774_);
lean_ctor_set(v_reuseFailAlloc_4823_, 1, v_nextMacroScope_4764_);
lean_ctor_set(v_reuseFailAlloc_4823_, 2, v_ngen_4765_);
lean_ctor_set(v_reuseFailAlloc_4823_, 3, v_auxDeclNGen_4766_);
lean_ctor_set(v_reuseFailAlloc_4823_, 4, v_traceState_4767_);
lean_ctor_set(v_reuseFailAlloc_4823_, 5, v___x_4775_);
lean_ctor_set(v_reuseFailAlloc_4823_, 6, v_messages_4768_);
lean_ctor_set(v_reuseFailAlloc_4823_, 7, v_infoState_4769_);
lean_ctor_set(v_reuseFailAlloc_4823_, 8, v_snapshotTasks_4770_);
v___x_4777_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4776_;
}
v_reusejp_4776_:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v_mctx_4780_; lean_object* v_zetaDeltaFVarIds_4781_; lean_object* v_postponed_4782_; lean_object* v_diag_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4821_; 
v___x_4778_ = lean_st_ref_set(v___y_4757_, v___x_4777_);
v___x_4779_ = lean_st_ref_take(v___y_4755_);
v_mctx_4780_ = lean_ctor_get(v___x_4779_, 0);
v_zetaDeltaFVarIds_4781_ = lean_ctor_get(v___x_4779_, 2);
v_postponed_4782_ = lean_ctor_get(v___x_4779_, 3);
v_diag_4783_ = lean_ctor_get(v___x_4779_, 4);
v_isSharedCheck_4821_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4821_ == 0)
{
lean_object* v_unused_4822_; 
v_unused_4822_ = lean_ctor_get(v___x_4779_, 1);
lean_dec(v_unused_4822_);
v___x_4785_ = v___x_4779_;
v_isShared_4786_ = v_isSharedCheck_4821_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_diag_4783_);
lean_inc(v_postponed_4782_);
lean_inc(v_zetaDeltaFVarIds_4781_);
lean_inc(v_mctx_4780_);
lean_dec(v___x_4779_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4821_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v___x_4787_; lean_object* v___x_4789_; 
v___x_4787_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__3);
if (v_isShared_4786_ == 0)
{
lean_ctor_set(v___x_4785_, 1, v___x_4787_);
v___x_4789_ = v___x_4785_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4820_; 
v_reuseFailAlloc_4820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4820_, 0, v_mctx_4780_);
lean_ctor_set(v_reuseFailAlloc_4820_, 1, v___x_4787_);
lean_ctor_set(v_reuseFailAlloc_4820_, 2, v_zetaDeltaFVarIds_4781_);
lean_ctor_set(v_reuseFailAlloc_4820_, 3, v_postponed_4782_);
lean_ctor_set(v_reuseFailAlloc_4820_, 4, v_diag_4783_);
v___x_4789_ = v_reuseFailAlloc_4820_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
lean_object* v___x_4790_; lean_object* v_r_4791_; 
v___x_4790_ = lean_st_ref_set(v___y_4755_, v___x_4789_);
lean_inc(v___y_4757_);
lean_inc(v___y_4755_);
v_r_4791_ = lean_apply_5(v_x_4752_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_, lean_box(0));
if (lean_obj_tag(v_r_4791_) == 0)
{
lean_object* v_a_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4808_; 
v_a_4792_ = lean_ctor_get(v_r_4791_, 0);
v_isSharedCheck_4808_ = !lean_is_exclusive(v_r_4791_);
if (v_isSharedCheck_4808_ == 0)
{
v___x_4794_ = v_r_4791_;
v_isShared_4795_ = v_isSharedCheck_4808_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_a_4792_);
lean_dec(v_r_4791_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4808_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
lean_object* v___x_4797_; 
lean_inc(v_a_4792_);
if (v_isShared_4795_ == 0)
{
lean_ctor_set_tag(v___x_4794_, 1);
v___x_4797_ = v___x_4794_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4807_; 
v_reuseFailAlloc_4807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4807_, 0, v_a_4792_);
v___x_4797_ = v_reuseFailAlloc_4807_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
lean_object* v___x_4798_; lean_object* v___x_4800_; uint8_t v_isShared_4801_; uint8_t v_isSharedCheck_4805_; 
v___x_4798_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0(v___y_4757_, v_isExporting_4761_, v___x_4775_, v___y_4755_, v___x_4787_, v___x_4797_);
lean_dec_ref(v___x_4797_);
lean_dec(v___y_4755_);
lean_dec(v___y_4757_);
v_isSharedCheck_4805_ = !lean_is_exclusive(v___x_4798_);
if (v_isSharedCheck_4805_ == 0)
{
lean_object* v_unused_4806_; 
v_unused_4806_ = lean_ctor_get(v___x_4798_, 0);
lean_dec(v_unused_4806_);
v___x_4800_ = v___x_4798_;
v_isShared_4801_ = v_isSharedCheck_4805_;
goto v_resetjp_4799_;
}
else
{
lean_dec(v___x_4798_);
v___x_4800_ = lean_box(0);
v_isShared_4801_ = v_isSharedCheck_4805_;
goto v_resetjp_4799_;
}
v_resetjp_4799_:
{
lean_object* v___x_4803_; 
if (v_isShared_4801_ == 0)
{
lean_ctor_set(v___x_4800_, 0, v_a_4792_);
v___x_4803_ = v___x_4800_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v_a_4792_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
}
}
else
{
lean_object* v_a_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4813_; uint8_t v_isShared_4814_; uint8_t v_isSharedCheck_4818_; 
v_a_4809_ = lean_ctor_get(v_r_4791_, 0);
lean_inc(v_a_4809_);
lean_dec_ref(v_r_4791_);
v___x_4810_ = lean_box(0);
v___x_4811_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___lam__0(v___y_4757_, v_isExporting_4761_, v___x_4775_, v___y_4755_, v___x_4787_, v___x_4810_);
lean_dec(v___y_4755_);
lean_dec(v___y_4757_);
v_isSharedCheck_4818_ = !lean_is_exclusive(v___x_4811_);
if (v_isSharedCheck_4818_ == 0)
{
lean_object* v_unused_4819_; 
v_unused_4819_ = lean_ctor_get(v___x_4811_, 0);
lean_dec(v_unused_4819_);
v___x_4813_ = v___x_4811_;
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
else
{
lean_dec(v___x_4811_);
v___x_4813_ = lean_box(0);
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
v_resetjp_4812_:
{
lean_object* v___x_4816_; 
if (v_isShared_4814_ == 0)
{
lean_ctor_set_tag(v___x_4813_, 1);
lean_ctor_set(v___x_4813_, 0, v_a_4809_);
v___x_4816_ = v___x_4813_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_a_4809_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___boxed(lean_object* v_x_4826_, lean_object* v_isExporting_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_){
_start:
{
uint8_t v_isExporting_boxed_4833_; lean_object* v_res_4834_; 
v_isExporting_boxed_4833_ = lean_unbox(v_isExporting_4827_);
v_res_4834_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg(v_x_4826_, v_isExporting_boxed_4833_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_);
return v_res_4834_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg(lean_object* v_x_4835_, uint8_t v_when_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_){
_start:
{
if (v_when_4836_ == 0)
{
lean_object* v___x_4842_; 
v___x_4842_ = lean_apply_5(v_x_4835_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_, lean_box(0));
return v___x_4842_;
}
else
{
uint8_t v___x_4843_; lean_object* v___x_4844_; 
v___x_4843_ = 0;
v___x_4844_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg(v_x_4835_, v___x_4843_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_);
return v___x_4844_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg___boxed(lean_object* v_x_4845_, lean_object* v_when_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_){
_start:
{
uint8_t v_when_boxed_4852_; lean_object* v_res_4853_; 
v_when_boxed_4852_ = lean_unbox(v_when_4846_);
v_res_4853_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg(v_x_4845_, v_when_boxed_4852_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_);
return v_res_4853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__2(uint8_t v___x_4854_, lean_object* v___x_4855_, uint8_t v___x_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_){
_start:
{
lean_object* v___x_4862_; lean_object* v_fileName_4863_; lean_object* v_fileMap_4864_; lean_object* v_options_4865_; lean_object* v_currRecDepth_4866_; lean_object* v_ref_4867_; lean_object* v_currNamespace_4868_; lean_object* v_openDecls_4869_; lean_object* v_initHeartbeats_4870_; lean_object* v_maxHeartbeats_4871_; lean_object* v_quotContext_4872_; lean_object* v_currMacroScope_4873_; lean_object* v_cancelTk_x3f_4874_; uint8_t v_suppressElabErrors_4875_; lean_object* v_inheritedTraceOptions_4876_; lean_object* v___x_4878_; uint8_t v_isShared_4879_; uint8_t v_isSharedCheck_4929_; 
v___x_4862_ = lean_st_ref_get(v___y_4860_);
v_fileName_4863_ = lean_ctor_get(v___y_4859_, 0);
v_fileMap_4864_ = lean_ctor_get(v___y_4859_, 1);
v_options_4865_ = lean_ctor_get(v___y_4859_, 2);
v_currRecDepth_4866_ = lean_ctor_get(v___y_4859_, 3);
v_ref_4867_ = lean_ctor_get(v___y_4859_, 5);
v_currNamespace_4868_ = lean_ctor_get(v___y_4859_, 6);
v_openDecls_4869_ = lean_ctor_get(v___y_4859_, 7);
v_initHeartbeats_4870_ = lean_ctor_get(v___y_4859_, 8);
v_maxHeartbeats_4871_ = lean_ctor_get(v___y_4859_, 9);
v_quotContext_4872_ = lean_ctor_get(v___y_4859_, 10);
v_currMacroScope_4873_ = lean_ctor_get(v___y_4859_, 11);
v_cancelTk_x3f_4874_ = lean_ctor_get(v___y_4859_, 12);
v_suppressElabErrors_4875_ = lean_ctor_get_uint8(v___y_4859_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4876_ = lean_ctor_get(v___y_4859_, 13);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___y_4859_);
if (v_isSharedCheck_4929_ == 0)
{
lean_object* v_unused_4930_; 
v_unused_4930_ = lean_ctor_get(v___y_4859_, 4);
lean_dec(v_unused_4930_);
v___x_4878_ = v___y_4859_;
v_isShared_4879_ = v_isSharedCheck_4929_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_inheritedTraceOptions_4876_);
lean_inc(v_cancelTk_x3f_4874_);
lean_inc(v_currMacroScope_4873_);
lean_inc(v_quotContext_4872_);
lean_inc(v_maxHeartbeats_4871_);
lean_inc(v_initHeartbeats_4870_);
lean_inc(v_openDecls_4869_);
lean_inc(v_currNamespace_4868_);
lean_inc(v_ref_4867_);
lean_inc(v_currRecDepth_4866_);
lean_inc(v_options_4865_);
lean_inc(v_fileMap_4864_);
lean_inc(v_fileName_4863_);
lean_dec(v___y_4859_);
v___x_4878_ = lean_box(0);
v_isShared_4879_ = v_isSharedCheck_4929_;
goto v_resetjp_4877_;
}
v_resetjp_4877_:
{
lean_object* v_env_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; uint8_t v___x_4884_; lean_object* v_fileName_4886_; lean_object* v_fileMap_4887_; lean_object* v_currRecDepth_4888_; lean_object* v_ref_4889_; lean_object* v_currNamespace_4890_; lean_object* v_openDecls_4891_; lean_object* v_initHeartbeats_4892_; lean_object* v_maxHeartbeats_4893_; lean_object* v_quotContext_4894_; lean_object* v_currMacroScope_4895_; lean_object* v_cancelTk_x3f_4896_; uint8_t v_suppressElabErrors_4897_; lean_object* v_inheritedTraceOptions_4898_; lean_object* v___y_4899_; uint8_t v___y_4907_; uint8_t v___x_4928_; 
v_env_4880_ = lean_ctor_get(v___x_4862_, 0);
lean_inc_ref(v_env_4880_);
lean_dec(v___x_4862_);
v___x_4881_ = l_Lean_Meta_tactic_hygienic;
v___x_4882_ = l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3(v_options_4865_, v___x_4881_, v___x_4854_);
v___x_4883_ = l_Lean_diagnostics;
v___x_4884_ = l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4(v___x_4882_, v___x_4883_);
v___x_4928_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4880_);
lean_dec_ref(v_env_4880_);
if (v___x_4928_ == 0)
{
if (v___x_4884_ == 0)
{
v_fileName_4886_ = v_fileName_4863_;
v_fileMap_4887_ = v_fileMap_4864_;
v_currRecDepth_4888_ = v_currRecDepth_4866_;
v_ref_4889_ = v_ref_4867_;
v_currNamespace_4890_ = v_currNamespace_4868_;
v_openDecls_4891_ = v_openDecls_4869_;
v_initHeartbeats_4892_ = v_initHeartbeats_4870_;
v_maxHeartbeats_4893_ = v_maxHeartbeats_4871_;
v_quotContext_4894_ = v_quotContext_4872_;
v_currMacroScope_4895_ = v_currMacroScope_4873_;
v_cancelTk_x3f_4896_ = v_cancelTk_x3f_4874_;
v_suppressElabErrors_4897_ = v_suppressElabErrors_4875_;
v_inheritedTraceOptions_4898_ = v_inheritedTraceOptions_4876_;
v___y_4899_ = v___y_4860_;
goto v___jp_4885_;
}
else
{
v___y_4907_ = v___x_4928_;
goto v___jp_4906_;
}
}
else
{
v___y_4907_ = v___x_4884_;
goto v___jp_4906_;
}
v___jp_4885_:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4903_; 
v___x_4900_ = l_Lean_maxRecDepth;
v___x_4901_ = l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5(v___x_4882_, v___x_4900_);
if (v_isShared_4879_ == 0)
{
lean_ctor_set(v___x_4878_, 13, v_inheritedTraceOptions_4898_);
lean_ctor_set(v___x_4878_, 12, v_cancelTk_x3f_4896_);
lean_ctor_set(v___x_4878_, 11, v_currMacroScope_4895_);
lean_ctor_set(v___x_4878_, 10, v_quotContext_4894_);
lean_ctor_set(v___x_4878_, 9, v_maxHeartbeats_4893_);
lean_ctor_set(v___x_4878_, 8, v_initHeartbeats_4892_);
lean_ctor_set(v___x_4878_, 7, v_openDecls_4891_);
lean_ctor_set(v___x_4878_, 6, v_currNamespace_4890_);
lean_ctor_set(v___x_4878_, 5, v_ref_4889_);
lean_ctor_set(v___x_4878_, 4, v___x_4901_);
lean_ctor_set(v___x_4878_, 3, v_currRecDepth_4888_);
lean_ctor_set(v___x_4878_, 2, v___x_4882_);
lean_ctor_set(v___x_4878_, 1, v_fileMap_4887_);
lean_ctor_set(v___x_4878_, 0, v_fileName_4886_);
v___x_4903_ = v___x_4878_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_fileName_4886_);
lean_ctor_set(v_reuseFailAlloc_4905_, 1, v_fileMap_4887_);
lean_ctor_set(v_reuseFailAlloc_4905_, 2, v___x_4882_);
lean_ctor_set(v_reuseFailAlloc_4905_, 3, v_currRecDepth_4888_);
lean_ctor_set(v_reuseFailAlloc_4905_, 4, v___x_4901_);
lean_ctor_set(v_reuseFailAlloc_4905_, 5, v_ref_4889_);
lean_ctor_set(v_reuseFailAlloc_4905_, 6, v_currNamespace_4890_);
lean_ctor_set(v_reuseFailAlloc_4905_, 7, v_openDecls_4891_);
lean_ctor_set(v_reuseFailAlloc_4905_, 8, v_initHeartbeats_4892_);
lean_ctor_set(v_reuseFailAlloc_4905_, 9, v_maxHeartbeats_4893_);
lean_ctor_set(v_reuseFailAlloc_4905_, 10, v_quotContext_4894_);
lean_ctor_set(v_reuseFailAlloc_4905_, 11, v_currMacroScope_4895_);
lean_ctor_set(v_reuseFailAlloc_4905_, 12, v_cancelTk_x3f_4896_);
lean_ctor_set(v_reuseFailAlloc_4905_, 13, v_inheritedTraceOptions_4898_);
v___x_4903_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
lean_object* v___x_4904_; 
lean_ctor_set_uint8(v___x_4903_, sizeof(void*)*14, v___x_4884_);
lean_ctor_set_uint8(v___x_4903_, sizeof(void*)*14 + 1, v_suppressElabErrors_4897_);
v___x_4904_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg(v___x_4855_, v___x_4856_, v___y_4857_, v___y_4858_, v___x_4903_, v___y_4899_);
return v___x_4904_;
}
}
v___jp_4906_:
{
if (v___y_4907_ == 0)
{
lean_object* v___x_4908_; lean_object* v_env_4909_; lean_object* v_nextMacroScope_4910_; lean_object* v_ngen_4911_; lean_object* v_auxDeclNGen_4912_; lean_object* v_traceState_4913_; lean_object* v_messages_4914_; lean_object* v_infoState_4915_; lean_object* v_snapshotTasks_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4926_; 
v___x_4908_ = lean_st_ref_take(v___y_4860_);
v_env_4909_ = lean_ctor_get(v___x_4908_, 0);
v_nextMacroScope_4910_ = lean_ctor_get(v___x_4908_, 1);
v_ngen_4911_ = lean_ctor_get(v___x_4908_, 2);
v_auxDeclNGen_4912_ = lean_ctor_get(v___x_4908_, 3);
v_traceState_4913_ = lean_ctor_get(v___x_4908_, 4);
v_messages_4914_ = lean_ctor_get(v___x_4908_, 6);
v_infoState_4915_ = lean_ctor_get(v___x_4908_, 7);
v_snapshotTasks_4916_ = lean_ctor_get(v___x_4908_, 8);
v_isSharedCheck_4926_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_4926_ == 0)
{
lean_object* v_unused_4927_; 
v_unused_4927_ = lean_ctor_get(v___x_4908_, 5);
lean_dec(v_unused_4927_);
v___x_4918_ = v___x_4908_;
v_isShared_4919_ = v_isSharedCheck_4926_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_snapshotTasks_4916_);
lean_inc(v_infoState_4915_);
lean_inc(v_messages_4914_);
lean_inc(v_traceState_4913_);
lean_inc(v_auxDeclNGen_4912_);
lean_inc(v_ngen_4911_);
lean_inc(v_nextMacroScope_4910_);
lean_inc(v_env_4909_);
lean_dec(v___x_4908_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4926_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4923_; 
v___x_4920_ = l_Lean_Kernel_enableDiag(v_env_4909_, v___x_4884_);
v___x_4921_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2);
if (v_isShared_4919_ == 0)
{
lean_ctor_set(v___x_4918_, 5, v___x_4921_);
lean_ctor_set(v___x_4918_, 0, v___x_4920_);
v___x_4923_ = v___x_4918_;
goto v_reusejp_4922_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v___x_4920_);
lean_ctor_set(v_reuseFailAlloc_4925_, 1, v_nextMacroScope_4910_);
lean_ctor_set(v_reuseFailAlloc_4925_, 2, v_ngen_4911_);
lean_ctor_set(v_reuseFailAlloc_4925_, 3, v_auxDeclNGen_4912_);
lean_ctor_set(v_reuseFailAlloc_4925_, 4, v_traceState_4913_);
lean_ctor_set(v_reuseFailAlloc_4925_, 5, v___x_4921_);
lean_ctor_set(v_reuseFailAlloc_4925_, 6, v_messages_4914_);
lean_ctor_set(v_reuseFailAlloc_4925_, 7, v_infoState_4915_);
lean_ctor_set(v_reuseFailAlloc_4925_, 8, v_snapshotTasks_4916_);
v___x_4923_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4922_;
}
v_reusejp_4922_:
{
lean_object* v___x_4924_; 
v___x_4924_ = lean_st_ref_set(v___y_4860_, v___x_4923_);
v_fileName_4886_ = v_fileName_4863_;
v_fileMap_4887_ = v_fileMap_4864_;
v_currRecDepth_4888_ = v_currRecDepth_4866_;
v_ref_4889_ = v_ref_4867_;
v_currNamespace_4890_ = v_currNamespace_4868_;
v_openDecls_4891_ = v_openDecls_4869_;
v_initHeartbeats_4892_ = v_initHeartbeats_4870_;
v_maxHeartbeats_4893_ = v_maxHeartbeats_4871_;
v_quotContext_4894_ = v_quotContext_4872_;
v_currMacroScope_4895_ = v_currMacroScope_4873_;
v_cancelTk_x3f_4896_ = v_cancelTk_x3f_4874_;
v_suppressElabErrors_4897_ = v_suppressElabErrors_4875_;
v_inheritedTraceOptions_4898_ = v_inheritedTraceOptions_4876_;
v___y_4899_ = v___y_4860_;
goto v___jp_4885_;
}
}
}
else
{
v_fileName_4886_ = v_fileName_4863_;
v_fileMap_4887_ = v_fileMap_4864_;
v_currRecDepth_4888_ = v_currRecDepth_4866_;
v_ref_4889_ = v_ref_4867_;
v_currNamespace_4890_ = v_currNamespace_4868_;
v_openDecls_4891_ = v_openDecls_4869_;
v_initHeartbeats_4892_ = v_initHeartbeats_4870_;
v_maxHeartbeats_4893_ = v_maxHeartbeats_4871_;
v_quotContext_4894_ = v_quotContext_4872_;
v_currMacroScope_4895_ = v_currMacroScope_4873_;
v_cancelTk_x3f_4896_ = v_cancelTk_x3f_4874_;
v_suppressElabErrors_4897_ = v_suppressElabErrors_4875_;
v_inheritedTraceOptions_4898_ = v_inheritedTraceOptions_4876_;
v___y_4899_ = v___y_4860_;
goto v___jp_4885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___lam__2___boxed(lean_object* v___x_4931_, lean_object* v___x_4932_, lean_object* v___x_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_){
_start:
{
uint8_t v___x_9593__boxed_4939_; uint8_t v___x_9595__boxed_4940_; lean_object* v_res_4941_; 
v___x_9593__boxed_4939_ = lean_unbox(v___x_4931_);
v___x_9595__boxed_4940_ = lean_unbox(v___x_4933_);
v_res_4941_ = l_Lean_Elab_WF_mkUnfoldEq___lam__2(v___x_9593__boxed_4939_, v___x_4932_, v___x_9595__boxed_4940_, v___y_4934_, v___y_4935_, v___y_4936_, v___y_4937_);
return v_res_4941_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkUnfoldEq___closed__1(void){
_start:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; 
v___x_4943_ = ((lean_object*)(l_Lean_Elab_WF_mkUnfoldEq___closed__0));
v___x_4944_ = l_Lean_stringToMessageData(v___x_4943_);
return v___x_4944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object* v_preDef_4945_, lean_object* v_unaryPreDefName_4946_, lean_object* v_wfPreprocessProof_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_){
_start:
{
lean_object* v___x_4953_; lean_object* v_env_4954_; lean_object* v_levelParams_4955_; lean_object* v_declName_4956_; lean_object* v_value_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___f_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___f_4964_; uint8_t v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; uint8_t v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___f_4971_; lean_object* v___x_4972_; 
v___x_4953_ = lean_st_ref_get(v_a_4951_);
v_env_4954_ = lean_ctor_get(v___x_4953_, 0);
lean_inc_ref(v_env_4954_);
lean_dec(v___x_4953_);
v_levelParams_4955_ = lean_ctor_get(v_preDef_4945_, 1);
lean_inc(v_levelParams_4955_);
v_declName_4956_ = lean_ctor_get(v_preDef_4945_, 3);
lean_inc(v_declName_4956_);
v_value_4957_ = lean_ctor_get(v_preDef_4945_, 7);
lean_inc_ref(v_value_4957_);
lean_dec_ref(v_preDef_4945_);
v___x_4958_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_4956_);
v___x_4959_ = l_Lean_Meta_mkEqLikeNameFor(v_env_4954_, v_declName_4956_, v___x_4958_);
lean_inc(v___x_4959_);
v___f_4960_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkUnfoldEq___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4960_, 0, v_levelParams_4955_);
lean_closure_set(v___f_4960_, 1, v_declName_4956_);
lean_closure_set(v___f_4960_, 2, v_wfPreprocessProof_4947_);
lean_closure_set(v___f_4960_, 3, v___x_4959_);
lean_closure_set(v___f_4960_, 4, v_unaryPreDefName_4946_);
v___x_4961_ = lean_obj_once(&l_Lean_Elab_WF_mkUnfoldEq___closed__1, &l_Lean_Elab_WF_mkUnfoldEq___closed__1_once, _init_l_Lean_Elab_WF_mkUnfoldEq___closed__1);
v___x_4962_ = l_Lean_MessageData_ofName(v___x_4959_);
v___x_4963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4961_);
lean_ctor_set(v___x_4963_, 1, v___x_4962_);
v___f_4964_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__11), 2, 1);
lean_closure_set(v___f_4964_, 0, v___x_4963_);
v___x_4965_ = 0;
v___x_4966_ = lean_box(v___x_4965_);
v___x_4967_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___boxed), 9, 4);
lean_closure_set(v___x_4967_, 0, lean_box(0));
lean_closure_set(v___x_4967_, 1, v_value_4957_);
lean_closure_set(v___x_4967_, 2, v___f_4960_);
lean_closure_set(v___x_4967_, 3, v___x_4966_);
v___x_4968_ = 1;
v___x_4969_ = lean_box(v___x_4965_);
v___x_4970_ = lean_box(v___x_4968_);
v___f_4971_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkUnfoldEq___lam__2___boxed), 8, 3);
lean_closure_set(v___f_4971_, 0, v___x_4969_);
lean_closure_set(v___f_4971_, 1, v___x_4967_);
lean_closure_set(v___f_4971_, 2, v___x_4970_);
v___x_4972_ = l_Lean_Meta_mapErrorImp___redArg(v___f_4971_, v___f_4964_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_4980_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_4980_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_4980_ == 0)
{
v___x_4975_ = v___x_4972_;
v_isShared_4976_ = v_isSharedCheck_4980_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_a_4973_);
lean_dec(v___x_4972_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_4980_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v___x_4978_; 
if (v_isShared_4976_ == 0)
{
v___x_4978_ = v___x_4975_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v_a_4973_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
return v___x_4978_;
}
}
}
else
{
lean_object* v_a_4981_; lean_object* v___x_4983_; uint8_t v_isShared_4984_; uint8_t v_isSharedCheck_4988_; 
v_a_4981_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_4988_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4983_ = v___x_4972_;
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
else
{
lean_inc(v_a_4981_);
lean_dec(v___x_4972_);
v___x_4983_ = lean_box(0);
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
v_resetjp_4982_:
{
lean_object* v___x_4986_; 
if (v_isShared_4984_ == 0)
{
v___x_4986_ = v___x_4983_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v_a_4981_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
return v___x_4986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkUnfoldEq___boxed(lean_object* v_preDef_4989_, lean_object* v_unaryPreDefName_4990_, lean_object* v_wfPreprocessProof_4991_, lean_object* v_a_4992_, lean_object* v_a_4993_, lean_object* v_a_4994_, lean_object* v_a_4995_, lean_object* v_a_4996_){
_start:
{
lean_object* v_res_4997_; 
v_res_4997_ = l_Lean_Elab_WF_mkUnfoldEq(v_preDef_4989_, v_unaryPreDefName_4990_, v_wfPreprocessProof_4991_, v_a_4992_, v_a_4993_, v_a_4994_, v_a_4995_);
return v_res_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7(lean_object* v_00_u03b1_4998_, lean_object* v_x_4999_, uint8_t v_isExporting_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_){
_start:
{
lean_object* v___x_5006_; 
v___x_5006_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg(v_x_4999_, v_isExporting_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_);
return v___x_5006_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___boxed(lean_object* v_00_u03b1_5007_, lean_object* v_x_5008_, lean_object* v_isExporting_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_){
_start:
{
uint8_t v_isExporting_boxed_5015_; lean_object* v_res_5016_; 
v_isExporting_boxed_5015_ = lean_unbox(v_isExporting_5009_);
v_res_5016_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7(v_00_u03b1_5007_, v_x_5008_, v_isExporting_boxed_5015_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_);
return v_res_5016_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6(lean_object* v_00_u03b1_5017_, lean_object* v_x_5018_, uint8_t v_when_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_){
_start:
{
lean_object* v___x_5025_; 
v___x_5025_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___redArg(v_x_5018_, v_when_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_);
return v___x_5025_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6___boxed(lean_object* v_00_u03b1_5026_, lean_object* v_x_5027_, lean_object* v_when_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_){
_start:
{
uint8_t v_when_boxed_5034_; lean_object* v_res_5035_; 
v_when_boxed_5034_ = lean_unbox(v_when_5028_);
v_res_5035_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6(v_00_u03b1_5026_, v_x_5027_, v_when_boxed_5034_, v___y_5029_, v___y_5030_, v___y_5031_, v___y_5032_);
return v_res_5035_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5037_; lean_object* v___x_5038_; 
v___x_5037_ = ((lean_object*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__0));
v___x_5038_ = l_Lean_stringToMessageData(v___x_5037_);
return v___x_5038_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; 
v___x_5044_ = ((lean_object*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__3));
v___x_5045_ = l_Lean_stringToMessageData(v___x_5044_);
return v___x_5045_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__6(void){
_start:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5047_ = ((lean_object*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__5));
v___x_5048_ = l_Lean_stringToMessageData(v___x_5047_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0(lean_object* v_levelParams_5049_, lean_object* v_declName_5050_, lean_object* v___x_5051_, lean_object* v___x_5052_, lean_object* v___x_5053_, lean_object* v_xs_5054_, lean_object* v_body_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_){
_start:
{
lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; 
v___x_5061_ = lean_box(0);
lean_inc(v_levelParams_5049_);
v___x_5062_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__3(v_levelParams_5049_, v___x_5061_);
v___x_5063_ = l_Lean_mkConst(v_declName_5050_, v___x_5062_);
v___x_5064_ = l_Lean_mkAppN(v___x_5063_, v_xs_5054_);
lean_inc(v___y_5059_);
lean_inc_ref(v___y_5058_);
lean_inc(v___y_5057_);
lean_inc_ref(v___y_5056_);
v___x_5065_ = l_Lean_Meta_mkEq(v___x_5064_, v_body_5055_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_);
if (lean_obj_tag(v___x_5065_) == 0)
{
lean_object* v_a_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; 
v_a_5066_ = lean_ctor_get(v___x_5065_, 0);
lean_inc(v_a_5066_);
lean_dec_ref(v___x_5065_);
v___x_5067_ = lean_box(0);
lean_inc_ref(v___y_5056_);
lean_inc(v_a_5066_);
v___x_5068_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_5066_, v___x_5067_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_);
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v_a_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; 
v_a_5069_ = lean_ctor_get(v___x_5068_, 0);
lean_inc(v_a_5069_);
lean_dec_ref(v___x_5068_);
v___x_5070_ = l_Lean_Expr_mvarId_x21(v_a_5069_);
lean_inc(v___y_5059_);
lean_inc_ref(v___y_5058_);
lean_inc(v___y_5057_);
lean_inc_ref(v___y_5056_);
v___x_5071_ = l_Lean_Elab_Eqns_deltaLHS(v___x_5070_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_);
if (lean_obj_tag(v___x_5071_) == 0)
{
lean_object* v_a_5072_; uint8_t v___x_5073_; uint8_t v___x_5074_; lean_object* v___y_5076_; lean_object* v___y_5077_; lean_object* v___y_5078_; lean_object* v___y_5079_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v_a_5072_ = lean_ctor_get(v___x_5071_, 0);
lean_inc(v_a_5072_);
lean_dec_ref(v___x_5071_);
v___x_5073_ = 1;
v___x_5074_ = 0;
v___x_5141_ = ((lean_object*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__2));
lean_inc(v___y_5059_);
lean_inc_ref(v___y_5058_);
lean_inc(v___y_5057_);
lean_inc_ref(v___y_5056_);
lean_inc(v_a_5072_);
v___x_5142_ = l_Lean_MVarId_applyConst(v_a_5072_, v___x_5051_, v___x_5141_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_);
if (lean_obj_tag(v___x_5142_) == 0)
{
lean_object* v_a_5143_; uint8_t v___x_5144_; 
v_a_5143_ = lean_ctor_get(v___x_5142_, 0);
lean_inc(v_a_5143_);
lean_dec_ref(v___x_5142_);
v___x_5144_ = l_List_isEmpty___redArg(v_a_5143_);
lean_dec(v_a_5143_);
if (v___x_5144_ == 0)
{
lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; 
lean_dec(v_a_5069_);
lean_dec(v_a_5066_);
lean_dec(v___x_5052_);
lean_dec(v_levelParams_5049_);
v___x_5145_ = lean_obj_once(&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__4, &l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__4_once, _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__4);
v___x_5146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5146_, 0, v___x_5145_);
lean_ctor_set(v___x_5146_, 1, v___x_5053_);
v___x_5147_ = lean_obj_once(&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__6, &l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__6_once, _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__6);
v___x_5148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5148_, 0, v___x_5146_);
lean_ctor_set(v___x_5148_, 1, v___x_5147_);
v___x_5149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5149_, 0, v_a_5072_);
v___x_5150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5150_, 0, v___x_5148_);
lean_ctor_set(v___x_5150_, 1, v___x_5149_);
v___x_5151_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_5152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5152_, 0, v___x_5150_);
lean_ctor_set(v___x_5152_, 1, v___x_5151_);
v___x_5153_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_rwFixEq_spec__3___redArg(v___x_5152_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_);
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec(v___y_5057_);
lean_dec_ref(v___y_5056_);
return v___x_5153_;
}
else
{
lean_dec(v_a_5072_);
lean_dec_ref(v___x_5053_);
v___y_5076_ = v___y_5056_;
v___y_5077_ = v___y_5057_;
v___y_5078_ = v___y_5058_;
v___y_5079_ = v___y_5059_;
goto v___jp_5075_;
}
}
else
{
lean_object* v_a_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5161_; 
lean_dec(v_a_5072_);
lean_dec(v_a_5069_);
lean_dec(v_a_5066_);
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec(v___y_5057_);
lean_dec_ref(v___y_5056_);
lean_dec_ref(v___x_5053_);
lean_dec(v___x_5052_);
lean_dec(v_levelParams_5049_);
v_a_5154_ = lean_ctor_get(v___x_5142_, 0);
v_isSharedCheck_5161_ = !lean_is_exclusive(v___x_5142_);
if (v_isSharedCheck_5161_ == 0)
{
v___x_5156_ = v___x_5142_;
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
else
{
lean_inc(v_a_5154_);
lean_dec(v___x_5142_);
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
v___jp_5075_:
{
lean_object* v___x_5080_; lean_object* v_a_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5140_; 
v___x_5080_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher_spec__6___redArg(v_a_5069_, v___y_5077_);
v_a_5081_ = lean_ctor_get(v___x_5080_, 0);
v_isSharedCheck_5140_ = !lean_is_exclusive(v___x_5080_);
if (v_isSharedCheck_5140_ == 0)
{
v___x_5083_ = v___x_5080_;
v_isShared_5084_ = v_isSharedCheck_5140_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_a_5081_);
lean_dec(v___x_5080_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5140_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
uint8_t v___x_5085_; lean_object* v___x_5086_; 
v___x_5085_ = 1;
v___x_5086_ = l_Lean_Meta_mkForallFVars(v_xs_5054_, v_a_5066_, v___x_5074_, v___x_5073_, v___x_5073_, v___x_5085_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
if (lean_obj_tag(v___x_5086_) == 0)
{
lean_object* v_a_5087_; lean_object* v___x_5088_; 
v_a_5087_ = lean_ctor_get(v___x_5086_, 0);
lean_inc(v_a_5087_);
lean_dec_ref(v___x_5086_);
lean_inc(v___y_5079_);
lean_inc_ref(v___y_5078_);
lean_inc(v___y_5077_);
lean_inc_ref(v___y_5076_);
v___x_5088_ = l_Lean_Meta_letToHave(v_a_5087_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
if (lean_obj_tag(v___x_5088_) == 0)
{
lean_object* v_a_5089_; lean_object* v___x_5090_; 
v_a_5089_ = lean_ctor_get(v___x_5088_, 0);
lean_inc(v_a_5089_);
lean_dec_ref(v___x_5088_);
v___x_5090_ = l_Lean_Meta_mkLambdaFVars(v_xs_5054_, v_a_5081_, v___x_5074_, v___x_5073_, v___x_5074_, v___x_5073_, v___x_5085_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
if (lean_obj_tag(v___x_5090_) == 0)
{
lean_object* v_a_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5096_; 
v_a_5091_ = lean_ctor_get(v___x_5090_, 0);
lean_inc(v_a_5091_);
lean_dec_ref(v___x_5090_);
lean_inc(v___x_5052_);
v___x_5092_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5092_, 0, v___x_5052_);
lean_ctor_set(v___x_5092_, 1, v_levelParams_5049_);
lean_ctor_set(v___x_5092_, 2, v_a_5089_);
lean_inc(v___x_5052_);
v___x_5093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5052_);
lean_ctor_set(v___x_5093_, 1, v___x_5061_);
v___x_5094_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5094_, 0, v___x_5092_);
lean_ctor_set(v___x_5094_, 1, v_a_5091_);
lean_ctor_set(v___x_5094_, 2, v___x_5093_);
if (v_isShared_5084_ == 0)
{
lean_ctor_set_tag(v___x_5083_, 2);
lean_ctor_set(v___x_5083_, 0, v___x_5094_);
v___x_5096_ = v___x_5083_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v___x_5094_);
v___x_5096_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
lean_object* v___x_5097_; 
lean_inc(v___y_5079_);
lean_inc_ref(v___y_5078_);
v___x_5097_ = l_Lean_addDecl(v___x_5096_, v___x_5074_, v___y_5078_, v___y_5079_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v___x_5098_; 
lean_dec_ref(v___x_5097_);
lean_inc(v___y_5079_);
lean_inc_ref(v___y_5078_);
lean_inc(v___y_5077_);
lean_inc_ref(v___y_5076_);
lean_inc(v___x_5052_);
v___x_5098_ = l_Lean_inferDefEqAttr(v___x_5052_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
if (lean_obj_tag(v___x_5098_) == 0)
{
lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5114_; 
lean_dec_ref(v___x_5098_);
v___x_5099_ = ((lean_object*)(l_Lean_Elab_WF_mkUnfoldEq___lam__0___closed__2));
v___x_5100_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_WF_mkUnfoldEq_spec__0___redArg(v___x_5099_, v___y_5078_);
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5114_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5114_ == 0)
{
v___x_5103_ = v___x_5100_;
v_isShared_5104_ = v_isSharedCheck_5114_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5100_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5114_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
uint8_t v___x_5105_; 
v___x_5105_ = lean_unbox(v_a_5101_);
lean_dec(v_a_5101_);
if (v___x_5105_ == 0)
{
lean_object* v___x_5106_; lean_object* v___x_5108_; 
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___x_5052_);
v___x_5106_ = lean_box(0);
if (v_isShared_5104_ == 0)
{
lean_ctor_set(v___x_5103_, 0, v___x_5106_);
v___x_5108_ = v___x_5103_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v___x_5106_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
return v___x_5108_;
}
}
else
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
lean_del_object(v___x_5103_);
v___x_5110_ = lean_obj_once(&l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__1, &l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__1_once, _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___closed__1);
v___x_5111_ = l_Lean_MessageData_ofConstName(v___x_5052_, v___x_5074_);
v___x_5112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5112_, 0, v___x_5110_);
lean_ctor_set(v___x_5112_, 1, v___x_5111_);
v___x_5113_ = l_Lean_addTrace___at___00Lean_Elab_WF_mkUnfoldEq_spec__1(v___x_5099_, v___x_5112_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
return v___x_5113_;
}
}
}
else
{
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___x_5052_);
return v___x_5098_;
}
}
else
{
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___x_5052_);
return v___x_5097_;
}
}
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
lean_dec(v_a_5089_);
lean_del_object(v___x_5083_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___x_5052_);
lean_dec(v_levelParams_5049_);
v_a_5116_ = lean_ctor_get(v___x_5090_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5090_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5118_ = v___x_5090_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_inc(v_a_5116_);
lean_dec(v___x_5090_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
if (v_isShared_5119_ == 0)
{
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
else
{
lean_object* v_a_5124_; lean_object* v___x_5126_; uint8_t v_isShared_5127_; uint8_t v_isSharedCheck_5131_; 
lean_del_object(v___x_5083_);
lean_dec(v_a_5081_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___x_5052_);
lean_dec(v_levelParams_5049_);
v_a_5124_ = lean_ctor_get(v___x_5088_, 0);
v_isSharedCheck_5131_ = !lean_is_exclusive(v___x_5088_);
if (v_isSharedCheck_5131_ == 0)
{
v___x_5126_ = v___x_5088_;
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
else
{
lean_inc(v_a_5124_);
lean_dec(v___x_5088_);
v___x_5126_ = lean_box(0);
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
v_resetjp_5125_:
{
lean_object* v___x_5129_; 
if (v_isShared_5127_ == 0)
{
v___x_5129_ = v___x_5126_;
goto v_reusejp_5128_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v_a_5124_);
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
lean_object* v_a_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5139_; 
lean_del_object(v___x_5083_);
lean_dec(v_a_5081_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___x_5052_);
lean_dec(v_levelParams_5049_);
v_a_5132_ = lean_ctor_get(v___x_5086_, 0);
v_isSharedCheck_5139_ = !lean_is_exclusive(v___x_5086_);
if (v_isSharedCheck_5139_ == 0)
{
v___x_5134_ = v___x_5086_;
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_a_5132_);
lean_dec(v___x_5086_);
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
}
}
else
{
lean_object* v_a_5162_; lean_object* v___x_5164_; uint8_t v_isShared_5165_; uint8_t v_isSharedCheck_5169_; 
lean_dec(v_a_5069_);
lean_dec(v_a_5066_);
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec(v___y_5057_);
lean_dec_ref(v___y_5056_);
lean_dec_ref(v___x_5053_);
lean_dec(v___x_5052_);
lean_dec(v___x_5051_);
lean_dec(v_levelParams_5049_);
v_a_5162_ = lean_ctor_get(v___x_5071_, 0);
v_isSharedCheck_5169_ = !lean_is_exclusive(v___x_5071_);
if (v_isSharedCheck_5169_ == 0)
{
v___x_5164_ = v___x_5071_;
v_isShared_5165_ = v_isSharedCheck_5169_;
goto v_resetjp_5163_;
}
else
{
lean_inc(v_a_5162_);
lean_dec(v___x_5071_);
v___x_5164_ = lean_box(0);
v_isShared_5165_ = v_isSharedCheck_5169_;
goto v_resetjp_5163_;
}
v_resetjp_5163_:
{
lean_object* v___x_5167_; 
if (v_isShared_5165_ == 0)
{
v___x_5167_ = v___x_5164_;
goto v_reusejp_5166_;
}
else
{
lean_object* v_reuseFailAlloc_5168_; 
v_reuseFailAlloc_5168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5168_, 0, v_a_5162_);
v___x_5167_ = v_reuseFailAlloc_5168_;
goto v_reusejp_5166_;
}
v_reusejp_5166_:
{
return v___x_5167_;
}
}
}
}
else
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5177_; 
lean_dec(v_a_5066_);
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec(v___y_5057_);
lean_dec_ref(v___y_5056_);
lean_dec_ref(v___x_5053_);
lean_dec(v___x_5052_);
lean_dec(v___x_5051_);
lean_dec(v_levelParams_5049_);
v_a_5170_ = lean_ctor_get(v___x_5068_, 0);
v_isSharedCheck_5177_ = !lean_is_exclusive(v___x_5068_);
if (v_isSharedCheck_5177_ == 0)
{
v___x_5172_ = v___x_5068_;
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v___x_5068_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v___x_5175_; 
if (v_isShared_5173_ == 0)
{
v___x_5175_ = v___x_5172_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v_a_5170_);
v___x_5175_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
return v___x_5175_;
}
}
}
}
else
{
lean_object* v_a_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5185_; 
lean_dec(v___y_5059_);
lean_dec_ref(v___y_5058_);
lean_dec(v___y_5057_);
lean_dec_ref(v___y_5056_);
lean_dec_ref(v___x_5053_);
lean_dec(v___x_5052_);
lean_dec(v___x_5051_);
lean_dec(v_levelParams_5049_);
v_a_5178_ = lean_ctor_get(v___x_5065_, 0);
v_isSharedCheck_5185_ = !lean_is_exclusive(v___x_5065_);
if (v_isSharedCheck_5185_ == 0)
{
v___x_5180_ = v___x_5065_;
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v___x_5065_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v___x_5183_; 
if (v_isShared_5181_ == 0)
{
v___x_5183_ = v___x_5180_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5184_; 
v_reuseFailAlloc_5184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5184_, 0, v_a_5178_);
v___x_5183_ = v_reuseFailAlloc_5184_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
return v___x_5183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___boxed(lean_object* v_levelParams_5186_, lean_object* v_declName_5187_, lean_object* v___x_5188_, lean_object* v___x_5189_, lean_object* v___x_5190_, lean_object* v_xs_5191_, lean_object* v_body_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_){
_start:
{
lean_object* v_res_5198_; 
v_res_5198_ = l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0(v_levelParams_5186_, v_declName_5187_, v___x_5188_, v___x_5189_, v___x_5190_, v_xs_5191_, v_body_5192_, v___y_5193_, v___y_5194_, v___y_5195_, v___y_5196_);
lean_dec_ref(v_xs_5191_);
return v_res_5198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__2(uint8_t v___x_5199_, lean_object* v_value_5200_, lean_object* v___f_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_){
_start:
{
lean_object* v___x_5207_; lean_object* v_fileName_5208_; lean_object* v_fileMap_5209_; lean_object* v_options_5210_; lean_object* v_currRecDepth_5211_; lean_object* v_ref_5212_; lean_object* v_currNamespace_5213_; lean_object* v_openDecls_5214_; lean_object* v_initHeartbeats_5215_; lean_object* v_maxHeartbeats_5216_; lean_object* v_quotContext_5217_; lean_object* v_currMacroScope_5218_; lean_object* v_cancelTk_x3f_5219_; uint8_t v_suppressElabErrors_5220_; lean_object* v_inheritedTraceOptions_5221_; lean_object* v___x_5223_; uint8_t v_isShared_5224_; uint8_t v_isSharedCheck_5274_; 
v___x_5207_ = lean_st_ref_get(v___y_5205_);
v_fileName_5208_ = lean_ctor_get(v___y_5204_, 0);
v_fileMap_5209_ = lean_ctor_get(v___y_5204_, 1);
v_options_5210_ = lean_ctor_get(v___y_5204_, 2);
v_currRecDepth_5211_ = lean_ctor_get(v___y_5204_, 3);
v_ref_5212_ = lean_ctor_get(v___y_5204_, 5);
v_currNamespace_5213_ = lean_ctor_get(v___y_5204_, 6);
v_openDecls_5214_ = lean_ctor_get(v___y_5204_, 7);
v_initHeartbeats_5215_ = lean_ctor_get(v___y_5204_, 8);
v_maxHeartbeats_5216_ = lean_ctor_get(v___y_5204_, 9);
v_quotContext_5217_ = lean_ctor_get(v___y_5204_, 10);
v_currMacroScope_5218_ = lean_ctor_get(v___y_5204_, 11);
v_cancelTk_x3f_5219_ = lean_ctor_get(v___y_5204_, 12);
v_suppressElabErrors_5220_ = lean_ctor_get_uint8(v___y_5204_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_5221_ = lean_ctor_get(v___y_5204_, 13);
v_isSharedCheck_5274_ = !lean_is_exclusive(v___y_5204_);
if (v_isSharedCheck_5274_ == 0)
{
lean_object* v_unused_5275_; 
v_unused_5275_ = lean_ctor_get(v___y_5204_, 4);
lean_dec(v_unused_5275_);
v___x_5223_ = v___y_5204_;
v_isShared_5224_ = v_isSharedCheck_5274_;
goto v_resetjp_5222_;
}
else
{
lean_inc(v_inheritedTraceOptions_5221_);
lean_inc(v_cancelTk_x3f_5219_);
lean_inc(v_currMacroScope_5218_);
lean_inc(v_quotContext_5217_);
lean_inc(v_maxHeartbeats_5216_);
lean_inc(v_initHeartbeats_5215_);
lean_inc(v_openDecls_5214_);
lean_inc(v_currNamespace_5213_);
lean_inc(v_ref_5212_);
lean_inc(v_currRecDepth_5211_);
lean_inc(v_options_5210_);
lean_inc(v_fileMap_5209_);
lean_inc(v_fileName_5208_);
lean_dec(v___y_5204_);
v___x_5223_ = lean_box(0);
v_isShared_5224_ = v_isSharedCheck_5274_;
goto v_resetjp_5222_;
}
v_resetjp_5222_:
{
lean_object* v_env_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; uint8_t v___x_5229_; lean_object* v_fileName_5231_; lean_object* v_fileMap_5232_; lean_object* v_currRecDepth_5233_; lean_object* v_ref_5234_; lean_object* v_currNamespace_5235_; lean_object* v_openDecls_5236_; lean_object* v_initHeartbeats_5237_; lean_object* v_maxHeartbeats_5238_; lean_object* v_quotContext_5239_; lean_object* v_currMacroScope_5240_; lean_object* v_cancelTk_x3f_5241_; uint8_t v_suppressElabErrors_5242_; lean_object* v_inheritedTraceOptions_5243_; lean_object* v___y_5244_; uint8_t v___y_5252_; uint8_t v___x_5273_; 
v_env_5225_ = lean_ctor_get(v___x_5207_, 0);
lean_inc_ref(v_env_5225_);
lean_dec(v___x_5207_);
v___x_5226_ = l_Lean_Meta_tactic_hygienic;
v___x_5227_ = l_Lean_Option_set___at___00Lean_Elab_WF_mkUnfoldEq_spec__3(v_options_5210_, v___x_5226_, v___x_5199_);
v___x_5228_ = l_Lean_diagnostics;
v___x_5229_ = l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__4(v___x_5227_, v___x_5228_);
v___x_5273_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_5225_);
lean_dec_ref(v_env_5225_);
if (v___x_5273_ == 0)
{
if (v___x_5229_ == 0)
{
v_fileName_5231_ = v_fileName_5208_;
v_fileMap_5232_ = v_fileMap_5209_;
v_currRecDepth_5233_ = v_currRecDepth_5211_;
v_ref_5234_ = v_ref_5212_;
v_currNamespace_5235_ = v_currNamespace_5213_;
v_openDecls_5236_ = v_openDecls_5214_;
v_initHeartbeats_5237_ = v_initHeartbeats_5215_;
v_maxHeartbeats_5238_ = v_maxHeartbeats_5216_;
v_quotContext_5239_ = v_quotContext_5217_;
v_currMacroScope_5240_ = v_currMacroScope_5218_;
v_cancelTk_x3f_5241_ = v_cancelTk_x3f_5219_;
v_suppressElabErrors_5242_ = v_suppressElabErrors_5220_;
v_inheritedTraceOptions_5243_ = v_inheritedTraceOptions_5221_;
v___y_5244_ = v___y_5205_;
goto v___jp_5230_;
}
else
{
v___y_5252_ = v___x_5273_;
goto v___jp_5251_;
}
}
else
{
v___y_5252_ = v___x_5229_;
goto v___jp_5251_;
}
v___jp_5230_:
{
lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5248_; 
v___x_5245_ = l_Lean_maxRecDepth;
v___x_5246_ = l_Lean_Option_get___at___00Lean_Elab_WF_mkUnfoldEq_spec__5(v___x_5227_, v___x_5245_);
if (v_isShared_5224_ == 0)
{
lean_ctor_set(v___x_5223_, 13, v_inheritedTraceOptions_5243_);
lean_ctor_set(v___x_5223_, 12, v_cancelTk_x3f_5241_);
lean_ctor_set(v___x_5223_, 11, v_currMacroScope_5240_);
lean_ctor_set(v___x_5223_, 10, v_quotContext_5239_);
lean_ctor_set(v___x_5223_, 9, v_maxHeartbeats_5238_);
lean_ctor_set(v___x_5223_, 8, v_initHeartbeats_5237_);
lean_ctor_set(v___x_5223_, 7, v_openDecls_5236_);
lean_ctor_set(v___x_5223_, 6, v_currNamespace_5235_);
lean_ctor_set(v___x_5223_, 5, v_ref_5234_);
lean_ctor_set(v___x_5223_, 4, v___x_5246_);
lean_ctor_set(v___x_5223_, 3, v_currRecDepth_5233_);
lean_ctor_set(v___x_5223_, 2, v___x_5227_);
lean_ctor_set(v___x_5223_, 1, v_fileMap_5232_);
lean_ctor_set(v___x_5223_, 0, v_fileName_5231_);
v___x_5248_ = v___x_5223_;
goto v_reusejp_5247_;
}
else
{
lean_object* v_reuseFailAlloc_5250_; 
v_reuseFailAlloc_5250_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_5250_, 0, v_fileName_5231_);
lean_ctor_set(v_reuseFailAlloc_5250_, 1, v_fileMap_5232_);
lean_ctor_set(v_reuseFailAlloc_5250_, 2, v___x_5227_);
lean_ctor_set(v_reuseFailAlloc_5250_, 3, v_currRecDepth_5233_);
lean_ctor_set(v_reuseFailAlloc_5250_, 4, v___x_5246_);
lean_ctor_set(v_reuseFailAlloc_5250_, 5, v_ref_5234_);
lean_ctor_set(v_reuseFailAlloc_5250_, 6, v_currNamespace_5235_);
lean_ctor_set(v_reuseFailAlloc_5250_, 7, v_openDecls_5236_);
lean_ctor_set(v_reuseFailAlloc_5250_, 8, v_initHeartbeats_5237_);
lean_ctor_set(v_reuseFailAlloc_5250_, 9, v_maxHeartbeats_5238_);
lean_ctor_set(v_reuseFailAlloc_5250_, 10, v_quotContext_5239_);
lean_ctor_set(v_reuseFailAlloc_5250_, 11, v_currMacroScope_5240_);
lean_ctor_set(v_reuseFailAlloc_5250_, 12, v_cancelTk_x3f_5241_);
lean_ctor_set(v_reuseFailAlloc_5250_, 13, v_inheritedTraceOptions_5243_);
v___x_5248_ = v_reuseFailAlloc_5250_;
goto v_reusejp_5247_;
}
v_reusejp_5247_:
{
lean_object* v___x_5249_; 
lean_ctor_set_uint8(v___x_5248_, sizeof(void*)*14, v___x_5229_);
lean_ctor_set_uint8(v___x_5248_, sizeof(void*)*14 + 1, v_suppressElabErrors_5242_);
v___x_5249_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_mkUnfoldEq_spec__2___redArg(v_value_5200_, v___f_5201_, v___x_5199_, v___y_5202_, v___y_5203_, v___x_5248_, v___y_5244_);
return v___x_5249_;
}
}
v___jp_5251_:
{
if (v___y_5252_ == 0)
{
lean_object* v___x_5253_; lean_object* v_env_5254_; lean_object* v_nextMacroScope_5255_; lean_object* v_ngen_5256_; lean_object* v_auxDeclNGen_5257_; lean_object* v_traceState_5258_; lean_object* v_messages_5259_; lean_object* v_infoState_5260_; lean_object* v_snapshotTasks_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5271_; 
v___x_5253_ = lean_st_ref_take(v___y_5205_);
v_env_5254_ = lean_ctor_get(v___x_5253_, 0);
v_nextMacroScope_5255_ = lean_ctor_get(v___x_5253_, 1);
v_ngen_5256_ = lean_ctor_get(v___x_5253_, 2);
v_auxDeclNGen_5257_ = lean_ctor_get(v___x_5253_, 3);
v_traceState_5258_ = lean_ctor_get(v___x_5253_, 4);
v_messages_5259_ = lean_ctor_get(v___x_5253_, 6);
v_infoState_5260_ = lean_ctor_get(v___x_5253_, 7);
v_snapshotTasks_5261_ = lean_ctor_get(v___x_5253_, 8);
v_isSharedCheck_5271_ = !lean_is_exclusive(v___x_5253_);
if (v_isSharedCheck_5271_ == 0)
{
lean_object* v_unused_5272_; 
v_unused_5272_ = lean_ctor_get(v___x_5253_, 5);
lean_dec(v_unused_5272_);
v___x_5263_ = v___x_5253_;
v_isShared_5264_ = v_isSharedCheck_5271_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_snapshotTasks_5261_);
lean_inc(v_infoState_5260_);
lean_inc(v_messages_5259_);
lean_inc(v_traceState_5258_);
lean_inc(v_auxDeclNGen_5257_);
lean_inc(v_ngen_5256_);
lean_inc(v_nextMacroScope_5255_);
lean_inc(v_env_5254_);
lean_dec(v___x_5253_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5271_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5268_; 
v___x_5265_ = l_Lean_Kernel_enableDiag(v_env_5254_, v___x_5229_);
v___x_5266_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_mkUnfoldEq_spec__6_spec__7___redArg___closed__2);
if (v_isShared_5264_ == 0)
{
lean_ctor_set(v___x_5263_, 5, v___x_5266_);
lean_ctor_set(v___x_5263_, 0, v___x_5265_);
v___x_5268_ = v___x_5263_;
goto v_reusejp_5267_;
}
else
{
lean_object* v_reuseFailAlloc_5270_; 
v_reuseFailAlloc_5270_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5270_, 0, v___x_5265_);
lean_ctor_set(v_reuseFailAlloc_5270_, 1, v_nextMacroScope_5255_);
lean_ctor_set(v_reuseFailAlloc_5270_, 2, v_ngen_5256_);
lean_ctor_set(v_reuseFailAlloc_5270_, 3, v_auxDeclNGen_5257_);
lean_ctor_set(v_reuseFailAlloc_5270_, 4, v_traceState_5258_);
lean_ctor_set(v_reuseFailAlloc_5270_, 5, v___x_5266_);
lean_ctor_set(v_reuseFailAlloc_5270_, 6, v_messages_5259_);
lean_ctor_set(v_reuseFailAlloc_5270_, 7, v_infoState_5260_);
lean_ctor_set(v_reuseFailAlloc_5270_, 8, v_snapshotTasks_5261_);
v___x_5268_ = v_reuseFailAlloc_5270_;
goto v_reusejp_5267_;
}
v_reusejp_5267_:
{
lean_object* v___x_5269_; 
v___x_5269_ = lean_st_ref_set(v___y_5205_, v___x_5268_);
v_fileName_5231_ = v_fileName_5208_;
v_fileMap_5232_ = v_fileMap_5209_;
v_currRecDepth_5233_ = v_currRecDepth_5211_;
v_ref_5234_ = v_ref_5212_;
v_currNamespace_5235_ = v_currNamespace_5213_;
v_openDecls_5236_ = v_openDecls_5214_;
v_initHeartbeats_5237_ = v_initHeartbeats_5215_;
v_maxHeartbeats_5238_ = v_maxHeartbeats_5216_;
v_quotContext_5239_ = v_quotContext_5217_;
v_currMacroScope_5240_ = v_currMacroScope_5218_;
v_cancelTk_x3f_5241_ = v_cancelTk_x3f_5219_;
v_suppressElabErrors_5242_ = v_suppressElabErrors_5220_;
v_inheritedTraceOptions_5243_ = v_inheritedTraceOptions_5221_;
v___y_5244_ = v___y_5205_;
goto v___jp_5230_;
}
}
}
else
{
v_fileName_5231_ = v_fileName_5208_;
v_fileMap_5232_ = v_fileMap_5209_;
v_currRecDepth_5233_ = v_currRecDepth_5211_;
v_ref_5234_ = v_ref_5212_;
v_currNamespace_5235_ = v_currNamespace_5213_;
v_openDecls_5236_ = v_openDecls_5214_;
v_initHeartbeats_5237_ = v_initHeartbeats_5215_;
v_maxHeartbeats_5238_ = v_maxHeartbeats_5216_;
v_quotContext_5239_ = v_quotContext_5217_;
v_currMacroScope_5240_ = v_currMacroScope_5218_;
v_cancelTk_x3f_5241_ = v_cancelTk_x3f_5219_;
v_suppressElabErrors_5242_ = v_suppressElabErrors_5220_;
v_inheritedTraceOptions_5243_ = v_inheritedTraceOptions_5221_;
v___y_5244_ = v___y_5205_;
goto v___jp_5230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__2___boxed(lean_object* v___x_5276_, lean_object* v_value_5277_, lean_object* v___f_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_){
_start:
{
uint8_t v___x_4826__boxed_5284_; lean_object* v_res_5285_; 
v___x_4826__boxed_5284_ = lean_unbox(v___x_5276_);
v_res_5285_ = l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__2(v___x_4826__boxed_5284_, v_value_5277_, v___f_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_);
return v_res_5285_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__1(void){
_start:
{
lean_object* v___x_5287_; lean_object* v___x_5288_; 
v___x_5287_ = ((lean_object*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__0));
v___x_5288_ = l_Lean_stringToMessageData(v___x_5287_);
return v___x_5288_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__3(void){
_start:
{
lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5290_ = ((lean_object*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__2));
v___x_5291_ = l_Lean_stringToMessageData(v___x_5290_);
return v___x_5291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object* v_preDef_5292_, lean_object* v_unaryPreDefName_5293_, lean_object* v_a_5294_, lean_object* v_a_5295_, lean_object* v_a_5296_, lean_object* v_a_5297_){
_start:
{
lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v_env_5301_; lean_object* v_levelParams_5302_; lean_object* v_declName_5303_; lean_object* v_value_5304_; lean_object* v_env_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___f_5315_; lean_object* v___x_5316_; lean_object* v___f_5317_; uint8_t v___x_5318_; lean_object* v___x_5319_; lean_object* v___f_5320_; lean_object* v___x_5321_; 
v___x_5299_ = lean_st_ref_get(v_a_5297_);
v___x_5300_ = lean_st_ref_get(v_a_5297_);
v_env_5301_ = lean_ctor_get(v___x_5299_, 0);
lean_inc_ref(v_env_5301_);
lean_dec(v___x_5299_);
v_levelParams_5302_ = lean_ctor_get(v_preDef_5292_, 1);
lean_inc(v_levelParams_5302_);
v_declName_5303_ = lean_ctor_get(v_preDef_5292_, 3);
lean_inc(v_declName_5303_);
v_value_5304_ = lean_ctor_get(v_preDef_5292_, 7);
lean_inc_ref(v_value_5304_);
lean_dec_ref(v_preDef_5292_);
v_env_5305_ = lean_ctor_get(v___x_5300_, 0);
lean_inc_ref(v_env_5305_);
lean_dec(v___x_5300_);
v___x_5306_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_5303_);
v___x_5307_ = l_Lean_Meta_mkEqLikeNameFor(v_env_5301_, v_declName_5303_, v___x_5306_);
v___x_5308_ = l_Lean_Meta_mkEqLikeNameFor(v_env_5305_, v_unaryPreDefName_5293_, v___x_5306_);
v___x_5309_ = lean_obj_once(&l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__1, &l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__1_once, _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__1);
lean_inc(v___x_5307_);
v___x_5310_ = l_Lean_MessageData_ofName(v___x_5307_);
v___x_5311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5311_, 0, v___x_5309_);
lean_ctor_set(v___x_5311_, 1, v___x_5310_);
v___x_5312_ = lean_obj_once(&l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__3, &l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__3_once, _init_l_Lean_Elab_WF_mkBinaryUnfoldEq___closed__3);
v___x_5313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5313_, 0, v___x_5311_);
lean_ctor_set(v___x_5313_, 1, v___x_5312_);
lean_inc(v___x_5308_);
v___x_5314_ = l_Lean_MessageData_ofName(v___x_5308_);
lean_inc_ref(v___x_5314_);
v___f_5315_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__0___boxed), 12, 5);
lean_closure_set(v___f_5315_, 0, v_levelParams_5302_);
lean_closure_set(v___f_5315_, 1, v_declName_5303_);
lean_closure_set(v___f_5315_, 2, v___x_5308_);
lean_closure_set(v___f_5315_, 3, v___x_5307_);
lean_closure_set(v___f_5315_, 4, v___x_5314_);
v___x_5316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5316_, 0, v___x_5313_);
lean_ctor_set(v___x_5316_, 1, v___x_5314_);
v___f_5317_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_mkMatchArgPusher___lam__11), 2, 1);
lean_closure_set(v___f_5317_, 0, v___x_5316_);
v___x_5318_ = 0;
v___x_5319_ = lean_box(v___x_5318_);
v___f_5320_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkBinaryUnfoldEq___lam__2___boxed), 8, 3);
lean_closure_set(v___f_5320_, 0, v___x_5319_);
lean_closure_set(v___f_5320_, 1, v_value_5304_);
lean_closure_set(v___f_5320_, 2, v___f_5315_);
v___x_5321_ = l_Lean_Meta_mapErrorImp___redArg(v___f_5320_, v___f_5317_, v_a_5294_, v_a_5295_, v_a_5296_, v_a_5297_);
if (lean_obj_tag(v___x_5321_) == 0)
{
lean_object* v_a_5322_; lean_object* v___x_5324_; uint8_t v_isShared_5325_; uint8_t v_isSharedCheck_5329_; 
v_a_5322_ = lean_ctor_get(v___x_5321_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5321_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5324_ = v___x_5321_;
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
else
{
lean_inc(v_a_5322_);
lean_dec(v___x_5321_);
v___x_5324_ = lean_box(0);
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
v_resetjp_5323_:
{
lean_object* v___x_5327_; 
if (v_isShared_5325_ == 0)
{
v___x_5327_ = v___x_5324_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v_a_5322_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
else
{
lean_object* v_a_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5337_; 
v_a_5330_ = lean_ctor_get(v___x_5321_, 0);
v_isSharedCheck_5337_ = !lean_is_exclusive(v___x_5321_);
if (v_isSharedCheck_5337_ == 0)
{
v___x_5332_ = v___x_5321_;
v_isShared_5333_ = v_isSharedCheck_5337_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_a_5330_);
lean_dec(v___x_5321_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5337_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5335_; 
if (v_isShared_5333_ == 0)
{
v___x_5335_ = v___x_5332_;
goto v_reusejp_5334_;
}
else
{
lean_object* v_reuseFailAlloc_5336_; 
v_reuseFailAlloc_5336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5336_, 0, v_a_5330_);
v___x_5335_ = v_reuseFailAlloc_5336_;
goto v_reusejp_5334_;
}
v_reusejp_5334_:
{
return v___x_5335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq___boxed(lean_object* v_preDef_5338_, lean_object* v_unaryPreDefName_5339_, lean_object* v_a_5340_, lean_object* v_a_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_, lean_object* v_a_5344_){
_start:
{
lean_object* v_res_5345_; 
v_res_5345_ = l_Lean_Elab_WF_mkBinaryUnfoldEq(v_preDef_5338_, v_unaryPreDefName_5339_, v_a_5340_, v_a_5341_, v_a_5342_, v_a_5343_);
return v_res_5345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5390_; uint8_t v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; 
v___x_5390_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_));
v___x_5391_ = 0;
v___x_5392_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_));
v___x_5393_ = l_Lean_registerTraceClass(v___x_5390_, v___x_5391_, v___x_5392_);
return v___x_5393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2____boxed(lean_object* v_a_5394_){
_start:
{
lean_object* v_res_5395_; 
v_res_5395_ = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_();
return v_res_5395_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_EqnsUtils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_EqnsUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Unfold_0____regBuiltin___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_matcherPushArg_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Unfold_300889135____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Unfold_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Unfold_417821031____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_EqnsUtils(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Init_Simproc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_EqnsUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
}
#ifdef __cplusplus
}
#endif
