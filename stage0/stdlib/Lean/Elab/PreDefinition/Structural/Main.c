// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.Main
// Imports: public import Lean.Elab.PreDefinition.Mutual public import Lean.Elab.PreDefinition.Structural.FindRecArg public import Lean.Elab.PreDefinition.Structural.Preprocess public import Lean.Elab.PreDefinition.Structural.BRecOn public import Lean.Elab.PreDefinition.Structural.IndPred public import Lean.Elab.PreDefinition.Structural.Eqns public import Lean.Elab.PreDefinition.Structural.SmartUnfolding public import Lean.Meta.Tactic.TryThis
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVarOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_mkLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_withEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_TerminationMeasure_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numTypeFormers(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Nat_blt___boxed(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_setDefHeightOverride(lean_object*, lean_object*, uint32_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkIndPredBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkIndPredBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_withFunTypes___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_addNonRec(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_findRecArgCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances___redArg(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_tryCandidates___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_generateEagerEqns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_f"};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__0_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 65, 185, 154, 193, 83, 240, 170)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__1 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__0;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__1 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__2 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__3 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__4 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__4_value;
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__5;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.PreDefinition.Structural.Basic"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Structural.Positions.mapMwith"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: positions.size = ys.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: positions.numIndices = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__5;
static const lean_array_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "packedFArgs: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "FArgs: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FTypes: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "funTypes: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", motives: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__21(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_blt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Elab.Structural.Positions.groupAndSort"};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "assertion violation: Array.range xs.size == positions.flatten.qsort Nat.blt\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__2;
static const lean_array_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_PProdN_mkLambdas___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value;
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "assignments of type formers of "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " to functions: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0_value;
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3_value;
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5;
static lean_once_cell_t l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8_value;
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "its type is an inductive datatype and the datatype parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\ndepends on the function parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 137, .m_capacity = 137, .m_length = 136, .m_data = "\nwhich cannot be fixed as it is an index or depends on an index, and indices cannot be fixed parameters when using structural recursion."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "New recArgInfos "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Reduced fixed params from "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " to "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", erasing "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Trying argument set "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_reportTermMeasure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__2_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "terminationBy"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__3_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__4_value),LEAN_SCALAR_PTR_LITERAL(20, 221, 175, 114, 26, 111, 13, 165)}};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "structural recursion failed, produced type incorrect term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0(lean_object* v_k_1_, lean_object* v_____r_2_){
_start:
{
lean_inc(v_k_1_);
return v_k_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0___boxed(lean_object* v_k_3_, lean_object* v_____r_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0(v_k_3_, v_____r_4_);
lean_dec(v_k_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__1(lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_inst_8_, lean_object* v___x_9_, lean_object* v_____do__lift_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = l_Lean_Environment_unlockAsync(v_____do__lift_10_);
v___x_12_ = l_Lean_withEnv___redArg(v_inst_6_, v_inst_7_, v_inst_8_, v___x_11_, v___x_9_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__2(lean_object* v_inst_13_, lean_object* v_x_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_alloc_closure((void*)(l_Lean_Elab_addAsAxiom___boxed), 6, 1);
lean_closure_set(v___x_16_, 0, v___y_15_);
v___x_17_ = lean_apply_2(v_inst_13_, lean_box(0), v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg(lean_object* v_inst_18_, lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_inst_21_, lean_object* v_preDefs_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_toApplicative_24_; lean_object* v_toBind_25_; lean_object* v___f_26_; lean_object* v___y_28_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_toApplicative_24_ = lean_ctor_get(v_inst_18_, 0);
v_toBind_25_ = lean_ctor_get(v_inst_18_, 1);
lean_inc(v_toBind_25_);
v___f_26_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_26_, 0, v_k_23_);
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = lean_array_get_size(v_preDefs_22_);
v___x_35_ = lean_box(0);
v___x_36_ = lean_nat_dec_lt(v___x_33_, v___x_34_);
if (v___x_36_ == 0)
{
lean_object* v_toPure_37_; lean_object* v___x_38_; 
lean_dec_ref(v_preDefs_22_);
lean_dec(v_inst_19_);
v_toPure_37_ = lean_ctor_get(v_toApplicative_24_, 1);
lean_inc(v_toPure_37_);
v___x_38_ = lean_apply_2(v_toPure_37_, lean_box(0), v___x_35_);
v___y_28_ = v___x_38_;
goto v___jp_27_;
}
else
{
lean_object* v___f_39_; uint8_t v___x_40_; 
v___f_39_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__2), 3, 1);
lean_closure_set(v___f_39_, 0, v_inst_19_);
v___x_40_ = lean_nat_dec_le(v___x_34_, v___x_34_);
if (v___x_40_ == 0)
{
if (v___x_36_ == 0)
{
lean_object* v_toPure_41_; lean_object* v___x_42_; 
lean_dec_ref(v___f_39_);
lean_dec_ref(v_preDefs_22_);
v_toPure_41_ = lean_ctor_get(v_toApplicative_24_, 1);
lean_inc(v_toPure_41_);
v___x_42_ = lean_apply_2(v_toPure_41_, lean_box(0), v___x_35_);
v___y_28_ = v___x_42_;
goto v___jp_27_;
}
else
{
size_t v___x_43_; size_t v___x_44_; lean_object* v___x_45_; 
v___x_43_ = ((size_t)0ULL);
v___x_44_ = lean_usize_of_nat(v___x_34_);
lean_inc_ref(v_inst_18_);
v___x_45_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_18_, v___f_39_, v_preDefs_22_, v___x_43_, v___x_44_, v___x_35_);
v___y_28_ = v___x_45_;
goto v___jp_27_;
}
}
else
{
size_t v___x_46_; size_t v___x_47_; lean_object* v___x_48_; 
v___x_46_ = ((size_t)0ULL);
v___x_47_ = lean_usize_of_nat(v___x_34_);
lean_inc_ref(v_inst_18_);
v___x_48_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_18_, v___f_39_, v_preDefs_22_, v___x_46_, v___x_47_, v___x_35_);
v___y_28_ = v___x_48_;
goto v___jp_27_;
}
}
v___jp_27_:
{
lean_object* v_getEnv_29_; lean_object* v___x_30_; lean_object* v___f_31_; lean_object* v___x_32_; 
v_getEnv_29_ = lean_ctor_get(v_inst_20_, 0);
lean_inc(v_getEnv_29_);
lean_inc(v_toBind_25_);
v___x_30_ = lean_apply_4(v_toBind_25_, lean_box(0), lean_box(0), v___y_28_, v___f_26_);
v___f_31_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__1), 5, 4);
lean_closure_set(v___f_31_, 0, v_inst_18_);
lean_closure_set(v___f_31_, 1, v_inst_21_);
lean_closure_set(v___f_31_, 2, v_inst_20_);
lean_closure_set(v___f_31_, 3, v___x_30_);
v___x_32_ = lean_apply_4(v_toBind_25_, lean_box(0), lean_box(0), v_getEnv_29_, v___f_31_);
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms(lean_object* v_n_49_, lean_object* v_00_u03b1_50_, lean_object* v_inst_51_, lean_object* v_inst_52_, lean_object* v_inst_53_, lean_object* v_inst_54_, lean_object* v_preDefs_55_, lean_object* v_k_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg(v_inst_51_, v_inst_52_, v_inst_53_, v_inst_54_, v_preDefs_55_, v_k_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(lean_object* v_k_58_, lean_object* v_b_59_, lean_object* v_c_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
lean_inc(v___y_64_);
lean_inc_ref(v___y_63_);
lean_inc(v___y_62_);
lean_inc_ref(v___y_61_);
v___x_66_ = lean_apply_7(v_k_58_, v_b_59_, v_c_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, lean_box(0));
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed(lean_object* v_k_67_, lean_object* v_b_68_, lean_object* v_c_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(v_k_67_, v_b_68_, v_c_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(lean_object* v_e_76_, lean_object* v_k_77_, uint8_t v_cleanupAnnotations_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___f_84_; uint8_t v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_84_, 0, v_k_77_);
v___x_85_ = 1;
v___x_86_ = 0;
v___x_87_ = lean_box(0);
v___x_88_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_76_, v___x_85_, v___x_86_, v___x_85_, v___x_86_, v___x_87_, v___f_84_, v_cleanupAnnotations_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
v_a_97_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_88_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_88_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___boxed(lean_object* v_e_105_, lean_object* v_k_106_, lean_object* v_cleanupAnnotations_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_113_; lean_object* v_res_114_; 
v_cleanupAnnotations_boxed_113_ = lean_unbox(v_cleanupAnnotations_107_);
v_res_114_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_e_105_, v_k_106_, v_cleanupAnnotations_boxed_113_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1(lean_object* v_00_u03b1_115_, lean_object* v_e_116_, lean_object* v_k_117_, uint8_t v_cleanupAnnotations_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_e_116_, v_k_117_, v_cleanupAnnotations_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___boxed(lean_object* v_00_u03b1_125_, lean_object* v_e_126_, lean_object* v_k_127_, lean_object* v_cleanupAnnotations_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_134_; lean_object* v_res_135_; 
v_cleanupAnnotations_boxed_134_ = lean_unbox(v_cleanupAnnotations_128_);
v_res_135_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1(v_00_u03b1_125_, v_e_126_, v_k_127_, v_cleanupAnnotations_boxed_134_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(lean_object* v_cls_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_options_142_; uint8_t v_hasTrace_143_; 
v_options_142_ = lean_ctor_get(v___y_140_, 2);
v_hasTrace_143_ = lean_ctor_get_uint8(v_options_142_, sizeof(void*)*1);
if (v_hasTrace_143_ == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_dec(v_cls_139_);
v___x_144_ = lean_box(v_hasTrace_143_);
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
else
{
lean_object* v_inheritedTraceOptions_146_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_inheritedTraceOptions_146_ = lean_ctor_get(v___y_140_, 13);
v___x_147_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___closed__1));
v___x_148_ = l_Lean_Name_append(v___x_147_, v_cls_139_);
v___x_149_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_146_, v_options_142_, v___x_148_);
lean_dec(v___x_148_);
v___x_150_ = lean_box(v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg___boxed(lean_object* v_cls_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v_cls_152_, v___y_153_);
lean_dec_ref(v___y_153_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(lean_object* v_cls_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v_cls_156_, v___y_159_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___boxed(lean_object* v_cls_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(v_cls_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0(lean_object* v_x_170_){
_start:
{
lean_object* v_indIdx_171_; 
v_indIdx_171_ = lean_ctor_get(v_x_170_, 5);
lean_inc(v_indIdx_171_);
return v_indIdx_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0___boxed(lean_object* v_x_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0(v_x_172_);
lean_dec_ref(v_x_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__1(lean_object* v___x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_174_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__1___boxed(lean_object* v___x_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__1(v___x_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___redArg(lean_object* v_as_188_, size_t v_i_189_, size_t v_stop_190_, lean_object* v_b_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
uint8_t v___x_195_; 
v___x_195_ = lean_usize_dec_eq(v_i_189_, v_stop_190_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_array_uget_borrowed(v_as_188_, v_i_189_);
v___x_197_ = l_Lean_Elab_addAsAxiom___redArg(v___x_196_, v___y_192_, v___y_193_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; size_t v___x_199_; size_t v___x_200_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref(v___x_197_);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_add(v_i_189_, v___x_199_);
v_i_189_ = v___x_200_;
v_b_191_ = v_a_198_;
goto _start;
}
else
{
return v___x_197_;
}
}
else
{
lean_object* v___x_202_; 
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v_b_191_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___redArg___boxed(lean_object* v_as_203_, lean_object* v_i_204_, lean_object* v_stop_205_, lean_object* v_b_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
size_t v_i_boxed_210_; size_t v_stop_boxed_211_; lean_object* v_res_212_; 
v_i_boxed_210_ = lean_unbox_usize(v_i_204_);
lean_dec(v_i_204_);
v_stop_boxed_211_ = lean_unbox_usize(v_stop_205_);
lean_dec(v_stop_205_);
v_res_212_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___redArg(v_as_203_, v_i_boxed_210_, v_stop_boxed_211_, v_b_206_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec_ref(v_as_203_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25(lean_object* v_as_213_, size_t v_i_214_, size_t v_stop_215_, lean_object* v_b_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___redArg(v_as_213_, v_i_214_, v_stop_215_, v_b_216_, v___y_219_, v___y_220_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___boxed(lean_object* v_as_223_, lean_object* v_i_224_, lean_object* v_stop_225_, lean_object* v_b_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
size_t v_i_boxed_232_; size_t v_stop_boxed_233_; lean_object* v_res_234_; 
v_i_boxed_232_ = lean_unbox_usize(v_i_224_);
lean_dec(v_i_224_);
v_stop_boxed_233_ = lean_unbox_usize(v_stop_225_);
lean_dec(v_stop_225_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25(v_as_223_, v_i_boxed_232_, v_stop_boxed_233_, v_b_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec_ref(v_as_223_);
return v_res_234_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__0(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_235_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__0);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__1);
v___x_241_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
lean_ctor_set(v___x_241_, 2, v___x_240_);
lean_ctor_set(v___x_241_, 3, v___x_240_);
lean_ctor_set(v___x_241_, 4, v___x_240_);
lean_ctor_set(v___x_241_, 5, v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(lean_object* v_env_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
lean_object* v___x_246_; lean_object* v_nextMacroScope_247_; lean_object* v_ngen_248_; lean_object* v_auxDeclNGen_249_; lean_object* v_traceState_250_; lean_object* v_messages_251_; lean_object* v_infoState_252_; lean_object* v_snapshotTasks_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_279_; 
v___x_246_ = lean_st_ref_take(v___y_244_);
v_nextMacroScope_247_ = lean_ctor_get(v___x_246_, 1);
v_ngen_248_ = lean_ctor_get(v___x_246_, 2);
v_auxDeclNGen_249_ = lean_ctor_get(v___x_246_, 3);
v_traceState_250_ = lean_ctor_get(v___x_246_, 4);
v_messages_251_ = lean_ctor_get(v___x_246_, 6);
v_infoState_252_ = lean_ctor_get(v___x_246_, 7);
v_snapshotTasks_253_ = lean_ctor_get(v___x_246_, 8);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_279_ == 0)
{
lean_object* v_unused_280_; lean_object* v_unused_281_; 
v_unused_280_ = lean_ctor_get(v___x_246_, 5);
lean_dec(v_unused_280_);
v_unused_281_ = lean_ctor_get(v___x_246_, 0);
lean_dec(v_unused_281_);
v___x_255_ = v___x_246_;
v_isShared_256_ = v_isSharedCheck_279_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_snapshotTasks_253_);
lean_inc(v_infoState_252_);
lean_inc(v_messages_251_);
lean_inc(v_traceState_250_);
lean_inc(v_auxDeclNGen_249_);
lean_inc(v_ngen_248_);
lean_inc(v_nextMacroScope_247_);
lean_dec(v___x_246_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_279_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_257_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 5, v___x_257_);
lean_ctor_set(v___x_255_, 0, v_env_242_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_env_242_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_nextMacroScope_247_);
lean_ctor_set(v_reuseFailAlloc_278_, 2, v_ngen_248_);
lean_ctor_set(v_reuseFailAlloc_278_, 3, v_auxDeclNGen_249_);
lean_ctor_set(v_reuseFailAlloc_278_, 4, v_traceState_250_);
lean_ctor_set(v_reuseFailAlloc_278_, 5, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_278_, 6, v_messages_251_);
lean_ctor_set(v_reuseFailAlloc_278_, 7, v_infoState_252_);
lean_ctor_set(v_reuseFailAlloc_278_, 8, v_snapshotTasks_253_);
v___x_259_ = v_reuseFailAlloc_278_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v_mctx_262_; lean_object* v_zetaDeltaFVarIds_263_; lean_object* v_postponed_264_; lean_object* v_diag_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_276_; 
v___x_260_ = lean_st_ref_set(v___y_244_, v___x_259_);
v___x_261_ = lean_st_ref_take(v___y_243_);
v_mctx_262_ = lean_ctor_get(v___x_261_, 0);
v_zetaDeltaFVarIds_263_ = lean_ctor_get(v___x_261_, 2);
v_postponed_264_ = lean_ctor_get(v___x_261_, 3);
v_diag_265_ = lean_ctor_get(v___x_261_, 4);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; 
v_unused_277_ = lean_ctor_get(v___x_261_, 1);
lean_dec(v_unused_277_);
v___x_267_ = v___x_261_;
v_isShared_268_ = v_isSharedCheck_276_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_diag_265_);
lean_inc(v_postponed_264_);
lean_inc(v_zetaDeltaFVarIds_263_);
lean_inc(v_mctx_262_);
lean_dec(v___x_261_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_276_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_269_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v___x_269_);
v___x_271_ = v___x_267_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_mctx_262_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_275_, 2, v_zetaDeltaFVarIds_263_);
lean_ctor_set(v_reuseFailAlloc_275_, 3, v_postponed_264_);
lean_ctor_set(v_reuseFailAlloc_275_, 4, v_diag_265_);
v___x_271_ = v_reuseFailAlloc_275_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_st_ref_set(v___y_243_, v___x_271_);
v___x_273_ = lean_box(0);
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___boxed(lean_object* v_env_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(v_env_282_, v___y_283_, v___y_284_);
lean_dec(v___y_284_);
lean_dec(v___y_283_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg(lean_object* v_env_287_, lean_object* v_x_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; lean_object* v_env_295_; lean_object* v_a_297_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_294_ = lean_st_ref_get(v___y_292_);
v_env_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc_ref(v_env_295_);
lean_dec(v___x_294_);
v___x_307_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(v_env_287_, v___y_290_, v___y_292_);
lean_dec_ref(v___x_307_);
lean_inc(v___y_292_);
lean_inc_ref(v___y_291_);
lean_inc(v___y_290_);
lean_inc_ref(v___y_289_);
v___x_308_ = lean_apply_5(v_x_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, lean_box(0));
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref(v___x_308_);
v___x_310_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(v_env_295_, v___y_290_, v___y_292_);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; 
v_unused_318_ = lean_ctor_get(v___x_310_, 0);
lean_dec(v_unused_318_);
v___x_312_ = v___x_310_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_dec(v___x_310_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v_a_309_);
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_309_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
else
{
lean_object* v_a_319_; 
v_a_319_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_319_);
lean_dec_ref(v___x_308_);
v_a_297_ = v_a_319_;
goto v___jp_296_;
}
v___jp_296_:
{
lean_object* v___x_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
v___x_298_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(v_env_295_, v___y_290_, v___y_292_);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v___x_298_, 0);
lean_dec(v_unused_306_);
v___x_300_ = v___x_298_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_dec(v___x_298_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set_tag(v___x_300_, 1);
lean_ctor_set(v___x_300_, 0, v_a_297_);
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_297_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg___boxed(lean_object* v_env_320_, lean_object* v_x_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg(v_env_320_, v_x_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__0(lean_object* v___y_328_, lean_object* v_k_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
lean_object* v___x_335_; 
lean_inc(v___y_333_);
lean_inc_ref(v___y_332_);
lean_inc(v___y_331_);
lean_inc_ref(v___y_330_);
v___x_335_ = lean_apply_5(v___y_328_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, lean_box(0));
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v___x_336_; 
lean_dec_ref(v___x_335_);
v___x_336_ = lean_apply_5(v_k_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, lean_box(0));
return v___x_336_;
}
else
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec_ref(v_k_329_);
v_a_337_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_335_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_335_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__0___boxed(lean_object* v___y_345_, lean_object* v_k_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__0(v___y_345_, v_k_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(lean_object* v_preDefs_357_, lean_object* v_k_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v___y_365_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_371_ = lean_unsigned_to_nat(0u);
v___x_372_ = lean_array_get_size(v_preDefs_357_);
v___x_373_ = lean_box(0);
v___x_374_ = lean_nat_dec_lt(v___x_371_, v___x_372_);
if (v___x_374_ == 0)
{
lean_object* v___f_375_; 
lean_dec_ref(v_preDefs_357_);
v___f_375_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___closed__0));
v___y_365_ = v___f_375_;
goto v___jp_364_;
}
else
{
uint8_t v___x_376_; 
v___x_376_ = lean_nat_dec_le(v___x_372_, v___x_372_);
if (v___x_376_ == 0)
{
if (v___x_374_ == 0)
{
lean_object* v___f_377_; 
lean_dec_ref(v_preDefs_357_);
v___f_377_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___closed__0));
v___y_365_ = v___f_377_;
goto v___jp_364_;
}
else
{
size_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_378_ = lean_usize_of_nat(v___x_372_);
v___x_379_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1));
v___x_380_ = lean_box_usize(v___x_378_);
v___x_381_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___boxed), 9, 4);
lean_closure_set(v___x_381_, 0, v_preDefs_357_);
lean_closure_set(v___x_381_, 1, v___x_379_);
lean_closure_set(v___x_381_, 2, v___x_380_);
lean_closure_set(v___x_381_, 3, v___x_373_);
v___y_365_ = v___x_381_;
goto v___jp_364_;
}
}
else
{
size_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_382_ = lean_usize_of_nat(v___x_372_);
v___x_383_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1));
v___x_384_ = lean_box_usize(v___x_382_);
v___x_385_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__25___boxed), 9, 4);
lean_closure_set(v___x_385_, 0, v_preDefs_357_);
lean_closure_set(v___x_385_, 1, v___x_383_);
lean_closure_set(v___x_385_, 2, v___x_384_);
lean_closure_set(v___x_385_, 3, v___x_373_);
v___y_365_ = v___x_385_;
goto v___jp_364_;
}
}
v___jp_364_:
{
lean_object* v___x_366_; lean_object* v_env_367_; lean_object* v___f_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_366_ = lean_st_ref_get(v___y_362_);
v_env_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc_ref(v_env_367_);
lean_dec(v___x_366_);
v___f_368_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_368_, 0, v___y_365_);
lean_closure_set(v___f_368_, 1, v_k_358_);
v___x_369_ = l_Lean_Environment_unlockAsync(v_env_367_);
v___x_370_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg(v___x_369_, v___f_368_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed(lean_object* v_preDefs_386_, lean_object* v_k_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_preDefs_386_, v_k_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(lean_object* v_as_394_, size_t v_i_395_, size_t v_stop_396_, lean_object* v_b_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
uint8_t v___x_403_; 
v___x_403_ = lean_usize_dec_eq(v_i_395_, v_stop_396_);
if (v___x_403_ == 0)
{
lean_object* v___x_21134__overap_404_; lean_object* v___x_405_; 
v___x_21134__overap_404_ = lean_array_uget_borrowed(v_as_394_, v_i_395_);
lean_inc(v___x_21134__overap_404_);
lean_inc(v___y_401_);
lean_inc_ref(v___y_400_);
lean_inc(v___y_399_);
lean_inc_ref(v___y_398_);
v___x_405_ = lean_apply_5(v___x_21134__overap_404_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, lean_box(0));
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; size_t v___x_407_; size_t v___x_408_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref(v___x_405_);
v___x_407_ = ((size_t)1ULL);
v___x_408_ = lean_usize_add(v_i_395_, v___x_407_);
v_i_395_ = v___x_408_;
v_b_397_ = v_a_406_;
goto _start;
}
else
{
return v___x_405_;
}
}
else
{
lean_object* v___x_410_; 
v___x_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_410_, 0, v_b_397_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___boxed(lean_object* v_as_411_, lean_object* v_i_412_, lean_object* v_stop_413_, lean_object* v_b_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
size_t v_i_boxed_420_; size_t v_stop_boxed_421_; lean_object* v_res_422_; 
v_i_boxed_420_ = lean_unbox_usize(v_i_412_);
lean_dec(v_i_412_);
v_stop_boxed_421_ = lean_unbox_usize(v_stop_413_);
lean_dec(v_stop_413_);
v_res_422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v_as_411_, v_i_boxed_420_, v_stop_boxed_421_, v_b_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec_ref(v_as_411_);
return v_res_422_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_423_; lean_object* v_dummy_424_; 
v___x_423_ = lean_box(0);
v_dummy_424_ = l_Lean_Expr_sort___override(v___x_423_);
return v_dummy_424_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg(uint8_t v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_recArgInfos_428_, lean_object* v___x_429_, lean_object* v_preDefs_430_, lean_object* v_a_431_, lean_object* v_as_432_, lean_object* v_i_433_, lean_object* v_j_434_, lean_object* v_bs_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_zero_441_; uint8_t v_isZero_442_; 
v_zero_441_ = lean_unsigned_to_nat(0u);
v_isZero_442_ = lean_nat_dec_eq(v_i_433_, v_zero_441_);
if (v_isZero_442_ == 1)
{
lean_object* v___x_443_; 
lean_dec(v_j_434_);
lean_dec(v_i_433_);
lean_dec_ref(v_a_431_);
lean_dec_ref(v_preDefs_430_);
lean_dec_ref(v___x_429_);
lean_dec_ref(v_recArgInfos_428_);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v_bs_435_);
return v___x_443_;
}
else
{
lean_object* v___x_444_; lean_object* v_one_445_; lean_object* v_n_446_; lean_object* v_a_448_; lean_object* v___x_452_; 
v___x_444_ = l_Lean_instInhabitedExpr;
v_one_445_ = lean_unsigned_to_nat(1u);
v_n_446_ = lean_nat_sub(v_i_433_, v_one_445_);
lean_dec(v_i_433_);
v___x_452_ = lean_array_fget_borrowed(v_as_432_, v_j_434_);
if (v_a_425_ == 0)
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_453_ = lean_array_get_borrowed(v___x_444_, v_a_426_, v_j_434_);
v___x_454_ = lean_array_get_borrowed(v___x_444_, v_a_427_, v_j_434_);
lean_inc(v___x_454_);
lean_inc(v___x_453_);
lean_inc(v___x_452_);
lean_inc_ref(v___x_429_);
lean_inc_ref(v_recArgInfos_428_);
v___x_455_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___boxed), 10, 5);
lean_closure_set(v___x_455_, 0, v_recArgInfos_428_);
lean_closure_set(v___x_455_, 1, v___x_429_);
lean_closure_set(v___x_455_, 2, v___x_452_);
lean_closure_set(v___x_455_, 3, v___x_453_);
lean_closure_set(v___x_455_, 4, v___x_454_);
lean_inc_ref(v_preDefs_430_);
v___x_456_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_preDefs_430_, v___x_455_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref(v___x_456_);
v_a_448_ = v_a_457_;
goto v___jp_447_;
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec(v_n_446_);
lean_dec_ref(v_bs_435_);
lean_dec(v_j_434_);
lean_dec_ref(v_a_431_);
lean_dec_ref(v_preDefs_430_);
lean_dec_ref(v___x_429_);
lean_dec_ref(v_recArgInfos_428_);
v_a_458_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_456_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_456_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v_dummy_469_; lean_object* v_nargs_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_466_ = lean_array_get_borrowed(v___x_444_, v_a_426_, v_j_434_);
v___x_467_ = lean_array_get_borrowed(v___x_444_, v_a_427_, v_j_434_);
lean_inc_ref(v_a_431_);
v___x_468_ = lean_apply_1(v_a_431_, v_zero_441_);
v_dummy_469_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___closed__0);
v_nargs_470_ = l_Lean_Expr_getAppNumArgs(v___x_468_);
lean_inc(v_nargs_470_);
v___x_471_ = lean_mk_array(v_nargs_470_, v_dummy_469_);
v___x_472_ = lean_nat_sub(v_nargs_470_, v_one_445_);
lean_dec(v_nargs_470_);
v___x_473_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_468_, v___x_471_, v___x_472_);
lean_inc(v___x_467_);
lean_inc(v___x_466_);
lean_inc(v___x_452_);
lean_inc_ref(v___x_429_);
lean_inc_ref(v_recArgInfos_428_);
v___x_474_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkIndPredBRecOnF___boxed), 11, 6);
lean_closure_set(v___x_474_, 0, v_recArgInfos_428_);
lean_closure_set(v___x_474_, 1, v___x_429_);
lean_closure_set(v___x_474_, 2, v___x_452_);
lean_closure_set(v___x_474_, 3, v___x_466_);
lean_closure_set(v___x_474_, 4, v___x_467_);
lean_closure_set(v___x_474_, 5, v___x_473_);
lean_inc_ref(v_preDefs_430_);
v___x_475_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_preDefs_430_, v___x_474_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v_fst_477_; lean_object* v_snd_478_; lean_object* v___y_480_; lean_object* v___x_489_; uint8_t v___x_490_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref(v___x_475_);
v_fst_477_ = lean_ctor_get(v_a_476_, 0);
lean_inc(v_fst_477_);
v_snd_478_ = lean_ctor_get(v_a_476_, 1);
lean_inc(v_snd_478_);
lean_dec(v_a_476_);
v___x_489_ = lean_array_get_size(v_snd_478_);
v___x_490_ = lean_nat_dec_lt(v_zero_441_, v___x_489_);
if (v___x_490_ == 0)
{
lean_dec(v_snd_478_);
v_a_448_ = v_fst_477_;
goto v___jp_447_;
}
else
{
lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_491_ = lean_box(0);
v___x_492_ = lean_nat_dec_le(v___x_489_, v___x_489_);
if (v___x_492_ == 0)
{
if (v___x_490_ == 0)
{
lean_dec(v_snd_478_);
v_a_448_ = v_fst_477_;
goto v___jp_447_;
}
else
{
size_t v___x_493_; size_t v___x_494_; lean_object* v___x_495_; 
v___x_493_ = ((size_t)0ULL);
v___x_494_ = lean_usize_of_nat(v___x_489_);
v___x_495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v_snd_478_, v___x_493_, v___x_494_, v___x_491_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec(v_snd_478_);
v___y_480_ = v___x_495_;
goto v___jp_479_;
}
}
else
{
size_t v___x_496_; size_t v___x_497_; lean_object* v___x_498_; 
v___x_496_ = ((size_t)0ULL);
v___x_497_ = lean_usize_of_nat(v___x_489_);
v___x_498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v_snd_478_, v___x_496_, v___x_497_, v___x_491_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec(v_snd_478_);
v___y_480_ = v___x_498_;
goto v___jp_479_;
}
}
v___jp_479_:
{
if (lean_obj_tag(v___y_480_) == 0)
{
lean_dec_ref(v___y_480_);
v_a_448_ = v_fst_477_;
goto v___jp_447_;
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_dec(v_fst_477_);
lean_dec(v_n_446_);
lean_dec_ref(v_bs_435_);
lean_dec(v_j_434_);
lean_dec_ref(v_a_431_);
lean_dec_ref(v_preDefs_430_);
lean_dec_ref(v___x_429_);
lean_dec_ref(v_recArgInfos_428_);
v_a_481_ = lean_ctor_get(v___y_480_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___y_480_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___y_480_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___y_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec(v_n_446_);
lean_dec_ref(v_bs_435_);
lean_dec(v_j_434_);
lean_dec_ref(v_a_431_);
lean_dec_ref(v_preDefs_430_);
lean_dec_ref(v___x_429_);
lean_dec_ref(v_recArgInfos_428_);
v_a_499_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_475_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_475_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
v___jp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_nat_add(v_j_434_, v_one_445_);
lean_dec(v_j_434_);
v___x_450_ = lean_array_push(v_bs_435_, v_a_448_);
v_i_433_ = v_n_446_;
v_j_434_ = v___x_449_;
v_bs_435_ = v___x_450_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg___boxed(lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_recArgInfos_510_, lean_object* v___x_511_, lean_object* v_preDefs_512_, lean_object* v_a_513_, lean_object* v_as_514_, lean_object* v_i_515_, lean_object* v_j_516_, lean_object* v_bs_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
uint8_t v_a_26881__boxed_523_; lean_object* v_res_524_; 
v_a_26881__boxed_523_ = lean_unbox(v_a_507_);
v_res_524_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg(v_a_26881__boxed_523_, v_a_508_, v_a_509_, v_recArgInfos_510_, v___x_511_, v_preDefs_512_, v_a_513_, v_as_514_, v_i_515_, v_j_516_, v_bs_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec_ref(v_as_514_);
lean_dec_ref(v_a_509_);
lean_dec_ref(v_a_508_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg(lean_object* v_declName_525_, uint8_t v_s_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v___x_530_; lean_object* v_env_531_; lean_object* v_nextMacroScope_532_; lean_object* v_ngen_533_; lean_object* v_auxDeclNGen_534_; lean_object* v_traceState_535_; lean_object* v_messages_536_; lean_object* v_infoState_537_; lean_object* v_snapshotTasks_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_567_; 
v___x_530_ = lean_st_ref_take(v___y_528_);
v_env_531_ = lean_ctor_get(v___x_530_, 0);
v_nextMacroScope_532_ = lean_ctor_get(v___x_530_, 1);
v_ngen_533_ = lean_ctor_get(v___x_530_, 2);
v_auxDeclNGen_534_ = lean_ctor_get(v___x_530_, 3);
v_traceState_535_ = lean_ctor_get(v___x_530_, 4);
v_messages_536_ = lean_ctor_get(v___x_530_, 6);
v_infoState_537_ = lean_ctor_get(v___x_530_, 7);
v_snapshotTasks_538_ = lean_ctor_get(v___x_530_, 8);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_567_ == 0)
{
lean_object* v_unused_568_; 
v_unused_568_ = lean_ctor_get(v___x_530_, 5);
lean_dec(v_unused_568_);
v___x_540_ = v___x_530_;
v_isShared_541_ = v_isSharedCheck_567_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_snapshotTasks_538_);
lean_inc(v_infoState_537_);
lean_inc(v_messages_536_);
lean_inc(v_traceState_535_);
lean_inc(v_auxDeclNGen_534_);
lean_inc(v_ngen_533_);
lean_inc(v_nextMacroScope_532_);
lean_inc(v_env_531_);
lean_dec(v___x_530_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_567_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
uint8_t v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_542_ = 0;
v___x_543_ = lean_box(0);
v___x_544_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_531_, v_declName_525_, v_s_526_, v___x_542_, v___x_543_);
v___x_545_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 5, v___x_545_);
lean_ctor_set(v___x_540_, 0, v___x_544_);
v___x_547_ = v___x_540_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_544_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_nextMacroScope_532_);
lean_ctor_set(v_reuseFailAlloc_566_, 2, v_ngen_533_);
lean_ctor_set(v_reuseFailAlloc_566_, 3, v_auxDeclNGen_534_);
lean_ctor_set(v_reuseFailAlloc_566_, 4, v_traceState_535_);
lean_ctor_set(v_reuseFailAlloc_566_, 5, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_566_, 6, v_messages_536_);
lean_ctor_set(v_reuseFailAlloc_566_, 7, v_infoState_537_);
lean_ctor_set(v_reuseFailAlloc_566_, 8, v_snapshotTasks_538_);
v___x_547_ = v_reuseFailAlloc_566_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v_mctx_550_; lean_object* v_zetaDeltaFVarIds_551_; lean_object* v_postponed_552_; lean_object* v_diag_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_564_; 
v___x_548_ = lean_st_ref_set(v___y_528_, v___x_547_);
v___x_549_ = lean_st_ref_take(v___y_527_);
v_mctx_550_ = lean_ctor_get(v___x_549_, 0);
v_zetaDeltaFVarIds_551_ = lean_ctor_get(v___x_549_, 2);
v_postponed_552_ = lean_ctor_get(v___x_549_, 3);
v_diag_553_ = lean_ctor_get(v___x_549_, 4);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; 
v_unused_565_ = lean_ctor_get(v___x_549_, 1);
lean_dec(v_unused_565_);
v___x_555_ = v___x_549_;
v_isShared_556_ = v_isSharedCheck_564_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_diag_553_);
lean_inc(v_postponed_552_);
lean_inc(v_zetaDeltaFVarIds_551_);
lean_inc(v_mctx_550_);
lean_dec(v___x_549_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_564_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_557_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 1, v___x_557_);
v___x_559_ = v___x_555_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_mctx_550_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_zetaDeltaFVarIds_551_);
lean_ctor_set(v_reuseFailAlloc_563_, 3, v_postponed_552_);
lean_ctor_set(v_reuseFailAlloc_563_, 4, v_diag_553_);
v___x_559_ = v_reuseFailAlloc_563_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = lean_st_ref_set(v___y_527_, v___x_559_);
v___x_561_ = lean_box(0);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg___boxed(lean_object* v_declName_569_, lean_object* v_s_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
uint8_t v_s_boxed_574_; lean_object* v_res_575_; 
v_s_boxed_574_ = lean_unbox(v_s_570_);
v_res_575_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg(v_declName_569_, v_s_boxed_574_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec(v___y_571_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(lean_object* v_declName_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
uint8_t v___x_582_; lean_object* v___x_583_; 
v___x_582_ = 0;
v___x_583_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg(v_declName_576_, v___x_582_, v___y_578_, v___y_580_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed(lean_object* v_declName_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(v_declName_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(lean_object* v_xs_594_, uint8_t v_a_595_, lean_object* v_preDefs_596_, lean_object* v___x_597_, lean_object* v_as_598_, lean_object* v_i_599_, lean_object* v_j_600_, lean_object* v_bs_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_zero_607_; uint8_t v_isZero_608_; 
v_zero_607_ = lean_unsigned_to_nat(0u);
v_isZero_608_ = lean_nat_dec_eq(v_i_599_, v_zero_607_);
if (v_isZero_608_ == 1)
{
lean_object* v___x_609_; 
lean_dec(v_j_600_);
lean_dec(v_i_599_);
lean_dec(v___x_597_);
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v_bs_601_);
return v___x_609_;
}
else
{
uint8_t v___x_610_; lean_object* v_one_611_; lean_object* v_n_612_; lean_object* v_a_614_; lean_object* v___y_619_; lean_object* v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; 
v___x_610_ = 1;
v_one_611_ = lean_unsigned_to_nat(1u);
v_n_612_ = lean_nat_sub(v_i_599_, v_one_611_);
lean_dec(v_i_599_);
v___x_629_ = lean_array_fget_borrowed(v_as_598_, v_j_600_);
v___x_630_ = 1;
lean_inc(v___x_629_);
v___x_631_ = l_Lean_Meta_mkLambdaFVars(v_xs_594_, v___x_629_, v_a_595_, v___x_610_, v_a_595_, v___x_610_, v___x_630_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref(v___x_631_);
v___x_633_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_632_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref(v___x_633_);
lean_inc(v___y_605_);
lean_inc_ref(v___y_604_);
lean_inc(v___y_603_);
lean_inc_ref(v___y_602_);
lean_inc(v_a_634_);
v___x_635_ = lean_infer_type(v_a_634_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_637_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref(v___x_635_);
v___x_637_ = l_Lean_Meta_letToHave(v_a_636_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_712_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_712_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_712_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_712_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_modifiers_645_; lean_object* v_levelParams_646_; lean_object* v_declName_647_; lean_object* v_env_648_; uint8_t v_isUnsafe_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint32_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___y_656_; 
v___x_642_ = lean_st_ref_get(v___y_605_);
v___x_643_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_644_ = lean_array_get_borrowed(v___x_643_, v_preDefs_596_, v_j_600_);
v_modifiers_645_ = lean_ctor_get(v___x_644_, 2);
v_levelParams_646_ = lean_ctor_get(v___x_644_, 1);
v_declName_647_ = lean_ctor_get(v___x_644_, 3);
v_env_648_ = lean_ctor_get(v___x_642_, 0);
lean_inc_ref(v_env_648_);
lean_dec(v___x_642_);
v_isUnsafe_649_ = lean_ctor_get_uint8(v_modifiers_645_, sizeof(void*)*3 + 4);
v___x_650_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___closed__1));
lean_inc(v_declName_647_);
v___x_651_ = l_Lean_Name_append(v_declName_647_, v___x_650_);
lean_inc(v_a_634_);
v___x_652_ = l_Lean_getMaxHeight(v_env_648_, v_a_634_);
lean_inc(v_levelParams_646_);
lean_inc(v___x_651_);
v___x_653_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v_levelParams_646_);
lean_ctor_set(v___x_653_, 2, v_a_638_);
v___x_654_ = lean_box(1);
if (v_isUnsafe_649_ == 0)
{
uint8_t v___x_710_; 
v___x_710_ = 1;
v___y_656_ = v___x_710_;
goto v___jp_655_;
}
else
{
uint8_t v___x_711_; 
v___x_711_ = 0;
v___y_656_ = v___x_711_;
goto v___jp_655_;
}
v___jp_655_:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_657_ = lean_box(0);
lean_inc(v___x_651_);
v___x_658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_651_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_659_, 0, v___x_653_);
lean_ctor_set(v___x_659_, 1, v_a_634_);
lean_ctor_set(v___x_659_, 2, v___x_654_);
lean_ctor_set(v___x_659_, 3, v___x_658_);
lean_ctor_set_uint8(v___x_659_, sizeof(void*)*4, v___y_656_);
if (v_isShared_641_ == 0)
{
lean_ctor_set_tag(v___x_640_, 1);
lean_ctor_set(v___x_640_, 0, v___x_659_);
v___x_661_ = v___x_640_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_709_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_addDecl(v___x_661_, v_a_595_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v___x_663_; lean_object* v_env_664_; lean_object* v_nextMacroScope_665_; lean_object* v_ngen_666_; lean_object* v_auxDeclNGen_667_; lean_object* v_traceState_668_; lean_object* v_messages_669_; lean_object* v_infoState_670_; lean_object* v_snapshotTasks_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_699_; 
lean_dec_ref(v___x_662_);
v___x_663_ = lean_st_ref_take(v___y_605_);
v_env_664_ = lean_ctor_get(v___x_663_, 0);
v_nextMacroScope_665_ = lean_ctor_get(v___x_663_, 1);
v_ngen_666_ = lean_ctor_get(v___x_663_, 2);
v_auxDeclNGen_667_ = lean_ctor_get(v___x_663_, 3);
v_traceState_668_ = lean_ctor_get(v___x_663_, 4);
v_messages_669_ = lean_ctor_get(v___x_663_, 6);
v_infoState_670_ = lean_ctor_get(v___x_663_, 7);
v_snapshotTasks_671_ = lean_ctor_get(v___x_663_, 8);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; 
v_unused_700_ = lean_ctor_get(v___x_663_, 5);
lean_dec(v_unused_700_);
v___x_673_ = v___x_663_;
v_isShared_674_ = v_isSharedCheck_699_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_snapshotTasks_671_);
lean_inc(v_infoState_670_);
lean_inc(v_messages_669_);
lean_inc(v_traceState_668_);
lean_inc(v_auxDeclNGen_667_);
lean_inc(v_ngen_666_);
lean_inc(v_nextMacroScope_665_);
lean_inc(v_env_664_);
lean_dec(v___x_663_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_699_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_678_; 
lean_inc(v___x_651_);
v___x_675_ = l_Lean_setDefHeightOverride(v_env_664_, v___x_651_, v___x_652_);
v___x_676_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__2);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 5, v___x_676_);
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_678_ = v___x_673_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_nextMacroScope_665_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v_ngen_666_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v_auxDeclNGen_667_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_traceState_668_);
lean_ctor_set(v_reuseFailAlloc_698_, 5, v___x_676_);
lean_ctor_set(v_reuseFailAlloc_698_, 6, v_messages_669_);
lean_ctor_set(v_reuseFailAlloc_698_, 7, v_infoState_670_);
lean_ctor_set(v_reuseFailAlloc_698_, 8, v_snapshotTasks_671_);
v___x_678_ = v_reuseFailAlloc_698_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_mctx_681_; lean_object* v_zetaDeltaFVarIds_682_; lean_object* v_postponed_683_; lean_object* v_diag_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_696_; 
v___x_679_ = lean_st_ref_set(v___y_605_, v___x_678_);
v___x_680_ = lean_st_ref_take(v___y_603_);
v_mctx_681_ = lean_ctor_get(v___x_680_, 0);
v_zetaDeltaFVarIds_682_ = lean_ctor_get(v___x_680_, 2);
v_postponed_683_ = lean_ctor_get(v___x_680_, 3);
v_diag_684_ = lean_ctor_get(v___x_680_, 4);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_696_ == 0)
{
lean_object* v_unused_697_; 
v_unused_697_ = lean_ctor_get(v___x_680_, 1);
lean_dec(v_unused_697_);
v___x_686_ = v___x_680_;
v_isShared_687_ = v_isSharedCheck_696_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_diag_684_);
lean_inc(v_postponed_683_);
lean_inc(v_zetaDeltaFVarIds_682_);
lean_inc(v_mctx_681_);
lean_dec(v___x_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_696_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg___closed__3);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_mctx_681_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_695_, 2, v_zetaDeltaFVarIds_682_);
lean_ctor_set(v_reuseFailAlloc_695_, 3, v_postponed_683_);
lean_ctor_set(v_reuseFailAlloc_695_, 4, v_diag_684_);
v___x_690_ = v_reuseFailAlloc_695_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_691_ = lean_st_ref_set(v___y_603_, v___x_690_);
lean_inc(v___x_651_);
v___x_692_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(v___x_651_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec_ref(v___x_692_);
lean_inc(v___x_597_);
v___x_693_ = l_Lean_mkConst(v___x_651_, v___x_597_);
v___x_694_ = l_Lean_mkAppN(v___x_693_, v_xs_594_);
v_a_614_ = v___x_694_;
goto v___jp_613_;
}
}
}
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v___x_651_);
lean_dec(v_n_612_);
lean_dec_ref(v_bs_601_);
lean_dec(v_j_600_);
lean_dec(v___x_597_);
v_a_701_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_662_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_662_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_634_);
v___y_619_ = v___x_637_;
goto v___jp_618_;
}
}
else
{
lean_dec(v_a_634_);
v___y_619_ = v___x_635_;
goto v___jp_618_;
}
}
else
{
v___y_619_ = v___x_633_;
goto v___jp_618_;
}
}
else
{
v___y_619_ = v___x_631_;
goto v___jp_618_;
}
v___jp_613_:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_nat_add(v_j_600_, v_one_611_);
lean_dec(v_j_600_);
v___x_616_ = lean_array_push(v_bs_601_, v_a_614_);
v_i_599_ = v_n_612_;
v_j_600_ = v___x_615_;
v_bs_601_ = v___x_616_;
goto _start;
}
v___jp_618_:
{
if (lean_obj_tag(v___y_619_) == 0)
{
lean_object* v_a_620_; 
v_a_620_ = lean_ctor_get(v___y_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref(v___y_619_);
v_a_614_ = v_a_620_;
goto v___jp_613_;
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_n_612_);
lean_dec_ref(v_bs_601_);
lean_dec(v_j_600_);
lean_dec(v___x_597_);
v_a_621_ = lean_ctor_get(v___y_619_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___y_619_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___y_619_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___y_619_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___boxed(lean_object* v_xs_713_, lean_object* v_a_714_, lean_object* v_preDefs_715_, lean_object* v___x_716_, lean_object* v_as_717_, lean_object* v_i_718_, lean_object* v_j_719_, lean_object* v_bs_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
uint8_t v_a_27151__boxed_726_; lean_object* v_res_727_; 
v_a_27151__boxed_726_ = lean_unbox(v_a_714_);
v_res_727_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(v_xs_713_, v_a_27151__boxed_726_, v_preDefs_715_, v___x_716_, v_as_717_, v_i_718_, v_j_719_, v_bs_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v_as_717_);
lean_dec_ref(v_preDefs_715_);
lean_dec_ref(v_xs_713_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
if (lean_obj_tag(v_a_728_) == 0)
{
lean_object* v___x_730_; 
v___x_730_ = l_List_reverse___redArg(v_a_729_);
return v___x_730_;
}
else
{
lean_object* v_head_731_; lean_object* v_tail_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_741_; 
v_head_731_ = lean_ctor_get(v_a_728_, 0);
v_tail_732_ = lean_ctor_get(v_a_728_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v_a_728_);
if (v_isSharedCheck_741_ == 0)
{
v___x_734_ = v_a_728_;
v_isShared_735_ = v_isSharedCheck_741_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_tail_732_);
lean_inc(v_head_731_);
lean_dec(v_a_728_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_741_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_736_ = l_Lean_mkLevelParam(v_head_731_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 1, v_a_729_);
lean_ctor_set(v___x_734_, 0, v___x_736_);
v___x_738_ = v___x_734_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_a_729_);
v___x_738_ = v_reuseFailAlloc_740_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
v_a_728_ = v_tail_732_;
v_a_729_ = v___x_738_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_instMonadEIO(lean_box(0));
return v___x_742_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l_Array_instInhabited(lean_box(0));
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(lean_object* v_msg_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v_toApplicative_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_817_; 
v___x_754_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__0);
v___x_755_ = l_StateRefT_x27_instMonad___redArg(v___x_754_);
v_toApplicative_756_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; 
v_unused_818_ = lean_ctor_get(v___x_755_, 1);
lean_dec(v_unused_818_);
v___x_758_ = v___x_755_;
v_isShared_759_ = v_isSharedCheck_817_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_toApplicative_756_);
lean_dec(v___x_755_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_817_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v_toFunctor_760_; lean_object* v_toSeq_761_; lean_object* v_toSeqLeft_762_; lean_object* v_toSeqRight_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_815_; 
v_toFunctor_760_ = lean_ctor_get(v_toApplicative_756_, 0);
v_toSeq_761_ = lean_ctor_get(v_toApplicative_756_, 2);
v_toSeqLeft_762_ = lean_ctor_get(v_toApplicative_756_, 3);
v_toSeqRight_763_ = lean_ctor_get(v_toApplicative_756_, 4);
v_isSharedCheck_815_ = !lean_is_exclusive(v_toApplicative_756_);
if (v_isSharedCheck_815_ == 0)
{
lean_object* v_unused_816_; 
v_unused_816_ = lean_ctor_get(v_toApplicative_756_, 1);
lean_dec(v_unused_816_);
v___x_765_ = v_toApplicative_756_;
v_isShared_766_ = v_isSharedCheck_815_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_toSeqRight_763_);
lean_inc(v_toSeqLeft_762_);
lean_inc(v_toSeq_761_);
lean_inc(v_toFunctor_760_);
lean_dec(v_toApplicative_756_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_815_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___f_767_; lean_object* v___f_768_; lean_object* v___f_769_; lean_object* v___f_770_; lean_object* v___x_771_; lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___f_774_; lean_object* v___x_776_; 
v___f_767_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__1));
v___f_768_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__2));
lean_inc_ref(v_toFunctor_760_);
v___f_769_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_769_, 0, v_toFunctor_760_);
v___f_770_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_770_, 0, v_toFunctor_760_);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v___f_769_);
lean_ctor_set(v___x_771_, 1, v___f_770_);
v___f_772_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_772_, 0, v_toSeqRight_763_);
v___f_773_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_773_, 0, v_toSeqLeft_762_);
v___f_774_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_774_, 0, v_toSeq_761_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 4, v___f_772_);
lean_ctor_set(v___x_765_, 3, v___f_773_);
lean_ctor_set(v___x_765_, 2, v___f_774_);
lean_ctor_set(v___x_765_, 1, v___f_767_);
lean_ctor_set(v___x_765_, 0, v___x_771_);
v___x_776_ = v___x_765_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v___f_767_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v___f_774_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v___f_773_);
lean_ctor_set(v_reuseFailAlloc_814_, 4, v___f_772_);
v___x_776_ = v_reuseFailAlloc_814_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_778_; 
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 1, v___f_768_);
lean_ctor_set(v___x_758_, 0, v___x_776_);
v___x_778_ = v___x_758_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v___f_768_);
v___x_778_ = v_reuseFailAlloc_813_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; lean_object* v_toApplicative_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_811_; 
v___x_779_ = l_StateRefT_x27_instMonad___redArg(v___x_778_);
v_toApplicative_780_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_811_ == 0)
{
lean_object* v_unused_812_; 
v_unused_812_ = lean_ctor_get(v___x_779_, 1);
lean_dec(v_unused_812_);
v___x_782_ = v___x_779_;
v_isShared_783_ = v_isSharedCheck_811_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_toApplicative_780_);
lean_dec(v___x_779_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_811_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v_toFunctor_784_; lean_object* v_toSeq_785_; lean_object* v_toSeqLeft_786_; lean_object* v_toSeqRight_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_809_; 
v_toFunctor_784_ = lean_ctor_get(v_toApplicative_780_, 0);
v_toSeq_785_ = lean_ctor_get(v_toApplicative_780_, 2);
v_toSeqLeft_786_ = lean_ctor_get(v_toApplicative_780_, 3);
v_toSeqRight_787_ = lean_ctor_get(v_toApplicative_780_, 4);
v_isSharedCheck_809_ = !lean_is_exclusive(v_toApplicative_780_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v_toApplicative_780_, 1);
lean_dec(v_unused_810_);
v___x_789_ = v_toApplicative_780_;
v_isShared_790_ = v_isSharedCheck_809_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_toSeqRight_787_);
lean_inc(v_toSeqLeft_786_);
lean_inc(v_toSeq_785_);
lean_inc(v_toFunctor_784_);
lean_dec(v_toApplicative_780_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_809_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___f_791_; lean_object* v___f_792_; lean_object* v___f_793_; lean_object* v___f_794_; lean_object* v___x_795_; lean_object* v___f_796_; lean_object* v___f_797_; lean_object* v___f_798_; lean_object* v___x_800_; 
v___f_791_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__3));
v___f_792_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__4));
lean_inc_ref(v_toFunctor_784_);
v___f_793_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_793_, 0, v_toFunctor_784_);
v___f_794_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_794_, 0, v_toFunctor_784_);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v___f_793_);
lean_ctor_set(v___x_795_, 1, v___f_794_);
v___f_796_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_796_, 0, v_toSeqRight_787_);
v___f_797_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_797_, 0, v_toSeqLeft_786_);
v___f_798_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_798_, 0, v_toSeq_785_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 4, v___f_796_);
lean_ctor_set(v___x_789_, 3, v___f_797_);
lean_ctor_set(v___x_789_, 2, v___f_798_);
lean_ctor_set(v___x_789_, 1, v___f_791_);
lean_ctor_set(v___x_789_, 0, v___x_795_);
v___x_800_ = v___x_789_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_795_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v___f_791_);
lean_ctor_set(v_reuseFailAlloc_808_, 2, v___f_798_);
lean_ctor_set(v_reuseFailAlloc_808_, 3, v___f_797_);
lean_ctor_set(v_reuseFailAlloc_808_, 4, v___f_796_);
v___x_800_ = v_reuseFailAlloc_808_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_802_; 
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 1, v___f_792_);
lean_ctor_set(v___x_782_, 0, v___x_800_);
v___x_802_ = v___x_782_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v___f_792_);
v___x_802_ = v_reuseFailAlloc_807_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_23207__overap_805_; lean_object* v___x_806_; 
v___x_803_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__5, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__5_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___closed__5);
v___x_804_ = l_instInhabitedOfMonad___redArg(v___x_802_, v___x_803_);
v___x_23207__overap_805_ = lean_panic_fn_borrowed(v___x_804_, v_msg_748_);
lean_dec(v___x_804_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc(v___y_750_);
lean_inc_ref(v___y_749_);
v___x_806_ = lean_apply_5(v___x_23207__overap_805_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, lean_box(0));
return v___x_806_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___boxed(lean_object* v_msg_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(v_msg_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(lean_object* v_xs_826_, size_t v_sz_827_, size_t v_i_828_, lean_object* v_bs_829_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = lean_usize_dec_lt(v_i_828_, v_sz_827_);
if (v___x_830_ == 0)
{
return v_bs_829_;
}
else
{
lean_object* v___x_831_; lean_object* v_v_832_; lean_object* v___x_833_; lean_object* v_bs_x27_834_; lean_object* v___x_835_; size_t v___x_836_; size_t v___x_837_; lean_object* v___x_838_; 
v___x_831_ = l_Lean_instInhabitedExpr;
v_v_832_ = lean_array_uget(v_bs_829_, v_i_828_);
v___x_833_ = lean_unsigned_to_nat(0u);
v_bs_x27_834_ = lean_array_uset(v_bs_829_, v_i_828_, v___x_833_);
v___x_835_ = lean_array_get_borrowed(v___x_831_, v_xs_826_, v_v_832_);
lean_dec(v_v_832_);
v___x_836_ = ((size_t)1ULL);
v___x_837_ = lean_usize_add(v_i_828_, v___x_836_);
lean_inc(v___x_835_);
v___x_838_ = lean_array_uset(v_bs_x27_834_, v_i_828_, v___x_835_);
v_i_828_ = v___x_837_;
v_bs_829_ = v___x_838_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___boxed(lean_object* v_xs_840_, lean_object* v_sz_841_, lean_object* v_i_842_, lean_object* v_bs_843_){
_start:
{
size_t v_sz_boxed_844_; size_t v_i_boxed_845_; lean_object* v_res_846_; 
v_sz_boxed_844_ = lean_unbox_usize(v_sz_841_);
lean_dec(v_sz_841_);
v_i_boxed_845_ = lean_unbox_usize(v_i_842_);
lean_dec(v_i_842_);
v_res_846_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(v_xs_840_, v_sz_boxed_844_, v_i_boxed_845_, v_bs_843_);
lean_dec_ref(v_xs_840_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg(lean_object* v_xs_847_, lean_object* v_f_848_, lean_object* v_as_849_, lean_object* v_bs_850_, lean_object* v_i_851_, lean_object* v_cs_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_858_ = lean_array_get_size(v_as_849_);
v___x_859_ = lean_nat_dec_lt(v_i_851_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; 
lean_dec(v_i_851_);
lean_dec_ref(v_f_848_);
v___x_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_860_, 0, v_cs_852_);
return v___x_860_;
}
else
{
lean_object* v___x_861_; uint8_t v___x_862_; 
v___x_861_ = lean_array_get_size(v_bs_850_);
v___x_862_ = lean_nat_dec_lt(v_i_851_, v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; 
lean_dec(v_i_851_);
lean_dec_ref(v_f_848_);
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v_cs_852_);
return v___x_863_;
}
else
{
lean_object* v_a_864_; lean_object* v_b_865_; size_t v_sz_866_; size_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_864_ = lean_array_fget_borrowed(v_as_849_, v_i_851_);
v_b_865_ = lean_array_fget_borrowed(v_bs_850_, v_i_851_);
v_sz_866_ = lean_array_size(v_b_865_);
v___x_867_ = ((size_t)0ULL);
lean_inc(v_b_865_);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(v_xs_847_, v_sz_866_, v___x_867_, v_b_865_);
lean_inc_ref(v_f_848_);
lean_inc(v___y_856_);
lean_inc_ref(v___y_855_);
lean_inc(v___y_854_);
lean_inc_ref(v___y_853_);
lean_inc(v_a_864_);
v___x_869_ = lean_apply_7(v_f_848_, v_a_864_, v___x_868_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, lean_box(0));
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref(v___x_869_);
v___x_871_ = lean_unsigned_to_nat(1u);
v___x_872_ = lean_nat_add(v_i_851_, v___x_871_);
lean_dec(v_i_851_);
v___x_873_ = lean_array_push(v_cs_852_, v_a_870_);
v_i_851_ = v___x_872_;
v_cs_852_ = v___x_873_;
goto _start;
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
lean_dec_ref(v_cs_852_);
lean_dec(v_i_851_);
lean_dec_ref(v_f_848_);
v_a_875_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_869_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_869_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg___boxed(lean_object* v_xs_883_, lean_object* v_f_884_, lean_object* v_as_885_, lean_object* v_bs_886_, lean_object* v_i_887_, lean_object* v_cs_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg(v_xs_883_, v_f_884_, v_as_885_, v_bs_886_, v_i_887_, v_cs_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec_ref(v_bs_886_);
lean_dec_ref(v_as_885_);
lean_dec_ref(v_xs_883_);
return v_res_894_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_898_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__2));
v___x_899_ = lean_unsigned_to_nat(2u);
v___x_900_ = lean_unsigned_to_nat(73u);
v___x_901_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__1));
v___x_902_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0));
v___x_903_ = l_mkPanicMessageWithDecl(v___x_902_, v___x_901_, v___x_900_, v___x_899_, v___x_898_);
return v___x_903_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_905_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__4));
v___x_906_ = lean_unsigned_to_nat(2u);
v___x_907_ = lean_unsigned_to_nat(74u);
v___x_908_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__1));
v___x_909_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0));
v___x_910_ = l_mkPanicMessageWithDecl(v___x_909_, v___x_908_, v___x_907_, v___x_906_, v___x_905_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(lean_object* v_f_913_, lean_object* v_positions_914_, lean_object* v_ys_915_, lean_object* v_xs_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_922_ = lean_array_get_size(v_positions_914_);
v___x_923_ = lean_array_get_size(v_ys_915_);
v___x_924_ = lean_nat_dec_eq(v___x_922_, v___x_923_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec_ref(v_f_913_);
v___x_925_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__3);
v___x_926_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(v___x_925_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
return v___x_926_;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_927_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_914_);
v___x_928_ = lean_array_get_size(v_xs_916_);
v___x_929_ = lean_nat_dec_eq(v___x_927_, v___x_928_);
lean_dec(v___x_927_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_dec_ref(v_f_913_);
v___x_930_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__5);
v___x_931_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(v___x_930_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
return v___x_931_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_932_ = lean_unsigned_to_nat(0u);
v___x_933_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__6));
v___x_934_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg(v_xs_916_, v_f_913_, v_ys_915_, v_positions_914_, v___x_932_, v___x_933_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
return v___x_934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed(lean_object* v_f_935_, lean_object* v_positions_936_, lean_object* v_ys_937_, lean_object* v_xs_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_f_935_, v_positions_936_, v_ys_937_, v_xs_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec_ref(v_xs_938_);
lean_dec_ref(v_ys_937_);
lean_dec_ref(v_positions_936_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22(lean_object* v_msgData_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v___x_951_; lean_object* v_env_952_; lean_object* v___x_953_; lean_object* v_mctx_954_; lean_object* v_lctx_955_; lean_object* v_options_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_951_ = lean_st_ref_get(v___y_949_);
v_env_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc_ref(v_env_952_);
lean_dec(v___x_951_);
v___x_953_ = lean_st_ref_get(v___y_947_);
v_mctx_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc_ref(v_mctx_954_);
lean_dec(v___x_953_);
v_lctx_955_ = lean_ctor_get(v___y_946_, 2);
v_options_956_ = lean_ctor_get(v___y_948_, 2);
lean_inc_ref(v_options_956_);
lean_inc_ref(v_lctx_955_);
v___x_957_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_957_, 0, v_env_952_);
lean_ctor_set(v___x_957_, 1, v_mctx_954_);
lean_ctor_set(v___x_957_, 2, v_lctx_955_);
lean_ctor_set(v___x_957_, 3, v_options_956_);
v___x_958_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
lean_ctor_set(v___x_958_, 1, v_msgData_945_);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22___boxed(lean_object* v_msgData_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22(v_msgData_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
return v_res_966_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__0(void){
_start:
{
lean_object* v___x_967_; double v___x_968_; 
v___x_967_ = lean_unsigned_to_nat(0u);
v___x_968_ = lean_float_of_nat(v___x_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(lean_object* v_cls_972_, lean_object* v_msg_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_ref_979_; lean_object* v___x_980_; lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_1025_; 
v_ref_979_ = lean_ctor_get(v___y_976_, 5);
v___x_980_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22(v_msg_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_);
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_1025_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_1025_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v_traceState_986_; lean_object* v_env_987_; lean_object* v_nextMacroScope_988_; lean_object* v_ngen_989_; lean_object* v_auxDeclNGen_990_; lean_object* v_cache_991_; lean_object* v_messages_992_; lean_object* v_infoState_993_; lean_object* v_snapshotTasks_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1024_; 
v___x_985_ = lean_st_ref_take(v___y_977_);
v_traceState_986_ = lean_ctor_get(v___x_985_, 4);
v_env_987_ = lean_ctor_get(v___x_985_, 0);
v_nextMacroScope_988_ = lean_ctor_get(v___x_985_, 1);
v_ngen_989_ = lean_ctor_get(v___x_985_, 2);
v_auxDeclNGen_990_ = lean_ctor_get(v___x_985_, 3);
v_cache_991_ = lean_ctor_get(v___x_985_, 5);
v_messages_992_ = lean_ctor_get(v___x_985_, 6);
v_infoState_993_ = lean_ctor_get(v___x_985_, 7);
v_snapshotTasks_994_ = lean_ctor_get(v___x_985_, 8);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_996_ = v___x_985_;
v_isShared_997_ = v_isSharedCheck_1024_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_snapshotTasks_994_);
lean_inc(v_infoState_993_);
lean_inc(v_messages_992_);
lean_inc(v_cache_991_);
lean_inc(v_traceState_986_);
lean_inc(v_auxDeclNGen_990_);
lean_inc(v_ngen_989_);
lean_inc(v_nextMacroScope_988_);
lean_inc(v_env_987_);
lean_dec(v___x_985_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1024_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
uint64_t v_tid_998_; lean_object* v_traces_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1023_; 
v_tid_998_ = lean_ctor_get_uint64(v_traceState_986_, sizeof(void*)*1);
v_traces_999_ = lean_ctor_get(v_traceState_986_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_traceState_986_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1001_ = v_traceState_986_;
v_isShared_1002_ = v_isSharedCheck_1023_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_traces_999_);
lean_dec(v_traceState_986_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1023_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; double v___x_1004_; uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1003_ = lean_box(0);
v___x_1004_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__0);
v___x_1005_ = 0;
v___x_1006_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__1));
v___x_1007_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1007_, 0, v_cls_972_);
lean_ctor_set(v___x_1007_, 1, v___x_1003_);
lean_ctor_set(v___x_1007_, 2, v___x_1006_);
lean_ctor_set_float(v___x_1007_, sizeof(void*)*3, v___x_1004_);
lean_ctor_set_float(v___x_1007_, sizeof(void*)*3 + 8, v___x_1004_);
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*3 + 16, v___x_1005_);
v___x_1008_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___closed__2));
v___x_1009_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v_a_981_);
lean_ctor_set(v___x_1009_, 2, v___x_1008_);
lean_inc(v_ref_979_);
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v_ref_979_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = l_Lean_PersistentArray_push___redArg(v_traces_999_, v___x_1010_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1011_);
v___x_1013_ = v___x_1001_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1011_);
lean_ctor_set_uint64(v_reuseFailAlloc_1022_, sizeof(void*)*1, v_tid_998_);
v___x_1013_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___x_1015_; 
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 4, v___x_1013_);
v___x_1015_ = v___x_996_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_env_987_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_nextMacroScope_988_);
lean_ctor_set(v_reuseFailAlloc_1021_, 2, v_ngen_989_);
lean_ctor_set(v_reuseFailAlloc_1021_, 3, v_auxDeclNGen_990_);
lean_ctor_set(v_reuseFailAlloc_1021_, 4, v___x_1013_);
lean_ctor_set(v_reuseFailAlloc_1021_, 5, v_cache_991_);
lean_ctor_set(v_reuseFailAlloc_1021_, 6, v_messages_992_);
lean_ctor_set(v_reuseFailAlloc_1021_, 7, v_infoState_993_);
lean_ctor_set(v_reuseFailAlloc_1021_, 8, v_snapshotTasks_994_);
v___x_1015_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1016_ = lean_st_ref_set(v___y_977_, v___x_1015_);
v___x_1017_ = lean_box(0);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v___x_1017_);
v___x_1019_ = v___x_983_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___boxed(lean_object* v_cls_1026_, lean_object* v_msg_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v_cls_1026_, v_msg_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(lean_object* v___x_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_funTypes_1037_, lean_object* v_as_1038_, lean_object* v_i_1039_, lean_object* v_j_1040_, lean_object* v_bs_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_zero_1047_; uint8_t v_isZero_1048_; 
v_zero_1047_ = lean_unsigned_to_nat(0u);
v_isZero_1048_ = lean_nat_dec_eq(v_i_1039_, v_zero_1047_);
if (v_isZero_1048_ == 1)
{
lean_object* v___x_1049_; 
lean_dec(v_j_1040_);
lean_dec(v_i_1039_);
lean_dec_ref(v_funTypes_1037_);
lean_dec_ref(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec_ref(v___x_1034_);
v___x_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1049_, 0, v_bs_1041_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v_fst_1051_; lean_object* v_snd_1052_; lean_object* v___x_1053_; 
v___x_1050_ = lean_array_fget_borrowed(v_as_1038_, v_j_1040_);
v_fst_1051_ = lean_ctor_get(v___x_1050_, 0);
v_snd_1052_ = lean_ctor_get(v___x_1050_, 1);
lean_inc(v_snd_1052_);
lean_inc(v_fst_1051_);
lean_inc_ref(v_funTypes_1037_);
lean_inc_ref(v_a_1036_);
lean_inc_ref(v_a_1035_);
lean_inc(v_j_1040_);
lean_inc_ref(v___x_1034_);
v___x_1053_ = l_Lean_Elab_Structural_mkBRecOnApp(v___x_1034_, v_j_1040_, v_a_1035_, v_a_1036_, v_funTypes_1037_, v_fst_1051_, v_snd_1052_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v_one_1055_; lean_object* v_n_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref(v___x_1053_);
v_one_1055_ = lean_unsigned_to_nat(1u);
v_n_1056_ = lean_nat_sub(v_i_1039_, v_one_1055_);
lean_dec(v_i_1039_);
v___x_1057_ = lean_nat_add(v_j_1040_, v_one_1055_);
lean_dec(v_j_1040_);
v___x_1058_ = lean_array_push(v_bs_1041_, v_a_1054_);
v_i_1039_ = v_n_1056_;
v_j_1040_ = v___x_1057_;
v_bs_1041_ = v___x_1058_;
goto _start;
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec_ref(v_bs_1041_);
lean_dec(v_j_1040_);
lean_dec(v_i_1039_);
lean_dec_ref(v_funTypes_1037_);
lean_dec_ref(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec_ref(v___x_1034_);
v_a_1060_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1053_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1053_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___boxed(lean_object* v___x_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_funTypes_1071_, lean_object* v_as_1072_, lean_object* v_i_1073_, lean_object* v_j_1074_, lean_object* v_bs_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(v___x_1068_, v_a_1069_, v_a_1070_, v_funTypes_1071_, v_as_1072_, v_i_1073_, v_j_1074_, v_bs_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec_ref(v_as_1072_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___lam__0(lean_object* v_fixedParamPerms_1082_, lean_object* v___x_1083_, lean_object* v_j_1084_, lean_object* v_xs_1085_, lean_object* v_snd_1086_, uint8_t v_isZero_1087_, lean_object* v_ys_1088_, lean_object* v_x_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_perms_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; uint8_t v___x_1100_; lean_object* v___x_1101_; 
v_perms_1095_ = lean_ctor_get(v_fixedParamPerms_1082_, 1);
v___x_1096_ = lean_array_get_borrowed(v___x_1083_, v_perms_1095_, v_j_1084_);
lean_inc_ref(v_ys_1088_);
lean_inc(v___x_1096_);
v___x_1097_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v___x_1096_, v_xs_1085_, v_ys_1088_);
v___x_1098_ = l_Lean_Expr_beta(v_snd_1086_, v_ys_1088_);
v___x_1099_ = 1;
v___x_1100_ = 1;
v___x_1101_ = l_Lean_Meta_mkLambdaFVars(v___x_1097_, v___x_1098_, v_isZero_1087_, v___x_1099_, v_isZero_1087_, v___x_1099_, v___x_1100_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
lean_dec_ref(v___x_1097_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___lam__0___boxed(lean_object* v_fixedParamPerms_1102_, lean_object* v___x_1103_, lean_object* v_j_1104_, lean_object* v_xs_1105_, lean_object* v_snd_1106_, lean_object* v_isZero_1107_, lean_object* v_ys_1108_, lean_object* v_x_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
uint8_t v_isZero_boxed_1115_; lean_object* v_res_1116_; 
v_isZero_boxed_1115_ = lean_unbox(v_isZero_1107_);
v_res_1116_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___lam__0(v_fixedParamPerms_1102_, v___x_1103_, v_j_1104_, v_xs_1105_, v_snd_1106_, v_isZero_boxed_1115_, v_ys_1108_, v_x_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec_ref(v_x_1109_);
lean_dec_ref(v_xs_1105_);
lean_dec(v_j_1104_);
lean_dec_ref(v___x_1103_);
lean_dec_ref(v_fixedParamPerms_1102_);
return v_res_1116_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Array_instInhabited(lean_box(0));
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(lean_object* v_fixedParamPerms_1118_, lean_object* v_xs_1119_, lean_object* v_as_1120_, lean_object* v_i_1121_, lean_object* v_j_1122_, lean_object* v_bs_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v_zero_1129_; uint8_t v_isZero_1130_; 
v_zero_1129_ = lean_unsigned_to_nat(0u);
v_isZero_1130_ = lean_nat_dec_eq(v_i_1121_, v_zero_1129_);
if (v_isZero_1130_ == 1)
{
lean_object* v___x_1131_; 
lean_dec(v_j_1122_);
lean_dec(v_i_1121_);
lean_dec_ref(v_xs_1119_);
lean_dec_ref(v_fixedParamPerms_1118_);
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v_bs_1123_);
return v___x_1131_;
}
else
{
lean_object* v___x_1132_; lean_object* v_fst_1133_; lean_object* v_snd_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___f_1137_; lean_object* v___x_1138_; 
v___x_1132_ = lean_array_fget_borrowed(v_as_1120_, v_j_1122_);
v_fst_1133_ = lean_ctor_get(v___x_1132_, 0);
v_snd_1134_ = lean_ctor_get(v___x_1132_, 1);
v___x_1135_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v___x_1136_ = lean_box(v_isZero_1130_);
lean_inc(v_snd_1134_);
lean_inc_ref(v_xs_1119_);
lean_inc(v_j_1122_);
lean_inc_ref(v_fixedParamPerms_1118_);
v___f_1137_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_1137_, 0, v_fixedParamPerms_1118_);
lean_closure_set(v___f_1137_, 1, v___x_1135_);
lean_closure_set(v___f_1137_, 2, v_j_1122_);
lean_closure_set(v___f_1137_, 3, v_xs_1119_);
lean_closure_set(v___f_1137_, 4, v_snd_1134_);
lean_closure_set(v___f_1137_, 5, v___x_1136_);
lean_inc(v_fst_1133_);
v___x_1138_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_fst_1133_, v___f_1137_, v_isZero_1130_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v_one_1140_; lean_object* v_n_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_a_1139_);
lean_dec_ref(v___x_1138_);
v_one_1140_ = lean_unsigned_to_nat(1u);
v_n_1141_ = lean_nat_sub(v_i_1121_, v_one_1140_);
lean_dec(v_i_1121_);
v___x_1142_ = lean_nat_add(v_j_1122_, v_one_1140_);
lean_dec(v_j_1122_);
v___x_1143_ = lean_array_push(v_bs_1123_, v_a_1139_);
v_i_1121_ = v_n_1141_;
v_j_1122_ = v___x_1142_;
v_bs_1123_ = v___x_1143_;
goto _start;
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v_bs_1123_);
lean_dec(v_j_1122_);
lean_dec(v_i_1121_);
lean_dec_ref(v_xs_1119_);
lean_dec_ref(v_fixedParamPerms_1118_);
v_a_1145_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1138_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1138_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___boxed(lean_object* v_fixedParamPerms_1153_, lean_object* v_xs_1154_, lean_object* v_as_1155_, lean_object* v_i_1156_, lean_object* v_j_1157_, lean_object* v_bs_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(v_fixedParamPerms_1153_, v_xs_1154_, v_as_1155_, v_i_1156_, v_j_1157_, v_bs_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec_ref(v_as_1155_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(lean_object* v_a_1165_, lean_object* v_a_1166_){
_start:
{
if (lean_obj_tag(v_a_1165_) == 0)
{
lean_object* v___x_1167_; 
v___x_1167_ = l_List_reverse___redArg(v_a_1166_);
return v___x_1167_;
}
else
{
lean_object* v_head_1168_; lean_object* v_tail_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1178_; 
v_head_1168_ = lean_ctor_get(v_a_1165_, 0);
v_tail_1169_ = lean_ctor_get(v_a_1165_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_a_1165_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1171_ = v_a_1165_;
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_tail_1169_);
lean_inc(v_head_1168_);
lean_dec(v_a_1165_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1173_ = l_Lean_MessageData_ofExpr(v_head_1168_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 1, v_a_1166_);
lean_ctor_set(v___x_1171_, 0, v___x_1173_);
v___x_1175_ = v___x_1171_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1173_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_a_1166_);
v___x_1175_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
v_a_1165_ = v_tail_1169_;
v_a_1166_ = v___x_1175_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(lean_object* v_as_1179_, lean_object* v_bs_1180_, lean_object* v_i_1181_, lean_object* v_cs_1182_){
_start:
{
lean_object* v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = lean_array_get_size(v_as_1179_);
v___x_1184_ = lean_nat_dec_lt(v_i_1181_, v___x_1183_);
if (v___x_1184_ == 0)
{
lean_dec(v_i_1181_);
return v_cs_1182_;
}
else
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = lean_array_get_size(v_bs_1180_);
v___x_1186_ = lean_nat_dec_lt(v_i_1181_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_dec(v_i_1181_);
return v_cs_1182_;
}
else
{
lean_object* v_a_1187_; lean_object* v_ref_1188_; uint8_t v_kind_1189_; lean_object* v_levelParams_1190_; lean_object* v_modifiers_1191_; lean_object* v_declName_1192_; lean_object* v_binders_1193_; lean_object* v_numSectionVars_1194_; lean_object* v_type_1195_; lean_object* v_termination_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1208_; 
v_a_1187_ = lean_array_fget(v_as_1179_, v_i_1181_);
v_ref_1188_ = lean_ctor_get(v_a_1187_, 0);
v_kind_1189_ = lean_ctor_get_uint8(v_a_1187_, sizeof(void*)*9);
v_levelParams_1190_ = lean_ctor_get(v_a_1187_, 1);
v_modifiers_1191_ = lean_ctor_get(v_a_1187_, 2);
v_declName_1192_ = lean_ctor_get(v_a_1187_, 3);
v_binders_1193_ = lean_ctor_get(v_a_1187_, 4);
v_numSectionVars_1194_ = lean_ctor_get(v_a_1187_, 5);
v_type_1195_ = lean_ctor_get(v_a_1187_, 6);
v_termination_1196_ = lean_ctor_get(v_a_1187_, 8);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_a_1187_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; 
v_unused_1209_ = lean_ctor_get(v_a_1187_, 7);
lean_dec(v_unused_1209_);
v___x_1198_ = v_a_1187_;
v_isShared_1199_ = v_isSharedCheck_1208_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_termination_1196_);
lean_inc(v_type_1195_);
lean_inc(v_numSectionVars_1194_);
lean_inc(v_binders_1193_);
lean_inc(v_declName_1192_);
lean_inc(v_modifiers_1191_);
lean_inc(v_levelParams_1190_);
lean_inc(v_ref_1188_);
lean_dec(v_a_1187_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1208_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v_b_1200_; lean_object* v___x_1202_; 
v_b_1200_ = lean_array_fget_borrowed(v_bs_1180_, v_i_1181_);
lean_inc(v_b_1200_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 7, v_b_1200_);
v___x_1202_ = v___x_1198_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_ref_1188_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_levelParams_1190_);
lean_ctor_set(v_reuseFailAlloc_1207_, 2, v_modifiers_1191_);
lean_ctor_set(v_reuseFailAlloc_1207_, 3, v_declName_1192_);
lean_ctor_set(v_reuseFailAlloc_1207_, 4, v_binders_1193_);
lean_ctor_set(v_reuseFailAlloc_1207_, 5, v_numSectionVars_1194_);
lean_ctor_set(v_reuseFailAlloc_1207_, 6, v_type_1195_);
lean_ctor_set(v_reuseFailAlloc_1207_, 7, v_b_1200_);
lean_ctor_set(v_reuseFailAlloc_1207_, 8, v_termination_1196_);
lean_ctor_set_uint8(v_reuseFailAlloc_1207_, sizeof(void*)*9, v_kind_1189_);
v___x_1202_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = lean_nat_add(v_i_1181_, v___x_1203_);
lean_dec(v_i_1181_);
v___x_1205_ = lean_array_push(v_cs_1182_, v___x_1202_);
v_i_1181_ = v___x_1204_;
v_cs_1182_ = v___x_1205_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___boxed(lean_object* v_as_1210_, lean_object* v_bs_1211_, lean_object* v_i_1212_, lean_object* v_cs_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v_as_1210_, v_bs_1211_, v_i_1212_, v_cs_1213_);
lean_dec_ref(v_bs_1211_);
lean_dec_ref(v_as_1210_);
return v_res_1214_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1218_ = lean_box(0);
v___x_1219_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1));
v___x_1220_ = l_Lean_Expr_const___override(v___x_1219_, v___x_1218_);
return v___x_1220_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__3));
v___x_1223_ = l_Lean_stringToMessageData(v___x_1222_);
return v___x_1223_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__5));
v___x_1226_ = l_Lean_stringToMessageData(v___x_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__7));
v___x_1229_ = l_Lean_stringToMessageData(v___x_1228_);
return v___x_1229_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__9));
v___x_1232_ = l_Lean_stringToMessageData(v___x_1231_);
return v___x_1232_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__11));
v___x_1235_ = l_Lean_stringToMessageData(v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(lean_object* v___x_1236_, lean_object* v_recArgInfos_1237_, lean_object* v_a_1238_, lean_object* v___x_1239_, lean_object* v___x_1240_, lean_object* v_fixedParamPerms_1241_, lean_object* v_xs_1242_, lean_object* v_preDefs_1243_, lean_object* v_numIndices_1244_, lean_object* v___f_1245_, uint8_t v_a_1246_, lean_object* v_funTypes_1247_, lean_object* v_motives_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1297_; lean_object* v_FArgs_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___x_1452_; lean_object* v_a_1453_; uint8_t v___x_1454_; 
lean_inc(v___x_1236_);
v___x_1452_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1236_, v___y_1251_);
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref(v___x_1452_);
v___x_1454_ = lean_unbox(v_a_1453_);
lean_dec(v_a_1453_);
if (v___x_1454_ == 0)
{
v___y_1410_ = v___y_1249_;
v___y_1411_ = v___y_1250_;
v___y_1412_ = v___y_1251_;
v___y_1413_ = v___y_1252_;
goto v___jp_1409_;
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1455_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10);
lean_inc_ref(v_funTypes_1247_);
v___x_1456_ = lean_array_to_list(v_funTypes_1247_);
v___x_1457_ = lean_box(0);
v___x_1458_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1456_, v___x_1457_);
v___x_1459_ = l_Lean_MessageData_ofList(v___x_1458_);
v___x_1460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1455_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12);
v___x_1462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1460_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
lean_inc_ref(v_motives_1248_);
v___x_1463_ = lean_array_to_list(v_motives_1248_);
v___x_1464_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1463_, v___x_1457_);
v___x_1465_ = l_Lean_MessageData_ofList(v___x_1464_);
v___x_1466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1462_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
lean_inc(v___x_1236_);
v___x_1467_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_1236_, v___x_1466_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_dec_ref(v___x_1467_);
v___y_1410_ = v___y_1249_;
v___y_1411_ = v___y_1250_;
v___y_1412_ = v___y_1251_;
v___y_1413_ = v___y_1252_;
goto v___jp_1409_;
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1475_; 
lean_dec_ref(v_motives_1248_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1470_ = v___x_1467_;
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1467_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
v___jp_1254_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1261_ = l_Array_zip___redArg(v_recArgInfos_1237_, v_a_1238_);
lean_dec_ref(v_recArgInfos_1237_);
v___x_1262_ = lean_array_get_size(v___x_1261_);
v___x_1263_ = lean_mk_empty_array_with_capacity(v___x_1262_);
lean_inc(v___x_1240_);
v___x_1264_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(v___x_1239_, v___y_1255_, v___y_1256_, v_funTypes_1247_, v___x_1261_, v___x_1262_, v___x_1240_, v___x_1263_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec_ref(v___x_1261_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref(v___x_1264_);
v___x_1266_ = l_Array_zip___redArg(v_a_1238_, v_a_1265_);
lean_dec(v_a_1265_);
v___x_1267_ = lean_array_get_size(v___x_1266_);
v___x_1268_ = lean_mk_empty_array_with_capacity(v___x_1267_);
lean_inc(v___x_1240_);
v___x_1269_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(v_fixedParamPerms_1241_, v_xs_1242_, v___x_1266_, v___x_1267_, v___x_1240_, v___x_1268_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec_ref(v___x_1266_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1279_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1279_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1279_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1274_ = lean_mk_empty_array_with_capacity(v___x_1240_);
v___x_1275_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v_preDefs_1243_, v_a_1270_, v___x_1240_, v___x_1274_);
lean_dec(v_a_1270_);
lean_dec_ref(v_preDefs_1243_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1277_ = v___x_1272_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec_ref(v_preDefs_1243_);
lean_dec(v___x_1240_);
v_a_1280_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1269_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1269_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
v_a_1288_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1264_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1264_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
v___jp_1296_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_inc_ref(v___y_1297_);
lean_inc(v___x_1240_);
v___x_1303_ = lean_apply_1(v___y_1297_, v___x_1240_);
v___x_1304_ = lean_unsigned_to_nat(1u);
v___x_1305_ = lean_nat_add(v_numIndices_1244_, v___x_1304_);
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2);
v___x_1308_ = lean_mk_array(v___x_1305_, v___x_1307_);
v___x_1309_ = l_Lean_mkAppN(v___x_1303_, v___x_1308_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = lean_array_get_size(v___x_1239_);
v___x_1311_ = l_Lean_Meta_inferArgumentTypesN(v___x_1310_, v___x_1309_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref(v___x_1311_);
v___x_1313_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v___f_1245_, v___x_1239_, v_a_1312_, v_FArgs_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec_ref(v_FArgs_1298_);
lean_dec(v_a_1312_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_object* v_a_1314_; lean_object* v___x_1315_; lean_object* v_a_1316_; uint8_t v___x_1317_; 
v_a_1314_ = lean_ctor_get(v___x_1313_, 0);
lean_inc(v_a_1314_);
lean_dec_ref(v___x_1313_);
lean_inc(v___x_1236_);
v___x_1315_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1236_, v___y_1301_);
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1316_);
lean_dec_ref(v___x_1315_);
v___x_1317_ = lean_unbox(v_a_1316_);
lean_dec(v_a_1316_);
if (v___x_1317_ == 0)
{
lean_dec(v___x_1236_);
v___y_1255_ = v___y_1297_;
v___y_1256_ = v_a_1314_;
v___y_1257_ = v___y_1299_;
v___y_1258_ = v___y_1300_;
v___y_1259_ = v___y_1301_;
v___y_1260_ = v___y_1302_;
goto v___jp_1254_;
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1318_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4);
lean_inc(v_a_1314_);
v___x_1319_ = lean_array_to_list(v_a_1314_);
v___x_1320_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1319_, v___x_1306_);
v___x_1321_ = l_Lean_MessageData_ofList(v___x_1320_);
v___x_1322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1318_);
lean_ctor_set(v___x_1322_, 1, v___x_1321_);
v___x_1323_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_1236_, v___x_1322_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_dec_ref(v___x_1323_);
v___y_1255_ = v___y_1297_;
v___y_1256_ = v_a_1314_;
v___y_1257_ = v___y_1299_;
v___y_1258_ = v___y_1300_;
v___y_1259_ = v___y_1301_;
v___y_1260_ = v___y_1302_;
goto v___jp_1254_;
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
lean_dec(v_a_1314_);
lean_dec_ref(v___y_1297_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec_ref(v___y_1297_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1332_ = lean_ctor_get(v___x_1313_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1313_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1313_);
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
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec_ref(v_FArgs_1298_);
lean_dec_ref(v___y_1297_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1340_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1311_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1311_);
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
v___jp_1348_:
{
if (v_a_1246_ == 0)
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v_levelParams_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1355_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_1356_ = lean_array_get_borrowed(v___x_1355_, v_preDefs_1243_, v___x_1240_);
v_levelParams_1357_ = lean_ctor_get(v___x_1356_, 1);
v___x_1358_ = lean_box(0);
lean_inc(v_levelParams_1357_);
v___x_1359_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(v_levelParams_1357_, v___x_1358_);
v___x_1360_ = lean_array_get_size(v___y_1350_);
v___x_1361_ = lean_mk_empty_array_with_capacity(v___x_1360_);
lean_inc(v___x_1240_);
v___x_1362_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(v_xs_1242_, v_a_1246_, v_preDefs_1243_, v___x_1359_, v___y_1350_, v___x_1360_, v___x_1240_, v___x_1361_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec_ref(v___y_1350_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref(v___x_1362_);
v___y_1297_ = v___y_1349_;
v_FArgs_1298_ = v_a_1363_;
v___y_1299_ = v___y_1351_;
v___y_1300_ = v___y_1352_;
v___y_1301_ = v___y_1353_;
v___y_1302_ = v___y_1354_;
goto v___jp_1296_;
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec_ref(v___y_1349_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1364_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1362_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1362_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
else
{
v___y_1297_ = v___y_1349_;
v_FArgs_1298_ = v___y_1350_;
v___y_1299_ = v___y_1351_;
v___y_1300_ = v___y_1352_;
v___y_1301_ = v___y_1353_;
v___y_1302_ = v___y_1354_;
goto v___jp_1296_;
}
}
v___jp_1372_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1379_ = lean_array_get_size(v_recArgInfos_1237_);
v___x_1380_ = lean_mk_empty_array_with_capacity(v___x_1379_);
lean_inc(v___x_1240_);
lean_inc_ref(v___y_1373_);
lean_inc_ref(v_preDefs_1243_);
lean_inc_ref(v___x_1239_);
lean_inc_ref(v_recArgInfos_1237_);
v___x_1381_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg(v_a_1246_, v_a_1238_, v___y_1374_, v_recArgInfos_1237_, v___x_1239_, v_preDefs_1243_, v___y_1373_, v_recArgInfos_1237_, v___x_1379_, v___x_1240_, v___x_1380_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
lean_dec_ref(v___y_1374_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1383_; lean_object* v_a_1384_; uint8_t v___x_1385_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref(v___x_1381_);
lean_inc(v___x_1236_);
v___x_1383_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1236_, v___y_1377_);
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref(v___x_1383_);
v___x_1385_ = lean_unbox(v_a_1384_);
lean_dec(v_a_1384_);
if (v___x_1385_ == 0)
{
v___y_1349_ = v___y_1373_;
v___y_1350_ = v_a_1382_;
v___y_1351_ = v___y_1375_;
v___y_1352_ = v___y_1376_;
v___y_1353_ = v___y_1377_;
v___y_1354_ = v___y_1378_;
goto v___jp_1348_;
}
else
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1386_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6);
lean_inc(v_a_1382_);
v___x_1387_ = lean_array_to_list(v_a_1382_);
v___x_1388_ = lean_box(0);
v___x_1389_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1387_, v___x_1388_);
v___x_1390_ = l_Lean_MessageData_ofList(v___x_1389_);
v___x_1391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1386_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
lean_inc(v___x_1236_);
v___x_1392_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_1236_, v___x_1391_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_dec_ref(v___x_1392_);
v___y_1349_ = v___y_1373_;
v___y_1350_ = v_a_1382_;
v___y_1351_ = v___y_1375_;
v___y_1352_ = v___y_1376_;
v___y_1353_ = v___y_1377_;
v___y_1354_ = v___y_1378_;
goto v___jp_1348_;
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec(v_a_1382_);
lean_dec_ref(v___y_1373_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec_ref(v___y_1373_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1401_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1381_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1381_);
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
v___jp_1409_:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_1237_, v___x_1239_, v_motives_1248_, v_a_1246_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
lean_dec_ref(v_motives_1248_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1416_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref(v___x_1414_);
lean_inc(v_a_1415_);
lean_inc_ref(v___x_1239_);
v___x_1416_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_1237_, v___x_1239_, v_a_1415_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1418_; lean_object* v_a_1419_; uint8_t v___x_1420_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref(v___x_1416_);
lean_inc(v___x_1236_);
v___x_1418_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1236_, v___y_1412_);
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref(v___x_1418_);
v___x_1420_ = lean_unbox(v_a_1419_);
lean_dec(v_a_1419_);
if (v___x_1420_ == 0)
{
v___y_1373_ = v_a_1415_;
v___y_1374_ = v_a_1417_;
v___y_1375_ = v___y_1410_;
v___y_1376_ = v___y_1411_;
v___y_1377_ = v___y_1412_;
v___y_1378_ = v___y_1413_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1421_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8);
lean_inc(v_a_1417_);
v___x_1422_ = lean_array_to_list(v_a_1417_);
v___x_1423_ = lean_box(0);
v___x_1424_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1422_, v___x_1423_);
v___x_1425_ = l_Lean_MessageData_ofList(v___x_1424_);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1421_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
lean_inc(v___x_1236_);
v___x_1427_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_1236_, v___x_1426_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_dec_ref(v___x_1427_);
v___y_1373_ = v_a_1415_;
v___y_1374_ = v_a_1417_;
v___y_1375_ = v___y_1410_;
v___y_1376_ = v___y_1411_;
v___y_1377_ = v___y_1412_;
v___y_1378_ = v___y_1413_;
goto v___jp_1372_;
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
lean_dec(v_a_1417_);
lean_dec(v_a_1415_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
v_a_1428_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1427_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1427_);
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
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec(v_a_1415_);
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
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
lean_dec_ref(v_funTypes_1247_);
lean_dec_ref(v___f_1245_);
lean_dec_ref(v_preDefs_1243_);
lean_dec_ref(v_xs_1242_);
lean_dec_ref(v_fixedParamPerms_1241_);
lean_dec(v___x_1240_);
lean_dec_ref(v___x_1239_);
lean_dec_ref(v_recArgInfos_1237_);
lean_dec(v___x_1236_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed(lean_object** _args){
lean_object* v___x_1476_ = _args[0];
lean_object* v_recArgInfos_1477_ = _args[1];
lean_object* v_a_1478_ = _args[2];
lean_object* v___x_1479_ = _args[3];
lean_object* v___x_1480_ = _args[4];
lean_object* v_fixedParamPerms_1481_ = _args[5];
lean_object* v_xs_1482_ = _args[6];
lean_object* v_preDefs_1483_ = _args[7];
lean_object* v_numIndices_1484_ = _args[8];
lean_object* v___f_1485_ = _args[9];
lean_object* v_a_1486_ = _args[10];
lean_object* v_funTypes_1487_ = _args[11];
lean_object* v_motives_1488_ = _args[12];
lean_object* v___y_1489_ = _args[13];
lean_object* v___y_1490_ = _args[14];
lean_object* v___y_1491_ = _args[15];
lean_object* v___y_1492_ = _args[16];
lean_object* v___y_1493_ = _args[17];
_start:
{
uint8_t v_a_28084__boxed_1494_; lean_object* v_res_1495_; 
v_a_28084__boxed_1494_ = lean_unbox(v_a_1486_);
v_res_1495_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_1476_, v_recArgInfos_1477_, v_a_1478_, v___x_1479_, v___x_1480_, v_fixedParamPerms_1481_, v_xs_1482_, v_preDefs_1483_, v_numIndices_1484_, v___f_1485_, v_a_28084__boxed_1494_, v_funTypes_1487_, v_motives_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v_numIndices_1484_);
lean_dec_ref(v_a_1478_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(lean_object* v_a_1496_, lean_object* v_funTypes_1497_, lean_object* v_as_1498_, lean_object* v_i_1499_, lean_object* v_j_1500_, lean_object* v_bs_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_zero_1507_; uint8_t v_isZero_1508_; 
v_zero_1507_ = lean_unsigned_to_nat(0u);
v_isZero_1508_ = lean_nat_dec_eq(v_i_1499_, v_zero_1507_);
if (v_isZero_1508_ == 1)
{
lean_object* v___x_1509_; 
lean_dec(v_j_1500_);
lean_dec(v_i_1499_);
v___x_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1509_, 0, v_bs_1501_);
return v___x_1509_;
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1510_ = l_Lean_instInhabitedExpr;
v___x_1511_ = lean_array_fget_borrowed(v_as_1498_, v_j_1500_);
v___x_1512_ = lean_array_get_borrowed(v___x_1510_, v_a_1496_, v_j_1500_);
v___x_1513_ = lean_array_get_borrowed(v___x_1510_, v_funTypes_1497_, v_j_1500_);
lean_inc(v___x_1513_);
lean_inc(v___x_1512_);
lean_inc(v___x_1511_);
v___x_1514_ = l_Lean_Elab_Structural_mkIndPredBRecOnMotive(v___x_1511_, v___x_1512_, v___x_1513_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v_a_1515_; lean_object* v_one_1516_; lean_object* v_n_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
lean_inc(v_a_1515_);
lean_dec_ref(v___x_1514_);
v_one_1516_ = lean_unsigned_to_nat(1u);
v_n_1517_ = lean_nat_sub(v_i_1499_, v_one_1516_);
lean_dec(v_i_1499_);
v___x_1518_ = lean_nat_add(v_j_1500_, v_one_1516_);
lean_dec(v_j_1500_);
v___x_1519_ = lean_array_push(v_bs_1501_, v_a_1515_);
v_i_1499_ = v_n_1517_;
v_j_1500_ = v___x_1518_;
v_bs_1501_ = v___x_1519_;
goto _start;
}
else
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec_ref(v_bs_1501_);
lean_dec(v_j_1500_);
lean_dec(v_i_1499_);
v_a_1521_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1514_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1514_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg___boxed(lean_object* v_a_1529_, lean_object* v_funTypes_1530_, lean_object* v_as_1531_, lean_object* v_i_1532_, lean_object* v_j_1533_, lean_object* v_bs_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(v_a_1529_, v_funTypes_1530_, v_as_1531_, v_i_1532_, v_j_1533_, v_bs_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec_ref(v_as_1531_);
lean_dec_ref(v_funTypes_1530_);
lean_dec_ref(v_a_1529_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(lean_object* v_recArgInfos_1541_, lean_object* v_a_1542_, lean_object* v___x_1543_, lean_object* v___f_1544_, lean_object* v_funTypes_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = lean_array_get_size(v_recArgInfos_1541_);
v___x_1552_ = lean_mk_empty_array_with_capacity(v___x_1551_);
v___x_1553_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(v_a_1542_, v_funTypes_1545_, v_recArgInfos_1541_, v___x_1551_, v___x_1543_, v___x_1552_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1555_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1554_);
lean_dec_ref(v___x_1553_);
lean_inc(v___y_1549_);
lean_inc_ref(v___y_1548_);
lean_inc(v___y_1547_);
lean_inc_ref(v___y_1546_);
v___x_1555_ = lean_apply_7(v___f_1544_, v_funTypes_1545_, v_a_1554_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, lean_box(0));
return v___x_1555_;
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec_ref(v_funTypes_1545_);
lean_dec_ref(v___f_1544_);
v_a_1556_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1553_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1553_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed(lean_object* v_recArgInfos_1564_, lean_object* v_a_1565_, lean_object* v___x_1566_, lean_object* v___f_1567_, lean_object* v_funTypes_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(v_recArgInfos_1564_, v_a_1565_, v___x_1566_, v___f_1567_, v_funTypes_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec_ref(v_a_1565_);
lean_dec_ref(v_recArgInfos_1564_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
if (lean_obj_tag(v_a_1575_) == 0)
{
lean_object* v___x_1577_; 
v___x_1577_ = l_List_reverse___redArg(v_a_1576_);
return v___x_1577_;
}
else
{
lean_object* v_head_1578_; lean_object* v_tail_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1590_; 
v_head_1578_ = lean_ctor_get(v_a_1575_, 0);
v_tail_1579_ = lean_ctor_get(v_a_1575_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_a_1575_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1581_ = v_a_1575_;
v_isShared_1582_ = v_isSharedCheck_1590_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_tail_1579_);
lean_inc(v_head_1578_);
lean_dec(v_a_1575_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1590_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1583_ = l_Nat_reprFast(v_head_1578_);
v___x_1584_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
v___x_1585_ = l_Lean_MessageData_ofFormat(v___x_1584_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 1, v_a_1576_);
lean_ctor_set(v___x_1581_, 0, v___x_1585_);
v___x_1587_ = v___x_1581_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_a_1576_);
v___x_1587_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
v_a_1575_ = v_tail_1579_;
v_a_1576_ = v___x_1587_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__21(lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
if (lean_obj_tag(v_a_1591_) == 0)
{
lean_object* v___x_1593_; 
v___x_1593_ = l_List_reverse___redArg(v_a_1592_);
return v___x_1593_;
}
else
{
lean_object* v_head_1594_; lean_object* v_tail_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1607_; 
v_head_1594_ = lean_ctor_get(v_a_1591_, 0);
v_tail_1595_ = lean_ctor_get(v_a_1591_, 1);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_a_1591_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1597_ = v_a_1591_;
v_isShared_1598_ = v_isSharedCheck_1607_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_tail_1595_);
lean_inc(v_head_1594_);
lean_dec(v_a_1591_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1607_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1604_; 
v___x_1599_ = lean_array_to_list(v_head_1594_);
v___x_1600_ = lean_box(0);
v___x_1601_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(v___x_1599_, v___x_1600_);
v___x_1602_ = l_Lean_MessageData_ofList(v___x_1601_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v_a_1592_);
lean_ctor_set(v___x_1597_, 0, v___x_1602_);
v___x_1604_ = v___x_1597_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_a_1592_);
v___x_1604_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
v_a_1591_ = v_tail_1595_;
v_a_1592_ = v___x_1604_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(lean_object* v_as_1609_, lean_object* v_lo_1610_, lean_object* v_hi_1611_){
_start:
{
uint8_t v___x_1612_; 
v___x_1612_ = lean_nat_dec_lt(v_lo_1610_, v_hi_1611_);
if (v___x_1612_ == 0)
{
lean_dec(v_lo_1610_);
return v_as_1609_;
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v_fst_1615_; lean_object* v_snd_1616_; uint8_t v___x_1617_; 
v___x_1613_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0));
lean_inc(v_lo_1610_);
v___x_1614_ = l_Array_qpartition___redArg(v_as_1609_, v___x_1613_, v_lo_1610_, v_hi_1611_);
v_fst_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_fst_1615_);
v_snd_1616_ = lean_ctor_get(v___x_1614_, 1);
lean_inc(v_snd_1616_);
lean_dec_ref(v___x_1614_);
v___x_1617_ = lean_nat_dec_le(v_hi_1611_, v_fst_1615_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1618_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v_snd_1616_, v_lo_1610_, v_fst_1615_);
v___x_1619_ = lean_unsigned_to_nat(1u);
v___x_1620_ = lean_nat_add(v_fst_1615_, v___x_1619_);
lean_dec(v_fst_1615_);
v_as_1609_ = v___x_1618_;
v_lo_1610_ = v___x_1620_;
goto _start;
}
else
{
lean_dec(v_fst_1615_);
lean_dec(v_lo_1610_);
return v_snd_1616_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___boxed(lean_object* v_as_1622_, lean_object* v_lo_1623_, lean_object* v_hi_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v_as_1622_, v_lo_1623_, v_hi_1624_);
lean_dec(v_hi_1624_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(lean_object* v_xs_1626_, lean_object* v_f_1627_, lean_object* v_x_1628_, lean_object* v_as_1629_, size_t v_i_1630_, size_t v_stop_1631_, lean_object* v_b_1632_){
_start:
{
lean_object* v___y_1634_; uint8_t v___x_1638_; 
v___x_1638_ = lean_usize_dec_eq(v_i_1630_, v_stop_1631_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1639_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_1640_ = lean_array_uget_borrowed(v_as_1629_, v_i_1630_);
v___x_1641_ = lean_array_get_borrowed(v___x_1639_, v_xs_1626_, v___x_1640_);
lean_inc_ref(v_f_1627_);
lean_inc(v___x_1641_);
v___x_1642_ = lean_apply_1(v_f_1627_, v___x_1641_);
v___x_1643_ = lean_nat_dec_eq(v___x_1642_, v_x_1628_);
lean_dec(v___x_1642_);
if (v___x_1643_ == 0)
{
v___y_1634_ = v_b_1632_;
goto v___jp_1633_;
}
else
{
lean_object* v___x_1644_; 
lean_inc(v___x_1640_);
v___x_1644_ = lean_array_push(v_b_1632_, v___x_1640_);
v___y_1634_ = v___x_1644_;
goto v___jp_1633_;
}
}
else
{
lean_dec_ref(v_f_1627_);
return v_b_1632_;
}
v___jp_1633_:
{
size_t v___x_1635_; size_t v___x_1636_; 
v___x_1635_ = ((size_t)1ULL);
v___x_1636_ = lean_usize_add(v_i_1630_, v___x_1635_);
v_i_1630_ = v___x_1636_;
v_b_1632_ = v___y_1634_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___boxed(lean_object* v_xs_1645_, lean_object* v_f_1646_, lean_object* v_x_1647_, lean_object* v_as_1648_, lean_object* v_i_1649_, lean_object* v_stop_1650_, lean_object* v_b_1651_){
_start:
{
size_t v_i_boxed_1652_; size_t v_stop_boxed_1653_; lean_object* v_res_1654_; 
v_i_boxed_1652_ = lean_unbox_usize(v_i_1649_);
lean_dec(v_i_1649_);
v_stop_boxed_1653_ = lean_unbox_usize(v_stop_1650_);
lean_dec(v_stop_1650_);
v_res_1654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(v_xs_1645_, v_f_1646_, v_x_1647_, v_as_1648_, v_i_boxed_1652_, v_stop_boxed_1653_, v_b_1651_);
lean_dec_ref(v_as_1648_);
lean_dec(v_x_1647_);
lean_dec_ref(v_xs_1645_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(lean_object* v_xs_1657_, lean_object* v_f_1658_, size_t v_sz_1659_, size_t v_i_1660_, lean_object* v_bs_1661_){
_start:
{
uint8_t v___x_1662_; 
v___x_1662_ = lean_usize_dec_lt(v_i_1660_, v_sz_1659_);
if (v___x_1662_ == 0)
{
lean_dec_ref(v_f_1658_);
return v_bs_1661_;
}
else
{
lean_object* v_v_1663_; lean_object* v___x_1664_; lean_object* v_bs_x27_1665_; lean_object* v___y_1667_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; 
v_v_1663_ = lean_array_uget(v_bs_1661_, v_i_1660_);
v___x_1664_ = lean_unsigned_to_nat(0u);
v_bs_x27_1665_ = lean_array_uset(v_bs_1661_, v_i_1660_, v___x_1664_);
v___x_1672_ = lean_array_get_size(v_xs_1657_);
v___x_1673_ = l_Array_range(v___x_1672_);
v___x_1674_ = lean_array_get_size(v___x_1673_);
v___x_1675_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___closed__0));
v___x_1676_ = lean_nat_dec_lt(v___x_1664_, v___x_1674_);
if (v___x_1676_ == 0)
{
lean_dec_ref(v___x_1673_);
lean_dec(v_v_1663_);
v___y_1667_ = v___x_1675_;
goto v___jp_1666_;
}
else
{
uint8_t v___x_1677_; 
v___x_1677_ = lean_nat_dec_le(v___x_1674_, v___x_1674_);
if (v___x_1677_ == 0)
{
if (v___x_1676_ == 0)
{
lean_dec_ref(v___x_1673_);
lean_dec(v_v_1663_);
v___y_1667_ = v___x_1675_;
goto v___jp_1666_;
}
else
{
size_t v___x_1678_; size_t v___x_1679_; lean_object* v___x_1680_; 
v___x_1678_ = ((size_t)0ULL);
v___x_1679_ = lean_usize_of_nat(v___x_1674_);
lean_inc_ref(v_f_1658_);
v___x_1680_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(v_xs_1657_, v_f_1658_, v_v_1663_, v___x_1673_, v___x_1678_, v___x_1679_, v___x_1675_);
lean_dec_ref(v___x_1673_);
lean_dec(v_v_1663_);
v___y_1667_ = v___x_1680_;
goto v___jp_1666_;
}
}
else
{
size_t v___x_1681_; size_t v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = ((size_t)0ULL);
v___x_1682_ = lean_usize_of_nat(v___x_1674_);
lean_inc_ref(v_f_1658_);
v___x_1683_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(v_xs_1657_, v_f_1658_, v_v_1663_, v___x_1673_, v___x_1681_, v___x_1682_, v___x_1675_);
lean_dec_ref(v___x_1673_);
lean_dec(v_v_1663_);
v___y_1667_ = v___x_1683_;
goto v___jp_1666_;
}
}
v___jp_1666_:
{
size_t v___x_1668_; size_t v___x_1669_; lean_object* v___x_1670_; 
v___x_1668_ = ((size_t)1ULL);
v___x_1669_ = lean_usize_add(v_i_1660_, v___x_1668_);
v___x_1670_ = lean_array_uset(v_bs_x27_1665_, v_i_1660_, v___y_1667_);
v_i_1660_ = v___x_1669_;
v_bs_1661_ = v___x_1670_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___boxed(lean_object* v_xs_1684_, lean_object* v_f_1685_, lean_object* v_sz_1686_, lean_object* v_i_1687_, lean_object* v_bs_1688_){
_start:
{
size_t v_sz_boxed_1689_; size_t v_i_boxed_1690_; lean_object* v_res_1691_; 
v_sz_boxed_1689_ = lean_unbox_usize(v_sz_1686_);
lean_dec(v_sz_1686_);
v_i_boxed_1690_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_res_1691_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(v_xs_1684_, v_f_1685_, v_sz_boxed_1689_, v_i_boxed_1690_, v_bs_1688_);
lean_dec_ref(v_xs_1684_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(lean_object* v_as_1692_, size_t v_i_1693_, size_t v_stop_1694_, lean_object* v_b_1695_){
_start:
{
uint8_t v___x_1696_; 
v___x_1696_ = lean_usize_dec_eq(v_i_1693_, v_stop_1694_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1698_; size_t v___x_1699_; size_t v___x_1700_; 
v___x_1697_ = lean_array_uget_borrowed(v_as_1692_, v_i_1693_);
v___x_1698_ = l_Array_append___redArg(v_b_1695_, v___x_1697_);
v___x_1699_ = ((size_t)1ULL);
v___x_1700_ = lean_usize_add(v_i_1693_, v___x_1699_);
v_i_1693_ = v___x_1700_;
v_b_1695_ = v___x_1698_;
goto _start;
}
else
{
return v_b_1695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12___boxed(lean_object* v_as_1702_, lean_object* v_i_1703_, lean_object* v_stop_1704_, lean_object* v_b_1705_){
_start:
{
size_t v_i_boxed_1706_; size_t v_stop_boxed_1707_; lean_object* v_res_1708_; 
v_i_boxed_1706_ = lean_unbox_usize(v_i_1703_);
lean_dec(v_i_1703_);
v_stop_boxed_1707_ = lean_unbox_usize(v_stop_1704_);
lean_dec(v_stop_1704_);
v_res_1708_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(v_as_1702_, v_i_boxed_1706_, v_stop_boxed_1707_, v_b_1705_);
lean_dec_ref(v_as_1702_);
return v_res_1708_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(lean_object* v_xs_1709_, lean_object* v_ys_1710_, lean_object* v_x_1711_){
_start:
{
lean_object* v_zero_1712_; uint8_t v_isZero_1713_; 
v_zero_1712_ = lean_unsigned_to_nat(0u);
v_isZero_1713_ = lean_nat_dec_eq(v_x_1711_, v_zero_1712_);
if (v_isZero_1713_ == 1)
{
lean_dec(v_x_1711_);
return v_isZero_1713_;
}
else
{
lean_object* v_one_1714_; lean_object* v_n_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; 
v_one_1714_ = lean_unsigned_to_nat(1u);
v_n_1715_ = lean_nat_sub(v_x_1711_, v_one_1714_);
lean_dec(v_x_1711_);
v___x_1716_ = lean_array_fget_borrowed(v_xs_1709_, v_n_1715_);
v___x_1717_ = lean_array_fget_borrowed(v_ys_1710_, v_n_1715_);
v___x_1718_ = lean_nat_dec_eq(v___x_1716_, v___x_1717_);
if (v___x_1718_ == 0)
{
lean_dec(v_n_1715_);
return v___x_1718_;
}
else
{
v_x_1711_ = v_n_1715_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg___boxed(lean_object* v_xs_1720_, lean_object* v_ys_1721_, lean_object* v_x_1722_){
_start:
{
uint8_t v_res_1723_; lean_object* v_r_1724_; 
v_res_1723_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(v_xs_1720_, v_ys_1721_, v_x_1722_);
lean_dec_ref(v_ys_1721_);
lean_dec_ref(v_xs_1720_);
v_r_1724_ = lean_box(v_res_1723_);
return v_r_1724_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Array_instInhabited(lean_box(0));
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8(lean_object* v_msg_1726_){
_start:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0);
v___x_1728_ = lean_panic_fn_borrowed(v___x_1727_, v_msg_1726_);
return v___x_1728_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1731_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__1));
v___x_1732_ = lean_unsigned_to_nat(2u);
v___x_1733_ = lean_unsigned_to_nat(63u);
v___x_1734_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__0));
v___x_1735_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0));
v___x_1736_ = l_mkPanicMessageWithDecl(v___x_1735_, v___x_1734_, v___x_1733_, v___x_1732_, v___x_1731_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(lean_object* v_f_1739_, lean_object* v_xs_1740_, lean_object* v_ys_1741_){
_start:
{
size_t v_sz_1745_; size_t v___x_1746_; lean_object* v_positions_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___y_1751_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v___y_1760_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1769_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v_sz_1745_ = lean_array_size(v_ys_1741_);
v___x_1746_ = ((size_t)0ULL);
v_positions_1747_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(v_xs_1740_, v_f_1739_, v_sz_1745_, v___x_1746_, v_ys_1741_);
v___x_1748_ = lean_array_get_size(v_xs_1740_);
v___x_1749_ = l_Array_range(v___x_1748_);
v___x_1776_ = lean_unsigned_to_nat(0u);
v___x_1777_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__3));
v___x_1778_ = lean_array_get_size(v_positions_1747_);
v___x_1779_ = lean_nat_dec_lt(v___x_1776_, v___x_1778_);
if (v___x_1779_ == 0)
{
v___y_1769_ = v___x_1777_;
goto v___jp_1768_;
}
else
{
uint8_t v___x_1780_; 
v___x_1780_ = lean_nat_dec_le(v___x_1778_, v___x_1778_);
if (v___x_1780_ == 0)
{
if (v___x_1779_ == 0)
{
v___y_1769_ = v___x_1777_;
goto v___jp_1768_;
}
else
{
size_t v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = lean_usize_of_nat(v___x_1778_);
v___x_1782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(v_positions_1747_, v___x_1746_, v___x_1781_, v___x_1777_);
v___y_1769_ = v___x_1782_;
goto v___jp_1768_;
}
}
else
{
size_t v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = lean_usize_of_nat(v___x_1778_);
v___x_1784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(v_positions_1747_, v___x_1746_, v___x_1783_, v___x_1777_);
v___y_1769_ = v___x_1784_;
goto v___jp_1768_;
}
}
v___jp_1742_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__2, &l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__2_once, _init_l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___closed__2);
v___x_1744_ = l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8(v___x_1743_);
return v___x_1744_;
}
v___jp_1750_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1752_ = lean_array_get_size(v___x_1749_);
v___x_1753_ = lean_array_get_size(v___y_1751_);
v___x_1754_ = lean_nat_dec_eq(v___x_1752_, v___x_1753_);
if (v___x_1754_ == 0)
{
lean_dec_ref(v___y_1751_);
lean_dec_ref(v___x_1749_);
lean_dec_ref(v_positions_1747_);
goto v___jp_1742_;
}
else
{
uint8_t v___x_1755_; 
v___x_1755_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(v___x_1749_, v___y_1751_, v___x_1752_);
lean_dec_ref(v___y_1751_);
lean_dec_ref(v___x_1749_);
if (v___x_1755_ == 0)
{
lean_dec_ref(v_positions_1747_);
goto v___jp_1742_;
}
else
{
return v_positions_1747_;
}
}
}
v___jp_1756_:
{
lean_object* v___x_1761_; 
lean_dec(v___y_1759_);
v___x_1761_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v___y_1757_, v___y_1758_, v___y_1760_);
lean_dec(v___y_1760_);
v___y_1751_ = v___x_1761_;
goto v___jp_1750_;
}
v___jp_1762_:
{
uint8_t v___x_1767_; 
v___x_1767_ = lean_nat_dec_le(v___y_1766_, v___y_1764_);
if (v___x_1767_ == 0)
{
lean_dec(v___y_1764_);
lean_inc(v___y_1766_);
v___y_1757_ = v___y_1763_;
v___y_1758_ = v___y_1766_;
v___y_1759_ = v___y_1765_;
v___y_1760_ = v___y_1766_;
goto v___jp_1756_;
}
else
{
v___y_1757_ = v___y_1763_;
v___y_1758_ = v___y_1766_;
v___y_1759_ = v___y_1765_;
v___y_1760_ = v___y_1764_;
goto v___jp_1756_;
}
}
v___jp_1768_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1770_ = lean_array_get_size(v___y_1769_);
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_nat_dec_eq(v___x_1770_, v___x_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; 
v___x_1773_ = lean_unsigned_to_nat(1u);
v___x_1774_ = lean_nat_sub(v___x_1770_, v___x_1773_);
v___x_1775_ = lean_nat_dec_le(v___x_1771_, v___x_1774_);
if (v___x_1775_ == 0)
{
lean_inc(v___x_1774_);
v___y_1763_ = v___y_1769_;
v___y_1764_ = v___x_1774_;
v___y_1765_ = v___x_1770_;
v___y_1766_ = v___x_1774_;
goto v___jp_1762_;
}
else
{
v___y_1763_ = v___y_1769_;
v___y_1764_ = v___x_1774_;
v___y_1765_ = v___x_1770_;
v___y_1766_ = v___x_1771_;
goto v___jp_1762_;
}
}
else
{
v___y_1751_ = v___y_1769_;
goto v___jp_1750_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___boxed(lean_object* v_f_1785_, lean_object* v_xs_1786_, lean_object* v_ys_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(v_f_1785_, v_xs_1786_, v_ys_1787_);
lean_dec_ref(v_xs_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(lean_object* v_msg_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_ref_1795_; lean_object* v___x_1796_; lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1805_; 
v_ref_1795_ = lean_ctor_get(v___y_1792_, 5);
v___x_1796_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__22(v_msg_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1799_ = v___x_1796_;
v_isShared_1800_ = v_isSharedCheck_1805_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1796_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1805_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1801_; lean_object* v___x_1803_; 
lean_inc(v_ref_1795_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v_ref_1795_);
lean_ctor_set(v___x_1801_, 1, v_a_1797_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set_tag(v___x_1799_, 1);
lean_ctor_set(v___x_1799_, 0, v___x_1801_);
v___x_1803_ = v___x_1799_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg___boxed(lean_object* v_msg_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v_msg_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
return v_res_1812_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1814_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0));
v___x_1815_ = l_Lean_stringToMessageData(v___x_1814_);
return v___x_1815_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1817_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2));
v___x_1818_ = l_Lean_stringToMessageData(v___x_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(lean_object* v_constName_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v___x_1825_; lean_object* v_env_1826_; lean_object* v___x_1827_; 
v___x_1825_ = lean_st_ref_get(v___y_1823_);
v_env_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc_ref(v_env_1826_);
lean_dec(v___x_1825_);
lean_inc(v_constName_1819_);
v___x_1827_ = l_Lean_isInductiveCore_x3f(v_env_1826_, v_constName_1819_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v___x_1828_; uint8_t v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1828_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1);
v___x_1829_ = 0;
v___x_1830_ = l_Lean_MessageData_ofConstName(v_constName_1819_, v___x_1829_);
v___x_1831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1828_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
v___x_1832_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3);
v___x_1833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1831_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v___x_1834_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_1833_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_);
return v___x_1834_;
}
else
{
lean_object* v_val_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1842_; 
lean_dec(v_constName_1819_);
v_val_1835_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1837_ = v___x_1827_;
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_val_1835_);
lean_dec(v___x_1827_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1840_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set_tag(v___x_1837_, 0);
v___x_1840_ = v___x_1837_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_val_1835_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___boxed(lean_object* v_constName_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(v_constName_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg(lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_as_1852_, lean_object* v_i_1853_, lean_object* v_j_1854_, lean_object* v_bs_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v_zero_1861_; uint8_t v_isZero_1862_; 
v_zero_1861_ = lean_unsigned_to_nat(0u);
v_isZero_1862_ = lean_nat_dec_eq(v_i_1853_, v_zero_1861_);
if (v_isZero_1862_ == 1)
{
lean_object* v___x_1863_; 
lean_dec(v_j_1854_);
lean_dec(v_i_1853_);
v___x_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1863_, 0, v_bs_1855_);
return v___x_1863_;
}
else
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1864_ = l_Lean_instInhabitedExpr;
v___x_1865_ = lean_array_fget_borrowed(v_as_1852_, v_j_1854_);
v___x_1866_ = lean_array_get_borrowed(v___x_1864_, v_a_1850_, v_j_1854_);
v___x_1867_ = lean_array_get_borrowed(v___x_1864_, v_a_1851_, v_j_1854_);
lean_inc(v___x_1867_);
lean_inc(v___x_1866_);
lean_inc(v___x_1865_);
v___x_1868_ = l_Lean_Elab_Structural_mkBRecOnMotive(v___x_1865_, v___x_1866_, v___x_1867_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v_one_1870_; lean_object* v_n_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_a_1869_);
lean_dec_ref(v___x_1868_);
v_one_1870_ = lean_unsigned_to_nat(1u);
v_n_1871_ = lean_nat_sub(v_i_1853_, v_one_1870_);
lean_dec(v_i_1853_);
v___x_1872_ = lean_nat_add(v_j_1854_, v_one_1870_);
lean_dec(v_j_1854_);
v___x_1873_ = lean_array_push(v_bs_1855_, v_a_1869_);
v_i_1853_ = v_n_1871_;
v_j_1854_ = v___x_1872_;
v_bs_1855_ = v___x_1873_;
goto _start;
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec_ref(v_bs_1855_);
lean_dec(v_j_1854_);
lean_dec(v_i_1853_);
v_a_1875_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1868_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1868_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg___boxed(lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_as_1885_, lean_object* v_i_1886_, lean_object* v_j_1887_, lean_object* v_bs_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg(v_a_1883_, v_a_1884_, v_as_1885_, v_i_1886_, v_j_1887_, v_bs_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec_ref(v_as_1885_);
lean_dec_ref(v_a_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(lean_object* v_fixedParamPerms_1895_, lean_object* v_xs_1896_, lean_object* v_as_1897_, lean_object* v_i_1898_, lean_object* v_j_1899_, lean_object* v_bs_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v_zero_1906_; uint8_t v_isZero_1907_; 
v_zero_1906_ = lean_unsigned_to_nat(0u);
v_isZero_1907_ = lean_nat_dec_eq(v_i_1898_, v_zero_1906_);
if (v_isZero_1907_ == 1)
{
lean_object* v___x_1908_; 
lean_dec(v_j_1899_);
lean_dec(v_i_1898_);
lean_dec_ref(v_xs_1896_);
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v_bs_1900_);
return v___x_1908_;
}
else
{
lean_object* v_perms_1909_; lean_object* v___x_1910_; lean_object* v_value_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v_perms_1909_ = lean_ctor_get(v_fixedParamPerms_1895_, 1);
v___x_1910_ = lean_array_fget_borrowed(v_as_1897_, v_j_1899_);
v_value_1911_ = lean_ctor_get(v___x_1910_, 7);
v___x_1912_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v___x_1913_ = lean_array_get_borrowed(v___x_1912_, v_perms_1909_, v_j_1899_);
lean_inc_ref(v_xs_1896_);
lean_inc_ref(v_value_1911_);
lean_inc(v___x_1913_);
v___x_1914_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_1913_, v_value_1911_, v_xs_1896_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v_one_1916_; lean_object* v_n_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref(v___x_1914_);
v_one_1916_ = lean_unsigned_to_nat(1u);
v_n_1917_ = lean_nat_sub(v_i_1898_, v_one_1916_);
lean_dec(v_i_1898_);
v___x_1918_ = lean_nat_add(v_j_1899_, v_one_1916_);
lean_dec(v_j_1899_);
v___x_1919_ = lean_array_push(v_bs_1900_, v_a_1915_);
v_i_1898_ = v_n_1917_;
v_j_1899_ = v___x_1918_;
v_bs_1900_ = v___x_1919_;
goto _start;
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
lean_dec_ref(v_bs_1900_);
lean_dec(v_j_1899_);
lean_dec(v_i_1898_);
lean_dec_ref(v_xs_1896_);
v_a_1921_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v___x_1914_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1914_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg___boxed(lean_object* v_fixedParamPerms_1929_, lean_object* v_xs_1930_, lean_object* v_as_1931_, lean_object* v_i_1932_, lean_object* v_j_1933_, lean_object* v_bs_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_1929_, v_xs_1930_, v_as_1931_, v_i_1932_, v_j_1933_, v_bs_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
lean_dec_ref(v_as_1931_);
lean_dec_ref(v_fixedParamPerms_1929_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(lean_object* v_fixedParamPerms_1941_, lean_object* v_xs_1942_, lean_object* v_as_1943_, lean_object* v_i_1944_, lean_object* v_j_1945_, lean_object* v_bs_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v_zero_1952_; uint8_t v_isZero_1953_; 
v_zero_1952_ = lean_unsigned_to_nat(0u);
v_isZero_1953_ = lean_nat_dec_eq(v_i_1944_, v_zero_1952_);
if (v_isZero_1953_ == 1)
{
lean_object* v___x_1954_; 
lean_dec(v_j_1945_);
lean_dec(v_i_1944_);
lean_dec_ref(v_xs_1942_);
v___x_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1954_, 0, v_bs_1946_);
return v___x_1954_;
}
else
{
lean_object* v_perms_1955_; lean_object* v___x_1956_; lean_object* v_type_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v_perms_1955_ = lean_ctor_get(v_fixedParamPerms_1941_, 1);
v___x_1956_ = lean_array_fget_borrowed(v_as_1943_, v_j_1945_);
v_type_1957_ = lean_ctor_get(v___x_1956_, 6);
v___x_1958_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v___x_1959_ = lean_array_get_borrowed(v___x_1958_, v_perms_1955_, v_j_1945_);
lean_inc_ref(v_xs_1942_);
lean_inc_ref(v_type_1957_);
lean_inc(v___x_1959_);
v___x_1960_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v___x_1959_, v_type_1957_, v_xs_1942_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v_one_1962_; lean_object* v_n_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
lean_inc(v_a_1961_);
lean_dec_ref(v___x_1960_);
v_one_1962_ = lean_unsigned_to_nat(1u);
v_n_1963_ = lean_nat_sub(v_i_1944_, v_one_1962_);
lean_dec(v_i_1944_);
v___x_1964_ = lean_nat_add(v_j_1945_, v_one_1962_);
lean_dec(v_j_1945_);
v___x_1965_ = lean_array_push(v_bs_1946_, v_a_1961_);
v_i_1944_ = v_n_1963_;
v_j_1945_ = v___x_1964_;
v_bs_1946_ = v___x_1965_;
goto _start;
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec_ref(v_bs_1946_);
lean_dec(v_j_1945_);
lean_dec(v_i_1944_);
lean_dec_ref(v_xs_1942_);
v_a_1967_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1960_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1960_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg___boxed(lean_object* v_fixedParamPerms_1975_, lean_object* v_xs_1976_, lean_object* v_as_1977_, lean_object* v_i_1978_, lean_object* v_j_1979_, lean_object* v_bs_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_1975_, v_xs_1976_, v_as_1977_, v_i_1978_, v_j_1979_, v_bs_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec_ref(v_as_1977_);
lean_dec_ref(v_fixedParamPerms_1975_);
return v_res_1986_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1999_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7));
v___x_2000_ = l_Lean_stringToMessageData(v___x_1999_);
return v___x_2000_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9));
v___x_2003_ = l_Lean_stringToMessageData(v___x_2002_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(lean_object* v_preDefs_2004_, lean_object* v_fixedParamPerms_2005_, lean_object* v_xs_2006_, lean_object* v_recArgInfos_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2013_ = lean_array_get_size(v_preDefs_2004_);
v___x_2014_ = lean_unsigned_to_nat(0u);
v___x_2015_ = lean_mk_empty_array_with_capacity(v___x_2013_);
lean_inc_ref(v___x_2015_);
lean_inc_ref(v_xs_2006_);
v___x_2016_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_2005_, v_xs_2006_, v_preDefs_2004_, v___x_2013_, v___x_2014_, v___x_2015_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2018_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2017_);
lean_dec_ref(v___x_2016_);
lean_inc_ref(v_xs_2006_);
v___x_2018_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_2005_, v_xs_2006_, v_preDefs_2004_, v___x_2013_, v___x_2014_, v___x_2015_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v_indGroupInst_2022_; lean_object* v_toIndGroupInfo_2023_; lean_object* v_all_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2109_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref(v___x_2018_);
v___x_2020_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_2021_ = lean_array_get_borrowed(v___x_2020_, v_recArgInfos_2007_, v___x_2014_);
v_indGroupInst_2022_ = lean_ctor_get(v___x_2021_, 4);
v_toIndGroupInfo_2023_ = lean_ctor_get(v_indGroupInst_2022_, 0);
lean_inc_ref(v_toIndGroupInfo_2023_);
v_all_2024_ = lean_ctor_get(v_toIndGroupInfo_2023_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v_toIndGroupInfo_2023_);
if (v_isSharedCheck_2109_ == 0)
{
lean_object* v_unused_2110_; 
v_unused_2110_ = lean_ctor_get(v_toIndGroupInfo_2023_, 1);
lean_dec(v_unused_2110_);
v___x_2026_ = v_toIndGroupInfo_2023_;
v_isShared_2027_ = v_isSharedCheck_2109_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_all_2024_);
lean_dec(v_toIndGroupInfo_2023_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2109_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2028_ = lean_box(0);
v___x_2029_ = lean_array_get(v___x_2028_, v_all_2024_, v___x_2014_);
lean_dec_ref(v_all_2024_);
v___x_2030_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(v___x_2029_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v_a_2034_; lean_object* v___f_2035_; lean_object* v___f_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___y_2041_; lean_object* v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2044_; uint8_t v___x_2077_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2031_);
lean_dec_ref(v___x_2030_);
v___x_2032_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3));
v___x_2033_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_2032_, v_a_2010_);
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref(v___x_2033_);
v___f_2035_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4));
v___f_2036_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5));
v___x_2037_ = l_Lean_InductiveVal_numTypeFormers(v_a_2031_);
v___x_2038_ = l_Array_range(v___x_2037_);
v___x_2039_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(v___f_2036_, v_recArgInfos_2007_, v___x_2038_);
v___x_2077_ = lean_unbox(v_a_2034_);
lean_dec(v_a_2034_);
if (v___x_2077_ == 0)
{
lean_del_object(v___x_2026_);
v___y_2041_ = v_a_2008_;
v___y_2042_ = v_a_2009_;
v___y_2043_ = v_a_2010_;
v___y_2044_ = v_a_2011_;
goto v___jp_2040_;
}
else
{
lean_object* v_toConstantVal_2078_; lean_object* v_name_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v_toConstantVal_2078_ = lean_ctor_get(v_a_2031_, 0);
v_name_2079_ = lean_ctor_get(v_toConstantVal_2078_, 0);
v___x_2080_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8);
lean_inc(v_name_2079_);
v___x_2081_ = l_Lean_MessageData_ofName(v_name_2079_);
if (v_isShared_2027_ == 0)
{
lean_ctor_set_tag(v___x_2026_, 7);
lean_ctor_set(v___x_2026_, 1, v___x_2081_);
lean_ctor_set(v___x_2026_, 0, v___x_2080_);
v___x_2083_ = v___x_2026_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2084_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10);
v___x_2085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2083_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
lean_inc_ref(v___x_2039_);
v___x_2086_ = lean_array_to_list(v___x_2039_);
v___x_2087_ = lean_box(0);
v___x_2088_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__21(v___x_2086_, v___x_2087_);
v___x_2089_ = l_Lean_MessageData_ofList(v___x_2088_);
v___x_2090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2085_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_2032_, v___x_2090_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_dec_ref(v___x_2091_);
v___y_2041_ = v_a_2008_;
v___y_2042_ = v_a_2009_;
v___y_2043_ = v_a_2010_;
v___y_2044_ = v_a_2011_;
goto v___jp_2040_;
}
else
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
lean_dec_ref(v___x_2039_);
lean_dec(v_a_2031_);
lean_dec(v_a_2019_);
lean_dec(v_a_2017_);
lean_dec_ref(v_recArgInfos_2007_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
}
v___jp_2040_:
{
lean_object* v_toConstantVal_2045_; lean_object* v_numIndices_2046_; lean_object* v_name_2047_; lean_object* v___x_2048_; 
v_toConstantVal_2045_ = lean_ctor_get(v_a_2031_, 0);
lean_inc_ref(v_toConstantVal_2045_);
v_numIndices_2046_ = lean_ctor_get(v_a_2031_, 2);
lean_inc(v_numIndices_2046_);
lean_dec(v_a_2031_);
v_name_2047_ = lean_ctor_get(v_toConstantVal_2045_, 0);
lean_inc(v_name_2047_);
lean_dec_ref(v_toConstantVal_2045_);
v___x_2048_ = l_Lean_Meta_isInductivePredicate(v_name_2047_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___f_2050_; uint8_t v___x_2051_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2049_);
lean_dec_ref(v___x_2048_);
lean_inc(v_a_2049_);
lean_inc(v_numIndices_2046_);
lean_inc_ref(v_preDefs_2004_);
lean_inc_ref(v_xs_2006_);
lean_inc_ref(v_fixedParamPerms_2005_);
lean_inc_ref(v___x_2039_);
lean_inc(v_a_2017_);
lean_inc_ref(v_recArgInfos_2007_);
v___f_2050_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed), 18, 11);
lean_closure_set(v___f_2050_, 0, v___x_2032_);
lean_closure_set(v___f_2050_, 1, v_recArgInfos_2007_);
lean_closure_set(v___f_2050_, 2, v_a_2017_);
lean_closure_set(v___f_2050_, 3, v___x_2039_);
lean_closure_set(v___f_2050_, 4, v___x_2014_);
lean_closure_set(v___f_2050_, 5, v_fixedParamPerms_2005_);
lean_closure_set(v___f_2050_, 6, v_xs_2006_);
lean_closure_set(v___f_2050_, 7, v_preDefs_2004_);
lean_closure_set(v___f_2050_, 8, v_numIndices_2046_);
lean_closure_set(v___f_2050_, 9, v___f_2035_);
lean_closure_set(v___f_2050_, 10, v_a_2049_);
v___x_2051_ = lean_unbox(v_a_2049_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_dec_ref(v___f_2050_);
v___x_2052_ = lean_array_get_size(v_recArgInfos_2007_);
v___x_2053_ = lean_mk_empty_array_with_capacity(v___x_2052_);
v___x_2054_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg(v_a_2017_, v_a_2019_, v_recArgInfos_2007_, v___x_2052_, v___x_2014_, v___x_2053_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
lean_dec(v_a_2019_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2056_; uint8_t v___x_2057_; lean_object* v___x_2058_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref(v___x_2054_);
v___x_2056_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6));
v___x_2057_ = lean_unbox(v_a_2049_);
lean_dec(v_a_2049_);
v___x_2058_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_2032_, v_recArgInfos_2007_, v_a_2017_, v___x_2039_, v___x_2014_, v_fixedParamPerms_2005_, v_xs_2006_, v_preDefs_2004_, v_numIndices_2046_, v___f_2035_, v___x_2057_, v___x_2056_, v_a_2055_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
lean_dec(v_numIndices_2046_);
lean_dec(v_a_2017_);
return v___x_2058_;
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
lean_dec(v_a_2049_);
lean_dec(v_numIndices_2046_);
lean_dec_ref(v___x_2039_);
lean_dec(v_a_2017_);
lean_dec_ref(v_recArgInfos_2007_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
v_a_2059_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2054_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2054_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
else
{
lean_object* v___f_2067_; lean_object* v___x_2068_; 
lean_dec(v_a_2049_);
lean_dec(v_numIndices_2046_);
lean_dec_ref(v___x_2039_);
lean_dec(v_a_2019_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
lean_inc(v_a_2017_);
v___f_2067_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed), 10, 4);
lean_closure_set(v___f_2067_, 0, v_recArgInfos_2007_);
lean_closure_set(v___f_2067_, 1, v_a_2017_);
lean_closure_set(v___f_2067_, 2, v___x_2014_);
lean_closure_set(v___f_2067_, 3, v___f_2050_);
v___x_2068_ = l_Lean_Elab_Structural_withFunTypes___redArg(v_a_2017_, v___f_2067_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
return v___x_2068_;
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec(v_numIndices_2046_);
lean_dec_ref(v___x_2039_);
lean_dec(v_a_2019_);
lean_dec(v_a_2017_);
lean_dec_ref(v_recArgInfos_2007_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
v_a_2069_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2048_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2048_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_del_object(v___x_2026_);
lean_dec(v_a_2019_);
lean_dec(v_a_2017_);
lean_dec_ref(v_recArgInfos_2007_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
v_a_2101_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2030_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2030_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
lean_dec(v_a_2017_);
lean_dec_ref(v_recArgInfos_2007_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
v_a_2111_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_2018_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2018_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec_ref(v___x_2015_);
lean_dec_ref(v_recArgInfos_2007_);
lean_dec_ref(v_xs_2006_);
lean_dec_ref(v_fixedParamPerms_2005_);
lean_dec_ref(v_preDefs_2004_);
v_a_2119_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2016_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2016_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___boxed(lean_object* v_preDefs_2127_, lean_object* v_fixedParamPerms_2128_, lean_object* v_xs_2129_, lean_object* v_recArgInfos_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(v_preDefs_2127_, v_fixedParamPerms_2128_, v_xs_2129_, v_recArgInfos_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
lean_dec(v_a_2134_);
lean_dec_ref(v_a_2133_);
lean_dec(v_a_2132_);
lean_dec_ref(v_a_2131_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(lean_object* v_fixedParamPerms_2137_, lean_object* v_xs_2138_, lean_object* v_as_2139_, lean_object* v_i_2140_, lean_object* v_j_2141_, lean_object* v_inv_2142_, lean_object* v_bs_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_2137_, v_xs_2138_, v_as_2139_, v_i_2140_, v_j_2141_, v_bs_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___boxed(lean_object* v_fixedParamPerms_2150_, lean_object* v_xs_2151_, lean_object* v_as_2152_, lean_object* v_i_2153_, lean_object* v_j_2154_, lean_object* v_inv_2155_, lean_object* v_bs_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v_res_2162_; 
v_res_2162_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(v_fixedParamPerms_2150_, v_xs_2151_, v_as_2152_, v_i_2153_, v_j_2154_, v_inv_2155_, v_bs_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec_ref(v_as_2152_);
lean_dec_ref(v_fixedParamPerms_2150_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(lean_object* v_fixedParamPerms_2163_, lean_object* v_xs_2164_, lean_object* v_as_2165_, lean_object* v_i_2166_, lean_object* v_j_2167_, lean_object* v_inv_2168_, lean_object* v_bs_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_2163_, v_xs_2164_, v_as_2165_, v_i_2166_, v_j_2167_, v_bs_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___boxed(lean_object* v_fixedParamPerms_2176_, lean_object* v_xs_2177_, lean_object* v_as_2178_, lean_object* v_i_2179_, lean_object* v_j_2180_, lean_object* v_inv_2181_, lean_object* v_bs_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(v_fixedParamPerms_2176_, v_xs_2177_, v_as_2178_, v_i_2179_, v_j_2180_, v_inv_2181_, v_bs_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec_ref(v_as_2178_);
lean_dec_ref(v_fixedParamPerms_2176_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15(lean_object* v_00_u03b3_2189_, lean_object* v_msg_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(v_msg_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___boxed(lean_object* v_00_u03b3_2197_, lean_object* v_msg_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15(v_00_u03b3_2197_, v_msg_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(lean_object* v_00_u03b3_2205_, lean_object* v_00_u03b1_2206_, lean_object* v_f_2207_, lean_object* v_positions_2208_, lean_object* v_ys_2209_, lean_object* v_xs_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_f_2207_, v_positions_2208_, v_ys_2209_, v_xs_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed(lean_object* v_00_u03b3_2217_, lean_object* v_00_u03b1_2218_, lean_object* v_f_2219_, lean_object* v_positions_2220_, lean_object* v_ys_2221_, lean_object* v_xs_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(v_00_u03b3_2217_, v_00_u03b1_2218_, v_f_2219_, v_positions_2220_, v_ys_2221_, v_xs_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec_ref(v_xs_2222_);
lean_dec_ref(v_ys_2221_);
lean_dec_ref(v_positions_2220_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(lean_object* v___x_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_funTypes_2232_, lean_object* v_as_2233_, lean_object* v_i_2234_, lean_object* v_j_2235_, lean_object* v_inv_2236_, lean_object* v_bs_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(v___x_2229_, v_a_2230_, v_a_2231_, v_funTypes_2232_, v_as_2233_, v_i_2234_, v_j_2235_, v_bs_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed(lean_object* v___x_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_funTypes_2247_, lean_object* v_as_2248_, lean_object* v_i_2249_, lean_object* v_j_2250_, lean_object* v_inv_2251_, lean_object* v_bs_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(v___x_2244_, v_a_2245_, v_a_2246_, v_funTypes_2247_, v_as_2248_, v_i_2249_, v_j_2250_, v_inv_2251_, v_bs_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec_ref(v_as_2248_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(lean_object* v_fixedParamPerms_2259_, lean_object* v_xs_2260_, lean_object* v_as_2261_, lean_object* v_i_2262_, lean_object* v_j_2263_, lean_object* v_inv_2264_, lean_object* v_bs_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(v_fixedParamPerms_2259_, v_xs_2260_, v_as_2261_, v_i_2262_, v_j_2263_, v_bs_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___boxed(lean_object* v_fixedParamPerms_2272_, lean_object* v_xs_2273_, lean_object* v_as_2274_, lean_object* v_i_2275_, lean_object* v_j_2276_, lean_object* v_inv_2277_, lean_object* v_bs_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(v_fixedParamPerms_2272_, v_xs_2273_, v_as_2274_, v_i_2275_, v_j_2276_, v_inv_2277_, v_bs_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec_ref(v_as_2274_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(lean_object* v_00_u03b1_2285_, lean_object* v_preDefs_2286_, lean_object* v_k_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_preDefs_2286_, v_k_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___boxed(lean_object* v_00_u03b1_2294_, lean_object* v_preDefs_2295_, lean_object* v_k_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(v_00_u03b1_2294_, v_preDefs_2295_, v_k_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(uint8_t v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_recArgInfos_2306_, lean_object* v___x_2307_, lean_object* v_preDefs_2308_, lean_object* v_a_2309_, lean_object* v_as_2310_, lean_object* v_i_2311_, lean_object* v_j_2312_, lean_object* v_inv_2313_, lean_object* v_bs_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___redArg(v_a_2303_, v_a_2304_, v_a_2305_, v_recArgInfos_2306_, v___x_2307_, v_preDefs_2308_, v_a_2309_, v_as_2310_, v_i_2311_, v_j_2312_, v_bs_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___boxed(lean_object** _args){
lean_object* v_a_2321_ = _args[0];
lean_object* v_a_2322_ = _args[1];
lean_object* v_a_2323_ = _args[2];
lean_object* v_recArgInfos_2324_ = _args[3];
lean_object* v___x_2325_ = _args[4];
lean_object* v_preDefs_2326_ = _args[5];
lean_object* v_a_2327_ = _args[6];
lean_object* v_as_2328_ = _args[7];
lean_object* v_i_2329_ = _args[8];
lean_object* v_j_2330_ = _args[9];
lean_object* v_inv_2331_ = _args[10];
lean_object* v_bs_2332_ = _args[11];
lean_object* v___y_2333_ = _args[12];
lean_object* v___y_2334_ = _args[13];
lean_object* v___y_2335_ = _args[14];
lean_object* v___y_2336_ = _args[15];
lean_object* v___y_2337_ = _args[16];
_start:
{
uint8_t v_a_29656__boxed_2338_; lean_object* v_res_2339_; 
v_a_29656__boxed_2338_ = lean_unbox(v_a_2321_);
v_res_2339_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v_a_29656__boxed_2338_, v_a_2322_, v_a_2323_, v_recArgInfos_2324_, v___x_2325_, v_preDefs_2326_, v_a_2327_, v_as_2328_, v_i_2329_, v_j_2330_, v_inv_2331_, v_bs_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec_ref(v_as_2328_);
lean_dec_ref(v_a_2323_);
lean_dec_ref(v_a_2322_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30(lean_object* v_declName_2340_, uint8_t v_s_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v___x_2347_; 
v___x_2347_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___redArg(v_declName_2340_, v_s_2341_, v___y_2343_, v___y_2345_);
return v___x_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30___boxed(lean_object* v_declName_2348_, lean_object* v_s_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
uint8_t v_s_boxed_2355_; lean_object* v_res_2356_; 
v_s_boxed_2355_ = lean_unbox(v_s_2349_);
v_res_2356_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17_spec__30(v_declName_2348_, v_s_boxed_2355_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(lean_object* v_xs_2357_, uint8_t v_a_2358_, lean_object* v_preDefs_2359_, lean_object* v___x_2360_, lean_object* v_as_2361_, lean_object* v_i_2362_, lean_object* v_j_2363_, lean_object* v_inv_2364_, lean_object* v_bs_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(v_xs_2357_, v_a_2358_, v_preDefs_2359_, v___x_2360_, v_as_2361_, v_i_2362_, v_j_2363_, v_bs_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___boxed(lean_object* v_xs_2372_, lean_object* v_a_2373_, lean_object* v_preDefs_2374_, lean_object* v___x_2375_, lean_object* v_as_2376_, lean_object* v_i_2377_, lean_object* v_j_2378_, lean_object* v_inv_2379_, lean_object* v_bs_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
uint8_t v_a_29705__boxed_2386_; lean_object* v_res_2387_; 
v_a_29705__boxed_2386_ = lean_unbox(v_a_2373_);
v_res_2387_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(v_xs_2372_, v_a_29705__boxed_2386_, v_preDefs_2374_, v___x_2375_, v_as_2376_, v_i_2377_, v_j_2378_, v_inv_2379_, v_bs_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec_ref(v_as_2376_);
lean_dec_ref(v_preDefs_2374_);
lean_dec_ref(v_xs_2372_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19(lean_object* v_a_2388_, lean_object* v_funTypes_2389_, lean_object* v_as_2390_, lean_object* v_i_2391_, lean_object* v_j_2392_, lean_object* v_inv_2393_, lean_object* v_bs_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v___x_2400_; 
v___x_2400_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(v_a_2388_, v_funTypes_2389_, v_as_2390_, v_i_2391_, v_j_2392_, v_bs_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___boxed(lean_object* v_a_2401_, lean_object* v_funTypes_2402_, lean_object* v_as_2403_, lean_object* v_i_2404_, lean_object* v_j_2405_, lean_object* v_inv_2406_, lean_object* v_bs_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19(v_a_2401_, v_funTypes_2402_, v_as_2403_, v_i_2404_, v_j_2405_, v_inv_2406_, v_bs_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
lean_dec(v___y_2411_);
lean_dec_ref(v___y_2410_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec_ref(v_as_2403_);
lean_dec_ref(v_funTypes_2402_);
lean_dec_ref(v_a_2401_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20(lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_as_2416_, lean_object* v_i_2417_, lean_object* v_j_2418_, lean_object* v_inv_2419_, lean_object* v_bs_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___redArg(v_a_2414_, v_a_2415_, v_as_2416_, v_i_2417_, v_j_2418_, v_bs_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20___boxed(lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_as_2429_, lean_object* v_i_2430_, lean_object* v_j_2431_, lean_object* v_inv_2432_, lean_object* v_bs_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20(v_a_2427_, v_a_2428_, v_as_2429_, v_i_2430_, v_j_2431_, v_inv_2432_, v_bs_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec_ref(v_as_2429_);
lean_dec_ref(v_a_2428_);
lean_dec_ref(v_a_2427_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(lean_object* v_00_u03b1_2440_, lean_object* v_msg_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v_msg_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___boxed(lean_object* v_00_u03b1_2448_, lean_object* v_msg_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(v_00_u03b1_2448_, v_msg_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
return v_res_2455_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10(lean_object* v_xs_2456_, lean_object* v_ys_2457_, lean_object* v_hsz_2458_, lean_object* v_x_2459_, lean_object* v_x_2460_){
_start:
{
uint8_t v___x_2461_; 
v___x_2461_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(v_xs_2456_, v_ys_2457_, v_x_2459_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___boxed(lean_object* v_xs_2462_, lean_object* v_ys_2463_, lean_object* v_hsz_2464_, lean_object* v_x_2465_, lean_object* v_x_2466_){
_start:
{
uint8_t v_res_2467_; lean_object* v_r_2468_; 
v_res_2467_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10(v_xs_2462_, v_ys_2463_, v_hsz_2464_, v_x_2465_, v_x_2466_);
lean_dec_ref(v_ys_2463_);
lean_dec_ref(v_xs_2462_);
v_r_2468_ = lean_box(v_res_2467_);
return v_r_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11(lean_object* v_n_2469_, lean_object* v_as_2470_, lean_object* v_lo_2471_, lean_object* v_hi_2472_, lean_object* v_w_2473_, lean_object* v_hlo_2474_, lean_object* v_hhi_2475_){
_start:
{
lean_object* v___x_2476_; 
v___x_2476_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v_as_2470_, v_lo_2471_, v_hi_2472_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___boxed(lean_object* v_n_2477_, lean_object* v_as_2478_, lean_object* v_lo_2479_, lean_object* v_hi_2480_, lean_object* v_w_2481_, lean_object* v_hlo_2482_, lean_object* v_hhi_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11(v_n_2477_, v_as_2478_, v_lo_2479_, v_hi_2480_, v_w_2481_, v_hlo_2482_, v_hhi_2483_);
lean_dec(v_hi_2480_);
lean_dec(v_n_2477_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16(lean_object* v_00_u03b1_2485_, lean_object* v_00_u03b3_2486_, lean_object* v_xs_2487_, lean_object* v_f_2488_, lean_object* v_as_2489_, lean_object* v_bs_2490_, lean_object* v_i_2491_, lean_object* v_cs_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v___x_2498_; 
v___x_2498_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___redArg(v_xs_2487_, v_f_2488_, v_as_2489_, v_bs_2490_, v_i_2491_, v_cs_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16___boxed(lean_object* v_00_u03b1_2499_, lean_object* v_00_u03b3_2500_, lean_object* v_xs_2501_, lean_object* v_f_2502_, lean_object* v_as_2503_, lean_object* v_bs_2504_, lean_object* v_i_2505_, lean_object* v_cs_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__16(v_00_u03b1_2499_, v_00_u03b3_2500_, v_xs_2501_, v_f_2502_, v_as_2503_, v_bs_2504_, v_i_2505_, v_cs_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec_ref(v_bs_2504_);
lean_dec_ref(v_as_2503_);
lean_dec_ref(v_xs_2501_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25(lean_object* v_env_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___redArg(v_env_2513_, v___y_2515_, v___y_2517_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25___boxed(lean_object* v_env_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24_spec__25(v_env_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24(lean_object* v_00_u03b1_2527_, lean_object* v_env_2528_, lean_object* v_x_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
lean_object* v___x_2535_; 
v___x_2535_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___redArg(v_env_2528_, v_x_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24___boxed(lean_object* v_00_u03b1_2536_, lean_object* v_env_2537_, lean_object* v_x_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13_spec__24(v_00_u03b1_2536_, v_env_2537_, v_x_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
lean_dec(v___y_2542_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
return v_res_2544_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(lean_object* v_x_2545_){
_start:
{
uint8_t v___x_2546_; 
v___x_2546_ = 0;
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed(lean_object* v_x_2547_){
_start:
{
uint8_t v_res_2548_; lean_object* v_r_2549_; 
v_res_2548_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(v_x_2547_);
lean_dec(v_x_2547_);
v_r_2549_ = lean_box(v_res_2548_);
return v_r_2549_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(lean_object* v_fvarId_2550_, lean_object* v_x_2551_){
_start:
{
uint8_t v___x_2552_; 
v___x_2552_ = l_Lean_instBEqFVarId_beq(v_fvarId_2550_, v_x_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed(lean_object* v_fvarId_2553_, lean_object* v_x_2554_){
_start:
{
uint8_t v_res_2555_; lean_object* v_r_2556_; 
v_res_2555_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(v_fvarId_2553_, v_x_2554_);
lean_dec(v_x_2554_);
lean_dec(v_fvarId_2553_);
v_r_2556_ = lean_box(v_res_2555_);
return v_r_2556_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2558_ = lean_box(0);
v___x_2559_ = lean_unsigned_to_nat(16u);
v___x_2560_ = lean_mk_array(v___x_2559_, v___x_2558_);
return v___x_2560_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2561_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1);
v___x_2562_ = lean_unsigned_to_nat(0u);
v___x_2563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
lean_ctor_set(v___x_2563_, 1, v___x_2561_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(lean_object* v_e_2564_, lean_object* v_fvarId_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___x_2568_; uint8_t v_fst_2570_; lean_object* v_mctx_2571_; lean_object* v___y_2589_; lean_object* v_mctx_2594_; lean_object* v___f_2595_; lean_object* v___f_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; 
v___x_2568_ = lean_st_ref_get(v___y_2566_);
v_mctx_2594_ = lean_ctor_get(v___x_2568_, 0);
lean_inc_ref(v_mctx_2594_);
lean_dec(v___x_2568_);
v___f_2595_ = ((lean_object*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0));
v___f_2596_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2596_, 0, v_fvarId_2565_);
v___x_2597_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2);
lean_inc_ref(v_mctx_2594_);
v___x_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v_mctx_2594_);
v___x_2599_ = l_Lean_Expr_hasFVar(v_e_2564_);
if (v___x_2599_ == 0)
{
uint8_t v___x_2600_; 
v___x_2600_ = l_Lean_Expr_hasMVar(v_e_2564_);
if (v___x_2600_ == 0)
{
lean_dec_ref(v___x_2598_);
lean_dec_ref(v___f_2596_);
lean_dec_ref(v_e_2564_);
v_fst_2570_ = v___x_2600_;
v_mctx_2571_ = v_mctx_2594_;
goto v___jp_2569_;
}
else
{
lean_object* v___x_2601_; 
lean_dec_ref(v_mctx_2594_);
v___x_2601_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2596_, v___f_2595_, v_e_2564_, v___x_2598_);
v___y_2589_ = v___x_2601_;
goto v___jp_2588_;
}
}
else
{
lean_object* v___x_2602_; 
lean_dec_ref(v_mctx_2594_);
v___x_2602_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2596_, v___f_2595_, v_e_2564_, v___x_2598_);
v___y_2589_ = v___x_2602_;
goto v___jp_2588_;
}
v___jp_2569_:
{
lean_object* v___x_2572_; lean_object* v_cache_2573_; lean_object* v_zetaDeltaFVarIds_2574_; lean_object* v_postponed_2575_; lean_object* v_diag_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2586_; 
v___x_2572_ = lean_st_ref_take(v___y_2566_);
v_cache_2573_ = lean_ctor_get(v___x_2572_, 1);
v_zetaDeltaFVarIds_2574_ = lean_ctor_get(v___x_2572_, 2);
v_postponed_2575_ = lean_ctor_get(v___x_2572_, 3);
v_diag_2576_ = lean_ctor_get(v___x_2572_, 4);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2586_ == 0)
{
lean_object* v_unused_2587_; 
v_unused_2587_ = lean_ctor_get(v___x_2572_, 0);
lean_dec(v_unused_2587_);
v___x_2578_ = v___x_2572_;
v_isShared_2579_ = v_isSharedCheck_2586_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_diag_2576_);
lean_inc(v_postponed_2575_);
lean_inc(v_zetaDeltaFVarIds_2574_);
lean_inc(v_cache_2573_);
lean_dec(v___x_2572_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2586_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v___x_2581_; 
if (v_isShared_2579_ == 0)
{
lean_ctor_set(v___x_2578_, 0, v_mctx_2571_);
v___x_2581_ = v___x_2578_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_mctx_2571_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v_cache_2573_);
lean_ctor_set(v_reuseFailAlloc_2585_, 2, v_zetaDeltaFVarIds_2574_);
lean_ctor_set(v_reuseFailAlloc_2585_, 3, v_postponed_2575_);
lean_ctor_set(v_reuseFailAlloc_2585_, 4, v_diag_2576_);
v___x_2581_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2582_ = lean_st_ref_set(v___y_2566_, v___x_2581_);
v___x_2583_ = lean_box(v_fst_2570_);
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2583_);
return v___x_2584_;
}
}
}
v___jp_2588_:
{
lean_object* v_snd_2590_; lean_object* v_fst_2591_; lean_object* v_mctx_2592_; uint8_t v___x_2593_; 
v_snd_2590_ = lean_ctor_get(v___y_2589_, 1);
lean_inc(v_snd_2590_);
v_fst_2591_ = lean_ctor_get(v___y_2589_, 0);
lean_inc(v_fst_2591_);
lean_dec_ref(v___y_2589_);
v_mctx_2592_ = lean_ctor_get(v_snd_2590_, 1);
lean_inc_ref(v_mctx_2592_);
lean_dec(v_snd_2590_);
v___x_2593_ = lean_unbox(v_fst_2591_);
lean_dec(v_fst_2591_);
v_fst_2570_ = v___x_2593_;
v_mctx_2571_ = v_mctx_2592_;
goto v___jp_2569_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___boxed(lean_object* v_e_2603_, lean_object* v_fvarId_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_e_2603_, v_fvarId_2604_, v___y_2605_);
lean_dec(v___y_2605_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(lean_object* v_e_2608_, lean_object* v_fvarId_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_e_2608_, v_fvarId_2609_, v___y_2611_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___boxed(lean_object* v_e_2616_, lean_object* v_fvarId_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(v_e_2616_, v_fvarId_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(lean_object* v_k_2624_, lean_object* v_b_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_){
_start:
{
lean_object* v___x_2631_; 
lean_inc(v___y_2629_);
lean_inc_ref(v___y_2628_);
lean_inc(v___y_2627_);
lean_inc_ref(v___y_2626_);
v___x_2631_ = lean_apply_6(v_k_2624_, v_b_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, lean_box(0));
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed(lean_object* v_k_2632_, lean_object* v_b_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(v_k_2632_, v_b_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(lean_object* v_perm_2640_, lean_object* v_type_2641_, lean_object* v_k_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v___f_2648_; lean_object* v___x_2649_; 
v___f_2648_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2648_, 0, v_k_2642_);
v___x_2649_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_box(0), v_perm_2640_, v_type_2641_, v___f_2648_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2649_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2649_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
else
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
v_a_2658_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2649_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2649_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___boxed(lean_object* v_perm_2666_, lean_object* v_type_2667_, lean_object* v_k_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v_perm_2666_, v_type_2667_, v_k_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
lean_dec(v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(lean_object* v_00_u03b1_2675_, lean_object* v_perm_2676_, lean_object* v_type_2677_, lean_object* v_k_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v_perm_2676_, v_type_2677_, v_k_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___boxed(lean_object* v_00_u03b1_2685_, lean_object* v_perm_2686_, lean_object* v_type_2687_, lean_object* v_k_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(v_00_u03b1_2685_, v_perm_2686_, v_type_2687_, v_k_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(lean_object* v_a_2695_, lean_object* v_fst_2696_, lean_object* v_fst_2697_, lean_object* v___x_2698_, lean_object* v___x_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v___x_2705_; 
lean_inc_ref(v_fst_2696_);
v___x_2705_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(v_a_2695_, v_fst_2696_, v_fst_2697_, v___x_2698_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2715_; 
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2715_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2715_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2710_, 0, v_a_2706_);
lean_ctor_set(v___x_2710_, 1, v_fst_2696_);
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2699_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2711_);
v___x_2713_ = v___x_2708_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec_ref(v___x_2699_);
lean_dec_ref(v_fst_2696_);
v_a_2716_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2705_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2705_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed(lean_object* v_a_2724_, lean_object* v_fst_2725_, lean_object* v_fst_2726_, lean_object* v___x_2727_, lean_object* v___x_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(v_a_2724_, v_fst_2725_, v_fst_2726_, v___x_2727_, v___x_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(size_t v_sz_2735_, size_t v_i_2736_, lean_object* v_bs_2737_){
_start:
{
uint8_t v___x_2738_; 
v___x_2738_ = lean_usize_dec_lt(v_i_2736_, v_sz_2735_);
if (v___x_2738_ == 0)
{
return v_bs_2737_;
}
else
{
lean_object* v_v_2739_; lean_object* v___x_2740_; lean_object* v_bs_x27_2741_; lean_object* v___x_2742_; size_t v___x_2743_; size_t v___x_2744_; lean_object* v___x_2745_; 
v_v_2739_ = lean_array_uget(v_bs_2737_, v_i_2736_);
v___x_2740_ = lean_unsigned_to_nat(0u);
v_bs_x27_2741_ = lean_array_uset(v_bs_2737_, v_i_2736_, v___x_2740_);
v___x_2742_ = l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(v_v_2739_);
v___x_2743_ = ((size_t)1ULL);
v___x_2744_ = lean_usize_add(v_i_2736_, v___x_2743_);
v___x_2745_ = lean_array_uset(v_bs_x27_2741_, v_i_2736_, v___x_2742_);
v_i_2736_ = v___x_2744_;
v_bs_2737_ = v___x_2745_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3___boxed(lean_object* v_sz_2747_, lean_object* v_i_2748_, lean_object* v_bs_2749_){
_start:
{
size_t v_sz_boxed_2750_; size_t v_i_boxed_2751_; lean_object* v_res_2752_; 
v_sz_boxed_2750_ = lean_unbox_usize(v_sz_2747_);
lean_dec(v_sz_2747_);
v_i_boxed_2751_ = lean_unbox_usize(v_i_2748_);
lean_dec(v_i_2748_);
v_res_2752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(v_sz_boxed_2750_, v_i_boxed_2751_, v_bs_2749_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(lean_object* v_lctx_2753_, lean_object* v_localInsts_2754_, lean_object* v_x_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2753_, v_localInsts_2754_, v_x_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2761_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2761_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
v_a_2770_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2761_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2761_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg___boxed(lean_object* v_lctx_2778_, lean_object* v_localInsts_2779_, lean_object* v_x_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v_lctx_2778_, v_localInsts_2779_, v_x_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(lean_object* v_as_2787_, size_t v_i_2788_, size_t v_stop_2789_, lean_object* v_b_2790_){
_start:
{
uint8_t v___x_2791_; 
v___x_2791_ = lean_usize_dec_eq(v_i_2788_, v_stop_2789_);
if (v___x_2791_ == 0)
{
lean_object* v___x_2792_; lean_object* v___x_2793_; size_t v___x_2794_; size_t v___x_2795_; 
v___x_2792_ = lean_array_uget_borrowed(v_as_2787_, v_i_2788_);
lean_inc(v___x_2792_);
v___x_2793_ = lean_local_ctx_erase(v_b_2790_, v___x_2792_);
v___x_2794_ = ((size_t)1ULL);
v___x_2795_ = lean_usize_add(v_i_2788_, v___x_2794_);
v_i_2788_ = v___x_2795_;
v_b_2790_ = v___x_2793_;
goto _start;
}
else
{
return v_b_2790_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12___boxed(lean_object* v_as_2797_, lean_object* v_i_2798_, lean_object* v_stop_2799_, lean_object* v_b_2800_){
_start:
{
size_t v_i_boxed_2801_; size_t v_stop_boxed_2802_; lean_object* v_res_2803_; 
v_i_boxed_2801_ = lean_unbox_usize(v_i_2798_);
lean_dec(v_i_2798_);
v_stop_boxed_2802_ = lean_unbox_usize(v_stop_2799_);
lean_dec(v_stop_2799_);
v_res_2803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_as_2797_, v_i_boxed_2801_, v_stop_boxed_2802_, v_b_2800_);
lean_dec_ref(v_as_2797_);
return v_res_2803_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(lean_object* v_a_2804_, lean_object* v_as_2805_, size_t v_i_2806_, size_t v_stop_2807_){
_start:
{
uint8_t v___x_2808_; 
v___x_2808_ = lean_usize_dec_eq(v_i_2806_, v_stop_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = lean_array_uget_borrowed(v_as_2805_, v_i_2806_);
v___x_2810_ = l_Lean_instBEqFVarId_beq(v_a_2804_, v___x_2809_);
if (v___x_2810_ == 0)
{
size_t v___x_2811_; size_t v___x_2812_; 
v___x_2811_ = ((size_t)1ULL);
v___x_2812_ = lean_usize_add(v_i_2806_, v___x_2811_);
v_i_2806_ = v___x_2812_;
goto _start;
}
else
{
return v___x_2810_;
}
}
else
{
uint8_t v___x_2814_; 
v___x_2814_ = 0;
return v___x_2814_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11___boxed(lean_object* v_a_2815_, lean_object* v_as_2816_, lean_object* v_i_2817_, lean_object* v_stop_2818_){
_start:
{
size_t v_i_boxed_2819_; size_t v_stop_boxed_2820_; uint8_t v_res_2821_; lean_object* v_r_2822_; 
v_i_boxed_2819_ = lean_unbox_usize(v_i_2817_);
lean_dec(v_i_2817_);
v_stop_boxed_2820_ = lean_unbox_usize(v_stop_2818_);
lean_dec(v_stop_2818_);
v_res_2821_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(v_a_2815_, v_as_2816_, v_i_boxed_2819_, v_stop_boxed_2820_);
lean_dec_ref(v_as_2816_);
lean_dec(v_a_2815_);
v_r_2822_ = lean_box(v_res_2821_);
return v_r_2822_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(lean_object* v_as_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2825_ = lean_unsigned_to_nat(0u);
v___x_2826_ = lean_array_get_size(v_as_2823_);
v___x_2827_ = lean_nat_dec_lt(v___x_2825_, v___x_2826_);
if (v___x_2827_ == 0)
{
return v___x_2827_;
}
else
{
if (v___x_2827_ == 0)
{
return v___x_2827_;
}
else
{
size_t v___x_2828_; size_t v___x_2829_; uint8_t v___x_2830_; 
v___x_2828_ = ((size_t)0ULL);
v___x_2829_ = lean_usize_of_nat(v___x_2826_);
v___x_2830_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(v_a_2824_, v_as_2823_, v___x_2828_, v___x_2829_);
return v___x_2830_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9___boxed(lean_object* v_as_2831_, lean_object* v_a_2832_){
_start:
{
uint8_t v_res_2833_; lean_object* v_r_2834_; 
v_res_2833_ = l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(v_as_2831_, v_a_2832_);
lean_dec(v_a_2832_);
lean_dec_ref(v_as_2831_);
v_r_2834_ = lean_box(v_res_2833_);
return v_r_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(lean_object* v_fvarIds_2835_, lean_object* v_as_2836_, size_t v_i_2837_, size_t v_stop_2838_, lean_object* v_b_2839_){
_start:
{
lean_object* v___y_2841_; uint8_t v___x_2845_; 
v___x_2845_ = lean_usize_dec_eq(v_i_2837_, v_stop_2838_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; lean_object* v_fvar_2847_; lean_object* v___x_2848_; uint8_t v___x_2849_; 
v___x_2846_ = lean_array_uget_borrowed(v_as_2836_, v_i_2837_);
v_fvar_2847_ = lean_ctor_get(v___x_2846_, 1);
v___x_2848_ = l_Lean_Expr_fvarId_x21(v_fvar_2847_);
v___x_2849_ = l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(v_fvarIds_2835_, v___x_2848_);
lean_dec(v___x_2848_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; 
lean_inc(v___x_2846_);
v___x_2850_ = lean_array_push(v_b_2839_, v___x_2846_);
v___y_2841_ = v___x_2850_;
goto v___jp_2840_;
}
else
{
v___y_2841_ = v_b_2839_;
goto v___jp_2840_;
}
}
else
{
return v_b_2839_;
}
v___jp_2840_:
{
size_t v___x_2842_; size_t v___x_2843_; 
v___x_2842_ = ((size_t)1ULL);
v___x_2843_ = lean_usize_add(v_i_2837_, v___x_2842_);
v_i_2837_ = v___x_2843_;
v_b_2839_ = v___y_2841_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11___boxed(lean_object* v_fvarIds_2851_, lean_object* v_as_2852_, lean_object* v_i_2853_, lean_object* v_stop_2854_, lean_object* v_b_2855_){
_start:
{
size_t v_i_boxed_2856_; size_t v_stop_boxed_2857_; lean_object* v_res_2858_; 
v_i_boxed_2856_ = lean_unbox_usize(v_i_2853_);
lean_dec(v_i_2853_);
v_stop_boxed_2857_ = lean_unbox_usize(v_stop_2854_);
lean_dec(v_stop_2854_);
v_res_2858_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_2851_, v_as_2852_, v_i_boxed_2856_, v_stop_boxed_2857_, v_b_2855_);
lean_dec_ref(v_as_2852_);
lean_dec_ref(v_fvarIds_2851_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(lean_object* v_fvarIds_2861_, lean_object* v_k_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_lctx_2868_; lean_object* v___x_2869_; 
v_lctx_2868_ = lean_ctor_get(v___y_2863_, 2);
v___x_2869_ = l_Lean_Meta_getLocalInstances___redArg(v___y_2863_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2871_; lean_object* v___y_2873_; lean_object* v___x_2888_; uint8_t v___x_2889_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref(v___x_2869_);
v___x_2871_ = lean_unsigned_to_nat(0u);
v___x_2888_ = lean_array_get_size(v_fvarIds_2861_);
v___x_2889_ = lean_nat_dec_lt(v___x_2871_, v___x_2888_);
if (v___x_2889_ == 0)
{
lean_inc_ref(v_lctx_2868_);
v___y_2873_ = v_lctx_2868_;
goto v___jp_2872_;
}
else
{
uint8_t v___x_2890_; 
v___x_2890_ = lean_nat_dec_le(v___x_2888_, v___x_2888_);
if (v___x_2890_ == 0)
{
if (v___x_2889_ == 0)
{
lean_inc_ref(v_lctx_2868_);
v___y_2873_ = v_lctx_2868_;
goto v___jp_2872_;
}
else
{
size_t v___x_2891_; size_t v___x_2892_; lean_object* v___x_2893_; 
v___x_2891_ = ((size_t)0ULL);
v___x_2892_ = lean_usize_of_nat(v___x_2888_);
lean_inc_ref(v_lctx_2868_);
v___x_2893_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_fvarIds_2861_, v___x_2891_, v___x_2892_, v_lctx_2868_);
v___y_2873_ = v___x_2893_;
goto v___jp_2872_;
}
}
else
{
size_t v___x_2894_; size_t v___x_2895_; lean_object* v___x_2896_; 
v___x_2894_ = ((size_t)0ULL);
v___x_2895_ = lean_usize_of_nat(v___x_2888_);
lean_inc_ref(v_lctx_2868_);
v___x_2896_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_fvarIds_2861_, v___x_2894_, v___x_2895_, v_lctx_2868_);
v___y_2873_ = v___x_2896_;
goto v___jp_2872_;
}
}
v___jp_2872_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; uint8_t v___x_2876_; 
v___x_2874_ = lean_array_get_size(v_a_2870_);
v___x_2875_ = ((lean_object*)(l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0));
v___x_2876_ = lean_nat_dec_lt(v___x_2871_, v___x_2874_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; 
lean_dec(v_a_2870_);
v___x_2877_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2873_, v___x_2875_, v_k_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
return v___x_2877_;
}
else
{
uint8_t v___x_2878_; 
v___x_2878_ = lean_nat_dec_le(v___x_2874_, v___x_2874_);
if (v___x_2878_ == 0)
{
if (v___x_2876_ == 0)
{
lean_object* v___x_2879_; 
lean_dec(v_a_2870_);
v___x_2879_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2873_, v___x_2875_, v_k_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
return v___x_2879_;
}
else
{
size_t v___x_2880_; size_t v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2880_ = ((size_t)0ULL);
v___x_2881_ = lean_usize_of_nat(v___x_2874_);
v___x_2882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_2861_, v_a_2870_, v___x_2880_, v___x_2881_, v___x_2875_);
lean_dec(v_a_2870_);
v___x_2883_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2873_, v___x_2882_, v_k_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
return v___x_2883_;
}
}
else
{
size_t v___x_2884_; size_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2884_ = ((size_t)0ULL);
v___x_2885_ = lean_usize_of_nat(v___x_2874_);
v___x_2886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_2861_, v_a_2870_, v___x_2884_, v___x_2885_, v___x_2875_);
lean_dec(v_a_2870_);
v___x_2887_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2873_, v___x_2886_, v_k_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
return v___x_2887_;
}
}
}
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec_ref(v_k_2862_);
v_a_2897_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2869_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2869_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___boxed(lean_object* v_fvarIds_2905_, lean_object* v_k_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_fvarIds_2905_, v_k_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec_ref(v_fvarIds_2905_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(lean_object* v_x_2913_, lean_object* v_x_2914_, lean_object* v_x_2915_){
_start:
{
if (lean_obj_tag(v_x_2915_) == 0)
{
lean_dec(v_x_2913_);
return v_x_2914_;
}
else
{
lean_object* v_head_2916_; lean_object* v_tail_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2927_; 
v_head_2916_ = lean_ctor_get(v_x_2915_, 0);
v_tail_2917_ = lean_ctor_get(v_x_2915_, 1);
v_isSharedCheck_2927_ = !lean_is_exclusive(v_x_2915_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2919_ = v_x_2915_;
v_isShared_2920_ = v_isSharedCheck_2927_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_tail_2917_);
lean_inc(v_head_2916_);
lean_dec(v_x_2915_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2927_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
lean_inc(v_x_2913_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 5);
lean_ctor_set(v___x_2919_, 1, v_x_2913_);
lean_ctor_set(v___x_2919_, 0, v_x_2914_);
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_x_2914_);
lean_ctor_set(v_reuseFailAlloc_2926_, 1, v_x_2913_);
v___x_2922_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2923_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2916_);
v___x_2924_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2922_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
v_x_2914_ = v___x_2924_;
v_x_2915_ = v_tail_2917_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(lean_object* v_x_2928_, lean_object* v_x_2929_, lean_object* v_x_2930_){
_start:
{
if (lean_obj_tag(v_x_2930_) == 0)
{
lean_dec(v_x_2928_);
return v_x_2929_;
}
else
{
lean_object* v_head_2931_; lean_object* v_tail_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2942_; 
v_head_2931_ = lean_ctor_get(v_x_2930_, 0);
v_tail_2932_ = lean_ctor_get(v_x_2930_, 1);
v_isSharedCheck_2942_ = !lean_is_exclusive(v_x_2930_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2934_ = v_x_2930_;
v_isShared_2935_ = v_isSharedCheck_2942_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_tail_2932_);
lean_inc(v_head_2931_);
lean_dec(v_x_2930_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2942_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
lean_inc(v_x_2928_);
if (v_isShared_2935_ == 0)
{
lean_ctor_set_tag(v___x_2934_, 5);
lean_ctor_set(v___x_2934_, 1, v_x_2928_);
lean_ctor_set(v___x_2934_, 0, v_x_2929_);
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_x_2929_);
lean_ctor_set(v_reuseFailAlloc_2941_, 1, v_x_2928_);
v___x_2937_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2938_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2931_);
v___x_2939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2937_);
lean_ctor_set(v___x_2939_, 1, v___x_2938_);
v___x_2940_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(v_x_2928_, v___x_2939_, v_tail_2932_);
return v___x_2940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(lean_object* v_x_2943_, lean_object* v_x_2944_){
_start:
{
if (lean_obj_tag(v_x_2943_) == 0)
{
lean_object* v___x_2945_; 
lean_dec(v_x_2944_);
v___x_2945_ = lean_box(0);
return v___x_2945_;
}
else
{
lean_object* v_tail_2946_; 
v_tail_2946_ = lean_ctor_get(v_x_2943_, 1);
if (lean_obj_tag(v_tail_2946_) == 0)
{
lean_object* v_head_2947_; lean_object* v___x_2948_; 
lean_dec(v_x_2944_);
v_head_2947_ = lean_ctor_get(v_x_2943_, 0);
lean_inc(v_head_2947_);
lean_dec_ref(v_x_2943_);
v___x_2948_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2947_);
return v___x_2948_;
}
else
{
lean_object* v_head_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_inc(v_tail_2946_);
v_head_2949_ = lean_ctor_get(v_x_2943_, 0);
lean_inc(v_head_2949_);
lean_dec_ref(v_x_2943_);
v___x_2950_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2949_);
v___x_2951_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(v_x_2944_, v___x_2950_, v_tail_2946_);
return v___x_2951_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2960_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0));
v___x_2961_ = lean_string_length(v___x_2960_);
return v___x_2961_;
}
}
static lean_object* _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6(void){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2962_ = lean_obj_once(&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5, &l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5_once, _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5);
v___x_2963_ = lean_nat_to_int(v___x_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(lean_object* v_xs_2971_){
_start:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; uint8_t v___x_2974_; 
v___x_2972_ = lean_array_get_size(v_xs_2971_);
v___x_2973_ = lean_unsigned_to_nat(0u);
v___x_2974_ = lean_nat_dec_eq(v___x_2972_, v___x_2973_);
if (v___x_2974_ == 0)
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2975_ = lean_array_to_list(v_xs_2971_);
v___x_2976_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3));
v___x_2977_ = l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(v___x_2975_, v___x_2976_);
v___x_2978_ = lean_obj_once(&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6, &l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6_once, _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6);
v___x_2979_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7));
v___x_2980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v___x_2977_);
v___x_2981_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8));
v___x_2982_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2980_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2978_);
lean_ctor_set(v___x_2983_, 1, v___x_2982_);
v___x_2984_ = l_Std_Format_fill(v___x_2983_);
return v___x_2984_;
}
else
{
lean_object* v___x_2985_; 
lean_dec_ref(v_xs_2971_);
v___x_2985_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10));
return v___x_2985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(size_t v_sz_2986_, size_t v_i_2987_, lean_object* v_bs_2988_){
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
v___x_2993_ = l_Lean_mkFVar(v_v_2990_);
v___x_2994_ = ((size_t)1ULL);
v___x_2995_ = lean_usize_add(v_i_2987_, v___x_2994_);
v___x_2996_ = lean_array_uset(v_bs_x27_2992_, v_i_2987_, v___x_2993_);
v_i_2987_ = v___x_2995_;
v_bs_2988_ = v___x_2996_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11___boxed(lean_object* v_sz_2998_, lean_object* v_i_2999_, lean_object* v_bs_3000_){
_start:
{
size_t v_sz_boxed_3001_; size_t v_i_boxed_3002_; lean_object* v_res_3003_; 
v_sz_boxed_3001_ = lean_unbox_usize(v_sz_2998_);
lean_dec(v_sz_2998_);
v_i_boxed_3002_ = lean_unbox_usize(v_i_2999_);
lean_dec(v_i_2999_);
v_res_3003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(v_sz_boxed_3001_, v_i_boxed_3002_, v_bs_3000_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(lean_object* v_fst_3004_, lean_object* v_as_3005_, lean_object* v_i_3006_, lean_object* v_j_3007_, lean_object* v_bs_3008_){
_start:
{
lean_object* v_zero_3009_; uint8_t v_isZero_3010_; 
v_zero_3009_ = lean_unsigned_to_nat(0u);
v_isZero_3010_ = lean_nat_dec_eq(v_i_3006_, v_zero_3009_);
if (v_isZero_3010_ == 1)
{
lean_dec(v_j_3007_);
lean_dec(v_i_3006_);
return v_bs_3008_;
}
else
{
lean_object* v___x_3011_; lean_object* v_fnName_3012_; lean_object* v_recArgPos_3013_; lean_object* v_indicesPos_3014_; lean_object* v_indGroupInst_3015_; lean_object* v_indIdx_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3031_; 
v___x_3011_ = lean_array_fget(v_as_3005_, v_j_3007_);
v_fnName_3012_ = lean_ctor_get(v___x_3011_, 0);
v_recArgPos_3013_ = lean_ctor_get(v___x_3011_, 2);
v_indicesPos_3014_ = lean_ctor_get(v___x_3011_, 3);
v_indGroupInst_3015_ = lean_ctor_get(v___x_3011_, 4);
v_indIdx_3016_ = lean_ctor_get(v___x_3011_, 5);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3031_ == 0)
{
lean_object* v_unused_3032_; 
v_unused_3032_ = lean_ctor_get(v___x_3011_, 1);
lean_dec(v_unused_3032_);
v___x_3018_ = v___x_3011_;
v_isShared_3019_ = v_isSharedCheck_3031_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_indIdx_3016_);
lean_inc(v_indGroupInst_3015_);
lean_inc(v_indicesPos_3014_);
lean_inc(v_recArgPos_3013_);
lean_inc(v_fnName_3012_);
lean_dec(v___x_3011_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3031_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v_perms_3020_; lean_object* v___x_3021_; lean_object* v_one_3022_; lean_object* v_n_3023_; lean_object* v___x_3024_; lean_object* v___x_3026_; 
v_perms_3020_ = lean_ctor_get(v_fst_3004_, 1);
v___x_3021_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v_one_3022_ = lean_unsigned_to_nat(1u);
v_n_3023_ = lean_nat_sub(v_i_3006_, v_one_3022_);
lean_dec(v_i_3006_);
v___x_3024_ = lean_array_get_borrowed(v___x_3021_, v_perms_3020_, v_j_3007_);
lean_inc(v___x_3024_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 1, v___x_3024_);
v___x_3026_ = v___x_3018_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_fnName_3012_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v___x_3024_);
lean_ctor_set(v_reuseFailAlloc_3030_, 2, v_recArgPos_3013_);
lean_ctor_set(v_reuseFailAlloc_3030_, 3, v_indicesPos_3014_);
lean_ctor_set(v_reuseFailAlloc_3030_, 4, v_indGroupInst_3015_);
lean_ctor_set(v_reuseFailAlloc_3030_, 5, v_indIdx_3016_);
v___x_3026_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = lean_nat_add(v_j_3007_, v_one_3022_);
lean_dec(v_j_3007_);
v___x_3028_ = lean_array_push(v_bs_3008_, v___x_3026_);
v_i_3006_ = v_n_3023_;
v_j_3007_ = v___x_3027_;
v_bs_3008_ = v___x_3028_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg___boxed(lean_object* v_fst_3033_, lean_object* v_as_3034_, lean_object* v_i_3035_, lean_object* v_j_3036_, lean_object* v_bs_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3033_, v_as_3034_, v_i_3035_, v_j_3036_, v_bs_3037_);
lean_dec_ref(v_as_3034_);
lean_dec_ref(v_fst_3033_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(size_t v_sz_3039_, size_t v_i_3040_, lean_object* v_bs_3041_){
_start:
{
uint8_t v___x_3042_; 
v___x_3042_ = lean_usize_dec_lt(v_i_3040_, v_sz_3039_);
if (v___x_3042_ == 0)
{
return v_bs_3041_;
}
else
{
lean_object* v_v_3043_; lean_object* v_recArgPos_3044_; lean_object* v___x_3045_; lean_object* v_bs_x27_3046_; size_t v___x_3047_; size_t v___x_3048_; lean_object* v___x_3049_; 
v_v_3043_ = lean_array_uget_borrowed(v_bs_3041_, v_i_3040_);
v_recArgPos_3044_ = lean_ctor_get(v_v_3043_, 2);
lean_inc(v_recArgPos_3044_);
v___x_3045_ = lean_unsigned_to_nat(0u);
v_bs_x27_3046_ = lean_array_uset(v_bs_3041_, v_i_3040_, v___x_3045_);
v___x_3047_ = ((size_t)1ULL);
v___x_3048_ = lean_usize_add(v_i_3040_, v___x_3047_);
v___x_3049_ = lean_array_uset(v_bs_x27_3046_, v_i_3040_, v_recArgPos_3044_);
v_i_3040_ = v___x_3048_;
v_bs_3041_ = v___x_3049_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2___boxed(lean_object* v_sz_3051_, lean_object* v_i_3052_, lean_object* v_bs_3053_){
_start:
{
size_t v_sz_boxed_3054_; size_t v_i_boxed_3055_; lean_object* v_res_3056_; 
v_sz_boxed_3054_ = lean_unbox_usize(v_sz_3051_);
lean_dec(v_sz_3051_);
v_i_boxed_3055_ = lean_unbox_usize(v_i_3052_);
lean_dec(v_i_3052_);
v_res_3056_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(v_sz_boxed_3054_, v_i_boxed_3055_, v_bs_3053_);
return v_res_3056_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3058_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0));
v___x_3059_ = l_Lean_stringToMessageData(v___x_3058_);
return v___x_3059_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3(void){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2));
v___x_3062_ = l_Lean_stringToMessageData(v___x_3061_);
return v___x_3062_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5(void){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4));
v___x_3065_ = l_Lean_stringToMessageData(v___x_3064_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(lean_object* v_a_3066_, lean_object* v_as_3067_, size_t v_sz_3068_, size_t v_i_3069_, lean_object* v_b_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_a_3077_; uint8_t v___x_3081_; 
v___x_3081_ = lean_usize_dec_lt(v_i_3069_, v_sz_3068_);
if (v___x_3081_ == 0)
{
lean_object* v___x_3082_; 
lean_dec_ref(v_a_3066_);
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_b_3070_);
return v___x_3082_;
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3084_; 
v_a_3083_ = lean_array_uget_borrowed(v_as_3067_, v_i_3069_);
lean_inc(v_a_3083_);
lean_inc_ref(v_a_3066_);
v___x_3084_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_a_3066_, v_a_3083_, v___y_3072_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3085_);
lean_dec_ref(v___x_3084_);
v___x_3086_ = lean_box(0);
v___x_3087_ = lean_unbox(v_a_3085_);
lean_dec(v_a_3085_);
if (v___x_3087_ == 0)
{
v_a_3077_ = v___x_3086_;
goto v___jp_3076_;
}
else
{
uint8_t v___x_3088_; 
v___x_3088_ = l_Lean_Expr_isFVarOf(v_a_3066_, v_a_3083_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3089_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1);
lean_inc_ref(v_a_3066_);
v___x_3090_ = l_Lean_indentExpr(v_a_3066_);
v___x_3091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3);
v___x_3093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
lean_inc(v_a_3083_);
v___x_3094_ = l_Lean_mkFVar(v_a_3083_);
v___x_3095_ = l_Lean_indentExpr(v___x_3094_);
v___x_3096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3093_);
lean_ctor_set(v___x_3096_, 1, v___x_3095_);
v___x_3097_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5);
v___x_3098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3096_);
lean_ctor_set(v___x_3098_, 1, v___x_3097_);
v___x_3099_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_3098_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_dec_ref(v___x_3099_);
v_a_3077_ = v___x_3086_;
goto v___jp_3076_;
}
else
{
lean_dec_ref(v_a_3066_);
return v___x_3099_;
}
}
else
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3100_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1);
lean_inc_ref(v_a_3066_);
v___x_3101_ = l_Lean_indentExpr(v_a_3066_);
v___x_3102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3100_);
lean_ctor_set(v___x_3102_, 1, v___x_3101_);
v___x_3103_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5);
v___x_3104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3102_);
lean_ctor_set(v___x_3104_, 1, v___x_3103_);
v___x_3105_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_3104_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_dec_ref(v___x_3105_);
v_a_3077_ = v___x_3086_;
goto v___jp_3076_;
}
else
{
lean_dec_ref(v_a_3066_);
return v___x_3105_;
}
}
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec_ref(v_a_3066_);
v_a_3106_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3084_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3084_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
v___jp_3076_:
{
size_t v___x_3078_; size_t v___x_3079_; 
v___x_3078_ = ((size_t)1ULL);
v___x_3079_ = lean_usize_add(v_i_3069_, v___x_3078_);
v_i_3069_ = v___x_3079_;
v_b_3070_ = v_a_3077_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___boxed(lean_object* v_a_3114_, lean_object* v_as_3115_, lean_object* v_sz_3116_, lean_object* v_i_3117_, lean_object* v_b_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
size_t v_sz_boxed_3124_; size_t v_i_boxed_3125_; lean_object* v_res_3126_; 
v_sz_boxed_3124_ = lean_unbox_usize(v_sz_3116_);
lean_dec(v_sz_3116_);
v_i_boxed_3125_ = lean_unbox_usize(v_i_3117_);
lean_dec(v_i_3117_);
v_res_3126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(v_a_3114_, v_as_3115_, v_sz_boxed_3124_, v_i_boxed_3125_, v_b_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec_ref(v_as_3115_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(lean_object* v_snd_3127_, lean_object* v_as_3128_, size_t v_sz_3129_, size_t v_i_3130_, lean_object* v_b_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
uint8_t v___x_3137_; 
v___x_3137_ = lean_usize_dec_lt(v_i_3130_, v_sz_3129_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3138_; 
v___x_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3138_, 0, v_b_3131_);
return v___x_3138_;
}
else
{
lean_object* v___x_3139_; lean_object* v_a_3140_; size_t v_sz_3141_; size_t v___x_3142_; lean_object* v___x_3143_; 
v___x_3139_ = lean_box(0);
v_a_3140_ = lean_array_uget_borrowed(v_as_3128_, v_i_3130_);
v_sz_3141_ = lean_array_size(v_snd_3127_);
v___x_3142_ = ((size_t)0ULL);
lean_inc(v_a_3140_);
v___x_3143_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(v_a_3140_, v_snd_3127_, v_sz_3141_, v___x_3142_, v___x_3139_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
if (lean_obj_tag(v___x_3143_) == 0)
{
size_t v___x_3144_; size_t v___x_3145_; 
lean_dec_ref(v___x_3143_);
v___x_3144_ = ((size_t)1ULL);
v___x_3145_ = lean_usize_add(v_i_3130_, v___x_3144_);
v_i_3130_ = v___x_3145_;
v_b_3131_ = v___x_3139_;
goto _start;
}
else
{
return v___x_3143_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7___boxed(lean_object* v_snd_3147_, lean_object* v_as_3148_, lean_object* v_sz_3149_, lean_object* v_i_3150_, lean_object* v_b_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
size_t v_sz_boxed_3157_; size_t v_i_boxed_3158_; lean_object* v_res_3159_; 
v_sz_boxed_3157_ = lean_unbox_usize(v_sz_3149_);
lean_dec(v_sz_3149_);
v_i_boxed_3158_ = lean_unbox_usize(v_i_3150_);
lean_dec(v_i_3150_);
v_res_3159_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(v_snd_3147_, v_as_3148_, v_sz_boxed_3157_, v_i_boxed_3158_, v_b_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v_as_3148_);
lean_dec_ref(v_snd_3147_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(lean_object* v_snd_3160_, lean_object* v_as_3161_, size_t v_sz_3162_, size_t v_i_3163_, lean_object* v_b_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
uint8_t v___x_3170_; 
v___x_3170_ = lean_usize_dec_lt(v_i_3163_, v_sz_3162_);
if (v___x_3170_ == 0)
{
lean_object* v___x_3171_; 
v___x_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3171_, 0, v_b_3164_);
return v___x_3171_;
}
else
{
lean_object* v_a_3172_; lean_object* v_indGroupInst_3173_; lean_object* v_params_3174_; lean_object* v___x_3175_; size_t v_sz_3176_; size_t v___x_3177_; lean_object* v___x_3178_; 
v_a_3172_ = lean_array_uget_borrowed(v_as_3161_, v_i_3163_);
v_indGroupInst_3173_ = lean_ctor_get(v_a_3172_, 4);
v_params_3174_ = lean_ctor_get(v_indGroupInst_3173_, 2);
v___x_3175_ = lean_box(0);
v_sz_3176_ = lean_array_size(v_params_3174_);
v___x_3177_ = ((size_t)0ULL);
v___x_3178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(v_snd_3160_, v_params_3174_, v_sz_3176_, v___x_3177_, v___x_3175_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_);
if (lean_obj_tag(v___x_3178_) == 0)
{
size_t v___x_3179_; size_t v___x_3180_; 
lean_dec_ref(v___x_3178_);
v___x_3179_ = ((size_t)1ULL);
v___x_3180_ = lean_usize_add(v_i_3163_, v___x_3179_);
v_i_3163_ = v___x_3180_;
v_b_3164_ = v___x_3175_;
goto _start;
}
else
{
return v___x_3178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8___boxed(lean_object* v_snd_3182_, lean_object* v_as_3183_, lean_object* v_sz_3184_, lean_object* v_i_3185_, lean_object* v_b_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_){
_start:
{
size_t v_sz_boxed_3192_; size_t v_i_boxed_3193_; lean_object* v_res_3194_; 
v_sz_boxed_3192_ = lean_unbox_usize(v_sz_3184_);
lean_dec(v_sz_3184_);
v_i_boxed_3193_ = lean_unbox_usize(v_i_3185_);
lean_dec(v_i_3185_);
v_res_3194_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(v_snd_3182_, v_as_3183_, v_sz_boxed_3192_, v_i_boxed_3193_, v_b_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
lean_dec(v___y_3190_);
lean_dec_ref(v___y_3189_);
lean_dec(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec_ref(v_as_3183_);
lean_dec_ref(v_snd_3182_);
return v_res_3194_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__0));
v___x_3197_ = l_Lean_stringToMessageData(v___x_3196_);
return v___x_3197_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3199_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__2));
v___x_3200_ = l_Lean_stringToMessageData(v___x_3199_);
return v___x_3200_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3202_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__4));
v___x_3203_ = l_Lean_stringToMessageData(v___x_3202_);
return v___x_3203_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__6));
v___x_3206_ = l_Lean_stringToMessageData(v___x_3205_);
return v___x_3206_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3208_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__8));
v___x_3209_ = l_Lean_stringToMessageData(v___x_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(size_t v___x_3210_, lean_object* v_a_3211_, lean_object* v_xs_3212_, lean_object* v___x_3213_, lean_object* v_a_3214_, lean_object* v_recArgInfos_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3227_; lean_object* v___y_3228_; lean_object* v___x_3241_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___x_3266_; lean_object* v_a_3267_; size_t v_sz_3268_; lean_object* v___x_3269_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___y_3274_; uint8_t v___x_3333_; 
v___x_3241_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3));
v___x_3266_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_3241_, v___y_3218_);
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref(v___x_3266_);
v_sz_3268_ = lean_array_size(v_recArgInfos_3215_);
lean_inc_ref(v_recArgInfos_3215_);
v___x_3269_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(v_sz_3268_, v___x_3210_, v_recArgInfos_3215_);
v___x_3333_ = lean_unbox(v_a_3267_);
lean_dec(v_a_3267_);
if (v___x_3333_ == 0)
{
v___y_3271_ = v___y_3216_;
v___y_3272_ = v___y_3217_;
v___y_3273_ = v___y_3218_;
v___y_3274_ = v___y_3219_;
goto v___jp_3270_;
}
else
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3334_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9);
lean_inc_ref(v___x_3269_);
v___x_3335_ = lean_array_to_list(v___x_3269_);
v___x_3336_ = lean_box(0);
v___x_3337_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(v___x_3335_, v___x_3336_);
v___x_3338_ = l_Lean_MessageData_ofList(v___x_3337_);
v___x_3339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3334_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
v___x_3340_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_3241_, v___x_3339_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_dec_ref(v___x_3340_);
v___y_3271_ = v___y_3216_;
v___y_3272_ = v___y_3217_;
v___y_3273_ = v___y_3218_;
v___y_3274_ = v___y_3219_;
goto v___jp_3270_;
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3348_; 
lean_dec_ref(v___x_3269_);
lean_dec_ref(v_recArgInfos_3215_);
lean_dec_ref(v_a_3214_);
lean_dec(v___x_3213_);
lean_dec_ref(v_xs_3212_);
lean_dec_ref(v_a_3211_);
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3343_ = v___x_3340_;
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3344_ == 0)
{
v___x_3346_ = v___x_3343_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3341_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
v___jp_3221_:
{
lean_object* v___x_3229_; size_t v_sz_3230_; lean_object* v___x_3231_; 
v___x_3229_ = lean_box(0);
v_sz_3230_ = lean_array_size(v___y_3222_);
v___x_3231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(v___y_3224_, v___y_3222_, v_sz_3230_, v___x_3210_, v___x_3229_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec_ref(v___y_3222_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v___x_3232_; 
lean_dec_ref(v___x_3231_);
v___x_3232_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v___y_3224_, v___y_3223_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec_ref(v___y_3224_);
return v___x_3232_;
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec_ref(v___y_3224_);
lean_dec_ref(v___y_3223_);
v_a_3233_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3231_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3231_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
v___jp_3242_:
{
lean_object* v___x_3250_; lean_object* v_a_3251_; uint8_t v___x_3252_; 
v___x_3250_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_3241_, v___y_3248_);
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref(v___x_3250_);
v___x_3252_ = lean_unbox(v_a_3251_);
lean_dec(v_a_3251_);
if (v___x_3252_ == 0)
{
v___y_3222_ = v___y_3243_;
v___y_3223_ = v___y_3244_;
v___y_3224_ = v___y_3245_;
v___y_3225_ = v___y_3246_;
v___y_3226_ = v___y_3247_;
v___y_3227_ = v___y_3248_;
v___y_3228_ = v___y_3249_;
goto v___jp_3221_;
}
else
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3253_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1);
lean_inc_ref(v___y_3243_);
v___x_3254_ = l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(v___y_3243_);
v___x_3255_ = l_Lean_MessageData_ofFormat(v___x_3254_);
v___x_3256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3253_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
v___x_3257_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_3241_, v___x_3256_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_dec_ref(v___x_3257_);
v___y_3222_ = v___y_3243_;
v___y_3223_ = v___y_3244_;
v___y_3224_ = v___y_3245_;
v___y_3225_ = v___y_3246_;
v___y_3226_ = v___y_3247_;
v___y_3227_ = v___y_3248_;
v___y_3228_ = v___y_3249_;
goto v___jp_3221_;
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
lean_dec_ref(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec_ref(v___y_3243_);
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3257_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3257_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
}
v___jp_3270_:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v_snd_3277_; lean_object* v_fst_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3332_; 
lean_inc_ref(v_recArgInfos_3215_);
v___x_3275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(v_sz_3268_, v___x_3210_, v_recArgInfos_3215_);
lean_inc_ref(v_xs_3212_);
v___x_3276_ = l_Lean_Elab_FixedParamPerms_erase(v_a_3211_, v_xs_3212_, v___x_3275_);
v_snd_3277_ = lean_ctor_get(v___x_3276_, 1);
v_fst_3278_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3280_ = v___x_3276_;
v_isShared_3281_ = v_isSharedCheck_3332_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_snd_3277_);
lean_inc(v_fst_3278_);
lean_dec(v___x_3276_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3332_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v_fst_3282_; lean_object* v_snd_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3331_; 
v_fst_3282_ = lean_ctor_get(v_snd_3277_, 0);
v_snd_3283_ = lean_ctor_get(v_snd_3277_, 1);
v_isSharedCheck_3331_ = !lean_is_exclusive(v_snd_3277_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3285_ = v_snd_3277_;
v_isShared_3286_ = v_isSharedCheck_3331_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_snd_3283_);
lean_inc(v_fst_3282_);
lean_dec(v_snd_3277_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3331_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; uint8_t v___x_3293_; 
v___x_3287_ = lean_array_get_size(v_recArgInfos_3215_);
v___x_3288_ = lean_mk_empty_array_with_capacity(v___x_3287_);
v___x_3289_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3278_, v_recArgInfos_3215_, v___x_3287_, v___x_3213_, v___x_3288_);
lean_dec_ref(v_recArgInfos_3215_);
lean_inc_ref(v___x_3289_);
lean_inc(v_fst_3282_);
v___f_3290_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3290_, 0, v_a_3214_);
lean_closure_set(v___f_3290_, 1, v_fst_3278_);
lean_closure_set(v___f_3290_, 2, v_fst_3282_);
lean_closure_set(v___f_3290_, 3, v___x_3289_);
lean_closure_set(v___f_3290_, 4, v___x_3269_);
v___x_3291_ = lean_array_get_size(v_fst_3282_);
v___x_3292_ = lean_array_get_size(v_xs_3212_);
v___x_3293_ = lean_nat_dec_eq(v___x_3291_, v___x_3292_);
if (v___x_3293_ == 0)
{
lean_object* v___x_3294_; lean_object* v_a_3295_; uint8_t v___x_3296_; 
v___x_3294_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_3241_, v___y_3273_);
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref(v___x_3294_);
v___x_3296_ = lean_unbox(v_a_3295_);
lean_dec(v_a_3295_);
if (v___x_3296_ == 0)
{
lean_del_object(v___x_3285_);
lean_dec(v_fst_3282_);
lean_del_object(v___x_3280_);
lean_dec_ref(v_xs_3212_);
v___y_3243_ = v___x_3289_;
v___y_3244_ = v___f_3290_;
v___y_3245_ = v_snd_3283_;
v___y_3246_ = v___y_3271_;
v___y_3247_ = v___y_3272_;
v___y_3248_ = v___y_3273_;
v___y_3249_ = v___y_3274_;
goto v___jp_3242_;
}
else
{
lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3303_; 
v___x_3297_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3);
v___x_3298_ = lean_array_to_list(v_xs_3212_);
v___x_3299_ = lean_box(0);
v___x_3300_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_3298_, v___x_3299_);
v___x_3301_ = l_Lean_MessageData_ofList(v___x_3300_);
if (v_isShared_3286_ == 0)
{
lean_ctor_set_tag(v___x_3285_, 7);
lean_ctor_set(v___x_3285_, 1, v___x_3301_);
lean_ctor_set(v___x_3285_, 0, v___x_3297_);
v___x_3303_ = v___x_3285_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v___x_3297_);
lean_ctor_set(v_reuseFailAlloc_3329_, 1, v___x_3301_);
v___x_3303_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
lean_object* v___x_3304_; lean_object* v___x_3306_; 
v___x_3304_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5);
if (v_isShared_3281_ == 0)
{
lean_ctor_set_tag(v___x_3280_, 7);
lean_ctor_set(v___x_3280_, 1, v___x_3304_);
lean_ctor_set(v___x_3280_, 0, v___x_3303_);
v___x_3306_ = v___x_3280_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3303_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v___x_3304_);
v___x_3306_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; size_t v_sz_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3307_ = lean_array_to_list(v_fst_3282_);
v___x_3308_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_3307_, v___x_3299_);
v___x_3309_ = l_Lean_MessageData_ofList(v___x_3308_);
v___x_3310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3306_);
lean_ctor_set(v___x_3310_, 1, v___x_3309_);
v___x_3311_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7);
v___x_3312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3310_);
lean_ctor_set(v___x_3312_, 1, v___x_3311_);
v_sz_3313_ = lean_array_size(v_snd_3283_);
lean_inc(v_snd_3283_);
v___x_3314_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(v_sz_3313_, v___x_3210_, v_snd_3283_);
v___x_3315_ = lean_array_to_list(v___x_3314_);
v___x_3316_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_3315_, v___x_3299_);
v___x_3317_ = l_Lean_MessageData_ofList(v___x_3316_);
v___x_3318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3312_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
v___x_3319_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v___x_3241_, v___x_3318_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_dec_ref(v___x_3319_);
v___y_3243_ = v___x_3289_;
v___y_3244_ = v___f_3290_;
v___y_3245_ = v_snd_3283_;
v___y_3246_ = v___y_3271_;
v___y_3247_ = v___y_3272_;
v___y_3248_ = v___y_3273_;
v___y_3249_ = v___y_3274_;
goto v___jp_3242_;
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3327_; 
lean_dec_ref(v___f_3290_);
lean_dec_ref(v___x_3289_);
lean_dec(v_snd_3283_);
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3322_ = v___x_3319_;
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3319_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3325_; 
if (v_isShared_3323_ == 0)
{
v___x_3325_ = v___x_3322_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3320_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3330_; 
lean_dec_ref(v___x_3289_);
lean_del_object(v___x_3285_);
lean_dec(v_fst_3282_);
lean_del_object(v___x_3280_);
lean_dec_ref(v_xs_3212_);
v___x_3330_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_snd_3283_, v___f_3290_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
lean_dec(v_snd_3283_);
return v___x_3330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed(lean_object* v___x_3349_, lean_object* v_a_3350_, lean_object* v_xs_3351_, lean_object* v___x_3352_, lean_object* v_a_3353_, lean_object* v_recArgInfos_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_){
_start:
{
size_t v___x_14880__boxed_3360_; lean_object* v_res_3361_; 
v___x_14880__boxed_3360_ = lean_unbox_usize(v___x_3349_);
lean_dec(v___x_3349_);
v_res_3361_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(v___x_14880__boxed_3360_, v_a_3350_, v_xs_3351_, v___x_3352_, v_a_3353_, v_recArgInfos_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec_ref(v___y_3355_);
return v_res_3361_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(lean_object* v___x_3362_, lean_object* v_xs_3363_, lean_object* v_as_3364_, lean_object* v_i_3365_, lean_object* v_j_3366_, lean_object* v_bs_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v_zero_3373_; uint8_t v_isZero_3374_; 
v_zero_3373_ = lean_unsigned_to_nat(0u);
v_isZero_3374_ = lean_nat_dec_eq(v_i_3365_, v_zero_3373_);
if (v_isZero_3374_ == 1)
{
lean_object* v___x_3375_; 
lean_dec(v_j_3366_);
lean_dec(v_i_3365_);
lean_dec_ref(v_xs_3363_);
v___x_3375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3375_, 0, v_bs_3367_);
return v___x_3375_;
}
else
{
lean_object* v___x_3376_; lean_object* v_value_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3376_ = lean_array_fget_borrowed(v_as_3364_, v_j_3366_);
v_value_3377_ = lean_ctor_get(v___x_3376_, 7);
v___x_3378_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v___x_3379_ = lean_array_get_borrowed(v___x_3378_, v___x_3362_, v_j_3366_);
lean_inc_ref(v_xs_3363_);
lean_inc_ref(v_value_3377_);
lean_inc(v___x_3379_);
v___x_3380_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_3379_, v_value_3377_, v_xs_3363_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v_one_3382_; lean_object* v_n_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref(v___x_3380_);
v_one_3382_ = lean_unsigned_to_nat(1u);
v_n_3383_ = lean_nat_sub(v_i_3365_, v_one_3382_);
lean_dec(v_i_3365_);
v___x_3384_ = lean_nat_add(v_j_3366_, v_one_3382_);
lean_dec(v_j_3366_);
v___x_3385_ = lean_array_push(v_bs_3367_, v_a_3381_);
v_i_3365_ = v_n_3383_;
v_j_3366_ = v___x_3384_;
v_bs_3367_ = v___x_3385_;
goto _start;
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_dec_ref(v_bs_3367_);
lean_dec(v_j_3366_);
lean_dec(v_i_3365_);
lean_dec_ref(v_xs_3363_);
v_a_3387_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3380_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3380_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg___boxed(lean_object* v___x_3395_, lean_object* v_xs_3396_, lean_object* v_as_3397_, lean_object* v_i_3398_, lean_object* v_j_3399_, lean_object* v_bs_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v___x_3395_, v_xs_3396_, v_as_3397_, v_i_3398_, v_j_3399_, v_bs_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec_ref(v_as_3397_);
lean_dec_ref(v___x_3395_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(lean_object* v_a_3407_, lean_object* v_perms_3408_, lean_object* v___x_3409_, lean_object* v_fnNames_3410_, lean_object* v_a_3411_, lean_object* v_termMeasure_x3fs_3412_, size_t v___x_3413_, lean_object* v_xs_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3420_ = lean_array_get_size(v_a_3407_);
v___x_3421_ = lean_mk_empty_array_with_capacity(v___x_3420_);
lean_inc(v___x_3409_);
lean_inc_ref(v_xs_3414_);
v___x_3422_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v_perms_3408_, v_xs_3414_, v_a_3407_, v___x_3420_, v___x_3409_, v___x_3421_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref(v___x_3422_);
lean_inc(v_a_3423_);
lean_inc_ref(v_xs_3414_);
lean_inc_ref(v_a_3411_);
lean_inc_ref(v_fnNames_3410_);
v___x_3424_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_findRecArgCandidates___boxed), 10, 5);
lean_closure_set(v___x_3424_, 0, v_fnNames_3410_);
lean_closure_set(v___x_3424_, 1, v_a_3411_);
lean_closure_set(v___x_3424_, 2, v_xs_3414_);
lean_closure_set(v___x_3424_, 3, v_a_3423_);
lean_closure_set(v___x_3424_, 4, v_termMeasure_x3fs_3412_);
lean_inc_ref(v_a_3407_);
v___x_3425_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_a_3407_, v___x_3424_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3427_; lean_object* v___f_3428_; lean_object* v___x_3429_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_a_3426_);
lean_dec_ref(v___x_3425_);
v___x_3427_ = lean_box_usize(v___x_3413_);
lean_inc_ref(v_xs_3414_);
v___f_3428_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed), 11, 5);
lean_closure_set(v___f_3428_, 0, v___x_3427_);
lean_closure_set(v___f_3428_, 1, v_a_3411_);
lean_closure_set(v___f_3428_, 2, v_xs_3414_);
lean_closure_set(v___f_3428_, 3, v___x_3409_);
lean_closure_set(v___f_3428_, 4, v_a_3407_);
v___x_3429_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_3410_, v_xs_3414_, v_a_3423_, v_a_3426_, v___f_3428_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
lean_dec_ref(v_fnNames_3410_);
return v___x_3429_;
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_dec(v_a_3423_);
lean_dec_ref(v_xs_3414_);
lean_dec_ref(v_a_3411_);
lean_dec_ref(v_fnNames_3410_);
lean_dec(v___x_3409_);
lean_dec_ref(v_a_3407_);
v_a_3430_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3425_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3425_);
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
}
else
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
lean_dec_ref(v_xs_3414_);
lean_dec_ref(v_termMeasure_x3fs_3412_);
lean_dec_ref(v_a_3411_);
lean_dec_ref(v_fnNames_3410_);
lean_dec(v___x_3409_);
lean_dec_ref(v_a_3407_);
v_a_3438_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3422_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3422_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_a_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed(lean_object* v_a_3446_, lean_object* v_perms_3447_, lean_object* v___x_3448_, lean_object* v_fnNames_3449_, lean_object* v_a_3450_, lean_object* v_termMeasure_x3fs_3451_, lean_object* v___x_3452_, lean_object* v_xs_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
size_t v___x_15237__boxed_3459_; lean_object* v_res_3460_; 
v___x_15237__boxed_3459_ = lean_unbox_usize(v___x_3452_);
lean_dec(v___x_3452_);
v_res_3460_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(v_a_3446_, v_perms_3447_, v___x_3448_, v_fnNames_3449_, v_a_3450_, v_termMeasure_x3fs_3451_, v___x_15237__boxed_3459_, v_xs_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_);
lean_dec(v___y_3457_);
lean_dec_ref(v___y_3456_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3454_);
lean_dec_ref(v_perms_3447_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(size_t v_sz_3461_, size_t v_i_3462_, lean_object* v_bs_3463_){
_start:
{
uint8_t v___x_3464_; 
v___x_3464_ = lean_usize_dec_lt(v_i_3462_, v_sz_3461_);
if (v___x_3464_ == 0)
{
return v_bs_3463_;
}
else
{
lean_object* v_v_3465_; lean_object* v_declName_3466_; lean_object* v___x_3467_; lean_object* v_bs_x27_3468_; size_t v___x_3469_; size_t v___x_3470_; lean_object* v___x_3471_; 
v_v_3465_ = lean_array_uget_borrowed(v_bs_3463_, v_i_3462_);
v_declName_3466_ = lean_ctor_get(v_v_3465_, 3);
lean_inc(v_declName_3466_);
v___x_3467_ = lean_unsigned_to_nat(0u);
v_bs_x27_3468_ = lean_array_uset(v_bs_3463_, v_i_3462_, v___x_3467_);
v___x_3469_ = ((size_t)1ULL);
v___x_3470_ = lean_usize_add(v_i_3462_, v___x_3469_);
v___x_3471_ = lean_array_uset(v_bs_x27_3468_, v_i_3462_, v_declName_3466_);
v_i_3462_ = v___x_3470_;
v_bs_3463_ = v___x_3471_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0___boxed(lean_object* v_sz_3473_, lean_object* v_i_3474_, lean_object* v_bs_3475_){
_start:
{
size_t v_sz_boxed_3476_; size_t v_i_boxed_3477_; lean_object* v_res_3478_; 
v_sz_boxed_3476_ = lean_unbox_usize(v_sz_3473_);
lean_dec(v_sz_3473_);
v_i_boxed_3477_ = lean_unbox_usize(v_i_3474_);
lean_dec(v_i_3474_);
v_res_3478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_boxed_3476_, v_i_boxed_3477_, v_bs_3475_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(lean_object* v_fnNames_3479_, lean_object* v_numSectionVars_3480_, size_t v_sz_3481_, size_t v_i_3482_, lean_object* v_bs_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
uint8_t v___x_3487_; 
v___x_3487_ = lean_usize_dec_lt(v_i_3482_, v_sz_3481_);
if (v___x_3487_ == 0)
{
lean_object* v___x_3488_; 
lean_dec(v_numSectionVars_3480_);
lean_dec_ref(v_fnNames_3479_);
v___x_3488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3488_, 0, v_bs_3483_);
return v___x_3488_;
}
else
{
lean_object* v_v_3489_; lean_object* v_ref_3490_; uint8_t v_kind_3491_; lean_object* v_levelParams_3492_; lean_object* v_modifiers_3493_; lean_object* v_declName_3494_; lean_object* v_binders_3495_; lean_object* v_numSectionVars_3496_; lean_object* v_type_3497_; lean_object* v_value_3498_; lean_object* v_termination_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3522_; 
v_v_3489_ = lean_array_uget(v_bs_3483_, v_i_3482_);
v_ref_3490_ = lean_ctor_get(v_v_3489_, 0);
v_kind_3491_ = lean_ctor_get_uint8(v_v_3489_, sizeof(void*)*9);
v_levelParams_3492_ = lean_ctor_get(v_v_3489_, 1);
v_modifiers_3493_ = lean_ctor_get(v_v_3489_, 2);
v_declName_3494_ = lean_ctor_get(v_v_3489_, 3);
v_binders_3495_ = lean_ctor_get(v_v_3489_, 4);
v_numSectionVars_3496_ = lean_ctor_get(v_v_3489_, 5);
v_type_3497_ = lean_ctor_get(v_v_3489_, 6);
v_value_3498_ = lean_ctor_get(v_v_3489_, 7);
v_termination_3499_ = lean_ctor_get(v_v_3489_, 8);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_v_3489_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3501_ = v_v_3489_;
v_isShared_3502_ = v_isSharedCheck_3522_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_termination_3499_);
lean_inc(v_value_3498_);
lean_inc(v_type_3497_);
lean_inc(v_numSectionVars_3496_);
lean_inc(v_binders_3495_);
lean_inc(v_declName_3494_);
lean_inc(v_modifiers_3493_);
lean_inc(v_levelParams_3492_);
lean_inc(v_ref_3490_);
lean_dec(v_v_3489_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3522_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3503_; 
lean_inc(v_numSectionVars_3480_);
lean_inc_ref(v_fnNames_3479_);
v___x_3503_ = l_Lean_Elab_Structural_preprocess(v_value_3498_, v_fnNames_3479_, v_numSectionVars_3480_, v___y_3484_, v___y_3485_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v___x_3505_; lean_object* v_bs_x27_3506_; lean_object* v___x_3508_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref(v___x_3503_);
v___x_3505_ = lean_unsigned_to_nat(0u);
v_bs_x27_3506_ = lean_array_uset(v_bs_3483_, v_i_3482_, v___x_3505_);
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 7, v_a_3504_);
v___x_3508_ = v___x_3501_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_ref_3490_);
lean_ctor_set(v_reuseFailAlloc_3513_, 1, v_levelParams_3492_);
lean_ctor_set(v_reuseFailAlloc_3513_, 2, v_modifiers_3493_);
lean_ctor_set(v_reuseFailAlloc_3513_, 3, v_declName_3494_);
lean_ctor_set(v_reuseFailAlloc_3513_, 4, v_binders_3495_);
lean_ctor_set(v_reuseFailAlloc_3513_, 5, v_numSectionVars_3496_);
lean_ctor_set(v_reuseFailAlloc_3513_, 6, v_type_3497_);
lean_ctor_set(v_reuseFailAlloc_3513_, 7, v_a_3504_);
lean_ctor_set(v_reuseFailAlloc_3513_, 8, v_termination_3499_);
lean_ctor_set_uint8(v_reuseFailAlloc_3513_, sizeof(void*)*9, v_kind_3491_);
v___x_3508_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
size_t v___x_3509_; size_t v___x_3510_; lean_object* v___x_3511_; 
v___x_3509_ = ((size_t)1ULL);
v___x_3510_ = lean_usize_add(v_i_3482_, v___x_3509_);
v___x_3511_ = lean_array_uset(v_bs_x27_3506_, v_i_3482_, v___x_3508_);
v_i_3482_ = v___x_3510_;
v_bs_3483_ = v___x_3511_;
goto _start;
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_del_object(v___x_3501_);
lean_dec_ref(v_termination_3499_);
lean_dec_ref(v_type_3497_);
lean_dec(v_numSectionVars_3496_);
lean_dec(v_binders_3495_);
lean_dec(v_declName_3494_);
lean_dec_ref(v_modifiers_3493_);
lean_dec(v_levelParams_3492_);
lean_dec(v_ref_3490_);
lean_dec_ref(v_bs_3483_);
lean_dec(v_numSectionVars_3480_);
lean_dec_ref(v_fnNames_3479_);
v_a_3514_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3503_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3503_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg___boxed(lean_object* v_fnNames_3523_, lean_object* v_numSectionVars_3524_, lean_object* v_sz_3525_, lean_object* v_i_3526_, lean_object* v_bs_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_){
_start:
{
size_t v_sz_boxed_3531_; size_t v_i_boxed_3532_; lean_object* v_res_3533_; 
v_sz_boxed_3531_ = lean_unbox_usize(v_sz_3525_);
lean_dec(v_sz_3525_);
v_i_boxed_3532_ = lean_unbox_usize(v_i_3526_);
lean_dec(v_i_3526_);
v_res_3533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(v_fnNames_3523_, v_numSectionVars_3524_, v_sz_boxed_3531_, v_i_boxed_3532_, v_bs_3527_, v___y_3528_, v___y_3529_);
lean_dec(v___y_3529_);
lean_dec_ref(v___y_3528_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(lean_object* v_fnNames_3534_, lean_object* v_numSectionVars_3535_, size_t v_sz_3536_, size_t v_i_3537_, lean_object* v_bs_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_){
_start:
{
lean_object* v___x_3544_; 
v___x_3544_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(v_fnNames_3534_, v_numSectionVars_3535_, v_sz_3536_, v_i_3537_, v_bs_3538_, v___y_3541_, v___y_3542_);
return v___x_3544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed(lean_object* v_fnNames_3545_, lean_object* v_numSectionVars_3546_, lean_object* v_sz_3547_, lean_object* v_i_3548_, lean_object* v_bs_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
size_t v_sz_boxed_3555_; size_t v_i_boxed_3556_; lean_object* v_res_3557_; 
v_sz_boxed_3555_ = lean_unbox_usize(v_sz_3547_);
lean_dec(v_sz_3547_);
v_i_boxed_3556_ = lean_unbox_usize(v_i_3548_);
lean_dec(v_i_3548_);
v_res_3557_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(v_fnNames_3545_, v_numSectionVars_3546_, v_sz_boxed_3555_, v_i_boxed_3556_, v_bs_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_);
lean_dec(v___y_3553_);
lean_dec_ref(v___y_3552_);
lean_dec(v___y_3551_);
lean_dec_ref(v___y_3550_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(lean_object* v_preDefs_3558_, lean_object* v_termMeasure_x3fs_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v_numSectionVars_3568_; size_t v_sz_3569_; size_t v___x_3570_; lean_object* v_fnNames_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3565_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_3566_ = lean_unsigned_to_nat(0u);
v___x_3567_ = lean_array_get_borrowed(v___x_3565_, v_preDefs_3558_, v___x_3566_);
v_numSectionVars_3568_ = lean_ctor_get(v___x_3567_, 5);
v_sz_3569_ = lean_array_size(v_preDefs_3558_);
v___x_3570_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3558_);
v_fnNames_3571_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_3569_, v___x_3570_, v_preDefs_3558_);
v___x_3572_ = lean_box_usize(v_sz_3569_);
v___x_3573_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1));
lean_inc_ref(v_preDefs_3558_);
lean_inc(v_numSectionVars_3568_);
lean_inc_ref(v_fnNames_3571_);
v___x_3574_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed), 10, 5);
lean_closure_set(v___x_3574_, 0, v_fnNames_3571_);
lean_closure_set(v___x_3574_, 1, v_numSectionVars_3568_);
lean_closure_set(v___x_3574_, 2, v___x_3572_);
lean_closure_set(v___x_3574_, 3, v___x_3573_);
lean_closure_set(v___x_3574_, 4, v_preDefs_3558_);
v___x_3575_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_preDefs_3558_, v___x_3574_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_);
if (lean_obj_tag(v___x_3575_) == 0)
{
lean_object* v_a_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v_a_3576_ = lean_ctor_get(v___x_3575_, 0);
lean_inc(v_a_3576_);
lean_dec_ref(v___x_3575_);
lean_inc(v_a_3576_);
v___x_3577_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___boxed), 6, 1);
lean_closure_set(v___x_3577_, 0, v_a_3576_);
lean_inc(v_a_3576_);
v___x_3578_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg(v_a_3576_, v___x_3577_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v_perms_3580_; lean_object* v___x_3581_; lean_object* v_type_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___f_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref(v___x_3578_);
v_perms_3580_ = lean_ctor_get(v_a_3579_, 1);
lean_inc_ref(v_perms_3580_);
v___x_3581_ = lean_array_get_borrowed(v___x_3565_, v_a_3576_, v___x_3566_);
v_type_3582_ = lean_ctor_get(v___x_3581_, 6);
lean_inc_ref(v_type_3582_);
v___x_3583_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v___x_3584_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___redArg___boxed__const__1));
lean_inc_ref(v_perms_3580_);
v___f_3585_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed), 13, 7);
lean_closure_set(v___f_3585_, 0, v_a_3576_);
lean_closure_set(v___f_3585_, 1, v_perms_3580_);
lean_closure_set(v___f_3585_, 2, v___x_3566_);
lean_closure_set(v___f_3585_, 3, v_fnNames_3571_);
lean_closure_set(v___f_3585_, 4, v_a_3579_);
lean_closure_set(v___f_3585_, 5, v_termMeasure_x3fs_3559_);
lean_closure_set(v___f_3585_, 6, v___x_3584_);
v___x_3586_ = lean_array_get(v___x_3583_, v_perms_3580_, v___x_3566_);
lean_dec_ref(v_perms_3580_);
v___x_3587_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v___x_3586_, v_type_3582_, v___f_3585_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_);
return v___x_3587_;
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec(v_a_3576_);
lean_dec_ref(v_fnNames_3571_);
lean_dec_ref(v_termMeasure_x3fs_3559_);
v_a_3588_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3578_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3578_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
lean_dec_ref(v_fnNames_3571_);
lean_dec_ref(v_termMeasure_x3fs_3559_);
v_a_3596_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3575_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3575_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___boxed(lean_object* v_preDefs_3604_, lean_object* v_termMeasure_x3fs_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_){
_start:
{
lean_object* v_res_3611_; 
v_res_3611_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(v_preDefs_3604_, v_termMeasure_x3fs_3605_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
lean_dec(v_a_3609_);
lean_dec_ref(v_a_3608_);
lean_dec(v_a_3607_);
lean_dec_ref(v_a_3606_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(lean_object* v_fst_3612_, lean_object* v_as_3613_, lean_object* v_i_3614_, lean_object* v_j_3615_, lean_object* v_inv_3616_, lean_object* v_bs_3617_){
_start:
{
lean_object* v___x_3618_; 
v___x_3618_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3612_, v_as_3613_, v_i_3614_, v_j_3615_, v_bs_3617_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___boxed(lean_object* v_fst_3619_, lean_object* v_as_3620_, lean_object* v_i_3621_, lean_object* v_j_3622_, lean_object* v_inv_3623_, lean_object* v_bs_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(v_fst_3619_, v_as_3620_, v_i_3621_, v_j_3622_, v_inv_3623_, v_bs_3624_);
lean_dec_ref(v_as_3620_);
lean_dec_ref(v_fst_3619_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(lean_object* v_00_u03b1_3626_, lean_object* v_lctx_3627_, lean_object* v_localInsts_3628_, lean_object* v_x_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v_lctx_3627_, v_localInsts_3628_, v_x_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___boxed(lean_object* v_00_u03b1_3636_, lean_object* v_lctx_3637_, lean_object* v_localInsts_3638_, lean_object* v_x_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(v_00_u03b1_3636_, v_lctx_3637_, v_localInsts_3638_, v_x_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(lean_object* v_00_u03b1_3646_, lean_object* v_fvarIds_3647_, lean_object* v_k_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v___x_3654_; 
v___x_3654_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_fvarIds_3647_, v_k_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___boxed(lean_object* v_00_u03b1_3655_, lean_object* v_fvarIds_3656_, lean_object* v_k_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(v_00_u03b1_3655_, v_fvarIds_3656_, v_k_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
lean_dec_ref(v_fvarIds_3656_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__15(lean_object* v_a_3664_){
_start:
{
lean_object* v___x_3665_; 
v___x_3665_ = lean_nat_to_int(v_a_3664_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(lean_object* v___x_3666_, lean_object* v_xs_3667_, lean_object* v_as_3668_, lean_object* v_i_3669_, lean_object* v_j_3670_, lean_object* v_inv_3671_, lean_object* v_bs_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
lean_object* v___x_3678_; 
v___x_3678_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v___x_3666_, v_xs_3667_, v_as_3668_, v_i_3669_, v_j_3670_, v_bs_3672_, v___y_3673_, v___y_3674_, v___y_3675_, v___y_3676_);
return v___x_3678_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___boxed(lean_object* v___x_3679_, lean_object* v_xs_3680_, lean_object* v_as_3681_, lean_object* v_i_3682_, lean_object* v_j_3683_, lean_object* v_inv_3684_, lean_object* v_bs_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_){
_start:
{
lean_object* v_res_3691_; 
v_res_3691_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(v___x_3679_, v_xs_3680_, v_as_3681_, v_i_3682_, v_j_3683_, v_inv_3684_, v_bs_3685_, v___y_3686_, v___y_3687_, v___y_3688_, v___y_3689_);
lean_dec(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec(v___y_3687_);
lean_dec_ref(v___y_3686_);
lean_dec_ref(v_as_3681_);
lean_dec_ref(v___x_3679_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0(lean_object* v___x_3692_, lean_object* v_recArgPos_3693_, lean_object* v_xs_3694_, lean_object* v_x_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_){
_start:
{
lean_object* v___x_3701_; uint8_t v___x_3702_; uint8_t v___x_3703_; uint8_t v___x_3704_; lean_object* v___x_3705_; 
v___x_3701_ = lean_array_get_borrowed(v___x_3692_, v_xs_3694_, v_recArgPos_3693_);
v___x_3702_ = 0;
v___x_3703_ = 1;
v___x_3704_ = 1;
lean_inc(v___x_3701_);
v___x_3705_ = l_Lean_Meta_mkLambdaFVars(v_xs_3694_, v___x_3701_, v___x_3702_, v___x_3703_, v___x_3702_, v___x_3703_, v___x_3704_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_);
return v___x_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed(lean_object* v___x_3706_, lean_object* v_recArgPos_3707_, lean_object* v_xs_3708_, lean_object* v_x_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_){
_start:
{
lean_object* v_res_3715_; 
v_res_3715_ = l_Lean_Elab_Structural_reportTermMeasure___lam__0(v___x_3706_, v_recArgPos_3707_, v_xs_3708_, v_x_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec_ref(v_x_3709_);
lean_dec_ref(v_xs_3708_);
lean_dec(v_recArgPos_3707_);
lean_dec_ref(v___x_3706_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1(lean_object* v_xs_3716_, lean_object* v_x_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; 
v___x_3723_ = lean_array_get_size(v_xs_3716_);
v___x_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
return v___x_3724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed(lean_object* v_xs_3725_, lean_object* v_x_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_Lean_Elab_Structural_reportTermMeasure___lam__1(v_xs_3725_, v_x_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec(v___y_3728_);
lean_dec_ref(v___y_3727_);
lean_dec_ref(v_x_3726_);
lean_dec_ref(v_xs_3725_);
return v_res_3732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure(lean_object* v_preDef_3744_, lean_object* v_recArgPos_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_){
_start:
{
lean_object* v_termination_3751_; lean_object* v_terminationBy_x3f_x3f_3752_; 
v_termination_3751_ = lean_ctor_get(v_preDef_3744_, 8);
lean_inc_ref(v_termination_3751_);
v_terminationBy_x3f_x3f_3752_ = lean_ctor_get(v_termination_3751_, 1);
lean_inc(v_terminationBy_x3f_x3f_3752_);
if (lean_obj_tag(v_terminationBy_x3f_x3f_3752_) == 1)
{
lean_object* v_value_3753_; lean_object* v_extraParams_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3805_; 
v_value_3753_ = lean_ctor_get(v_preDef_3744_, 7);
lean_inc_ref(v_value_3753_);
lean_dec_ref(v_preDef_3744_);
v_extraParams_3754_ = lean_ctor_get(v_termination_3751_, 5);
v_isSharedCheck_3805_ = !lean_is_exclusive(v_termination_3751_);
if (v_isSharedCheck_3805_ == 0)
{
lean_object* v_unused_3806_; lean_object* v_unused_3807_; lean_object* v_unused_3808_; lean_object* v_unused_3809_; lean_object* v_unused_3810_; 
v_unused_3806_ = lean_ctor_get(v_termination_3751_, 4);
lean_dec(v_unused_3806_);
v_unused_3807_ = lean_ctor_get(v_termination_3751_, 3);
lean_dec(v_unused_3807_);
v_unused_3808_ = lean_ctor_get(v_termination_3751_, 2);
lean_dec(v_unused_3808_);
v_unused_3809_ = lean_ctor_get(v_termination_3751_, 1);
lean_dec(v_unused_3809_);
v_unused_3810_ = lean_ctor_get(v_termination_3751_, 0);
lean_dec(v_unused_3810_);
v___x_3756_ = v_termination_3751_;
v_isShared_3757_ = v_isSharedCheck_3805_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_extraParams_3754_);
lean_dec(v_termination_3751_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3805_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v_val_3758_; lean_object* v___x_3759_; lean_object* v___f_3760_; uint8_t v___x_3761_; lean_object* v___x_3762_; 
v_val_3758_ = lean_ctor_get(v_terminationBy_x3f_x3f_3752_, 0);
lean_inc(v_val_3758_);
lean_dec_ref(v_terminationBy_x3f_x3f_3752_);
v___x_3759_ = l_Lean_instInhabitedExpr;
v___f_3760_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed), 9, 2);
lean_closure_set(v___f_3760_, 0, v___x_3759_);
lean_closure_set(v___f_3760_, 1, v_recArgPos_3745_);
v___x_3761_ = 0;
lean_inc_ref(v_value_3753_);
v___x_3762_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_value_3753_, v___f_3760_, v___x_3761_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v___f_3764_; lean_object* v___x_3765_; 
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
lean_inc(v_a_3763_);
lean_dec_ref(v___x_3762_);
v___f_3764_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__0));
v___x_3765_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_value_3753_, v___f_3764_, v___x_3761_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3767_; uint8_t v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
lean_inc(v_a_3766_);
lean_dec_ref(v___x_3765_);
v___x_3767_ = lean_box(0);
v___x_3768_ = 1;
v___x_3769_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3769_, 0, v___x_3767_);
lean_ctor_set(v___x_3769_, 1, v_a_3763_);
lean_ctor_set_uint8(v___x_3769_, sizeof(void*)*2, v___x_3768_);
v___x_3770_ = l_Lean_Elab_TerminationMeasure_delab(v_a_3766_, v_extraParams_3754_, v___x_3769_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_);
lean_dec(v_a_3766_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_object* v_a_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3776_; 
v_a_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3771_);
lean_dec_ref(v___x_3770_);
v___x_3772_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__5));
v___x_3773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
lean_ctor_set(v___x_3773_, 1, v_a_3771_);
v___x_3774_ = lean_box(0);
if (v_isShared_3757_ == 0)
{
lean_ctor_set(v___x_3756_, 5, v___x_3774_);
lean_ctor_set(v___x_3756_, 4, v___x_3774_);
lean_ctor_set(v___x_3756_, 3, v___x_3774_);
lean_ctor_set(v___x_3756_, 2, v___x_3774_);
lean_ctor_set(v___x_3756_, 1, v___x_3774_);
lean_ctor_set(v___x_3756_, 0, v___x_3773_);
v___x_3776_ = v___x_3756_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v___x_3773_);
lean_ctor_set(v_reuseFailAlloc_3780_, 1, v___x_3774_);
lean_ctor_set(v_reuseFailAlloc_3780_, 2, v___x_3774_);
lean_ctor_set(v_reuseFailAlloc_3780_, 3, v___x_3774_);
lean_ctor_set(v_reuseFailAlloc_3780_, 4, v___x_3774_);
lean_ctor_set(v_reuseFailAlloc_3780_, 5, v___x_3774_);
v___x_3776_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
lean_object* v___x_3777_; uint8_t v___x_3778_; lean_object* v___x_3779_; 
v___x_3777_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__6));
v___x_3778_ = 4;
v___x_3779_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_val_3758_, v___x_3776_, v___x_3774_, v___x_3777_, v___x_3774_, v___x_3778_, v_a_3748_, v_a_3749_);
return v___x_3779_;
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec(v_val_3758_);
lean_del_object(v___x_3756_);
v_a_3781_ = lean_ctor_get(v___x_3770_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3770_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3770_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3770_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
lean_dec(v_a_3763_);
lean_dec(v_val_3758_);
lean_del_object(v___x_3756_);
lean_dec(v_extraParams_3754_);
v_a_3789_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3765_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3765_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
lean_dec(v_val_3758_);
lean_del_object(v___x_3756_);
lean_dec(v_extraParams_3754_);
lean_dec_ref(v_value_3753_);
v_a_3797_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___x_3762_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3762_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
v___x_3802_ = v___x_3799_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3797_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
}
}
else
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
lean_dec(v_terminationBy_x3f_x3f_3752_);
lean_dec_ref(v_termination_3751_);
lean_dec(v_recArgPos_3745_);
lean_dec_ref(v_preDef_3744_);
v___x_3811_ = lean_box(0);
v___x_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3811_);
return v___x_3812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___boxed(lean_object* v_preDef_3813_, lean_object* v_recArgPos_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_Lean_Elab_Structural_reportTermMeasure(v_preDef_3813_, v_recArgPos_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
lean_dec(v_a_3818_);
lean_dec_ref(v_a_3817_);
lean_dec(v_a_3816_);
lean_dec_ref(v_a_3815_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(lean_object* v_as_3821_, size_t v_sz_3822_, size_t v_i_3823_, lean_object* v_b_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
uint8_t v___x_3830_; 
v___x_3830_ = lean_usize_dec_lt(v_i_3823_, v_sz_3822_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; 
v___x_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3831_, 0, v_b_3824_);
return v___x_3831_;
}
else
{
lean_object* v_a_3832_; lean_object* v_declName_3833_; lean_object* v___x_3834_; 
v_a_3832_ = lean_array_uget_borrowed(v_as_3821_, v_i_3823_);
v_declName_3833_ = lean_ctor_get(v_a_3832_, 3);
lean_inc(v_declName_3833_);
v___x_3834_ = l_Lean_enableRealizationsForConst(v_declName_3833_, v___y_3827_, v___y_3828_);
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v___x_3835_; 
lean_dec_ref(v___x_3834_);
lean_inc(v_declName_3833_);
v___x_3835_ = l_Lean_Meta_generateEagerEqns(v_declName_3833_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v___x_3836_; size_t v___x_3837_; size_t v___x_3838_; 
lean_dec_ref(v___x_3835_);
v___x_3836_ = lean_box(0);
v___x_3837_ = ((size_t)1ULL);
v___x_3838_ = lean_usize_add(v_i_3823_, v___x_3837_);
v_i_3823_ = v___x_3838_;
v_b_3824_ = v___x_3836_;
goto _start;
}
else
{
return v___x_3835_;
}
}
else
{
return v___x_3834_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg___boxed(lean_object* v_as_3840_, lean_object* v_sz_3841_, lean_object* v_i_3842_, lean_object* v_b_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_){
_start:
{
size_t v_sz_boxed_3849_; size_t v_i_boxed_3850_; lean_object* v_res_3851_; 
v_sz_boxed_3849_ = lean_unbox_usize(v_sz_3841_);
lean_dec(v_sz_3841_);
v_i_boxed_3850_ = lean_unbox_usize(v_i_3842_);
lean_dec(v_i_3842_);
v_res_3851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_as_3840_, v_sz_boxed_3849_, v_i_boxed_3850_, v_b_3843_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_);
lean_dec(v___y_3847_);
lean_dec_ref(v___y_3846_);
lean_dec(v___y_3845_);
lean_dec_ref(v___y_3844_);
lean_dec_ref(v_as_3840_);
return v_res_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__0(lean_object* v___x_3852_, lean_object* v_e_3853_){
_start:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3854_ = l_Lean_indentD(v_e_3853_);
v___x_3855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3852_);
lean_ctor_set(v___x_3855_, 1, v___x_3854_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1(lean_object* v_docCtx_3856_, lean_object* v_a_3857_, uint8_t v___x_3858_, lean_object* v___x_3859_, uint8_t v___x_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = l_Lean_Elab_addNonRec(v_docCtx_3856_, v_a_3857_, v___x_3858_, v___x_3859_, v___x_3860_, v___x_3858_, v___x_3860_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1___boxed(lean_object* v_docCtx_3869_, lean_object* v_a_3870_, lean_object* v___x_3871_, lean_object* v___x_3872_, lean_object* v___x_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
uint8_t v___x_8569__boxed_3881_; uint8_t v___x_8571__boxed_3882_; lean_object* v_res_3883_; 
v___x_8569__boxed_3881_ = lean_unbox(v___x_3871_);
v___x_8571__boxed_3882_ = lean_unbox(v___x_3873_);
v_res_3883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1(v_docCtx_3869_, v_a_3870_, v___x_8569__boxed_3881_, v___x_3872_, v___x_8571__boxed_3882_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
return v_res_3883_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1(void){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__0));
v___x_3886_ = l_Lean_stringToMessageData(v___x_3885_);
return v___x_3886_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2(void){
_start:
{
lean_object* v___x_3887_; lean_object* v___f_3888_; 
v___x_3887_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1);
v___f_3888_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__0), 2, 1);
lean_closure_set(v___f_3888_, 0, v___x_3887_);
return v___f_3888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(lean_object* v_names_3889_, lean_object* v_docCtx_3890_, lean_object* v_as_3891_, size_t v_i_3892_, size_t v_stop_3893_, lean_object* v_b_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_){
_start:
{
uint8_t v___x_3902_; 
v___x_3902_ = lean_usize_dec_eq(v_i_3892_, v_stop_3893_);
if (v___x_3902_ == 0)
{
lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3903_ = lean_array_uget_borrowed(v_as_3891_, v_i_3892_);
lean_inc(v___x_3903_);
v___x_3904_ = l_Lean_Elab_eraseRecAppSyntax(v___x_3903_, v___y_3899_, v___y_3900_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v___f_3906_; lean_object* v___x_3907_; uint8_t v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___f_3911_; lean_object* v___x_3912_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref(v___x_3904_);
v___f_3906_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2);
lean_inc_ref(v_names_3889_);
v___x_3907_ = lean_array_to_list(v_names_3889_);
v___x_3908_ = 1;
v___x_3909_ = lean_box(v___x_3902_);
v___x_3910_ = lean_box(v___x_3908_);
lean_inc(v___y_3896_);
lean_inc_ref(v___y_3895_);
lean_inc_ref(v_docCtx_3890_);
v___f_3911_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1___boxed), 12, 7);
lean_closure_set(v___f_3911_, 0, v_docCtx_3890_);
lean_closure_set(v___f_3911_, 1, v_a_3905_);
lean_closure_set(v___f_3911_, 2, v___x_3909_);
lean_closure_set(v___f_3911_, 3, v___x_3907_);
lean_closure_set(v___f_3911_, 4, v___x_3910_);
lean_closure_set(v___f_3911_, 5, v___y_3895_);
lean_closure_set(v___f_3911_, 6, v___y_3896_);
v___x_3912_ = l_Lean_Meta_mapErrorImp___redArg(v___f_3911_, v___f_3906_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
if (lean_obj_tag(v___x_3912_) == 0)
{
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; size_t v___x_3914_; size_t v___x_3915_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
lean_inc(v_a_3913_);
lean_dec_ref(v___x_3912_);
v___x_3914_ = ((size_t)1ULL);
v___x_3915_ = lean_usize_add(v_i_3892_, v___x_3914_);
v_i_3892_ = v___x_3915_;
v_b_3894_ = v_a_3913_;
goto _start;
}
else
{
lean_dec_ref(v_docCtx_3890_);
lean_dec_ref(v_names_3889_);
return v___x_3912_;
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
lean_dec_ref(v_docCtx_3890_);
lean_dec_ref(v_names_3889_);
v_a_3917_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3912_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3912_);
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
else
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
lean_dec_ref(v_docCtx_3890_);
lean_dec_ref(v_names_3889_);
v_a_3925_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3927_ = v___x_3904_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3904_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_a_3925_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
else
{
lean_object* v___x_3933_; 
lean_dec_ref(v_docCtx_3890_);
lean_dec_ref(v_names_3889_);
v___x_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3933_, 0, v_b_3894_);
return v___x_3933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___boxed(lean_object* v_names_3934_, lean_object* v_docCtx_3935_, lean_object* v_as_3936_, lean_object* v_i_3937_, lean_object* v_stop_3938_, lean_object* v_b_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_){
_start:
{
size_t v_i_boxed_3947_; size_t v_stop_boxed_3948_; lean_object* v_res_3949_; 
v_i_boxed_3947_ = lean_unbox_usize(v_i_3937_);
lean_dec(v_i_3937_);
v_stop_boxed_3948_ = lean_unbox_usize(v_stop_3938_);
lean_dec(v_stop_3938_);
v_res_3949_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_names_3934_, v_docCtx_3935_, v_as_3936_, v_i_boxed_3947_, v_stop_boxed_3948_, v_b_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_);
lean_dec(v___y_3945_);
lean_dec_ref(v___y_3944_);
lean_dec(v___y_3943_);
lean_dec_ref(v___y_3942_);
lean_dec(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec_ref(v_as_3936_);
return v_res_3949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(lean_object* v_docCtx_3950_, lean_object* v_a_3951_, lean_object* v_snd_3952_, lean_object* v_as_3953_, size_t v_sz_3954_, size_t v_i_3955_, lean_object* v_b_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
uint8_t v___x_3964_; 
v___x_3964_ = lean_usize_dec_lt(v_i_3955_, v_sz_3954_);
if (v___x_3964_ == 0)
{
lean_object* v___x_3965_; 
lean_dec_ref(v_snd_3952_);
lean_dec_ref(v_a_3951_);
lean_dec_ref(v_docCtx_3950_);
v___x_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3965_, 0, v_b_3956_);
return v___x_3965_;
}
else
{
lean_object* v_array_3966_; lean_object* v_start_3967_; lean_object* v_stop_3968_; uint8_t v___x_3969_; 
v_array_3966_ = lean_ctor_get(v_b_3956_, 0);
v_start_3967_ = lean_ctor_get(v_b_3956_, 1);
v_stop_3968_ = lean_ctor_get(v_b_3956_, 2);
v___x_3969_ = lean_nat_dec_lt(v_start_3967_, v_stop_3968_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; 
lean_dec_ref(v_snd_3952_);
lean_dec_ref(v_a_3951_);
lean_dec_ref(v_docCtx_3950_);
v___x_3970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3970_, 0, v_b_3956_);
return v___x_3970_;
}
else
{
lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_4037_; 
lean_inc(v_stop_3968_);
lean_inc(v_start_3967_);
lean_inc_ref(v_array_3966_);
v_isSharedCheck_4037_ = !lean_is_exclusive(v_b_3956_);
if (v_isSharedCheck_4037_ == 0)
{
lean_object* v_unused_4038_; lean_object* v_unused_4039_; lean_object* v_unused_4040_; 
v_unused_4038_ = lean_ctor_get(v_b_3956_, 2);
lean_dec(v_unused_4038_);
v_unused_4039_ = lean_ctor_get(v_b_3956_, 1);
lean_dec(v_unused_4039_);
v_unused_4040_ = lean_ctor_get(v_b_3956_, 0);
lean_dec(v_unused_4040_);
v___x_3972_ = v_b_3956_;
v_isShared_3973_ = v_isSharedCheck_4037_;
goto v_resetjp_3971_;
}
else
{
lean_dec(v_b_3956_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_4037_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v_a_3974_; uint8_t v_kind_3975_; lean_object* v_type_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3981_; 
v_a_3974_ = lean_array_uget_borrowed(v_as_3953_, v_i_3955_);
v_kind_3975_ = lean_ctor_get_uint8(v_a_3974_, sizeof(void*)*9);
v_type_3976_ = lean_ctor_get(v_a_3974_, 6);
v___x_3977_ = lean_array_fget(v_array_3966_, v_start_3967_);
v___x_3978_ = lean_unsigned_to_nat(1u);
v___x_3979_ = lean_nat_add(v_start_3967_, v___x_3978_);
lean_dec(v_start_3967_);
if (v_isShared_3973_ == 0)
{
lean_ctor_set(v___x_3972_, 1, v___x_3979_);
v___x_3981_ = v___x_3972_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_array_3966_);
lean_ctor_set(v_reuseFailAlloc_4036_, 1, v___x_3979_);
lean_ctor_set(v_reuseFailAlloc_4036_, 2, v_stop_3968_);
v___x_3981_ = v_reuseFailAlloc_4036_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
lean_object* v_preDef_3983_; lean_object* v___y_3984_; lean_object* v___y_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; uint8_t v___x_4002_; 
v___x_4002_ = l_Lean_Elab_DefKind_isTheorem(v_kind_3975_);
if (v___x_4002_ == 0)
{
lean_object* v___x_4003_; 
lean_inc_ref(v_type_3976_);
v___x_4003_ = l_Lean_Meta_isProp(v_type_3976_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; uint8_t v___x_4005_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc(v_a_4004_);
lean_dec_ref(v___x_4003_);
v___x_4005_ = lean_unbox(v_a_4004_);
lean_dec(v_a_4004_);
if (v___x_4005_ == 0)
{
lean_object* v___x_4006_; 
lean_inc(v_a_3974_);
v___x_4006_ = l_Lean_Elab_abstractNestedProofs(v_a_3974_, v___x_3969_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; size_t v_sz_4008_; size_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_a_4007_);
lean_dec_ref(v___x_4006_);
v_sz_4008_ = lean_array_size(v_a_3951_);
v___x_4009_ = ((size_t)0ULL);
lean_inc_ref(v_a_3951_);
v___x_4010_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_4008_, v___x_4009_, v_a_3951_);
lean_inc_ref(v_snd_3952_);
lean_inc(v___x_3977_);
lean_inc(v_a_4007_);
v___x_4011_ = l_Lean_Elab_Structural_registerEqnsInfo(v_a_4007_, v___x_4010_, v___x_3977_, v_snd_3952_, v___y_3961_, v___y_3962_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_dec_ref(v___x_4011_);
v_preDef_3983_ = v_a_4007_;
v___y_3984_ = v___y_3957_;
v___y_3985_ = v___y_3958_;
v___y_3986_ = v___y_3959_;
v___y_3987_ = v___y_3960_;
v___y_3988_ = v___y_3961_;
v___y_3989_ = v___y_3962_;
goto v___jp_3982_;
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4019_; 
lean_dec(v_a_4007_);
lean_dec_ref(v___x_3981_);
lean_dec(v___x_3977_);
lean_dec_ref(v_snd_3952_);
lean_dec_ref(v_a_3951_);
lean_dec_ref(v_docCtx_3950_);
v_a_4012_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4014_ = v___x_4011_;
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_4011_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4017_; 
if (v_isShared_4015_ == 0)
{
v___x_4017_ = v___x_4014_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4012_);
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
lean_dec_ref(v___x_3981_);
lean_dec(v___x_3977_);
lean_dec_ref(v_snd_3952_);
lean_dec_ref(v_a_3951_);
lean_dec_ref(v_docCtx_3950_);
v_a_4020_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4022_ = v___x_4006_;
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_4006_);
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
else
{
lean_inc(v_a_3974_);
v_preDef_3983_ = v_a_3974_;
v___y_3984_ = v___y_3957_;
v___y_3985_ = v___y_3958_;
v___y_3986_ = v___y_3959_;
v___y_3987_ = v___y_3960_;
v___y_3988_ = v___y_3961_;
v___y_3989_ = v___y_3962_;
goto v___jp_3982_;
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
lean_dec_ref(v___x_3981_);
lean_dec(v___x_3977_);
lean_dec_ref(v_snd_3952_);
lean_dec_ref(v_a_3951_);
lean_dec_ref(v_docCtx_3950_);
v_a_4028_ = lean_ctor_get(v___x_4003_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_4003_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_4003_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
else
{
lean_inc(v_a_3974_);
v_preDef_3983_ = v_a_3974_;
v___y_3984_ = v___y_3957_;
v___y_3985_ = v___y_3958_;
v___y_3986_ = v___y_3959_;
v___y_3987_ = v___y_3960_;
v___y_3988_ = v___y_3961_;
v___y_3989_ = v___y_3962_;
goto v___jp_3982_;
}
v___jp_3982_:
{
lean_object* v___x_3990_; 
lean_inc_ref(v_docCtx_3950_);
v___x_3990_ = l_Lean_Elab_Structural_addSmartUnfoldingDef(v_docCtx_3950_, v_preDef_3983_, v___x_3977_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_);
if (lean_obj_tag(v___x_3990_) == 0)
{
size_t v___x_3991_; size_t v___x_3992_; 
lean_dec_ref(v___x_3990_);
v___x_3991_ = ((size_t)1ULL);
v___x_3992_ = lean_usize_add(v_i_3955_, v___x_3991_);
v_i_3955_ = v___x_3992_;
v_b_3956_ = v___x_3981_;
goto _start;
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec_ref(v___x_3981_);
lean_dec_ref(v_snd_3952_);
lean_dec_ref(v_a_3951_);
lean_dec_ref(v_docCtx_3950_);
v_a_3994_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3990_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3990_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1___boxed(lean_object* v_docCtx_4041_, lean_object* v_a_4042_, lean_object* v_snd_4043_, lean_object* v_as_4044_, lean_object* v_sz_4045_, lean_object* v_i_4046_, lean_object* v_b_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_){
_start:
{
size_t v_sz_boxed_4055_; size_t v_i_boxed_4056_; lean_object* v_res_4057_; 
v_sz_boxed_4055_ = lean_unbox_usize(v_sz_4045_);
lean_dec(v_sz_4045_);
v_i_boxed_4056_ = lean_unbox_usize(v_i_4046_);
lean_dec(v_i_4046_);
v_res_4057_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(v_docCtx_4041_, v_a_4042_, v_snd_4043_, v_as_4044_, v_sz_boxed_4055_, v_i_boxed_4056_, v_b_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
lean_dec(v___y_4053_);
lean_dec_ref(v___y_4052_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec_ref(v_as_4044_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(size_t v_sz_4058_, size_t v_i_4059_, lean_object* v_bs_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
uint8_t v___x_4064_; 
v___x_4064_ = lean_usize_dec_lt(v_i_4059_, v_sz_4058_);
if (v___x_4064_ == 0)
{
lean_object* v___x_4065_; 
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v_bs_4060_);
return v___x_4065_;
}
else
{
lean_object* v_v_4066_; lean_object* v___x_4067_; 
v_v_4066_ = lean_array_uget_borrowed(v_bs_4060_, v_i_4059_);
lean_inc(v_v_4066_);
v___x_4067_ = l_Lean_Elab_eraseRecAppSyntax(v_v_4066_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4069_; lean_object* v_bs_x27_4070_; size_t v___x_4071_; size_t v___x_4072_; lean_object* v___x_4073_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref(v___x_4067_);
v___x_4069_ = lean_unsigned_to_nat(0u);
v_bs_x27_4070_ = lean_array_uset(v_bs_4060_, v_i_4059_, v___x_4069_);
v___x_4071_ = ((size_t)1ULL);
v___x_4072_ = lean_usize_add(v_i_4059_, v___x_4071_);
v___x_4073_ = lean_array_uset(v_bs_x27_4070_, v_i_4059_, v_a_4068_);
v_i_4059_ = v___x_4072_;
v_bs_4060_ = v___x_4073_;
goto _start;
}
else
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4082_; 
lean_dec_ref(v_bs_4060_);
v_a_4075_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4077_ = v___x_4067_;
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_4067_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg___boxed(lean_object* v_sz_4083_, lean_object* v_i_4084_, lean_object* v_bs_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
size_t v_sz_boxed_4089_; size_t v_i_boxed_4090_; lean_object* v_res_4091_; 
v_sz_boxed_4089_ = lean_unbox_usize(v_sz_4083_);
lean_dec(v_sz_4083_);
v_i_boxed_4090_ = lean_unbox_usize(v_i_4084_);
lean_dec(v_i_4084_);
v_res_4091_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_boxed_4089_, v_i_boxed_4090_, v_bs_4085_, v___y_4086_, v___y_4087_);
lean_dec(v___y_4087_);
lean_dec_ref(v___y_4086_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(lean_object* v_as_4092_, size_t v_sz_4093_, size_t v_i_4094_, lean_object* v_b_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
uint8_t v___x_4101_; 
v___x_4101_ = lean_usize_dec_lt(v_i_4094_, v_sz_4093_);
if (v___x_4101_ == 0)
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4102_, 0, v_b_4095_);
return v___x_4102_;
}
else
{
lean_object* v_array_4103_; lean_object* v_start_4104_; lean_object* v_stop_4105_; uint8_t v___x_4106_; 
v_array_4103_ = lean_ctor_get(v_b_4095_, 0);
v_start_4104_ = lean_ctor_get(v_b_4095_, 1);
v_stop_4105_ = lean_ctor_get(v_b_4095_, 2);
v___x_4106_ = lean_nat_dec_lt(v_start_4104_, v_stop_4105_);
if (v___x_4106_ == 0)
{
lean_object* v___x_4107_; 
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v_b_4095_);
return v___x_4107_;
}
else
{
lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4130_; 
lean_inc(v_stop_4105_);
lean_inc(v_start_4104_);
lean_inc_ref(v_array_4103_);
v_isSharedCheck_4130_ = !lean_is_exclusive(v_b_4095_);
if (v_isSharedCheck_4130_ == 0)
{
lean_object* v_unused_4131_; lean_object* v_unused_4132_; lean_object* v_unused_4133_; 
v_unused_4131_ = lean_ctor_get(v_b_4095_, 2);
lean_dec(v_unused_4131_);
v_unused_4132_ = lean_ctor_get(v_b_4095_, 1);
lean_dec(v_unused_4132_);
v_unused_4133_ = lean_ctor_get(v_b_4095_, 0);
lean_dec(v_unused_4133_);
v___x_4109_ = v_b_4095_;
v_isShared_4110_ = v_isSharedCheck_4130_;
goto v_resetjp_4108_;
}
else
{
lean_dec(v_b_4095_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4130_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v_a_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v_a_4111_ = lean_array_uget_borrowed(v_as_4092_, v_i_4094_);
v___x_4112_ = lean_array_fget_borrowed(v_array_4103_, v_start_4104_);
lean_inc(v_a_4111_);
lean_inc(v___x_4112_);
v___x_4113_ = l_Lean_Elab_Structural_reportTermMeasure(v___x_4112_, v_a_4111_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_);
if (lean_obj_tag(v___x_4113_) == 0)
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4117_; 
lean_dec_ref(v___x_4113_);
v___x_4114_ = lean_unsigned_to_nat(1u);
v___x_4115_ = lean_nat_add(v_start_4104_, v___x_4114_);
lean_dec(v_start_4104_);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 1, v___x_4115_);
v___x_4117_ = v___x_4109_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v_array_4103_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4115_);
lean_ctor_set(v_reuseFailAlloc_4121_, 2, v_stop_4105_);
v___x_4117_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
size_t v___x_4118_; size_t v___x_4119_; 
v___x_4118_ = ((size_t)1ULL);
v___x_4119_ = lean_usize_add(v_i_4094_, v___x_4118_);
v_i_4094_ = v___x_4119_;
v_b_4095_ = v___x_4117_;
goto _start;
}
}
else
{
lean_object* v_a_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4129_; 
lean_del_object(v___x_4109_);
lean_dec(v_stop_4105_);
lean_dec(v_start_4104_);
lean_dec_ref(v_array_4103_);
v_a_4122_ = lean_ctor_get(v___x_4113_, 0);
v_isSharedCheck_4129_ = !lean_is_exclusive(v___x_4113_);
if (v_isSharedCheck_4129_ == 0)
{
v___x_4124_ = v___x_4113_;
v_isShared_4125_ = v_isSharedCheck_4129_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_a_4122_);
lean_dec(v___x_4113_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4129_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
lean_object* v___x_4127_; 
if (v_isShared_4125_ == 0)
{
v___x_4127_ = v___x_4124_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v_a_4122_);
v___x_4127_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
return v___x_4127_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg___boxed(lean_object* v_as_4134_, lean_object* v_sz_4135_, lean_object* v_i_4136_, lean_object* v_b_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_){
_start:
{
size_t v_sz_boxed_4143_; size_t v_i_boxed_4144_; lean_object* v_res_4145_; 
v_sz_boxed_4143_ = lean_unbox_usize(v_sz_4135_);
lean_dec(v_sz_4135_);
v_i_boxed_4144_ = lean_unbox_usize(v_i_4136_);
lean_dec(v_i_4136_);
v_res_4145_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_as_4134_, v_sz_boxed_4143_, v_i_boxed_4144_, v_b_4137_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_);
lean_dec(v___y_4141_);
lean_dec_ref(v___y_4140_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec_ref(v_as_4134_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object* v_docCtx_4146_, lean_object* v_preDefs_4147_, lean_object* v_termMeasure_x3fs_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_){
_start:
{
size_t v_sz_4156_; size_t v___x_4157_; lean_object* v_names_4158_; lean_object* v___x_4159_; 
v_sz_4156_ = lean_array_size(v_preDefs_4147_);
v___x_4157_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_4147_);
v_names_4158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_4156_, v___x_4157_, v_preDefs_4147_);
lean_inc_ref(v_preDefs_4147_);
v___x_4159_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(v_preDefs_4147_, v_termMeasure_x3fs_4148_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v_a_4160_; lean_object* v_snd_4161_; lean_object* v_fst_4162_; lean_object* v_fst_4163_; lean_object* v_snd_4164_; lean_object* v___y_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; size_t v_sz_4199_; lean_object* v___x_4200_; 
v_a_4160_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_a_4160_);
lean_dec_ref(v___x_4159_);
v_snd_4161_ = lean_ctor_get(v_a_4160_, 1);
lean_inc(v_snd_4161_);
v_fst_4162_ = lean_ctor_get(v_a_4160_, 0);
lean_inc(v_fst_4162_);
lean_dec(v_a_4160_);
v_fst_4163_ = lean_ctor_get(v_snd_4161_, 0);
lean_inc(v_fst_4163_);
v_snd_4164_ = lean_ctor_get(v_snd_4161_, 1);
lean_inc(v_snd_4164_);
lean_dec(v_snd_4161_);
v___x_4196_ = lean_unsigned_to_nat(0u);
v___x_4197_ = lean_array_get_size(v_preDefs_4147_);
lean_inc_ref(v_preDefs_4147_);
v___x_4198_ = l_Array_toSubarray___redArg(v_preDefs_4147_, v___x_4196_, v___x_4197_);
v_sz_4199_ = lean_array_size(v_fst_4162_);
v___x_4200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_fst_4162_, v_sz_4199_, v___x_4157_, v___x_4198_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v___x_4201_; uint8_t v___x_4202_; 
lean_dec_ref(v___x_4200_);
v___x_4201_ = lean_array_get_size(v_fst_4163_);
v___x_4202_ = lean_nat_dec_lt(v___x_4196_, v___x_4201_);
if (v___x_4202_ == 0)
{
lean_dec_ref(v_names_4158_);
goto v___jp_4165_;
}
else
{
lean_object* v___x_4203_; uint8_t v___x_4204_; 
v___x_4203_ = lean_box(0);
v___x_4204_ = lean_nat_dec_le(v___x_4201_, v___x_4201_);
if (v___x_4204_ == 0)
{
if (v___x_4202_ == 0)
{
lean_dec_ref(v_names_4158_);
goto v___jp_4165_;
}
else
{
size_t v___x_4205_; lean_object* v___x_4206_; 
v___x_4205_ = lean_usize_of_nat(v___x_4201_);
lean_inc_ref(v_docCtx_4146_);
v___x_4206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_names_4158_, v_docCtx_4146_, v_fst_4163_, v___x_4157_, v___x_4205_, v___x_4203_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
v___y_4195_ = v___x_4206_;
goto v___jp_4194_;
}
}
else
{
size_t v___x_4207_; lean_object* v___x_4208_; 
v___x_4207_ = lean_usize_of_nat(v___x_4201_);
lean_inc_ref(v_docCtx_4146_);
v___x_4208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_names_4158_, v_docCtx_4146_, v_fst_4163_, v___x_4157_, v___x_4207_, v___x_4203_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
v___y_4195_ = v___x_4208_;
goto v___jp_4194_;
}
}
}
else
{
lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
lean_dec(v_snd_4164_);
lean_dec(v_fst_4163_);
lean_dec(v_fst_4162_);
lean_dec_ref(v_names_4158_);
lean_dec_ref(v_preDefs_4147_);
lean_dec_ref(v_docCtx_4146_);
v_a_4209_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4211_ = v___x_4200_;
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_a_4209_);
lean_dec(v___x_4200_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4214_; 
if (v_isShared_4212_ == 0)
{
v___x_4214_ = v___x_4211_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4209_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
v___jp_4165_:
{
lean_object* v___x_4166_; 
v___x_4166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_4156_, v___x_4157_, v_preDefs_4147_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4168_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref(v___x_4166_);
lean_inc(v_a_4167_);
lean_inc_ref(v_docCtx_4146_);
v___x_4168_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_4146_, v_a_4167_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; size_t v_sz_4172_; lean_object* v___x_4173_; 
lean_dec_ref(v___x_4168_);
v___x_4169_ = lean_unsigned_to_nat(0u);
v___x_4170_ = lean_array_get_size(v_fst_4162_);
v___x_4171_ = l_Array_toSubarray___redArg(v_fst_4162_, v___x_4169_, v___x_4170_);
v_sz_4172_ = lean_array_size(v_a_4167_);
lean_inc(v_a_4167_);
v___x_4173_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(v_docCtx_4146_, v_a_4167_, v_snd_4164_, v_a_4167_, v_sz_4172_, v___x_4157_, v___x_4171_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v___x_4174_; lean_object* v___x_4175_; 
lean_dec_ref(v___x_4173_);
v___x_4174_ = lean_box(0);
v___x_4175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_a_4167_, v_sz_4172_, v___x_4157_, v___x_4174_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
lean_dec(v_a_4167_);
if (lean_obj_tag(v___x_4175_) == 0)
{
uint8_t v___x_4176_; lean_object* v___x_4177_; 
lean_dec_ref(v___x_4175_);
v___x_4176_ = 1;
v___x_4177_ = l_Lean_Elab_applyAttributesOf(v_fst_4163_, v___x_4176_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
lean_dec(v_fst_4163_);
return v___x_4177_;
}
else
{
lean_dec(v_fst_4163_);
return v___x_4175_;
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4185_; 
lean_dec(v_a_4167_);
lean_dec(v_fst_4163_);
v_a_4178_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4180_ = v___x_4173_;
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4173_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4183_; 
if (v_isShared_4181_ == 0)
{
v___x_4183_ = v___x_4180_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4178_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
}
}
else
{
lean_dec(v_a_4167_);
lean_dec(v_snd_4164_);
lean_dec(v_fst_4163_);
lean_dec(v_fst_4162_);
lean_dec_ref(v_docCtx_4146_);
return v___x_4168_;
}
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
lean_dec(v_snd_4164_);
lean_dec(v_fst_4163_);
lean_dec(v_fst_4162_);
lean_dec_ref(v_docCtx_4146_);
v_a_4186_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4166_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4166_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
v___jp_4194_:
{
if (lean_obj_tag(v___y_4195_) == 0)
{
lean_dec_ref(v___y_4195_);
goto v___jp_4165_;
}
else
{
lean_dec(v_snd_4164_);
lean_dec(v_fst_4163_);
lean_dec(v_fst_4162_);
lean_dec_ref(v_preDefs_4147_);
lean_dec_ref(v_docCtx_4146_);
return v___y_4195_;
}
}
}
else
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4224_; 
lean_dec_ref(v_names_4158_);
lean_dec_ref(v_preDefs_4147_);
lean_dec_ref(v_docCtx_4146_);
v_a_4217_ = lean_ctor_get(v___x_4159_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4219_ = v___x_4159_;
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v___x_4159_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_a_4217_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___boxed(lean_object* v_docCtx_4225_, lean_object* v_preDefs_4226_, lean_object* v_termMeasure_x3fs_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Lean_Elab_Structural_structuralRecursion(v_docCtx_4225_, v_preDefs_4226_, v_termMeasure_x3fs_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_, v_a_4232_, v_a_4233_);
lean_dec(v_a_4233_);
lean_dec_ref(v_a_4232_);
lean_dec(v_a_4231_);
lean_dec_ref(v_a_4230_);
lean_dec(v_a_4229_);
lean_dec_ref(v_a_4228_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(size_t v_sz_4236_, size_t v_i_4237_, lean_object* v_bs_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_){
_start:
{
lean_object* v___x_4246_; 
v___x_4246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_4236_, v_i_4237_, v_bs_4238_, v___y_4243_, v___y_4244_);
return v___x_4246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___boxed(lean_object* v_sz_4247_, lean_object* v_i_4248_, lean_object* v_bs_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_){
_start:
{
size_t v_sz_boxed_4257_; size_t v_i_boxed_4258_; lean_object* v_res_4259_; 
v_sz_boxed_4257_ = lean_unbox_usize(v_sz_4247_);
lean_dec(v_sz_4247_);
v_i_boxed_4258_ = lean_unbox_usize(v_i_4248_);
lean_dec(v_i_4248_);
v_res_4259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(v_sz_boxed_4257_, v_i_boxed_4258_, v_bs_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(lean_object* v_as_4260_, size_t v_sz_4261_, size_t v_i_4262_, lean_object* v_b_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v___x_4271_; 
v___x_4271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_as_4260_, v_sz_4261_, v_i_4262_, v_b_4263_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___boxed(lean_object* v_as_4272_, lean_object* v_sz_4273_, lean_object* v_i_4274_, lean_object* v_b_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_){
_start:
{
size_t v_sz_boxed_4283_; size_t v_i_boxed_4284_; lean_object* v_res_4285_; 
v_sz_boxed_4283_ = lean_unbox_usize(v_sz_4273_);
lean_dec(v_sz_4273_);
v_i_boxed_4284_ = lean_unbox_usize(v_i_4274_);
lean_dec(v_i_4274_);
v_res_4285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(v_as_4272_, v_sz_boxed_4283_, v_i_boxed_4284_, v_b_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
lean_dec(v___y_4281_);
lean_dec_ref(v___y_4280_);
lean_dec(v___y_4279_);
lean_dec_ref(v___y_4278_);
lean_dec(v___y_4277_);
lean_dec_ref(v___y_4276_);
lean_dec_ref(v_as_4272_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(lean_object* v_as_4286_, size_t v_sz_4287_, size_t v_i_4288_, lean_object* v_b_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_){
_start:
{
lean_object* v___x_4297_; 
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_as_4286_, v_sz_4287_, v_i_4288_, v_b_4289_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_);
return v___x_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___boxed(lean_object* v_as_4298_, lean_object* v_sz_4299_, lean_object* v_i_4300_, lean_object* v_b_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
size_t v_sz_boxed_4309_; size_t v_i_boxed_4310_; lean_object* v_res_4311_; 
v_sz_boxed_4309_ = lean_unbox_usize(v_sz_4299_);
lean_dec(v_sz_4299_);
v_i_boxed_4310_ = lean_unbox_usize(v_i_4300_);
lean_dec(v_i_4300_);
v_res_4311_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(v_as_4298_, v_sz_boxed_4309_, v_i_boxed_4310_, v_b_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
lean_dec_ref(v_as_4298_);
return v_res_4311_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_IndPred(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_IndPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndPred(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_IndPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_Main(builtin);
}
#ifdef __cplusplus
}
#endif
